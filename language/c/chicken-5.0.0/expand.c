/* Generated from expand.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: expand.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file expand.c -no-module-registration
   unit: expand
   uses: internal library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[375];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,108,111,111,107,117,112,32,115,101,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,109,97,99,114,111,45,97,108,105,97,115,32,118,97,114,32,115,101,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,51,56,52,32,105,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,8),40,119,97,108,107,32,120,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,115,116,114,105,112,45,115,121,110,116,97,120,32,101,120,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,52,54,57,32,103,52,56,49,32,103,52,56,50,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,28),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,51,50,32,103,52,51,57,32,103,52,52,48,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,52,48,54,32,103,52,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,101,120,116,101,110,100,45,115,101,32,115,101,32,118,97,114,115,32,46,32,114,101,115,116,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,8),40,103,53,49,54,32,97,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,115,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,49,32,115,121,109,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,103,108,111,98,97,108,105,122,101,32,115,121,109,32,115,101,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,101,110,115,117,114,101,45,116,114,97,110,115,102,111,114,109,101,114,32,116,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,103,53,54,49,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,101,120,116,101,110,100,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,110,97,109,101,32,115,101,32,116,114,97,110,115,102,111,114,109,101,114,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,25),40,35,35,115,121,115,35,109,97,99,114,111,63,32,115,121,109,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,117,110,100,101,102,105,110,101,45,109,97,99,114,111,33,32,110,97,109,101,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,9),40,99,111,112,121,32,112,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,52,51,52,50,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,10),40,97,52,51,51,54,32,101,120,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,14),40,102,95,52,52,55,56,32,105,110,112,117,116,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,52,52,56,51,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,52,52,56,56,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,52,52,57,52,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,52,52,52,51,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,52,53,48,56,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,14),40,97,52,53,48,50,32,46,32,97,114,103,115,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,52,52,51,55,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,9),40,97,52,51,51,48,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,37),40,99,97,108,108,45,104,97,110,100,108,101,114,32,110,97,109,101,32,104,97,110,100,108,101,114,32,101,120,112,32,115,101,32,99,115,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,22),40,101,120,112,97,110,100,32,104,101,97,100,32,101,120,112,32,109,100,101,102,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,48,57,32,103,55,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,56,50,32,103,54,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,9),40,103,55,52,50,32,99,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,101,120,112,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,101,120,112,97,110,100,45,48,32,101,120,112,32,100,115,101,32,99,115,63,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,101,120,112,97,110,115,105,111,110,45,114,101,115,117,108,116,45,104,111,111,107,32,105,110,112,117,116,32,111,117,116,112,117,116,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,52,56,51,55,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,20),40,97,52,56,52,51,32,101,120,112,50,55,55,57,32,109,55,56,49,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,101,120,112,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,101,120,112,97,110,100,32,101,120,112,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,108,105,115,116,41,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,63,32,108,108,105,115,116,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,9),40,101,114,114,32,109,115,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,8),40,103,56,52,53,32,107,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,51,57,32,103,56,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,29),40,108,111,111,112,32,109,111,100,101,32,114,101,113,32,111,112,116,32,107,101,121,32,108,108,105,115,116,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,55),40,35,35,115,121,115,35,101,120,112,97,110,100,45,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,32,108,108,105,115,116,48,32,98,111,100,121,32,101,114,114,104,32,115,101,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,55,54,32,103,57,56,56,32,103,57,56,57,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,52,55,32,103,57,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,22),40,97,53,53,52,49,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,101,120,112,97,110,100,45,109,117,108,116,105,112,108,101,45,118,97,108,117,101,115,45,97,115,115,105,103,110,109,101,110,116,32,102,111,114,109,97,108,115,32,101,120,112,114,41,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,9),40,99,111,109,112,32,105,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,50,32,98,111,100,121,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,111,100,121,32,101,120,112,115,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,49,53,53,32,103,49,49,54,55,32,103,49,49,54,56,32,103,49,49,54,57,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,48,55,32,103,49,49,49,57,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,13),40,97,54,50,51,52,32,97,32,95,32,95,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,23),40,102,111,108,100,108,49,49,51,48,32,103,49,49,51,49,32,103,49,49,50,57,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,27),40,102,105,110,105,32,118,97,114,115,32,118,97,108,115,32,109,118,97,114,115,32,98,111,100,121,41,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,49,53,32,103,49,50,50,55,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,111,100,121,32,100,101,102,115,32,100,111,110,101,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,34),40,102,105,110,105,47,115,121,110,116,97,120,32,118,97,114,115,32,118,97,108,115,32,109,118,97,114,115,32,98,111,100,121,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,50,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,98,111,100,121,32,118,97,114,115,32,118,97,108,115,32,109,118,97,114,115,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,13),40,101,120,112,97,110,100,32,98,111,100,121,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,99,97,110,111,110,105,99,97,108,105,122,101,45,98,111,100,121,32,98,111,100,121,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,7),40,103,49,51,48,53,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,11),40,109,119,97,108,107,32,120,32,112,41,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,109,97,116,99,104,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,32,112,97,116,32,118,97,114,115,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,104,101,97,100,32,98,111,100,121,41};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,101,120,112,97,110,100,45,99,117,114,114,105,101,100,45,100,101,102,105,110,101,32,104,101,97,100,32,98,111,100,121,32,115,101,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,115,121,110,116,97,120,45,101,114,114,111,114,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,12),40,111,117,116,115,116,114,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,100,101,102,115,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,99,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,115,121,110,116,97,120,45,101,114,114,111,114,47,99,111,110,116,101,120,116,32,109,115,103,32,97,114,103,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,7),40,103,49,51,57,52,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,103,101,116,45,108,105,110,101,45,110,117,109,98,101,114,32,115,101,120,112,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,17),40,116,101,115,116,32,120,32,112,114,101,100,32,109,115,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,9),40,101,114,114,32,109,115,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,120,41};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,16),40,108,97,109,98,100,97,45,108,105,115,116,63,32,120,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,16),40,112,114,111,112,101,114,45,108,105,115,116,63,32,120,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,52,55,49,32,120,32,110,41};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,9),40,97,55,52,55,52,32,121,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,10),40,119,97,108,107,32,120,32,112,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,99,104,101,99,107,45,115,121,110,116,97,120,32,105,100,32,101,120,112,32,112,97,116,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,12),40,114,101,110,97,109,101,32,115,121,109,41,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,53,52,49,32,105,32,102,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,7),40,103,49,53,56,50,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,7),40,103,49,53,57,49,41,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,15),40,99,111,109,112,97,114,101,32,115,49,32,115,50,41,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,16),40,97,115,115,113,45,114,101,118,101,114,115,101,32,108,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,19),40,109,105,114,114,111,114,45,114,101,110,97,109,101,32,115,121,109,41,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,19),40,97,55,53,57,48,32,102,111,114,109,32,115,101,32,100,115,101,41,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,66),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,109,97,107,101,45,101,114,47,105,114,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,32,101,120,112,108,105,99,105,116,45,114,101,110,97,109,105,110,103,63,41,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,101,114,45,109,97,99,114,111,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,41,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,105,114,45,109,97,99,114,111,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,59),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,46,115,121,110,116,97,120,45,114,117,108,101,115,35,115,121,110,116,97,120,45,114,117,108,101,115,45,109,105,115,109,97,116,99,104,32,105,110,112,117,116,41,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,101,110,32,105,110,112,117,116,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,46,115,121,110,116,97,120,45,114,117,108,101,115,35,100,114,111,112,45,114,105,103,104,116,32,105,110,112,117,116,32,116,101,109,112,41,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,101,110,32,105,110,112,117,116,41};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,46,115,121,110,116,97,120,45,114,117,108,101,115,35,116,97,107,101,45,114,105,103,104,116,32,105,110,112,117,116,32,116,101,109,112,41,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,10),40,102,95,56,51,54,50,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,54,53,32,103,50,54,55,55,41,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,14),40,102,95,56,51,54,56,32,114,117,108,101,115,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,9),40,97,56,52,57,57,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,13),40,102,95,56,52,54,50,32,114,117,108,101,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,36),40,102,95,56,53,50,56,32,105,110,112,117,116,32,112,97,116,116,101,114,110,32,115,101,101,110,45,115,101,103,109,101,110,116,63,41,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,22),40,102,95,56,55,48,57,32,105,110,112,117,116,32,112,97,116,116,101,114,110,41,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,9),40,97,56,56,57,52,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,41),40,102,95,56,56,51,54,32,112,97,116,116,101,114,110,32,112,97,116,104,32,109,97,112,105,116,32,115,101,101,110,45,115,101,103,109,101,110,116,63,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,50,55,57,57,32,100,32,103,101,110,41,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,25),40,102,95,56,57,55,54,32,116,101,109,112,108,97,116,101,32,100,105,109,32,101,110,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,39),40,102,95,57,49,54,51,32,112,97,116,116,101,114,110,32,100,105,109,32,118,97,114,115,32,115,101,101,110,45,115,101,103,109,101,110,116,63,41,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,30),40,102,95,57,50,51,57,32,116,101,109,112,108,97,116,101,32,100,105,109,32,101,110,118,32,102,114,101,101,41,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,24),40,102,95,57,51,50,54,32,112,32,115,101,101,110,45,115,101,103,109,101,110,116,63,41};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,16),40,102,95,57,51,53,52,32,112,97,116,116,101,114,110,41};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,16),40,102,95,57,51,55,56,32,112,97,116,116,101,114,110,41};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,97,116,116,101,114,110,41,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,16),40,102,95,57,51,57,54,32,112,97,116,116,101,114,110,41};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,15),40,97,57,52,53,53,32,101,120,112,32,114,32,99,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,16),40,97,57,52,57,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,10),40,119,97,108,107,32,120,32,110,41,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,11),40,119,97,108,107,49,32,120,32,110,41,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,11),40,103,50,53,50,57,32,101,110,118,41,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,11),40,103,50,53,51,54,32,101,110,118,41,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,12),40,115,105,109,112,108,105,102,121,32,120,41,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,16),40,97,57,53,50,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,52,49,32,103,50,52,53,51,41,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,48,55,32,103,50,52,49,57,41,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,16),40,97,57,56,49,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,11),40,101,120,112,97,110,100,32,98,115,41,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,17),40,97,49,48,48,49,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,7),40,103,50,51,52,56,41,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,52,50,32,103,50,51,53,52,41,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,22),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,32,101,108,115,101,63,41,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,17),40,97,49,48,48,54,52,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,22),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,32,101,108,115,101,63,41,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,17),40,97,49,48,51,48,48,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,17),40,97,49,48,54,56,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,17),40,97,49,48,55,51,53,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,14),40,97,49,48,55,55,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,14),40,97,49,48,56,49,54,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,14),40,97,49,48,56,51,56,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,14),40,97,49,48,56,54,48,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,14),40,97,49,48,56,56,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,51,52,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,102,111,114,109,41,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,14),40,97,49,48,57,56,49,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,14),40,97,49,49,49,48,56,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,14),40,97,49,49,49,50,53,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,14),40,97,49,49,49,52,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,14),40,97,49,49,49,53,57,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,14),40,97,49,49,49,55,54,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,14),40,97,49,49,49,57,57,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,11),40,103,49,57,57,53,32,97,114,103,41,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,57,56,57,32,103,50,48,48,49,41,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,14),40,97,49,49,50,56,51,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,26),40,97,49,49,52,53,52,32,103,49,57,54,51,32,103,49,57,54,53,32,103,49,57,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,14),40,97,49,49,52,54,52,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,14),40,97,49,49,52,57,49,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,7),40,101,114,114,32,120,41,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,9),40,116,101,115,116,32,102,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,56,55,56,32,103,49,56,57,48,41,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,12),40,101,120,112,97,110,100,32,99,108,115,41,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,54,54,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,14),40,97,49,49,57,53,57,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,8),40,97,49,50,48,48,57,41};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,52),40,97,49,50,48,49,53,32,110,97,109,101,49,55,57,49,32,108,105,98,49,55,57,51,32,115,112,101,99,49,55,57,53,32,118,49,55,57,55,32,115,49,55,57,57,32,105,49,56,48,49,41,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,9),40,103,49,55,55,57,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,55,51,32,103,49,55,56,53,41,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,14),40,97,49,49,57,57,52,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,26),40,97,49,50,48,57,48,32,103,49,55,53,52,32,103,49,55,53,54,32,103,49,55,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,26),40,97,49,50,49,48,48,32,103,49,55,52,48,32,103,49,55,52,50,32,103,49,55,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10012)
static void C_ccall f_10012(C_word c,C_word *av) C_noret;
C_noret_decl(f_10014)
static void C_ccall f_10014(C_word c,C_word *av) C_noret;
C_noret_decl(f_10018)
static void C_ccall f_10018(C_word c,C_word *av) C_noret;
C_noret_decl(f_10028)
static void C_fcall f_10028(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10053)
static void C_ccall f_10053(C_word c,C_word *av) C_noret;
C_noret_decl(f_10063)
static void C_ccall f_10063(C_word c,C_word *av) C_noret;
C_noret_decl(f_10065)
static void C_ccall f_10065(C_word c,C_word *av) C_noret;
C_noret_decl(f_10069)
static void C_ccall f_10069(C_word c,C_word *av) C_noret;
C_noret_decl(f_10077)
static void C_ccall f_10077(C_word c,C_word *av) C_noret;
C_noret_decl(f_10080)
static void C_ccall f_10080(C_word c,C_word *av) C_noret;
C_noret_decl(f_10083)
static void C_ccall f_10083(C_word c,C_word *av) C_noret;
C_noret_decl(f_10086)
static void C_ccall f_10086(C_word c,C_word *av) C_noret;
C_noret_decl(f_10089)
static void C_ccall f_10089(C_word c,C_word *av) C_noret;
C_noret_decl(f_10100)
static void C_ccall f_10100(C_word c,C_word *av) C_noret;
C_noret_decl(f_10102)
static void C_fcall f_10102(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10116)
static void C_ccall f_10116(C_word c,C_word *av) C_noret;
C_noret_decl(f_10122)
static void C_ccall f_10122(C_word c,C_word *av) C_noret;
C_noret_decl(f_10125)
static void C_ccall f_10125(C_word c,C_word *av) C_noret;
C_noret_decl(f_10129)
static void C_ccall f_10129(C_word c,C_word *av) C_noret;
C_noret_decl(f_10135)
static void C_ccall f_10135(C_word c,C_word *av) C_noret;
C_noret_decl(f_10138)
static void C_ccall f_10138(C_word c,C_word *av) C_noret;
C_noret_decl(f_10153)
static void C_ccall f_10153(C_word c,C_word *av) C_noret;
C_noret_decl(f_10194)
static void C_fcall f_10194(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10198)
static void C_ccall f_10198(C_word c,C_word *av) C_noret;
C_noret_decl(f_10201)
static void C_ccall f_10201(C_word c,C_word *av) C_noret;
C_noret_decl(f_10234)
static C_word C_fcall f_10234(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_10249)
static void C_ccall f_10249(C_word c,C_word *av) C_noret;
C_noret_decl(f_10251)
static void C_fcall f_10251(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10299)
static void C_ccall f_10299(C_word c,C_word *av) C_noret;
C_noret_decl(f_10301)
static void C_ccall f_10301(C_word c,C_word *av) C_noret;
C_noret_decl(f_10308)
static void C_ccall f_10308(C_word c,C_word *av) C_noret;
C_noret_decl(f_10311)
static void C_ccall f_10311(C_word c,C_word *av) C_noret;
C_noret_decl(f_10314)
static void C_ccall f_10314(C_word c,C_word *av) C_noret;
C_noret_decl(f_10319)
static void C_fcall f_10319(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10333)
static void C_ccall f_10333(C_word c,C_word *av) C_noret;
C_noret_decl(f_10339)
static void C_ccall f_10339(C_word c,C_word *av) C_noret;
C_noret_decl(f_10342)
static void C_ccall f_10342(C_word c,C_word *av) C_noret;
C_noret_decl(f_10346)
static void C_ccall f_10346(C_word c,C_word *av) C_noret;
C_noret_decl(f_10352)
static void C_ccall f_10352(C_word c,C_word *av) C_noret;
C_noret_decl(f_10355)
static void C_ccall f_10355(C_word c,C_word *av) C_noret;
C_noret_decl(f_10358)
static void C_ccall f_10358(C_word c,C_word *av) C_noret;
C_noret_decl(f_10361)
static void C_ccall f_10361(C_word c,C_word *av) C_noret;
C_noret_decl(f_10365)
static void C_ccall f_10365(C_word c,C_word *av) C_noret;
C_noret_decl(f_10371)
static void C_ccall f_10371(C_word c,C_word *av) C_noret;
C_noret_decl(f_10374)
static void C_ccall f_10374(C_word c,C_word *av) C_noret;
C_noret_decl(f_10377)
static void C_ccall f_10377(C_word c,C_word *av) C_noret;
C_noret_decl(f_10383)
static void C_ccall f_10383(C_word c,C_word *av) C_noret;
C_noret_decl(f_10409)
static void C_ccall f_10409(C_word c,C_word *av) C_noret;
C_noret_decl(f_10437)
static void C_ccall f_10437(C_word c,C_word *av) C_noret;
C_noret_decl(f_10454)
static void C_ccall f_10454(C_word c,C_word *av) C_noret;
C_noret_decl(f_10460)
static void C_ccall f_10460(C_word c,C_word *av) C_noret;
C_noret_decl(f_10463)
static void C_ccall f_10463(C_word c,C_word *av) C_noret;
C_noret_decl(f_10482)
static void C_ccall f_10482(C_word c,C_word *av) C_noret;
C_noret_decl(f_10500)
static void C_ccall f_10500(C_word c,C_word *av) C_noret;
C_noret_decl(f_10503)
static void C_ccall f_10503(C_word c,C_word *av) C_noret;
C_noret_decl(f_10530)
static void C_ccall f_10530(C_word c,C_word *av) C_noret;
C_noret_decl(f_10557)
static void C_ccall f_10557(C_word c,C_word *av) C_noret;
C_noret_decl(f_10620)
static void C_ccall f_10620(C_word c,C_word *av) C_noret;
C_noret_decl(f_10632)
static void C_ccall f_10632(C_word c,C_word *av) C_noret;
C_noret_decl(f_10648)
static void C_ccall f_10648(C_word c,C_word *av) C_noret;
C_noret_decl(f_10682)
static void C_ccall f_10682(C_word c,C_word *av) C_noret;
C_noret_decl(f_10684)
static void C_ccall f_10684(C_word c,C_word *av) C_noret;
C_noret_decl(f_10707)
static void C_ccall f_10707(C_word c,C_word *av) C_noret;
C_noret_decl(f_10726)
static void C_ccall f_10726(C_word c,C_word *av) C_noret;
C_noret_decl(f_10734)
static void C_ccall f_10734(C_word c,C_word *av) C_noret;
C_noret_decl(f_10736)
static void C_ccall f_10736(C_word c,C_word *av) C_noret;
C_noret_decl(f_10767)
static void C_ccall f_10767(C_word c,C_word *av) C_noret;
C_noret_decl(f_10771)
static void C_ccall f_10771(C_word c,C_word *av) C_noret;
C_noret_decl(f_10773)
static void C_ccall f_10773(C_word c,C_word *av) C_noret;
C_noret_decl(f_10777)
static void C_ccall f_10777(C_word c,C_word *av) C_noret;
C_noret_decl(f_10800)
static void C_ccall f_10800(C_word c,C_word *av) C_noret;
C_noret_decl(f_10815)
static void C_ccall f_10815(C_word c,C_word *av) C_noret;
C_noret_decl(f_10817)
static void C_ccall f_10817(C_word c,C_word *av) C_noret;
C_noret_decl(f_10821)
static void C_ccall f_10821(C_word c,C_word *av) C_noret;
C_noret_decl(f_10824)
static void C_ccall f_10824(C_word c,C_word *av) C_noret;
C_noret_decl(f_10837)
static void C_ccall f_10837(C_word c,C_word *av) C_noret;
C_noret_decl(f_10839)
static void C_ccall f_10839(C_word c,C_word *av) C_noret;
C_noret_decl(f_10843)
static void C_ccall f_10843(C_word c,C_word *av) C_noret;
C_noret_decl(f_10846)
static void C_ccall f_10846(C_word c,C_word *av) C_noret;
C_noret_decl(f_10859)
static void C_ccall f_10859(C_word c,C_word *av) C_noret;
C_noret_decl(f_10861)
static void C_ccall f_10861(C_word c,C_word *av) C_noret;
C_noret_decl(f_10865)
static void C_ccall f_10865(C_word c,C_word *av) C_noret;
C_noret_decl(f_10868)
static void C_ccall f_10868(C_word c,C_word *av) C_noret;
C_noret_decl(f_10881)
static void C_ccall f_10881(C_word c,C_word *av) C_noret;
C_noret_decl(f_10883)
static void C_ccall f_10883(C_word c,C_word *av) C_noret;
C_noret_decl(f_10887)
static void C_ccall f_10887(C_word c,C_word *av) C_noret;
C_noret_decl(f_10895)
static void C_fcall f_10895(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10898)
static void C_ccall f_10898(C_word c,C_word *av) C_noret;
C_noret_decl(f_10908)
static void C_ccall f_10908(C_word c,C_word *av) C_noret;
C_noret_decl(f_10933)
static void C_ccall f_10933(C_word c,C_word *av) C_noret;
C_noret_decl(f_10935)
static void C_ccall f_10935(C_word c,C_word *av) C_noret;
C_noret_decl(f_10939)
static void C_ccall f_10939(C_word c,C_word *av) C_noret;
C_noret_decl(f_10956)
static void C_ccall f_10956(C_word c,C_word *av) C_noret;
C_noret_decl(f_10959)
static void C_ccall f_10959(C_word c,C_word *av) C_noret;
C_noret_decl(f_10965)
static void C_ccall f_10965(C_word c,C_word *av) C_noret;
C_noret_decl(f_10972)
static void C_ccall f_10972(C_word c,C_word *av) C_noret;
C_noret_decl(f_10976)
static void C_ccall f_10976(C_word c,C_word *av) C_noret;
C_noret_decl(f_10980)
static void C_ccall f_10980(C_word c,C_word *av) C_noret;
C_noret_decl(f_10982)
static void C_ccall f_10982(C_word c,C_word *av) C_noret;
C_noret_decl(f_10986)
static void C_ccall f_10986(C_word c,C_word *av) C_noret;
C_noret_decl(f_10991)
static void C_fcall f_10991(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11006)
static void C_ccall f_11006(C_word c,C_word *av) C_noret;
C_noret_decl(f_11017)
static void C_ccall f_11017(C_word c,C_word *av) C_noret;
C_noret_decl(f_11020)
static void C_ccall f_11020(C_word c,C_word *av) C_noret;
C_noret_decl(f_11042)
static void C_ccall f_11042(C_word c,C_word *av) C_noret;
C_noret_decl(f_11049)
static void C_ccall f_11049(C_word c,C_word *av) C_noret;
C_noret_decl(f_11053)
static void C_ccall f_11053(C_word c,C_word *av) C_noret;
C_noret_decl(f_11062)
static void C_ccall f_11062(C_word c,C_word *av) C_noret;
C_noret_decl(f_11069)
static void C_ccall f_11069(C_word c,C_word *av) C_noret;
C_noret_decl(f_11072)
static void C_ccall f_11072(C_word c,C_word *av) C_noret;
C_noret_decl(f_11107)
static void C_ccall f_11107(C_word c,C_word *av) C_noret;
C_noret_decl(f_11109)
static void C_ccall f_11109(C_word c,C_word *av) C_noret;
C_noret_decl(f_11113)
static void C_ccall f_11113(C_word c,C_word *av) C_noret;
C_noret_decl(f_11124)
static void C_ccall f_11124(C_word c,C_word *av) C_noret;
C_noret_decl(f_11126)
static void C_ccall f_11126(C_word c,C_word *av) C_noret;
C_noret_decl(f_11130)
static void C_ccall f_11130(C_word c,C_word *av) C_noret;
C_noret_decl(f_11141)
static void C_ccall f_11141(C_word c,C_word *av) C_noret;
C_noret_decl(f_11143)
static void C_ccall f_11143(C_word c,C_word *av) C_noret;
C_noret_decl(f_11147)
static void C_ccall f_11147(C_word c,C_word *av) C_noret;
C_noret_decl(f_11158)
static void C_ccall f_11158(C_word c,C_word *av) C_noret;
C_noret_decl(f_11160)
static void C_ccall f_11160(C_word c,C_word *av) C_noret;
C_noret_decl(f_11164)
static void C_ccall f_11164(C_word c,C_word *av) C_noret;
C_noret_decl(f_11175)
static void C_ccall f_11175(C_word c,C_word *av) C_noret;
C_noret_decl(f_11177)
static void C_ccall f_11177(C_word c,C_word *av) C_noret;
C_noret_decl(f_11181)
static void C_ccall f_11181(C_word c,C_word *av) C_noret;
C_noret_decl(f_11184)
static void C_ccall f_11184(C_word c,C_word *av) C_noret;
C_noret_decl(f_11194)
static void C_ccall f_11194(C_word c,C_word *av) C_noret;
C_noret_decl(f_11198)
static void C_ccall f_11198(C_word c,C_word *av) C_noret;
C_noret_decl(f_11200)
static void C_ccall f_11200(C_word c,C_word *av) C_noret;
C_noret_decl(f_11204)
static void C_ccall f_11204(C_word c,C_word *av) C_noret;
C_noret_decl(f_11207)
static void C_ccall f_11207(C_word c,C_word *av) C_noret;
C_noret_decl(f_11210)
static void C_ccall f_11210(C_word c,C_word *av) C_noret;
C_noret_decl(f_11233)
static void C_ccall f_11233(C_word c,C_word *av) C_noret;
C_noret_decl(f_11236)
static void C_ccall f_11236(C_word c,C_word *av) C_noret;
C_noret_decl(f_11282)
static void C_ccall f_11282(C_word c,C_word *av) C_noret;
C_noret_decl(f_11284)
static void C_ccall f_11284(C_word c,C_word *av) C_noret;
C_noret_decl(f_11288)
static void C_ccall f_11288(C_word c,C_word *av) C_noret;
C_noret_decl(f_11291)
static void C_ccall f_11291(C_word c,C_word *av) C_noret;
C_noret_decl(f_11314)
static void C_ccall f_11314(C_word c,C_word *av) C_noret;
C_noret_decl(f_11342)
static void C_ccall f_11342(C_word c,C_word *av) C_noret;
C_noret_decl(f_11347)
static void C_fcall f_11347(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11354)
static void C_ccall f_11354(C_word c,C_word *av) C_noret;
C_noret_decl(f_11357)
static void C_ccall f_11357(C_word c,C_word *av) C_noret;
C_noret_decl(f_11366)
static void C_ccall f_11366(C_word c,C_word *av) C_noret;
C_noret_decl(f_11411)
static void C_ccall f_11411(C_word c,C_word *av) C_noret;
C_noret_decl(f_11413)
static void C_fcall f_11413(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11438)
static void C_ccall f_11438(C_word c,C_word *av) C_noret;
C_noret_decl(f_11449)
static void C_ccall f_11449(C_word c,C_word *av) C_noret;
C_noret_decl(f_11453)
static void C_ccall f_11453(C_word c,C_word *av) C_noret;
C_noret_decl(f_11455)
static void C_ccall f_11455(C_word c,C_word *av) C_noret;
C_noret_decl(f_11463)
static void C_ccall f_11463(C_word c,C_word *av) C_noret;
C_noret_decl(f_11465)
static void C_ccall f_11465(C_word c,C_word *av) C_noret;
C_noret_decl(f_11469)
static void C_ccall f_11469(C_word c,C_word *av) C_noret;
C_noret_decl(f_11472)
static void C_ccall f_11472(C_word c,C_word *av) C_noret;
C_noret_decl(f_11475)
static void C_ccall f_11475(C_word c,C_word *av) C_noret;
C_noret_decl(f_11482)
static void C_ccall f_11482(C_word c,C_word *av) C_noret;
C_noret_decl(f_11490)
static void C_ccall f_11490(C_word c,C_word *av) C_noret;
C_noret_decl(f_11492)
static void C_ccall f_11492(C_word c,C_word *av) C_noret;
C_noret_decl(f_11496)
static void C_ccall f_11496(C_word c,C_word *av) C_noret;
C_noret_decl(f_11502)
static void C_ccall f_11502(C_word c,C_word *av) C_noret;
C_noret_decl(f_11508)
static void C_fcall f_11508(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11511)
static void C_ccall f_11511(C_word c,C_word *av) C_noret;
C_noret_decl(f_11523)
static void C_ccall f_11523(C_word c,C_word *av) C_noret;
C_noret_decl(f_11526)
static void C_ccall f_11526(C_word c,C_word *av) C_noret;
C_noret_decl(f_11557)
static void C_ccall f_11557(C_word c,C_word *av) C_noret;
C_noret_decl(f_11561)
static void C_ccall f_11561(C_word c,C_word *av) C_noret;
C_noret_decl(f_11564)
static void C_ccall f_11564(C_word c,C_word *av) C_noret;
C_noret_decl(f_11571)
static void C_ccall f_11571(C_word c,C_word *av) C_noret;
C_noret_decl(f_11580)
static void C_ccall f_11580(C_word c,C_word *av) C_noret;
C_noret_decl(f_11605)
static void C_fcall f_11605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11639)
static void C_ccall f_11639(C_word c,C_word *av) C_noret;
C_noret_decl(f_11653)
static void C_ccall f_11653(C_word c,C_word *av) C_noret;
C_noret_decl(f_11665)
static void C_ccall f_11665(C_word c,C_word *av) C_noret;
C_noret_decl(f_11667)
static void C_ccall f_11667(C_word c,C_word *av) C_noret;
C_noret_decl(f_11673)
static void C_fcall f_11673(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11683)
static void C_fcall f_11683(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11697)
static void C_ccall f_11697(C_word c,C_word *av) C_noret;
C_noret_decl(f_11713)
static void C_ccall f_11713(C_word c,C_word *av) C_noret;
C_noret_decl(f_11737)
static void C_ccall f_11737(C_word c,C_word *av) C_noret;
C_noret_decl(f_11772)
static void C_ccall f_11772(C_word c,C_word *av) C_noret;
C_noret_decl(f_11806)
static void C_ccall f_11806(C_word c,C_word *av) C_noret;
C_noret_decl(f_11828)
static void C_fcall f_11828(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11853)
static void C_ccall f_11853(C_word c,C_word *av) C_noret;
C_noret_decl(f_11855)
static void C_fcall f_11855(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11934)
static void C_ccall f_11934(C_word c,C_word *av) C_noret;
C_noret_decl(f_11946)
static void C_ccall f_11946(C_word c,C_word *av) C_noret;
C_noret_decl(f_11958)
static void C_ccall f_11958(C_word c,C_word *av) C_noret;
C_noret_decl(f_11960)
static void C_ccall f_11960(C_word c,C_word *av) C_noret;
C_noret_decl(f_11964)
static void C_ccall f_11964(C_word c,C_word *av) C_noret;
C_noret_decl(f_11975)
static void C_ccall f_11975(C_word c,C_word *av) C_noret;
C_noret_decl(f_11985)
static void C_ccall f_11985(C_word c,C_word *av) C_noret;
C_noret_decl(f_11993)
static void C_ccall f_11993(C_word c,C_word *av) C_noret;
C_noret_decl(f_11995)
static void C_ccall f_11995(C_word c,C_word *av) C_noret;
C_noret_decl(f_12004)
static void C_fcall f_12004(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12010)
static void C_ccall f_12010(C_word c,C_word *av) C_noret;
C_noret_decl(f_12016)
static void C_ccall f_12016(C_word c,C_word *av) C_noret;
C_noret_decl(f_12020)
static void C_ccall f_12020(C_word c,C_word *av) C_noret;
C_noret_decl(f_12033)
static void C_ccall f_12033(C_word c,C_word *av) C_noret;
C_noret_decl(f_12051)
static void C_ccall f_12051(C_word c,C_word *av) C_noret;
C_noret_decl(f_12053)
static void C_fcall f_12053(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12078)
static void C_ccall f_12078(C_word c,C_word *av) C_noret;
C_noret_decl(f_12089)
static void C_ccall f_12089(C_word c,C_word *av) C_noret;
C_noret_decl(f_12091)
static void C_ccall f_12091(C_word c,C_word *av) C_noret;
C_noret_decl(f_12099)
static void C_ccall f_12099(C_word c,C_word *av) C_noret;
C_noret_decl(f_12101)
static void C_ccall f_12101(C_word c,C_word *av) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word *av) C_noret;
C_noret_decl(f_3676)
static void C_ccall f_3676(C_word c,C_word *av) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word *av) C_noret;
C_noret_decl(f_3685)
static void C_ccall f_3685(C_word c,C_word *av) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word *av) C_noret;
C_noret_decl(f_3691)
static C_word C_fcall f_3691(C_word t0,C_word t1);
C_noret_decl(f_3708)
static void C_fcall f_3708(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word *av) C_noret;
C_noret_decl(f_3718)
static void C_fcall f_3718(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word *av) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word *av) C_noret;
C_noret_decl(f_3761)
static void C_fcall f_3761(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word *av) C_noret;
C_noret_decl(f_3833)
static void C_ccall f_3833(C_word c,C_word *av) C_noret;
C_noret_decl(f_3851)
static void C_ccall f_3851(C_word c,C_word *av) C_noret;
C_noret_decl(f_3860)
static void C_fcall f_3860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word *av) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891(C_word c,C_word *av) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word *av) C_noret;
C_noret_decl(f_3920)
static void C_ccall f_3920(C_word c,C_word *av) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word *av) C_noret;
C_noret_decl(f_3937)
static void C_fcall f_3937(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3985)
static void C_fcall f_3985(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4034)
static void C_fcall f_4034(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4059)
static void C_ccall f_4059(C_word c,C_word *av) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word *av) C_noret;
C_noret_decl(f_4077)
static void C_fcall f_4077(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4093)
static void C_fcall f_4093(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4111)
static void C_fcall f_4111(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4127)
static void C_fcall f_4127(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word *av) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word *av) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word *av) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word *av) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word *av) C_noret;
C_noret_decl(f_4203)
static C_word C_fcall f_4203(C_word t0,C_word t1);
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word *av) C_noret;
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word *av) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word *av) C_noret;
C_noret_decl(f_4257)
static void C_ccall f_4257(C_word c,C_word *av) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word *av) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word *av) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word *av) C_noret;
C_noret_decl(f_4282)
static void C_fcall f_4282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word *av) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word *av) C_noret;
C_noret_decl(f_4316)
static void C_fcall f_4316(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word *av) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word *av) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word *av) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word *av) C_noret;
C_noret_decl(f_4354)
static void C_fcall f_4354(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word *av) C_noret;
C_noret_decl(f_4371)
static void C_fcall f_4371(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4388)
static void C_fcall f_4388(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word *av) C_noret;
C_noret_decl(f_4438)
static void C_ccall f_4438(C_word c,C_word *av) C_noret;
C_noret_decl(f_4444)
static void C_ccall f_4444(C_word c,C_word *av) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word *av) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word *av) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word *av) C_noret;
C_noret_decl(f_4471)
static void C_ccall f_4471(C_word c,C_word *av) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word *av) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word *av) C_noret;
C_noret_decl(f_4489)
static void C_ccall f_4489(C_word c,C_word *av) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word *av) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word *av) C_noret;
C_noret_decl(f_4509)
static void C_ccall f_4509(C_word c,C_word *av) C_noret;
C_noret_decl(f_4515)
static void C_fcall f_4515(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541(C_word c,C_word *av) C_noret;
C_noret_decl(f_4559)
static void C_fcall f_4559(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4583)
static void C_fcall f_4583(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word *av) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word *av) C_noret;
C_noret_decl(f_4629)
static void C_ccall f_4629(C_word c,C_word *av) C_noret;
C_noret_decl(f_4631)
static void C_fcall f_4631(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word *av) C_noret;
C_noret_decl(f_4700)
static void C_fcall f_4700(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4738)
static void C_fcall f_4738(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4742)
static void C_fcall f_4742(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word *av) C_noret;
C_noret_decl(f_4758)
static void C_ccall f_4758(C_word c,C_word *av) C_noret;
C_noret_decl(f_4801)
static void C_ccall f_4801(C_word c,C_word *av) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word *av) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word *av) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word *av) C_noret;
C_noret_decl(f_4832)
static void C_fcall f_4832(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word *av) C_noret;
C_noret_decl(f_4844)
static void C_ccall f_4844(C_word c,C_word *av) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word *av) C_noret;
C_noret_decl(f_4886)
static void C_fcall f_4886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4905)
static void C_fcall f_4905(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word *av) C_noret;
C_noret_decl(f_4930)
static void C_fcall f_4930(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word *av) C_noret;
C_noret_decl(f_4950)
static void C_ccall f_4950(C_word c,C_word *av) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word *av) C_noret;
C_noret_decl(f_4958)
static void C_fcall f_4958(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word *av) C_noret;
C_noret_decl(f_4976)
static void C_fcall f_4976(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4988)
static void C_fcall f_4988(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word *av) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word *av) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word *av) C_noret;
C_noret_decl(f_5067)
static void C_ccall f_5067(C_word c,C_word *av) C_noret;
C_noret_decl(f_5116)
static void C_fcall f_5116(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5169)
static void C_ccall f_5169(C_word c,C_word *av) C_noret;
C_noret_decl(f_5173)
static void C_ccall f_5173(C_word c,C_word *av) C_noret;
C_noret_decl(f_5176)
static void C_ccall f_5176(C_word c,C_word *av) C_noret;
C_noret_decl(f_5179)
static void C_ccall f_5179(C_word c,C_word *av) C_noret;
C_noret_decl(f_5181)
static void C_fcall f_5181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5206)
static void C_ccall f_5206(C_word c,C_word *av) C_noret;
C_noret_decl(f_5220)
static void C_ccall f_5220(C_word c,C_word *av) C_noret;
C_noret_decl(f_5261)
static void C_fcall f_5261(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5274)
static void C_fcall f_5274(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5290)
static void C_ccall f_5290(C_word c,C_word *av) C_noret;
C_noret_decl(f_5308)
static void C_fcall f_5308(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5311)
static void C_fcall f_5311(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5350)
static void C_fcall f_5350(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5369)
static void C_ccall f_5369(C_word c,C_word *av) C_noret;
C_noret_decl(f_5437)
static void C_fcall f_5437(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5536)
static void C_ccall f_5536(C_word c,C_word *av) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word *av) C_noret;
C_noret_decl(f_5546)
static void C_ccall f_5546(C_word c,C_word *av) C_noret;
C_noret_decl(f_5549)
static void C_ccall f_5549(C_word c,C_word *av) C_noret;
C_noret_decl(f_5568)
static void C_ccall f_5568(C_word c,C_word *av) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word *av) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word *av) C_noret;
C_noret_decl(f_5612)
static void C_fcall f_5612(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5678)
static void C_fcall f_5678(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word *av) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word *av) C_noret;
C_noret_decl(f_5720)
static void C_ccall f_5720(C_word c,C_word *av) C_noret;
C_noret_decl(f_5731)
static C_word C_fcall f_5731(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5814)
static void C_fcall f_5814(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5826)
static void C_fcall f_5826(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word *av) C_noret;
C_noret_decl(f_5845)
static void C_fcall f_5845(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5856)
static void C_fcall f_5856(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5876)
static void C_ccall f_5876(C_word c,C_word *av) C_noret;
C_noret_decl(f_5880)
static void C_ccall f_5880(C_word c,C_word *av) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word *av) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word *av) C_noret;
C_noret_decl(f_5907)
static void C_fcall f_5907(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5914)
static void C_ccall f_5914(C_word c,C_word *av) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word *av) C_noret;
C_noret_decl(f_5956)
static void C_ccall f_5956(C_word c,C_word *av) C_noret;
C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word *av) C_noret;
C_noret_decl(f_6070)
static void C_ccall f_6070(C_word c,C_word *av) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word *av) C_noret;
C_noret_decl(f_6080)
static void C_ccall f_6080(C_word c,C_word *av) C_noret;
C_noret_decl(f_6102)
static void C_ccall f_6102(C_word c,C_word *av) C_noret;
C_noret_decl(f_6105)
static void C_ccall f_6105(C_word c,C_word *av) C_noret;
C_noret_decl(f_6108)
static void C_ccall f_6108(C_word c,C_word *av) C_noret;
C_noret_decl(f_6111)
static void C_ccall f_6111(C_word c,C_word *av) C_noret;
C_noret_decl(f_6113)
static void C_fcall f_6113(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6120)
static void C_fcall f_6120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6146)
static void C_ccall f_6146(C_word c,C_word *av) C_noret;
C_noret_decl(f_6175)
static void C_fcall f_6175(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6209)
static void C_fcall f_6209(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6233)
static void C_ccall f_6233(C_word c,C_word *av) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word *av) C_noret;
C_noret_decl(f_6239)
static void C_ccall f_6239(C_word c,C_word *av) C_noret;
C_noret_decl(f_6251)
static void C_fcall f_6251(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6259)
static void C_ccall f_6259(C_word c,C_word *av) C_noret;
C_noret_decl(f_6261)
static void C_fcall f_6261(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word *av) C_noret;
C_noret_decl(f_6286)
static void C_ccall f_6286(C_word c,C_word *av) C_noret;
C_noret_decl(f_6288)
static void C_fcall f_6288(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6335)
static void C_fcall f_6335(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6339)
static void C_ccall f_6339(C_word c,C_word *av) C_noret;
C_noret_decl(f_6407)
static void C_fcall f_6407(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6413)
static void C_fcall f_6413(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6433)
static void C_fcall f_6433(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6451)
static void C_ccall f_6451(C_word c,C_word *av) C_noret;
C_noret_decl(f_6456)
static void C_fcall f_6456(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6469)
static void C_ccall f_6469(C_word c,C_word *av) C_noret;
C_noret_decl(f_6472)
static void C_ccall f_6472(C_word c,C_word *av) C_noret;
C_noret_decl(f_6522)
static void C_ccall f_6522(C_word c,C_word *av) C_noret;
C_noret_decl(f_6529)
static void C_ccall f_6529(C_word c,C_word *av) C_noret;
C_noret_decl(f_6536)
static void C_ccall f_6536(C_word c,C_word *av) C_noret;
C_noret_decl(f_6588)
static void C_ccall f_6588(C_word c,C_word *av) C_noret;
C_noret_decl(f_6600)
static void C_ccall f_6600(C_word c,C_word *av) C_noret;
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word *av) C_noret;
C_noret_decl(f_6652)
static void C_ccall f_6652(C_word c,C_word *av) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word *av) C_noret;
C_noret_decl(f_6725)
static void C_fcall f_6725(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6739)
static C_word C_fcall f_6739(C_word t0,C_word t1);
C_noret_decl(f_6779)
static void C_ccall f_6779(C_word c,C_word *av) C_noret;
C_noret_decl(f_6802)
static void C_ccall f_6802(C_word c,C_word *av) C_noret;
C_noret_decl(f_6804)
static void C_ccall f_6804(C_word c,C_word *av) C_noret;
C_noret_decl(f_6807)
static void C_fcall f_6807(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word *av) C_noret;
C_noret_decl(f_6859)
static void C_ccall f_6859(C_word c,C_word *av) C_noret;
C_noret_decl(f_6867)
static void C_ccall f_6867(C_word c,C_word *av) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870(C_word c,C_word *av) C_noret;
C_noret_decl(f_6881)
static void C_ccall f_6881(C_word c,C_word *av) C_noret;
C_noret_decl(f_6886)
static void C_fcall f_6886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6906)
static void C_ccall f_6906(C_word c,C_word *av) C_noret;
C_noret_decl(f_6910)
static void C_ccall f_6910(C_word c,C_word *av) C_noret;
C_noret_decl(f_6925)
static void C_ccall f_6925(C_word c,C_word *av) C_noret;
C_noret_decl(f_6937)
static void C_ccall f_6937(C_word c,C_word *av) C_noret;
C_noret_decl(f_6939)
static void C_fcall f_6939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6946)
static void C_ccall f_6946(C_word c,C_word *av) C_noret;
C_noret_decl(f_6953)
static void C_ccall f_6953(C_word c,C_word *av) C_noret;
C_noret_decl(f_6955)
static void C_fcall f_6955(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6965)
static void C_ccall f_6965(C_word c,C_word *av) C_noret;
C_noret_decl(f_6968)
static void C_ccall f_6968(C_word c,C_word *av) C_noret;
C_noret_decl(f_6971)
static void C_ccall f_6971(C_word c,C_word *av) C_noret;
C_noret_decl(f_6974)
static void C_ccall f_6974(C_word c,C_word *av) C_noret;
C_noret_decl(f_6977)
static void C_ccall f_6977(C_word c,C_word *av) C_noret;
C_noret_decl(f_6984)
static void C_ccall f_6984(C_word c,C_word *av) C_noret;
C_noret_decl(f_6991)
static void C_ccall f_6991(C_word c,C_word *av) C_noret;
C_noret_decl(f_6994)
static void C_ccall f_6994(C_word c,C_word *av) C_noret;
C_noret_decl(f_7003)
static void C_ccall f_7003(C_word c,C_word *av) C_noret;
C_noret_decl(f_7006)
static void C_ccall f_7006(C_word c,C_word *av) C_noret;
C_noret_decl(f_7009)
static void C_ccall f_7009(C_word c,C_word *av) C_noret;
C_noret_decl(f_7012)
static void C_ccall f_7012(C_word c,C_word *av) C_noret;
C_noret_decl(f_7015)
static void C_ccall f_7015(C_word c,C_word *av) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word *av) C_noret;
C_noret_decl(f_7031)
static void C_ccall f_7031(C_word c,C_word *av) C_noret;
C_noret_decl(f_7035)
static void C_ccall f_7035(C_word c,C_word *av) C_noret;
C_noret_decl(f_7046)
static void C_ccall f_7046(C_word c,C_word *av) C_noret;
C_noret_decl(f_7050)
static void C_ccall f_7050(C_word c,C_word *av) C_noret;
C_noret_decl(f_7052)
static void C_fcall f_7052(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7066)
static void C_ccall f_7066(C_word c,C_word *av) C_noret;
C_noret_decl(f_7070)
static void C_ccall f_7070(C_word c,C_word *av) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word *av) C_noret;
C_noret_decl(f_7111)
static void C_ccall f_7111(C_word c,C_word *av) C_noret;
C_noret_decl(f_7115)
static C_word C_fcall f_7115(C_word t0,C_word t1);
C_noret_decl(f_7130)
static void C_ccall f_7130(C_word c,C_word *av) C_noret;
C_noret_decl(f_7140)
static void C_ccall f_7140(C_word c,C_word *av) C_noret;
C_noret_decl(f_7145)
static void C_fcall f_7145(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7152)
static void C_ccall f_7152(C_word c,C_word *av) C_noret;
C_noret_decl(f_7157)
static void C_fcall f_7157(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7161)
static void C_ccall f_7161(C_word c,C_word *av) C_noret;
C_noret_decl(f_7168)
static void C_ccall f_7168(C_word c,C_word *av) C_noret;
C_noret_decl(f_7175)
static void C_ccall f_7175(C_word c,C_word *av) C_noret;
C_noret_decl(f_7182)
static void C_ccall f_7182(C_word c,C_word *av) C_noret;
C_noret_decl(f_7184)
static void C_ccall f_7184(C_word c,C_word *av) C_noret;
C_noret_decl(f_7188)
static void C_ccall f_7188(C_word c,C_word *av) C_noret;
C_noret_decl(f_7196)
static void C_fcall f_7196(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7216)
static void C_ccall f_7216(C_word c,C_word *av) C_noret;
C_noret_decl(f_7244)
static void C_ccall f_7244(C_word c,C_word *av) C_noret;
C_noret_decl(f_7246)
static void C_ccall f_7246(C_word c,C_word *av) C_noret;
C_noret_decl(f_7252)
static C_word C_fcall f_7252(C_word t0);
C_noret_decl(f_7273)
static void C_fcall f_7273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7278)
static void C_fcall f_7278(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7297)
static void C_fcall f_7297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7302)
static void C_fcall f_7302(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7321)
static void C_ccall f_7321(C_word c,C_word *av) C_noret;
C_noret_decl(f_7475)
static void C_ccall f_7475(C_word c,C_word *av) C_noret;
C_noret_decl(f_7532)
static void C_ccall f_7532(C_word c,C_word *av) C_noret;
C_noret_decl(f_7585)
static void C_fcall f_7585(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7591)
static void C_ccall f_7591(C_word c,C_word *av) C_noret;
C_noret_decl(f_7598)
static void C_ccall f_7598(C_word c,C_word *av) C_noret;
C_noret_decl(f_7600)
static void C_ccall f_7600(C_word c,C_word *av) C_noret;
C_noret_decl(f_7614)
static void C_ccall f_7614(C_word c,C_word *av) C_noret;
C_noret_decl(f_7618)
static void C_ccall f_7618(C_word c,C_word *av) C_noret;
C_noret_decl(f_7635)
static void C_ccall f_7635(C_word c,C_word *av) C_noret;
C_noret_decl(f_7639)
static void C_ccall f_7639(C_word c,C_word *av) C_noret;
C_noret_decl(f_7665)
static void C_ccall f_7665(C_word c,C_word *av) C_noret;
C_noret_decl(f_7682)
static void C_ccall f_7682(C_word c,C_word *av) C_noret;
C_noret_decl(f_7704)
static void C_ccall f_7704(C_word c,C_word *av) C_noret;
C_noret_decl(f_7741)
static void C_fcall f_7741(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7762)
static void C_ccall f_7762(C_word c,C_word *av) C_noret;
C_noret_decl(f_7793)
static void C_fcall f_7793(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7801)
static void C_fcall f_7801(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7823)
static C_word C_fcall f_7823(C_word t0,C_word t1);
C_noret_decl(f_7838)
static void C_ccall f_7838(C_word c,C_word *av) C_noret;
C_noret_decl(f_7851)
static C_word C_fcall f_7851(C_word t0,C_word t1);
C_noret_decl(f_7866)
static void C_ccall f_7866(C_word c,C_word *av) C_noret;
C_noret_decl(f_7901)
static C_word C_fcall f_7901(C_word t0,C_word t1);
C_noret_decl(f_7926)
static void C_fcall f_7926(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7940)
static void C_ccall f_7940(C_word c,C_word *av) C_noret;
C_noret_decl(f_7944)
static void C_ccall f_7944(C_word c,C_word *av) C_noret;
C_noret_decl(f_7961)
static void C_ccall f_7961(C_word c,C_word *av) C_noret;
C_noret_decl(f_7965)
static void C_ccall f_7965(C_word c,C_word *av) C_noret;
C_noret_decl(f_8054)
static void C_ccall f_8054(C_word c,C_word *av) C_noret;
C_noret_decl(f_8058)
static void C_ccall f_8058(C_word c,C_word *av) C_noret;
C_noret_decl(f_8063)
static void C_ccall f_8063(C_word c,C_word *av) C_noret;
C_noret_decl(f_8069)
static void C_ccall f_8069(C_word c,C_word *av) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word *av) C_noret;
C_noret_decl(f_8085)
static void C_ccall f_8085(C_word c,C_word *av) C_noret;
C_noret_decl(f_8089)
static void C_ccall f_8089(C_word c,C_word *av) C_noret;
C_noret_decl(f_8092)
static void C_ccall f_8092(C_word c,C_word *av) C_noret;
C_noret_decl(f_8095)
static void C_ccall f_8095(C_word c,C_word *av) C_noret;
C_noret_decl(f_8099)
static void C_ccall f_8099(C_word c,C_word *av) C_noret;
C_noret_decl(f_8102)
static void C_ccall f_8102(C_word c,C_word *av) C_noret;
C_noret_decl(f_8105)
static void C_ccall f_8105(C_word c,C_word *av) C_noret;
C_noret_decl(f_8108)
static void C_ccall f_8108(C_word c,C_word *av) C_noret;
C_noret_decl(f_8111)
static void C_ccall f_8111(C_word c,C_word *av) C_noret;
C_noret_decl(f_8114)
static void C_ccall f_8114(C_word c,C_word *av) C_noret;
C_noret_decl(f_8117)
static void C_ccall f_8117(C_word c,C_word *av) C_noret;
C_noret_decl(f_8121)
static void C_ccall f_8121(C_word c,C_word *av) C_noret;
C_noret_decl(f_8125)
static void C_ccall f_8125(C_word c,C_word *av) C_noret;
C_noret_decl(f_8128)
static void C_ccall f_8128(C_word c,C_word *av) C_noret;
C_noret_decl(f_8131)
static void C_ccall f_8131(C_word c,C_word *av) C_noret;
C_noret_decl(f_8134)
static void C_ccall f_8134(C_word c,C_word *av) C_noret;
C_noret_decl(f_8137)
static void C_ccall f_8137(C_word c,C_word *av) C_noret;
C_noret_decl(f_8141)
static void C_ccall f_8141(C_word c,C_word *av) C_noret;
C_noret_decl(f_8145)
static void C_ccall f_8145(C_word c,C_word *av) C_noret;
C_noret_decl(f_8148)
static void C_ccall f_8148(C_word c,C_word *av) C_noret;
C_noret_decl(f_8151)
static void C_ccall f_8151(C_word c,C_word *av) C_noret;
C_noret_decl(f_8154)
static void C_ccall f_8154(C_word c,C_word *av) C_noret;
C_noret_decl(f_8157)
static void C_ccall f_8157(C_word c,C_word *av) C_noret;
C_noret_decl(f_8160)
static void C_ccall f_8160(C_word c,C_word *av) C_noret;
C_noret_decl(f_8163)
static void C_ccall f_8163(C_word c,C_word *av) C_noret;
C_noret_decl(f_8166)
static void C_ccall f_8166(C_word c,C_word *av) C_noret;
C_noret_decl(f_8169)
static void C_ccall f_8169(C_word c,C_word *av) C_noret;
C_noret_decl(f_8172)
static void C_ccall f_8172(C_word c,C_word *av) C_noret;
C_noret_decl(f_8175)
static void C_ccall f_8175(C_word c,C_word *av) C_noret;
C_noret_decl(f_8178)
static void C_ccall f_8178(C_word c,C_word *av) C_noret;
C_noret_decl(f_8181)
static void C_ccall f_8181(C_word c,C_word *av) C_noret;
C_noret_decl(f_8184)
static void C_ccall f_8184(C_word c,C_word *av) C_noret;
C_noret_decl(f_8187)
static void C_ccall f_8187(C_word c,C_word *av) C_noret;
C_noret_decl(f_8189)
static void C_ccall f_8189(C_word c,C_word *av) C_noret;
C_noret_decl(f_8195)
static void C_ccall f_8195(C_word c,C_word *av) C_noret;
C_noret_decl(f_8205)
static void C_fcall f_8205(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8222)
static void C_ccall f_8222(C_word c,C_word *av) C_noret;
C_noret_decl(f_8229)
static void C_ccall f_8229(C_word c,C_word *av) C_noret;
C_noret_decl(f_8239)
static void C_fcall f_8239(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8264)
static void C_ccall f_8264(C_word c,C_word *av) C_noret;
C_noret_decl(f_8279)
static void C_ccall f_8279(C_word c,C_word *av) C_noret;
C_noret_decl(f_8283)
static void C_ccall f_8283(C_word c,C_word *av) C_noret;
C_noret_decl(f_8288)
static void C_ccall f_8288(C_word c,C_word *av) C_noret;
C_noret_decl(f_8294)
static void C_ccall f_8294(C_word c,C_word *av) C_noret;
C_noret_decl(f_8298)
static void C_ccall f_8298(C_word c,C_word *av) C_noret;
C_noret_decl(f_8302)
static void C_ccall f_8302(C_word c,C_word *av) C_noret;
C_noret_decl(f_8306)
static void C_ccall f_8306(C_word c,C_word *av) C_noret;
C_noret_decl(f_8310)
static void C_ccall f_8310(C_word c,C_word *av) C_noret;
C_noret_decl(f_8314)
static void C_ccall f_8314(C_word c,C_word *av) C_noret;
C_noret_decl(f_8319)
static void C_ccall f_8319(C_word c,C_word *av) C_noret;
C_noret_decl(f_8326)
static void C_ccall f_8326(C_word c,C_word *av) C_noret;
C_noret_decl(f_8331)
static void C_ccall f_8331(C_word c,C_word *av) C_noret;
C_noret_decl(f_8335)
static void C_ccall f_8335(C_word c,C_word *av) C_noret;
C_noret_decl(f_8339)
static void C_ccall f_8339(C_word c,C_word *av) C_noret;
C_noret_decl(f_8343)
static void C_ccall f_8343(C_word c,C_word *av) C_noret;
C_noret_decl(f_8348)
static void C_ccall f_8348(C_word c,C_word *av) C_noret;
C_noret_decl(f_8352)
static void C_ccall f_8352(C_word c,C_word *av) C_noret;
C_noret_decl(f_8356)
static void C_ccall f_8356(C_word c,C_word *av) C_noret;
C_noret_decl(f_8360)
static void C_ccall f_8360(C_word c,C_word *av) C_noret;
C_noret_decl(f_8362)
static void C_ccall f_8362(C_word c,C_word *av) C_noret;
C_noret_decl(f_8368)
static void C_ccall f_8368(C_word c,C_word *av) C_noret;
C_noret_decl(f_8396)
static void C_ccall f_8396(C_word c,C_word *av) C_noret;
C_noret_decl(f_8406)
static void C_ccall f_8406(C_word c,C_word *av) C_noret;
C_noret_decl(f_8420)
static void C_fcall f_8420(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8445)
static void C_ccall f_8445(C_word c,C_word *av) C_noret;
C_noret_decl(f_8462)
static void C_ccall f_8462(C_word c,C_word *av) C_noret;
C_noret_decl(f_8469)
static void C_fcall f_8469(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8490)
static void C_ccall f_8490(C_word c,C_word *av) C_noret;
C_noret_decl(f_8494)
static void C_ccall f_8494(C_word c,C_word *av) C_noret;
C_noret_decl(f_8498)
static void C_ccall f_8498(C_word c,C_word *av) C_noret;
C_noret_decl(f_8500)
static void C_ccall f_8500(C_word c,C_word *av) C_noret;
C_noret_decl(f_8505)
static void C_ccall f_8505(C_word c,C_word *av) C_noret;
C_noret_decl(f_8528)
static void C_ccall f_8528(C_word c,C_word *av) C_noret;
C_noret_decl(f_8562)
static void C_ccall f_8562(C_word c,C_word *av) C_noret;
C_noret_decl(f_8598)
static void C_ccall f_8598(C_word c,C_word *av) C_noret;
C_noret_decl(f_8602)
static void C_ccall f_8602(C_word c,C_word *av) C_noret;
C_noret_decl(f_8606)
static void C_ccall f_8606(C_word c,C_word *av) C_noret;
C_noret_decl(f_8655)
static void C_ccall f_8655(C_word c,C_word *av) C_noret;
C_noret_decl(f_8663)
static void C_ccall f_8663(C_word c,C_word *av) C_noret;
C_noret_decl(f_8676)
static void C_fcall f_8676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8709)
static void C_ccall f_8709(C_word c,C_word *av) C_noret;
C_noret_decl(f_8713)
static void C_ccall f_8713(C_word c,C_word *av) C_noret;
C_noret_decl(f_8768)
static void C_ccall f_8768(C_word c,C_word *av) C_noret;
C_noret_decl(f_8792)
static void C_ccall f_8792(C_word c,C_word *av) C_noret;
C_noret_decl(f_8836)
static void C_ccall f_8836(C_word c,C_word *av) C_noret;
C_noret_decl(f_8860)
static void C_ccall f_8860(C_word c,C_word *av) C_noret;
C_noret_decl(f_8866)
static void C_ccall f_8866(C_word c,C_word *av) C_noret;
C_noret_decl(f_8879)
static void C_ccall f_8879(C_word c,C_word *av) C_noret;
C_noret_decl(f_8883)
static void C_ccall f_8883(C_word c,C_word *av) C_noret;
C_noret_decl(f_8895)
static void C_ccall f_8895(C_word c,C_word *av) C_noret;
C_noret_decl(f_8941)
static void C_ccall f_8941(C_word c,C_word *av) C_noret;
C_noret_decl(f_8945)
static void C_ccall f_8945(C_word c,C_word *av) C_noret;
C_noret_decl(f_8970)
static void C_ccall f_8970(C_word c,C_word *av) C_noret;
C_noret_decl(f_8976)
static void C_ccall f_8976(C_word c,C_word *av) C_noret;
C_noret_decl(f_9013)
static void C_ccall f_9013(C_word c,C_word *av) C_noret;
C_noret_decl(f_9016)
static void C_ccall f_9016(C_word c,C_word *av) C_noret;
C_noret_decl(f_9021)
static void C_ccall f_9021(C_word c,C_word *av) C_noret;
C_noret_decl(f_9033)
static void C_ccall f_9033(C_word c,C_word *av) C_noret;
C_noret_decl(f_9036)
static void C_fcall f_9036(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9039)
static void C_ccall f_9039(C_word c,C_word *av) C_noret;
C_noret_decl(f_9052)
static void C_ccall f_9052(C_word c,C_word *av) C_noret;
C_noret_decl(f_9056)
static void C_ccall f_9056(C_word c,C_word *av) C_noret;
C_noret_decl(f_9060)
static void C_ccall f_9060(C_word c,C_word *av) C_noret;
C_noret_decl(f_9062)
static void C_fcall f_9062(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9081)
static void C_fcall f_9081(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9133)
static void C_ccall f_9133(C_word c,C_word *av) C_noret;
C_noret_decl(f_9137)
static void C_ccall f_9137(C_word c,C_word *av) C_noret;
C_noret_decl(f_9154)
static void C_ccall f_9154(C_word c,C_word *av) C_noret;
C_noret_decl(f_9158)
static void C_ccall f_9158(C_word c,C_word *av) C_noret;
C_noret_decl(f_9163)
static void C_ccall f_9163(C_word c,C_word *av) C_noret;
C_noret_decl(f_9189)
static void C_ccall f_9189(C_word c,C_word *av) C_noret;
C_noret_decl(f_9203)
static void C_ccall f_9203(C_word c,C_word *av) C_noret;
C_noret_decl(f_9222)
static void C_ccall f_9222(C_word c,C_word *av) C_noret;
C_noret_decl(f_9237)
static void C_ccall f_9237(C_word c,C_word *av) C_noret;
C_noret_decl(f_9239)
static void C_ccall f_9239(C_word c,C_word *av) C_noret;
C_noret_decl(f_9279)
static void C_ccall f_9279(C_word c,C_word *av) C_noret;
C_noret_decl(f_9290)
static void C_ccall f_9290(C_word c,C_word *av) C_noret;
C_noret_decl(f_9309)
static void C_ccall f_9309(C_word c,C_word *av) C_noret;
C_noret_decl(f_9324)
static void C_ccall f_9324(C_word c,C_word *av) C_noret;
C_noret_decl(f_9326)
static void C_ccall f_9326(C_word c,C_word *av) C_noret;
C_noret_decl(f_9333)
static void C_ccall f_9333(C_word c,C_word *av) C_noret;
C_noret_decl(f_9354)
static void C_ccall f_9354(C_word c,C_word *av) C_noret;
C_noret_decl(f_9378)
static void C_ccall f_9378(C_word c,C_word *av) C_noret;
C_noret_decl(f_9385)
static void C_ccall f_9385(C_word c,C_word *av) C_noret;
C_noret_decl(f_9390)
static void C_ccall f_9390(C_word c,C_word *av) C_noret;
C_noret_decl(f_9396)
static void C_ccall f_9396(C_word c,C_word *av) C_noret;
C_noret_decl(f_9406)
static void C_fcall f_9406(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9413)
static void C_ccall f_9413(C_word c,C_word *av) C_noret;
C_noret_decl(f_9434)
static void C_ccall f_9434(C_word c,C_word *av) C_noret;
C_noret_decl(f_9438)
static void C_ccall f_9438(C_word c,C_word *av) C_noret;
C_noret_decl(f_9442)
static void C_ccall f_9442(C_word c,C_word *av) C_noret;
C_noret_decl(f_9446)
static void C_ccall f_9446(C_word c,C_word *av) C_noret;
C_noret_decl(f_9450)
static void C_ccall f_9450(C_word c,C_word *av) C_noret;
C_noret_decl(f_9454)
static void C_ccall f_9454(C_word c,C_word *av) C_noret;
C_noret_decl(f_9456)
static void C_ccall f_9456(C_word c,C_word *av) C_noret;
C_noret_decl(f_9460)
static void C_ccall f_9460(C_word c,C_word *av) C_noret;
C_noret_decl(f_9468)
static void C_fcall f_9468(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9477)
static void C_ccall f_9477(C_word c,C_word *av) C_noret;
C_noret_decl(f_9490)
static void C_ccall f_9490(C_word c,C_word *av) C_noret;
C_noret_decl(f_9492)
static void C_ccall f_9492(C_word c,C_word *av) C_noret;
C_noret_decl(f_9496)
static void C_ccall f_9496(C_word c,C_word *av) C_noret;
C_noret_decl(f_9503)
static void C_ccall f_9503(C_word c,C_word *av) C_noret;
C_noret_decl(f_9523)
static void C_ccall f_9523(C_word c,C_word *av) C_noret;
C_noret_decl(f_9525)
static void C_ccall f_9525(C_word c,C_word *av) C_noret;
C_noret_decl(f_9529)
static void C_ccall f_9529(C_word c,C_word *av) C_noret;
C_noret_decl(f_9532)
static void C_ccall f_9532(C_word c,C_word *av) C_noret;
C_noret_decl(f_9535)
static void C_ccall f_9535(C_word c,C_word *av) C_noret;
C_noret_decl(f_9537)
static void C_fcall f_9537(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9545)
static void C_ccall f_9545(C_word c,C_word *av) C_noret;
C_noret_decl(f_9547)
static void C_fcall f_9547(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9561)
static void C_ccall f_9561(C_word c,C_word *av) C_noret;
C_noret_decl(f_9565)
static void C_ccall f_9565(C_word c,C_word *av) C_noret;
C_noret_decl(f_9584)
static void C_ccall f_9584(C_word c,C_word *av) C_noret;
C_noret_decl(f_9593)
static void C_ccall f_9593(C_word c,C_word *av) C_noret;
C_noret_decl(f_9607)
static void C_ccall f_9607(C_word c,C_word *av) C_noret;
C_noret_decl(f_9617)
static void C_ccall f_9617(C_word c,C_word *av) C_noret;
C_noret_decl(f_9628)
static void C_ccall f_9628(C_word c,C_word *av) C_noret;
C_noret_decl(f_9638)
static void C_ccall f_9638(C_word c,C_word *av) C_noret;
C_noret_decl(f_9647)
static void C_ccall f_9647(C_word c,C_word *av) C_noret;
C_noret_decl(f_9658)
static void C_ccall f_9658(C_word c,C_word *av) C_noret;
C_noret_decl(f_9669)
static void C_ccall f_9669(C_word c,C_word *av) C_noret;
C_noret_decl(f_9677)
static void C_ccall f_9677(C_word c,C_word *av) C_noret;
C_noret_decl(f_9692)
static void C_ccall f_9692(C_word c,C_word *av) C_noret;
C_noret_decl(f_9696)
static void C_ccall f_9696(C_word c,C_word *av) C_noret;
C_noret_decl(f_9710)
static void C_fcall f_9710(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9714)
static void C_ccall f_9714(C_word c,C_word *av) C_noret;
C_noret_decl(f_9718)
static void C_fcall f_9718(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9740)
static void C_ccall f_9740(C_word c,C_word *av) C_noret;
C_noret_decl(f_9744)
static void C_fcall f_9744(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9787)
static void C_ccall f_9787(C_word c,C_word *av) C_noret;
C_noret_decl(f_9805)
static void C_ccall f_9805(C_word c,C_word *av) C_noret;
C_noret_decl(f_9816)
static void C_ccall f_9816(C_word c,C_word *av) C_noret;
C_noret_decl(f_9818)
static void C_ccall f_9818(C_word c,C_word *av) C_noret;
C_noret_decl(f_9822)
static void C_ccall f_9822(C_word c,C_word *av) C_noret;
C_noret_decl(f_9834)
static void C_ccall f_9834(C_word c,C_word *av) C_noret;
C_noret_decl(f_9862)
static void C_ccall f_9862(C_word c,C_word *av) C_noret;
C_noret_decl(f_9883)
static void C_fcall f_9883(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9924)
static void C_ccall f_9924(C_word c,C_word *av) C_noret;
C_noret_decl(f_9926)
static void C_fcall f_9926(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9951)
static void C_fcall f_9951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9976)
static void C_fcall f_9976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_expand_toplevel)
C_externexport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10028)
static void C_ccall trf_10028(C_word c,C_word *av) C_noret;
static void C_ccall trf_10028(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10028(t0,t1,t2);}

C_noret_decl(trf_10102)
static void C_ccall trf_10102(C_word c,C_word *av) C_noret;
static void C_ccall trf_10102(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10102(t0,t1,t2,t3);}

C_noret_decl(trf_10194)
static void C_ccall trf_10194(C_word c,C_word *av) C_noret;
static void C_ccall trf_10194(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10194(t0,t1);}

C_noret_decl(trf_10251)
static void C_ccall trf_10251(C_word c,C_word *av) C_noret;
static void C_ccall trf_10251(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10251(t0,t1,t2);}

C_noret_decl(trf_10319)
static void C_ccall trf_10319(C_word c,C_word *av) C_noret;
static void C_ccall trf_10319(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10319(t0,t1,t2,t3);}

C_noret_decl(trf_10895)
static void C_ccall trf_10895(C_word c,C_word *av) C_noret;
static void C_ccall trf_10895(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10895(t0,t1);}

C_noret_decl(trf_10991)
static void C_ccall trf_10991(C_word c,C_word *av) C_noret;
static void C_ccall trf_10991(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10991(t0,t1,t2);}

C_noret_decl(trf_11347)
static void C_ccall trf_11347(C_word c,C_word *av) C_noret;
static void C_ccall trf_11347(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11347(t0,t1,t2);}

C_noret_decl(trf_11413)
static void C_ccall trf_11413(C_word c,C_word *av) C_noret;
static void C_ccall trf_11413(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11413(t0,t1,t2);}

C_noret_decl(trf_11508)
static void C_ccall trf_11508(C_word c,C_word *av) C_noret;
static void C_ccall trf_11508(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11508(t0,t1);}

C_noret_decl(trf_11605)
static void C_ccall trf_11605(C_word c,C_word *av) C_noret;
static void C_ccall trf_11605(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11605(t0,t1);}

C_noret_decl(trf_11673)
static void C_ccall trf_11673(C_word c,C_word *av) C_noret;
static void C_ccall trf_11673(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11673(t0,t1,t2);}

C_noret_decl(trf_11683)
static void C_ccall trf_11683(C_word c,C_word *av) C_noret;
static void C_ccall trf_11683(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11683(t0,t1,t2);}

C_noret_decl(trf_11828)
static void C_ccall trf_11828(C_word c,C_word *av) C_noret;
static void C_ccall trf_11828(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11828(t0,t1,t2);}

C_noret_decl(trf_11855)
static void C_ccall trf_11855(C_word c,C_word *av) C_noret;
static void C_ccall trf_11855(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11855(t0,t1,t2);}

C_noret_decl(trf_12004)
static void C_ccall trf_12004(C_word c,C_word *av) C_noret;
static void C_ccall trf_12004(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12004(t0,t1,t2);}

C_noret_decl(trf_12053)
static void C_ccall trf_12053(C_word c,C_word *av) C_noret;
static void C_ccall trf_12053(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12053(t0,t1,t2);}

C_noret_decl(trf_3708)
static void C_ccall trf_3708(C_word c,C_word *av) C_noret;
static void C_ccall trf_3708(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3708(t0,t1,t2);}

C_noret_decl(trf_3718)
static void C_ccall trf_3718(C_word c,C_word *av) C_noret;
static void C_ccall trf_3718(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3718(t0,t1);}

C_noret_decl(trf_3761)
static void C_ccall trf_3761(C_word c,C_word *av) C_noret;
static void C_ccall trf_3761(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3761(t0,t1,t2);}

C_noret_decl(trf_3860)
static void C_ccall trf_3860(C_word c,C_word *av) C_noret;
static void C_ccall trf_3860(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3860(t0,t1,t2);}

C_noret_decl(trf_3937)
static void C_ccall trf_3937(C_word c,C_word *av) C_noret;
static void C_ccall trf_3937(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3937(t0,t1,t2,t3);}

C_noret_decl(trf_3985)
static void C_ccall trf_3985(C_word c,C_word *av) C_noret;
static void C_ccall trf_3985(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3985(t0,t1,t2,t3);}

C_noret_decl(trf_4034)
static void C_ccall trf_4034(C_word c,C_word *av) C_noret;
static void C_ccall trf_4034(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4034(t0,t1,t2);}

C_noret_decl(trf_4077)
static void C_ccall trf_4077(C_word c,C_word *av) C_noret;
static void C_ccall trf_4077(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4077(t0,t1,t2);}

C_noret_decl(trf_4093)
static void C_ccall trf_4093(C_word c,C_word *av) C_noret;
static void C_ccall trf_4093(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4093(t0,t1,t2);}

C_noret_decl(trf_4111)
static void C_ccall trf_4111(C_word c,C_word *av) C_noret;
static void C_ccall trf_4111(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4111(t0,t1,t2);}

C_noret_decl(trf_4127)
static void C_ccall trf_4127(C_word c,C_word *av) C_noret;
static void C_ccall trf_4127(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4127(t0,t1);}

C_noret_decl(trf_4282)
static void C_ccall trf_4282(C_word c,C_word *av) C_noret;
static void C_ccall trf_4282(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4282(t0,t1,t2);}

C_noret_decl(trf_4316)
static void C_ccall trf_4316(C_word c,C_word *av) C_noret;
static void C_ccall trf_4316(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_4316(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4354)
static void C_ccall trf_4354(C_word c,C_word *av) C_noret;
static void C_ccall trf_4354(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4354(t0,t1);}

C_noret_decl(trf_4371)
static void C_ccall trf_4371(C_word c,C_word *av) C_noret;
static void C_ccall trf_4371(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4371(t0,t1,t2);}

C_noret_decl(trf_4388)
static void C_ccall trf_4388(C_word c,C_word *av) C_noret;
static void C_ccall trf_4388(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4388(t0,t1);}

C_noret_decl(trf_4515)
static void C_ccall trf_4515(C_word c,C_word *av) C_noret;
static void C_ccall trf_4515(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4515(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4559)
static void C_ccall trf_4559(C_word c,C_word *av) C_noret;
static void C_ccall trf_4559(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4559(t0,t1,t2);}

C_noret_decl(trf_4583)
static void C_ccall trf_4583(C_word c,C_word *av) C_noret;
static void C_ccall trf_4583(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4583(t0,t1);}

C_noret_decl(trf_4631)
static void C_ccall trf_4631(C_word c,C_word *av) C_noret;
static void C_ccall trf_4631(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4631(t0,t1,t2);}

C_noret_decl(trf_4700)
static void C_ccall trf_4700(C_word c,C_word *av) C_noret;
static void C_ccall trf_4700(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4700(t0,t1,t2);}

C_noret_decl(trf_4738)
static void C_ccall trf_4738(C_word c,C_word *av) C_noret;
static void C_ccall trf_4738(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4738(t0,t1);}

C_noret_decl(trf_4742)
static void C_ccall trf_4742(C_word c,C_word *av) C_noret;
static void C_ccall trf_4742(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4742(t0,t1,t2);}

C_noret_decl(trf_4832)
static void C_ccall trf_4832(C_word c,C_word *av) C_noret;
static void C_ccall trf_4832(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4832(t0,t1,t2);}

C_noret_decl(trf_4886)
static void C_ccall trf_4886(C_word c,C_word *av) C_noret;
static void C_ccall trf_4886(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4886(t0,t1,t2);}

C_noret_decl(trf_4905)
static void C_ccall trf_4905(C_word c,C_word *av) C_noret;
static void C_ccall trf_4905(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4905(t0,t1);}

C_noret_decl(trf_4930)
static void C_ccall trf_4930(C_word c,C_word *av) C_noret;
static void C_ccall trf_4930(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4930(t0,t1,t2);}

C_noret_decl(trf_4958)
static void C_ccall trf_4958(C_word c,C_word *av) C_noret;
static void C_ccall trf_4958(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_4958(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4976)
static void C_ccall trf_4976(C_word c,C_word *av) C_noret;
static void C_ccall trf_4976(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4976(t0,t1);}

C_noret_decl(trf_4988)
static void C_ccall trf_4988(C_word c,C_word *av) C_noret;
static void C_ccall trf_4988(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4988(t0,t1);}

C_noret_decl(trf_5116)
static void C_ccall trf_5116(C_word c,C_word *av) C_noret;
static void C_ccall trf_5116(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5116(t0,t1,t2);}

C_noret_decl(trf_5181)
static void C_ccall trf_5181(C_word c,C_word *av) C_noret;
static void C_ccall trf_5181(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5181(t0,t1,t2);}

C_noret_decl(trf_5261)
static void C_ccall trf_5261(C_word c,C_word *av) C_noret;
static void C_ccall trf_5261(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5261(t0,t1);}

C_noret_decl(trf_5274)
static void C_ccall trf_5274(C_word c,C_word *av) C_noret;
static void C_ccall trf_5274(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5274(t0,t1);}

C_noret_decl(trf_5308)
static void C_ccall trf_5308(C_word c,C_word *av) C_noret;
static void C_ccall trf_5308(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5308(t0,t1);}

C_noret_decl(trf_5311)
static void C_ccall trf_5311(C_word c,C_word *av) C_noret;
static void C_ccall trf_5311(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5311(t0,t1);}

C_noret_decl(trf_5350)
static void C_ccall trf_5350(C_word c,C_word *av) C_noret;
static void C_ccall trf_5350(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5350(t0,t1);}

C_noret_decl(trf_5437)
static void C_ccall trf_5437(C_word c,C_word *av) C_noret;
static void C_ccall trf_5437(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5437(t0,t1);}

C_noret_decl(trf_5612)
static void C_ccall trf_5612(C_word c,C_word *av) C_noret;
static void C_ccall trf_5612(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5612(t0,t1,t2,t3);}

C_noret_decl(trf_5678)
static void C_ccall trf_5678(C_word c,C_word *av) C_noret;
static void C_ccall trf_5678(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5678(t0,t1,t2);}

C_noret_decl(trf_5814)
static void C_ccall trf_5814(C_word c,C_word *av) C_noret;
static void C_ccall trf_5814(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_5814(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5826)
static void C_ccall trf_5826(C_word c,C_word *av) C_noret;
static void C_ccall trf_5826(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5826(t0,t1,t2,t3);}

C_noret_decl(trf_5845)
static void C_ccall trf_5845(C_word c,C_word *av) C_noret;
static void C_ccall trf_5845(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5845(t0,t1,t2);}

C_noret_decl(trf_5856)
static void C_ccall trf_5856(C_word c,C_word *av) C_noret;
static void C_ccall trf_5856(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5856(t0,t1);}

C_noret_decl(trf_5907)
static void C_ccall trf_5907(C_word c,C_word *av) C_noret;
static void C_ccall trf_5907(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5907(t0,t1);}

C_noret_decl(trf_6113)
static void C_ccall trf_6113(C_word c,C_word *av) C_noret;
static void C_ccall trf_6113(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6113(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6120)
static void C_ccall trf_6120(C_word c,C_word *av) C_noret;
static void C_ccall trf_6120(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6120(t0,t1);}

C_noret_decl(trf_6175)
static void C_ccall trf_6175(C_word c,C_word *av) C_noret;
static void C_ccall trf_6175(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6175(t0,t1,t2);}

C_noret_decl(trf_6209)
static void C_ccall trf_6209(C_word c,C_word *av) C_noret;
static void C_ccall trf_6209(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6209(t0,t1,t2,t3);}

C_noret_decl(trf_6251)
static void C_ccall trf_6251(C_word c,C_word *av) C_noret;
static void C_ccall trf_6251(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6251(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6261)
static void C_ccall trf_6261(C_word c,C_word *av) C_noret;
static void C_ccall trf_6261(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6261(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6288)
static void C_ccall trf_6288(C_word c,C_word *av) C_noret;
static void C_ccall trf_6288(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6288(t0,t1,t2);}

C_noret_decl(trf_6335)
static void C_ccall trf_6335(C_word c,C_word *av) C_noret;
static void C_ccall trf_6335(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6335(t0,t1);}

C_noret_decl(trf_6407)
static void C_ccall trf_6407(C_word c,C_word *av) C_noret;
static void C_ccall trf_6407(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6407(t0,t1,t2);}

C_noret_decl(trf_6413)
static void C_ccall trf_6413(C_word c,C_word *av) C_noret;
static void C_ccall trf_6413(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6413(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6433)
static void C_ccall trf_6433(C_word c,C_word *av) C_noret;
static void C_ccall trf_6433(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6433(t0,t1);}

C_noret_decl(trf_6456)
static void C_ccall trf_6456(C_word c,C_word *av) C_noret;
static void C_ccall trf_6456(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6456(t0,t1,t2);}

C_noret_decl(trf_6725)
static void C_ccall trf_6725(C_word c,C_word *av) C_noret;
static void C_ccall trf_6725(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6725(t0,t1,t2,t3);}

C_noret_decl(trf_6807)
static void C_ccall trf_6807(C_word c,C_word *av) C_noret;
static void C_ccall trf_6807(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6807(t0,t1,t2,t3);}

C_noret_decl(trf_6886)
static void C_ccall trf_6886(C_word c,C_word *av) C_noret;
static void C_ccall trf_6886(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6886(t0,t1,t2);}

C_noret_decl(trf_6939)
static void C_ccall trf_6939(C_word c,C_word *av) C_noret;
static void C_ccall trf_6939(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6939(t0,t1,t2);}

C_noret_decl(trf_6955)
static void C_ccall trf_6955(C_word c,C_word *av) C_noret;
static void C_ccall trf_6955(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6955(t0,t1,t2);}

C_noret_decl(trf_7052)
static void C_ccall trf_7052(C_word c,C_word *av) C_noret;
static void C_ccall trf_7052(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7052(t0,t1,t2);}

C_noret_decl(trf_7145)
static void C_ccall trf_7145(C_word c,C_word *av) C_noret;
static void C_ccall trf_7145(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7145(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7157)
static void C_ccall trf_7157(C_word c,C_word *av) C_noret;
static void C_ccall trf_7157(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7157(t0,t1,t2);}

C_noret_decl(trf_7196)
static void C_ccall trf_7196(C_word c,C_word *av) C_noret;
static void C_ccall trf_7196(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7196(t0,t1,t2);}

C_noret_decl(trf_7273)
static void C_ccall trf_7273(C_word c,C_word *av) C_noret;
static void C_ccall trf_7273(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7273(t0,t1);}

C_noret_decl(trf_7278)
static void C_ccall trf_7278(C_word c,C_word *av) C_noret;
static void C_ccall trf_7278(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7278(t0,t1,t2,t3);}

C_noret_decl(trf_7297)
static void C_ccall trf_7297(C_word c,C_word *av) C_noret;
static void C_ccall trf_7297(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7297(t0,t1);}

C_noret_decl(trf_7302)
static void C_ccall trf_7302(C_word c,C_word *av) C_noret;
static void C_ccall trf_7302(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7302(t0,t1,t2,t3);}

C_noret_decl(trf_7585)
static void C_ccall trf_7585(C_word c,C_word *av) C_noret;
static void C_ccall trf_7585(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7585(t0,t1,t2);}

C_noret_decl(trf_7741)
static void C_ccall trf_7741(C_word c,C_word *av) C_noret;
static void C_ccall trf_7741(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7741(t0,t1,t2,t3);}

C_noret_decl(trf_7793)
static void C_ccall trf_7793(C_word c,C_word *av) C_noret;
static void C_ccall trf_7793(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7793(t0,t1);}

C_noret_decl(trf_7801)
static void C_ccall trf_7801(C_word c,C_word *av) C_noret;
static void C_ccall trf_7801(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7801(t0,t1);}

C_noret_decl(trf_7926)
static void C_ccall trf_7926(C_word c,C_word *av) C_noret;
static void C_ccall trf_7926(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7926(t0,t1,t2);}

C_noret_decl(trf_8205)
static void C_ccall trf_8205(C_word c,C_word *av) C_noret;
static void C_ccall trf_8205(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8205(t0,t1,t2,t3);}

C_noret_decl(trf_8239)
static void C_ccall trf_8239(C_word c,C_word *av) C_noret;
static void C_ccall trf_8239(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8239(t0,t1,t2,t3);}

C_noret_decl(trf_8420)
static void C_ccall trf_8420(C_word c,C_word *av) C_noret;
static void C_ccall trf_8420(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8420(t0,t1,t2);}

C_noret_decl(trf_8469)
static void C_ccall trf_8469(C_word c,C_word *av) C_noret;
static void C_ccall trf_8469(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8469(t0,t1);}

C_noret_decl(trf_8676)
static void C_ccall trf_8676(C_word c,C_word *av) C_noret;
static void C_ccall trf_8676(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8676(t0,t1);}

C_noret_decl(trf_9036)
static void C_ccall trf_9036(C_word c,C_word *av) C_noret;
static void C_ccall trf_9036(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9036(t0,t1);}

C_noret_decl(trf_9062)
static void C_ccall trf_9062(C_word c,C_word *av) C_noret;
static void C_ccall trf_9062(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9062(t0,t1,t2,t3);}

C_noret_decl(trf_9081)
static void C_ccall trf_9081(C_word c,C_word *av) C_noret;
static void C_ccall trf_9081(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9081(t0,t1);}

C_noret_decl(trf_9406)
static void C_ccall trf_9406(C_word c,C_word *av) C_noret;
static void C_ccall trf_9406(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9406(t0,t1,t2);}

C_noret_decl(trf_9468)
static void C_ccall trf_9468(C_word c,C_word *av) C_noret;
static void C_ccall trf_9468(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9468(t0,t1);}

C_noret_decl(trf_9537)
static void C_ccall trf_9537(C_word c,C_word *av) C_noret;
static void C_ccall trf_9537(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9537(t0,t1,t2,t3);}

C_noret_decl(trf_9547)
static void C_ccall trf_9547(C_word c,C_word *av) C_noret;
static void C_ccall trf_9547(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9547(t0,t1,t2,t3);}

C_noret_decl(trf_9710)
static void C_ccall trf_9710(C_word c,C_word *av) C_noret;
static void C_ccall trf_9710(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9710(t0,t1,t2);}

C_noret_decl(trf_9718)
static void C_ccall trf_9718(C_word c,C_word *av) C_noret;
static void C_ccall trf_9718(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9718(t0,t1,t2);}

C_noret_decl(trf_9744)
static void C_ccall trf_9744(C_word c,C_word *av) C_noret;
static void C_ccall trf_9744(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9744(t0,t1,t2);}

C_noret_decl(trf_9883)
static void C_ccall trf_9883(C_word c,C_word *av) C_noret;
static void C_ccall trf_9883(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9883(t0,t1);}

C_noret_decl(trf_9926)
static void C_ccall trf_9926(C_word c,C_word *av) C_noret;
static void C_ccall trf_9926(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9926(t0,t1,t2);}

C_noret_decl(trf_9951)
static void C_ccall trf_9951(C_word c,C_word *av) C_noret;
static void C_ccall trf_9951(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9951(t0,t1);}

C_noret_decl(trf_9976)
static void C_ccall trf_9976(C_word c,C_word *av) C_noret;
static void C_ccall trf_9976(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9976(t0,t1,t2);}

/* k10010 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in ... */
static void C_ccall f_10012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10012,2,av);}
/* expand.scm:1467: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[92];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10013 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in ... */
static void C_ccall f_10014(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10014,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10018,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1472: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[92];
av2[3]=t2;
av2[4]=lf[266];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10016 in a10013 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in ... */
static void C_ccall f_10018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10018,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10028,a[2]=t5,a[3]=t7,a[4]=((C_word)li137),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_10028(t9,((C_word*)t0)[3],t2);}

/* expand in k10016 in a10013 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in ... */
static void C_fcall f_10028(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_10028,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[55],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10053,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* expand.scm:1478: expand */
t11=t7;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* k10051 in expand in k10016 in a10013 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in ... */
static void C_ccall f_10053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10053,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[55],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10061 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in ... */
static void C_ccall f_10063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10063,2,av);}
/* expand.scm:1422: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[267];
av2[3]=lf[268];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in ... */
static void C_ccall f_10065(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10065,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10069,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1427: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[267];
av2[3]=t2;
av2[4]=lf[278];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in ... */
static void C_ccall f_10069(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_10069,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10077,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1430: r */
t8=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[277];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}

/* k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in ... */
static void C_ccall f_10077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10077,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10080,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1431: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[229];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in ... */
static void C_ccall f_10080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_10080,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:1432: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[276];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in ... */
static void C_ccall f_10083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10083,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1433: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[275];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_ccall f_10086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10086,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1434: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[235];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_10089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_10089,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10100,a[2]=((C_word*)t0)[4],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10102,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word)li141),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_10102(t10,t6,((C_word*)t0)[9],C_SCHEME_FALSE);}

/* k10098 in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_10100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10100,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[60],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_fcall f_10102(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,4)))){
C_save_and_reclaim_args((void *)trf_10102,4,t0,t1,t2,t3);}
a=C_alloc(13);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[269];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10116,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* expand.scm:1441: ##sys#check-syntax */
t10=*((C_word*)lf[59]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[267];
av2[3]=t6;
av2[4]=lf[274];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}

/* k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_10116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_10116,2,av);}
a=C_alloc(11);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10122,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10129,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1445: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
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
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10135,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* expand.scm:1448: c */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[12];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k10120 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_10122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10122,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10125,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1446: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10102(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* k10123 in k10120 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_ccall f_10125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10125,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[270];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10127 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_10129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10129,2,av);}
/* expand.scm:1443: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[271]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[271]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[272];
av2[3]=t1;
tp(4,av2);}}

/* k10133 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_10135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_10135,2,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1449: expand */
t3=((C_word*)((C_word*)t0)[7])[1];
f_10102(t3,t2,((C_word*)t0)[8],C_SCHEME_TRUE);}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10234,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[4],a[4]=((C_word)li139),tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[17]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10249,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10251,a[2]=t6,a[3]=t4,a[4]=t11,a[5]=t5,a[6]=((C_word)li140),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_10251(t13,t9,t7);}}

/* k10136 in k10133 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_ccall f_10138(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10138,2,av);}
a=C_alloc(5);
t2=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,1,lf[273]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_i_length(((C_word*)t0)[2]);
t5=C_eqp(t4,C_fix(3));
if(C_truep(t5)){
t6=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1453: c */
t7=((C_word*)t0)[5];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_10153(2,av2);}}}}

/* k10151 in k10136 in k10133 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in ... */
static void C_ccall f_10153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_10153,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,t2,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[108],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10192 in k10247 in k10133 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in ... */
static void C_fcall f_10194(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_10194,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1465: expand */
t4=((C_word*)((C_word*)t0)[4])[1];
f_10102(t4,t3,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k10196 in k10192 in k10247 in k10133 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in ... */
static void C_ccall f_10198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_10198,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[262],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10199 in k10247 in k10133 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in ... */
static void C_ccall f_10201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_10201,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_10194(t3,C_a_i_list(&a,2,t2,((C_word*)t0)[4]));}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_10194(t3,C_a_i_cons(&a,2,lf[108],t2));}}

/* g2348 in k10133 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static C_word C_fcall f_10234(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[220],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2));}

/* k10247 in k10133 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_ccall f_10249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10249,2,av);}
a=C_alloc(14);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10194,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10201,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t6=C_i_length(((C_word*)t0)[6]);
t7=C_eqp(t6,C_fix(3));
if(C_truep(t7)){
t8=C_i_cadr(((C_word*)t0)[6]);
/* expand.scm:1462: c */
t9=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t5;
av2[2]=((C_word*)t0)[9];
av2[3]=t8;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}
else{
t8=t5;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_10201(2,av2);}}}

/* map-loop2342 in k10133 in k10114 in expand in k10087 in k10084 in k10081 in k10078 in k10075 in k10067 in a10064 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_fcall f_10251(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10251,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* expand.scm:1458: g2348 */
  f_10234(C_a_i(&a,15),((C_word*)t0)[2],t3)
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

/* k10297 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in ... */
static void C_ccall f_10299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10299,2,av);}
/* expand.scm:1357: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[236];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in ... */
static void C_ccall f_10301(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10301,5,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10308,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1363: r */
t8=t3;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[276];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}

/* k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in ... */
static void C_ccall f_10308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_10308,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10311,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1364: r */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[229];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in ... */
static void C_ccall f_10311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10311,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1365: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[235];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in ... */
static void C_ccall f_10314(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10314,2,av);}
a=C_alloc(11);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10319,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li143),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_10319(t6,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in ... */
static void C_fcall f_10319(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_10319,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[279];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10333,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1371: ##sys#check-syntax */
t10=*((C_word*)lf[59]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[236];
av2[3]=t6;
av2[4]=lf[287];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}

/* k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in ... */
static void C_ccall f_10333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_10333,2,av);}
a=C_alloc(11);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10339,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10346,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1374: chicken.base#open-output-string */
t4=*((C_word*)lf[147]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10371,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* expand.scm:1378: c */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k10337 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_ccall f_10339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10339,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10342,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1376: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10319(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k10340 in k10337 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_10342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10342,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[280];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10344 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_ccall f_10346(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10346,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[281]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1374: ##sys#print */
t6=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[283];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10350 in k10344 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_10352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_10352,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1374: ##sys#print */
t3=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10353 in k10350 in k10344 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_10355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10355,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1374: ##sys#print */
t3=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[282];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10356 in k10353 in k10350 in k10344 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_10358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10358,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1374: chicken.base#get-output-string */
t3=*((C_word*)lf[131]+1);{
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

/* k10359 in k10356 in k10353 in k10350 in k10344 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_10361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10361,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10365,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1375: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
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

/* k10363 in k10359 in k10356 in k10353 in k10350 in k10344 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_ccall f_10365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10365,2,av);}
/* expand.scm:1373: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[271]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[271]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_ccall f_10371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
C_save_and_reclaim((void *)f_10371,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_10374(2,av2);}}
else{
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_eqp(C_SCHEME_TRUE,t3);
if(C_truep(t4)){
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_10374(2,av2);}}
else{
t5=C_u_i_car(((C_word*)t0)[2]);
t6=C_i_numberp(t5);
if(C_truep(t6)){
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_10374(2,av2);}}
else{
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_charp(t7);
if(C_truep(t8)){
t9=t2;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
f_10374(2,av2);}}
else{
t9=C_u_i_car(((C_word*)t0)[2]);
t10=C_i_stringp(t9);
if(C_truep(t10)){
t11=t2;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
f_10374(2,av2);}}
else{
t11=C_u_i_car(((C_word*)t0)[2]);
t12=C_eofp(t11);
if(C_truep(t12)){
t13=t2;{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
f_10374(2,av2);}}
else{
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10620,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
t14=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1385: chicken.blob#blob? */
t15=*((C_word*)lf[286]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}}}}}}}

/* k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_10374(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10374,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10437,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1390: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[12]+1);{
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
t2=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10454,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1400: expand */
t5=((C_word*)((C_word*)t0)[7])[1];
f_10319(t5,t4,((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=C_i_length(((C_word*)t0)[2]);
t5=C_eqp(t4,C_fix(3));
if(C_truep(t5)){
t6=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1402: c */
t7=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_10460(2,av2);}}}}}

/* k10375 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_10377(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10377,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
t5=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1392: c */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_10383(2,av2);}}}

/* k10381 in k10375 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_10383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10383,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[108],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10409,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1396: c */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}}

/* k10407 in k10381 in k10375 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_10409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10409,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_a_i_list(&a,1,lf[273]):C_u_i_car(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10435 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_10437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10437,2,av);}
/* expand.scm:1390: expand */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10319(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k10452 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_10454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10454,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10458 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_10460(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10460,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1403: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[277];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_u_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(4));
if(C_truep(t4)){
t5=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1409: c */
t6=((C_word*)t0)[7];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_10500(2,av2);}}}}

/* k10461 in k10458 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_10463,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=C_i_caddr(((C_word*)t0)[2]);
t8=C_a_i_list(&a,2,t7,t2);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10482,a[2]=t2,a[3]=t9,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1407: expand */
t11=((C_word*)((C_word*)t0)[4])[1];
f_10319(t11,t10,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k10480 in k10461 in k10458 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_10482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_10482,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[262],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[55],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10498 in k10458 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_10500(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_10500,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1410: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[277];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[108],t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10557,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1420: expand */
t8=((C_word*)((C_word*)t0)[4])[1];
f_10319(t8,t7,((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* k10501 in k10498 in k10458 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_10503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_10503,2,av);}
a=C_alloc(34);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[76],C_SCHEME_END_OF_LIST,t3);
t5=t4;
t6=C_i_cadr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,3,lf[223],t6,t2);
t8=t7;
t9=C_i_cadddr(((C_word*)t0)[2]);
t10=C_a_i_list(&a,3,lf[223],t9,t2);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10530,a[2]=t8,a[3]=t11,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1417: expand */
t13=((C_word*)((C_word*)t0)[4])[1];
f_10319(t13,t12,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k10528 in k10501 in k10498 in k10458 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_ccall f_10530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_10530,2,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,4,lf[284],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,3,lf[76],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[95],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10555 in k10498 in k10458 in k10372 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_10557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_10557,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[262],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10618 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_10620(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10620,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_10374(2,av2);}}
else{
t2=C_u_i_car(((C_word*)t0)[3]);
t3=C_i_vectorp(t2);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_10374(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_u_i_car(((C_word*)t0)[3]);
/* expand.scm:1387: ##sys#srfi-4-vector? */
t6=*((C_word*)lf[285]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k10630 in k10618 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_10632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10632,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_10374(2,av2);}}
else{
t2=C_u_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10648,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1389: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[220];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10374(2,av2);}}}}

/* k10646 in k10630 in k10618 in k10369 in k10331 in expand in k10312 in k10309 in k10306 in a10300 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_10648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10648,2,av);}
t2=C_i_caar(((C_word*)t0)[2]);
/* expand.scm:1389: c */
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
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k10680 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in ... */
static void C_ccall f_10682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10682,2,av);}
/* expand.scm:1341: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[229];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10683 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in ... */
static void C_ccall f_10684(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10684,5,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t5);
t7=t6;
t8=C_u_i_car(t5);
if(C_truep(C_i_nullp(t7))){
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10707,a[2]=t8,a[3]=t7,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1353: r */
t10=t3;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[277];
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}}}

/* k10705 in a10683 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in ... */
static void C_ccall f_10707(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10707,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10726,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1355: r */
t7=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[229];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k10724 in k10705 in a10683 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in ... */
static void C_ccall f_10726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_10726,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[262],((C_word*)t0)[3],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[55],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10732 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in ... */
static void C_ccall f_10734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10734,2,av);}
/* expand.scm:1327: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[238];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10735 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in ... */
static void C_ccall f_10736(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10736,5,av);}
a=C_alloc(5);
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t5);
t7=t6;
t8=C_u_i_car(t5);
if(C_truep(C_i_nullp(t7))){
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10767,a[2]=t7,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1339: r */
t10=t3;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[238];
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}}}

/* k10765 in a10735 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in ... */
static void C_ccall f_10767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_10767,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[262],((C_word*)t0)[4],t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10769 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in ... */
static void C_ccall f_10771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10771,2,av);}
/* expand.scm:1315: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[288];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10772 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in ... */
static void C_ccall f_10773(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10773,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10777,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1320: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[288];
av2[3]=t2;
av2[4]=lf[290];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10775 in a10772 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in ... */
static void C_ccall f_10777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_save_and_reclaim((void *)f_10777,2,av);}
a=C_alloc(13);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_a_i_list(&a,2,lf[289],t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10800,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_u_i_cdr(t2);
t9=C_a_i_list(&a,1,t3);
/* expand.scm:1197: ##sys#append */
t10=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[97],t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10798 in k10775 in a10772 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in ... */
static void C_ccall f_10800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10800,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10813 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in ... */
static void C_ccall f_10815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10815,2,av);}
/* expand.scm:1306: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[291];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10816 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in ... */
static void C_ccall f_10817(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10817,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10821,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1311: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[291];
av2[3]=t2;
av2[4]=lf[294];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10819 in a10816 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in ... */
static void C_ccall f_10821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10821,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10824,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1312: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[292]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[292]+1);
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
av2[4]=lf[293];
tp(5,av2);}}

/* k10822 in k10819 in a10816 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in ... */
static void C_ccall f_10824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10824,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[112],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10835 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_10837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10837,2,av);}
/* expand.scm:1297: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[295];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10838 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_10839(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10839,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10843,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1302: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[295];
av2[3]=t2;
av2[4]=lf[298];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10841 in a10838 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in ... */
static void C_ccall f_10843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10843,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1303: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[292]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[292]+1);
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
av2[4]=lf[297];
tp(5,av2);}}

/* k10844 in k10841 in a10838 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in ... */
static void C_ccall f_10846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10846,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[296],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10857 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in ... */
static void C_ccall f_10859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10859,2,av);}
/* expand.scm:1288: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[299];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10860 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in ... */
static void C_ccall f_10861(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10861,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10865,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1293: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[299];
av2[3]=t2;
av2[4]=lf[302];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10863 in a10860 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_10865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10865,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1294: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[292]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[292]+1);
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
av2[4]=lf[301];
tp(5,av2);}}

/* k10866 in k10863 in a10860 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in ... */
static void C_ccall f_10868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10868,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[300],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10879 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in ... */
static void C_ccall f_10881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10881,2,av);}
/* expand.scm:1275: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[60];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10882 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in ... */
static void C_ccall f_10883(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10883,5,av);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10887,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10895,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(t2);
if(C_truep(C_i_pairp(t7))){
t8=C_i_cadr(t2);
t9=t6;
f_10895(t9,C_i_symbolp(t8));}
else{
t8=t6;
f_10895(t8,C_SCHEME_FALSE);}}

/* k10885 in a10882 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in ... */
static void C_ccall f_10887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10887,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[55],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10893 in a10882 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in ... */
static void C_fcall f_10895(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_10895,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1281: ##sys#check-syntax */
t3=*((C_word*)lf[59]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[60];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[304];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1284: ##sys#check-syntax */
t3=*((C_word*)lf[59]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[60];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[306];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k10896 in k10893 in a10882 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_10898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10898,2,av);}
t2=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1282: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[292]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[292]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=lf[303];
tp(5,av2);}}

/* k10906 in k10893 in a10882 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_10908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10908,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1285: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[292]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[292]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=lf[305];
tp(5,av2);}}

/* k10931 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in ... */
static void C_ccall f_10933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10933,2,av);}
/* expand.scm:1261: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10934 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in ... */
static void C_ccall f_10935(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10935,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10939,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1266: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[105];
av2[3]=t2;
av2[4]=lf[310];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10937 in a10934 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in ... */
static void C_ccall f_10939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
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
C_save_and_reclaim((void *)f_10939,2,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=C_i_getprop(t3,lf[7],C_SCHEME_FALSE);
t7=(C_truep(t6)?t6:t3);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10956,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10976,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1270: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[309]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[309]+1);
av2[1]=t10;
tp(2,av2);}}

/* k10954 in k10937 in a10934 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in ... */
static void C_ccall f_10956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_10956,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10965,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10972,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1271: r */
t5=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[105];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k10957 in k10954 in k10937 in a10934 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_10959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10959,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[307],((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10963 in k10954 in k10937 in a10934 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_10965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_10965,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
/* expand.scm:442: ##sys#syntax-error-hook */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[113];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[307],((C_word*)t0)[5],((C_word*)t0)[6]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k10970 in k10954 in k10937 in a10934 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_10972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10972,2,av);}
/* expand.scm:1271: c */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k10974 in k10937 in a10934 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in ... */
static void C_ccall f_10976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10976,2,av);}
/* expand.scm:1270: ##sys#register-export */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[308]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[308]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k10978 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in ... */
static void C_ccall f_10980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10980,2,av);}
/* expand.scm:1233: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[104];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in ... */
static void C_ccall f_10982(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10982,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10986,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1238: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[104];
av2[3]=t2;
av2[4]=lf[316];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in ... */
static void C_ccall f_10986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_10986,2,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10991,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li153),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10991(t5,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* loop in k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in ... */
static void C_fcall f_10991(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_10991,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_cadr(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_i_pairp(t4);
if(C_truep(C_i_not(t8))){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11006,a[2]=t4,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1243: ##sys#check-syntax */
t10=*((C_word*)lf[59]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[104];
av2[3]=t2;
av2[4]=lf[313];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t9=C_i_car(t4);
if(C_truep(C_i_pairp(t9))){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11062,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1254: ##sys#check-syntax */
t11=*((C_word*)lf[59]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[104];
av2[3]=t2;
av2[4]=lf[314];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11072,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t7,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1257: ##sys#check-syntax */
t11=*((C_word*)lf[59]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[104];
av2[3]=t2;
av2[4]=lf[315];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}}}

/* k11004 in loop in k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in ... */
static void C_ccall f_11006(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11006,2,av);}
a=C_alloc(12);
t2=C_i_getprop(((C_word*)t0)[2],lf[7],C_SCHEME_FALSE);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11053,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1245: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[309]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[309]+1);
av2[1]=t6;
tp(2,av2);}}

/* k11015 in k11004 in loop in k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_11017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_11017,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11042,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11049,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1246: r */
t5=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[104];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k11018 in k11015 in k11004 in loop in k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in ... */
static void C_ccall f_11020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11020,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,lf[311],((C_word*)t0)[2]);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[97],((C_word*)t0)[2],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[108],t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_a_i_list(&a,3,lf[97],((C_word*)t0)[2],lf[312]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[108],t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11040 in k11015 in k11004 in loop in k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in ... */
static void C_ccall f_11042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11042,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
/* expand.scm:442: ##sys#syntax-error-hook */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[113];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_11020(2,av2);}}}

/* k11047 in k11015 in k11004 in loop in k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in ... */
static void C_ccall f_11049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11049,2,av);}
/* expand.scm:1246: c */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k11051 in k11004 in loop in k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_11053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11053,2,av);}
/* expand.scm:1245: ##sys#register-export */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[308]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[308]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k11060 in loop in k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in ... */
static void C_ccall f_11062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11062,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1255: chicken.syntax#expand-curried-define */
t3=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11067 in k11060 in loop in k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_11069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11069,2,av);}
/* expand.scm:1255: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10991(t2,((C_word*)t0)[3],t1);}

/* k11070 in loop in k10984 in a10981 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in ... */
static void C_ccall f_11072(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_11072,2,av);}
a=C_alloc(15);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,lf[76],t5);
t7=C_a_i_list3(&a,3,t2,t3,t6);
/* expand.scm:1258: loop */
t8=((C_word*)((C_word*)t0)[5])[1];
f_10991(t8,((C_word*)t0)[6],t7);}

/* k11105 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in ... */
static void C_ccall f_11107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11107,2,av);}
/* expand.scm:1224: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[317];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11108 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in ... */
static void C_ccall f_11109(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11109,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11113,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1229: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[317];
av2[3]=t2;
av2[4]=lf[318];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11111 in a11108 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in ... */
static void C_ccall f_11113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11113,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[108],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11122 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in ... */
static void C_ccall f_11124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11124,2,av);}
/* expand.scm:1216: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[284];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11125 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in ... */
static void C_ccall f_11126(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11126,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11130,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1221: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[284];
av2[3]=t2;
av2[4]=lf[319];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11128 in a11125 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in ... */
static void C_ccall f_11130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11130,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[262],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11139 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 in ... */
static void C_ccall f_11141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11141,2,av);}
/* expand.scm:1208: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
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

/* a11142 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 in ... */
static void C_ccall f_11143(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11143,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11147,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1213: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[220];
av2[3]=t2;
av2[4]=lf[320];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11145 in a11142 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in ... */
static void C_ccall f_11147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11147,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[75],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11156 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11158,2,av);}
/* expand.scm:1200: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
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

/* a11159 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11160(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11160,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11164,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1205: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[231];
av2[3]=t2;
av2[4]=lf[321];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11162 in a11159 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 in ... */
static void C_ccall f_11164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11164,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[76],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11173 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11175,2,av);}
/* expand.scm:1186: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[322];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11176 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11177(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11177,5,av);}
a=C_alloc(3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11181,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1190: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[322];
av2[3]=t2;
av2[4]=lf[324];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11179 in a11176 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11181,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11184,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1191: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[309]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[309]+1);
av2[1]=t2;
tp(2,av2);}}

/* k11182 in k11179 in a11176 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11184,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1192: ##sys#module-name */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[323]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[323]+1);
av2[1]=t2;
av2[2]=t1;
tp(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11192 in k11182 in k11179 in a11176 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11194,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[75],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11196 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11198,2,av);}
/* expand.scm:1163: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[325];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11199 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11200(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11200,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11204,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1167: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[325];
av2[3]=t2;
av2[4]=lf[335];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11202 in a11199 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11204,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* expand.scm:1168: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
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

/* k11205 in k11202 in a11199 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11207,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11210,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(lf[329],t2);
if(C_truep(t4)){
/* expand.scm:1170: syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[332]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[332]+1);
av2[1]=t3;
av2[2]=lf[325];
av2[3]=lf[334];
tp(4,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_11210(2,av2);}}}

/* k11208 in k11205 in k11202 in a11199 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
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
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_11210,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,lf[75],((C_word*)t0)[2]);
t3=t2;
t4=C_a_i_list(&a,2,lf[75],lf[326]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11233,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t7=C_i_caddr(((C_word*)t0)[4]);
/* expand.scm:1177: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[12]+1);{
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

/* k11231 in k11208 in k11205 in k11202 in a11199 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11233(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_11233,2,av);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(lf[329],t1);
if(C_truep(t3)){
t4=C_a_i_list(&a,2,lf[75],lf[329]);
t5=C_a_i_list(&a,4,lf[327],((C_word*)t0)[2],((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,2,lf[328],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t1))){
t4=C_a_i_list(&a,2,lf[330],t1);
t5=C_a_i_list(&a,2,lf[75],t4);
t6=C_a_i_list(&a,4,lf[327],((C_word*)t0)[2],((C_word*)t0)[3],t5);
t7=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,2,lf[328],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(t1))){
/* expand.scm:1181: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[331]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[331]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[325];
tp(4,av2);}}
else{
t4=C_i_caddr(((C_word*)t0)[5]);
/* expand.scm:1183: syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[332]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[332]+1);
av2[1]=t2;
av2[2]=lf[325];
av2[3]=lf[333];
av2[4]=t4;
tp(5,av2);}}}}}

/* k11234 in k11231 in k11208 in k11205 in k11202 in a11199 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 in ... */
static void C_ccall f_11236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11236,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,lf[75],t1);
t3=C_a_i_list(&a,4,lf[327],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[328],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11280 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11282,2,av);}
/* expand.scm:1128: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[336];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11284(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11284,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11288,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1132: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[336];
av2[3]=t2;
av2[4]=lf[344];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11288,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11291,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1133: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[12]+1);{
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

/* k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11291,2,av);}
a=C_alloc(7);
t2=C_i_cadr(t1);
t3=C_i_car(t2);
t4=t3;
t5=C_u_i_cdr(t2);
t6=C_i_caddr(t1);
t7=t6;
t8=C_u_i_cdr(t1);
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11449,a[2]=t4,a[3]=t5,a[4]=t10,a[5]=((C_word*)t0)[2],a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1141: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[343]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[343]+1);
av2[1]=t11;
av2[2]=t4;
tp(3,av2);}}

/* k11312 in k11340 in k11409 in k11447 in k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 in ... */
static void C_ccall f_11314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_11314,2,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,3,lf[107],lf[340],lf[341]);
t3=C_a_i_list(&a,2,lf[342],((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,5,lf[109],t1,C_SCHEME_TRUE,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11340 in k11409 in k11447 in k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11342(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_11342,2,av);}
a=C_alloc(31);
t2=C_a_i_list(&a,2,lf[75],t1);
t3=C_a_i_list(&a,2,lf[75],((C_word*)t0)[2]);
t4=C_a_i_list(&a,5,lf[339],((C_word*)t0)[3],((C_word*)t0)[4],t2,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11314,a[2]=t5,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1156: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[343]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[343]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}

/* g1995 in k11447 in k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_11347(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11347,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11354,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_i_cadr(t2);
/* expand.scm:1145: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[331]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[331]+1);
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[336];
tp(4,av2);}}

/* k11352 in g1995 in k11447 in k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_save_and_reclaim((void *)f_11354,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_symbolp(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
f_11366(2,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t6=C_u_i_length(((C_word*)t0)[3]);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_symbolp(t8))){
t9=C_i_cadr(((C_word*)t0)[3]);
/* expand.scm:1150: chicken.internal#valid-library-specifier? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[338]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[338]+1);
av2[1]=t5;
av2[2]=t9;
tp(3,av2);}}
else{
t9=t5;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_11366(2,av2);}}}
else{
t8=t5;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_11366(2,av2);}}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_11366(2,av2);}}}}

/* k11355 in k11352 in g1995 in k11447 in k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 in ... */
static void C_ccall f_11357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11357,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11364 in k11352 in g1995 in k11447 in k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 in ... */
static void C_ccall f_11366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11366,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* expand.scm:1151: ##sys#syntax-error-hook */
t2=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[337];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k11409 in k11447 in k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_11411,2,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,2,lf[75],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1154: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[331]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[331]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[336];
tp(4,av2);}}

/* map-loop1989 in k11447 in k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_11413(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11413,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11438,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1143: g1995 */
t5=((C_word*)t0)[4];
f_11347(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11436 in map-loop1989 in k11447 in k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11438(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11438,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11413(t6,((C_word*)t0)[5],t5);}

/* k11447 in k11289 in k11286 in a11283 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,3)))){
C_save_and_reclaim((void *)f_11449,2,av);}
a=C_alloc(31);
t2=C_a_i_list(&a,2,lf[75],t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11347,a[2]=((C_word*)t0)[2],a[3]=((C_word)li161),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[17]);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11411,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11413,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,a[6]=((C_word)li162),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_11413(t14,t10,((C_word*)t0)[3]);}

/* k11451 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11453,2,av);}
/* expand.scm:1119: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[345];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11454 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_11455,5,av);}
t5=*((C_word*)lf[346]+1);
/* expand.scm:1122: g1972 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[346]+1));
C_word *av2;
if(c >= 10) {
  av2=av;
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[346]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=*((C_word*)lf[4]+1);
av2[6]=*((C_word*)lf[20]+1);
av2[7]=C_SCHEME_FALSE;
av2[8]=C_SCHEME_TRUE;
av2[9]=lf[345];
tp(10,av2);}}

/* k11461 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11463,2,av);}
/* expand.scm:1109: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[347];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11464 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11465(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11465,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11469,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11482,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cdr(t2);
/* expand.scm:1113: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k11467 in a11464 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11469,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11472,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1114: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[309]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[309]+1);
av2[1]=t3;
tp(2,av2);}}

/* k11470 in k11467 in a11464 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11472,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11475,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* expand.scm:1116: ##sys#add-to-export-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[349]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[349]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[348];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11473 in k11470 in k11467 in a11464 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11475,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[348];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11480 in a11464 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11482,2,av);}
/* expand.scm:1113: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[331]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[331]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[347];
tp(4,av2);}}

/* k11488 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11490,2,av);}
/* expand.scm:1049: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[350];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11492(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11492,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11496,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1053: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[350];
av2[3]=t2;
av2[4]=lf[357];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11496(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11496,2,av);}
a=C_alloc(6);
t2=C_i_length(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11502,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1055: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[343]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[343]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11502(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11502,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11508,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(4)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11653,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_caddr(((C_word*)t0)[5]);
/* expand.scm:1062: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[12]+1);{
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
else{
t4=t3;
f_11508(t4,C_SCHEME_FALSE);}}

/* k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_11508(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_11508,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1063: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11580,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11639,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_caddr(((C_word*)t0)[6]);
/* expand.scm:1096: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k11509 in k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11511(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_11511,2,av);}
a=C_alloc(13);
t2=t1;
t3=C_i_cadddr(t2);
t4=t3;
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],C_fix(4)))){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11523,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11557,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11561,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1082: scheme#symbol->string */
t8=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11564,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1088: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[350];
av2[3]=t2;
av2[4]=lf[356];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k11521 in k11509 in k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11523,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11526,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1083: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[350];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k11524 in k11521 in k11509 in k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11526(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,1)))){
C_save_and_reclaim((void *)f_11526,2,av);}
a=C_alloc(36);
t2=C_i_cddddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[329],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t7=C_a_i_list(&a,4,t1,((C_word*)t0)[5],lf[351],t6);
t8=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[108],t5,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k11555 in k11509 in k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11557,2,av);}
/* expand.scm:1079: scheme#string->symbol */
t2=*((C_word*)lf[352]+1);{
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

/* k11559 in k11509 in k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11561,2,av);}
/* expand.scm:1080: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[353]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[353]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[354];
av2[3]=t1;
tp(4,av2);}}

/* k11562 in k11509 in k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11564,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* expand.scm:1092: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[343]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[343]+1);
av2[1]=t2;
av2[2]=t3;
tp(3,av2);}}

/* k11569 in k11562 in k11509 in k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11571,2,av);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* expand.scm:1090: ##sys#instantiate-functor */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[355]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[355]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=t2;
tp(5,av2);}}

/* k11578 in k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11580,2,av);}
a=C_alloc(6);
t2=C_eqp(lf[329],t1);
t3=(C_truep(t2)?C_SCHEME_TRUE:t1);
t4=t3;
t5=C_i_cdddr(((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11605,a[2]=t6,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t6))){
t8=C_u_i_cdr(t6);
if(C_truep(C_i_nullp(t8))){
t9=C_u_i_car(t6);
t10=t7;
f_11605(t10,C_i_stringp(t9));}
else{
t9=t7;
f_11605(t9,C_SCHEME_FALSE);}}
else{
t8=t7;
f_11605(t8,C_SCHEME_FALSE);}}

/* k11603 in k11578 in k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_11605(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,1)))){
C_save_and_reclaim_args((void *)trf_11605,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[110],t2,*((C_word*)lf[3]+1));
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,lf[109],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[109],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11637 in k11506 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11639,2,av);}
/* expand.scm:1096: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[331]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[331]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[350];
tp(4,av2);}}

/* k11651 in k11500 in k11494 in a11491 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11653,2,av);}
t2=((C_word*)t0)[2];
f_11508(t2,C_eqp(lf[351],t1));}

/* k11663 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11665,2,av);}
/* expand.scm:992: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[358];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11667(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11667,5,av);}
a=C_alloc(22);
t5=C_i_cdr(t2);
t6=t5;
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11673,a[2]=t6,a[3]=((C_word)li167),tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11683,a[2]=t8,a[3]=t10,a[4]=((C_word)li168),tmp=(C_word)a,a+=5,tmp));
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11828,a[2]=t6,a[3]=t8,a[4]=t14,a[5]=t10,a[6]=((C_word)li170),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_11828(t16,t1,t6);}

/* err in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_11673(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_11673,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_a_i_cons(&a,2,lf[358],((C_word*)t0)[2]);
/* expand.scm:999: ##sys#error */
t4=*((C_word*)lf[31]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[359];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* test in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_11683(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_11683,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11697,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1003: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* expand.scm:1004: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_11673(t4,t1,t2);}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11713,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1008: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}}

/* k11695 in test in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11697,2,av);}
/* expand.scm:1003: chicken.platform#feature? */
t2=*((C_word*)lf[360]+1);{
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

/* k11711 in test in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11713(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11713,2,av);}
a=C_alloc(5);
t2=C_eqp(t1,lf[238]);
if(C_truep(t2)){
t3=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1012: test */
t6=((C_word*)((C_word*)t0)[4])[1];
f_11683(t6,t4,t5);}
else{
/* expand.scm:1014: err */
t4=((C_word*)((C_word*)t0)[5])[1];
f_11673(t4,((C_word*)t0)[3],((C_word*)t0)[6]);}}}
else{
t3=C_eqp(t1,lf[229]);
if(C_truep(t3)){
t4=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(C_i_not(t4))){
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11772,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1018: test */
t7=((C_word*)((C_word*)t0)[4])[1];
f_11683(t7,t5,t6);}
else{
/* expand.scm:1020: err */
t5=((C_word*)((C_word*)t0)[5])[1];
f_11673(t5,((C_word*)t0)[3],((C_word*)t0)[6]);}}
else{
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=C_eqp(t1,lf[361]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11806,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadr(((C_word*)t0)[6]);
/* expand.scm:1021: test */
t7=((C_word*)((C_word*)t0)[4])[1];
f_11683(t7,t5,t6);}
else{
/* expand.scm:1022: err */
t5=((C_word*)((C_word*)t0)[5])[1];
f_11673(t5,((C_word*)t0)[3],((C_word*)t0)[6]);}}}}

/* k11735 in k11711 in test in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11737,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[238],t2);
/* expand.scm:1013: test */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11683(t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11770 in k11711 in test in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11772,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,lf[229],t2);
/* expand.scm:1019: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_11683(t4,((C_word*)t0)[2],t3);}}

/* k11804 in k11711 in test in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11806,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_not(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* expand in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_11828(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_11828,3,t0,t1,t2);}
a=C_alloc(16);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[2],lf[17]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11853,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11855,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li169),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_11855(t13,t9,((C_word*)t0)[2]);}
else{
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
/* expand.scm:1028: err */
t5=((C_word*)((C_word*)t0)[3])[1];
f_11673(t5,t1,t2);}
else{
t5=C_i_car(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_i_pairp(t6);
if(C_truep(C_i_not(t9))){
/* expand.scm:1033: err */
t10=((C_word*)((C_word*)t0)[3])[1];
f_11673(t10,t1,t6);}
else{
t10=C_i_car(t6);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11946,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t8,a[6]=((C_word*)t0)[5],a[7]=t11,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1035: chicken.syntax#strip-syntax */
t13=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t13;
av2[1]=t12;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}}}}

/* k11851 in expand in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11853,2,av);}{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[31]+1);
av2[3]=lf[362];
av2[4]=t1;
C_apply(5,av2);}}

/* map-loop1878 in expand in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_11855(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11855,3,t0,t1,t2);}
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

/* k11932 in k11944 in expand in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11934,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[108],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* expand.scm:1041: expand */
t2=((C_word*)((C_word*)t0)[4])[1];
f_11828(t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k11944 in expand in a11666 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11946,2,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[235]);
if(C_truep(t2)){
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_eqp(t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(C_truep(t4)?lf[363]:C_a_i_cons(&a,2,lf[108],t3));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1040: test */
t4=((C_word*)((C_word*)t0)[6])[1];
f_11683(t4,t3,((C_word*)t0)[7]);}}

/* k11956 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11958,2,av);}
/* expand.scm:984: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[364];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11959 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11960(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11960,5,av);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11964,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11985,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:988: r */
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[107];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k11962 in a11959 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11964,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:989: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[107];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k11973 in k11962 in a11959 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11975,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[328],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11983 in a11959 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11985,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* expand.scm:988: ##sys#register-meta-expression */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[365]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[365]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
tp(3,av2);}}

/* k11991 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11993,2,av);}
/* expand.scm:966: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11994 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_11995(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11995,5,av);}
a=C_alloc(22);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12004,a[2]=t3,a[3]=t4,a[4]=((C_word)li175),tmp=(C_word)a,a+=5,tmp);
t10=C_i_cdr(t2);
t11=C_i_check_list_2(t10,lf[17]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12051,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12053,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,a[6]=((C_word)li176),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_12053(t16,t12,t10);}

/* g1779 in a11994 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_12004(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,8)))){
C_save_and_reclaim_args((void *)trf_12004,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12010,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li173),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12016,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:972: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a12009 in g1779 in a11994 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_12010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_12010,2,av);}
/* expand.scm:972: ##sys#decompose-import */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[366]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[366]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[107];
tp(6,av2);}}

/* a12015 in g1779 in a11994 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_12016(C_word c,C_word *av){
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
C_word t11;
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,10)))){
C_save_and_reclaim((void *)f_12016,8,av);}
a=C_alloc(5);
t8=t2;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12020,a[2]=t9,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_not(t4))){
/* expand.scm:974: ##sys#syntax-error-hook */
t11=*((C_word*)lf[46]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[107];
av2[3]=lf[370];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
/* expand.scm:976: ##sys#import */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[371]+1));
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=*((C_word*)lf[371]+1);
av2[1]=t10;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=t7;
av2[6]=*((C_word*)lf[4]+1);
av2[7]=*((C_word*)lf[20]+1);
av2[8]=C_SCHEME_FALSE;
av2[9]=C_SCHEME_FALSE;
av2[10]=lf[107];
tp(11,av2);}}}

/* k12018 in a12015 in g1779 in a11994 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_12020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12020,2,av);}
a=C_alloc(4);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[367];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12033,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:981: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[369]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[369]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k12031 in k12018 in a12015 in g1779 in a11994 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_12033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12033,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[368],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12049 in a11994 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_12051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12051,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[108],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1773 in a11994 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_12053(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_12053,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12078,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:971: g1779 */
t5=((C_word*)t0)[4];
f_12004(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12076 in map-loop1773 in a11994 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_12078(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12078,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_12053(t6,((C_word*)t0)[5],t5);}

/* k12087 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_12089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12089,2,av);}
/* expand.scm:958: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[372];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12090 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_12091(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_12091,5,av);}
t5=*((C_word*)lf[346]+1);
/* expand.scm:961: g1763 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[346]+1));
C_word *av2;
if(c >= 10) {
  av2=av;
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[346]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=*((C_word*)lf[5]+1);
av2[6]=*((C_word*)lf[196]+1);
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_FALSE;
av2[9]=lf[372];
tp(10,av2);}}

/* k12097 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_12099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12099,2,av);}
/* expand.scm:951: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[373];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12100 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_12101(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_12101,5,av);}
t5=*((C_word*)lf[346]+1);
/* expand.scm:954: g1749 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[346]+1));
C_word *av2;
if(c >= 10) {
  av2=av;
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[346]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=*((C_word*)lf[4]+1);
av2[6]=*((C_word*)lf[20]+1);
av2[7]=C_SCHEME_FALSE;
av2[8]=C_SCHEME_FALSE;
av2[9]=lf[373];
tp(10,av2);}}

/* k3671 */
static void C_ccall f_3673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3673,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k3674 in k3671 */
static void C_ccall f_3676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_3676,2,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:66: scheme#append */
t5=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[374];
av2[3]=*((C_word*)lf[2]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3678 in k3674 in k3671 */
static void C_ccall f_3680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3680,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#features ...) */,t1);
t3=C_set_block_item(lf[3] /* ##sys#current-source-filename */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3685,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:88: chicken.base#make-parameter */
t5=*((C_word*)lf[197]+1);{
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

/* k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3685,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#current-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:89: chicken.base#make-parameter */
t4=*((C_word*)lf[197]+1);{
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

/* k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_3689,2,av);}
a=C_alloc(18);
t2=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#current-meta-environment ...) */,t1);
t3=C_mutate(&lf[6] /* (set! chicken.syntax#lookup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3691,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[8] /* (set! chicken.syntax#macro-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3708,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[12]+1 /* (set! chicken.syntax#strip-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3755,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[14]+1 /* (set! ##sys#extend-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3891,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#globalize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4071,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4155,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:161: chicken.base#make-parameter */
t9=*((C_word*)lf[197]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* chicken.syntax#lookup in k3687 in k3683 in k3678 in k3674 in k3671 */
static C_word C_fcall f_3691(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t3=C_u_i_assq(t1,t2);
if(C_truep(t3)){
return(C_i_cdr(t3));}
else{
t4=t1;
t5=C_i_getprop(t4,lf[7],C_SCHEME_FALSE);
return((C_truep(t5)?t5:C_SCHEME_FALSE));}}

/* chicken.syntax#macro-alias in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_3708(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3708,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3715,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:97: ##sys#qualified-symbol? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k3713 in chicken.syntax#macro-alias in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3715,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_3718(t3,t1);}
else{
t3=((C_word*)t0)[2];
t4=t2;
f_3718(t4,C_u_i_namespaced_symbolp(t3));}}

/* k3716 in k3713 in chicken.syntax#macro-alias in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_3718(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3718,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:99: chicken.base#gensym */
t3=*((C_word*)lf[10]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k3719 in k3716 in k3713 in chicken.syntax#macro-alias in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,1)))){
C_save_and_reclaim((void *)f_3721,2,av);}
a=C_alloc(16);
t2=(
  /* expand.scm:100: lookup */
  f_3691(((C_word*)t0)[2],((C_word*)t0)[3])
);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_i_getprop(t4,lf[9],C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_a_i_putprop(&a,3,t1,lf[7],t3);
t7=C_a_i_putprop(&a,3,t1,lf[9],t5);
t8=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=((C_word*)t0)[2];
t7=C_a_i_putprop(&a,3,t1,lf[7],t3);
t8=C_a_i_putprop(&a,3,t1,lf[9],t6);
t9=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* chicken.syntax#strip-syntax in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3755(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3755,3,av);}
a=C_alloc(9);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3761,a[2]=t4,a[3]=t6,a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3761(t8,t1,t2);}

/* walk in chicken.syntax#strip-syntax in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_3761(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,2)))){
C_save_and_reclaim_args((void *)trf_3761,3,t0,t1,t2);}
a=C_alloc(16);
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
t4=t2;
t5=C_i_getprop(t4,lf[7],C_SCHEME_FALSE);
t6=t2;
t7=C_i_getprop(t6,lf[9],C_SCHEME_FALSE);
if(C_truep(t7)){
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(C_i_not(t5))){
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t5))){
t8=t2;
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t5=t4;
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)((C_word*)t0)[2])[1]);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=t5;
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3833,a[2]=t9,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t11=t2;
t12=C_u_i_car(t11);
/* expand.scm:123: walk */
t14=t10;
t15=t12;
t1=t14;
t2=t15;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t4=C_block_size(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3851,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:128: scheme#make-vector */
t7=*((C_word*)lf[13]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}}

/* k3824 in k3831 in walk in chicken.syntax#strip-syntax in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3826,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3831 in walk in chicken.syntax#strip-syntax in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3833(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3833,2,av);}
a=C_alloc(5);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(0),t1);
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3826,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* expand.scm:124: walk */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3761(t7,t4,t6);}

/* k3849 in walk in chicken.syntax#strip-syntax in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_3851,2,av);}
a=C_alloc(16);
t2=t1;
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3860,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li2),tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_3860(t9,((C_word*)t0)[6],C_fix(0));}

/* doloop384 in k3849 in walk in chicken.syntax#strip-syntax in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_3860(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3860,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3881,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* expand.scm:132: walk */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3761(t5,t3,t4);}}

/* k3879 in doloop384 in k3849 in walk in chicken.syntax#strip-syntax in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3881,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3860(t4,((C_word*)t0)[5],t3);}

/* ##sys#extend-se in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +18,c,3)))){
C_save_and_reclaim((void*)f_3891,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+18);
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3895,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=t3;
t11=C_i_check_list_2(t10,lf[17]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4034,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_4034(t15,t5,t10);}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_car(t4);
f_3895(2,av2);}}}

/* k3893 in extend-se in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_save_and_reclaim((void *)f_3895,2,av);}
a=C_alloc(12);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t2,lf[15]);
t5=C_i_check_list_2(t3,lf[15]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3985,a[2]=t8,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3985(t10,t6,t2,t3);}

/* k3918 in k3893 in extend-se in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
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
C_save_and_reclaim((void *)f_3920,2,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)t0)[2];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3935,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3937,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3937(t11,t7,t6,((C_word*)t0)[5]);}

/* k3933 in k3918 in k3893 in extend-se in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_3935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3935,2,av);}
/* expand.scm:141: scheme#append */
t2=*((C_word*)lf[16]+1);{
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

/* map-loop469 in k3918 in k3893 in extend-se in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_3937(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_3937,4,t0,t1,t2,t3);}
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

/* for-each-loop432 in k3893 in extend-se in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_3985(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_3985,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_i_getprop(t7,lf[9],C_SCHEME_FALSE);
t9=(C_truep(t8)?C_a_i_putprop(&a,3,t6,lf[9],t8):C_a_i_putprop(&a,3,t6,lf[9],t7));
t10=C_slot(t2,C_fix(1));
t11=C_slot(t3,C_fix(1));
t13=t1;
t14=t10;
t15=t11;
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* map-loop406 in extend-se in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4034(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4034,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4059,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:135: g412 */
t5=*((C_word*)lf[10]+1);{
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

/* k4057 in map-loop406 in extend-se in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4059(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4059,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4034(t6,((C_word*)t0)[5],t5);}

/* ##sys#globalize in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4071(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4071,4,av);}
a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4077,a[2]=t5,a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4077(t7,t1,t2);}

/* loop1 in globalize in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4077(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4077,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_symbolp(t2);
if(C_truep(C_i_not(t3))){
t4=t2;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t2;
t5=C_i_getprop(t4,lf[7],C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4093,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:148: g516 */
t7=t6;
f_4093(t7,t1,t5);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4111,a[2]=t2,a[3]=t7,a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4111(t9,t1,((C_word*)t0)[3]);}}}

/* g516 in loop1 in globalize in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4093(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_4093,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* expand.scm:150: loop1 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4077(t3,t1,t2);}
else{
t3=((C_word*)t0)[3];
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in loop1 in globalize in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4111(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4111,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
/* expand.scm:154: ##sys#alias-global-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4127,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
t8=C_u_i_cdr(t7);
t9=t3;
f_4127(t9,C_i_symbolp(t8));}
else{
t6=t3;
f_4127(t6,C_SCHEME_FALSE);}}}

/* k4125 in loop in loop1 in globalize in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4127(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_4127,2,t0,t1);}
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
/* expand.scm:156: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4111(t4,((C_word*)t0)[3],t3);}}

/* k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
if(C_unlikely(!C_demand(C_calculate_demand(69,c,6)))){
C_save_and_reclaim((void *)f_4155,2,av);}
a=C_alloc(69);
t2=C_mutate((C_word*)lf[20]+1 /* (set! ##sys#macro-environment ...) */,t1);
t3=C_set_block_item(lf[21] /* ##sys#scheme-macro-environment */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[22] /* ##sys#chicken-macro-environment */,0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(lf[23] /* ##sys#chicken-ffi-macro-environment */,0,C_SCHEME_END_OF_LIST);
t6=C_set_block_item(lf[24] /* ##sys#chicken.condition-macro-environment */,0,C_SCHEME_END_OF_LIST);
t7=C_set_block_item(lf[25] /* ##sys#chicken.time-macro-environment */,0,C_SCHEME_END_OF_LIST);
t8=C_set_block_item(lf[26] /* ##sys#chicken.type-macro-environment */,0,C_SCHEME_END_OF_LIST);
t9=C_set_block_item(lf[27] /* ##sys#chicken.syntax-macro-environment */,0,C_SCHEME_END_OF_LIST);
t10=C_set_block_item(lf[28] /* ##sys#chicken.base-macro-environment */,0,C_SCHEME_END_OF_LIST);
t11=C_mutate((C_word*)lf[29]+1 /* (set! ##sys#ensure-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4165,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[33]+1 /* (set! ##sys#extend-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4189,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[34]+1 /* (set! ##sys#macro? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4231,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[35]+1 /* (set! ##sys#undefine-macro! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4268,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[36]+1 /* (set! ##sys#expand-0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4313,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t16=C_set_block_item(lf[63] /* ##sys#compiler-syntax-hook */,0,C_SCHEME_FALSE);
t17=C_set_block_item(lf[65] /* ##sys#enable-runtime-macros */,0,C_SCHEME_FALSE);
t18=C_mutate((C_word*)lf[45]+1 /* (set! chicken.syntax#expansion-result-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4811,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[66]+1 /* (set! chicken.syntax#expand ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4814,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[67]+1 /* (set! ##sys#extended-lambda-list? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4880,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[71]+1 /* (set! ##sys#expand-extended-lambda-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4927,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[94]+1 /* (set! ##sys#expand-multiple-values-assignment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5536,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(lf[99] /* chicken.syntax#define-definition */,0,C_SCHEME_UNDEFINED);
t24=C_set_block_item(lf[100] /* chicken.syntax#define-syntax-definition */,0,C_SCHEME_UNDEFINED);
t25=C_set_block_item(lf[101] /* chicken.syntax#define-values-definition */,0,C_SCHEME_UNDEFINED);
t26=lf[102] /* chicken.syntax#import-definition */ =C_SCHEME_UNDEFINED;;
t27=C_mutate((C_word*)lf[103]+1 /* (set! ##sys#canonicalize-body ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5716,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[122]+1 /* (set! chicken.syntax#match-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6722,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[116]+1 /* (set! chicken.syntax#expand-curried-define ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6804,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t30=C_set_block_item(lf[123] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t31=C_set_block_item(lf[124] /* ##sys#syntax-error-culprit */,0,C_SCHEME_FALSE);
t32=C_set_block_item(lf[125] /* ##sys#syntax-context */,0,C_SCHEME_END_OF_LIST);
t33=C_mutate((C_word*)lf[126]+1 /* (set! chicken.syntax#syntax-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6859,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[46]+1 /* (set! ##sys#syntax-error-hook ...) */,*((C_word*)lf[126]+1));
t35=C_mutate((C_word*)lf[129]+1 /* (set! ##sys#syntax-error/context ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6870,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[148]+1 /* (set! chicken.syntax#get-line-number ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7091,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[59]+1 /* (set! ##sys#check-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7130,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate(&lf[182] /* (set! chicken.syntax#make-er/ir-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7585,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[186]+1 /* (set! chicken.syntax#er-macro-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8063,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[187]+1 /* (set! chicken.syntax#ir-macro-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8069,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[188]+1 /* (set! ##sys#er-transformer ...) */,*((C_word*)lf[186]+1));
t42=C_mutate((C_word*)lf[189]+1 /* (set! ##sys#ir-transformer ...) */,*((C_word*)lf[187]+1));
t43=C_mutate((C_word*)lf[99]+1 /* (set! chicken.syntax#define-definition ...) */,*((C_word*)lf[99]+1));
t44=C_mutate((C_word*)lf[100]+1 /* (set! chicken.syntax#define-syntax-definition ...) */,*((C_word*)lf[100]+1));
t45=C_mutate((C_word*)lf[101]+1 /* (set! chicken.syntax#define-values-definition ...) */,*((C_word*)lf[101]+1));
t46=C_mutate((C_word*)lf[45]+1 /* (set! chicken.syntax#expansion-result-hook ...) */,*((C_word*)lf[45]+1));
t47=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8082,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t48=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12099,a[2]=t47,tmp=(C_word)a,a+=3,tmp);
t49=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12101,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:953: ##sys#er-transformer */
t50=*((C_word*)lf[188]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t50;
av2[1]=t48;
av2[2]=t49;
((C_proc)(void*)(*((C_word*)t50+1)))(3,av2);}}

/* ##sys#ensure-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_4165,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(C_i_structurep(t2,lf[30]))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* expand.scm:176: ##sys#error */
t6=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
av2[3]=lf[32];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* ##sys#extend-macro-environment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4189(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4189,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4193,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:179: ##sys#macro-environment */
t6=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k4191 in extend-macro-environment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4193,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4196,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:180: ##sys#ensure-transformer */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4194 in k4191 in extend-macro-environment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_4196,2,av);}
a=C_alloc(16);
t2=t1;
t3=(
  /* expand.scm:181: lookup */
  f_3691(((C_word*)t0)[2],((C_word*)t0)[3])
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4203,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:181: g561 */
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
  /* expand.scm:181: g561 */
  f_4203(t4,t3)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4221,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],t5);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
/* expand.scm:188: ##sys#macro-environment */
t9=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t6;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* g561 in k4194 in k4191 in extend-macro-environment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static C_word C_fcall f_4203(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t2=C_i_set_car(t1,((C_word*)t0)[2]);
t3=t1;
t4=C_u_i_cdr(t3);
t5=C_i_set_car(t4,((C_word*)t0)[3]);
return(t1);}

/* k4219 in k4194 in k4191 in extend-macro-environment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4221,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#macro? in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4231,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4235,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:192: ##sys#current-environment */
t5=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_4235(2,av2);}}}

/* k4233 in macro? in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4235,2,av);}
a=C_alloc(4);
t2=(
  /* expand.scm:193: lookup */
  f_3691(((C_word*)t0)[2],t1)
);
t3=C_i_pairp(t2);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:195: ##sys#macro-environment */
t5=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4255 in k4233 in macro? in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4257,2,av);}
t2=(
  /* expand.scm:195: lookup */
  f_3691(((C_word*)t0)[2],t1)
);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?C_i_pairp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#undefine-macro! in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4268,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4276,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4280,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:201: ##sys#macro-environment */
t5=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4274 in undefine-macro! in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4276,2,av);}
/* expand.scm:199: ##sys#macro-environment */
t2=*((C_word*)lf[20]+1);{
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

/* k4278 in undefine-macro! in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4280,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4282,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4282(t5,((C_word*)t0)[3],t1);}

/* loop in k4278 in undefine-macro! in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4282(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4282,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_u_i_cdr(t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4305,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* expand.scm:204: loop */
t11=t7;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}}

/* k4303 in loop in k4278 in undefine-macro! in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4305,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4313(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,7)))){
C_save_and_reclaim((void *)f_4313,5,av);}
a=C_alloc(22);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4316,a[2]=t3,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4515,a[2]=t6,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4559,a[2]=t3,a[3]=t8,a[4]=t12,a[5]=t6,a[6]=t4,a[7]=((C_word)li36),tmp=(C_word)a,a+=8,tmp));
t14=((C_word*)t12)[1];
f_4559(t14,t1,t2);}

/* call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4316(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_4316,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4326,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4331,a[2]=t2,a[3]=t4,a[4]=t6,a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[2],a[8]=((C_word)li30),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:212: scheme#call-with-current-continuation */
t9=*((C_word*)lf[53]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k4324 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4326,2,av);}
/* g613614 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4331,3,av);}
a=C_alloc(15);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4337,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4438,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li29),tmp=(C_word)a,a+=10,tmp);
/* expand.scm:212: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[52]+1);{
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

/* a4336 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4337,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4343,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:212: k610 */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4342 in a4336 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4343,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4354,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[37]))){
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=t2;
f_4354(t4,C_i_memq(lf[44],t3));}
else{
t3=t2;
f_4354(t3,C_SCHEME_FALSE);}}

/* k4352 in a4342 in a4336 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4354(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_4354,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4365,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_slot(((C_word*)t0)[2],C_fix(2));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4371,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4371(t9,t4,t5);}
else{
t2=((C_word*)t0)[2];
/* expand.scm:215: chicken.condition#abort */
t3=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4363 in k4352 in a4342 in a4336 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4365,2,av);}
a=C_alloc(4);
t2=C_a_i_record3(&a,3,lf[37],((C_word*)t0)[2],t1);
/* expand.scm:215: chicken.condition#abort */
t3=*((C_word*)lf[38]+1);{
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

/* copy in k4352 in a4342 in a4336 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4371(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4371,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4388,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_equalp(lf[43],t3))){
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_car(t5);
t8=t6;
f_4388(t8,C_i_stringp(t7));}
else{
t7=t6;
f_4388(t7,C_SCHEME_FALSE);}}
else{
t7=t6;
f_4388(t7,C_SCHEME_FALSE);}}}

/* k4386 in copy in k4352 in a4342 in a4336 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4388(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_4388,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_i_car(((C_word*)t0)[2]);
/* expand.scm:231: scheme#string-append */
t5=*((C_word*)lf[40]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[41];
av2[3]=t3;
av2[4]=lf[42];
av2[5]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* expand.scm:237: copy */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4371(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4397 in k4386 in copy in k4352 in a4342 in a4336 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4399,2,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[39],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4438,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li26),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4503,a[2]=((C_word*)t0)[8],a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:212: ##sys#call-with-values */{
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

/* a4443 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_4444,2,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4448,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4478,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4484,a[2]=t6,a[3]=t4,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4489,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4495,a[2]=t4,a[3]=t6,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:242: ##sys#dynamic-wind */
t10=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t2;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
/* expand.scm:245: handler */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}}

/* k4446 in a4443 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4448(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_4448,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_not(((C_word*)t0)[4]);
t5=(C_truep(t4)?C_eqp(((C_word*)t0)[3],t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4467,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4471,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:249: scheme#symbol->string */
t8=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
/* expand.scm:253: expansion-result-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[45]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
tp(4,av2);}}}

/* k4449 in k4446 in a4443 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4451,2,av);}
/* expand.scm:253: expansion-result-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[45]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k4465 in k4446 in a4443 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4467,2,av);}
/* expand.scm:247: ##sys#syntax-error-hook */
t2=*((C_word*)lf[46]+1);{
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

/* k4469 in k4446 in a4443 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4471,2,av);}
/* expand.scm:248: scheme#string-append */
t2=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[47];
av2[3]=t1;
av2[4]=lf[48];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f_4478 in a4443 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4478,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a4483 in a4443 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4484,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[50]+1));
t3=C_mutate((C_word*)lf[50]+1 /* (set! chicken.internal.syntax-rules#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4488 in a4443 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4489,2,av);}
/* expand.scm:244: handler */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* a4494 in a4443 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4495,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[50]+1));
t3=C_mutate((C_word*)lf[50]+1 /* (set! chicken.internal.syntax-rules#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4502 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4503,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4509,a[2]=t2,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:212: k610 */
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

/* a4508 in a4502 in a4437 in a4330 in call-handler in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4509,2,av);}{
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

/* expand in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4515(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_4515,5,t0,t1,t2,t3,t4);}
a=C_alloc(3);
t5=C_i_listp(t3);
if(C_truep(C_i_not(t5))){
/* expand.scm:265: ##sys#syntax-error-hook */
t6=*((C_word*)lf[46]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[54];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4541,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cadr(t4);
t8=t4;
t9=C_u_i_car(t8);
/* expand.scm:269: call-handler */
t10=((C_word*)((C_word*)t0)[2])[1];
f_4316(t10,t6,t2,t7,t3,t9,C_SCHEME_FALSE);}
else{
/* expand.scm:271: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}}

/* k4539 in expand in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4541,2,av);}
/* expand.scm:267: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}

/* loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4559(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_4559,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_i_symbolp(t4))){
t7=(
  /* expand.scm:277: lookup */
  f_3691(t4,((C_word*)t0)[2])
);
t8=(C_truep(t7)?t7:t4);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4583,a[2]=t10,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=t4,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_pairp(((C_word*)t10)[1]))){
t12=t11;
f_4583(t12,C_SCHEME_UNDEFINED);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4801,a[2]=t10,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:279: ##sys#macro-environment */
t13=*((C_word*)lf[20]+1);{
C_word av2[2];
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}
else{
/* expand.scm:305: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
/* expand.scm:306: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4583(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,6)))){
C_save_and_reclaim_args((void *)trf_4583,2,t0,t1);}
a=C_alloc(9);
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[55]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:281: ##sys#check-syntax */
t4=*((C_word*)lf[59]+1);{
C_word av2[7];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[60];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[62];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4738,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[11])){
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t4=((C_word*)((C_word*)t0)[2])[1];
t5=t3;
f_4738(t5,C_i_getprop(t4,lf[64],C_SCHEME_FALSE));}
else{
t4=t3;
f_4738(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4738(t4,C_SCHEME_FALSE);}}}

/* k4590 in k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4592,2,av);}
a=C_alloc(5);
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4604,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:284: ##sys#check-syntax */
t5=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[60];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[61];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}
else{
/* expand.scm:295: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* k4602 in k4590 in k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_4604,2,av);}
a=C_alloc(19);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(t3,lf[17]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4694,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4700,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li34),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4700(t13,t9,t3);}

/* k4627 in k4692 in k4602 in k4590 in k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4629,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[58],t2);
/* expand.scm:286: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}

/* map-loop709 in k4692 in k4602 in k4590 in k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4631(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4631,3,t0,t1,t2);}
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

/* k4692 in k4602 in k4590 in k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,3)))){
C_save_and_reclaim((void *)f_4694,2,av);}
a=C_alloc(41);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,lf[56],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,3,lf[57],t6,((C_word*)t0)[3]);
t8=t7;
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4629,a[2]=t8,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4631,a[2]=t11,a[3]=t15,a[4]=t12,a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_4631(t17,t13,((C_word*)t0)[5]);}

/* map-loop682 in k4602 in k4590 in k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4700(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4700,3,t0,t1,t2);}
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

/* k4736 in k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4738(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4738,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li35),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:280: g742 */
t3=t2;
f_4742(t3,((C_word*)t0)[8],t1);}
else{
/* expand.scm:304: expand */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4515(t2,((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}}

/* g742 in k4736 in k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4742(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,6)))){
C_save_and_reclaim_args((void *)trf_4742,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
/* expand.scm:298: call-handler */
t7=((C_word*)((C_word*)t0)[7])[1];
f_4316(t7,t3,((C_word*)t0)[4],t4,((C_word*)t0)[2],t6,C_SCHEME_TRUE);}

/* k4744 in g742 in k4736 in k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4746,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
/* expand.scm:299: expand */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4515(t4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)((C_word*)t0)[6])[1]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4758,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[63]+1))){
/* expand.scm:302: ##sys#compiler-syntax-hook */
t5=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* expand.scm:303: loop */
t5=((C_word*)((C_word*)t0)[7])[1];
f_4559(t5,((C_word*)t0)[4],t2);}}}

/* k4756 in k4744 in g742 in k4736 in k4581 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4758,2,av);}
/* expand.scm:303: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4559(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4799 in loop in expand-0 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4801,2,av);}
t2=(
  /* expand.scm:279: lookup */
  f_3691(((C_word*)((C_word*)t0)[2])[1],t1)
);
if(C_truep(t2)){
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_4583(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=((C_word*)t0)[3];
f_4583(t5,t4);}}

/* chicken.syntax#expansion-result-hook in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4811,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.syntax#expand in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4814,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4818,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* expand.scm:315: ##sys#current-environment */
t6=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_car(t4);
f_4818(2,av2);}}}

/* k4816 in chicken.syntax#expand in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_4818,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4832,a[2]=t2,a[3]=t7,a[4]=t11,a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4832(t13,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* loop in k4816 in chicken.syntax#expand in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4832(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_4832,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4838,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li39),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4844,a[2]=((C_word*)t0)[4],a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:317: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a4837 in loop in k4816 in chicken.syntax#expand in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4838,2,av);}
/* expand.scm:317: ##sys#expand-0 */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a4843 in loop in k4816 in chicken.syntax#expand in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4844,4,av);}
if(C_truep(t3)){
/* expand.scm:319: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4832(t4,t1,t2);}
else{
t4=t2;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* ##sys#extended-lambda-list? in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4880(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4880,3,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4886,a[2]=t4,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4886(t6,t1,t2);}

/* loop in extended-lambda-list? in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4886(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4886,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_eqp(t3,lf[68]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4905,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4905(t6,t4);}
else{
t6=C_eqp(t3,lf[69]);
t7=t5;
f_4905(t7,(C_truep(t6)?t6:C_eqp(t3,lf[70])));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4903 in loop in extended-lambda-list? in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4905(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_4905,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* expand.scm:340: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4886(t4,((C_word*)t0)[2],t3);}}

/* ##sys#expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4927(C_word c,C_word *av){
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
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_4927,6,av);}
a=C_alloc(18);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4930,a[2]=t4,a[3]=t2,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4947,a[2]=t8,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=t5,a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:350: macro-alias */
f_3708(t11,lf[92],*((C_word*)lf[93]+1));}

/* err in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4930(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4930,3,t0,t1,t2);}
/* expand.scm:345: errh */
t3=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4947,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:352: macro-alias */
f_3708(t3,lf[91],*((C_word*)lf[28]+1));}

/* k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4950,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4953,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:353: macro-alias */
f_3708(t3,lf[90],*((C_word*)lf[28]+1));}

/* k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,7)))){
C_save_and_reclaim((void *)f_4953,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t4,a[10]=((C_word*)t0)[8],a[11]=((C_word)li48),tmp=(C_word)a,a+=12,tmp));
t6=((C_word*)t4)[1];
f_4958(t6,((C_word*)t0)[9],C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[10]);}

/* loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4958(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(15,0,6)))){
C_save_and_reclaim_args((void *)trf_4958,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t6))){
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4972,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5220,a[2]=t7,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:362: reverse */
t9=*((C_word*)lf[73]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* expand.scm:362: reverse */
t8=*((C_word*)lf[73]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
if(C_truep(C_i_symbolp(t6))){
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
/* expand.scm:390: err */
t7=((C_word*)t0)[8];
f_4930(t7,t1,lf[79]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
/* expand.scm:394: loop */
t13=t1;
t14=C_fix(4);
t15=t3;
t16=t4;
t17=C_SCHEME_END_OF_LIST;
t18=C_SCHEME_END_OF_LIST;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
t5=t17;
t6=t18;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
/* expand.scm:394: loop */
t13=t1;
t14=C_fix(4);
t15=t3;
t16=t4;
t17=C_SCHEME_END_OF_LIST;
t18=C_SCHEME_END_OF_LIST;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
t5=t17;
t6=t18;
goto loop;}}}
else{
t7=C_i_pairp(t6);
if(C_truep(C_i_not(t7))){
/* expand.scm:396: err */
t8=((C_word*)t0)[8];
f_4930(t8,t1,lf[80]);}
else{
t8=C_i_car(t6);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5261,a[2]=t9,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[4],a[12]=t4,a[13]=t5,tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_symbolp(t9))){
t11=C_eqp(C_fix(3),t2);
/* expand.scm:399: lookup */
t12=t10;
f_5261(t12,(C_truep(C_i_not(t11))?(
  /* expand.scm:399: lookup */
  f_3691(t9,((C_word*)t0)[10])
):C_SCHEME_FALSE));}
else{
t11=t10;
f_5261(t11,C_SCHEME_FALSE);}}}}}

/* k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_4972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_4972,2,av);}
a=C_alloc(28);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[7]))){
t4=t3;
f_4976(t4,((C_word*)t0)[9]);}
else{
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5116,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5176,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=t6,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:374: reverse */
t10=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}

/* k4974 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4976(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_4976,2,t0,t1);}
a=C_alloc(11);
t2=t1;
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
/* expand.scm:361: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
C_values(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[7])[1]))){
if(C_truep(C_i_nullp(((C_word*)t0)[8]))){
t4=C_i_cdr(((C_word*)t0)[2]);
t5=t3;
f_4988(t5,C_i_nullp(t4));}
else{
t4=t3;
f_4988(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4988(t4,C_SCHEME_FALSE);}}}

/* k4986 in k4974 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_4988(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4988,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5019,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:379: scheme#cadar */
t5=*((C_word*)lf[72]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=C_i_not(((C_word*)((C_word*)t0)[8])[1]);
t3=(C_truep(t2)?C_i_nullp(((C_word*)t0)[9]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:383: reverse */
t5=*((C_word*)lf[73]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5063,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5067,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:386: reverse */
t6=*((C_word*)lf[73]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k5017 in k4986 in k4974 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5019(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_5019,2,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,lf[55],t5);
t7=C_a_i_list(&a,1,t6);
/* expand.scm:361: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=t7;
C_values(4,av2);}}

/* k5042 in k4986 in k4974 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5044(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5044,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:361: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t5;
C_values(4,av2);}}

/* k5061 in k4986 in k4974 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5063(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5063,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:361: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t5;
C_values(4,av2);}}

/* k5065 in k4986 in k4974 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5067,2,av);}
a=C_alloc(3);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,t2);
/* expand.scm:386: ##sys#append */
t4=*((C_word*)lf[74]+1);{
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
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_a_i_list1(&a,1,t3);
/* expand.scm:386: ##sys#append */
t5=*((C_word*)lf[74]+1);{
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
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* g845 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5116(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_5116,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5173,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:370: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5167 in g845 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_5169,2,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,2,lf[75],t1);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_truep(t3)?t3:((C_word*)((C_word*)t0)[3])[1]);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t6))){
t7=((C_word*)t0)[4];
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=C_a_i_cons(&a,2,lf[76],t9);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t4,t11);
t13=C_a_i_cons(&a,2,t2,t12);
t14=C_a_i_cons(&a,2,lf[77],t13);
t15=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[6],t14);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t7=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_a_i_cons(&a,2,lf[77],t8);
t10=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[6],t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k5171 in g845 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5173,2,av);}
t2=C_slot(t1,C_fix(1));
/* expand.scm:346: chicken.keyword#string->keyword */
t3=*((C_word*)lf[78]+1);{
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

/* k5174 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5176(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5176,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5181,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li47),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5181(t6,t2,t1);}

/* k5177 in k5174 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_5179,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
f_4976(t4,C_a_i_list(&a,1,t3));}

/* map-loop839 in k5174 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5181(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5181,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5206,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:367: g845 */
t5=((C_word*)t0)[4];
f_5116(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5204 in map-loop839 in k5174 in k4970 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5206(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5206,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5181(t6,((C_word*)t0)[5],t5);}

/* k5218 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5220,2,av);}
/* expand.scm:362: ##sys#append */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5259 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5261(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,6)))){
C_save_and_reclaim_args((void *)trf_5261,2,t0,t1);}
a=C_alloc(13);
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_eqp(t2,lf[69]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5274,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t4,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
t7=t6;
f_5274(t7,C_SCHEME_UNDEFINED);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5290,a[2]=((C_word*)t0)[9],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:403: macro-alias */
f_3708(t7,lf[82],((C_word*)t0)[10]);}}
else{
t6=C_eqp(t2,lf[68]);
if(C_truep(t6)){
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[4],C_fix(1)))){
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5308,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t4))){
t8=C_u_i_car(t4);
t9=t7;
f_5308(t9,C_i_symbolp(t8));}
else{
t8=t7;
f_5308(t8,C_SCHEME_FALSE);}}
else{
/* expand.scm:415: err */
t7=((C_word*)t0)[8];
f_4930(t7,((C_word*)t0)[6],lf[84]);}}
else{
t7=C_eqp(t2,lf[70]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5350,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[12],a[7]=t4,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[9])[1]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5369,a[2]=((C_word*)t0)[9],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:417: macro-alias */
f_3708(t9,lf[82],((C_word*)t0)[10]);}
else{
t9=t8;
f_5350(t9,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t8=((C_word*)t0)[4];
switch(t8){
case C_fix(0):
t9=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[7]);
/* expand.scm:424: loop */
t10=((C_word*)((C_word*)t0)[5])[1];
f_4958(t10,((C_word*)t0)[6],C_fix(0),t9,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4);
case C_fix(1):
t9=C_a_i_list2(&a,2,((C_word*)t0)[2],C_SCHEME_FALSE);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[12]);
/* expand.scm:425: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4958(t11,((C_word*)t0)[6],C_fix(1),((C_word*)t0)[7],t10,C_SCHEME_END_OF_LIST,t4);
case C_fix(2):
/* expand.scm:426: err */
t9=((C_word*)t0)[8];
f_4930(t9,((C_word*)t0)[6],lf[86]);
default:
t9=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[13]);
/* expand.scm:427: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4958(t11,((C_word*)t0)[6],C_fix(3),((C_word*)t0)[7],((C_word*)t0)[12],t10,t4);}}
else{
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5437,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=t4,a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t9=C_u_i_length(((C_word*)t0)[2]);
t10=C_eqp(C_fix(2),t9);
if(C_truep(t10)){
t11=C_i_car(((C_word*)t0)[2]);
t12=t8;
f_5437(t12,C_i_symbolp(t11));}
else{
t11=t8;
f_5437(t11,C_SCHEME_FALSE);}}
else{
t9=t8;
f_5437(t9,C_SCHEME_FALSE);}}}}}}

/* k5272 in k5259 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5274(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_5274,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
/* expand.scm:405: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4958(t3,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[5],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);}
else{
/* expand.scm:406: err */
t3=((C_word*)t0)[7];
f_4930(t3,((C_word*)t0)[4],lf[81]);}}

/* k5288 in k5259 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5290,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5274(t3,t2);}

/* k5306 in k5259 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5308(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5308,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[8])[1]))){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_mutate(((C_word *)((C_word*)t0)[8])+1,t3);
t5=t2;
f_5311(t5,t4);}
else{
t3=t2;
f_5311(t3,C_SCHEME_UNDEFINED);}}
else{
/* expand.scm:414: err */
t2=((C_word*)t0)[9];
f_4930(t2,((C_word*)t0)[5],lf[83]);}}

/* k5309 in k5306 in k5259 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5311(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_5311,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
/* expand.scm:413: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4958(t5,((C_word*)t0)[5],C_fix(2),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_END_OF_LIST,t4);}

/* k5348 in k5259 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5350(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_5350,2,t0,t1);}
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[2],C_fix(2)))){
/* expand.scm:419: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4958(t2,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}
else{
/* expand.scm:420: err */
t2=((C_word*)t0)[8];
f_4930(t2,((C_word*)t0)[4],lf[85]);}}

/* k5367 in k5259 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5369,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5350(t3,t2);}

/* k5435 in k5259 in loop in k4951 in k4948 in k4945 in expand-extended-lambda-list in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5437(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_5437,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
switch(t2){
case C_fix(0):
/* expand.scm:430: err */
t3=((C_word*)t0)[3];
f_4930(t3,((C_word*)t0)[4],lf[87]);
case C_fix(1):
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
/* expand.scm:431: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4958(t4,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);
case C_fix(2):
/* expand.scm:432: err */
t3=((C_word*)t0)[3];
f_4930(t3,((C_word*)t0)[4],lf[88]);
default:
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[10]);
/* expand.scm:433: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4958(t4,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[8],((C_word*)t0)[6],t3,((C_word*)t0)[9]);}}
else{
/* expand.scm:434: err */
t2=((C_word*)t0)[3];
f_4930(t2,((C_word*)t0)[4],lf[89]);}}

/* ##sys#expand-multiple-values-assignment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5536,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5542,a[2]=t3,a[3]=t2,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:452: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[98]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[98]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* a5541 in expand-multiple-values-assignment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5542(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_5542,5,av);}
a=C_alloc(20);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5546,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
f_5546(2,av2);}}
else{
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=((C_word*)t0)[3];
t11=C_i_check_list_2(t10,lf[17]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5678,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_5678(t15,t5,t10);}}

/* k5544 in a5541 in expand-multiple-values-assignment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5546,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_not(((C_word*)t0)[6]))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
f_5549(2,av2);}}
else{
/* expand.scm:456: chicken.base#gensym */
t4=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5547 in k5544 in a5541 in expand-multiple-values-assignment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5549(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5549,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_list(&a,3,lf[76],C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5568,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:460: scheme#append */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k5566 in k5547 in k5544 in a5541 in expand-multiple-values-assignment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_5568,2,av);}
a=C_alloc(24);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5572,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)t0)[4];
t9=C_i_check_list_2(t8,lf[17]);
t10=C_i_check_list_2(((C_word*)t0)[5],lf[17]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5590,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5612,a[2]=t6,a[3]=t13,a[4]=t7,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_5612(t15,t11,t8,((C_word*)t0)[5]);}

/* k5570 in k5566 in k5547 in k5544 in a5541 in expand-multiple-values-assignment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_5572,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[76],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[95],((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5588 in k5566 in k5547 in k5544 in a5541 in expand-multiple-values-assignment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5590,2,av);}
a=C_alloc(12);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
/* expand.scm:37: ##sys#append */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=lf[96];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
/* expand.scm:37: ##sys#append */
t2=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_a_i_list(&a,3,lf[97],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
/* expand.scm:37: ##sys#append */
t4=*((C_word*)lf[74]+1);{
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
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* map-loop976 in k5566 in k5547 in k5544 in a5541 in expand-multiple-values-assignment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5612(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_5612,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[97],t6,t7);
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

/* map-loop947 in a5541 in expand-multiple-values-assignment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5678(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5678,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5703,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:455: g953 */
t5=*((C_word*)lf[10]+1);{
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

/* k5701 in map-loop947 in a5541 in expand-multiple-values-assignment in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5703(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5703,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5678(t6,((C_word*)t0)[5],t5);}

/* ##sys#canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_5716,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5720,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* expand.scm:477: ##sys#current-environment */
t6=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_car(t4);
f_5720(2,av2);}}}

/* k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,6)))){
C_save_and_reclaim((void *)f_5720,2,av);}
a=C_alloc(32);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5731,a[2]=t2,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5814,a[2]=t11,a[3]=t17,a[4]=t2,a[5]=t7,a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6251,a[2]=t13,a[3]=t11,a[4]=((C_word)li64),tmp=(C_word)a,a+=5,tmp));
t21=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6407,a[2]=t13,a[3]=t11,a[4]=t2,a[5]=t15,a[6]=t7,a[7]=((C_word)li67),tmp=(C_word)a,a+=8,tmp));
/* expand.scm:634: expand */
t22=((C_word*)t17)[1];
f_6407(t22,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* comp in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static C_word C_fcall f_5731(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_stack_overflow_check;{}
t3=(
  /* expand.scm:479: lookup */
  f_3691(t2,((C_word*)t0)[2])
);
t4=C_eqp(t1,t3);
if(C_truep(t4)){
return(t4);}
else{
t5=t1;
t6=C_eqp(t5,lf[104]);
if(C_truep(t6)){
return((C_truep(t3)?C_eqp(t3,*((C_word*)lf[99]+1)):C_eqp(t1,t2)));}
else{
t7=C_eqp(t5,lf[105]);
if(C_truep(t7)){
return((C_truep(t3)?C_eqp(t3,*((C_word*)lf[100]+1)):C_eqp(t1,t2)));}
else{
t8=C_eqp(t5,lf[106]);
if(C_truep(t8)){
return((C_truep(t3)?C_eqp(t3,*((C_word*)lf[101]+1)):C_eqp(t1,t2)));}
else{
t9=C_eqp(t5,lf[107]);
return((C_truep(t9)?(C_truep(t3)?C_eqp(t3,lf[102]):C_eqp(t1,t2)):C_eqp(t1,t2)));}}}}}

/* fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5814(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_save_and_reclaim_args((void *)trf_5814,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(14);
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_i_nullp(t4):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5826,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li56),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_5826(t11,t1,t5,C_SCHEME_END_OF_LIST);}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6067,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t10,a[8]=t11,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:542: scheme#reverse */
t13=*((C_word*)lf[73]+1);{
C_word av2[3];
av2[0]=t13;
av2[1]=t12;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}}

/* loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5826(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5826,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5840,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:494: scheme#reverse */
t6=*((C_word*)lf[73]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5845,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word)li55),tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_5845(t8,t1,t2);}}

/* k5838 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5840,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[108],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop2 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5845(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_5845,3,t0,t1,t2);}
a=C_alloc(13);
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5856,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t6,a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(t4))){
t8=C_u_i_car(t4);
if(C_truep(C_i_symbolp(t8))){
t9=(
  /* expand.scm:501: comp */
  f_5731(((C_word*)((C_word*)t0)[2])[1],lf[104],t8)
);
if(C_truep(t9)){
t10=t7;
f_5856(t10,t9);}
else{
t10=(
  /* expand.scm:502: comp */
  f_5731(((C_word*)((C_word*)t0)[2])[1],lf[106],t8)
);
if(C_truep(t10)){
t11=t7;
f_5856(t11,t10);}
else{
t11=(
  /* expand.scm:503: comp */
  f_5731(((C_word*)((C_word*)t0)[2])[1],lf[105],t8)
);
if(C_truep(t11)){
t12=t7;
f_5856(t12,t11);}
else{
t12=(
  /* expand.scm:504: comp */
  f_5731(((C_word*)((C_word*)t0)[2])[1],lf[108],t8)
);
t13=t7;
f_5856(t13,(C_truep(t12)?t12:(
  /* expand.scm:505: comp */
  f_5731(((C_word*)((C_word*)t0)[2])[1],lf[107],t8)
)));}}}}
else{
t9=t7;
f_5856(t9,C_SCHEME_FALSE);}}
else{
t8=t7;
f_5856(t8,C_SCHEME_FALSE);}}

/* k5854 in loop2 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_5856,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(
  /* expand.scm:507: comp */
  f_5731(((C_word*)((C_word*)t0)[3])[1],lf[107],t2)
);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
/* expand.scm:508: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5826(t5,((C_word*)t0)[6],((C_word*)t0)[7],t4);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5876,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5880,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:511: scheme#reverse */
t6=*((C_word*)lf[73]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:512: ##sys#expand-0 */
t3=*((C_word*)lf[36]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[11];
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k5874 in k5854 in loop2 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5876,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[108],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5878 in k5854 in loop2 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5880,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5888,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:511: expand */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6407(t4,t3,((C_word*)t0)[4]);}

/* k5886 in k5878 in k5854 in loop2 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5888,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* expand.scm:511: ##sys#append */
t3=*((C_word*)lf[74]+1);{
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

/* k5893 in k5854 in loop2 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5895(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5895,2,av);}
a=C_alloc(8);
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5907,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t4=C_u_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t4))){
t5=C_u_i_car(((C_word*)t0)[2]);
t6=(
  /* expand.scm:519: comp */
  f_5731(((C_word*)((C_word*)t0)[4])[1],lf[109],t5)
);
if(C_truep(t6)){
t7=t3;
f_5907(t7,t6);}
else{
t7=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:520: comp */
t8=t3;
f_5907(t8,(
  /* expand.scm:520: comp */
  f_5731(((C_word*)((C_word*)t0)[4])[1],lf[110],t7)
));}}
else{
t5=t3;
f_5907(t5,C_SCHEME_FALSE);}}
else{
t4=t3;
f_5907(t4,C_SCHEME_FALSE);}}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* expand.scm:529: loop2 */
t4=((C_word*)((C_word*)t0)[8])[1];
f_5845(t4,((C_word*)t0)[3],t3);}}

/* k5905 in k5893 in k5854 in loop2 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_5907(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5907,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5914,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5918,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:522: scheme#reverse */
t4=*((C_word*)lf[73]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[6]);
/* expand.scm:528: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_5826(t3,((C_word*)t0)[2],((C_word*)t0)[5],t2);}}

/* k5912 in k5905 in k5893 in k5854 in loop2 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5914,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[108],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5916 in k5905 in k5893 in k5854 in loop2 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5918(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5918,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=(
  /* expand.scm:523: comp */
  f_5731(((C_word*)((C_word*)t0)[3])[1],lf[109],t3)
);
if(C_truep(t4)){
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t5=C_a_i_list(&a,1,((C_word*)t0)[2]);
/* expand.scm:37: ##sys#append */
t6=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,lf[55],t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[2],t6);
/* expand.scm:37: ##sys#append */
t8=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5956,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,1,((C_word*)t0)[4]);
/* expand.scm:37: ##sys#append */
t8=*((C_word*)lf[74]+1);{
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
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k5954 in k5916 in k5905 in k5893 in k5854 in loop2 in loop in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_5956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5956,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[110],t1);
t3=C_a_i_list(&a,1,t2);
/* expand.scm:37: ##sys#append */
t4=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6067,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6209,a[2]=t4,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6209(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6070(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6070,2,av);}
a=C_alloc(15);
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6175,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6175(t7,t3,t1);}

/* k6074 in k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_6076,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6080,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6102,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:550: scheme#reverse */
t9=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k6078 in k6074 in k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6080,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[55],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6100 in k6074 in k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6102,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:551: scheme#reverse */
t4=*((C_word*)lf[73]+1);{
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

/* k6103 in k6100 in k6074 in k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6105,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:552: scheme#reverse */
t4=*((C_word*)lf[73]+1);{
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

/* k6106 in k6103 in k6100 in k6074 in k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_6108,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6113,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6113(t6,t2,((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k6109 in k6106 in k6103 in k6100 in k6074 in k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6111,2,av);}
/* expand.scm:37: ##sys#append */
t2=*((C_word*)lf[74]+1);{
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

/* map-loop1155 in k6106 in k6103 in k6100 in k6074 in k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6113(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6113,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6120,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_6120(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_6120(t6,C_SCHEME_FALSE);}}

/* k6118 in map-loop1155 in k6106 in k6103 in k6100 in k6074 in k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6120(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_6120,2,t0,t1);}
a=C_alloc(17);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_slot(((C_word*)t0)[4],C_fix(0));
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(0)))){
/* expand.scm:548: ##sys#expand-multiple-values-assignment */
t5=*((C_word*)lf[94]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=C_i_car(t3);
t6=t2;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[97],t5,t4);
f_6146(2,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6144 in k6118 in map-loop1155 in k6106 in k6103 in k6100 in k6074 in k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6146(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_6146,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
t7=C_slot(((C_word*)t0)[5],C_fix(1));
t8=((C_word*)((C_word*)t0)[6])[1];
f_6113(t8,((C_word*)t0)[7],t5,t6,t7);}

/* map-loop1107 in k6068 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6175(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6175,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[111]);
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

/* foldl1130 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6209(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_6209,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6239,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(0));
t8=t6;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6233,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6235,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:539: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[98]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[98]+1);
av2[1]=t10;
av2[2]=t7;
av2[3]=t11;
tp(4,av2);}}
else{
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6231 in foldl1130 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6233,2,av);}
/* expand.scm:539: ##sys#append */
t2=*((C_word*)lf[74]+1);{
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

/* a6234 in foldl1130 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6235(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6235,5,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6237 in foldl1130 in k6065 in fini in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6239,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6209(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* fini/syntax in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6251(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_6251,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(14);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6259,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6261,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_6261(t10,t6,t5,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k6257 in fini/syntax in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6259,2,av);}
/* expand.scm:557: fini */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5814(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* loop in fini/syntax in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6261(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_6261,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6283,a[2]=t2,a[3]=t1,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:561: scheme#reverse */
t10=*((C_word*)lf[73]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t5=C_i_pairp(t2);
if(C_truep(C_i_not(t5))){
/* expand.scm:562: loop */
t16=t1;
t17=t2;
t18=t3;
t19=C_SCHEME_TRUE;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6335,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t2);
if(C_truep(C_i_listp(t7))){
t8=t2;
t9=C_u_i_car(t8);
t10=C_i_length(t9);
if(C_truep(C_fixnum_greater_or_equal_p(C_fix(3),t10))){
t11=C_i_caar(t2);
if(C_truep(C_i_symbolp(t11))){
t12=t2;
t13=C_u_i_car(t12);
t14=C_u_i_car(t13);
/* expand.scm:566: comp */
t15=t6;
f_6335(t15,(
  /* expand.scm:566: comp */
  f_5731(((C_word*)((C_word*)t0)[3])[1],lf[105],t14)
));}
else{
t12=t6;
f_6335(t12,C_SCHEME_FALSE);}}
else{
t11=t6;
f_6335(t11,C_SCHEME_FALSE);}}
else{
t8=t6;
f_6335(t8,C_SCHEME_FALSE);}}}}

/* k6281 in loop in fini/syntax in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6283,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6288,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6288(t6,t2,t1);}

/* k6284 in k6281 in loop in fini/syntax in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6286,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[112],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop1215 in k6281 in loop in fini/syntax in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6288(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6288,3,t0,t1,t2);}
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

/* k6333 in loop in fini/syntax in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6335(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_6335,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6339,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(t3);
t6=C_i_cadr(t3);
t7=C_eqp(t5,t6);
if(C_truep(t7)){
/* expand.scm:442: ##sys#syntax-error-hook */
t8=*((C_word*)lf[46]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[113];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t8=t4;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_6339(2,av2);}}}
else{
/* expand.scm:573: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_6261(t2,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}}

/* k6337 in k6333 in loop in fini/syntax in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6339,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
/* expand.scm:572: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6261(t5,((C_word*)t0)[6],t3,t4,C_SCHEME_FALSE);}

/* expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6407(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,6)))){
C_save_and_reclaim_args((void *)trf_6407,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6413,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li66),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_6413(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6413(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,5)))){
C_save_and_reclaim_args((void *)trf_6413,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(15);
t6=C_i_pairp(t2);
if(C_truep(C_i_not(t6))){
/* expand.scm:581: fini */
t7=((C_word*)((C_word*)t0)[2])[1];
f_5814(t7,t1,t3,t4,t5,t2);}
else{
t7=C_i_car(t2);
t8=t7;
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_i_pairp(t8);
t12=(C_truep(t11)?C_u_i_car(t8):C_SCHEME_FALSE);
t13=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6433,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t4,a[6]=t5,a[7]=t2,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=t10,a[11]=((C_word*)t0)[5],a[12]=t8,a[13]=((C_word*)t0)[6],a[14]=((C_word*)t0)[7],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t12)){
t14=C_i_symbolp(t12);
t15=t13;
f_6433(t15,(C_truep(t14)?t12:C_SCHEME_FALSE));}
else{
t14=t13;
f_6433(t14,C_SCHEME_FALSE);}}}

/* k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6433(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,6)))){
C_save_and_reclaim_args((void *)trf_6433,2,t0,t1);}
a=C_alloc(14);
t2=C_i_symbolp(t1);
if(C_truep(C_i_not(t2))){
/* expand.scm:587: fini */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5814(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t3=(
  /* expand.scm:589: comp */
  f_5731(((C_word*)((C_word*)t0)[8])[1],lf[104],t1)
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6451,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:590: ##sys#check-syntax */
t5=*((C_word*)lf[59]+1);{
C_word av2[7];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[104];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[119];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}
else{
t4=(
  /* expand.scm:616: comp */
  f_5731(((C_word*)((C_word*)t0)[8])[1],lf[105],t1)
);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6588,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:617: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[105];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[120];
av2[5]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
t5=(
  /* expand.scm:619: comp */
  f_5731(((C_word*)((C_word*)t0)[8])[1],lf[106],t1)
);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6600,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:621: ##sys#check-syntax */
t7=*((C_word*)lf[59]+1);{
C_word av2[7];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[106];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[121];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}
else{
t6=(
  /* expand.scm:623: comp */
  f_5731(((C_word*)((C_word*)t0)[8])[1],lf[108],t1)
);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6636,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_i_cdr(((C_word*)t0)[12]);
/* expand.scm:624: ##sys#append */
t9=*((C_word*)lf[74]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t7=C_a_i_list1(&a,1,t1);
if(C_truep(C_i_member(t7,((C_word*)t0)[4]))){
/* expand.scm:629: fini */
t8=((C_word*)((C_word*)t0)[2])[1];
f_5814(t8,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6652,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:630: ##sys#expand-0 */
t9=*((C_word*)lf[36]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[12];
av2[3]=((C_word*)t0)[11];
av2[4]=((C_word*)t0)[14];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}}}}

/* k6449 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6451,2,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word)li65),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_6456(t5,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* loop2 in k6449 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6456(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,6)))){
C_save_and_reclaim_args((void *)trf_6456,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cadr(t2);
t4=t3;
t5=C_i_pairp(t4);
if(C_truep(C_i_not(t5))){
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6469,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:594: ##sys#check-syntax */
t7=*((C_word*)lf[59]+1);{
C_word av2[7];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[104];
av2[3]=t2;
av2[4]=lf[115];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}
else{
t6=C_i_car(t4);
if(C_truep(C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6522,a[2]=((C_word*)t0)[8],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:604: ##sys#check-syntax */
t8=*((C_word*)lf[59]+1);{
C_word av2[7];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[104];
av2[3]=t2;
av2[4]=lf[117];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t8+1)))(7,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6536,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:609: ##sys#check-syntax */
t8=*((C_word*)lf[59]+1);{
C_word av2[7];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[104];
av2[3]=t2;
av2[4]=lf[118];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t8+1)))(7,av2);}}}}

/* k6467 in loop2 in k6449 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6469(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6469,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
t5=C_eqp(t4,((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[4];
/* expand.scm:442: ##sys#syntax-error-hook */
t7=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=lf[113];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_6472(2,av2);}}}

/* k6470 in k6467 in loop2 in k6449 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6472(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_6472,2,av);}
a=C_alloc(12);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_cddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t4))){
t5=C_i_caddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[5]);
t7=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
/* expand.scm:597: loop */
t8=((C_word*)((C_word*)t0)[7])[1];
f_6413(t8,((C_word*)t0)[8],((C_word*)t0)[9],t3,t6,t7);}
else{
t5=C_a_i_cons(&a,2,lf[114],((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
/* expand.scm:597: loop */
t7=((C_word*)((C_word*)t0)[7])[1];
f_6413(t7,((C_word*)t0)[8],((C_word*)t0)[9],t3,t5,t6);}}

/* k6520 in loop2 in k6449 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6522,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[4]);
/* expand.scm:607: chicken.syntax#expand-curried-define */
t4=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6527 in k6520 in loop2 in k6449 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6529,2,av);}
/* expand.scm:606: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6456(t2,((C_word*)t0)[3],t1);}

/* k6534 in loop2 in k6449 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,5)))){
C_save_and_reclaim((void *)f_6536,2,av);}
a=C_alloc(18);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_i_cddr(((C_word*)t0)[4]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,lf[76],t7);
t9=C_a_i_cons(&a,2,t8,((C_word*)t0)[5]);
t10=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
/* expand.scm:612: loop */
t11=((C_word*)((C_word*)t0)[7])[1];
f_6413(t11,((C_word*)t0)[8],((C_word*)t0)[9],t4,t9,t10);}

/* k6586 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6588,2,av);}
/* expand.scm:618: fini/syntax */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6251(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k6598 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6600(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_6600,2,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[5]);
/* expand.scm:622: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_6413(t7,((C_word*)t0)[7],((C_word*)t0)[8],t3,t5,t6);}

/* k6634 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6636,2,av);}
/* expand.scm:624: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6413(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k6650 in k6431 in loop in expand in k5718 in canonicalize-body in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6652,2,av);}
a=C_alloc(3);
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* expand.scm:632: fini */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5814(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[9]);
/* expand.scm:633: loop */
t4=((C_word*)((C_word*)t0)[10])[1];
f_6413(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* chicken.syntax#match-expression in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6722(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6722,5,av);}
a=C_alloc(14);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6725,a[2]=t6,a[3]=t4,a[4]=t8,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6802,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:654: mwalk */
t11=((C_word*)t8)[1];
f_6725(t11,t10,t2,t3);}

/* mwalk in chicken.syntax#match-expression in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6725(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_6725,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
t5=C_i_assq(t3,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6739,a[2]=t2,a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:645: g1305 */
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  /* expand.scm:645: g1305 */
  f_6739(t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(t3,((C_word*)t0)[3]))){
t6=C_a_i_cons(&a,2,t3,t2);
t7=C_a_i_cons(&a,2,t6,((C_word*)((C_word*)t0)[2])[1]);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_eqp(t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}
else{
if(C_truep(C_i_pairp(t2))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6779,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=t2;
t7=C_u_i_car(t6);
t8=C_i_car(t3);
/* expand.scm:651: mwalk */
t10=t5;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* g1305 in mwalk in chicken.syntax#match-expression in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static C_word C_fcall f_6739(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
return(C_i_equalp(((C_word*)t0)[2],t2));}

/* k6777 in mwalk in chicken.syntax#match-expression in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6779(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6779,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:652: mwalk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6725(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6800 in chicken.syntax#match-expression in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6802,2,av);}
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
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

/* chicken.syntax#expand-curried-define in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6804(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6804,5,av);}
a=C_alloc(13);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6807,a[2]=t6,a[3]=t8,a[4]=((C_word)li72),tmp=(C_word)a,a+=5,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6851,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:668: loop */
t11=((C_word*)t8)[1];
f_6807(t11,t10,t2,t3);}

/* loop in chicken.syntax#expand-curried-define in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6807(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_6807,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_car(t5));
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t8,t3);
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_a_i_cons(&a,2,lf[76],t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t8,t3);
t10=C_a_i_cons(&a,2,lf[76],t9);
t11=C_a_i_list(&a,1,t10);
/* expand.scm:667: loop */
t13=t1;
t14=t6;
t15=t11;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}

/* k6849 in chicken.syntax#expand-curried-define in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6851,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,lf[104],((C_word*)((C_word*)t0)[3])[1],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.syntax#syntax-error in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_6859,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6867,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:680: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
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

/* k6865 in chicken.syntax#syntax-error in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6867,2,av);}{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[127]+1);
av2[3]=lf[128];
av2[4]=t1;
C_apply(5,av2);}}

/* ##sys#syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6870,4,av);}
a=C_alloc(5);
if(C_truep(C_i_nullp(*((C_word*)lf[125]+1)))){
/* expand.scm:693: ##sys#syntax-error-hook */
t4=*((C_word*)lf[46]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6937,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:694: chicken.base#open-output-string */
t5=*((C_word*)lf[147]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6879 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6881(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6881,2,av);}
a=C_alloc(6);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6886,a[2]=t4,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6886(t6,((C_word*)t0)[2],t2);}

/* loop in k6879 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6886(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6886,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
t4=C_eqp(lf[144],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6906,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:690: scheme#cadar */
t6=*((C_word*)lf[72]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* expand.scm:691: loop */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* k6904 in loop in k6879 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6906(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6906,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6910,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:690: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6886(t6,t3,t5);}

/* k6908 in k6904 in loop in k6879 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6910,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6923 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6925,2,av);}
/* expand.scm:687: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[145]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[145]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[146];
tp(4,av2);}}

/* k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6937(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_6937,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6939,a[2]=t2,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6946,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6955,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word)li78),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_6955(t8,t4,*((C_word*)lf[125]+1));}

/* outstr in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6939(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6939,3,t0,t1,t2);}
/* expand.scm:696: ##sys#print */
t3=*((C_word*)lf[130]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6944 in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6946,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6953,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:731: chicken.base#get-output-string */
t3=*((C_word*)lf[131]+1);{
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

/* k6951 in k6944 in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6953,2,av);}
/* expand.scm:731: ##sys#syntax-error-hook */
t2=*((C_word*)lf[46]+1);{
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

/* loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_6955(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6955,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6965,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:699: outstr */
t4=((C_word*)t0)[2];
f_6939(t4,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6991,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(t2);
/* expand.scm:706: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k6963 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6965,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:700: outstr */
t3=((C_word*)t0)[2];
f_6939(t3,t2,lf[134]);}

/* k6966 in k6963 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6968,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:701: ##sys#print */
t3=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6969 in k6966 in k6963 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6971,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:702: outstr */
t3=((C_word*)t0)[2];
f_6939(t3,t2,lf[133]);}

/* k6972 in k6969 in k6966 in k6963 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6974,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6984,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(*((C_word*)lf[125]+1));
/* expand.scm:703: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[12]+1);{
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

/* k6975 in k6972 in k6969 in k6966 in k6963 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6977,2,av);}
/* expand.scm:704: outstr */
t2=((C_word*)t0)[2];
f_6939(t2,((C_word*)t0)[3],lf[132]);}

/* k6982 in k6972 in k6969 in k6966 in k6963 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6984,2,av);}
/* expand.scm:703: ##sys#print */
t2=*((C_word*)lf[130]+1);{
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

/* k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6991(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6991,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6994,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6881,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6925,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:687: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_6994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6994,2,av);}
a=C_alloc(8);
t2=t1;
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7003,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:709: outstr */
t4=((C_word*)t0)[2];
f_6939(t4,t3,((C_word*)t0)[7]);}
else{
t3=((C_word*)t0)[8];
t4=C_u_i_cdr(t3);
/* expand.scm:730: loop */
t5=((C_word*)((C_word*)t0)[9])[1];
f_6955(t5,((C_word*)t0)[3],t4);}}

/* k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7003,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:710: outstr */
t3=((C_word*)t0)[3];
f_6939(t3,t2,lf[143]);}

/* k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7006,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:711: ##sys#print */
t3=*((C_word*)lf[130]+1);{
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
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7009,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:712: outstr */
t3=((C_word*)t0)[3];
f_6939(t3,t2,lf[142]);}

/* k7010 in k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7012,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:713: ##sys#print */
t3=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7013 in k7010 in k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7015,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:714: outstr */
t3=((C_word*)t0)[3];
f_6939(t3,t2,lf[141]);}

/* k7016 in k7013 in k7010 in k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7018,2,av);}
a=C_alloc(13);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7031,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7035,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(((C_word*)t0)[2]);
/* expand.scm:719: scheme#symbol->string */
t7=*((C_word*)lf[49]+1);{
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7046,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7050,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7052,a[2]=t7,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_7052(t9,t5,((C_word*)t0)[2]);}}

/* k7029 in k7016 in k7013 in k7010 in k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7031,2,av);}
/* expand.scm:716: outstr */
t2=((C_word*)t0)[2];
f_6939(t2,((C_word*)t0)[3],t1);}

/* k7033 in k7016 in k7013 in k7010 in k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7035,2,av);}
/* expand.scm:717: scheme#string-append */
t2=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[135];
av2[3]=t1;
av2[4]=lf[136];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7044 in k7016 in k7013 in k7010 in k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7046,2,av);}
/* expand.scm:721: outstr */
t2=((C_word*)t0)[2];
f_6939(t2,((C_word*)t0)[3],t1);}

/* k7048 in k7016 in k7013 in k7010 in k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7050,2,av);}
/* expand.scm:722: scheme#string-append */
t2=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[137];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* loop in k7016 in k7013 in k7010 in k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7052(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7052,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[138];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7066,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* expand.scm:728: scheme#symbol->string */
t5=*((C_word*)lf[49]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k7064 in loop in k7016 in k7013 in k7010 in k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7066(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7066,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7070,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:729: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7052(t6,t3,t5);}

/* k7068 in k7064 in loop in k7016 in k7013 in k7010 in k7007 in k7004 in k7001 in k6992 in k6989 in loop in k6935 in syntax-error/context in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7070,2,av);}
/* expand.scm:727: scheme#string-append */
t2=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[139];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[140];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.syntax#get-line-number in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7091(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7091,3,av);}
a=C_alloc(4);
if(C_truep(*((C_word*)lf[123]+1))){
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7111,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:738: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[149]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t5;
av2[2]=*((C_word*)lf[123]+1);
av2[3]=t4;
tp(4,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7109 in chicken.syntax#get-line-number in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7111,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7115,a[2]=((C_word*)t0)[2],a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:738: g1394 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  /* expand.scm:738: g1394 */
  f_7115(t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g1394 in k7109 in chicken.syntax#get-line-number in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static C_word C_fcall f_7115(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_assq(((C_word*)t0)[2],t1);
return((C_truep(t2)?C_i_cdr(t2):C_SCHEME_FALSE));}

/* ##sys#check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_7130,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+8);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=t7;
t9=C_i_nullp(t5);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7140,a[2]=t11,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t4,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t11))){
/* expand.scm:747: ##sys#current-environment */
t13=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=t12;{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_i_car(t11);
f_7140(2,av2);}}}

/* k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,5)))){
C_save_and_reclaim((void *)f_7140,2,av);}
a=C_alloc(33);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7145,a[2]=t8,a[3]=((C_word)li82),tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7157,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7184,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7246,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7273,a[2]=t8,a[3]=t6,a[4]=t12,a[5]=t10,a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t18=C_mutate((C_word*)lf[124]+1 /* (set! ##sys#syntax-error-culprit ...) */,((C_word*)t0)[7]);
t19=t17;
f_7273(t19,t18);}
else{
t18=t17;
f_7273(t18,C_SCHEME_UNDEFINED);}}

/* test in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7145(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7145,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7152,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:750: pred */
t6=t3;{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k7150 in test in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7152,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* expand.scm:750: err */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7157(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* err in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7157(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7157,3,t0,t1,t2);}
a=C_alloc(6);
t3=*((C_word*)lf[124]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7161,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:754: get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[148]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[148]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[124]+1);
tp(3,av2);}}

/* k7159 in err in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7161,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7175,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:757: scheme#symbol->string */
t5=*((C_word*)lf[49]+1);{
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
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7182,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:758: scheme#symbol->string */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k7166 in k7159 in err in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7168,2,av);}
/* expand.scm:755: ##sys#syntax-error-hook */
t2=*((C_word*)lf[46]+1);{
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

/* k7173 in k7159 in err in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7175,2,av);}
/* expand.scm:757: scheme#string-append */
t2=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[150];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[151];
av2[5]=t1;
av2[6]=lf[152];
av2[7]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k7180 in k7159 in err in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7182,2,av);}
/* expand.scm:758: scheme#string-append */
t2=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[153];
av2[3]=t1;
av2[4]=lf[154];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* lambda-list? in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7184,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7188,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:762: ##sys#extended-lambda-list? */
t4=*((C_word*)lf[67]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7186 in lambda-list? in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7188,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7196,a[2]=t3,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7196(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* loop in k7186 in lambda-list? in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7196(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7196,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7216,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:765: chicken.keyword#keyword? */
t5=*((C_word*)lf[155]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
if(C_truep(C_i_symbolp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7244,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:768: chicken.keyword#keyword? */
t7=*((C_word*)lf[155]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}

/* k7214 in loop in k7186 in lambda-list? in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7216,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_not(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7242 in loop in k7186 in lambda-list? in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7244,2,av);}
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* expand.scm:769: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7196(t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* proper-list? in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7246,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7252,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_7252(t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in proper-list? in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static C_word C_fcall f_7252(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
return(t2);}
else{
if(C_truep(C_i_pairp(t1))){
t3=t1;
t4=C_u_i_cdr(t3);
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k7271 in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_7273,2,t0,t1);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7278,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li90),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_7278(t5,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}

/* walk in k7271 in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7278(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_7278,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_vectorp(t3))){
t4=C_i_vector_ref(t3,C_fix(0));
t5=t4;
t6=C_block_size(t3);
t7=C_fixnum_greaterp(t6,C_fix(1));
t8=(C_truep(t7)?C_i_vector_ref(t3,C_fix(1)):C_fix(0));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7297,a[2]=t9,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t11=C_eqp(t6,C_fix(1));
if(C_truep(t11)){
t12=t10;
f_7297(t12,C_fix(1));}
else{
t12=C_fixnum_greaterp(t6,C_fix(2));
t13=t10;
f_7297(t13,(C_truep(t12)?C_i_vector_ref(t3,C_fix(2)):C_fix(99999)));}}
else{
if(C_truep(C_immp(t3))){
t4=C_eqp(t3,t2);
if(C_truep(C_i_not(t4))){
/* expand.scm:800: err */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7157(t5,t1,lf[159]);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
if(C_truep(C_i_symbolp(t3))){
t4=t3;
t5=C_eqp(t4,lf[160]);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t4,lf[161]);
if(C_truep(t6)){
/* expand.scm:804: test */
t7=((C_word*)((C_word*)t0)[4])[1];
f_7145(t7,t1,t2,*((C_word*)lf[162]+1),lf[163]);}
else{
t7=C_eqp(t4,lf[164]);
if(C_truep(t7)){
/* expand.scm:805: test */
t8=((C_word*)((C_word*)t0)[4])[1];
f_7145(t8,t1,t2,*((C_word*)lf[165]+1),lf[166]);}
else{
t8=C_eqp(t4,lf[167]);
if(C_truep(t8)){
/* expand.scm:806: test */
t9=((C_word*)((C_word*)t0)[4])[1];
f_7145(t9,t1,t2,*((C_word*)lf[165]+1),lf[168]);}
else{
t9=C_eqp(t4,lf[169]);
if(C_truep(t9)){
/* expand.scm:807: test */
t10=((C_word*)((C_word*)t0)[4])[1];
f_7145(t10,t1,t2,((C_word*)((C_word*)t0)[5])[1],lf[170]);}
else{
t10=C_eqp(t4,lf[171]);
if(C_truep(t10)){
/* expand.scm:808: test */
t11=((C_word*)((C_word*)t0)[4])[1];
f_7145(t11,t1,t2,*((C_word*)lf[172]+1),lf[173]);}
else{
t11=C_eqp(t4,lf[174]);
if(C_truep(t11)){
/* expand.scm:809: test */
t12=((C_word*)((C_word*)t0)[4])[1];
f_7145(t12,t1,t2,*((C_word*)lf[175]+1),lf[176]);}
else{
t12=C_eqp(t4,lf[177]);
if(C_truep(t12)){
/* expand.scm:810: test */
t13=((C_word*)((C_word*)t0)[4])[1];
f_7145(t13,t1,t2,((C_word*)((C_word*)t0)[6])[1],lf[178]);}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7475,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:812: test */
t14=((C_word*)((C_word*)t0)[4])[1];
f_7145(t14,t1,t2,t13,lf[179]);}}}}}}}}}
else{
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
/* expand.scm:819: err */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7157(t5,t1,lf[180]);}
else{
t5=C_i_pairp(t2);
if(C_truep(C_i_not(t5))){
/* expand.scm:820: err */
t6=((C_word*)((C_word*)t0)[2])[1];
f_7157(t6,t1,lf[181]);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7532,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t2);
t8=C_i_car(t3);
/* expand.scm:822: walk */
t15=t6;
t16=t7;
t17=t8;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}}}}}

/* k7295 in walk in k7271 in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7297(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_7297,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li88),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_7302(t6,((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}

/* doloop1471 in k7295 in walk in k7271 in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7302(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7302,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
/* expand.scm:793: err */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7157(t5,t1,lf[156]);}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7321,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
/* expand.scm:795: err */
t6=((C_word*)((C_word*)t0)[3])[1];
f_7157(t6,t5,lf[157]);}
else{
t6=C_i_pairp(t2);
if(C_truep(C_i_not(t6))){
/* expand.scm:797: err */
t7=((C_word*)((C_word*)t0)[3])[1];
f_7157(t7,t5,lf[158]);}
else{
t7=C_i_car(t2);
/* expand.scm:798: walk */
t8=((C_word*)((C_word*)t0)[6])[1];
f_7278(t8,t5,t7,((C_word*)t0)[7]);}}}}

/* k7319 in doloop1471 in k7295 in walk in k7271 in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7321,2,av);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_7302(t4,((C_word*)t0)[5],t2,t3);}

/* a7474 in walk in k7271 in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7475,3,av);}
t3=(C_truep(C_i_symbolp(t2))?(
  /* expand.scm:815: lookup */
  f_3691(t2,((C_word*)t0)[2])
):C_SCHEME_FALSE);
if(C_truep(C_i_symbolp(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_eqp(t3,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t2;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_eqp(t4,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7530 in walk in k7271 in k7138 in check-syntax in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7532(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7532,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:823: walk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7278(t6,((C_word*)t0)[5],t3,t5);}

/* chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7585(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_7585,3,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7591,a[2]=t3,a[3]=t2,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_record2(&a,2,lf[30],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7591(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7591,5,av);}
a=C_alloc(11);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_listp(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7598,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t7)){
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t7;
f_7598(2,av2);}}
else{
/* expand.scm:833: ##sys#error */
t9=*((C_word*)lf[31]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[185];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}

/* k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
if(C_unlikely(!C_demand(C_calculate_demand(40,c,4)))){
C_save_and_reclaim((void *)f_7598,2,av);}
a=C_alloc(40);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7600,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7682,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word)li96),tmp=(C_word)a,a+=5,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7901,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7926,a[2]=t9,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=((C_word)li98),tmp=(C_word)a,a+=8,tmp));
if(C_truep(((C_word*)t0)[5])){
/* expand.scm:922: handler */
t14=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t14;
av2[1]=((C_word*)t0)[7];
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t3)[1];
av2[4]=((C_word*)t5)[1];
((C_proc)C_fast_retrieve_proc(t14))(5,av2);}}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8054,a[2]=t9,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8058,a[2]=((C_word*)t0)[6],a[3]=t14,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:928: rename */
t16=((C_word*)t3)[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t16;
av2[1]=t15;
av2[2]=((C_word*)t0)[8];
f_7600(3,av2);}}}

/* rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7600(C_word c,C_word *av){
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
loop:
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
av[0]=t0;
av[1]=t1;
av[2]=t2;
C_save_and_reclaim((void *)f_7600,3,av);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7614,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* expand.scm:836: rename */
t7=t3;
t8=t5;
t1=t7;
t2=t8;
c=3;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7635,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7639,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:838: scheme#vector->list */
t5=*((C_word*)lf[184]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_i_symbolp(t2);
if(C_truep(C_i_not(t3))){
t4=t2;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=t1;
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7665,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:845: macro-alias */
f_3708(t5,t2,((C_word*)t0)[4]);}}}}}

/* k7612 in rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7614(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7614,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7618,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:836: rename */
t6=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
f_7600(3,av2);}}

/* k7616 in k7612 in rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7618,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7633 in rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7635,2,av);}
/* expand.scm:838: scheme#list->vector */
t2=*((C_word*)lf[183]+1);{
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

/* k7637 in rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7639,2,av);}
/* expand.scm:838: rename */
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
f_7600(3,av2);}}

/* k7663 in rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7665,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* compare in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7682(C_word c,C_word *av){
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
C_word *a;
loop:
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
av[0]=t0;
av[1]=t1;
av[2]=t2;
av[3]=t3;
C_save_and_reclaim((void *)f_7682,4,av);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7704,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=t3;
t8=C_u_i_car(t7);
/* expand.scm:853: compare */
t14=t4;
t15=t6;
t16=t8;
t1=t14;
t2=t15;
t3=t16;
c=4;
goto loop;}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
if(C_truep(C_i_vectorp(t2))){
if(C_truep(C_i_vectorp(t3))){
t4=t2;
t5=C_block_size(t4);
t6=t5;
t7=t3;
t8=C_block_size(t7);
t9=C_eqp(t6,t8);
if(C_truep(t9)){
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7741,a[2]=t6,a[3]=t11,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word)li93),tmp=(C_word)a,a+=8,tmp));
t13=((C_word*)t11)[1];
f_7741(t13,t1,C_fix(0),C_SCHEME_TRUE);}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_i_symbolp(t2);
t5=(C_truep(t4)?C_i_symbolp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t2;
t7=C_i_getprop(t6,lf[7],C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7793,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t7)){
t9=t8;
f_7793(t9,t7);}
else{
t9=t2;
t10=((C_word*)t0)[3];
t11=(
  /* expand.scm:883: lookup */
  f_3691(t9,t10)
);
if(C_truep(t11)){
t12=t8;
f_7793(t12,t11);}
else{
t12=t2;
t13=t8;
f_7793(t13,t12);}}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_eqp(t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}

/* k7702 in compare in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7704(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7704,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:854: compare */
t6=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[5];
av2[2]=t3;
av2[3]=t5;
f_7682(4,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* doloop1541 in compare in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7741(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7741,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
t5=(C_truep(t4)?t4:C_i_not(t3));
if(C_truep(t5)){
t6=t3;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_fixnum_plus(t2,C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7762,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=C_i_vector_ref(((C_word*)t0)[4],t2);
t10=C_i_vector_ref(((C_word*)t0)[5],t2);
/* expand.scm:860: compare */
t11=((C_word*)((C_word*)t0)[6])[1];{
C_word av2[4];
av2[0]=t11;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
f_7682(4,av2);}}}

/* k7760 in doloop1541 in compare in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7762,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7741(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k7791 in compare in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7793(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7793,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_i_getprop(t3,lf[7],C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7801,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_7801(t6,t4);}
else{
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[4];
t8=(
  /* expand.scm:883: lookup */
  f_3691(t6,t7)
);
if(C_truep(t8)){
t9=t5;
f_7801(t9,t8);}
else{
t9=((C_word*)t0)[2];
t10=t5;
f_7801(t10,t9);}}}

/* k7799 in k7791 in compare in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7801(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7801,2,t0,t1);}
a=C_alloc(5);
t2=t1;
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
if(C_truep(C_i_symbolp(t2))){
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_eqp(((C_word*)t0)[2],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7838,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:871: ##sys#macro-environment */
t4=*((C_word*)lf[20]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7866,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:875: ##sys#macro-environment */
t4=*((C_word*)lf[20]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_eqp(((C_word*)t0)[2],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* g1582 in k7836 in k7799 in k7791 in compare in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static C_word C_fcall f_7823(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
return(C_eqp(t2,((C_word*)t0)[2]));}

/* k7836 in k7799 in k7791 in compare in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7838,2,av);}
a=C_alloc(4);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7823,a[2]=((C_word*)t0)[3],a[3]=((C_word)li94),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:870: g1582 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  /* expand.scm:870: g1582 */
  f_7823(t3,t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g1591 in k7864 in k7799 in k7791 in compare in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static C_word C_fcall f_7851(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
return(C_eqp(((C_word*)t0)[2],t2));}

/* k7864 in k7799 in k7791 in compare in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7866,2,av);}
a=C_alloc(4);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7851,a[2]=((C_word*)t0)[3],a[3]=((C_word)li95),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:875: g1591 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  /* expand.scm:875: g1591 */
  f_7851(t3,t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* assq-reverse in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static C_word C_fcall f_7901(C_word t1,C_word t2){
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
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_cdar(t2);
t4=C_eqp(t3,t1);
if(C_truep(t4)){
t5=t2;
return(C_u_i_car(t5));}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* mirror-rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_fcall f_7926(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7926,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7940,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* expand.scm:897: mirror-rename */
t10=t3;
t11=t5;
t1=t10;
t2=t11;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7961,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7965,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:899: scheme#vector->list */
t5=*((C_word*)lf[184]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_i_symbolp(t2);
if(C_truep(C_i_not(t3))){
t4=t2;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(
  /* expand.scm:902: lookup */
  f_3691(t2,((C_word*)t0)[3])
);
t5=(
  /* expand.scm:903: assq-reverse */
  f_7901(t2,((C_word*)((C_word*)t0)[5])[1])
);
if(C_truep(t5)){
t6=t1;
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_car(t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
if(C_truep(C_i_not(t4))){
/* expand.scm:907: rename */
t6=((C_word*)((C_word*)t0)[6])[1];{
C_word av2[3];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
f_7600(3,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* expand.scm:909: rename */
t6=((C_word*)((C_word*)t0)[6])[1];{
C_word av2[3];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
f_7600(3,av2);}}
else{
t6=t2;
t7=C_i_getprop(t6,lf[9],C_SCHEME_FALSE);
if(C_truep(t7)){
t8=t1;
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* expand.scm:916: rename */
t8=((C_word*)((C_word*)t0)[6])[1];{
C_word av2[3];
av2[0]=t8;
av2[1]=t1;
av2[2]=t2;
f_7600(3,av2);}}}}}}}}}

/* k7938 in mirror-rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7940(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7940,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7944,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:897: mirror-rename */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7926(t6,t3,t5);}

/* k7942 in k7938 in mirror-rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7944,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7959 in mirror-rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7961,2,av);}
/* expand.scm:899: scheme#list->vector */
t2=*((C_word*)lf[183]+1);{
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

/* k7963 in mirror-rename in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_7965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7965,2,av);}
/* expand.scm:899: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7926(t2,((C_word*)t0)[3],t1);}

/* k8052 in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8054,2,av);}
/* expand.scm:928: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7926(t2,((C_word*)t0)[3],t1);}

/* k8056 in k7596 in a7590 in chicken.syntax#make-er/ir-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8058,2,av);}
/* expand.scm:928: handler */
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
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* chicken.syntax#er-macro-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8063,3,av);}
/* expand.scm:930: make-er/ir-transformer */
f_7585(t1,t2,C_SCHEME_TRUE);}

/* chicken.syntax#ir-macro-transformer in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8069,3,av);}
/* expand.scm:931: make-er/ir-transformer */
f_7585(t1,t2,C_SCHEME_FALSE);}

/* k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8082,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8085,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12089,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12091,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:960: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8085,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8089,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11993,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11995,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:968: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8089,2,av);}
a=C_alloc(9);
t2=C_mutate(&lf[102] /* (set! chicken.syntax#import-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8092,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11958,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11960,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:986: ##sys#er-transformer */
t6=*((C_word*)lf[188]+1);{
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

/* k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8092,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8095,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11665,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11667,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:995: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8095,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8099,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1047: ##sys#macro-environment */
t3=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8099,2,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[190]+1 /* (set! ##sys#initial-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11490,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11492,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1051: ##sys#er-transformer */
t6=*((C_word*)lf[188]+1);{
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

/* k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8102,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8105,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11463,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11465,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1111: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8105,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8108,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11453,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11455,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1121: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8108,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8111,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11282,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11284,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1130: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8111,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8114,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11198,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11200,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1165: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8114,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8117,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11175,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11177,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1188: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8117,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8121,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1195: ##sys#macro-environment */
t3=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8121,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[191]+1 /* (set! ##sys#chicken.module-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8125,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1198: ##sys#macro-environment */
t4=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8125(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8125,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8128,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11158,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11160,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1203: ##sys#er-transformer */
t6=*((C_word*)lf[188]+1);{
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

/* k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 */
static void C_ccall f_8128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8128,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11141,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11143,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1211: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in k3671 in ... */
static void C_ccall f_8131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8131,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11124,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11126,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1219: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in k3674 in ... */
static void C_ccall f_8134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8134,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11107,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11109,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1227: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in k3678 in ... */
static void C_ccall f_8137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8137,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10980,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10982,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1236: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in k3683 in ... */
static void C_ccall f_8141(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8141,2,av);}
a=C_alloc(10);
t2=C_mutate((C_word*)lf[99]+1 /* (set! chicken.syntax#define-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10933,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10935,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1264: ##sys#er-transformer */
t6=*((C_word*)lf[188]+1);{
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

/* k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in k3687 in ... */
static void C_ccall f_8145(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8145,2,av);}
a=C_alloc(10);
t2=C_mutate((C_word*)lf[100]+1 /* (set! chicken.syntax#define-syntax-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10881,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10883,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1278: ##sys#er-transformer */
t6=*((C_word*)lf[188]+1);{
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

/* k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in k4153 in ... */
static void C_ccall f_8148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8148,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8151,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10859,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10861,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1291: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in k8080 in ... */
static void C_ccall f_8151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8151,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10837,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10839,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1300: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in k8083 in ... */
static void C_ccall f_8154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8154,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10815,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10817,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1309: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in k8087 in ... */
static void C_ccall f_8157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8157,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10771,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10773,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1318: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in k8090 in ... */
static void C_ccall f_8160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8160,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10734,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10736,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1330: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in k8093 in ... */
static void C_ccall f_8163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8163,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10682,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10684,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1344: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in k8097 in ... */
static void C_ccall f_8166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8166,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10299,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10301,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1360: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in k8100 in ... */
static void C_ccall f_8169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8169,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10063,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10065,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1425: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in k8103 in ... */
static void C_ccall f_8172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8172,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10012,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10014,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1470: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in k8106 in ... */
static void C_ccall f_8175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8175,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9816,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9818,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1483: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in ... */
static void C_ccall f_8178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8178,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9523,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9525,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1512: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in ... */
static void C_ccall f_8181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8181,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9490,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9492,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1564: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in ... */
static void C_ccall f_8184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8184,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9454,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9456,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:46: ##sys#er-transformer */
t5=*((C_word*)lf[188]+1);{
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

/* k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_ccall f_8187(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_8187,2,av);}
a=C_alloc(20);
t2=C_a_i_provide(&a,1,lf[192]);
t3=C_mutate((C_word*)lf[50]+1 /* (set! chicken.internal.syntax-rules#syntax-rules-mismatch ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8189,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[194]+1 /* (set! chicken.internal.syntax-rules#drop-right ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8195,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[195]+1 /* (set! chicken.internal.syntax-rules#take-right ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8229,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9434,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1575: chicken.internal#macro-subset */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[199]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.internal.syntax-rules#syntax-rules-mismatch in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_8189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8189,3,av);}
/* synrules.scm:68: ##sys#syntax-error-hook */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[193];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.internal.syntax-rules#drop-right in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_8195(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_8195,4,av);}
a=C_alloc(7);
t4=C_i_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8205,a[2]=t3,a[3]=t6,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_8205(t8,t1,t4,t2);}

/* loop in chicken.internal.syntax-rules#drop-right in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_fcall f_8205(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trf_8205,4,t0,t1,t2,t3);}
a=C_alloc(33);
t4=t2;
t5=((C_word*)t0)[2];
if(C_truep(C_i_greaterp(t4,t5))){
t6=C_i_car(t3);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8222,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t2;
t10=C_s_a_i_minus(&a,2,t9,C_fix(1));
t11=t3;
t12=C_u_i_cdr(t11);
/* synrules.scm:77: loop */
t14=t8;
t15=t10;
t16=t12;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k8220 in loop in chicken.internal.syntax-rules#drop-right in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_8222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8222,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.internal.syntax-rules#take-right in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_8229(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_8229,4,av);}
a=C_alloc(7);
t4=C_i_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8239,a[2]=t3,a[3]=t6,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_8239(t8,t1,t4,t2);}

/* loop in chicken.internal.syntax-rules#take-right in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_fcall f_8239(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_8239,4,t0,t1,t2,t3);}
a=C_alloc(29);
t4=t2;
t5=((C_word*)t0)[2];
if(C_truep(C_i_greaterp(t4,t5))){
t6=t2;
t7=C_s_a_i_minus(&a,2,t6,C_fix(1));
t8=C_i_cdr(t3);
/* synrules.scm:86: loop */
t10=t1;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t6=t3;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_8264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8264,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[202]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[203]);
t5=C_mutate(((C_word *)((C_word*)t0)[5])+1,lf[204]);
t6=C_mutate(((C_word *)((C_word*)t0)[6])+1,lf[205]);
t7=C_mutate(((C_word *)((C_word*)t0)[7])+1,lf[206]);
t8=C_mutate(((C_word *)((C_word*)t0)[8])+1,lf[207]);
t9=C_mutate(((C_word *)((C_word*)t0)[9])+1,lf[208]);
t10=C_mutate(((C_word *)((C_word*)t0)[10])+1,lf[209]);
t11=C_mutate(((C_word *)((C_word*)t0)[11])+1,lf[210]);
t12=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8279,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[18],a[9]=((C_word*)t0)[19],a[10]=((C_word*)t0)[20],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[22],a[13]=((C_word*)t0)[23],a[14]=((C_word*)t0)[24],a[15]=((C_word*)t0)[25],a[16]=((C_word*)t0)[26],a[17]=((C_word*)t0)[27],a[18]=((C_word*)t0)[28],a[19]=((C_word*)t0)[29],a[20]=((C_word*)t0)[30],a[21]=((C_word*)t0)[31],a[22]=((C_word*)t0)[32],a[23]=((C_word*)t0)[33],a[24]=((C_word*)t0)[34],a[25]=((C_word*)t0)[35],a[26]=((C_word*)t0)[36],a[27]=((C_word*)t0)[37],a[28]=((C_word*)t0)[38],a[29]=((C_word*)t0)[39],a[30]=((C_word*)t0)[4],a[31]=((C_word*)t0)[40],a[32]=((C_word*)t0)[2],a[33]=((C_word*)t0)[41],a[34]=((C_word*)t0)[42],a[35]=((C_word*)t0)[43],a[36]=((C_word*)t0)[44],a[37]=((C_word*)t0)[45],a[38]=((C_word*)t0)[46],a[39]=((C_word*)t0)[3],a[40]=((C_word*)t0)[6],a[41]=((C_word*)t0)[7],a[42]=((C_word*)t0)[47],a[43]=((C_word*)t0)[5],a[44]=((C_word*)t0)[9],a[45]=((C_word*)t0)[10],a[46]=((C_word*)t0)[11],a[47]=((C_word*)t0)[48],a[48]=((C_word*)t0)[49],a[49]=((C_word*)t0)[50],a[50]=((C_word*)t0)[8],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:105: r */
t13=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[237];
((C_proc)C_fast_retrieve_proc(t13))(3,av2);}}

/* k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_8279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8279,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8283,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[2],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:106: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[236];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_ccall f_8283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8283,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[211]);
t4=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8288,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[25],a[24]=((C_word*)t0)[26],a[25]=((C_word*)t0)[27],a[26]=((C_word*)t0)[28],a[27]=((C_word*)t0)[29],a[28]=((C_word*)t0)[30],a[29]=((C_word*)t0)[2],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[48],a[48]=((C_word*)t0)[49],a[49]=((C_word*)t0)[3],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:108: r */
t5=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[235];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in ... */
static void C_ccall f_8288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8288,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[212]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[213]);
t5=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8294,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[28],a[26]=((C_word*)t0)[29],a[27]=((C_word*)t0)[30],a[28]=((C_word*)t0)[2],a[29]=((C_word*)t0)[31],a[30]=((C_word*)t0)[32],a[31]=((C_word*)t0)[33],a[32]=((C_word*)t0)[34],a[33]=((C_word*)t0)[35],a[34]=((C_word*)t0)[36],a[35]=((C_word*)t0)[37],a[36]=((C_word*)t0)[38],a[37]=((C_word*)t0)[39],a[38]=((C_word*)t0)[40],a[39]=((C_word*)t0)[3],a[40]=((C_word*)t0)[4],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:111: r */
t6=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[234];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in ... */
static void C_ccall f_8294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8294,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8298,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[2],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:112: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[233];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in ... */
static void C_ccall f_8298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8298,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8302,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[2],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:113: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[232];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in ... */
static void C_ccall f_8302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8302,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8306,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[2],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:114: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[231];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in ... */
static void C_ccall f_8306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8306,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8310,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[2],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:115: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[60];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in ... */
static void C_ccall f_8310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8310,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8314,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[2],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:116: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[92];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in ... */
static void C_ccall f_8314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8314,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[214]);
t4=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8319,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[25],a[24]=((C_word*)t0)[26],a[25]=((C_word*)t0)[27],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[3],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:118: r */
t5=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[230];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in ... */
static void C_ccall f_8319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8319,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[215]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[216]);
t5=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8326,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[28],a[26]=((C_word*)t0)[29],a[27]=((C_word*)t0)[30],a[28]=((C_word*)t0)[31],a[29]=((C_word*)t0)[32],a[30]=((C_word*)t0)[33],a[31]=((C_word*)t0)[34],a[32]=((C_word*)t0)[35],a[33]=((C_word*)t0)[36],a[34]=((C_word*)t0)[37],a[35]=((C_word*)t0)[38],a[36]=((C_word*)t0)[39],a[37]=((C_word*)t0)[40],a[38]=((C_word*)t0)[41],a[39]=((C_word*)t0)[42],a[40]=((C_word*)t0)[43],a[41]=((C_word*)t0)[44],a[42]=((C_word*)t0)[2],a[43]=((C_word*)t0)[45],a[44]=((C_word*)t0)[3],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[4],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:122: r */
t6=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[229];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in ... */
static void C_ccall f_8326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8326,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[217]);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8331,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[2],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:124: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[220];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in ... */
static void C_ccall f_8331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8331,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8335,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[48],a[48]=((C_word*)t0)[49],a[49]=((C_word*)t0)[50],a[50]=((C_word*)t0)[2],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:125: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[228];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in ... */
static void C_ccall f_8335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8335,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8339,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[2],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:126: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[227];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in ... */
static void C_ccall f_8339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_8339,2,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8343,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[2],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:127: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[226];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in ... */
static void C_ccall f_8343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(55,c,2)))){
C_save_and_reclaim((void *)f_8343,2,av);}
a=C_alloc(55);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|54,a[1]=(C_word)f_8348,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[2],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],tmp=(C_word)a,a+=55,tmp);
/* synrules.scm:129: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[55];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in k8179 in ... */
static void C_ccall f_8348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(55,c,2)))){
C_save_and_reclaim((void *)f_8348,2,av);}
a=C_alloc(55);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|54,a[1]=(C_word)f_8352,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],tmp=(C_word)a,a+=55,tmp);
/* synrules.scm:130: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[195];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in k8182 in ... */
static void C_ccall f_8352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(55,c,2)))){
C_save_and_reclaim((void *)f_8352,2,av);}
a=C_alloc(55);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|54,a[1]=(C_word)f_8356,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[2],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],tmp=(C_word)a,a+=55,tmp);
/* synrules.scm:131: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[194];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in a9455 in ... */
static void C_ccall f_8356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(54,c,2)))){
C_save_and_reclaim((void *)f_8356,2,av);}
a=C_alloc(54);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|53,a[1]=(C_word)f_8360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[2],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],tmp=(C_word)a,a+=54,tmp);
/* synrules.scm:133: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[50];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in k9458 in ... */
static void C_ccall f_8360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
if(C_unlikely(!C_demand(C_calculate_demand(122,c,6)))){
C_save_and_reclaim((void *)f_8360,2,av);}
a=C_alloc(122);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8362,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp));
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8368,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[16],a[13]=((C_word)li110),tmp=(C_word)a,a+=14,tmp));
t5=C_mutate(((C_word *)((C_word*)t0)[15])+1,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8462,a[2]=((C_word*)t0)[17],a[3]=((C_word*)t0)[18],a[4]=((C_word*)t0)[19],a[5]=((C_word*)t0)[20],a[6]=((C_word*)t0)[21],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[22],a[9]=((C_word)li112),tmp=(C_word)a,a+=10,tmp));
t6=C_mutate(((C_word *)((C_word*)t0)[22])+1,(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_8528,a[2]=((C_word*)t0)[23],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[24],a[6]=((C_word*)t0)[25],a[7]=((C_word*)t0)[26],a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[22],a[12]=((C_word*)t0)[27],a[13]=((C_word*)t0)[28],a[14]=((C_word*)t0)[29],a[15]=((C_word*)t0)[30],a[16]=((C_word*)t0)[31],a[17]=((C_word*)t0)[32],a[18]=((C_word)li113),tmp=(C_word)a,a+=19,tmp));
t7=C_mutate(((C_word *)((C_word*)t0)[24])+1,(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_8709,a[2]=((C_word*)t0)[33],a[3]=((C_word*)t0)[34],a[4]=((C_word*)t0)[35],a[5]=((C_word*)t0)[36],a[6]=((C_word*)t0)[37],a[7]=((C_word*)t0)[38],a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[39],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[40],a[15]=((C_word*)t0)[22],a[16]=((C_word*)t0)[27],a[17]=((C_word)li114),tmp=(C_word)a,a+=18,tmp));
t8=C_mutate(((C_word *)((C_word*)t0)[21])+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8836,a[2]=((C_word*)t0)[23],a[3]=((C_word*)t0)[41],a[4]=((C_word*)t0)[42],a[5]=((C_word*)t0)[21],a[6]=((C_word*)t0)[25],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[43],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[27],a[11]=((C_word*)t0)[29],a[12]=((C_word*)t0)[32],a[13]=((C_word)li116),tmp=(C_word)a,a+=14,tmp));
t9=C_mutate(((C_word *)((C_word*)t0)[19])+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8976,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[19],a[4]=((C_word*)t0)[44],a[5]=((C_word*)t0)[14],a[6]=((C_word*)t0)[45],a[7]=((C_word*)t0)[46],a[8]=((C_word*)t0)[47],a[9]=((C_word*)t0)[48],a[10]=((C_word*)t0)[49],a[11]=((C_word*)t0)[50],a[12]=((C_word*)t0)[51],a[13]=((C_word)li118),tmp=(C_word)a,a+=14,tmp));
t10=C_mutate(((C_word *)((C_word*)t0)[20])+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9163,a[2]=((C_word*)t0)[23],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[32],a[5]=((C_word)li119),tmp=(C_word)a,a+=6,tmp));
t11=C_mutate(((C_word *)((C_word*)t0)[46])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9239,a[2]=((C_word*)t0)[46],a[3]=((C_word*)t0)[51],a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate(((C_word *)((C_word*)t0)[32])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9326,a[2]=((C_word*)t0)[51],a[3]=((C_word)li121),tmp=(C_word)a,a+=4,tmp));
t13=C_mutate(((C_word *)((C_word*)t0)[51])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9354,a[2]=((C_word*)t0)[3],a[3]=((C_word)li122),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate(((C_word *)((C_word*)t0)[47])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9378,a[2]=((C_word*)t0)[47],a[3]=((C_word*)t0)[51],a[4]=((C_word)li123),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate(((C_word *)((C_word*)t0)[44])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9396,a[2]=((C_word*)t0)[3],a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp));
/* synrules.scm:345: make-transformer */
t16=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t16;
av2[1]=((C_word*)t0)[52];
av2[2]=((C_word*)t0)[53];
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}

/* f_8362 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_8362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8362,3,av);}
/* synrules.scm:136: c */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* f_8368 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_8368(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(52,c,3)))){
C_save_and_reclaim((void *)f_8368,3,av);}
a=C_alloc(52);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t4=t3;
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[2])[1]);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],t5);
t7=C_a_i_list(&a,1,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8396,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t8,a[5]=((C_word*)t0)[9],a[6]=t4,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t10=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t12)[1];
t14=((C_word*)((C_word*)t0)[10])[1];
t15=C_i_check_list_2(t2,lf[17]);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8406,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[12],a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8420,a[2]=t12,a[3]=t18,a[4]=t14,a[5]=t13,a[6]=((C_word)li109),tmp=(C_word)a,a+=7,tmp));
t20=((C_word*)t18)[1];
f_8420(t20,t16,t2);}

/* k8394 */
static void C_ccall f_8396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8396,2,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],t3);
t5=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[188],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8404 */
static void C_ccall f_8406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_8406,2,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],t2);
t4=C_a_i_list(&a,1,t3);
/* synrules.scm:62: ##sys#append */
t5=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[5];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop2665 */
static void C_fcall f_8420(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8420,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8445,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* synrules.scm:142: g2671 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8443 in map-loop2665 */
static void C_ccall f_8445(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8445,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8420(t6,((C_word*)t0)[5],t5);}

/* f_8462 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_8462(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8462,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8469,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_cddr(t2);
t7=t3;
f_8469(t7,C_i_nullp(t6));}
else{
t6=t3;
f_8469(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_8469(t4,C_SCHEME_FALSE);}}

/* k8467 */
static void C_fcall f_8469(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_8469,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_cdar(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8505,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:151: process-match */
t7=((C_word*)((C_word*)t0)[10])[1];{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)((C_word*)t0)[9])[1];
av2[3]=t3;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t7))(5,av2);}}
else{
/* synrules.scm:158: ##sys#syntax-error-hook */
t2=*((C_word*)lf[46]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[218];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k8488 in k8503 in k8467 */
static void C_ccall f_8490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_8490,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8494,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8498,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:157: meta-variables */
t5=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t5))(6,av2);}}

/* k8492 in k8488 in k8503 in k8467 */
static void C_ccall f_8494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_8494,2,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8496 in k8488 in k8503 in k8467 */
static void C_ccall f_8498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8498,2,av);}
/* synrules.scm:155: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* a8499 in k8503 in k8467 */
static void C_ccall f_8500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8500,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8503 in k8467 */
static void C_ccall f_8505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_8505,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8490,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8500,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:152: process-pattern */
t6=((C_word*)((C_word*)t0)[9])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)((C_word*)t0)[10])[1];
av2[4]=t5;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t6))(6,av2);}}

/* f_8528 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_8528(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_8528,5,av);}
a=C_alloc(24);
if(C_truep(C_i_symbolp(t3))){
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
t5=C_a_i_list(&a,2,lf[219],t3);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],t2,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,1,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_8562,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* synrules.scm:167: segment-pattern? */
t6=((C_word*)((C_word*)t0)[17])[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k8560 */
static void C_ccall f_8562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_8562,2,av);}
a=C_alloc(35);
if(C_truep(t1)){
/* synrules.scm:168: process-segment-match */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8598,a[2]=t6,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t4,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8602,a[2]=t7,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
t9=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[12])[1],((C_word*)((C_word*)t0)[6])[1]);
t10=((C_word*)t0)[5];
t11=C_u_i_car(t10);
/* synrules.scm:172: process-match */
t12=((C_word*)((C_word*)t0)[11])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t8;
av2[2]=t9;
av2[3]=t11;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t12))(5,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[5]))){
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[6])[1]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8655,a[2]=t6,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t4,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t8=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)((C_word*)t0)[6])[1]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8663,a[2]=((C_word*)t0)[11],a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:178: scheme#vector->list */
t11=*((C_word*)lf[184]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t2=C_i_nullp(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8676,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[16],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_8676(t4,t2);}
else{
t4=C_booleanp(((C_word*)t0)[5]);
t5=t3;
f_8676(t5,(C_truep(t4)?t4:C_charp(((C_word*)t0)[5])));}}}}}

/* k8596 in k8560 */
static void C_ccall f_8598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_8598,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8600 in k8560 */
static void C_ccall f_8602(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8602,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8606,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* synrules.scm:173: process-match */
t7=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t6;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t7))(5,av2);}}

/* k8604 in k8600 in k8560 */
static void C_ccall f_8606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8606,2,av);}
/* synrules.scm:62: ##sys#append */
t2=*((C_word*)lf[74]+1);{
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

/* k8653 in k8560 */
static void C_ccall f_8655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_8655,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8661 in k8560 */
static void C_ccall f_8663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8663,2,av);}
/* synrules.scm:177: process-match */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k8674 in k8560 */
static void C_fcall f_8676(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,1)))){
C_save_and_reclaim_args((void *)trf_8676,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[220],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,2,lf[220],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* f_8709 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_8709(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_8709,4,av);}
a=C_alloc(25);
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_8713,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=t1,a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[15],tmp=(C_word)a,a+=19,tmp);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[16])[1],((C_word*)((C_word*)t0)[6])[1]);
t6=C_i_car(t3);
/* synrules.scm:185: process-match */
t7=((C_word*)((C_word*)t0)[15])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t7))(5,av2);}}

/* k8711 */
static void C_ccall f_8713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
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
if(C_unlikely(!C_demand(C_calculate_demand(75,c,4)))){
C_save_and_reclaim((void *)f_8713,2,av);}
a=C_alloc(75);
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
t4=t3;
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],t5);
t7=C_a_i_list(&a,1,t6);
t8=t7;
t9=C_i_cddr(((C_word*)t0)[6]);
t10=C_i_length(t9);
t11=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[5])[1],t10);
t12=t11;
t13=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[8])[1],((C_word*)t0)[3]);
t14=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[5])[1]);
t15=C_a_i_list(&a,2,t13,t14);
t16=t15;
t17=((C_word*)t0)[6];
t18=C_u_i_cdr(t17);
t19=C_u_i_cdr(t18);
t20=C_i_length(t19);
t21=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[5])[1],t20);
t22=t21;
t23=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_8792,a[2]=t22,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=t16,a[9]=t12,a[10]=t8,a[11]=t4,a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[5],a[17]=t2,tmp=(C_word)a,a+=18,tmp);
t24=((C_word*)t0)[6];
t25=C_u_i_cdr(t24);
t26=C_u_i_cdr(t25);
/* synrules.scm:193: process-match */
t27=((C_word*)((C_word*)t0)[18])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t27;
av2[1]=t23;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
av2[3]=t26;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t27))(5,av2);}}

/* k8766 in k8790 in k8711 */
static void C_ccall f_8768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(60,c,1)))){
C_save_and_reclaim((void *)f_8768,2,av);}
a=C_alloc(60);
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=C_a_i_list(&a,4,((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[8],t4);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[9],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[10],t6);
t8=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[11],t7);
t9=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,1,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k8790 in k8711 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_8792,2,av);}
a=C_alloc(43);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[14])[1]);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[15])[1],((C_word*)((C_word*)t0)[16])[1],C_fix(-1));
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],t5,t6);
t8=C_a_i_list(&a,1,t7);
/* synrules.scm:62: ##sys#append */
t9=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t4;
av2[2]=((C_word*)t0)[17];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* f_8836 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_8836(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_8836,6,av);}
a=C_alloc(15);
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8860,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* synrules.scm:205: mapit */
t7=t4;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8866,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t4,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],tmp=(C_word)a,a+=15,tmp);
/* synrules.scm:206: segment-pattern? */
t7=((C_word*)((C_word*)t0)[12])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k8858 */
static void C_ccall f_8860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8860,2,av);}
a=C_alloc(9);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list1(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8864 */
static void C_ccall f_8866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,5)))){
C_save_and_reclaim((void *)f_8866,2,av);}
a=C_alloc(26);
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_i_length(t2);
t4=t3;
t5=C_eqp(t4,C_fix(0));
t6=(C_truep(t5)?((C_word*)t0)[3]:C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8879,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=((C_word*)t0)[2];
t10=C_u_i_car(t9);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8895,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[8],a[4]=t7,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word)li115),tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:212: process-pattern */
t12=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t12;
av2[1]=t8;
av2[2]=t10;
av2[3]=((C_word*)((C_word*)t0)[9])[1];
av2[4]=t11;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t12))(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8941,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)t0)[3]);
/* synrules.scm:223: process-pattern */
t6=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=t4;
av2[3]=t5;
av2[4]=((C_word*)t0)[8];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t6))(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8970,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:226: scheme#vector->list */
t3=*((C_word*)lf[184]+1);{
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
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* k8877 in k8864 */
static void C_ccall f_8879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_8879,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8883,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[6]);
/* synrules.scm:220: process-pattern */
t6=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=((C_word*)t0)[8];
av2[5]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t6))(6,av2);}}

/* k8881 in k8877 in k8864 */
static void C_ccall f_8883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8883,2,av);}
/* synrules.scm:211: scheme#append */
t2=*((C_word*)lf[16]+1);{
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

/* a8894 in k8864 */
static void C_ccall f_8895(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_8895,3,av);}
a=C_alloc(21);
t3=C_eqp(((C_word*)((C_word*)t0)[2])[1],t2);
if(C_truep(t3)){
/* synrules.scm:215: mapit */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t4=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],t4,t2);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],t5,((C_word*)t0)[4]);
/* synrules.scm:215: mapit */
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}

/* k8939 in k8864 */
static void C_ccall f_8941(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8941,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8945,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5]);
/* synrules.scm:224: process-pattern */
t7=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t5;
av2[3]=t6;
av2[4]=((C_word*)t0)[7];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t7))(6,av2);}}

/* k8943 in k8939 in k8864 */
static void C_ccall f_8945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8945,2,av);}
/* synrules.scm:223: scheme#append */
t2=*((C_word*)lf[16]+1);{
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

/* k8968 in k8864 */
static void C_ccall f_8970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_8970,2,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
/* synrules.scm:226: process-pattern */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t1;
av2[3]=t2;
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(6,av2);}}

/* f_8976 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_8976(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_8976,5,av);}
a=C_alloc(15);
if(C_truep(C_i_symbolp(t2))){
t5=C_i_assq(t2,t4);
if(C_truep(t5)){
t6=C_i_cdr(t5);
t7=t3;
if(C_truep(C_i_less_or_equalp(t6,t7))){
t8=t2;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* synrules.scm:238: ##sys#syntax-error-hook */
t8=*((C_word*)lf[46]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[221];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t6=C_a_i_list(&a,2,lf[219],t2);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9013,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],tmp=(C_word)a,a+=15,tmp);
/* synrules.scm:241: segment-template? */
t6=((C_word*)((C_word*)t0)[12])[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}}

/* k9011 */
static void C_ccall f_9013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_9013,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:242: segment-depth */
t3=((C_word*)((C_word*)t0)[11])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9133,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
/* synrules.scm:267: process-template */
t5=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t5))(5,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9154,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9158,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:271: scheme#vector->list */
t4=*((C_word*)lf[184]+1);{
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
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* k9014 in k9011 */
static void C_ccall f_9016(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,5)))){
C_save_and_reclaim((void *)f_9016,2,av);}
a=C_alloc(41);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_s_a_i_plus(&a,2,t3,t2);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9021,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t6=C_i_car(((C_word*)t0)[4]);
/* synrules.scm:245: free-meta-variables */
t7=((C_word*)((C_word*)t0)[10])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t4;
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t7))(6,av2);}}

/* k9019 in k9014 in k9011 */
static void C_ccall f_9021(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9021,2,av);}
a=C_alloc(12);
t2=t1;
if(C_truep(C_i_nullp(t2))){
/* synrules.scm:247: ##sys#syntax-error-hook */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[222];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* synrules.scm:248: process-template */
t6=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=((C_word*)t0)[11];
av2[4]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t6))(5,av2);}}}

/* k9031 in k9019 in k9014 in k9011 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_9033,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9081,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[10]))){
t5=C_u_i_cdr(((C_word*)t0)[10]);
if(C_truep(C_i_nullp(t5))){
if(C_truep(C_i_symbolp(t2))){
t6=C_u_i_car(((C_word*)t0)[10]);
t7=t4;
f_9081(t7,C_eqp(t2,t6));}
else{
t6=t4;
f_9081(t6,C_SCHEME_FALSE);}}
else{
t6=t4;
f_9081(t6,C_SCHEME_FALSE);}}
else{
t5=t4;
f_9081(t5,C_SCHEME_FALSE);}}

/* k9034 in k9031 in k9019 in k9014 in k9011 */
static void C_fcall f_9036(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_9036,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9062,a[2]=t4,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_9062(t6,t2,((C_word*)t0)[8],t1);}

/* k9037 in k9034 in k9031 in k9019 in k9014 in k9011 */
static void C_ccall f_9039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9039,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9060,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* synrules.scm:262: segment-tail */
t4=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k9050 in k9058 in k9037 in k9034 in k9031 in k9019 in k9014 in k9011 */
static void C_ccall f_9052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9052,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[74],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9054 in k9058 in k9037 in k9034 in k9031 in k9019 in k9014 in k9011 */
static void C_ccall f_9056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9056,2,av);}
/* synrules.scm:264: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];{
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

/* k9058 in k9037 in k9034 in k9031 in k9019 in k9014 in k9011 */
static void C_ccall f_9060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9060,2,av);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9056,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:264: segment-tail */
t4=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* doloop2799 in k9034 in k9031 in k9019 in k9014 in k9011 */
static void C_fcall f_9062(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,0,3)))){
C_save_and_reclaim_args((void *)trf_9062,4,t0,t1,t2,t3);}
a=C_alloc(38);
t4=t2;
if(C_truep(C_i_nequalp(t4,C_fix(1)))){
t5=t3;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=t2;
t6=C_s_a_i_minus(&a,2,t5,C_fix(1));
t7=C_a_i_list(&a,3,lf[223],lf[74],t3);
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* k9079 in k9031 in k9019 in k9014 in k9011 */
static void C_fcall f_9081(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,1)))){
C_save_and_reclaim_args((void *)trf_9081,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_9036(t2,((C_word*)t0)[3]);}
else{
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[2];
f_9036(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t3));}}

/* k9131 in k9011 */
static void C_ccall f_9133(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9133,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* synrules.scm:268: process-template */
t6=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t6))(5,av2);}}

/* k9135 in k9131 in k9011 */
static void C_ccall f_9137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9137,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9152 in k9011 */
static void C_ccall f_9154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9154,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9156 in k9011 */
static void C_ccall f_9158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9158,2,av);}
/* synrules.scm:271: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];{
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

/* f_9163 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_9163(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_9163,6,av);}
a=C_alloc(7);
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_a_i_cons(&a,2,t2,t3);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,t6,t4);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9189,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:282: segment-pattern? */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k9187 */
static void C_ccall f_9189(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,5)))){
C_save_and_reclaim((void *)f_9189,2,av);}
a=C_alloc(35);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[3];
t5=C_s_a_i_plus(&a,2,t4,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9203,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cddr(((C_word*)t0)[2]);
/* synrules.scm:284: meta-variables */
t8=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t8))(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9222,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* synrules.scm:287: meta-variables */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t6;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t7))(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9237,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:289: scheme#vector->list */
t3=*((C_word*)lf[184]+1);{
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
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* k9201 in k9187 */
static void C_ccall f_9203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9203,2,av);}
/* synrules.scm:283: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
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
av2[4]=t1;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* k9220 in k9187 */
static void C_ccall f_9222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9222,2,av);}
/* synrules.scm:286: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
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
av2[4]=t1;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* k9235 in k9187 */
static void C_ccall f_9237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9237,2,av);}
/* synrules.scm:289: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* f_9239 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_9239(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9239,6,av);}
a=C_alloc(8);
if(C_truep(C_i_symbolp(t2))){
t6=C_i_memq(t2,t5);
if(C_truep(C_i_not(t6))){
t7=C_i_assq(t2,t4);
if(C_truep(t7)){
t8=C_i_cdr(t7);
t9=t3;
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=(C_truep(C_i_greater_or_equalp(t8,t9))?C_a_i_cons(&a,2,t2,t5):t5);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9279,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:301: segment-template? */
t7=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}

/* k9277 */
static void C_ccall f_9279(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_9279,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9290,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_i_cddr(((C_word*)t0)[2]);
/* synrules.scm:304: free-meta-variables */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t6))(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9309,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* synrules.scm:309: free-meta-variables */
t7=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t6;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t7))(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9324,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:312: scheme#vector->list */
t3=*((C_word*)lf[184]+1);{
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
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* k9288 in k9277 */
static void C_ccall f_9290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9290,2,av);}
/* synrules.scm:302: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
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

/* k9307 in k9277 */
static void C_ccall f_9309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9309,2,av);}
/* synrules.scm:307: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
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

/* k9322 in k9277 */
static void C_ccall f_9324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9324,2,av);}
/* synrules.scm:312: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* f_9326 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_9326(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9326,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9333,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:316: segment-template? */
t5=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k9331 */
static void C_ccall f_9333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9333,2,av);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
/* synrules.scm:319: ##sys#syntax-error-hook */
t2=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[224];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_i_listp(((C_word*)t0)[4]);
if(C_truep(C_i_not(t2))){
/* synrules.scm:321: ##sys#syntax-error-hook */
t3=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[225];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* f_9354 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_9354(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9354,3,av);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(t2);
/* synrules.scm:327: ellipsis? */
t6=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_9378 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_9378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9378,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9385,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:332: segment-template? */
t4=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k9383 */
static void C_ccall f_9385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9385,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* synrules.scm:333: segment-depth */
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k9388 in k9383 */
static void C_ccall f_9390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_9390,2,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,C_fix(1),t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_9396 in k8358 in k8354 in k8350 in k8346 in k8341 in k8337 in k8333 in k8329 in k8324 in k8317 in k8312 in k8308 in k8304 in k8300 in k8296 in k8292 in k8286 in k8281 in k8277 in k8262 in k9466 in ... */
static void C_ccall f_9396(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_9396,3,av);}
a=C_alloc(7);
t3=C_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9406,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li124),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_9406(t7,t1,t3);}

/* loop */
static void C_fcall f_9406(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9406,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9413,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
/* synrules.scm:341: ellipsis? */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_9413(2,av2);}}}

/* k9411 in loop */
static void C_ccall f_9413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9413,2,av);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
/* synrules.scm:342: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9406(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9432 in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_9434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9434,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[21]+1 /* (set! ##sys#scheme-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9450,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1581: ##sys#macro-environment */
t5=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9436 in k9432 in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_9438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9438,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[93]+1 /* (set! ##sys#default-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9442,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9446,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1583: ##sys#macro-environment */
t5=*((C_word*)lf[20]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9440 in k9436 in k9432 in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_9442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9442,2,av);}
t2=C_mutate((C_word*)lf[196]+1 /* (set! ##sys#meta-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9444 in k9436 in k9432 in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_9446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9446,2,av);}
/* expand.scm:1583: chicken.base#make-parameter */
t2=*((C_word*)lf[197]+1);{
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

/* k9448 in k9432 in k8185 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_9450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9450,2,av);}
/* expand.scm:1581: chicken.internal#fixup-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[198]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[198]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k9452 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_ccall f_9454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9454,2,av);}
/* synrules.scm:43: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
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

/* a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_ccall f_9456(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9456,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9460,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:48: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[200];
av2[3]=t2;
av2[4]=lf[240];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_9460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_9460,2,av);}
a=C_alloc(20);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=lf[201];
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9468,a[2]=((C_word*)t0)[3],a[3]=t10,a[4]=t8,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_symbolp(((C_word*)t4)[1]))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9477,a[2]=t10,a[3]=t4,a[4]=t8,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:53: ##sys#check-syntax */
t13=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[200];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[239];
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
t12=t11;
f_9468(t12,C_SCHEME_UNDEFINED);}}

/* k9466 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_fcall f_9468(C_word t0,C_word t1){
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
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(152,0,2)))){
C_save_and_reclaim_args((void *)trf_9468,2,t0,t1);}
a=C_alloc(152);
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=((C_word*)((C_word*)t0)[4])[1];
t5=((C_word*)((C_word*)t0)[5])[1];
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[7];
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
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_SCHEME_UNDEFINED;
t41=(*a=C_VECTOR_TYPE|1,a[1]=t40,tmp=(C_word)a,a+=2,tmp);
t42=C_SCHEME_UNDEFINED;
t43=(*a=C_VECTOR_TYPE|1,a[1]=t42,tmp=(C_word)a,a+=2,tmp);
t44=C_SCHEME_UNDEFINED;
t45=(*a=C_VECTOR_TYPE|1,a[1]=t44,tmp=(C_word)a,a+=2,tmp);
t46=C_SCHEME_UNDEFINED;
t47=(*a=C_VECTOR_TYPE|1,a[1]=t46,tmp=(C_word)a,a+=2,tmp);
t48=C_SCHEME_UNDEFINED;
t49=(*a=C_VECTOR_TYPE|1,a[1]=t48,tmp=(C_word)a,a+=2,tmp);
t50=C_SCHEME_UNDEFINED;
t51=(*a=C_VECTOR_TYPE|1,a[1]=t50,tmp=(C_word)a,a+=2,tmp);
t52=C_SCHEME_UNDEFINED;
t53=(*a=C_VECTOR_TYPE|1,a[1]=t52,tmp=(C_word)a,a+=2,tmp);
t54=C_SCHEME_UNDEFINED;
t55=(*a=C_VECTOR_TYPE|1,a[1]=t54,tmp=(C_word)a,a+=2,tmp);
t56=C_SCHEME_UNDEFINED;
t57=(*a=C_VECTOR_TYPE|1,a[1]=t56,tmp=(C_word)a,a+=2,tmp);
t58=C_SCHEME_UNDEFINED;
t59=(*a=C_VECTOR_TYPE|1,a[1]=t58,tmp=(C_word)a,a+=2,tmp);
t60=C_SCHEME_UNDEFINED;
t61=(*a=C_VECTOR_TYPE|1,a[1]=t60,tmp=(C_word)a,a+=2,tmp);
t62=C_SCHEME_UNDEFINED;
t63=(*a=C_VECTOR_TYPE|1,a[1]=t62,tmp=(C_word)a,a+=2,tmp);
t64=C_SCHEME_UNDEFINED;
t65=(*a=C_VECTOR_TYPE|1,a[1]=t64,tmp=(C_word)a,a+=2,tmp);
t66=C_SCHEME_UNDEFINED;
t67=(*a=C_VECTOR_TYPE|1,a[1]=t66,tmp=(C_word)a,a+=2,tmp);
t68=C_SCHEME_UNDEFINED;
t69=(*a=C_VECTOR_TYPE|1,a[1]=t68,tmp=(C_word)a,a+=2,tmp);
t70=C_SCHEME_UNDEFINED;
t71=(*a=C_VECTOR_TYPE|1,a[1]=t70,tmp=(C_word)a,a+=2,tmp);
t72=C_SCHEME_UNDEFINED;
t73=(*a=C_VECTOR_TYPE|1,a[1]=t72,tmp=(C_word)a,a+=2,tmp);
t74=C_SCHEME_UNDEFINED;
t75=(*a=C_VECTOR_TYPE|1,a[1]=t74,tmp=(C_word)a,a+=2,tmp);
t76=C_SCHEME_UNDEFINED;
t77=(*a=C_VECTOR_TYPE|1,a[1]=t76,tmp=(C_word)a,a+=2,tmp);
t78=C_SCHEME_UNDEFINED;
t79=(*a=C_VECTOR_TYPE|1,a[1]=t78,tmp=(C_word)a,a+=2,tmp);
t80=C_SCHEME_UNDEFINED;
t81=(*a=C_VECTOR_TYPE|1,a[1]=t80,tmp=(C_word)a,a+=2,tmp);
t82=C_SCHEME_UNDEFINED;
t83=(*a=C_VECTOR_TYPE|1,a[1]=t82,tmp=(C_word)a,a+=2,tmp);
t84=C_SCHEME_UNDEFINED;
t85=(*a=C_VECTOR_TYPE|1,a[1]=t84,tmp=(C_word)a,a+=2,tmp);
t86=C_SCHEME_UNDEFINED;
t87=(*a=C_VECTOR_TYPE|1,a[1]=t86,tmp=(C_word)a,a+=2,tmp);
t88=C_SCHEME_UNDEFINED;
t89=(*a=C_VECTOR_TYPE|1,a[1]=t88,tmp=(C_word)a,a+=2,tmp);
t90=C_SCHEME_UNDEFINED;
t91=(*a=C_VECTOR_TYPE|1,a[1]=t90,tmp=(C_word)a,a+=2,tmp);
t92=C_SCHEME_UNDEFINED;
t93=(*a=C_VECTOR_TYPE|1,a[1]=t92,tmp=(C_word)a,a+=2,tmp);
t94=C_SCHEME_UNDEFINED;
t95=(*a=C_VECTOR_TYPE|1,a[1]=t94,tmp=(C_word)a,a+=2,tmp);
t96=C_SCHEME_UNDEFINED;
t97=(*a=C_VECTOR_TYPE|1,a[1]=t96,tmp=(C_word)a,a+=2,tmp);
t98=C_SCHEME_UNDEFINED;
t99=(*a=C_VECTOR_TYPE|1,a[1]=t98,tmp=(C_word)a,a+=2,tmp);
t100=C_SCHEME_UNDEFINED;
t101=(*a=C_VECTOR_TYPE|1,a[1]=t100,tmp=(C_word)a,a+=2,tmp);
t102=C_SCHEME_UNDEFINED;
t103=(*a=C_VECTOR_TYPE|1,a[1]=t102,tmp=(C_word)a,a+=2,tmp);
t104=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_8264,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t15,a[6]=t17,a[7]=t19,a[8]=t21,a[9]=t23,a[10]=t25,a[11]=t27,a[12]=t29,a[13]=t31,a[14]=t33,a[15]=t35,a[16]=t37,a[17]=t39,a[18]=t41,a[19]=t43,a[20]=t45,a[21]=t47,a[22]=t49,a[23]=t51,a[24]=t53,a[25]=t55,a[26]=t57,a[27]=t59,a[28]=t61,a[29]=t63,a[30]=t65,a[31]=t67,a[32]=t69,a[33]=t71,a[34]=t73,a[35]=t75,a[36]=t77,a[37]=t79,a[38]=t7,a[39]=t81,a[40]=t83,a[41]=t91,a[42]=t93,a[43]=t89,a[44]=t85,a[45]=t5,a[46]=t87,a[47]=t97,a[48]=t103,a[49]=t95,a[50]=t101,a[51]=t99,a[52]=t2,a[53]=t4,a[54]=t6,a[55]=t3,tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:93: r */
t105=t6;{
C_word av2[3];
av2[0]=t105;
av2[1]=t104;
av2[2]=lf[238];
((C_proc)C_fast_retrieve_proc(t105))(3,av2);}}

/* k9475 in k9458 in a9455 in k8182 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_9477(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9477,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=((C_word*)t0)[5];
f_9468(t7,t6);}

/* k9488 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in ... */
static void C_ccall f_9490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9490,2,av);}
/* expand.scm:1561: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[241];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9491 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in ... */
static void C_ccall f_9492(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9492,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9496,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1566: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[241];
av2[3]=t2;
av2[4]=lf[245];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9494 in a9491 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_ccall f_9496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9496,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1567: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[244];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k9501 in k9494 in a9491 in k8179 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_9503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_9503,2,av);}
a=C_alloc(30);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[76],C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_list(&a,3,lf[95],t3,lf[242]);
t5=C_a_i_list(&a,2,lf[243],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,2,t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k9521 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in ... */
static void C_ccall f_9523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9523,2,av);}
/* expand.scm:1509: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[246];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in ... */
static void C_ccall f_9525(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9525,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9529,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1514: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[246];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in ... */
static void C_ccall f_9529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9529,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9532,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1515: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[247];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_ccall f_9532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9532,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9535,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1516: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[249];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_ccall f_9535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_9535,2,av);}
a=C_alloc(28);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9537,a[2]=t8,a[3]=t6,a[4]=((C_word)li128),tmp=(C_word)a,a+=5,tmp));
t10=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9547,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word)li129),tmp=(C_word)a,a+=8,tmp));
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9710,a[2]=t8,a[3]=((C_word)li132),tmp=(C_word)a,a+=4,tmp));
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9805,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1558: ##sys#check-syntax */
t13=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[246];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[259];
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* walk in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_fcall f_9537(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_9537,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9545,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1517: walk1 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9547(t5,t4,t2,t3);}

/* k9543 in walk in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_9545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9545,2,av);}
/* expand.scm:1517: simplify */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9710(t2,((C_word*)t0)[3],t1);}

/* walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_fcall f_9547(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_9547,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9561,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9565,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1520: scheme#vector->list */
t6=*((C_word*)lf[184]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[75],t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9584,a[2]=t3,a[3]=t1,a[4]=t8,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[4],a[9]=t6,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1525: c */
t10=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[3];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t10))(4,av2);}}}}

/* k9559 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_9561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9561,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[207],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9563 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_9565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9565,2,av);}
/* expand.scm:1520: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9537(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_9584(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9584,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9593,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1527: ##sys#check-syntax */
t4=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[247];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[248];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=C_a_i_list(&a,2,lf[75],((C_word*)t0)[6]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9607,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* expand.scm:1530: walk */
t7=((C_word*)((C_word*)t0)[7])[1];
f_9537(t7,t5,((C_word*)t0)[4],t6);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9617,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1531: c */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9591 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_9593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9593,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9605 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_9607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9607,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,lf[211],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9615 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_9617(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9617,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[75],((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9628,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* expand.scm:1533: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_9537(t6,t4,((C_word*)t0)[6],t5);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9638,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t3=C_u_i_car(((C_word*)t0)[7]);
/* expand.scm:1534: c */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_9638(2,av2);}}}}

/* k9626 in k9615 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_ccall f_9628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9628,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,lf[211],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9636 in k9615 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_ccall f_9638(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_9638,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9647,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1536: ##sys#check-syntax */
t4=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[249];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[250];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=C_a_i_list(&a,2,lf[75],((C_word*)t0)[7]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9677,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* expand.scm:1541: walk */
t8=((C_word*)((C_word*)t0)[5])[1];
f_9537(t8,t5,t6,t7);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9692,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1544: walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_9537(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k9645 in k9636 in k9615 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in ... */
static void C_ccall f_9647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9647,2,av);}
a=C_alloc(4);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9658,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1537: walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9537(t5,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k9656 in k9645 in k9636 in k9615 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in ... */
static void C_ccall f_9658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9658,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[74],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9667 in k9675 in k9636 in k9615 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in ... */
static void C_ccall f_9669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9669,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[211],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9675 in k9636 in k9615 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in ... */
static void C_ccall f_9677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_9677,2,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,3,lf[211],((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9669,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1542: walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9537(t5,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k9690 in k9636 in k9615 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in ... */
static void C_ccall f_9692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9692,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9696,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1544: walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_9537(t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9694 in k9690 in k9636 in k9615 in k9582 in walk1 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in ... */
static void C_ccall f_9696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9696,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[211],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* simplify in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_fcall f_9710(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_9710,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9714,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1546: chicken.syntax#match-expression */
t4=*((C_word*)lf[122]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[257];
av2[4]=lf[258];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k9712 in simplify in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_ccall f_9714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9714,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9718,a[2]=((C_word*)t0)[2],a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1546: g2529 */
t3=t2;
f_9718(t3,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1548: chicken.syntax#match-expression */
t3=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[255];
av2[4]=lf[256];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* g2529 in k9712 in simplify in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_fcall f_9718(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9718,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_assq(lf[251],t2);
t4=C_i_cdr(t3);
t5=C_a_i_list(&a,2,lf[242],t4);
/* expand.scm:1547: simplify */
t6=((C_word*)((C_word*)t0)[2])[1];
f_9710(t6,t1,t5);}

/* k9738 in k9712 in simplify in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in ... */
static void C_ccall f_9740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9740,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li131),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1546: g2536 */
t3=t2;
f_9744(t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9787,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1555: chicken.syntax#match-expression */
t3=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[253];
av2[4]=lf[254];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* g2536 in k9738 in k9712 in simplify in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_fcall f_9744(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9744,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_assq(lf[252],t2);
t4=C_i_length(t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(32)))){
t5=C_i_assq(lf[251],t2);
t6=C_i_cdr(t5);
t7=C_i_cdr(t3);
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,lf[242],t8);
/* expand.scm:1552: simplify */
t10=((C_word*)((C_word*)t0)[2])[1];
f_9710(t10,t1,t9);}
else{
t5=((C_word*)t0)[3];
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k9785 in k9738 in k9712 in simplify in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in ... */
static void C_ccall f_9787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9787,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_assq(lf[251],t3);
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9803 in k9533 in k9530 in k9527 in a9524 in k8176 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_9805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9805,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1559: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9537(t3,((C_word*)t0)[4],t2,C_fix(0));}

/* k9814 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in ... */
static void C_ccall f_9816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9816,2,av);}
/* expand.scm:1480: ##sys#extend-macro-environment */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[260];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9817 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in k8109 in ... */
static void C_ccall f_9818(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9818,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9822,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1485: ##sys#check-syntax */
t6=*((C_word*)lf[59]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[260];
av2[3]=t2;
av2[4]=lf[265];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9820 in a9817 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in k8112 in ... */
static void C_ccall f_9822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9822,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9834,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1489: r */
t11=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[264];
((C_proc)C_fast_retrieve_proc(t11))(3,av2);}}

/* k9832 in k9820 in a9817 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in k8115 in ... */
static void C_ccall f_9834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
C_save_and_reclaim((void *)f_9834,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[17]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9862,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9976,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li135),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9976(t12,t8,((C_word*)t0)[2]);}

/* k9860 in k9832 in k9820 in a9817 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_ccall f_9862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_9862,2,av);}
a=C_alloc(17);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_eqp(t5,C_SCHEME_END_OF_LIST);
t7=(C_truep(t6)?lf[261]:C_a_i_cons(&a,2,lf[108],t5));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9883,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t8,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t10=C_eqp(((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
if(C_truep(t10)){
t11=t9;
f_9883(t11,lf[263]);}
else{
t11=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);
t12=t9;
f_9883(t12,C_a_i_cons(&a,2,lf[55],t11));}}

/* k9881 in k9860 in k9832 in k9820 in a9817 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in ... */
static void C_fcall f_9883(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_9883,2,t0,t1);}
a=C_alloc(21);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9924,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9926,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li134),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9926(t11,t7,((C_word*)t0)[7]);}

/* k9922 in k9881 in k9860 in k9832 in k9820 in a9817 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_ccall f_9924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,1)))){
C_save_and_reclaim((void *)f_9924,2,av);}
a=C_alloc(39);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[58],t2);
t4=C_a_i_list(&a,3,lf[108],((C_word*)t0)[3],t3);
t5=C_a_i_list(&a,4,lf[262],((C_word*)t0)[4],((C_word*)t0)[5],t4);
t6=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[55],((C_word*)t0)[2],((C_word*)t0)[7],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop2441 in k9881 in k9860 in k9832 in k9820 in a9817 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in ... */
static void C_fcall f_9926(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9926,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9951,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
t6=C_i_cdr(t5);
t7=C_eqp(t6,C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=C_u_i_car(t4);
t9=t3;
f_9951(t9,t8);}
else{
t8=C_u_i_cdr(t4);
t9=C_i_cdr(t8);
t10=t3;
f_9951(t10,C_i_car(t9));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9949 in map-loop2441 in k9881 in k9860 in k9832 in k9820 in a9817 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in ... */
static void C_fcall f_9951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9951,2,t0,t1);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9926(t6,((C_word*)t0)[5],t5);}

/* map-loop2407 in k9832 in k9820 in a9817 in k8173 in k8170 in k8167 in k8164 in k8161 in k8158 in k8155 in k8152 in k8149 in k8146 in k8143 in k8139 in k8135 in k8132 in k8129 in k8126 in k8123 in k8119 in ... */
static void C_fcall f_9976(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9976,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_u_i_cdr(t3);
t6=C_i_car(t5);
t7=C_a_i_list2(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t8);
t10=C_mutate(((C_word *)((C_word*)t0)[2])+1,t8);
t11=C_slot(t2,C_fix(1));
t13=t1;
t14=t11;
t1=t13;
t2=t14;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_expand_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("expand"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_expand_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(3355))){
C_save(t1);
C_rereclaim2(3355*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,375);
lf[0]=C_h_intern(&lf[0],6, C_text("expand"));
lf[1]=C_h_intern(&lf[1],15, C_text("chicken.syntax#"));
lf[2]=C_h_intern(&lf[2],12, C_text("\003sysfeatures"));
lf[3]=C_h_intern(&lf[3],27, C_text("\003syscurrent-source-filename"));
lf[4]=C_h_intern(&lf[4],23, C_text("\003syscurrent-environment"));
lf[5]=C_h_intern(&lf[5],28, C_text("\003syscurrent-meta-environment"));
lf[7]=C_h_intern(&lf[7],16, C_text("\004coremacro-alias"));
lf[9]=C_h_intern(&lf[9],14, C_text("\004corereal-name"));
lf[10]=C_h_intern(&lf[10],19, C_text("chicken.base#gensym"));
lf[11]=C_h_intern(&lf[11],21, C_text("\003sysqualified-symbol\077"));
lf[12]=C_h_intern(&lf[12],27, C_text("chicken.syntax#strip-syntax"));
lf[13]=C_h_intern(&lf[13],18, C_text("scheme#make-vector"));
lf[14]=C_h_intern(&lf[14],13, C_text("\003sysextend-se"));
lf[15]=C_h_intern(&lf[15],8, C_text("for-each"));
lf[16]=C_h_intern(&lf[16],13, C_text("scheme#append"));
lf[17]=C_h_intern(&lf[17],3, C_text("map"));
lf[18]=C_h_intern(&lf[18],13, C_text("\003sysglobalize"));
lf[19]=C_h_intern(&lf[19],21, C_text("\003sysalias-global-hook"));
lf[20]=C_h_intern(&lf[20],21, C_text("\003sysmacro-environment"));
lf[21]=C_h_intern(&lf[21],28, C_text("\003sysscheme-macro-environment"));
lf[22]=C_h_intern(&lf[22],29, C_text("\003syschicken-macro-environment"));
lf[23]=C_h_intern(&lf[23],33, C_text("\003syschicken-ffi-macro-environment"));
lf[24]=C_h_intern(&lf[24],39, C_text("\003syschicken.condition-macro-environment"));
lf[25]=C_h_intern(&lf[25],34, C_text("\003syschicken.time-macro-environment"));
lf[26]=C_h_intern(&lf[26],34, C_text("\003syschicken.type-macro-environment"));
lf[27]=C_h_intern(&lf[27],36, C_text("\003syschicken.syntax-macro-environment"));
lf[28]=C_h_intern(&lf[28],34, C_text("\003syschicken.base-macro-environment"));
lf[29]=C_h_intern(&lf[29],22, C_text("\003sysensure-transformer"));
lf[30]=C_h_intern(&lf[30],11, C_text("transformer"));
lf[31]=C_h_intern(&lf[31],9, C_text("\003syserror"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376B\000\000$expected syntax-transformer, but got"));
lf[33]=C_h_intern(&lf[33],28, C_text("\003sysextend-macro-environment"));
lf[34]=C_h_intern(&lf[34],10, C_text("\003sysmacro\077"));
lf[35]=C_h_intern(&lf[35],19, C_text("\003sysundefine-macro!"));
lf[36]=C_h_intern(&lf[36],12, C_text("\003sysexpand-0"));
lf[37]=C_h_intern(&lf[37],9, C_text("condition"));
lf[38]=C_h_intern(&lf[38],23, C_text("chicken.condition#abort"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\007message"));
lf[40]=C_h_intern(&lf[40],20, C_text("scheme#string-append"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025during expansion of ("));
lf[42]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010 ...) - "));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\007message"));
lf[44]=C_h_intern(&lf[44],3, C_text("exn"));
lf[45]=C_h_intern(&lf[45],36, C_text("chicken.syntax#expansion-result-hook"));
lf[46]=C_h_intern(&lf[46],21, C_text("\003syssyntax-error-hook"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030syntax transformer for `"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000@\047 returns original form, which would result in endless expansion"));
lf[49]=C_h_intern(&lf[49],21, C_text("scheme#symbol->string"));
lf[50]=C_h_intern(&lf[50],51, C_text("chicken.internal.syntax-rules#syntax-rules-mismatch"));
lf[51]=C_h_intern(&lf[51],16, C_text("\003sysdynamic-wind"));
lf[52]=C_h_intern(&lf[52],40, C_text("chicken.condition#with-exception-handler"));
lf[53]=C_h_intern(&lf[53],37, C_text("scheme#call-with-current-continuation"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034invalid syntax in macro form"));
lf[55]=C_h_intern(&lf[55],8, C_text("\004corelet"));
lf[56]=C_h_intern(&lf[56],16, C_text("\004coreloop-lambda"));
lf[57]=C_h_intern(&lf[57],12, C_text("\004coreletrec\052"));
lf[58]=C_h_intern(&lf[58],8, C_text("\004coreapp"));
lf[59]=C_h_intern(&lf[59],16, C_text("\003syscheck-syntax"));
lf[60]=C_h_intern(&lf[60],3, C_text("let"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002"));
lf[63]=C_h_intern(&lf[63],24, C_text("\003syscompiler-syntax-hook"));
lf[64]=C_h_intern(&lf[64],24, C_text("\010compilercompiler-syntax"));
lf[65]=C_h_intern(&lf[65],25, C_text("\003sysenable-runtime-macros"));
lf[66]=C_h_intern(&lf[66],21, C_text("chicken.syntax#expand"));
lf[67]=C_h_intern(&lf[67],25, C_text("\003sysextended-lambda-list\077"));
lf[68]=C_h_intern(&lf[68],6, C_text("#!rest"));
lf[69]=C_h_intern(&lf[69],10, C_text("#!optional"));
lf[70]=C_h_intern(&lf[70],5, C_text("#!key"));
lf[71]=C_h_intern(&lf[71],31, C_text("\003sysexpand-extended-lambda-list"));
lf[72]=C_h_intern(&lf[72],12, C_text("scheme#cadar"));
lf[73]=C_h_intern(&lf[73],14, C_text("scheme#reverse"));
lf[74]=C_h_intern(&lf[74],10, C_text("\003sysappend"));
lf[75]=C_h_intern(&lf[75],10, C_text("\004corequote"));
lf[76]=C_h_intern(&lf[76],11, C_text("\004corelambda"));
lf[77]=C_h_intern(&lf[77],15, C_text("\003sysget-keyword"));
lf[78]=C_h_intern(&lf[78],31, C_text("chicken.keyword#string->keyword"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000+rest argument list specified more than once"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032invalid lambda list syntax"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000-`#!optional\047 argument marker in wrong context"));
lf[82]=C_h_intern(&lf[82],4, C_text("rest"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000#invalid syntax of `#!rest\047 argument"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000)`#!rest\047 argument marker in wrong context"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000(`#!key\047 argument marker in wrong context"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\0000invalid lambda list syntax after `#!rest\047 marker"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000 invalid required argument syntax"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\0000invalid lambda list syntax after `#!rest\047 marker"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032invalid lambda list syntax"));
lf[90]=C_h_intern(&lf[90],14, C_text("let-optionals\052"));
lf[91]=C_h_intern(&lf[91],8, C_text("optional"));
lf[92]=C_h_intern(&lf[92],4, C_text("let\052"));
lf[93]=C_h_intern(&lf[93],29, C_text("\003sysdefault-macro-environment"));
lf[94]=C_h_intern(&lf[94],37, C_text("\003sysexpand-multiple-values-assignment"));
lf[95]=C_h_intern(&lf[95],20, C_text("\003syscall-with-values"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016"));
lf[97]=C_h_intern(&lf[97],9, C_text("\004coreset!"));
lf[98]=C_h_intern(&lf[98],25, C_text("\003sysdecompose-lambda-list"));
lf[99]=C_h_intern(&lf[99],32, C_text("chicken.syntax#define-definition"));
lf[100]=C_h_intern(&lf[100],39, C_text("chicken.syntax#define-syntax-definition"));
lf[101]=C_h_intern(&lf[101],39, C_text("chicken.syntax#define-values-definition"));
lf[103]=C_h_intern(&lf[103],21, C_text("\003syscanonicalize-body"));
lf[104]=C_h_intern(&lf[104],6, C_text("define"));
lf[105]=C_h_intern(&lf[105],13, C_text("define-syntax"));
lf[106]=C_h_intern(&lf[106],13, C_text("define-values"));
lf[107]=C_h_intern(&lf[107],6, C_text("import"));
lf[108]=C_h_intern(&lf[108],10, C_text("\004corebegin"));
lf[109]=C_h_intern(&lf[109],11, C_text("\004coremodule"));
lf[110]=C_h_intern(&lf[110],12, C_text("\004coreinclude"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[112]=C_h_intern(&lf[112],18, C_text("\004coreletrec-syntax"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376B\000\000,redefinition of currently used defining form"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000"));
lf[116]=C_h_intern(&lf[116],36, C_text("chicken.syntax#expand-curried-define"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[122]=C_h_intern(&lf[122],31, C_text("chicken.syntax#match-expression"));
lf[123]=C_h_intern(&lf[123],24, C_text("\003sysline-number-database"));
lf[124]=C_h_intern(&lf[124],24, C_text("\003syssyntax-error-culprit"));
lf[125]=C_h_intern(&lf[125],18, C_text("\003syssyntax-context"));
lf[126]=C_h_intern(&lf[126],27, C_text("chicken.syntax#syntax-error"));
lf[127]=C_h_intern(&lf[127],15, C_text("\003syssignal-hook"));
lf[128]=C_h_intern(&lf[128],13, C_text("\000syntax-error"));
lf[129]=C_h_intern(&lf[129],24, C_text("\003syssyntax-error/context"));
lf[130]=C_h_intern(&lf[130],9, C_text("\003sysprint"));
lf[131]=C_h_intern(&lf[131],30, C_text("chicken.base#get-output-string"));
lf[132]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006 ...)\047"));
lf[133]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025\012inside expression `("));
lf[134]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[135]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027  Suggesting: `(import "));
lf[136]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002)\047"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025  Suggesting one of:\012"));
lf[138]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017\012      (import "));
lf[140]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002)\047"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376B\000\000# ...)\047 without importing it first.\012"));
lf[142]=C_decode_literal(C_heaptop,C_text("\376B\000\000-\012\012  Perhaps you intended to use the syntax `("));
lf[143]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[144]=C_h_intern(&lf[144],6, C_text("syntax"));
lf[145]=C_h_intern(&lf[145],7, C_text("\003sysget"));
lf[146]=C_h_intern(&lf[146],7, C_text("\004coredb"));
lf[147]=C_h_intern(&lf[147],31, C_text("chicken.base#open-output-string"));
lf[148]=C_h_intern(&lf[148],30, C_text("chicken.syntax#get-line-number"));
lf[149]=C_h_intern(&lf[149],31, C_text("chicken.internal#hash-table-ref"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006) in `"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004\047 - "));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004in `"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004\047 - "));
lf[155]=C_h_intern(&lf[155],24, C_text("chicken.keyword#keyword\077"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024not enough arguments"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022too many arguments"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021not a proper list"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021unexpected object"));
lf[160]=C_h_intern(&lf[160],1, C_text("_"));
lf[161]=C_h_intern(&lf[161],4, C_text("pair"));
lf[162]=C_h_intern(&lf[162],12, C_text("scheme#pair\077"));
lf[163]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015pair expected"));
lf[164]=C_h_intern(&lf[164],8, C_text("variable"));
lf[165]=C_h_intern(&lf[165],14, C_text("scheme#symbol\077"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023identifier expected"));
lf[167]=C_h_intern(&lf[167],6, C_text("symbol"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017symbol expected"));
lf[169]=C_h_intern(&lf[169],4, C_text("list"));
lf[170]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024proper list expected"));
lf[171]=C_h_intern(&lf[171],6, C_text("number"));
lf[172]=C_h_intern(&lf[172],14, C_text("scheme#number\077"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017number expected"));
lf[174]=C_h_intern(&lf[174],6, C_text("string"));
lf[175]=C_h_intern(&lf[175],14, C_text("scheme#string\077"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017string expected"));
lf[177]=C_h_intern(&lf[177],11, C_text("lambda-list"));
lf[178]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024lambda-list expected"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017missing keyword"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017incomplete form"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015pair expected"));
lf[183]=C_h_intern(&lf[183],19, C_text("scheme#list->vector"));
lf[184]=C_h_intern(&lf[184],19, C_text("scheme#vector->list"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033(expand.scm:833) not a list"));
lf[186]=C_h_intern(&lf[186],35, C_text("chicken.syntax#er-macro-transformer"));
lf[187]=C_h_intern(&lf[187],35, C_text("chicken.syntax#ir-macro-transformer"));
lf[188]=C_h_intern(&lf[188],18, C_text("\003syser-transformer"));
lf[189]=C_h_intern(&lf[189],18, C_text("\003sysir-transformer"));
lf[190]=C_h_intern(&lf[190],29, C_text("\003sysinitial-macro-environment"));
lf[191]=C_h_intern(&lf[191],36, C_text("\003syschicken.module-macro-environment"));
lf[192]=C_h_intern(&lf[192],30, C_text("chicken.internal.syntax-rules#"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024no rule matches form"));
lf[194]=C_h_intern(&lf[194],40, C_text("chicken.internal.syntax-rules#drop-right"));
lf[195]=C_h_intern(&lf[195],40, C_text("chicken.internal.syntax-rules#take-right"));
lf[196]=C_h_intern(&lf[196],26, C_text("\003sysmeta-macro-environment"));
lf[197]=C_h_intern(&lf[197],27, C_text("chicken.base#make-parameter"));
lf[198]=C_h_intern(&lf[198],40, C_text("chicken.internal#fixup-macro-environment"));
lf[199]=C_h_intern(&lf[199],29, C_text("chicken.internal#macro-subset"));
lf[200]=C_h_intern(&lf[200],12, C_text("syntax-rules"));
lf[201]=C_h_intern(&lf[201],3, C_text("..."));
lf[202]=C_h_intern(&lf[202],7, C_text("\003syscar"));
lf[203]=C_h_intern(&lf[203],7, C_text("\003syscdr"));
lf[204]=C_h_intern(&lf[204],10, C_text("\003syslength"));
lf[205]=C_h_intern(&lf[205],11, C_text("\003sysvector\077"));
lf[206]=C_h_intern(&lf[206],16, C_text("\003sysvector->list"));
lf[207]=C_h_intern(&lf[207],16, C_text("\003syslist->vector"));
lf[208]=C_h_intern(&lf[208],6, C_text("\003sys>="));
lf[209]=C_h_intern(&lf[209],5, C_text("\003sys="));
lf[210]=C_h_intern(&lf[210],5, C_text("\003sys+"));
lf[211]=C_h_intern(&lf[211],8, C_text("\003syscons"));
lf[212]=C_h_intern(&lf[212],7, C_text("\003syseq\077"));
lf[213]=C_h_intern(&lf[213],10, C_text("\003sysequal\077"));
lf[214]=C_h_intern(&lf[214],9, C_text("\003syslist\077"));
lf[215]=C_h_intern(&lf[215],7, C_text("\003sysmap"));
lf[216]=C_h_intern(&lf[216],9, C_text("\003sysmap-n"));
lf[217]=C_h_intern(&lf[217],9, C_text("\003syspair\077"));
lf[218]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026ill-formed syntax rule"));
lf[219]=C_h_intern(&lf[219],11, C_text("\004coresyntax"));
lf[220]=C_h_intern(&lf[220],5, C_text("quote"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000,template dimension error (too few ellipses\077)"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021too many ellipses"));
lf[223]=C_h_intern(&lf[223],9, C_text("\003sysapply"));
lf[224]=C_decode_literal(C_heaptop,C_text("\376B\000\000%Only one segment per level is allowed"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047Cannot combine dotted tail and ellipsis"));
lf[226]=C_h_intern(&lf[226],4, C_text("temp"));
lf[227]=C_h_intern(&lf[227],4, C_text("tail"));
lf[228]=C_h_intern(&lf[228],6, C_text("rename"));
lf[229]=C_h_intern(&lf[229],2, C_text("or"));
lf[230]=C_h_intern(&lf[230],4, C_text("loop"));
lf[231]=C_h_intern(&lf[231],6, C_text("lambda"));
lf[232]=C_h_intern(&lf[232],3, C_text("len"));
lf[233]=C_h_intern(&lf[233],1, C_text("l"));
lf[234]=C_h_intern(&lf[234],5, C_text("input"));
lf[235]=C_h_intern(&lf[235],4, C_text("else"));
lf[236]=C_h_intern(&lf[236],4, C_text("cond"));
lf[237]=C_h_intern(&lf[237],7, C_text("compare"));
lf[238]=C_h_intern(&lf[238],3, C_text("and"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002"));
lf[241]=C_h_intern(&lf[241],5, C_text("delay"));
lf[242]=C_h_intern(&lf[242],8, C_text("\003syslist"));
lf[243]=C_h_intern(&lf[243],16, C_text("\003sysmake-promise"));
lf[244]=C_h_intern(&lf[244],11, C_text("delay-force"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[246]=C_h_intern(&lf[246],10, C_text("quasiquote"));
lf[247]=C_h_intern(&lf[247],7, C_text("unquote"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[249]=C_h_intern(&lf[249],16, C_text("unquote-splicing"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[251]=C_h_intern(&lf[251],1, C_text("a"));
lf[252]=C_h_intern(&lf[252],1, C_text("b"));
lf[253]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\003sysappend\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376\377\016\376\377\016\376\377\016"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001a\376\377\016"));
lf[255]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\003syslist\376\001\000\000\001b\376\377\016"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\001\000\000\001b\376\377\016"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376\377\016\376\377\016\376\377\016"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001a\376\377\016"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[260]=C_h_intern(&lf[260],2, C_text("do"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[262]=C_h_intern(&lf[262],7, C_text("\004coreif"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[264]=C_h_intern(&lf[264],6, C_text("doloop"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\001\376\001\000\000\001_\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001"
"\000\000\000\001"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[267]=C_h_intern(&lf[267],4, C_text("case"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004eqv\077\376\001\000\000\013scheme#eqv\077\376\377\016"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[270]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016"));
lf[271]=C_h_intern(&lf[271],8, C_text("\003syswarn"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376B\000\000(clause following `else\047 clause in `case\047"));
lf[273]=C_h_intern(&lf[273],14, C_text("\004coreundefined"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[275]=C_h_intern(&lf[275],4, C_text("eqv\077"));
lf[276]=C_h_intern(&lf[276],2, C_text("=>"));
lf[277]=C_h_intern(&lf[277],3, C_text("tmp"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016"));
lf[281]=C_h_intern(&lf[281],7, C_text("sprintf"));
lf[282]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022\047 clause in `cond\047"));
lf[283]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022clause following `"));
lf[284]=C_h_intern(&lf[284],2, C_text("if"));
lf[285]=C_h_intern(&lf[285],18, C_text("\003syssrfi-4-vector\077"));
lf[286]=C_h_intern(&lf[286],18, C_text("chicken.blob#blob\077"));
lf[287]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[288]=C_h_intern(&lf[288],4, C_text("set!"));
lf[289]=C_h_intern(&lf[289],10, C_text("\003syssetter"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[291]=C_h_intern(&lf[291],13, C_text("letrec-syntax"));
lf[292]=C_h_intern(&lf[292],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[293]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015letrec-syntax"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[295]=C_h_intern(&lf[295],10, C_text("let-syntax"));
lf[296]=C_h_intern(&lf[296],15, C_text("\004corelet-syntax"));
lf[297]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012let-syntax"));
lf[298]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[299]=C_h_intern(&lf[299],6, C_text("letrec"));
lf[300]=C_h_intern(&lf[300],11, C_text("\004coreletrec"));
lf[301]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006letrec"));
lf[302]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[303]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003let"));
lf[304]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003let"));
lf[306]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[307]=C_h_intern(&lf[307],18, C_text("\004coredefine-syntax"));
lf[308]=C_h_intern(&lf[308],19, C_text("\003sysregister-export"));
lf[309]=C_h_intern(&lf[309],18, C_text("\003syscurrent-module"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[311]=C_h_intern(&lf[311],31, C_text("\004coreensure-toplevel-definition"));
lf[312]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[314]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[317]=C_h_intern(&lf[317],5, C_text("begin"));
lf[318]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\001\376\001\000\000\001_"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[321]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001"));
lf[322]=C_h_intern(&lf[322],14, C_text("current-module"));
lf[323]=C_h_intern(&lf[323],15, C_text("\003sysmodule-name"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[325]=C_h_intern(&lf[325],16, C_text("define-interface"));
lf[326]=C_h_intern(&lf[326],14, C_text("\004coreinterface"));
lf[327]=C_h_intern(&lf[327],16, C_text("\003sysput/restore!"));
lf[328]=C_h_intern(&lf[328],24, C_text("\004coreelaborationtimeonly"));
lf[329]=C_h_intern(&lf[329],1, C_text("\052"));
lf[330]=C_h_intern(&lf[330],10, C_text("\000interface"));
lf[331]=C_h_intern(&lf[331],20, C_text("\003sysvalidate-exports"));
lf[332]=C_h_intern(&lf[332],17, C_text("syntax-error-hook"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017invalid exports"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376B\000\000-`\052\047 is not allowed as a name for an interface"));
lf[335]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016"));
lf[336]=C_h_intern(&lf[336],7, C_text("functor"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030invalid functor argument"));
lf[338]=C_h_intern(&lf[338],41, C_text("chicken.internal#valid-library-specifier\077"));
lf[339]=C_h_intern(&lf[339],20, C_text("\003sysregister-functor"));
lf[340]=C_h_intern(&lf[340],6, C_text("scheme"));
lf[341]=C_h_intern(&lf[341],14, C_text("chicken.syntax"));
lf[342]=C_h_intern(&lf[342],16, C_text("begin-for-syntax"));
lf[343]=C_h_intern(&lf[343],27, C_text("chicken.internal#library-id"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001"
"_"));
lf[345]=C_h_intern(&lf[345],8, C_text("reexport"));
lf[346]=C_h_intern(&lf[346],17, C_text("\003sysexpand-import"));
lf[347]=C_h_intern(&lf[347],6, C_text("export"));
lf[348]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[349]=C_h_intern(&lf[349],22, C_text("\003sysadd-to-export-list"));
lf[350]=C_h_intern(&lf[350],6, C_text("module"));
lf[351]=C_h_intern(&lf[351],1, C_text("="));
lf[352]=C_h_intern(&lf[352],21, C_text("scheme#string->symbol"));
lf[353]=C_h_intern(&lf[353],17, C_text("\003sysstring-append"));
lf[354]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001_"));
lf[355]=C_h_intern(&lf[355],23, C_text("\003sysinstantiate-functor"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\016"));
lf[357]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000"));
lf[358]=C_h_intern(&lf[358],11, C_text("cond-expand"));
lf[359]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042syntax error in `cond-expand\047 form"));
lf[360]=C_h_intern(&lf[360],25, C_text("chicken.platform#feature\077"));
lf[361]=C_h_intern(&lf[361],3, C_text("not"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376B\000\000(no matching clause in `cond-expand\047 form"));
lf[363]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[364]=C_h_intern(&lf[364],17, C_text("import-for-syntax"));
lf[365]=C_h_intern(&lf[365],28, C_text("\003sysregister-meta-expression"));
lf[366]=C_h_intern(&lf[366],20, C_text("\003sysdecompose-import"));
lf[367]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016"));
lf[368]=C_h_intern(&lf[368],12, C_text("\004corerequire"));
lf[369]=C_h_intern(&lf[369],35, C_text("chicken.internal#module-requirement"));
lf[370]=C_decode_literal(C_heaptop,C_text("\376B\000\000#cannot import from undefined module"));
lf[371]=C_h_intern(&lf[371],10, C_text("\003sysimport"));
lf[372]=C_h_intern(&lf[372],24, C_text("import-syntax-for-syntax"));
lf[373]=C_h_intern(&lf[373],13, C_text("import-syntax"));
lf[374]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\000srfi-0\376\003\000\000\002\376\001\000\000\007\000srfi-2\376\003\000\000\002\376\001\000\000\007\000srfi-6\376\003\000\000\002\376\001\000\000\007\000srfi-9\376\003\000\000\002\376\001\000\000\010\000s"
"rfi-46\376\003\000\000\002\376\001\000\000\010\000srfi-55\376\003\000\000\002\376\001\000\000\010\000srfi-61\376\377\016"));
C_register_lf2(lf,375,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3673,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[671] = {
{C_text("f_10012:expand_2escm"),(void*)f_10012},
{C_text("f_10014:expand_2escm"),(void*)f_10014},
{C_text("f_10018:expand_2escm"),(void*)f_10018},
{C_text("f_10028:expand_2escm"),(void*)f_10028},
{C_text("f_10053:expand_2escm"),(void*)f_10053},
{C_text("f_10063:expand_2escm"),(void*)f_10063},
{C_text("f_10065:expand_2escm"),(void*)f_10065},
{C_text("f_10069:expand_2escm"),(void*)f_10069},
{C_text("f_10077:expand_2escm"),(void*)f_10077},
{C_text("f_10080:expand_2escm"),(void*)f_10080},
{C_text("f_10083:expand_2escm"),(void*)f_10083},
{C_text("f_10086:expand_2escm"),(void*)f_10086},
{C_text("f_10089:expand_2escm"),(void*)f_10089},
{C_text("f_10100:expand_2escm"),(void*)f_10100},
{C_text("f_10102:expand_2escm"),(void*)f_10102},
{C_text("f_10116:expand_2escm"),(void*)f_10116},
{C_text("f_10122:expand_2escm"),(void*)f_10122},
{C_text("f_10125:expand_2escm"),(void*)f_10125},
{C_text("f_10129:expand_2escm"),(void*)f_10129},
{C_text("f_10135:expand_2escm"),(void*)f_10135},
{C_text("f_10138:expand_2escm"),(void*)f_10138},
{C_text("f_10153:expand_2escm"),(void*)f_10153},
{C_text("f_10194:expand_2escm"),(void*)f_10194},
{C_text("f_10198:expand_2escm"),(void*)f_10198},
{C_text("f_10201:expand_2escm"),(void*)f_10201},
{C_text("f_10234:expand_2escm"),(void*)f_10234},
{C_text("f_10249:expand_2escm"),(void*)f_10249},
{C_text("f_10251:expand_2escm"),(void*)f_10251},
{C_text("f_10299:expand_2escm"),(void*)f_10299},
{C_text("f_10301:expand_2escm"),(void*)f_10301},
{C_text("f_10308:expand_2escm"),(void*)f_10308},
{C_text("f_10311:expand_2escm"),(void*)f_10311},
{C_text("f_10314:expand_2escm"),(void*)f_10314},
{C_text("f_10319:expand_2escm"),(void*)f_10319},
{C_text("f_10333:expand_2escm"),(void*)f_10333},
{C_text("f_10339:expand_2escm"),(void*)f_10339},
{C_text("f_10342:expand_2escm"),(void*)f_10342},
{C_text("f_10346:expand_2escm"),(void*)f_10346},
{C_text("f_10352:expand_2escm"),(void*)f_10352},
{C_text("f_10355:expand_2escm"),(void*)f_10355},
{C_text("f_10358:expand_2escm"),(void*)f_10358},
{C_text("f_10361:expand_2escm"),(void*)f_10361},
{C_text("f_10365:expand_2escm"),(void*)f_10365},
{C_text("f_10371:expand_2escm"),(void*)f_10371},
{C_text("f_10374:expand_2escm"),(void*)f_10374},
{C_text("f_10377:expand_2escm"),(void*)f_10377},
{C_text("f_10383:expand_2escm"),(void*)f_10383},
{C_text("f_10409:expand_2escm"),(void*)f_10409},
{C_text("f_10437:expand_2escm"),(void*)f_10437},
{C_text("f_10454:expand_2escm"),(void*)f_10454},
{C_text("f_10460:expand_2escm"),(void*)f_10460},
{C_text("f_10463:expand_2escm"),(void*)f_10463},
{C_text("f_10482:expand_2escm"),(void*)f_10482},
{C_text("f_10500:expand_2escm"),(void*)f_10500},
{C_text("f_10503:expand_2escm"),(void*)f_10503},
{C_text("f_10530:expand_2escm"),(void*)f_10530},
{C_text("f_10557:expand_2escm"),(void*)f_10557},
{C_text("f_10620:expand_2escm"),(void*)f_10620},
{C_text("f_10632:expand_2escm"),(void*)f_10632},
{C_text("f_10648:expand_2escm"),(void*)f_10648},
{C_text("f_10682:expand_2escm"),(void*)f_10682},
{C_text("f_10684:expand_2escm"),(void*)f_10684},
{C_text("f_10707:expand_2escm"),(void*)f_10707},
{C_text("f_10726:expand_2escm"),(void*)f_10726},
{C_text("f_10734:expand_2escm"),(void*)f_10734},
{C_text("f_10736:expand_2escm"),(void*)f_10736},
{C_text("f_10767:expand_2escm"),(void*)f_10767},
{C_text("f_10771:expand_2escm"),(void*)f_10771},
{C_text("f_10773:expand_2escm"),(void*)f_10773},
{C_text("f_10777:expand_2escm"),(void*)f_10777},
{C_text("f_10800:expand_2escm"),(void*)f_10800},
{C_text("f_10815:expand_2escm"),(void*)f_10815},
{C_text("f_10817:expand_2escm"),(void*)f_10817},
{C_text("f_10821:expand_2escm"),(void*)f_10821},
{C_text("f_10824:expand_2escm"),(void*)f_10824},
{C_text("f_10837:expand_2escm"),(void*)f_10837},
{C_text("f_10839:expand_2escm"),(void*)f_10839},
{C_text("f_10843:expand_2escm"),(void*)f_10843},
{C_text("f_10846:expand_2escm"),(void*)f_10846},
{C_text("f_10859:expand_2escm"),(void*)f_10859},
{C_text("f_10861:expand_2escm"),(void*)f_10861},
{C_text("f_10865:expand_2escm"),(void*)f_10865},
{C_text("f_10868:expand_2escm"),(void*)f_10868},
{C_text("f_10881:expand_2escm"),(void*)f_10881},
{C_text("f_10883:expand_2escm"),(void*)f_10883},
{C_text("f_10887:expand_2escm"),(void*)f_10887},
{C_text("f_10895:expand_2escm"),(void*)f_10895},
{C_text("f_10898:expand_2escm"),(void*)f_10898},
{C_text("f_10908:expand_2escm"),(void*)f_10908},
{C_text("f_10933:expand_2escm"),(void*)f_10933},
{C_text("f_10935:expand_2escm"),(void*)f_10935},
{C_text("f_10939:expand_2escm"),(void*)f_10939},
{C_text("f_10956:expand_2escm"),(void*)f_10956},
{C_text("f_10959:expand_2escm"),(void*)f_10959},
{C_text("f_10965:expand_2escm"),(void*)f_10965},
{C_text("f_10972:expand_2escm"),(void*)f_10972},
{C_text("f_10976:expand_2escm"),(void*)f_10976},
{C_text("f_10980:expand_2escm"),(void*)f_10980},
{C_text("f_10982:expand_2escm"),(void*)f_10982},
{C_text("f_10986:expand_2escm"),(void*)f_10986},
{C_text("f_10991:expand_2escm"),(void*)f_10991},
{C_text("f_11006:expand_2escm"),(void*)f_11006},
{C_text("f_11017:expand_2escm"),(void*)f_11017},
{C_text("f_11020:expand_2escm"),(void*)f_11020},
{C_text("f_11042:expand_2escm"),(void*)f_11042},
{C_text("f_11049:expand_2escm"),(void*)f_11049},
{C_text("f_11053:expand_2escm"),(void*)f_11053},
{C_text("f_11062:expand_2escm"),(void*)f_11062},
{C_text("f_11069:expand_2escm"),(void*)f_11069},
{C_text("f_11072:expand_2escm"),(void*)f_11072},
{C_text("f_11107:expand_2escm"),(void*)f_11107},
{C_text("f_11109:expand_2escm"),(void*)f_11109},
{C_text("f_11113:expand_2escm"),(void*)f_11113},
{C_text("f_11124:expand_2escm"),(void*)f_11124},
{C_text("f_11126:expand_2escm"),(void*)f_11126},
{C_text("f_11130:expand_2escm"),(void*)f_11130},
{C_text("f_11141:expand_2escm"),(void*)f_11141},
{C_text("f_11143:expand_2escm"),(void*)f_11143},
{C_text("f_11147:expand_2escm"),(void*)f_11147},
{C_text("f_11158:expand_2escm"),(void*)f_11158},
{C_text("f_11160:expand_2escm"),(void*)f_11160},
{C_text("f_11164:expand_2escm"),(void*)f_11164},
{C_text("f_11175:expand_2escm"),(void*)f_11175},
{C_text("f_11177:expand_2escm"),(void*)f_11177},
{C_text("f_11181:expand_2escm"),(void*)f_11181},
{C_text("f_11184:expand_2escm"),(void*)f_11184},
{C_text("f_11194:expand_2escm"),(void*)f_11194},
{C_text("f_11198:expand_2escm"),(void*)f_11198},
{C_text("f_11200:expand_2escm"),(void*)f_11200},
{C_text("f_11204:expand_2escm"),(void*)f_11204},
{C_text("f_11207:expand_2escm"),(void*)f_11207},
{C_text("f_11210:expand_2escm"),(void*)f_11210},
{C_text("f_11233:expand_2escm"),(void*)f_11233},
{C_text("f_11236:expand_2escm"),(void*)f_11236},
{C_text("f_11282:expand_2escm"),(void*)f_11282},
{C_text("f_11284:expand_2escm"),(void*)f_11284},
{C_text("f_11288:expand_2escm"),(void*)f_11288},
{C_text("f_11291:expand_2escm"),(void*)f_11291},
{C_text("f_11314:expand_2escm"),(void*)f_11314},
{C_text("f_11342:expand_2escm"),(void*)f_11342},
{C_text("f_11347:expand_2escm"),(void*)f_11347},
{C_text("f_11354:expand_2escm"),(void*)f_11354},
{C_text("f_11357:expand_2escm"),(void*)f_11357},
{C_text("f_11366:expand_2escm"),(void*)f_11366},
{C_text("f_11411:expand_2escm"),(void*)f_11411},
{C_text("f_11413:expand_2escm"),(void*)f_11413},
{C_text("f_11438:expand_2escm"),(void*)f_11438},
{C_text("f_11449:expand_2escm"),(void*)f_11449},
{C_text("f_11453:expand_2escm"),(void*)f_11453},
{C_text("f_11455:expand_2escm"),(void*)f_11455},
{C_text("f_11463:expand_2escm"),(void*)f_11463},
{C_text("f_11465:expand_2escm"),(void*)f_11465},
{C_text("f_11469:expand_2escm"),(void*)f_11469},
{C_text("f_11472:expand_2escm"),(void*)f_11472},
{C_text("f_11475:expand_2escm"),(void*)f_11475},
{C_text("f_11482:expand_2escm"),(void*)f_11482},
{C_text("f_11490:expand_2escm"),(void*)f_11490},
{C_text("f_11492:expand_2escm"),(void*)f_11492},
{C_text("f_11496:expand_2escm"),(void*)f_11496},
{C_text("f_11502:expand_2escm"),(void*)f_11502},
{C_text("f_11508:expand_2escm"),(void*)f_11508},
{C_text("f_11511:expand_2escm"),(void*)f_11511},
{C_text("f_11523:expand_2escm"),(void*)f_11523},
{C_text("f_11526:expand_2escm"),(void*)f_11526},
{C_text("f_11557:expand_2escm"),(void*)f_11557},
{C_text("f_11561:expand_2escm"),(void*)f_11561},
{C_text("f_11564:expand_2escm"),(void*)f_11564},
{C_text("f_11571:expand_2escm"),(void*)f_11571},
{C_text("f_11580:expand_2escm"),(void*)f_11580},
{C_text("f_11605:expand_2escm"),(void*)f_11605},
{C_text("f_11639:expand_2escm"),(void*)f_11639},
{C_text("f_11653:expand_2escm"),(void*)f_11653},
{C_text("f_11665:expand_2escm"),(void*)f_11665},
{C_text("f_11667:expand_2escm"),(void*)f_11667},
{C_text("f_11673:expand_2escm"),(void*)f_11673},
{C_text("f_11683:expand_2escm"),(void*)f_11683},
{C_text("f_11697:expand_2escm"),(void*)f_11697},
{C_text("f_11713:expand_2escm"),(void*)f_11713},
{C_text("f_11737:expand_2escm"),(void*)f_11737},
{C_text("f_11772:expand_2escm"),(void*)f_11772},
{C_text("f_11806:expand_2escm"),(void*)f_11806},
{C_text("f_11828:expand_2escm"),(void*)f_11828},
{C_text("f_11853:expand_2escm"),(void*)f_11853},
{C_text("f_11855:expand_2escm"),(void*)f_11855},
{C_text("f_11934:expand_2escm"),(void*)f_11934},
{C_text("f_11946:expand_2escm"),(void*)f_11946},
{C_text("f_11958:expand_2escm"),(void*)f_11958},
{C_text("f_11960:expand_2escm"),(void*)f_11960},
{C_text("f_11964:expand_2escm"),(void*)f_11964},
{C_text("f_11975:expand_2escm"),(void*)f_11975},
{C_text("f_11985:expand_2escm"),(void*)f_11985},
{C_text("f_11993:expand_2escm"),(void*)f_11993},
{C_text("f_11995:expand_2escm"),(void*)f_11995},
{C_text("f_12004:expand_2escm"),(void*)f_12004},
{C_text("f_12010:expand_2escm"),(void*)f_12010},
{C_text("f_12016:expand_2escm"),(void*)f_12016},
{C_text("f_12020:expand_2escm"),(void*)f_12020},
{C_text("f_12033:expand_2escm"),(void*)f_12033},
{C_text("f_12051:expand_2escm"),(void*)f_12051},
{C_text("f_12053:expand_2escm"),(void*)f_12053},
{C_text("f_12078:expand_2escm"),(void*)f_12078},
{C_text("f_12089:expand_2escm"),(void*)f_12089},
{C_text("f_12091:expand_2escm"),(void*)f_12091},
{C_text("f_12099:expand_2escm"),(void*)f_12099},
{C_text("f_12101:expand_2escm"),(void*)f_12101},
{C_text("f_3673:expand_2escm"),(void*)f_3673},
{C_text("f_3676:expand_2escm"),(void*)f_3676},
{C_text("f_3680:expand_2escm"),(void*)f_3680},
{C_text("f_3685:expand_2escm"),(void*)f_3685},
{C_text("f_3689:expand_2escm"),(void*)f_3689},
{C_text("f_3691:expand_2escm"),(void*)f_3691},
{C_text("f_3708:expand_2escm"),(void*)f_3708},
{C_text("f_3715:expand_2escm"),(void*)f_3715},
{C_text("f_3718:expand_2escm"),(void*)f_3718},
{C_text("f_3721:expand_2escm"),(void*)f_3721},
{C_text("f_3755:expand_2escm"),(void*)f_3755},
{C_text("f_3761:expand_2escm"),(void*)f_3761},
{C_text("f_3826:expand_2escm"),(void*)f_3826},
{C_text("f_3833:expand_2escm"),(void*)f_3833},
{C_text("f_3851:expand_2escm"),(void*)f_3851},
{C_text("f_3860:expand_2escm"),(void*)f_3860},
{C_text("f_3881:expand_2escm"),(void*)f_3881},
{C_text("f_3891:expand_2escm"),(void*)f_3891},
{C_text("f_3895:expand_2escm"),(void*)f_3895},
{C_text("f_3920:expand_2escm"),(void*)f_3920},
{C_text("f_3935:expand_2escm"),(void*)f_3935},
{C_text("f_3937:expand_2escm"),(void*)f_3937},
{C_text("f_3985:expand_2escm"),(void*)f_3985},
{C_text("f_4034:expand_2escm"),(void*)f_4034},
{C_text("f_4059:expand_2escm"),(void*)f_4059},
{C_text("f_4071:expand_2escm"),(void*)f_4071},
{C_text("f_4077:expand_2escm"),(void*)f_4077},
{C_text("f_4093:expand_2escm"),(void*)f_4093},
{C_text("f_4111:expand_2escm"),(void*)f_4111},
{C_text("f_4127:expand_2escm"),(void*)f_4127},
{C_text("f_4155:expand_2escm"),(void*)f_4155},
{C_text("f_4165:expand_2escm"),(void*)f_4165},
{C_text("f_4189:expand_2escm"),(void*)f_4189},
{C_text("f_4193:expand_2escm"),(void*)f_4193},
{C_text("f_4196:expand_2escm"),(void*)f_4196},
{C_text("f_4203:expand_2escm"),(void*)f_4203},
{C_text("f_4221:expand_2escm"),(void*)f_4221},
{C_text("f_4231:expand_2escm"),(void*)f_4231},
{C_text("f_4235:expand_2escm"),(void*)f_4235},
{C_text("f_4257:expand_2escm"),(void*)f_4257},
{C_text("f_4268:expand_2escm"),(void*)f_4268},
{C_text("f_4276:expand_2escm"),(void*)f_4276},
{C_text("f_4280:expand_2escm"),(void*)f_4280},
{C_text("f_4282:expand_2escm"),(void*)f_4282},
{C_text("f_4305:expand_2escm"),(void*)f_4305},
{C_text("f_4313:expand_2escm"),(void*)f_4313},
{C_text("f_4316:expand_2escm"),(void*)f_4316},
{C_text("f_4326:expand_2escm"),(void*)f_4326},
{C_text("f_4331:expand_2escm"),(void*)f_4331},
{C_text("f_4337:expand_2escm"),(void*)f_4337},
{C_text("f_4343:expand_2escm"),(void*)f_4343},
{C_text("f_4354:expand_2escm"),(void*)f_4354},
{C_text("f_4365:expand_2escm"),(void*)f_4365},
{C_text("f_4371:expand_2escm"),(void*)f_4371},
{C_text("f_4388:expand_2escm"),(void*)f_4388},
{C_text("f_4399:expand_2escm"),(void*)f_4399},
{C_text("f_4438:expand_2escm"),(void*)f_4438},
{C_text("f_4444:expand_2escm"),(void*)f_4444},
{C_text("f_4448:expand_2escm"),(void*)f_4448},
{C_text("f_4451:expand_2escm"),(void*)f_4451},
{C_text("f_4467:expand_2escm"),(void*)f_4467},
{C_text("f_4471:expand_2escm"),(void*)f_4471},
{C_text("f_4478:expand_2escm"),(void*)f_4478},
{C_text("f_4484:expand_2escm"),(void*)f_4484},
{C_text("f_4489:expand_2escm"),(void*)f_4489},
{C_text("f_4495:expand_2escm"),(void*)f_4495},
{C_text("f_4503:expand_2escm"),(void*)f_4503},
{C_text("f_4509:expand_2escm"),(void*)f_4509},
{C_text("f_4515:expand_2escm"),(void*)f_4515},
{C_text("f_4541:expand_2escm"),(void*)f_4541},
{C_text("f_4559:expand_2escm"),(void*)f_4559},
{C_text("f_4583:expand_2escm"),(void*)f_4583},
{C_text("f_4592:expand_2escm"),(void*)f_4592},
{C_text("f_4604:expand_2escm"),(void*)f_4604},
{C_text("f_4629:expand_2escm"),(void*)f_4629},
{C_text("f_4631:expand_2escm"),(void*)f_4631},
{C_text("f_4694:expand_2escm"),(void*)f_4694},
{C_text("f_4700:expand_2escm"),(void*)f_4700},
{C_text("f_4738:expand_2escm"),(void*)f_4738},
{C_text("f_4742:expand_2escm"),(void*)f_4742},
{C_text("f_4746:expand_2escm"),(void*)f_4746},
{C_text("f_4758:expand_2escm"),(void*)f_4758},
{C_text("f_4801:expand_2escm"),(void*)f_4801},
{C_text("f_4811:expand_2escm"),(void*)f_4811},
{C_text("f_4814:expand_2escm"),(void*)f_4814},
{C_text("f_4818:expand_2escm"),(void*)f_4818},
{C_text("f_4832:expand_2escm"),(void*)f_4832},
{C_text("f_4838:expand_2escm"),(void*)f_4838},
{C_text("f_4844:expand_2escm"),(void*)f_4844},
{C_text("f_4880:expand_2escm"),(void*)f_4880},
{C_text("f_4886:expand_2escm"),(void*)f_4886},
{C_text("f_4905:expand_2escm"),(void*)f_4905},
{C_text("f_4927:expand_2escm"),(void*)f_4927},
{C_text("f_4930:expand_2escm"),(void*)f_4930},
{C_text("f_4947:expand_2escm"),(void*)f_4947},
{C_text("f_4950:expand_2escm"),(void*)f_4950},
{C_text("f_4953:expand_2escm"),(void*)f_4953},
{C_text("f_4958:expand_2escm"),(void*)f_4958},
{C_text("f_4972:expand_2escm"),(void*)f_4972},
{C_text("f_4976:expand_2escm"),(void*)f_4976},
{C_text("f_4988:expand_2escm"),(void*)f_4988},
{C_text("f_5019:expand_2escm"),(void*)f_5019},
{C_text("f_5044:expand_2escm"),(void*)f_5044},
{C_text("f_5063:expand_2escm"),(void*)f_5063},
{C_text("f_5067:expand_2escm"),(void*)f_5067},
{C_text("f_5116:expand_2escm"),(void*)f_5116},
{C_text("f_5169:expand_2escm"),(void*)f_5169},
{C_text("f_5173:expand_2escm"),(void*)f_5173},
{C_text("f_5176:expand_2escm"),(void*)f_5176},
{C_text("f_5179:expand_2escm"),(void*)f_5179},
{C_text("f_5181:expand_2escm"),(void*)f_5181},
{C_text("f_5206:expand_2escm"),(void*)f_5206},
{C_text("f_5220:expand_2escm"),(void*)f_5220},
{C_text("f_5261:expand_2escm"),(void*)f_5261},
{C_text("f_5274:expand_2escm"),(void*)f_5274},
{C_text("f_5290:expand_2escm"),(void*)f_5290},
{C_text("f_5308:expand_2escm"),(void*)f_5308},
{C_text("f_5311:expand_2escm"),(void*)f_5311},
{C_text("f_5350:expand_2escm"),(void*)f_5350},
{C_text("f_5369:expand_2escm"),(void*)f_5369},
{C_text("f_5437:expand_2escm"),(void*)f_5437},
{C_text("f_5536:expand_2escm"),(void*)f_5536},
{C_text("f_5542:expand_2escm"),(void*)f_5542},
{C_text("f_5546:expand_2escm"),(void*)f_5546},
{C_text("f_5549:expand_2escm"),(void*)f_5549},
{C_text("f_5568:expand_2escm"),(void*)f_5568},
{C_text("f_5572:expand_2escm"),(void*)f_5572},
{C_text("f_5590:expand_2escm"),(void*)f_5590},
{C_text("f_5612:expand_2escm"),(void*)f_5612},
{C_text("f_5678:expand_2escm"),(void*)f_5678},
{C_text("f_5703:expand_2escm"),(void*)f_5703},
{C_text("f_5716:expand_2escm"),(void*)f_5716},
{C_text("f_5720:expand_2escm"),(void*)f_5720},
{C_text("f_5731:expand_2escm"),(void*)f_5731},
{C_text("f_5814:expand_2escm"),(void*)f_5814},
{C_text("f_5826:expand_2escm"),(void*)f_5826},
{C_text("f_5840:expand_2escm"),(void*)f_5840},
{C_text("f_5845:expand_2escm"),(void*)f_5845},
{C_text("f_5856:expand_2escm"),(void*)f_5856},
{C_text("f_5876:expand_2escm"),(void*)f_5876},
{C_text("f_5880:expand_2escm"),(void*)f_5880},
{C_text("f_5888:expand_2escm"),(void*)f_5888},
{C_text("f_5895:expand_2escm"),(void*)f_5895},
{C_text("f_5907:expand_2escm"),(void*)f_5907},
{C_text("f_5914:expand_2escm"),(void*)f_5914},
{C_text("f_5918:expand_2escm"),(void*)f_5918},
{C_text("f_5956:expand_2escm"),(void*)f_5956},
{C_text("f_6067:expand_2escm"),(void*)f_6067},
{C_text("f_6070:expand_2escm"),(void*)f_6070},
{C_text("f_6076:expand_2escm"),(void*)f_6076},
{C_text("f_6080:expand_2escm"),(void*)f_6080},
{C_text("f_6102:expand_2escm"),(void*)f_6102},
{C_text("f_6105:expand_2escm"),(void*)f_6105},
{C_text("f_6108:expand_2escm"),(void*)f_6108},
{C_text("f_6111:expand_2escm"),(void*)f_6111},
{C_text("f_6113:expand_2escm"),(void*)f_6113},
{C_text("f_6120:expand_2escm"),(void*)f_6120},
{C_text("f_6146:expand_2escm"),(void*)f_6146},
{C_text("f_6175:expand_2escm"),(void*)f_6175},
{C_text("f_6209:expand_2escm"),(void*)f_6209},
{C_text("f_6233:expand_2escm"),(void*)f_6233},
{C_text("f_6235:expand_2escm"),(void*)f_6235},
{C_text("f_6239:expand_2escm"),(void*)f_6239},
{C_text("f_6251:expand_2escm"),(void*)f_6251},
{C_text("f_6259:expand_2escm"),(void*)f_6259},
{C_text("f_6261:expand_2escm"),(void*)f_6261},
{C_text("f_6283:expand_2escm"),(void*)f_6283},
{C_text("f_6286:expand_2escm"),(void*)f_6286},
{C_text("f_6288:expand_2escm"),(void*)f_6288},
{C_text("f_6335:expand_2escm"),(void*)f_6335},
{C_text("f_6339:expand_2escm"),(void*)f_6339},
{C_text("f_6407:expand_2escm"),(void*)f_6407},
{C_text("f_6413:expand_2escm"),(void*)f_6413},
{C_text("f_6433:expand_2escm"),(void*)f_6433},
{C_text("f_6451:expand_2escm"),(void*)f_6451},
{C_text("f_6456:expand_2escm"),(void*)f_6456},
{C_text("f_6469:expand_2escm"),(void*)f_6469},
{C_text("f_6472:expand_2escm"),(void*)f_6472},
{C_text("f_6522:expand_2escm"),(void*)f_6522},
{C_text("f_6529:expand_2escm"),(void*)f_6529},
{C_text("f_6536:expand_2escm"),(void*)f_6536},
{C_text("f_6588:expand_2escm"),(void*)f_6588},
{C_text("f_6600:expand_2escm"),(void*)f_6600},
{C_text("f_6636:expand_2escm"),(void*)f_6636},
{C_text("f_6652:expand_2escm"),(void*)f_6652},
{C_text("f_6722:expand_2escm"),(void*)f_6722},
{C_text("f_6725:expand_2escm"),(void*)f_6725},
{C_text("f_6739:expand_2escm"),(void*)f_6739},
{C_text("f_6779:expand_2escm"),(void*)f_6779},
{C_text("f_6802:expand_2escm"),(void*)f_6802},
{C_text("f_6804:expand_2escm"),(void*)f_6804},
{C_text("f_6807:expand_2escm"),(void*)f_6807},
{C_text("f_6851:expand_2escm"),(void*)f_6851},
{C_text("f_6859:expand_2escm"),(void*)f_6859},
{C_text("f_6867:expand_2escm"),(void*)f_6867},
{C_text("f_6870:expand_2escm"),(void*)f_6870},
{C_text("f_6881:expand_2escm"),(void*)f_6881},
{C_text("f_6886:expand_2escm"),(void*)f_6886},
{C_text("f_6906:expand_2escm"),(void*)f_6906},
{C_text("f_6910:expand_2escm"),(void*)f_6910},
{C_text("f_6925:expand_2escm"),(void*)f_6925},
{C_text("f_6937:expand_2escm"),(void*)f_6937},
{C_text("f_6939:expand_2escm"),(void*)f_6939},
{C_text("f_6946:expand_2escm"),(void*)f_6946},
{C_text("f_6953:expand_2escm"),(void*)f_6953},
{C_text("f_6955:expand_2escm"),(void*)f_6955},
{C_text("f_6965:expand_2escm"),(void*)f_6965},
{C_text("f_6968:expand_2escm"),(void*)f_6968},
{C_text("f_6971:expand_2escm"),(void*)f_6971},
{C_text("f_6974:expand_2escm"),(void*)f_6974},
{C_text("f_6977:expand_2escm"),(void*)f_6977},
{C_text("f_6984:expand_2escm"),(void*)f_6984},
{C_text("f_6991:expand_2escm"),(void*)f_6991},
{C_text("f_6994:expand_2escm"),(void*)f_6994},
{C_text("f_7003:expand_2escm"),(void*)f_7003},
{C_text("f_7006:expand_2escm"),(void*)f_7006},
{C_text("f_7009:expand_2escm"),(void*)f_7009},
{C_text("f_7012:expand_2escm"),(void*)f_7012},
{C_text("f_7015:expand_2escm"),(void*)f_7015},
{C_text("f_7018:expand_2escm"),(void*)f_7018},
{C_text("f_7031:expand_2escm"),(void*)f_7031},
{C_text("f_7035:expand_2escm"),(void*)f_7035},
{C_text("f_7046:expand_2escm"),(void*)f_7046},
{C_text("f_7050:expand_2escm"),(void*)f_7050},
{C_text("f_7052:expand_2escm"),(void*)f_7052},
{C_text("f_7066:expand_2escm"),(void*)f_7066},
{C_text("f_7070:expand_2escm"),(void*)f_7070},
{C_text("f_7091:expand_2escm"),(void*)f_7091},
{C_text("f_7111:expand_2escm"),(void*)f_7111},
{C_text("f_7115:expand_2escm"),(void*)f_7115},
{C_text("f_7130:expand_2escm"),(void*)f_7130},
{C_text("f_7140:expand_2escm"),(void*)f_7140},
{C_text("f_7145:expand_2escm"),(void*)f_7145},
{C_text("f_7152:expand_2escm"),(void*)f_7152},
{C_text("f_7157:expand_2escm"),(void*)f_7157},
{C_text("f_7161:expand_2escm"),(void*)f_7161},
{C_text("f_7168:expand_2escm"),(void*)f_7168},
{C_text("f_7175:expand_2escm"),(void*)f_7175},
{C_text("f_7182:expand_2escm"),(void*)f_7182},
{C_text("f_7184:expand_2escm"),(void*)f_7184},
{C_text("f_7188:expand_2escm"),(void*)f_7188},
{C_text("f_7196:expand_2escm"),(void*)f_7196},
{C_text("f_7216:expand_2escm"),(void*)f_7216},
{C_text("f_7244:expand_2escm"),(void*)f_7244},
{C_text("f_7246:expand_2escm"),(void*)f_7246},
{C_text("f_7252:expand_2escm"),(void*)f_7252},
{C_text("f_7273:expand_2escm"),(void*)f_7273},
{C_text("f_7278:expand_2escm"),(void*)f_7278},
{C_text("f_7297:expand_2escm"),(void*)f_7297},
{C_text("f_7302:expand_2escm"),(void*)f_7302},
{C_text("f_7321:expand_2escm"),(void*)f_7321},
{C_text("f_7475:expand_2escm"),(void*)f_7475},
{C_text("f_7532:expand_2escm"),(void*)f_7532},
{C_text("f_7585:expand_2escm"),(void*)f_7585},
{C_text("f_7591:expand_2escm"),(void*)f_7591},
{C_text("f_7598:expand_2escm"),(void*)f_7598},
{C_text("f_7600:expand_2escm"),(void*)f_7600},
{C_text("f_7614:expand_2escm"),(void*)f_7614},
{C_text("f_7618:expand_2escm"),(void*)f_7618},
{C_text("f_7635:expand_2escm"),(void*)f_7635},
{C_text("f_7639:expand_2escm"),(void*)f_7639},
{C_text("f_7665:expand_2escm"),(void*)f_7665},
{C_text("f_7682:expand_2escm"),(void*)f_7682},
{C_text("f_7704:expand_2escm"),(void*)f_7704},
{C_text("f_7741:expand_2escm"),(void*)f_7741},
{C_text("f_7762:expand_2escm"),(void*)f_7762},
{C_text("f_7793:expand_2escm"),(void*)f_7793},
{C_text("f_7801:expand_2escm"),(void*)f_7801},
{C_text("f_7823:expand_2escm"),(void*)f_7823},
{C_text("f_7838:expand_2escm"),(void*)f_7838},
{C_text("f_7851:expand_2escm"),(void*)f_7851},
{C_text("f_7866:expand_2escm"),(void*)f_7866},
{C_text("f_7901:expand_2escm"),(void*)f_7901},
{C_text("f_7926:expand_2escm"),(void*)f_7926},
{C_text("f_7940:expand_2escm"),(void*)f_7940},
{C_text("f_7944:expand_2escm"),(void*)f_7944},
{C_text("f_7961:expand_2escm"),(void*)f_7961},
{C_text("f_7965:expand_2escm"),(void*)f_7965},
{C_text("f_8054:expand_2escm"),(void*)f_8054},
{C_text("f_8058:expand_2escm"),(void*)f_8058},
{C_text("f_8063:expand_2escm"),(void*)f_8063},
{C_text("f_8069:expand_2escm"),(void*)f_8069},
{C_text("f_8082:expand_2escm"),(void*)f_8082},
{C_text("f_8085:expand_2escm"),(void*)f_8085},
{C_text("f_8089:expand_2escm"),(void*)f_8089},
{C_text("f_8092:expand_2escm"),(void*)f_8092},
{C_text("f_8095:expand_2escm"),(void*)f_8095},
{C_text("f_8099:expand_2escm"),(void*)f_8099},
{C_text("f_8102:expand_2escm"),(void*)f_8102},
{C_text("f_8105:expand_2escm"),(void*)f_8105},
{C_text("f_8108:expand_2escm"),(void*)f_8108},
{C_text("f_8111:expand_2escm"),(void*)f_8111},
{C_text("f_8114:expand_2escm"),(void*)f_8114},
{C_text("f_8117:expand_2escm"),(void*)f_8117},
{C_text("f_8121:expand_2escm"),(void*)f_8121},
{C_text("f_8125:expand_2escm"),(void*)f_8125},
{C_text("f_8128:expand_2escm"),(void*)f_8128},
{C_text("f_8131:expand_2escm"),(void*)f_8131},
{C_text("f_8134:expand_2escm"),(void*)f_8134},
{C_text("f_8137:expand_2escm"),(void*)f_8137},
{C_text("f_8141:expand_2escm"),(void*)f_8141},
{C_text("f_8145:expand_2escm"),(void*)f_8145},
{C_text("f_8148:expand_2escm"),(void*)f_8148},
{C_text("f_8151:expand_2escm"),(void*)f_8151},
{C_text("f_8154:expand_2escm"),(void*)f_8154},
{C_text("f_8157:expand_2escm"),(void*)f_8157},
{C_text("f_8160:expand_2escm"),(void*)f_8160},
{C_text("f_8163:expand_2escm"),(void*)f_8163},
{C_text("f_8166:expand_2escm"),(void*)f_8166},
{C_text("f_8169:expand_2escm"),(void*)f_8169},
{C_text("f_8172:expand_2escm"),(void*)f_8172},
{C_text("f_8175:expand_2escm"),(void*)f_8175},
{C_text("f_8178:expand_2escm"),(void*)f_8178},
{C_text("f_8181:expand_2escm"),(void*)f_8181},
{C_text("f_8184:expand_2escm"),(void*)f_8184},
{C_text("f_8187:expand_2escm"),(void*)f_8187},
{C_text("f_8189:expand_2escm"),(void*)f_8189},
{C_text("f_8195:expand_2escm"),(void*)f_8195},
{C_text("f_8205:expand_2escm"),(void*)f_8205},
{C_text("f_8222:expand_2escm"),(void*)f_8222},
{C_text("f_8229:expand_2escm"),(void*)f_8229},
{C_text("f_8239:expand_2escm"),(void*)f_8239},
{C_text("f_8264:expand_2escm"),(void*)f_8264},
{C_text("f_8279:expand_2escm"),(void*)f_8279},
{C_text("f_8283:expand_2escm"),(void*)f_8283},
{C_text("f_8288:expand_2escm"),(void*)f_8288},
{C_text("f_8294:expand_2escm"),(void*)f_8294},
{C_text("f_8298:expand_2escm"),(void*)f_8298},
{C_text("f_8302:expand_2escm"),(void*)f_8302},
{C_text("f_8306:expand_2escm"),(void*)f_8306},
{C_text("f_8310:expand_2escm"),(void*)f_8310},
{C_text("f_8314:expand_2escm"),(void*)f_8314},
{C_text("f_8319:expand_2escm"),(void*)f_8319},
{C_text("f_8326:expand_2escm"),(void*)f_8326},
{C_text("f_8331:expand_2escm"),(void*)f_8331},
{C_text("f_8335:expand_2escm"),(void*)f_8335},
{C_text("f_8339:expand_2escm"),(void*)f_8339},
{C_text("f_8343:expand_2escm"),(void*)f_8343},
{C_text("f_8348:expand_2escm"),(void*)f_8348},
{C_text("f_8352:expand_2escm"),(void*)f_8352},
{C_text("f_8356:expand_2escm"),(void*)f_8356},
{C_text("f_8360:expand_2escm"),(void*)f_8360},
{C_text("f_8362:expand_2escm"),(void*)f_8362},
{C_text("f_8368:expand_2escm"),(void*)f_8368},
{C_text("f_8396:expand_2escm"),(void*)f_8396},
{C_text("f_8406:expand_2escm"),(void*)f_8406},
{C_text("f_8420:expand_2escm"),(void*)f_8420},
{C_text("f_8445:expand_2escm"),(void*)f_8445},
{C_text("f_8462:expand_2escm"),(void*)f_8462},
{C_text("f_8469:expand_2escm"),(void*)f_8469},
{C_text("f_8490:expand_2escm"),(void*)f_8490},
{C_text("f_8494:expand_2escm"),(void*)f_8494},
{C_text("f_8498:expand_2escm"),(void*)f_8498},
{C_text("f_8500:expand_2escm"),(void*)f_8500},
{C_text("f_8505:expand_2escm"),(void*)f_8505},
{C_text("f_8528:expand_2escm"),(void*)f_8528},
{C_text("f_8562:expand_2escm"),(void*)f_8562},
{C_text("f_8598:expand_2escm"),(void*)f_8598},
{C_text("f_8602:expand_2escm"),(void*)f_8602},
{C_text("f_8606:expand_2escm"),(void*)f_8606},
{C_text("f_8655:expand_2escm"),(void*)f_8655},
{C_text("f_8663:expand_2escm"),(void*)f_8663},
{C_text("f_8676:expand_2escm"),(void*)f_8676},
{C_text("f_8709:expand_2escm"),(void*)f_8709},
{C_text("f_8713:expand_2escm"),(void*)f_8713},
{C_text("f_8768:expand_2escm"),(void*)f_8768},
{C_text("f_8792:expand_2escm"),(void*)f_8792},
{C_text("f_8836:expand_2escm"),(void*)f_8836},
{C_text("f_8860:expand_2escm"),(void*)f_8860},
{C_text("f_8866:expand_2escm"),(void*)f_8866},
{C_text("f_8879:expand_2escm"),(void*)f_8879},
{C_text("f_8883:expand_2escm"),(void*)f_8883},
{C_text("f_8895:expand_2escm"),(void*)f_8895},
{C_text("f_8941:expand_2escm"),(void*)f_8941},
{C_text("f_8945:expand_2escm"),(void*)f_8945},
{C_text("f_8970:expand_2escm"),(void*)f_8970},
{C_text("f_8976:expand_2escm"),(void*)f_8976},
{C_text("f_9013:expand_2escm"),(void*)f_9013},
{C_text("f_9016:expand_2escm"),(void*)f_9016},
{C_text("f_9021:expand_2escm"),(void*)f_9021},
{C_text("f_9033:expand_2escm"),(void*)f_9033},
{C_text("f_9036:expand_2escm"),(void*)f_9036},
{C_text("f_9039:expand_2escm"),(void*)f_9039},
{C_text("f_9052:expand_2escm"),(void*)f_9052},
{C_text("f_9056:expand_2escm"),(void*)f_9056},
{C_text("f_9060:expand_2escm"),(void*)f_9060},
{C_text("f_9062:expand_2escm"),(void*)f_9062},
{C_text("f_9081:expand_2escm"),(void*)f_9081},
{C_text("f_9133:expand_2escm"),(void*)f_9133},
{C_text("f_9137:expand_2escm"),(void*)f_9137},
{C_text("f_9154:expand_2escm"),(void*)f_9154},
{C_text("f_9158:expand_2escm"),(void*)f_9158},
{C_text("f_9163:expand_2escm"),(void*)f_9163},
{C_text("f_9189:expand_2escm"),(void*)f_9189},
{C_text("f_9203:expand_2escm"),(void*)f_9203},
{C_text("f_9222:expand_2escm"),(void*)f_9222},
{C_text("f_9237:expand_2escm"),(void*)f_9237},
{C_text("f_9239:expand_2escm"),(void*)f_9239},
{C_text("f_9279:expand_2escm"),(void*)f_9279},
{C_text("f_9290:expand_2escm"),(void*)f_9290},
{C_text("f_9309:expand_2escm"),(void*)f_9309},
{C_text("f_9324:expand_2escm"),(void*)f_9324},
{C_text("f_9326:expand_2escm"),(void*)f_9326},
{C_text("f_9333:expand_2escm"),(void*)f_9333},
{C_text("f_9354:expand_2escm"),(void*)f_9354},
{C_text("f_9378:expand_2escm"),(void*)f_9378},
{C_text("f_9385:expand_2escm"),(void*)f_9385},
{C_text("f_9390:expand_2escm"),(void*)f_9390},
{C_text("f_9396:expand_2escm"),(void*)f_9396},
{C_text("f_9406:expand_2escm"),(void*)f_9406},
{C_text("f_9413:expand_2escm"),(void*)f_9413},
{C_text("f_9434:expand_2escm"),(void*)f_9434},
{C_text("f_9438:expand_2escm"),(void*)f_9438},
{C_text("f_9442:expand_2escm"),(void*)f_9442},
{C_text("f_9446:expand_2escm"),(void*)f_9446},
{C_text("f_9450:expand_2escm"),(void*)f_9450},
{C_text("f_9454:expand_2escm"),(void*)f_9454},
{C_text("f_9456:expand_2escm"),(void*)f_9456},
{C_text("f_9460:expand_2escm"),(void*)f_9460},
{C_text("f_9468:expand_2escm"),(void*)f_9468},
{C_text("f_9477:expand_2escm"),(void*)f_9477},
{C_text("f_9490:expand_2escm"),(void*)f_9490},
{C_text("f_9492:expand_2escm"),(void*)f_9492},
{C_text("f_9496:expand_2escm"),(void*)f_9496},
{C_text("f_9503:expand_2escm"),(void*)f_9503},
{C_text("f_9523:expand_2escm"),(void*)f_9523},
{C_text("f_9525:expand_2escm"),(void*)f_9525},
{C_text("f_9529:expand_2escm"),(void*)f_9529},
{C_text("f_9532:expand_2escm"),(void*)f_9532},
{C_text("f_9535:expand_2escm"),(void*)f_9535},
{C_text("f_9537:expand_2escm"),(void*)f_9537},
{C_text("f_9545:expand_2escm"),(void*)f_9545},
{C_text("f_9547:expand_2escm"),(void*)f_9547},
{C_text("f_9561:expand_2escm"),(void*)f_9561},
{C_text("f_9565:expand_2escm"),(void*)f_9565},
{C_text("f_9584:expand_2escm"),(void*)f_9584},
{C_text("f_9593:expand_2escm"),(void*)f_9593},
{C_text("f_9607:expand_2escm"),(void*)f_9607},
{C_text("f_9617:expand_2escm"),(void*)f_9617},
{C_text("f_9628:expand_2escm"),(void*)f_9628},
{C_text("f_9638:expand_2escm"),(void*)f_9638},
{C_text("f_9647:expand_2escm"),(void*)f_9647},
{C_text("f_9658:expand_2escm"),(void*)f_9658},
{C_text("f_9669:expand_2escm"),(void*)f_9669},
{C_text("f_9677:expand_2escm"),(void*)f_9677},
{C_text("f_9692:expand_2escm"),(void*)f_9692},
{C_text("f_9696:expand_2escm"),(void*)f_9696},
{C_text("f_9710:expand_2escm"),(void*)f_9710},
{C_text("f_9714:expand_2escm"),(void*)f_9714},
{C_text("f_9718:expand_2escm"),(void*)f_9718},
{C_text("f_9740:expand_2escm"),(void*)f_9740},
{C_text("f_9744:expand_2escm"),(void*)f_9744},
{C_text("f_9787:expand_2escm"),(void*)f_9787},
{C_text("f_9805:expand_2escm"),(void*)f_9805},
{C_text("f_9816:expand_2escm"),(void*)f_9816},
{C_text("f_9818:expand_2escm"),(void*)f_9818},
{C_text("f_9822:expand_2escm"),(void*)f_9822},
{C_text("f_9834:expand_2escm"),(void*)f_9834},
{C_text("f_9862:expand_2escm"),(void*)f_9862},
{C_text("f_9883:expand_2escm"),(void*)f_9883},
{C_text("f_9924:expand_2escm"),(void*)f_9924},
{C_text("f_9926:expand_2escm"),(void*)f_9926},
{C_text("f_9951:expand_2escm"),(void*)f_9951},
{C_text("f_9976:expand_2escm"),(void*)f_9976},
{C_text("toplevel:expand_2escm"),(void*)C_expand_toplevel},
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
o|hiding unexported module binding: chicken.syntax#d 
o|hiding unexported module binding: chicken.syntax#define-alias 
o|hiding unexported module binding: chicken.syntax#d 
o|hiding unexported module binding: chicken.syntax#map-se 
o|hiding unexported module binding: chicken.syntax#dd 
o|hiding unexported module binding: chicken.syntax#dm 
o|hiding unexported module binding: chicken.syntax#dx 
o|hiding unexported module binding: chicken.syntax#lookup 
o|hiding unexported module binding: chicken.syntax#macro-alias 
o|hiding unexported module binding: chicken.syntax#expansion-result-hook 
o|hiding unexported module binding: chicken.syntax#defjam-error 
o|hiding unexported module binding: chicken.syntax#define-definition 
o|hiding unexported module binding: chicken.syntax#define-syntax-definition 
o|hiding unexported module binding: chicken.syntax#define-values-definition 
o|hiding unexported module binding: chicken.syntax#import-definition 
o|hiding unexported module binding: chicken.syntax#make-er/ir-transformer 
o|hiding unexported module binding: chicken.internal.syntax-rules#process-syntax-rules 
S|applied compiler syntax:
S|  chicken.format#sprintf		1
S|  foldl		1
S|  ##sys#map		5
S|  for-each		1
S|  map		12
o|eliminated procedure checks: 548 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (scheme#>= * *)
o|  1 (scheme#= * *)
o|  3 (scheme#+ * *)
o|  1 (scheme#<= * *)
o|  1 (scheme#zero? integer)
o|  3 (scheme#- * *)
o|  2 (scheme#> * *)
o|  1 (##sys#check-output-port * * *)
o|  6 (scheme#cddr (pair * pair))
o|  1 (scheme#= fixnum fixnum)
o|  2 (scheme#cdddr (pair * (pair * pair)))
o|  2 (scheme#vector-length vector)
o|  8 (scheme#eqv? (or eof null fixnum char boolean symbol) *)
o|  1 (scheme#caar (pair pair *))
o|  1 (scheme#>= fixnum fixnum)
o|  3 (scheme#length list)
o|  19 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  2 (scheme#cdar (pair pair *))
o|  10 (##sys#check-list (or pair list) *)
o|  1 (scheme#set-cdr! pair *)
o|  72 (scheme#cdr pair)
o|  1 (scheme#set-car! pair *)
o|  59 (scheme#car pair)
(o e)|safe calls: 1244 
(o e)|assignments to immediate values: 9 
o|inlining procedure: k3693 
o|inlining procedure: k3693 
o|contracted procedure: "(expand.scm:93) g310311" 
o|inlining procedure: k3710 
o|inlining procedure: k3710 
o|contracted procedure: "(expand.scm:103) g343344" 
o|contracted procedure: "(expand.scm:102) g338339" 
o|contracted procedure: "(expand.scm:101) g332333" 
o|contracted procedure: "(expand.scm:97) g320321" 
o|inlining procedure: k3766 
o|inlining procedure: k3766 
o|inlining procedure: k3788 
o|inlining procedure: k3788 
o|inlining procedure: k3797 
o|inlining procedure: k3797 
o|contracted procedure: "(expand.scm:116) g374375" 
o|contracted procedure: "(expand.scm:115) g363364" 
o|inlining procedure: k3803 
o|inlining procedure: k3803 
o|inlining procedure: k3862 
o|inlining procedure: k3862 
o|inlining procedure: k3939 
o|contracted procedure: "(expand.scm:141) g475485" 
o|inlining procedure: k3939 
o|inlining procedure: k3987 
o|contracted procedure: "(expand.scm:136) g433441" 
o|contracted procedure: "(expand.scm:139) g451452" 
o|contracted procedure: "(expand.scm:138) g447448" 
o|inlining procedure: k3987 
o|inlining procedure: k4036 
o|inlining procedure: k4036 
o|inlining procedure: k4079 
o|inlining procedure: k4079 
o|inlining procedure: k4095 
o|inlining procedure: k4095 
o|inlining procedure: k4113 
o|inlining procedure: k4113 
o|contracted procedure: "(expand.scm:149) g512513" 
o|inlining procedure: k4170 
o|inlining procedure: k4170 
o|inlining procedure: k4200 
o|inlining procedure: k4200 
o|inlining procedure: k4242 
o|inlining procedure: k4242 
o|inlining procedure: k4284 
o|inlining procedure: k4284 
o|inlining procedure: k4349 
o|inlining procedure: k4373 
o|inlining procedure: k4373 
o|inlining procedure: k4416 
o|inlining procedure: k4416 
o|inlining procedure: k4349 
o|inlining procedure: k4520 
o|inlining procedure: k4520 
o|inlining procedure: k4561 
o|inlining procedure: k4584 
o|inlining procedure: k4633 
o|inlining procedure: k4633 
o|inlining procedure: k4702 
o|contracted procedure: "(expand.scm:291) g688697" 
o|inlining procedure: k4702 
o|inlining procedure: k4584 
o|inlining procedure: k4747 
o|inlining procedure: k4747 
o|inlining procedure: k4777 
o|contracted procedure: "(expand.scm:296) g738739" 
o|inlining procedure: k4777 
o|inlining procedure: k4795 
o|inlining procedure: k4795 
o|inlining procedure: k4561 
o|inlining procedure: k4846 
o|inlining procedure: k4846 
o|inlining procedure: k4888 
o|inlining procedure: k4914 
o|inlining procedure: k4914 
o|substituted constant variable: a4921 
o|substituted constant variable: a4923 
o|substituted constant variable: a4925 
o|inlining procedure: k4888 
o|inlining procedure: k4960 
o|inlining procedure: k4977 
o|inlining procedure: k4977 
o|substituted constant variable: %let822 
o|inlining procedure: k5020 
o|inlining procedure: k5020 
o|inlining procedure: k5073 
o|inlining procedure: k5073 
o|inlining procedure: k5085 
o|inlining procedure: k5085 
o|inlining procedure: k5145 
o|substituted constant variable: %lambda819 
o|inlining procedure: k5145 
o|contracted procedure: "(expand.scm:370) ->keyword813" 
o|inlining procedure: k5183 
o|inlining procedure: k5183 
o|inlining procedure: k4960 
o|inlining procedure: k5230 
o|inlining procedure: k5230 
o|inlining procedure: k5247 
o|inlining procedure: k5247 
o|inlining procedure: k5275 
o|inlining procedure: k5275 
o|inlining procedure: k5291 
o|inlining procedure: k5303 
o|inlining procedure: k5303 
o|inlining procedure: k5291 
o|inlining procedure: k5351 
o|inlining procedure: k5351 
o|inlining procedure: k5370 
o|inlining procedure: k5389 
o|inlining procedure: k5389 
o|substituted constant variable: a5427 
o|substituted constant variable: a5429 
o|substituted constant variable: a5431 
o|inlining procedure: k5370 
o|inlining procedure: k5438 
o|inlining procedure: k5438 
o|inlining procedure: k5460 
o|inlining procedure: k5460 
o|substituted constant variable: a5477 
o|substituted constant variable: a5479 
o|substituted constant variable: a5481 
o|inlining procedure: k5488 
o|inlining procedure: k5488 
o|substituted constant variable: a5504 
o|substituted constant variable: a5506 
o|substituted constant variable: a5508 
o|inlining procedure: k5512 
o|inlining procedure: k5512 
o|inlining procedure: k5592 
o|inlining procedure: k5592 
o|inlining procedure: k5614 
o|contracted procedure: "(expand.scm:461) g982992" 
o|inlining procedure: k5614 
o|inlining procedure: k5680 
o|inlining procedure: k5680 
o|inlining procedure: k5739 
o|inlining procedure: k5739 
o|inlining procedure: k5748 
o|inlining procedure: k5748 
o|inlining procedure: k5757 
o|inlining procedure: k5757 
o|inlining procedure: k5778 
o|inlining procedure: k5778 
o|inlining procedure: k5787 
o|inlining procedure: k5787 
o|substituted constant variable: a5806 
o|substituted constant variable: a5808 
o|substituted constant variable: a5810 
o|substituted constant variable: a5812 
o|inlining procedure: k5816 
o|inlining procedure: k5828 
o|inlining procedure: k5828 
o|inlining procedure: k5851 
o|inlining procedure: k5851 
o|inlining procedure: k5902 
o|inlining procedure: k5920 
o|inlining procedure: k5920 
o|inlining procedure: k5902 
o|inlining procedure: k5977 
o|inlining procedure: k5977 
o|inlining procedure: k6009 
o|inlining procedure: k6024 
o|inlining procedure: k6024 
o|inlining procedure: k6036 
o|inlining procedure: k6036 
o|inlining procedure: k6009 
o|inlining procedure: k5816 
o|inlining procedure: k6115 
o|contracted procedure: "(expand.scm:543) g11611172" 
o|inlining procedure: k6087 
o|inlining procedure: k6087 
o|inlining procedure: k6115 
o|inlining procedure: k6165 
o|inlining procedure: k6165 
o|inlining procedure: k6177 
o|contracted procedure: "(expand.scm:535) g11131122" 
o|inlining procedure: k6177 
o|inlining procedure: k6211 
o|contracted procedure: "(expand.scm:538) g11371138" 
o|inlining procedure: k6211 
o|substituted constant variable: g11291132 
o|inlining procedure: k6263 
o|inlining procedure: k6290 
o|inlining procedure: k6290 
o|inlining procedure: k6263 
o|inlining procedure: k6330 
o|inlining procedure: "(expand.scm:571) chicken.syntax#defjam-error" 
o|inlining procedure: k6330 
o|inlining procedure: k6369 
o|inlining procedure: k6369 
o|substituted constant variable: a6391 
o|inlining procedure: k6415 
o|inlining procedure: k6415 
o|inlining procedure: k6443 
o|inlining procedure: k6461 
o|inlining procedure: k6489 
o|inlining procedure: k6489 
o|inlining procedure: "(expand.scm:596) chicken.syntax#defjam-error" 
o|inlining procedure: k6461 
o|inlining procedure: k6443 
o|inlining procedure: k6592 
o|inlining procedure: k6592 
o|inlining procedure: k6641 
o|inlining procedure: k6641 
o|inlining procedure: k6677 
o|inlining procedure: k6677 
o|inlining procedure: k6727 
o|inlining procedure: k6751 
o|inlining procedure: k6751 
o|inlining procedure: k6727 
o|inlining procedure: k6774 
o|inlining procedure: k6774 
o|inlining procedure: k6797 
o|inlining procedure: k6797 
o|inlining procedure: k6809 
o|inlining procedure: k6809 
o|inlining procedure: k6926 
o|inlining procedure: k6926 
o|inlining procedure: k6957 
o|inlining procedure: k6957 
o|inlining procedure: k7019 
o|inlining procedure: k7019 
o|inlining procedure: k7054 
o|inlining procedure: k7054 
o|contracted procedure: "(expand.scm:707) syntax-imports1337" 
o|inlining procedure: k6888 
o|inlining procedure: k6888 
o|inlining procedure: k7093 
o|inlining procedure: k7103 
o|inlining procedure: k7120 
o|inlining procedure: k7120 
o|inlining procedure: k7103 
o|inlining procedure: k7093 
o|inlining procedure: k7147 
o|inlining procedure: k7147 
o|inlining procedure: k7166 
o|inlining procedure: k7166 
o|propagated global variable: sexp1426 ##sys#syntax-error-culprit 
o|inlining procedure: k7189 
o|inlining procedure: k7189 
o|inlining procedure: k7201 
o|inlining procedure: k7201 
o|inlining procedure: k7217 
o|inlining procedure: k7230 
o|inlining procedure: k7230 
o|inlining procedure: k7217 
o|inlining procedure: k7257 
o|inlining procedure: k7257 
o|inlining procedure: k7280 
o|inlining procedure: k7304 
o|inlining procedure: k7304 
o|inlining procedure: k7339 
o|inlining procedure: k7339 
o|inlining procedure: k7362 
o|inlining procedure: k7362 
o|inlining procedure: k7280 
o|inlining procedure: k7383 
o|inlining procedure: k7383 
o|inlining procedure: k7396 
o|inlining procedure: k7408 
o|inlining procedure: k7408 
o|inlining procedure: k7426 
o|inlining procedure: k7426 
o|inlining procedure: k7444 
o|inlining procedure: k7444 
o|inlining procedure: k7462 
o|inlining procedure: k7462 
o|inlining procedure: k7484 
o|inlining procedure: k7484 
o|substituted constant variable: a7497 
o|substituted constant variable: a7499 
o|substituted constant variable: a7501 
o|substituted constant variable: a7503 
o|substituted constant variable: a7505 
o|substituted constant variable: a7507 
o|substituted constant variable: a7509 
o|substituted constant variable: a7511 
o|inlining procedure: k7396 
o|inlining procedure: k7521 
o|inlining procedure: k7521 
o|inlining procedure: k7602 
o|inlining procedure: k7602 
o|inlining procedure: k7640 
o|inlining procedure: k7640 
o|contracted procedure: "(expand.scm:835) g15181519" 
o|inlining procedure: k7684 
o|inlining procedure: k7699 
o|inlining procedure: k7699 
o|inlining procedure: k7684 
o|inlining procedure: k7722 
o|inlining procedure: k7743 
o|inlining procedure: k7743 
o|inlining procedure: k7722 
o|inlining procedure: k7780 
o|inlining procedure: k7808 
o|inlining procedure: k7808 
o|inlining procedure: k7839 
o|inlining procedure: k7839 
o|inlining procedure: k7873 
o|inlining procedure: k7873 
o|removed unused parameter to known procedure: n1597 "(expand.scm:867) lookup21508" 
o|contracted procedure: "(expand.scm:866) g15651566" 
o|inlining procedure: k7879 
o|inlining procedure: k7879 
o|removed unused parameter to known procedure: n1597 "(expand.scm:864) lookup21508" 
o|contracted procedure: "(expand.scm:863) g15551556" 
o|inlining procedure: k7780 
o|removed unused formal parameters: (n1597) 
o|inlining procedure: k7903 
o|inlining procedure: k7903 
o|inlining procedure: k7928 
o|inlining procedure: k7928 
o|inlining procedure: k7966 
o|inlining procedure: k7966 
o|contracted procedure: "(expand.scm:903) g16221623" 
o|inlining procedure: k7992 
o|inlining procedure: k7992 
o|inlining procedure: k8021 
o|contracted procedure: "(expand.scm:903) g16391640" 
o|inlining procedure: k8021 
o|contracted procedure: "(expand.scm:910) g16351636" 
o|inlining procedure: k8042 
o|inlining procedure: k8042 
o|inlining procedure: k8207 
o|substituted constant variable: a8225 
o|inlining procedure: k8207 
o|inlining procedure: k8241 
o|substituted constant variable: a8251 
o|inlining procedure: k8241 
o|contracted procedure: "(synrules.scm:57) chicken.internal.syntax-rules#process-syntax-rules" 
o|removed side-effect free assignment to unused variable: %vector-length2610 
o|removed side-effect free assignment to unused variable: %vector-ref2611 
o|removed side-effect free assignment to unused variable: %null?2633 
o|removed side-effect free assignment to unused variable: %or2634 
o|removed side-effect free assignment to unused variable: %syntax-error2640 
o|inlining procedure: k8422 
o|inlining procedure: k8422 
o|inlining procedure: k8464 
o|inlining procedure: k8464 
o|inlining procedure: k8512 
o|inlining procedure: k8512 
o|inlining procedure: k8530 
o|inlining procedure: k8530 
o|inlining procedure: k8566 
o|inlining procedure: k8566 
o|inlining procedure: k8668 
o|inlining procedure: k8668 
o|inlining procedure: k8702 
o|inlining procedure: k8702 
o|inlining procedure: k8838 
o|inlining procedure: k8838 
o|inlining procedure: k8901 
o|inlining procedure: k8901 
o|inlining procedure: k8929 
o|inlining procedure: k8929 
o|inlining procedure: k8978 
o|inlining procedure: k8990 
o|inlining procedure: k8990 
o|inlining procedure: k8978 
o|inlining procedure: k9022 
o|inlining procedure: k9022 
o|substituted constant variable: %append2603 
o|substituted constant variable: a9068 
o|inlining procedure: k9064 
o|inlining procedure: k9064 
o|substituted constant variable: a9074 
o|substituted constant variable: %apply2604 
o|substituted constant variable: %append2603 
o|inlining procedure: k9096 
o|inlining procedure: k9096 
o|inlining procedure: k9121 
o|inlining procedure: k9121 
o|inlining procedure: k9165 
o|inlining procedure: k9165 
o|substituted constant variable: a9199 
o|inlining procedure: k9208 
o|inlining procedure: k9208 
o|inlining procedure: k9241 
o|inlining procedure: k9262 
o|inlining procedure: k9262 
o|inlining procedure: k9241 
o|inlining procedure: k9295 
o|inlining procedure: k9295 
o|inlining procedure: k9328 
o|inlining procedure: k9340 
o|inlining procedure: k9340 
o|inlining procedure: k9328 
o|inlining procedure: k9356 
o|inlining procedure: k9356 
o|inlining procedure: k9380 
o|substituted constant variable: a9386 
o|inlining procedure: k9380 
o|inlining procedure: k9408 
o|inlining procedure: k9408 
o|inlining procedure: k9549 
o|inlining procedure: k9549 
o|inlining procedure: k9579 
o|inlining procedure: k9579 
o|inlining procedure: k9633 
o|inlining procedure: k9633 
o|inlining procedure: k9715 
o|inlining procedure: k9715 
o|inlining procedure: k9749 
o|inlining procedure: k9749 
o|inlining procedure: k9788 
o|contracted procedure: "(expand.scm:1546) g25442545" 
o|inlining procedure: k9788 
o|inlining procedure: k9928 
o|contracted procedure: "(expand.scm:1503) g24472456" 
o|inlining procedure: k9898 
o|inlining procedure: k9898 
o|inlining procedure: k9928 
o|inlining procedure: k9978 
o|contracted procedure: "(expand.scm:1492) g24132422" 
o|inlining procedure: k9978 
o|inlining procedure: k10030 
o|inlining procedure: k10030 
o|inlining procedure: k10104 
o|inlining procedure: k10104 
o|inlining procedure: k10130 
o|inlining procedure: k10148 
o|inlining procedure: k10148 
o|inlining procedure: k10130 
o|inlining procedure: k10253 
o|inlining procedure: k10253 
o|inlining procedure: k10321 
o|inlining procedure: k10321 
o|substituted constant variable: a10348 
o|substituted constant variable: a10349 
o|inlining procedure: k10366 
o|inlining procedure: k10393 
o|inlining procedure: k10393 
o|inlining procedure: k10366 
o|inlining procedure: k10455 
o|inlining procedure: k10455 
o|inlining procedure: k10591 
o|inlining procedure: k10591 
o|inlining procedure: k10603 
o|inlining procedure: k10603 
o|inlining procedure: k10615 
o|inlining procedure: k10615 
o|inlining procedure: k10627 
o|inlining procedure: k10627 
o|inlining procedure: k10636 
o|inlining procedure: k10636 
o|inlining procedure: k10689 
o|inlining procedure: k10689 
o|inlining procedure: k10741 
o|inlining procedure: k10741 
o|inlining procedure: k10784 
o|inlining procedure: k10784 
o|inlining procedure: "(expand.scm:1272) chicken.syntax#defjam-error" 
o|contracted procedure: "(expand.scm:1269) g21272128" 
o|inlining procedure: k10998 
o|inlining procedure: k11033 
o|inlining procedure: k11033 
o|inlining procedure: "(expand.scm:1247) chicken.syntax#defjam-error" 
o|contracted procedure: "(expand.scm:1244) g20982099" 
o|inlining procedure: k10998 
o|inlining procedure: k11185 
o|inlining procedure: k11185 
o|inlining procedure: k11234 
o|inlining procedure: k11234 
o|inlining procedure: k11249 
o|inlining procedure: k11249 
o|inlining procedure: k11355 
o|inlining procedure: k11355 
o|inlining procedure: k11370 
o|inlining procedure: k11382 
o|inlining procedure: k11382 
o|substituted constant variable: a11399 
o|inlining procedure: k11370 
o|inlining procedure: k11415 
o|inlining procedure: k11415 
o|propagated global variable: g19721973 ##sys#expand-import 
o|inlining procedure: k11473 
o|inlining procedure: k11473 
o|inlining procedure: k11503 
o|inlining procedure: k11503 
o|inlining procedure: k11600 
o|inlining procedure: k11600 
o|inlining procedure: k11620 
o|inlining procedure: k11620 
o|inlining procedure: k11685 
o|inlining procedure: k11685 
o|inlining procedure: k11714 
o|inlining procedure: k11726 
o|inlining procedure: k11726 
o|inlining procedure: k11714 
o|inlining procedure: k11758 
o|inlining procedure: k11773 
o|inlining procedure: k11773 
o|inlining procedure: k11758 
o|inlining procedure: k11794 
o|inlining procedure: k11794 
o|substituted constant variable: a11815 
o|substituted constant variable: a11817 
o|substituted constant variable: a11819 
o|inlining procedure: k11830 
o|inlining procedure: k11857 
o|contracted procedure: "(expand.scm:1027) g18841893" 
o|inlining procedure: k11857 
o|inlining procedure: k11830 
o|inlining procedure: k11901 
o|inlining procedure: k11901 
o|inlining procedure: k11920 
o|inlining procedure: k11920 
o|inlining procedure: k11929 
o|inlining procedure: k11929 
o|inlining procedure: k12021 
o|inlining procedure: k12021 
o|inlining procedure: k12055 
o|inlining procedure: k12055 
o|propagated global variable: g17631764 ##sys#expand-import 
o|propagated global variable: g17491750 ##sys#expand-import 
o|replaced variables: 1650 
o|removed binding forms: 459 
o|substituted constant variable: prop313 
o|removed call to pure procedure with unused result: "(expand.scm:104) chicken.base#void" 
o|substituted constant variable: prop346 
o|substituted constant variable: prop341 
o|substituted constant variable: prop335 
o|substituted constant variable: prop377 
o|substituted constant variable: prop366 
o|substituted constant variable: prop454 
o|inlining procedure: k3909 
o|inlining procedure: k3909 
o|substituted constant variable: prop450 
o|substituted constant variable: prop515 
o|substituted constant variable: r428512138 
o|substituted constant variable: r437412142 
o|substituted constant variable: r441712145 
o|removed call to pure procedure with unused result: "(expand.scm:252) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:211) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:210) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:255) chicken.base#void" 
o|inlining procedure: k4756 
o|substituted constant variable: prop741 
o|substituted constant variable: r477812160 
o|substituted constant variable: r488912171 
o|substituted constant variable: r508612184 
o|substituted constant variable: r514612187 
o|substituted constant variable: r514612187 
o|substituted constant variable: r548912213 
o|substituted constant variable: r551312215 
o|converted assignments to bindings: (err812) 
o|removed side-effect free assignment to unused variable: chicken.syntax#defjam-error 
o|substituted constant variable: r559312216 
o|substituted constant variable: r559312216 
o|inlining procedure: k5592 
o|substituted constant variable: r597812246 
o|substituted constant variable: r601012252 
o|removed call to pure procedure with unused result: "(expand.scm:554) chicken.base#void" 
o|substituted constant variable: r616612259 
o|substituted constant variable: r637012276 
o|substituted constant variable: r649012283 
o|substituted constant variable: r649012283 
o|substituted constant variable: r667812297 
o|substituted constant variable: r675212299 
o|substituted constant variable: r677512303 
o|substituted constant variable: r679812305 
o|substituted constant variable: r705512314 
o|substituted constant variable: r688912316 
o|converted assignments to bindings: (outstr1350) 
o|substituted constant variable: r712112321 
o|substituted constant variable: r710412322 
o|substituted constant variable: r709412323 
o|substituted constant variable: r723112336 
o|substituted constant variable: r721812337 
o|substituted constant variable: r736312346 
o|removed call to pure procedure with unused result: "(expand.scm:842) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:846) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:880) chicken.base#void" 
o|inlining procedure: k7684 
o|substituted constant variable: r770012377 
o|inlining procedure: k7684 
o|inlining procedure: k7684 
o|inlining procedure: k7684 
o|substituted constant variable: r772312387 
o|inlining procedure: k7684 
o|inlining procedure: k7684 
o|substituted constant variable: prop1568 
o|substituted constant variable: prop1558 
o|removed call to pure procedure with unused result: "(expand.scm:884) chicken.base#void" 
o|substituted constant variable: r790412398 
o|removed call to pure procedure with unused result: "(expand.scm:905) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:907) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:909) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:912) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:917) chicken.base#void" 
o|substituted constant variable: prop1638 
o|substituted constant variable: r820812411 
o|removed side-effect free assignment to unused variable: %append2603 
o|removed side-effect free assignment to unused variable: %apply2604 
o|substituted constant variable: r851312419 
o|substituted constant variable: r909712445 
o|substituted constant variable: r926312454 
o|substituted constant variable: r934112460 
o|substituted constant variable: r932912461 
o|substituted constant variable: r935712463 
o|substituted constant variable: r938112465 
o|substituted constant variable: r1010512488 
o|substituted constant variable: r1032212496 
o|substituted constant variable: r1063712513 
o|substituted constant variable: r1069012514 
o|substituted constant variable: r1074212516 
o|inlining procedure: k10957 
o|substituted constant variable: prop2130 
o|substituted constant variable: r1103412528 
o|substituted constant variable: r1103412528 
o|substituted constant variable: prop2101 
o|substituted constant variable: r1118612537 
o|substituted constant variable: r1123512538 
o|substituted constant variable: r1123512538 
o|substituted constant variable: r1138312556 
o|substituted constant variable: r1137112557 
o|substituted constant variable: r1162112571 
o|substituted constant variable: r1175912581 
o|substituted constant variable: r1192112590 
o|substituted constant variable: r1202212594 
o|simplifications: ((let . 2)) 
o|replaced variables: 60 
o|removed binding forms: 1555 
o|inlining procedure: k3701 
o|contracted procedure: k3746 
o|substituted constant variable: prop45412612 
o|substituted constant variable: prop45412618 
o|contracted procedure: k4318 
o|contracted procedure: k4321 
o|contracted procedure: k4452 
o|contracted procedure: k4517 
o|inlining procedure: k5239 
o|inlining procedure: k5239 
o|contracted procedure: k6049 
o|contracted procedure: k7654 
o|contracted procedure: k7666 
o|contracted procedure: k7687 
o|substituted constant variable: r768512735 
o|removed call to pure procedure with unused result: "(expand.scm:880) chicken.base#void" 
o|substituted constant variable: r768512740 
o|removed call to pure procedure with unused result: "(expand.scm:880) chicken.base#void" 
o|substituted constant variable: r768512749 
o|removed call to pure procedure with unused result: "(expand.scm:880) chicken.base#void" 
o|substituted constant variable: r768512754 
o|removed call to pure procedure with unused result: "(expand.scm:880) chicken.base#void" 
o|substituted constant variable: r768512759 
o|removed call to pure procedure with unused result: "(expand.scm:880) chicken.base#void" 
o|substituted constant variable: r768512764 
o|removed call to pure procedure with unused result: "(expand.scm:880) chicken.base#void" 
o|contracted procedure: k7897 
o|contracted procedure: k7983 
o|contracted procedure: k7998 
o|contracted procedure: k8010 
o|contracted procedure: k8026 
o|contracted procedure: k8035 
o|inlining procedure: k9250 
o|inlining procedure: k9250 
o|inlining procedure: k9250 
o|replaced variables: 20 
o|removed binding forms: 158 
o|contracted procedure: k3730 
o|contracted procedure: k3738 
o|contracted procedure: k3743 
o|contracted procedure: k3780 
o|contracted procedure: k3785 
o|contracted procedure: k3900 
o|contracted procedure: k4087 
o|inlining procedure: k4449 
o|substituted constant variable: r559312672 
o|contracted procedure: k768712739 
o|substituted constant variable: result153112736 
o|contracted procedure: k768712744 
o|substituted constant variable: result153112741 
o|contracted procedure: k768712753 
o|substituted constant variable: result153112750 
o|contracted procedure: k768712758 
o|substituted constant variable: result153112755 
o|contracted procedure: k7788 
o|contracted procedure: k7796 
o|contracted procedure: k768712763 
o|substituted constant variable: result153112760 
o|contracted procedure: k768712768 
o|substituted constant variable: result153112765 
o|inlining procedure: "(expand.scm:867) lookup21508" 
o|inlining procedure: "(expand.scm:864) lookup21508" 
o|contracted procedure: k8018 
o|substituted constant variable: r925112907 
o|substituted constant variable: r925112908 
o|contracted procedure: k10948 
o|contracted procedure: k11009 
o|replaced variables: 9 
o|removed binding forms: 66 
o|removed conditional forms: 2 
o|removed side-effect free assignment to unused variable: lookup21508 
o|replaced variables: 12 
o|removed binding forms: 27 
o|simplifications: ((let . 1)) 
o|replaced variables: 9 
o|removed binding forms: 11 
o|inlining procedure: k3733 
o|inlining procedure: k3733 
o|replaced variables: 2 
o|removed binding forms: 3 
o|replaced variables: 1 
o|removed binding forms: 3 
o|replaced variables: 4 
o|removed binding forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 45) (##core#call . 1077)) 
o|  call simplifications:
o|    scheme#cdddr
o|    scheme#cddddr
o|    scheme#number?
o|    scheme#eof-object?
o|    scheme#cadddr	2
o|    chicken.fixnum#fx-	2
o|    scheme#boolean?
o|    scheme#char?	2
o|    scheme#cdar	2
o|    ##sys#immediate?
o|    scheme#vector-ref	5
o|    chicken.fixnum#fx<	2
o|    chicken.fixnum#fx=	7
o|    scheme#apply
o|    scheme#memq	5
o|    scheme#member
o|    scheme#caddr	16
o|    scheme#length	13
o|    chicken.fixnum#fx<=	2
o|    chicken.fixnum#fx>	4
o|    scheme#cddr	10
o|    ##sys#list	179
o|    ##sys#cons	86
o|    scheme#list?	7
o|    scheme#cadr	35
o|    scheme#values	8
o|    ##sys#call-with-values	3
o|    ##sys#apply	2
o|    scheme#memv
o|    scheme#equal?	2
o|    scheme#string?	3
o|    ##sys#make-structure	2
o|    scheme#list	16
o|    scheme#set-car!	2
o|    ##sys#structure?	2
o|    scheme#caar	6
o|    scheme#eq?	83
o|    scheme#null?	47
o|    scheme#car	68
o|    ##sys#check-list	14
o|    scheme#assq	12
o|    scheme#symbol?	44
o|    scheme#vector?	13
o|    ##sys#size	4
o|    chicken.fixnum#fx>=	5
o|    ##sys#slot	73
o|    chicken.fixnum#fx+	4
o|    scheme#cons	81
o|    ##sys#setslot	20
o|    scheme#not	40
o|    scheme#pair?	87
o|    scheme#cdr	48
o|contracted procedure: k3725 
o|contracted procedure: k3763 
o|contracted procedure: k3775 
o|contracted procedure: k3794 
o|contracted procedure: k3800 
o|contracted procedure: k3806 
o|contracted procedure: k3809 
o|contracted procedure: k3837 
o|contracted procedure: k3813 
o|contracted procedure: k3816 
o|contracted procedure: k3819 
o|contracted procedure: k3843 
o|contracted procedure: k3846 
o|contracted procedure: k3887 
o|contracted procedure: k3853 
o|contracted procedure: k3865 
o|contracted procedure: k3868 
o|contracted procedure: k3875 
o|contracted procedure: k3883 
o|contracted procedure: k3912 
o|contracted procedure: k3915 
o|contracted procedure: k3925 
o|contracted procedure: k3978 
o|contracted procedure: k3942 
o|contracted procedure: k3968 
o|contracted procedure: k3972 
o|contracted procedure: k3964 
o|contracted procedure: k3945 
o|contracted procedure: k3948 
o|contracted procedure: k3956 
o|contracted procedure: k3960 
o|contracted procedure: k4015 
o|contracted procedure: k3990 
o|contracted procedure: k4008 
o|contracted procedure: k4012 
o|contracted procedure: k3993 
o|contracted procedure: k4000 
o|contracted procedure: k4004 
o|contracted procedure: k4021 
o|contracted procedure: k4024 
o|contracted procedure: k4027 
o|contracted procedure: k4039 
o|contracted procedure: k4042 
o|contracted procedure: k4045 
o|contracted procedure: k4053 
o|contracted procedure: k4061 
o|contracted procedure: k4149 
o|contracted procedure: k4082 
o|contracted procedure: k4098 
o|contracted procedure: k4116 
o|contracted procedure: k4145 
o|contracted procedure: k4135 
o|contracted procedure: k4182 
o|contracted procedure: k4167 
o|contracted procedure: k4173 
o|contracted procedure: k4205 
o|contracted procedure: k4208 
o|contracted procedure: k4216 
o|contracted procedure: k4227 
o|contracted procedure: k4223 
o|contracted procedure: k4239 
o|contracted procedure: k4258 
o|contracted procedure: k4287 
o|contracted procedure: k4309 
o|contracted procedure: k4293 
o|contracted procedure: k4359 
o|contracted procedure: k4349 
o|contracted procedure: k4367 
o|contracted procedure: k4376 
o|contracted procedure: k4379 
o|contracted procedure: k4393 
o|contracted procedure: k4403 
o|contracted procedure: k4407 
o|contracted procedure: k4413 
o|contracted procedure: k4419 
o|contracted procedure: k4427 
o|contracted procedure: k4434 
o|contracted procedure: k4472 
o|contracted procedure: k4458 
o|contracted procedure: k4552 
o|contracted procedure: k4523 
o|contracted procedure: k4532 
o|contracted procedure: k4543 
o|contracted procedure: k4564 
o|contracted procedure: k4572 
o|contracted procedure: k4578 
o|contracted procedure: k4587 
o|contracted procedure: k4593 
o|contracted procedure: k4599 
o|contracted procedure: k4605 
o|contracted procedure: k4681 
o|contracted procedure: k4689 
o|contracted procedure: k4696 
o|contracted procedure: k4677 
o|contracted procedure: k4673 
o|contracted procedure: k4669 
o|contracted procedure: k4665 
o|contracted procedure: k4620 
o|contracted procedure: k4624 
o|contracted procedure: k4616 
o|contracted procedure: k4612 
o|contracted procedure: k4636 
o|contracted procedure: k4658 
o|contracted procedure: k4654 
o|contracted procedure: k4639 
o|contracted procedure: k4642 
o|contracted procedure: k4650 
o|contracted procedure: k4705 
o|contracted procedure: k4727 
o|contracted procedure: k4723 
o|contracted procedure: k4708 
o|contracted procedure: k4711 
o|contracted procedure: k4719 
o|contracted procedure: k4750 
o|contracted procedure: k4766 
o|contracted procedure: k4780 
o|contracted procedure: k4788 
o|contracted procedure: k4864 
o|contracted procedure: k4819 
o|contracted procedure: k4858 
o|contracted procedure: k4822 
o|contracted procedure: k4852 
o|contracted procedure: k4825 
o|contracted procedure: k4870 
o|contracted procedure: k4891 
o|contracted procedure: k4894 
o|contracted procedure: k4900 
o|contracted procedure: k4911 
o|contracted procedure: k4963 
o|contracted procedure: k4980 
o|contracted procedure: k5009 
o|contracted procedure: k5013 
o|contracted procedure: k5005 
o|contracted procedure: k5001 
o|contracted procedure: k4997 
o|contracted procedure: k4993 
o|inlining procedure: k4977 
o|contracted procedure: k5076 
o|contracted procedure: k5023 
o|contracted procedure: k5038 
o|contracted procedure: k5034 
o|contracted procedure: k5030 
o|inlining procedure: k4977 
o|contracted procedure: k5057 
o|contracted procedure: k5053 
o|contracted procedure: k5049 
o|inlining procedure: k4977 
o|inlining procedure: k5069 
o|inlining procedure: k5069 
o|contracted procedure: k5082 
o|contracted procedure: k5088 
o|contracted procedure: k5095 
o|contracted procedure: k5098 
o|contracted procedure: k5113 
o|contracted procedure: k5118 
o|contracted procedure: k5133 
o|contracted procedure: k5129 
o|contracted procedure: k5125 
o|contracted procedure: k5141 
o|contracted procedure: k5148 
o|contracted procedure: k5159 
o|contracted procedure: k5155 
o|contracted procedure: k5145 
o|contracted procedure: k4942 
o|contracted procedure: k5109 
o|contracted procedure: k5105 
o|contracted procedure: k5186 
o|contracted procedure: k5189 
o|contracted procedure: k5192 
o|contracted procedure: k5200 
o|contracted procedure: k5208 
o|contracted procedure: k5227 
o|contracted procedure: k5233 
o|contracted procedure: k5526 
o|contracted procedure: k5250 
o|contracted procedure: k5256 
o|contracted procedure: k5262 
o|contracted procedure: k5269 
o|contracted procedure: k5278 
o|contracted procedure: k5294 
o|contracted procedure: k5300 
o|contracted procedure: k5313 
o|contracted procedure: k5321 
o|contracted procedure: k5325 
o|contracted procedure: k5331 
o|contracted procedure: k5345 
o|contracted procedure: k5354 
o|contracted procedure: k5363 
o|contracted procedure: k5373 
o|contracted procedure: k5379 
o|contracted procedure: k5386 
o|contracted procedure: k5392 
o|contracted procedure: k5403 
o|contracted procedure: k5399 
o|contracted procedure: k5409 
o|contracted procedure: k5423 
o|contracted procedure: k5419 
o|contracted procedure: k5441 
o|contracted procedure: k5450 
o|contracted procedure: k5457 
o|contracted procedure: k5463 
o|contracted procedure: k5473 
o|contracted procedure: k5485 
o|contracted procedure: k5491 
o|contracted procedure: k5498 
o|contracted procedure: k5509 
o|contracted procedure: k5522 
o|contracted procedure: k5515 
o|contracted procedure: k5554 
o|contracted procedure: k5562 
o|contracted procedure: k5558 
o|contracted procedure: k5574 
o|contracted procedure: k5582 
o|contracted procedure: k5585 
o|contracted procedure: k5595 
o|contracted procedure: k5601 
o|contracted procedure: k5608 
o|contracted procedure: k5592 
o|contracted procedure: k5653 
o|contracted procedure: k5617 
o|contracted procedure: k5643 
o|contracted procedure: k5647 
o|contracted procedure: k5639 
o|contracted procedure: k5620 
o|contracted procedure: k5623 
o|contracted procedure: k5631 
o|contracted procedure: k5635 
o|contracted procedure: k5659 
o|contracted procedure: k5665 
o|contracted procedure: k5668 
o|contracted procedure: k5671 
o|contracted procedure: k5683 
o|contracted procedure: k5686 
o|contracted procedure: k5689 
o|contracted procedure: k5697 
o|contracted procedure: k5705 
o|contracted procedure: k6706 
o|contracted procedure: k5721 
o|contracted procedure: k6700 
o|contracted procedure: k5724 
o|contracted procedure: k6694 
o|contracted procedure: k5727 
o|contracted procedure: k5736 
o|contracted procedure: k5745 
o|contracted procedure: k5760 
o|contracted procedure: k5775 
o|contracted procedure: k5790 
o|contracted procedure: k6244 
o|contracted procedure: k5819 
o|contracted procedure: k6043 
o|contracted procedure: k5831 
o|contracted procedure: k5847 
o|contracted procedure: k5867 
o|contracted procedure: k5882 
o|contracted procedure: k5890 
o|contracted procedure: k5899 
o|contracted procedure: k5929 
o|inlining procedure: k5920 
o|contracted procedure: k5943 
o|contracted procedure: k5939 
o|inlining procedure: k5920 
o|contracted procedure: k5950 
o|inlining procedure: k5920 
o|contracted procedure: k5960 
o|contracted procedure: k5964 
o|contracted procedure: k5971 
o|contracted procedure: k5974 
o|contracted procedure: k5980 
o|contracted procedure: k6002 
o|contracted procedure: k6005 
o|contracted procedure: k6012 
o|contracted procedure: k6057 
o|contracted procedure: k6071 
o|contracted procedure: k6053 
o|contracted procedure: k6082 
o|contracted procedure: k6121 
o|contracted procedure: k6124 
o|contracted procedure: k6132 
o|contracted procedure: k6136 
o|contracted procedure: k6140 
o|contracted procedure: k6148 
o|contracted procedure: k6152 
o|contracted procedure: k6156 
o|contracted procedure: k6097 
o|contracted procedure: k6162 
o|contracted procedure: k6168 
o|contracted procedure: k6180 
o|contracted procedure: k6202 
o|contracted procedure: k6198 
o|contracted procedure: k6183 
o|contracted procedure: k6186 
o|contracted procedure: k6194 
o|contracted procedure: k6214 
o|contracted procedure: k6221 
o|contracted procedure: k6241 
o|contracted procedure: k6278 
o|contracted procedure: k6274 
o|contracted procedure: k6270 
o|contracted procedure: k6293 
o|contracted procedure: k6315 
o|contracted procedure: k6311 
o|contracted procedure: k6296 
o|contracted procedure: k6299 
o|contracted procedure: k6307 
o|contracted procedure: k6403 
o|contracted procedure: k6324 
o|contracted procedure: k6346 
o|contracted procedure: k6356 
o|contracted procedure: k6360 
o|contracted procedure: k6349 
o|contracted procedure: k6399 
o|contracted procedure: k6366 
o|contracted procedure: k6393 
o|contracted procedure: k6372 
o|contracted procedure: k6388 
o|contracted procedure: k6378 
o|contracted procedure: k6688 
o|contracted procedure: k6418 
o|contracted procedure: k6424 
o|contracted procedure: k6683 
o|contracted procedure: k6428 
o|contracted procedure: k6674 
o|contracted procedure: k6437 
o|contracted procedure: k6458 
o|contracted procedure: k6577 
o|contracted procedure: k6464 
o|contracted procedure: k6503 
o|contracted procedure: k6477 
o|contracted procedure: k6485 
o|contracted procedure: k6499 
o|contracted procedure: k6492 
o|contracted procedure: k6489 
o|contracted procedure: k6506 
o|contracted procedure: k6573 
o|contracted procedure: k6517 
o|contracted procedure: k6531 
o|contracted procedure: k6567 
o|contracted procedure: k6541 
o|contracted procedure: k6563 
o|contracted procedure: k6557 
o|contracted procedure: k6553 
o|contracted procedure: k6545 
o|contracted procedure: k6549 
o|contracted procedure: k6621 
o|contracted procedure: k6605 
o|contracted procedure: k6617 
o|contracted procedure: k6609 
o|contracted procedure: k6613 
o|contracted procedure: k6638 
o|contracted procedure: k6670 
o|contracted procedure: k6644 
o|contracted procedure: k6656 
o|contracted procedure: k6666 
o|contracted procedure: k6680 
o|contracted procedure: k6712 
o|contracted procedure: k6794 
o|contracted procedure: k6730 
o|contracted procedure: k6733 
o|contracted procedure: k6745 
o|contracted procedure: k6754 
o|contracted procedure: k6762 
o|contracted procedure: k6758 
o|contracted procedure: k6771 
o|contracted procedure: k6790 
o|contracted procedure: k6846 
o|contracted procedure: k6812 
o|contracted procedure: k6821 
o|contracted procedure: k6840 
o|contracted procedure: k6836 
o|contracted procedure: k6832 
o|contracted procedure: k6929 
o|contracted procedure: k6960 
o|contracted procedure: k6986 
o|contracted procedure: k6998 
o|contracted procedure: k7078 
o|contracted procedure: k7022 
o|contracted procedure: k7037 
o|contracted procedure: k7057 
o|contracted procedure: k7074 
o|contracted procedure: k6882 
o|contracted procedure: k6891 
o|contracted procedure: k6919 
o|contracted procedure: k6897 
o|contracted procedure: k7087 
o|contracted procedure: k7099 
o|contracted procedure: k7106 
o|contracted procedure: k7117 
o|contracted procedure: k7578 
o|contracted procedure: k7132 
o|contracted procedure: k7572 
o|contracted procedure: k7135 
o|contracted procedure: k7557 
o|contracted procedure: k7141 
o|contracted procedure: k7198 
o|contracted procedure: k7207 
o|contracted procedure: k7220 
o|contracted procedure: k7227 
o|contracted procedure: k7233 
o|contracted procedure: k7254 
o|contracted procedure: k7263 
o|contracted procedure: k7283 
o|contracted procedure: k7286 
o|contracted procedure: k7289 
o|contracted procedure: k7371 
o|contracted procedure: k7292 
o|contracted procedure: k7307 
o|contracted procedure: k7313 
o|contracted procedure: k7326 
o|contracted procedure: k7330 
o|contracted procedure: k7333 
o|contracted procedure: k7356 
o|contracted procedure: k7342 
o|contracted procedure: k7352 
o|contracted procedure: k7359 
o|contracted procedure: k7365 
o|contracted procedure: k7380 
o|contracted procedure: k7393 
o|contracted procedure: k7386 
o|contracted procedure: k7399 
o|contracted procedure: k7405 
o|contracted procedure: k7411 
o|contracted procedure: k7420 
o|contracted procedure: k7429 
o|contracted procedure: k7438 
o|contracted procedure: k7447 
o|contracted procedure: k7456 
o|contracted procedure: k7465 
o|contracted procedure: k7487 
o|contracted procedure: k7490 
o|contracted procedure: k7553 
o|contracted procedure: k7515 
o|contracted procedure: k7549 
o|contracted procedure: k7524 
o|contracted procedure: k7541 
o|contracted procedure: k7545 
o|contracted procedure: k7563 
o|contracted procedure: k7593 
o|contracted procedure: k7605 
o|contracted procedure: k7626 
o|contracted procedure: k7678 
o|contracted procedure: k7643 
o|contracted procedure: k7646 
o|contracted procedure: k7674 
o|contracted procedure: k7670 
o|contracted procedure: k7690 
o|contracted procedure: k7696 
o|contracted procedure: k7719 
o|contracted procedure: k7725 
o|contracted procedure: k7728 
o|contracted procedure: k7775 
o|contracted procedure: k7734 
o|contracted procedure: k7746 
o|contracted procedure: k7749 
o|contracted procedure: k7756 
o|contracted procedure: k7764 
o|contracted procedure: k7768 
o|contracted procedure: k7885 
o|contracted procedure: k7783 
o|contracted procedure: k7805 
o|contracted procedure: k7811 
o|contracted procedure: k7817 
o|contracted procedure: k7829 
o|contracted procedure: k7842 
o|contracted procedure: k7845 
o|contracted procedure: k7857 
o|contracted procedure: k7906 
o|contracted procedure: k7922 
o|contracted procedure: k7912 
o|contracted procedure: k7931 
o|contracted procedure: k7952 
o|contracted procedure: k8039 
o|contracted procedure: k7969 
o|contracted procedure: k7995 
o|contracted procedure: k8007 
o|contracted procedure: k8201 
o|contracted procedure: k8216 
o|contracted procedure: k8235 
o|contracted procedure: k8253 
o|contracted procedure: k9461 
o|contracted procedure: k8378 
o|contracted procedure: k8458 
o|contracted procedure: k8454 
o|contracted procedure: k8386 
o|contracted procedure: k8390 
o|contracted procedure: k8382 
o|contracted procedure: k8374 
o|contracted procedure: k8398 
o|contracted procedure: k8401 
o|contracted procedure: k8416 
o|contracted procedure: k8412 
o|contracted procedure: k8408 
o|contracted procedure: k8425 
o|contracted procedure: k8428 
o|contracted procedure: k8431 
o|contracted procedure: k8439 
o|contracted procedure: k8447 
o|contracted procedure: k8470 
o|contracted procedure: k8473 
o|contracted procedure: k8480 
o|contracted procedure: k8484 
o|contracted procedure: k8509 
o|contracted procedure: k8515 
o|contracted procedure: k8522 
o|contracted procedure: k8533 
o|contracted procedure: k8539 
o|contracted procedure: k8554 
o|contracted procedure: k8550 
o|contracted procedure: k8546 
o|contracted procedure: k8569 
o|contracted procedure: k8620 
o|contracted procedure: k8580 
o|contracted procedure: k8592 
o|contracted procedure: k8588 
o|contracted procedure: k8584 
o|contracted procedure: k8576 
o|contracted procedure: k8608 
o|contracted procedure: k8614 
o|contracted procedure: k8626 
o|contracted procedure: k8665 
o|contracted procedure: k8637 
o|contracted procedure: k8649 
o|contracted procedure: k8645 
o|contracted procedure: k8641 
o|contracted procedure: k8633 
o|contracted procedure: k8657 
o|contracted procedure: k8671 
o|contracted procedure: k8685 
o|contracted procedure: k8681 
o|contracted procedure: k8696 
o|contracted procedure: k8692 
o|contracted procedure: k8699 
o|contracted procedure: k8722 
o|contracted procedure: k8824 
o|contracted procedure: k8820 
o|contracted procedure: k8730 
o|contracted procedure: k8816 
o|contracted procedure: k8812 
o|contracted procedure: k8738 
o|contracted procedure: k8804 
o|contracted procedure: k8808 
o|contracted procedure: k8746 
o|contracted procedure: k8797 
o|contracted procedure: k8786 
o|contracted procedure: k8754 
o|contracted procedure: k8762 
o|contracted procedure: k8758 
o|contracted procedure: k8750 
o|contracted procedure: k8742 
o|contracted procedure: k8734 
o|contracted procedure: k8726 
o|contracted procedure: k8718 
o|contracted procedure: k8778 
o|contracted procedure: k8782 
o|contracted procedure: k8774 
o|contracted procedure: k8770 
o|contracted procedure: k8828 
o|contracted procedure: k8832 
o|contracted procedure: k8841 
o|contracted procedure: k8847 
o|contracted procedure: k8854 
o|contracted procedure: k8926 
o|contracted procedure: k8867 
o|contracted procedure: k8918 
o|contracted procedure: k8870 
o|contracted procedure: k8885 
o|contracted procedure: k8889 
o|contracted procedure: k8904 
o|contracted procedure: k8915 
o|contracted procedure: k8911 
o|contracted procedure: k8901 
o|contracted procedure: k8932 
o|contracted procedure: k8949 
o|contracted procedure: k8955 
o|contracted procedure: k8961 
o|contracted procedure: k8972 
o|contracted procedure: k8981 
o|contracted procedure: k8984 
o|contracted procedure: k8994 
o|contracted procedure: k9005 
o|contracted procedure: k9025 
o|contracted procedure: k9043 
o|contracted procedure: k9076 
o|contracted procedure: k9090 
o|contracted procedure: k9086 
o|contracted procedure: k9093 
o|contracted procedure: k9099 
o|contracted procedure: k9105 
o|contracted procedure: k9118 
o|contracted procedure: k9124 
o|contracted procedure: k9145 
o|contracted procedure: k9168 
o|contracted procedure: k9174 
o|contracted procedure: k9181 
o|contracted procedure: k9194 
o|contracted procedure: k9205 
o|contracted procedure: k9211 
o|contracted procedure: k9228 
o|contracted procedure: k9244 
o|contracted procedure: k9271 
o|contracted procedure: k9256 
o|contracted procedure: k9259 
o|contracted procedure: k9266 
o|contracted procedure: k9284 
o|contracted procedure: k9292 
o|contracted procedure: k9298 
o|contracted procedure: k9315 
o|contracted procedure: k9350 
o|contracted procedure: k9343 
o|contracted procedure: k9359 
o|contracted procedure: k9365 
o|contracted procedure: k9372 
o|contracted procedure: k9392 
o|contracted procedure: k9402 
o|contracted procedure: k9418 
o|contracted procedure: k9421 
o|contracted procedure: k9472 
o|contracted procedure: k9480 
o|contracted procedure: k9484 
o|contracted procedure: k9517 
o|contracted procedure: k9513 
o|contracted procedure: k9509 
o|contracted procedure: k9505 
o|contracted procedure: k9552 
o|contracted procedure: k9706 
o|contracted procedure: k9569 
o|contracted procedure: k9575 
o|contracted procedure: k9588 
o|contracted procedure: k9601 
o|contracted procedure: k9609 
o|contracted procedure: k9622 
o|contracted procedure: k9630 
o|contracted procedure: k9642 
o|contracted procedure: k9652 
o|contracted procedure: k9671 
o|contracted procedure: k9663 
o|contracted procedure: k9679 
o|contracted procedure: k9683 
o|contracted procedure: k9697 
o|contracted procedure: k9732 
o|contracted procedure: k9728 
o|contracted procedure: k9724 
o|contracted procedure: k9746 
o|contracted procedure: k9779 
o|contracted procedure: k9752 
o|contracted procedure: k9775 
o|contracted procedure: k9767 
o|contracted procedure: k9771 
o|contracted procedure: k9763 
o|contracted procedure: k9759 
o|contracted procedure: k9797 
o|contracted procedure: k9810 
o|contracted procedure: k9823 
o|contracted procedure: k9826 
o|contracted procedure: k9839 
o|contracted procedure: k9857 
o|contracted procedure: k9868 
o|contracted procedure: k9969 
o|contracted procedure: k9873 
o|contracted procedure: k9893 
o|contracted procedure: k9889 
o|contracted procedure: k9885 
o|contracted procedure: k9877 
o|contracted procedure: k9864 
o|contracted procedure: k9931 
o|contracted procedure: k9934 
o|contracted procedure: k9937 
o|contracted procedure: k9945 
o|contracted procedure: k9953 
o|contracted procedure: k9919 
o|contracted procedure: k9915 
o|contracted procedure: k9901 
o|contracted procedure: k9909 
o|contracted procedure: k9959 
o|contracted procedure: k9966 
o|contracted procedure: k9981 
o|contracted procedure: k9984 
o|contracted procedure: k9987 
o|contracted procedure: k9995 
o|contracted procedure: k10003 
o|contracted procedure: k9848 
o|contracted procedure: k9852 
o|contracted procedure: k10019 
o|contracted procedure: k10033 
o|contracted procedure: k10040 
o|contracted procedure: k10057 
o|contracted procedure: k10047 
o|contracted procedure: k10070 
o|contracted procedure: k10293 
o|contracted procedure: k10094 
o|contracted procedure: k10289 
o|contracted procedure: k10107 
o|contracted procedure: k10110 
o|contracted procedure: k10142 
o|contracted procedure: k10158 
o|contracted procedure: k10165 
o|contracted procedure: k10179 
o|contracted procedure: k10168 
o|contracted procedure: k10175 
o|contracted procedure: k10231 
o|contracted procedure: k10240 
o|contracted procedure: k10244 
o|contracted procedure: k10188 
o|contracted procedure: k10206 
o|contracted procedure: k10213 
o|contracted procedure: k10227 
o|contracted procedure: k10216 
o|contracted procedure: k10223 
o|contracted procedure: k10256 
o|contracted procedure: k10259 
o|contracted procedure: k10262 
o|contracted procedure: k10270 
o|contracted procedure: k10278 
o|contracted procedure: k10285 
o|contracted procedure: k10303 
o|contracted procedure: k10676 
o|contracted procedure: k10324 
o|contracted procedure: k10327 
o|contracted procedure: k10388 
o|contracted procedure: k10417 
o|contracted procedure: k10396 
o|contracted procedure: k10431 
o|contracted procedure: k10420 
o|contracted procedure: k10427 
o|contracted procedure: k10443 
o|contracted procedure: k10492 
o|contracted procedure: k10488 
o|contracted procedure: k10468 
o|contracted procedure: k10484 
o|contracted procedure: k10476 
o|contracted procedure: k10472 
o|contracted procedure: k10540 
o|contracted procedure: k10508 
o|contracted procedure: k10536 
o|contracted procedure: k10520 
o|contracted procedure: k10532 
o|contracted procedure: k10524 
o|contracted procedure: k10516 
o|contracted procedure: k10512 
o|contracted procedure: k10547 
o|contracted procedure: k10551 
o|contracted procedure: k10560 
o|contracted procedure: k10567 
o|contracted procedure: k10583 
o|contracted procedure: k10572 
o|contracted procedure: k10579 
o|contracted procedure: k10588 
o|contracted procedure: k10594 
o|contracted procedure: k10600 
o|contracted procedure: k10606 
o|contracted procedure: k10612 
o|contracted procedure: k10624 
o|contracted procedure: k10639 
o|contracted procedure: k10650 
o|contracted procedure: k10672 
o|contracted procedure: k10686 
o|contracted procedure: k10692 
o|contracted procedure: k10695 
o|contracted procedure: k10702 
o|contracted procedure: k10728 
o|contracted procedure: k10712 
o|contracted procedure: k10720 
o|contracted procedure: k10716 
o|contracted procedure: k10738 
o|contracted procedure: k10744 
o|contracted procedure: k10747 
o|contracted procedure: k10754 
o|contracted procedure: k10761 
o|contracted procedure: k10778 
o|contracted procedure: k10781 
o|contracted procedure: k10787 
o|contracted procedure: k10794 
o|contracted procedure: k10804 
o|contracted procedure: k10831 
o|contracted procedure: k10853 
o|contracted procedure: k10875 
o|contracted procedure: k10903 
o|contracted procedure: k10913 
o|contracted procedure: k10927 
o|contracted procedure: k10916 
o|contracted procedure: k10923 
o|contracted procedure: k10940 
o|contracted procedure: k10943 
o|contracted procedure: k10951 
o|contracted procedure: k10993 
o|contracted procedure: k11101 
o|contracted procedure: k11001 
o|contracted procedure: k11012 
o|contracted procedure: k11025 
o|contracted procedure: k11036 
o|inlining procedure: k11029 
o|inlining procedure: k11029 
o|contracted procedure: k11097 
o|contracted procedure: k11057 
o|contracted procedure: k11081 
o|contracted procedure: k11091 
o|contracted procedure: k11087 
o|contracted procedure: k11077 
o|contracted procedure: k11118 
o|contracted procedure: k11135 
o|contracted procedure: k11152 
o|contracted procedure: k11169 
o|contracted procedure: k11219 
o|contracted procedure: k11223 
o|contracted procedure: k11215 
o|contracted procedure: k11237 
o|contracted procedure: k11243 
o|inlining procedure: k11234 
o|contracted procedure: k11252 
o|contracted procedure: k11262 
o|contracted procedure: k11266 
o|contracted procedure: k11269 
o|contracted procedure: k11276 
o|contracted procedure: k11292 
o|contracted procedure: k11295 
o|contracted procedure: k11299 
o|contracted procedure: k11324 
o|contracted procedure: k11344 
o|contracted procedure: k11349 
o|contracted procedure: k11361 
o|contracted procedure: k11373 
o|contracted procedure: k11379 
o|contracted procedure: k11396 
o|contracted procedure: k11385 
o|contracted procedure: k11392 
o|contracted procedure: k11403 
o|contracted procedure: k11406 
o|contracted procedure: k11328 
o|contracted procedure: k11332 
o|contracted procedure: k11336 
o|contracted procedure: k11305 
o|contracted procedure: k11316 
o|contracted procedure: k11320 
o|contracted procedure: k11418 
o|contracted procedure: k11421 
o|contracted procedure: k11424 
o|contracted procedure: k11432 
o|contracted procedure: k11440 
o|contracted procedure: k11484 
o|contracted procedure: k11497 
o|contracted procedure: k11512 
o|contracted procedure: k11518 
o|contracted procedure: k11551 
o|contracted procedure: k11547 
o|contracted procedure: k11543 
o|contracted procedure: k11531 
o|contracted procedure: k11539 
o|contracted procedure: k11535 
o|contracted procedure: k11575 
o|contracted procedure: k11585 
o|contracted procedure: k11633 
o|contracted procedure: k11593 
o|contracted procedure: k11597 
o|contracted procedure: k11614 
o|contracted procedure: k11610 
o|contracted procedure: k11600 
o|contracted procedure: k11617 
o|contracted procedure: k11623 
o|contracted procedure: k11641 
o|contracted procedure: k11644 
o|contracted procedure: k11655 
o|contracted procedure: k11659 
o|contracted procedure: k11669 
o|contracted procedure: k11679 
o|contracted procedure: k11688 
o|contracted procedure: k11821 
o|contracted procedure: k11701 
o|contracted procedure: k11707 
o|contracted procedure: k11717 
o|contracted procedure: k11720 
o|contracted procedure: k11729 
o|contracted procedure: k11742 
o|contracted procedure: k11755 
o|contracted procedure: k11791 
o|contracted procedure: k11761 
o|contracted procedure: k11767 
o|contracted procedure: k11780 
o|contracted procedure: k11797 
o|contracted procedure: k11808 
o|contracted procedure: k11833 
o|contracted procedure: k11840 
o|contracted procedure: k11848 
o|contracted procedure: k11860 
o|contracted procedure: k11882 
o|contracted procedure: k11878 
o|contracted procedure: k11863 
o|contracted procedure: k11866 
o|contracted procedure: k11874 
o|contracted procedure: k11952 
o|contracted procedure: k11891 
o|contracted procedure: k11897 
o|contracted procedure: k11948 
o|contracted procedure: k11904 
o|contracted procedure: k11910 
o|contracted procedure: k11916 
o|contracted procedure: k11923 
o|contracted procedure: k11969 
o|contracted procedure: k11987 
o|contracted procedure: k11979 
o|contracted procedure: k12001 
o|contracted procedure: k12024 
o|contracted procedure: k12034 
o|contracted procedure: k12043 
o|contracted procedure: k12046 
o|contracted procedure: k12058 
o|contracted procedure: k12061 
o|contracted procedure: k12064 
o|contracted procedure: k12072 
o|contracted procedure: k12080 
o|simplifications: ((let . 196)) 
o|removed binding forms: 897 
o|inlining procedure: k5137 
o|inlining procedure: k5137 
o|inlining procedure: k6481 
o|inlining procedure: k6481 
o|inlining procedure: k11227 
o|inlining procedure: k11227 
o|inlining procedure: k11227 
o|inlining procedure: k11589 
o|inlining procedure: k11589 
o|replaced variables: 208 
o|removed binding forms: 4 
o|simplifications: ((let . 1) (if . 2)) 
o|replaced variables: 6 
o|removed binding forms: 119 
o|contracted procedure: k9999 
o|replaced variables: 4 
o|removed binding forms: 5 
o|removed binding forms: 2 
o|direct leaf routine/allocation: chicken.syntax#lookup 0 
o|direct leaf routine/allocation: g561562 0 
o|direct leaf routine/allocation: g13051306 0 
o|direct leaf routine/allocation: g13941395 0 
o|direct leaf routine/allocation: loop1446 0 
o|direct leaf routine/allocation: g15821583 0 
o|direct leaf routine/allocation: g15911592 0 
o|direct leaf routine/allocation: assq-reverse1509 0 
o|direct leaf routine/allocation: g23482357 15 
o|contracted procedure: "(expand.scm:100) k3722" 
o|contracted procedure: "(expand.scm:181) k4197" 
o|contracted procedure: "(expand.scm:193) k4236" 
o|contracted procedure: "(expand.scm:195) k4245" 
o|contracted procedure: "(expand.scm:277) k4575" 
o|contracted procedure: "(expand.scm:279) k4792" 
o|contracted procedure: "(expand.scm:479) k5733" 
o|converted assignments to bindings: (loop1446) 
o|contracted procedure: "(expand.scm:883) k7870" 
o|contracted procedure: "(expand.scm:883) k7876" 
o|contracted procedure: "(expand.scm:902) k7972" 
o|contracted procedure: "(expand.scm:903) k7975" 
o|contracted procedure: "(expand.scm:1458) k10274" 
o|simplifications: ((let . 1) (if . 2)) 
o|removed binding forms: 12 
o|contracted procedure: "(expand.scm:815) k7477" 
o|replaced variables: 12 
o|removed binding forms: 1 
o|removed binding forms: 6 
o|direct leaf routine/allocation: comp1038 0 
o|contracted procedure: "(expand.scm:507) k5860" 
o|contracted procedure: "(expand.scm:523) k5923" 
o|contracted procedure: "(expand.scm:519) k5983" 
o|contracted procedure: "(expand.scm:501) k6015" 
o|contracted procedure: "(expand.scm:502) k6021" 
o|contracted procedure: "(expand.scm:503) k6027" 
o|contracted procedure: "(expand.scm:504) k6033" 
o|contracted procedure: "(expand.scm:589) k6446" 
o|contracted procedure: "(expand.scm:616) k6583" 
o|contracted procedure: "(expand.scm:619) k6595" 
o|contracted procedure: "(expand.scm:623) k6627" 
o|removed binding forms: 11 
o|replaced variables: 8 
o|simplifications: ((if . 1)) 
o|removed binding forms: 3 
o|customizable procedures: (g17791788 map-loop17731819 expand1870 map-loop18781896 test1841 err1840 k11506 k11603 g19952004 map-loop19892016 loop2086 k10893 expand2214 map-loop23422363 k10192 expand2311 expand2385 map-loop24072425 k9881 k9949 map-loop24412459 g25362537 g25292530 walk2473 walk12474 simplify2475 k9466 loop2850 k9079 k9034 doloop27992800 k8674 k8467 map-loop26652682 loop2589 loop2578 chicken.syntax#make-er/ir-transformer mirror-rename1510 k7791 k7799 doloop15411542 k7271 test1418 k7295 walk1456 doloop14711472 loop1432 err1419 loop1339 loop1352 loop1369 outstr1350 loop1316 mwalk1292 k6431 fini/syntax1040 loop21262 loop1246 k6333 loop1202 map-loop12151232 fini1039 foldl11301134 map-loop11071146 k6118 map-loop11551182 k5854 loop21062 k5905 expand1041 loop1059 map-loop947964 map-loop9761000 k5259 k5435 k5348 k5306 k5309 chicken.syntax#macro-alias k5272 loop823 err812 g845854 map-loop839867 k4974 k4986 k4903 loop790 loop777 k4581 k4736 g742743 loop655 expand600 map-loop682700 map-loop709726 call-handler599 k4352 k4386 copy618 loop588 k4125 loop519 g516517 loop1504 map-loop406423 for-each-loop432459 map-loop469490 doloop384385 walk354 k3716) 
o|calls to known targets: 360 
o|identified direct recursive calls: f_3761 1 
o|identified direct recursive calls: f_3937 1 
o|identified direct recursive calls: f_3985 1 
o|identified direct recursive calls: f_4282 1 
o|identified direct recursive calls: f_4631 1 
o|identified direct recursive calls: f_4700 1 
o|identified direct recursive calls: f_4958 2 
o|identified direct recursive calls: f_5612 1 
o|identified direct recursive calls: f_6175 1 
o|identified direct recursive calls: f_6288 1 
o|identified direct recursive calls: f_6261 1 
o|identified direct recursive calls: f_6725 1 
o|identified direct recursive calls: f_6807 1 
o|identified direct recursive calls: f_6886 1 
o|identified direct recursive calls: f_7252 1 
o|identified direct recursive calls: f_7278 1 
o|identified direct recursive calls: f_7600 1 
o|identified direct recursive calls: f_7682 1 
o|identified direct recursive calls: f_7901 1 
o|identified direct recursive calls: f_7926 1 
o|identified direct recursive calls: f_8205 1 
o|identified direct recursive calls: f_8239 1 
o|identified direct recursive calls: f_9062 1 
o|identified direct recursive calls: f_9976 1 
o|identified direct recursive calls: f_10028 1 
o|identified direct recursive calls: f_10251 1 
o|identified direct recursive calls: f_11855 1 
o|fast box initializations: 71 
o|fast global references: 21 
o|fast global assignments: 5 
o|dropping unused closure argument: f_3691 
o|dropping unused closure argument: f_3708 
o|dropping unused closure argument: f_7252 
o|dropping unused closure argument: f_7585 
o|dropping unused closure argument: f_7901 
*/
/* end of file */

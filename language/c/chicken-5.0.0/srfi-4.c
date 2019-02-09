/* Generated from srfi-4.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: srfi-4.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file srfi-4.c -emit-import-library srfi-4
   unit: srfi-4
   uses: expand extras library
*/
#include "chicken.h"

#define C_copy_subvector(to, from, start_to, start_from, bytes)   \
  (C_memcpy((C_char *)C_data_pointer(to) + C_unfix(start_to), (C_char *)C_data_pointer(from) + C_unfix(start_from), C_unfix(bytes)), \
    C_SCHEME_UNDEFINED)

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[307];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,117,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,115,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,117,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,115,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,117,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,115,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,117,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,115,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,102,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,102,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,117,56,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,115,56,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,117,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,115,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,117,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,115,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,117,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,115,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,102,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,102,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,16),40,101,120,116,45,102,114,101,101,32,98,118,53,53,51,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,32),40,97,108,108,111,99,32,108,111,99,32,101,108,101,109,45,115,105,122,101,32,101,108,101,109,115,32,101,120,116,63,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,32),40,115,114,102,105,45,52,35,114,101,108,101,97,115,101,45,110,117,109,98,101,114,45,118,101,99,116,111,114,32,118,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,54,48,48,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,33),40,115,114,102,105,45,52,35,109,97,107,101,45,117,56,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,54,51,52,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,33),40,115,114,102,105,45,52,35,109,97,107,101,45,115,56,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,54,54,56,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,117,49,54,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,48,50,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,115,49,54,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,51,54,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,117,51,50,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,55,48,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,117,54,52,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,56,48,52,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,115,51,50,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,56,51,56,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,115,54,52,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,56,55,51,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,102,51,50,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,57,48,57,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,102,54,52,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,57,52,52,32,112,32,105,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,108,105,115,116,45,62,117,56,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,57,53,55,32,112,32,105,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,108,105,115,116,45,62,115,56,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,57,55,48,32,112,32,105,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,117,49,54,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,57,56,51,32,112,32,105,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,115,49,54,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,57,57,54,32,112,32,105,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,117,51,50,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,48,48,57,32,112,32,105,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,115,51,50,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,48,50,50,32,112,32,105,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,117,54,52,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,48,51,53,32,112,32,105,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,115,54,52,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,48,52,56,32,112,32,105,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,102,51,50,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,48,54,49,32,112,32,105,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,102,54,52,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,22),40,115,114,102,105,45,52,35,117,56,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,22),40,115,114,102,105,45,52,35,115,56,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,117,49,54,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,115,49,54,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,117,51,50,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,115,51,50,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,117,54,52,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,115,54,52,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,102,51,50,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,102,54,52,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,25),40,115,114,102,105,45,52,35,117,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,25),40,115,114,102,105,45,52,35,115,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,117,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,115,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,117,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,115,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,117,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,115,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,102,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,102,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,20),40,115,114,102,105,45,52,35,117,56,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,20),40,115,114,102,105,45,52,35,115,56,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,117,49,54,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,115,49,54,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,117,51,50,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,115,51,50,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,117,54,52,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,115,54,52,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,102,51,50,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,102,54,52,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,10),40,102,95,52,53,52,54,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,112,97,99,107,45,99,111,112,121,32,116,97,103,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,12),40,102,95,52,53,54,52,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,117,110,112,97,99,107,32,116,97,103,32,115,122,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,12),40,102,95,52,53,57,52,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,117,110,112,97,99,107,45,99,111,112,121,32,116,97,103,32,115,122,32,108,111,99,41,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,17),40,102,54,53,50,48,32,118,49,50,48,48,54,53,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,17),40,102,54,53,49,51,32,118,49,50,48,48,54,53,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,17),40,102,54,53,48,54,32,118,49,50,48,48,54,53,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,17),40,102,54,52,57,57,32,118,49,50,48,48,54,52,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,17),40,102,54,52,57,50,32,118,49,50,48,48,54,52,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,17),40,102,54,52,56,53,32,118,49,50,48,48,54,52,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,17),40,102,54,52,55,56,32,118,49,50,48,48,54,52,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,102,54,52,55,49,32,118,49,50,48,48,54,52,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,102,54,52,54,52,32,118,49,50,48,48,54,52,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,102,54,52,53,55,32,118,49,50,48,48,54,52,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,9),40,103,49,50,56,55,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,117,115,101,114,45,114,101,97,100,45,104,111,111,107,32,99,104,97,114,32,112,111,114,116,41};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,117,115,101,114,45,112,114,105,110,116,45,104,111,111,107,32,120,32,114,101,97,100,97,98,108,101,32,112,111,114,116,41,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,38),40,115,114,102,105,45,52,35,115,117,98,110,118,101,99,116,111,114,32,118,32,116,32,101,115,32,102,114,111,109,32,116,111,32,108,111,99,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,30),40,115,114,102,105,45,52,35,115,117,98,117,56,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,117,49,54,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,117,51,50,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,117,54,52,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,30),40,115,114,102,105,45,52,35,115,117,98,115,56,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,115,49,54,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,115,51,50,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,115,54,52,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,102,51,50,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,102,54,52,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,32),40,115,114,102,105,45,52,35,119,114,105,116,101,45,117,56,118,101,99,116,111,114,32,118,32,46,32,114,101,115,116,41};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,37),40,115,114,102,105,45,52,35,114,101,97,100,45,117,56,118,101,99,116,111,114,33,32,110,32,100,101,115,116,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,114,101,97,100,45,117,56,118,101,99,116,111,114,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,11),40,97,53,51,55,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,11),40,97,53,52,48,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,11),40,97,53,52,51,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,11),40,97,53,52,54,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,11),40,97,53,52,57,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,11),40,97,53,53,50,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,11),40,97,53,53,53,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,11),40,97,53,53,56,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,11),40,97,53,54,49,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,11),40,97,53,54,52,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub554(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word bv=(C_word )(C_a0);
C_free((void *)C_block_item(bv, 1));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub548(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
size_t bytes=(size_t )(size_t)C_num_to_uint64(C_a0);
if (bytes > C_HEADER_SIZE_MASK) C_return(C_SCHEME_FALSE);
C_word *buf = (C_word *)C_malloc(bytes + sizeof(C_header));
if(buf == NULL) C_return(C_SCHEME_FALSE);
C_block_header_init(buf, C_make_header(C_BYTEVECTOR_TYPE, bytes));
C_return(buf);
C_ret:
#undef return

return C_r;}

C_noret_decl(f6457)
static void C_ccall f6457(C_word c,C_word *av) C_noret;
C_noret_decl(f6464)
static void C_ccall f6464(C_word c,C_word *av) C_noret;
C_noret_decl(f6471)
static void C_ccall f6471(C_word c,C_word *av) C_noret;
C_noret_decl(f6478)
static void C_ccall f6478(C_word c,C_word *av) C_noret;
C_noret_decl(f6485)
static void C_ccall f6485(C_word c,C_word *av) C_noret;
C_noret_decl(f6492)
static void C_ccall f6492(C_word c,C_word *av) C_noret;
C_noret_decl(f6499)
static void C_ccall f6499(C_word c,C_word *av) C_noret;
C_noret_decl(f6506)
static void C_ccall f6506(C_word c,C_word *av) C_noret;
C_noret_decl(f6513)
static void C_ccall f6513(C_word c,C_word *av) C_noret;
C_noret_decl(f6520)
static void C_ccall f6520(C_word c,C_word *av) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word *av) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word *av) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word *av) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word *av) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word *av) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word *av) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word *av) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word *av) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word *av) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word *av) C_noret;
C_noret_decl(f_1888)
static void C_ccall f_1888(C_word c,C_word *av) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word *av) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word *av) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word *av) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word *av) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word *av) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word *av) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word *av) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word *av) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word *av) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word *av) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word *av) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word *av) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word *av) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word *av) C_noret;
C_noret_decl(f_2052)
static void C_ccall f_2052(C_word c,C_word *av) C_noret;
C_noret_decl(f_2057)
static void C_ccall f_2057(C_word c,C_word *av) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word *av) C_noret;
C_noret_decl(f_2078)
static void C_ccall f_2078(C_word c,C_word *av) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word *av) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word *av) C_noret;
C_noret_decl(f_2121)
static void C_ccall f_2121(C_word c,C_word *av) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word *av) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word *av) C_noret;
C_noret_decl(f_2151)
static void C_ccall f_2151(C_word c,C_word *av) C_noret;
C_noret_decl(f_2170)
static void C_ccall f_2170(C_word c,C_word *av) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word *av) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word *av) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word *av) C_noret;
C_noret_decl(f_2205)
static void C_ccall f_2205(C_word c,C_word *av) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word *av) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word *av) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word *av) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word *av) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word *av) C_noret;
C_noret_decl(f_2288)
static void C_ccall f_2288(C_word c,C_word *av) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word *av) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word *av) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word *av) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word *av) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word *av) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word *av) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word *av) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word *av) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word *av) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word *av) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word *av) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word *av) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word *av) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word *av) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word *av) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word *av) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word *av) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word *av) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word *av) C_noret;
C_noret_decl(f_2494)
static void C_ccall f_2494(C_word c,C_word *av) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word *av) C_noret;
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word *av) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word *av) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word *av) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word *av) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word *av) C_noret;
C_noret_decl(f_2524)
static void C_fcall f_2524(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word *av) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word *av) C_noret;
C_noret_decl(f_2537)
static void C_ccall f_2537(C_word c,C_word *av) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word *av) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word *av) C_noret;
C_noret_decl(f_2570)
static void C_ccall f_2570(C_word c,C_word *av) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word *av) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word *av) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word *av) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word *av) C_noret;
C_noret_decl(f_2638)
static C_word C_fcall f_2638(C_word t0,C_word t1);
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word *av) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word *av) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word *av) C_noret;
C_noret_decl(f_2754)
static C_word C_fcall f_2754(C_word t0,C_word t1);
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word *av) C_noret;
C_noret_decl(f_2810)
static void C_ccall f_2810(C_word c,C_word *av) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word *av) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word *av) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word *av) C_noret;
C_noret_decl(f_2870)
static C_word C_fcall f_2870(C_word t0,C_word t1);
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word *av) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word *av) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word *av) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word *av) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word *av) C_noret;
C_noret_decl(f_2996)
static C_word C_fcall f_2996(C_word t0,C_word t1);
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word *av) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word *av) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word *av) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word *av) C_noret;
C_noret_decl(f_3112)
static C_word C_fcall f_3112(C_word t0,C_word t1);
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word *av) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word *av) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word *av) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word *av) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word *av) C_noret;
C_noret_decl(f_3228)
static C_word C_fcall f_3228(C_word t0,C_word t1);
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word *av) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word *av) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word *av) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word *av) C_noret;
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word *av) C_noret;
C_noret_decl(f_3354)
static C_word C_fcall f_3354(C_word t0,C_word t1);
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word *av) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word *av) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word *av) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word *av) C_noret;
C_noret_decl(f_3475)
static void C_ccall f_3475(C_word c,C_word *av) C_noret;
C_noret_decl(f_3480)
static C_word C_fcall f_3480(C_word t0,C_word t1);
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word *av) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word *av) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word *av) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word *av) C_noret;
C_noret_decl(f_3585)
static void C_fcall f_3585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3590)
static C_word C_fcall f_3590(C_word t0,C_word t1);
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word *av) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word *av) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_3696)
static void C_fcall f_3696(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3701)
static C_word C_fcall f_3701(C_word t0,C_word t1);
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word *av) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word *av) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word *av) C_noret;
C_noret_decl(f_3770)
static void C_fcall f_3770(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word *av) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word *av) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void C_fcall f_3806(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word *av) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word *av) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word *av) C_noret;
C_noret_decl(f_3842)
static void C_fcall f_3842(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word *av) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word *av) C_noret;
C_noret_decl(f_3873)
static void C_ccall f_3873(C_word c,C_word *av) C_noret;
C_noret_decl(f_3878)
static void C_fcall f_3878(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word *av) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word *av) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word *av) C_noret;
C_noret_decl(f_3914)
static void C_fcall f_3914(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921(C_word c,C_word *av) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word *av) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word *av) C_noret;
C_noret_decl(f_3950)
static void C_fcall f_3950(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word *av) C_noret;
C_noret_decl(f_3974)
static void C_ccall f_3974(C_word c,C_word *av) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word *av) C_noret;
C_noret_decl(f_3986)
static void C_fcall f_3986(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word *av) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word *av) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word *av) C_noret;
C_noret_decl(f_4022)
static void C_fcall f_4022(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word *av) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word *av) C_noret;
C_noret_decl(f_4053)
static void C_ccall f_4053(C_word c,C_word *av) C_noret;
C_noret_decl(f_4058)
static void C_fcall f_4058(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word *av) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word *av) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word *av) C_noret;
C_noret_decl(f_4094)
static void C_fcall f_4094(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word *av) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word *av) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word *av) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word *av) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word *av) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word *av) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word *av) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word *av) C_noret;
C_noret_decl(f_4160)
static void C_ccall f_4160(C_word c,C_word *av) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word *av) C_noret;
C_noret_decl(f_4178)
static void C_ccall f_4178(C_word c,C_word *av) C_noret;
C_noret_decl(f_4187)
static void C_fcall f_4187(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word *av) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word *av) C_noret;
C_noret_decl(f_4217)
static void C_fcall f_4217(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4232)
static void C_ccall f_4232(C_word c,C_word *av) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word *av) C_noret;
C_noret_decl(f_4247)
static void C_fcall f_4247(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word *av) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word *av) C_noret;
C_noret_decl(f_4277)
static void C_fcall f_4277(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word *av) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word *av) C_noret;
C_noret_decl(f_4307)
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4321)
static void C_ccall f_4321(C_word c,C_word *av) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word *av) C_noret;
C_noret_decl(f_4336)
static void C_fcall f_4336(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word *av) C_noret;
C_noret_decl(f_4356)
static void C_ccall f_4356(C_word c,C_word *av) C_noret;
C_noret_decl(f_4365)
static void C_fcall f_4365(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word *av) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word *av) C_noret;
C_noret_decl(f_4394)
static void C_fcall f_4394(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word *av) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word *av) C_noret;
C_noret_decl(f_4423)
static void C_fcall f_4423(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4437)
static void C_ccall f_4437(C_word c,C_word *av) C_noret;
C_noret_decl(f_4443)
static void C_ccall f_4443(C_word c,C_word *av) C_noret;
C_noret_decl(f_4452)
static void C_fcall f_4452(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word *av) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word *av) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word *av) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word *av) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word *av) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word *av) C_noret;
C_noret_decl(f_4502)
static void C_ccall f_4502(C_word c,C_word *av) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word *av) C_noret;
C_noret_decl(f_4514)
static void C_ccall f_4514(C_word c,C_word *av) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word *av) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word *av) C_noret;
C_noret_decl(f_4544)
static void C_fcall f_4544(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word *av) C_noret;
C_noret_decl(f_4556)
static void C_ccall f_4556(C_word c,C_word *av) C_noret;
C_noret_decl(f_4562)
static void C_fcall f_4562(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word *av) C_noret;
C_noret_decl(f_4580)
static void C_fcall f_4580(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4592)
static void C_fcall f_4592(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word *av) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word *av) C_noret;
C_noret_decl(f_4613)
static void C_fcall f_4613(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word *av) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word *av) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word *av) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word *av) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word *av) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word *av) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692(C_word c,C_word *av) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word *av) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word *av) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704(C_word c,C_word *av) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word *av) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word *av) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word *av) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word *av) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word *av) C_noret;
C_noret_decl(f_4728)
static void C_ccall f_4728(C_word c,C_word *av) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word *av) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word *av) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word *av) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word *av) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word *av) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word *av) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word *av) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word *av) C_noret;
C_noret_decl(f_4764)
static void C_ccall f_4764(C_word c,C_word *av) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word *av) C_noret;
C_noret_decl(f_4772)
static void C_ccall f_4772(C_word c,C_word *av) C_noret;
C_noret_decl(f_4776)
static void C_ccall f_4776(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word *av) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word *av) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word *av) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word *av) C_noret;
C_noret_decl(f_4817)
static void C_fcall f_4817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4828)
static void C_ccall f_4828(C_word c,C_word *av) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word *av) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word *av) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word *av) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word *av) C_noret;
C_noret_decl(f_4923)
static void C_fcall f_4923(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4938)
static void C_ccall f_4938(C_word c,C_word *av) C_noret;
C_noret_decl(f_4957)
static void C_ccall f_4957(C_word c,C_word *av) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word *av) C_noret;
C_noret_decl(f_4981)
static void C_ccall f_4981(C_word c,C_word *av) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word *av) C_noret;
C_noret_decl(f_5008)
static void C_ccall f_5008(C_word c,C_word *av) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word *av) C_noret;
C_noret_decl(f_5020)
static void C_ccall f_5020(C_word c,C_word *av) C_noret;
C_noret_decl(f_5026)
static void C_ccall f_5026(C_word c,C_word *av) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word *av) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word *av) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word *av) C_noret;
C_noret_decl(f_5050)
static void C_ccall f_5050(C_word c,C_word *av) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word *av) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word *av) C_noret;
C_noret_decl(f_5068)
static void C_ccall f_5068(C_word c,C_word *av) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word *av) C_noret;
C_noret_decl(f_5117)
static void C_ccall f_5117(C_word c,C_word *av) C_noret;
C_noret_decl(f_5120)
static void C_ccall f_5120(C_word c,C_word *av) C_noret;
C_noret_decl(f_5133)
static void C_fcall f_5133(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5143)
static void C_ccall f_5143(C_word c,C_word *av) C_noret;
C_noret_decl(f_5168)
static void C_ccall f_5168(C_word c,C_word *av) C_noret;
C_noret_decl(f_5237)
static void C_ccall f_5237(C_word c,C_word *av) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word *av) C_noret;
C_noret_decl(f_5262)
static void C_ccall f_5262(C_word c,C_word *av) C_noret;
C_noret_decl(f_5277)
static void C_fcall f_5277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word *av) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word *av) C_noret;
C_noret_decl(f_5339)
static void C_ccall f_5339(C_word c,C_word *av) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word *av) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word *av) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word *av) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word *av) C_noret;
C_noret_decl(f_5410)
static void C_ccall f_5410(C_word c,C_word *av) C_noret;
C_noret_decl(f_5419)
static void C_ccall f_5419(C_word c,C_word *av) C_noret;
C_noret_decl(f_5438)
static void C_ccall f_5438(C_word c,C_word *av) C_noret;
C_noret_decl(f_5440)
static void C_ccall f_5440(C_word c,C_word *av) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word *av) C_noret;
C_noret_decl(f_5468)
static void C_ccall f_5468(C_word c,C_word *av) C_noret;
C_noret_decl(f_5470)
static void C_ccall f_5470(C_word c,C_word *av) C_noret;
C_noret_decl(f_5479)
static void C_ccall f_5479(C_word c,C_word *av) C_noret;
C_noret_decl(f_5498)
static void C_ccall f_5498(C_word c,C_word *av) C_noret;
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word *av) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word *av) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word *av) C_noret;
C_noret_decl(f_5530)
static void C_ccall f_5530(C_word c,C_word *av) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word *av) C_noret;
C_noret_decl(f_5558)
static void C_ccall f_5558(C_word c,C_word *av) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word *av) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word *av) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word *av) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word *av) C_noret;
C_noret_decl(f_5599)
static void C_ccall f_5599(C_word c,C_word *av) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word *av) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word *av) C_noret;
C_noret_decl(f_5629)
static void C_ccall f_5629(C_word c,C_word *av) C_noret;
C_noret_decl(f_5648)
static void C_ccall f_5648(C_word c,C_word *av) C_noret;
C_noret_decl(f_5650)
static void C_ccall f_5650(C_word c,C_word *av) C_noret;
C_noret_decl(f_5659)
static void C_ccall f_5659(C_word c,C_word *av) C_noret;
C_noret_decl(f_5678)
static void C_ccall f_5678(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externexport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2524)
static void C_ccall trf_2524(C_word c,C_word *av) C_noret;
static void C_ccall trf_2524(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2524(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3585)
static void C_ccall trf_3585(C_word c,C_word *av) C_noret;
static void C_ccall trf_3585(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3585(t0,t1);}

C_noret_decl(trf_3696)
static void C_ccall trf_3696(C_word c,C_word *av) C_noret;
static void C_ccall trf_3696(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3696(t0,t1);}

C_noret_decl(trf_3770)
static void C_ccall trf_3770(C_word c,C_word *av) C_noret;
static void C_ccall trf_3770(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3770(t0,t1,t2,t3);}

C_noret_decl(trf_3806)
static void C_ccall trf_3806(C_word c,C_word *av) C_noret;
static void C_ccall trf_3806(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3806(t0,t1,t2,t3);}

C_noret_decl(trf_3842)
static void C_ccall trf_3842(C_word c,C_word *av) C_noret;
static void C_ccall trf_3842(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3842(t0,t1,t2,t3);}

C_noret_decl(trf_3878)
static void C_ccall trf_3878(C_word c,C_word *av) C_noret;
static void C_ccall trf_3878(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3878(t0,t1,t2,t3);}

C_noret_decl(trf_3914)
static void C_ccall trf_3914(C_word c,C_word *av) C_noret;
static void C_ccall trf_3914(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3914(t0,t1,t2,t3);}

C_noret_decl(trf_3950)
static void C_ccall trf_3950(C_word c,C_word *av) C_noret;
static void C_ccall trf_3950(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3950(t0,t1,t2,t3);}

C_noret_decl(trf_3986)
static void C_ccall trf_3986(C_word c,C_word *av) C_noret;
static void C_ccall trf_3986(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3986(t0,t1,t2,t3);}

C_noret_decl(trf_4022)
static void C_ccall trf_4022(C_word c,C_word *av) C_noret;
static void C_ccall trf_4022(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4022(t0,t1,t2,t3);}

C_noret_decl(trf_4058)
static void C_ccall trf_4058(C_word c,C_word *av) C_noret;
static void C_ccall trf_4058(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4058(t0,t1,t2,t3);}

C_noret_decl(trf_4094)
static void C_ccall trf_4094(C_word c,C_word *av) C_noret;
static void C_ccall trf_4094(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4094(t0,t1,t2,t3);}

C_noret_decl(trf_4187)
static void C_ccall trf_4187(C_word c,C_word *av) C_noret;
static void C_ccall trf_4187(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4187(t0,t1,t2);}

C_noret_decl(trf_4217)
static void C_ccall trf_4217(C_word c,C_word *av) C_noret;
static void C_ccall trf_4217(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4217(t0,t1,t2);}

C_noret_decl(trf_4247)
static void C_ccall trf_4247(C_word c,C_word *av) C_noret;
static void C_ccall trf_4247(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4247(t0,t1,t2);}

C_noret_decl(trf_4277)
static void C_ccall trf_4277(C_word c,C_word *av) C_noret;
static void C_ccall trf_4277(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4277(t0,t1,t2);}

C_noret_decl(trf_4307)
static void C_ccall trf_4307(C_word c,C_word *av) C_noret;
static void C_ccall trf_4307(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4307(t0,t1,t2);}

C_noret_decl(trf_4336)
static void C_ccall trf_4336(C_word c,C_word *av) C_noret;
static void C_ccall trf_4336(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4336(t0,t1,t2);}

C_noret_decl(trf_4365)
static void C_ccall trf_4365(C_word c,C_word *av) C_noret;
static void C_ccall trf_4365(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4365(t0,t1,t2);}

C_noret_decl(trf_4394)
static void C_ccall trf_4394(C_word c,C_word *av) C_noret;
static void C_ccall trf_4394(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4394(t0,t1,t2);}

C_noret_decl(trf_4423)
static void C_ccall trf_4423(C_word c,C_word *av) C_noret;
static void C_ccall trf_4423(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4423(t0,t1,t2);}

C_noret_decl(trf_4452)
static void C_ccall trf_4452(C_word c,C_word *av) C_noret;
static void C_ccall trf_4452(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4452(t0,t1,t2);}

C_noret_decl(trf_4544)
static void C_ccall trf_4544(C_word c,C_word *av) C_noret;
static void C_ccall trf_4544(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4544(t0,t1,t2);}

C_noret_decl(trf_4562)
static void C_ccall trf_4562(C_word c,C_word *av) C_noret;
static void C_ccall trf_4562(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4562(t0,t1,t2,t3);}

C_noret_decl(trf_4580)
static void C_ccall trf_4580(C_word c,C_word *av) C_noret;
static void C_ccall trf_4580(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4580(t0,t1);}

C_noret_decl(trf_4592)
static void C_ccall trf_4592(C_word c,C_word *av) C_noret;
static void C_ccall trf_4592(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4592(t0,t1,t2,t3);}

C_noret_decl(trf_4613)
static void C_ccall trf_4613(C_word c,C_word *av) C_noret;
static void C_ccall trf_4613(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4613(t0,t1);}

C_noret_decl(trf_4817)
static void C_ccall trf_4817(C_word c,C_word *av) C_noret;
static void C_ccall trf_4817(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4817(t0,t1,t2);}

C_noret_decl(trf_4923)
static void C_ccall trf_4923(C_word c,C_word *av) C_noret;
static void C_ccall trf_4923(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_4923(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5133)
static void C_ccall trf_5133(C_word c,C_word *av) C_noret;
static void C_ccall trf_5133(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5133(t0,t1);}

C_noret_decl(trf_5277)
static void C_ccall trf_5277(C_word c,C_word *av) C_noret;
static void C_ccall trf_5277(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5277(t0,t1);}

/* f6457 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f6457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6457,3,av);}
t3=C_i_check_structure_2(t2,lf[30],lf[174]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f6464 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f6464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6464,3,av);}
t3=C_i_check_structure_2(t2,lf[27],lf[172]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f6471 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f6471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6471,3,av);}
t3=C_i_check_structure_2(t2,lf[24],lf[170]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f6478 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f6478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6478,3,av);}
t3=C_i_check_structure_2(t2,lf[21],lf[168]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f6485 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f6485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6485,3,av);}
t3=C_i_check_structure_2(t2,lf[18],lf[166]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f6492 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f6492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6492,3,av);}
t3=C_i_check_structure_2(t2,lf[15],lf[164]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f6499 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f6499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6499,3,av);}
t3=C_i_check_structure_2(t2,lf[12],lf[162]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f6506 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f6506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6506,3,av);}
t3=C_i_check_structure_2(t2,lf[9],lf[160]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f6513 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f6513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6513,3,av);}
t3=C_i_check_structure_2(t2,lf[6],lf[158]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f6520 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f6520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f6520,3,av);}
t3=C_i_check_structure_2(t2,lf[3],lf[156]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1836 */
static void C_ccall f_1838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1838,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1841,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1839 in k1836 */
static void C_ccall f_1841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1841,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k1842 in k1839 in k1836 */
static void C_ccall f_1844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
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
if(C_unlikely(!C_demand(C_calculate_demand(82,c,5)))){
C_save_and_reclaim((void *)f_1844,2,av);}
a=C_alloc(82);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate((C_word*)lf[2]+1 /* (set! srfi-4#u8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1846,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[5]+1 /* (set! srfi-4#s8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1852,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[8]+1 /* (set! srfi-4#u16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1858,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[11]+1 /* (set! srfi-4#s16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1864,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[14]+1 /* (set! srfi-4#u32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1870,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[17]+1 /* (set! srfi-4#s32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1876,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[20]+1 /* (set! srfi-4#u64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1882,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[23]+1 /* (set! srfi-4#s64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1888,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[26]+1 /* (set! srfi-4#f32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1894,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[29]+1 /* (set! srfi-4#f64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1900,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[32]+1 /* (set! srfi-4#u8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1906,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[37]+1 /* (set! srfi-4#s8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1960,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[40]+1 /* (set! srfi-4#u16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2024,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[42]+1 /* (set! srfi-4#s16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2078,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[44]+1 /* (set! srfi-4#u32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2142,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[47]+1 /* (set! srfi-4#s32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2196,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[49]+1 /* (set! srfi-4#u64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2260,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[52]+1 /* (set! srfi-4#s64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2314,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[54]+1 /* (set! srfi-4#f32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2378,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[56]+1 /* (set! srfi-4#f64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2427,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2478,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5650,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:248: chicken.base#getter-with-setter */
t26=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t26;
av2[1]=t24;
av2[2]=t25;
av2[3]=*((C_word*)lf[32]+1);
av2[4]=lf[306];
((C_proc)(void*)(*((C_word*)t26+1)))(5,av2);}}

/* srfi-4#u8vector-length in k1842 in k1839 in k1836 */
static void C_ccall f_1846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1846,3,av);}
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_8vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#s8vector-length in k1842 in k1839 in k1836 */
static void C_ccall f_1852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1852,3,av);}
t3=C_i_check_structure_2(t2,lf[6],lf[7]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_8vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#u16vector-length in k1842 in k1839 in k1836 */
static void C_ccall f_1858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1858,3,av);}
t3=C_i_check_structure_2(t2,lf[9],lf[10]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_16vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#s16vector-length in k1842 in k1839 in k1836 */
static void C_ccall f_1864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1864,3,av);}
t3=C_i_check_structure_2(t2,lf[12],lf[13]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_16vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#u32vector-length in k1842 in k1839 in k1836 */
static void C_ccall f_1870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1870,3,av);}
t3=C_i_check_structure_2(t2,lf[15],lf[16]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_32vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#s32vector-length in k1842 in k1839 in k1836 */
static void C_ccall f_1876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1876,3,av);}
t3=C_i_check_structure_2(t2,lf[18],lf[19]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_32vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#u64vector-length in k1842 in k1839 in k1836 */
static void C_ccall f_1882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1882,3,av);}
t3=C_i_check_structure_2(t2,lf[21],lf[22]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_64vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#s64vector-length in k1842 in k1839 in k1836 */
static void C_ccall f_1888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1888,3,av);}
t3=C_i_check_structure_2(t2,lf[24],lf[25]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_64vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#f32vector-length in k1842 in k1839 in k1836 */
static void C_ccall f_1894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1894,3,av);}
t3=C_i_check_structure_2(t2,lf[27],lf[28]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_32vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#f64vector-length in k1842 in k1839 in k1836 */
static void C_ccall f_1900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1900,3,av);}
t3=C_i_check_structure_2(t2,lf[30],lf[31]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_64vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#u8vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_1906(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1906,5,av);}
a=C_alloc(11);
t5=C_i_check_structure_2(t2,lf[3],lf[33]);
t6=C_u_i_8vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1934,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t7;
t9=t4;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1915,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[33];
tp(4,av2);}}

/* k1913 in srfi-4#u8vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_1915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1915,2,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(8)))){
t3=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[33];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=C_fix(256);
tp(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1932 in srfi-4#u8vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_1934(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1934,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1939,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[33];
tp(4,av2);}}

/* k1937 in k1932 in srfi-4#u8vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_1939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1939,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[33];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k1956 in k1932 in srfi-4#u8vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_1958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1958,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_u8vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s8vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_1960(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1960,5,av);}
a=C_alloc(11);
t5=C_i_check_structure_2(t2,lf[6],lf[38]);
t6=C_u_i_8vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1998,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t7;
t9=t4;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1969,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:115: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[38];
tp(4,av2);}}

/* k1967 in srfi-4#s8vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_1969(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,6)))){
C_save_and_reclaim((void *)f_1969,2,av);}
a=C_alloc(58);
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(8),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
t5=C_s_a_i_negate(&a,1,C_fix(256));
t6=C_s_a_i_minus(&a,2,C_fix(256),C_fix(1));
/* srfi-4.scm:117: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[38];
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
av2[6]=t6;
tp(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1996 in srfi-4#s8vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_1998(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1998,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2003,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[38];
tp(4,av2);}}

/* k2001 in k1996 in srfi-4#s8vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2003,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[38];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k2020 in k1996 in srfi-4#s8vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2022,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_s8vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u16vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2024(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2024,5,av);}
a=C_alloc(11);
t5=C_i_check_structure_2(t2,lf[9],lf[41]);
t6=C_u_i_16vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2052,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t7;
t9=t4;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2033,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[41];
tp(4,av2);}}

/* k2031 in srfi-4#u16vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2033,2,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(16)))){
t3=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[41];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=C_fix(65536);
tp(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2050 in srfi-4#u16vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2052(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2052,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2057,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[41];
tp(4,av2);}}

/* k2055 in k2050 in srfi-4#u16vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2057,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[41];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k2074 in k2050 in srfi-4#u16vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2076,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_u16vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s16vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2078(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2078,5,av);}
a=C_alloc(11);
t5=C_i_check_structure_2(t2,lf[12],lf[43]);
t6=C_u_i_16vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2116,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t7;
t9=t4;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2087,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:115: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[43];
tp(4,av2);}}

/* k2085 in srfi-4#s16vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2087(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,6)))){
C_save_and_reclaim((void *)f_2087,2,av);}
a=C_alloc(58);
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(16),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
t5=C_s_a_i_negate(&a,1,C_fix(65536));
t6=C_s_a_i_minus(&a,2,C_fix(65536),C_fix(1));
/* srfi-4.scm:117: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[43];
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
av2[6]=t6;
tp(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2114 in srfi-4#s16vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2116(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2116,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2121,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[43];
tp(4,av2);}}

/* k2119 in k2114 in srfi-4#s16vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2121,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[43];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k2138 in k2114 in srfi-4#s16vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2140,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_s16vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2142(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2142,5,av);}
a=C_alloc(11);
t5=C_i_check_structure_2(t2,lf[15],lf[45]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2170,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t7;
t9=t4;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2151,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[45];
tp(4,av2);}}

/* k2149 in srfi-4#u32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2151,2,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(32)))){
t3=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[45];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=lf[46];
tp(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2168 in srfi-4#u32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2170(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2170,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2175,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[45];
tp(4,av2);}}

/* k2173 in k2168 in srfi-4#u32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2175,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[45];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k2192 in k2168 in srfi-4#u32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2194,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_u32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2196(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2196,5,av);}
a=C_alloc(11);
t5=C_i_check_structure_2(t2,lf[18],lf[48]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2234,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t7;
t9=t4;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2205,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:115: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[48];
tp(4,av2);}}

/* k2203 in srfi-4#s32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2205(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,6)))){
C_save_and_reclaim((void *)f_2205,2,av);}
a=C_alloc(58);
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(32),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
t5=C_s_a_i_negate(&a,1,lf[46]);
t6=C_s_a_i_minus(&a,2,lf[46],C_fix(1));
/* srfi-4.scm:117: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[48];
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
av2[6]=t6;
tp(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2232 in srfi-4#s32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2234(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2234,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2239,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[48];
tp(4,av2);}}

/* k2237 in k2232 in srfi-4#s32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2239,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[48];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k2256 in k2232 in srfi-4#s32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2258,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_s32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2260(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2260,5,av);}
a=C_alloc(11);
t5=C_i_check_structure_2(t2,lf[21],lf[50]);
t6=C_u_i_64vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2288,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t7;
t9=t4;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2269,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[50];
tp(4,av2);}}

/* k2267 in srfi-4#u64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2269,2,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(64)))){
t3=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[50];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=lf[51];
tp(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2286 in srfi-4#u64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2288(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2288,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2293,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[50];
tp(4,av2);}}

/* k2291 in k2286 in srfi-4#u64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2293,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[50];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k2310 in k2286 in srfi-4#u64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2312,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_u64vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2314(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2314,5,av);}
a=C_alloc(11);
t5=C_i_check_structure_2(t2,lf[24],lf[53]);
t6=C_u_i_64vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2352,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t7;
t9=t4;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2323,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:115: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=lf[53];
tp(4,av2);}}

/* k2321 in srfi-4#s64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2323(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,6)))){
C_save_and_reclaim((void *)f_2323,2,av);}
a=C_alloc(58);
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(64),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
t5=C_s_a_i_negate(&a,1,lf[51]);
t6=C_s_a_i_minus(&a,2,lf[51],C_fix(1));
/* srfi-4.scm:117: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[53];
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
av2[6]=t6;
tp(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2350 in srfi-4#s64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2352(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2352,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2357,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[53];
tp(4,av2);}}

/* k2355 in k2350 in srfi-4#s64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2357,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[53];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k2374 in k2350 in srfi-4#s64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2376,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_s64vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#f32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2378(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2378,5,av);}
a=C_alloc(7);
t5=C_i_check_structure_2(t2,lf[27],lf[55]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2397,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t4;
t9=C_i_exact_integerp(t8);
t10=(C_truep(t9)?t9:C_i_flonump(t8));
if(C_truep(t10)){
t11=C_SCHEME_UNDEFINED;
t12=t7;{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
f_2397(2,av2);}}
else{
t11=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR);
/* srfi-4.scm:99: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t7;
av2[2]=t11;
av2[3]=lf[55];
av2[4]=t8;
tp(5,av2);}}}

/* k2395 in srfi-4#f32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2397(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2397,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2402,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[55];
tp(4,av2);}}

/* k2400 in k2395 in srfi-4#f32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2402,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[55];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k2419 in k2395 in srfi-4#f32vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2421,2,av);}
a=C_alloc(4);
if(C_truep(C_i_flonump(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_f32vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_u_i_int_to_flo(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_f32vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* srfi-4#f64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2427(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2427,5,av);}
a=C_alloc(7);
t5=C_i_check_structure_2(t2,lf[30],lf[57]);
t6=C_u_i_64vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2446,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t4;
t9=C_i_exact_integerp(t8);
t10=(C_truep(t9)?t9:C_i_flonump(t8));
if(C_truep(t10)){
t11=C_SCHEME_UNDEFINED;
t12=t7;{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
f_2446(2,av2);}}
else{
t11=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR);
/* srfi-4.scm:99: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t7;
av2[2]=t11;
av2[3]=lf[57];
av2[4]=t8;
tp(5,av2);}}}

/* k2444 in srfi-4#f64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2446(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2446,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[6];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2451,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[57];
tp(4,av2);}}

/* k2449 in k2444 in srfi-4#f64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2451,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[57];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k2468 in k2444 in srfi-4#f64vector-set! in k1842 in k1839 in k1836 */
static void C_ccall f_2470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2470,2,av);}
a=C_alloc(4);
if(C_truep(C_i_flonump(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_f64vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_u_i_int_to_flo(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_f64vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2478,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[58]+1 /* (set! srfi-4#u8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2482,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5620,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:258: chicken.base#getter-with-setter */
t5=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[37]+1);
av2[4]=lf[304];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2482,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[59]+1 /* (set! srfi-4#s8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2486,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5590,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:268: chicken.base#getter-with-setter */
t5=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[40]+1);
av2[4]=lf[302];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2486,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[60]+1 /* (set! srfi-4#u16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5560,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:278: chicken.base#getter-with-setter */
t5=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[42]+1);
av2[4]=lf[300];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2490,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[61]+1 /* (set! srfi-4#s16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5530,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:288: chicken.base#getter-with-setter */
t5=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[44]+1);
av2[4]=lf[298];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2494,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[62]+1 /* (set! srfi-4#u32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2498,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5500,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:298: chicken.base#getter-with-setter */
t5=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[47]+1);
av2[4]=lf[296];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2498,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[63]+1 /* (set! srfi-4#s32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2502,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5470,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:308: chicken.base#getter-with-setter */
t5=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[49]+1);
av2[4]=lf[294];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2502,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[64]+1 /* (set! srfi-4#u64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5440,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:318: chicken.base#getter-with-setter */
t5=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[52]+1);
av2[4]=lf[292];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2506,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[65]+1 /* (set! srfi-4#s64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2510,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5410,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:328: chicken.base#getter-with-setter */
t5=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[54]+1);
av2[4]=lf[290];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2510,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[66]+1 /* (set! srfi-4#f32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2514,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5380,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:338: chicken.base#getter-with-setter */
t5=*((C_word*)lf[287]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[56]+1);
av2[4]=lf[288];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(231,c,6)))){
C_save_and_reclaim((void *)f_2514,2,av);}
a=C_alloc(231);
t2=C_mutate((C_word*)lf[67]+1 /* (set! srfi-4#f64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2522,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2524,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[73]+1 /* (set! srfi-4#release-number-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[77]+1 /* (set! srfi-4#make-u8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2578,a[2]=t3,a[3]=t4,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t7=C_mutate((C_word*)lf[80]+1 /* (set! srfi-4#make-s8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2694,a[2]=t3,a[3]=t4,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate((C_word*)lf[82]+1 /* (set! srfi-4#make-u16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2810,a[2]=t3,a[3]=t4,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t9=C_mutate((C_word*)lf[84]+1 /* (set! srfi-4#make-s16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2926,a[2]=t3,a[3]=t4,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate((C_word*)lf[86]+1 /* (set! srfi-4#make-u32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3052,a[2]=t3,a[3]=t4,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t11=C_mutate((C_word*)lf[88]+1 /* (set! srfi-4#make-u64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3168,a[2]=t3,a[3]=t4,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[90]+1 /* (set! srfi-4#make-s32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3284,a[2]=t3,a[3]=t4,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate((C_word*)lf[92]+1 /* (set! srfi-4#make-s64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3410,a[2]=t3,a[3]=t4,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[94]+1 /* (set! srfi-4#make-f32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3536,a[2]=t3,a[3]=t4,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate((C_word*)lf[96]+1 /* (set! srfi-4#make-f64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3647,a[2]=t3,a[3]=t4,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t16=*((C_word*)lf[77]+1);
t17=C_mutate((C_word*)lf[98]+1 /* (set! srfi-4#list->u8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3758,a[2]=t16,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t18=*((C_word*)lf[80]+1);
t19=C_mutate((C_word*)lf[100]+1 /* (set! srfi-4#list->s8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3794,a[2]=t18,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp));
t20=*((C_word*)lf[82]+1);
t21=C_mutate((C_word*)lf[101]+1 /* (set! srfi-4#list->u16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3830,a[2]=t20,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t22=*((C_word*)lf[84]+1);
t23=C_mutate((C_word*)lf[102]+1 /* (set! srfi-4#list->s16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3866,a[2]=t22,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp));
t24=*((C_word*)lf[86]+1);
t25=C_mutate((C_word*)lf[103]+1 /* (set! srfi-4#list->u32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3902,a[2]=t24,a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp));
t26=*((C_word*)lf[90]+1);
t27=C_mutate((C_word*)lf[104]+1 /* (set! srfi-4#list->s32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3938,a[2]=t26,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp));
t28=*((C_word*)lf[88]+1);
t29=C_mutate((C_word*)lf[105]+1 /* (set! srfi-4#list->u64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3974,a[2]=t28,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t30=*((C_word*)lf[92]+1);
t31=C_mutate(&lf[106] /* (set! srfi-4#list->s64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4010,a[2]=t30,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp));
t32=*((C_word*)lf[94]+1);
t33=C_mutate((C_word*)lf[107]+1 /* (set! srfi-4#list->f32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4046,a[2]=t32,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t34=*((C_word*)lf[96]+1);
t35=C_mutate((C_word*)lf[108]+1 /* (set! srfi-4#list->f64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4082,a[2]=t34,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp));
t36=C_mutate((C_word*)lf[109]+1 /* (set! srfi-4#u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4118,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[110]+1 /* (set! srfi-4#s8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4124,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[111]+1 /* (set! srfi-4#u16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4130,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[112]+1 /* (set! srfi-4#s16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4136,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[113]+1 /* (set! srfi-4#u32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4142,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[114]+1 /* (set! srfi-4#s32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4148,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[115]+1 /* (set! srfi-4#u64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4154,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[116]+1 /* (set! srfi-4#s64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4160,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[117]+1 /* (set! srfi-4#f32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4166,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[118]+1 /* (set! srfi-4#f64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4172,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[119]+1 /* (set! srfi-4#u8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4178,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[121]+1 /* (set! srfi-4#s8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4208,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[123]+1 /* (set! srfi-4#u16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4238,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[125]+1 /* (set! srfi-4#s16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4268,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[127]+1 /* (set! srfi-4#u32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4298,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[129]+1 /* (set! srfi-4#s32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4327,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[131]+1 /* (set! srfi-4#u64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4356,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[133]+1 /* (set! srfi-4#s64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4385,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[135]+1 /* (set! srfi-4#f32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4414,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[137]+1 /* (set! srfi-4#f64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4443,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[139]+1 /* (set! srfi-4#u8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4472,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[140]+1 /* (set! srfi-4#s8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4478,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[141]+1 /* (set! srfi-4#u16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4484,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[142]+1 /* (set! srfi-4#s16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4490,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[143]+1 /* (set! srfi-4#u32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4496,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[144]+1 /* (set! srfi-4#s32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4502,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[145]+1 /* (set! srfi-4#u64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4508,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[146]+1 /* (set! srfi-4#s64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4514,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[147]+1 /* (set! srfi-4#f32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4520,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[148]+1 /* (set! srfi-4#f64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4526,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[76]+1 /* (set! srfi-4#number-vector? ...) */,*((C_word*)lf[149]+1));
t67=C_mutate(&lf[150] /* (set! srfi-4#pack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4544,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate(&lf[152] /* (set! srfi-4#unpack ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4562,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate(&lf[154] /* (set! srfi-4#unpack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4592,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t70=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6520,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp);
t71=C_mutate((C_word*)lf[157]+1 /* (set! srfi-4#u8vector->blob/shared ...) */,t70);
t72=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6513,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp);
t73=C_mutate((C_word*)lf[159]+1 /* (set! srfi-4#s8vector->blob/shared ...) */,t72);
t74=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6506,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp);
t75=C_mutate((C_word*)lf[161]+1 /* (set! srfi-4#u16vector->blob/shared ...) */,t74);
t76=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6499,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp);
t77=C_mutate((C_word*)lf[163]+1 /* (set! srfi-4#s16vector->blob/shared ...) */,t76);
t78=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6492,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp);
t79=C_mutate((C_word*)lf[165]+1 /* (set! srfi-4#u32vector->blob/shared ...) */,t78);
t80=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6485,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
t81=C_mutate((C_word*)lf[167]+1 /* (set! srfi-4#s32vector->blob/shared ...) */,t80);
t82=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6478,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
t83=C_mutate((C_word*)lf[169]+1 /* (set! srfi-4#u64vector->blob/shared ...) */,t82);
t84=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6471,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
t85=C_mutate((C_word*)lf[171]+1 /* (set! srfi-4#s64vector->blob/shared ...) */,t84);
t86=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6464,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
t87=C_mutate((C_word*)lf[173]+1 /* (set! srfi-4#f32vector->blob/shared ...) */,t86);
t88=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6457,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
t89=C_mutate((C_word*)lf[175]+1 /* (set! srfi-4#f64vector->blob/shared ...) */,t88);
t90=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4668,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:680: pack-copy */
f_4544(t90,lf[3],lf[285]);}

/* ext-free in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2522,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub554(C_SCHEME_UNDEFINED,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* alloc in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_2524(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2524,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2528,a[2]=t4,a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:374: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=t2;
tp(4,av2);}}

/* k2526 in alloc in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2528,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],C_fix(0)))){
/* srfi-4.scm:375: ##sys#error */
t3=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[72];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2531(2,av2);}}}

/* k2529 in k2526 in alloc in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2531,2,av);}
a=C_alloc(6);
t2=C_i_o_fixnum_times(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2537,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2537(2,av2);}}
else{
/* srfi-4.scm:377: ##sys#error */
t5=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[71];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2535 in k2529 in k2526 in alloc in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2537,2,av);}
a=C_alloc(3);
if(C_truep(((C_word*)t0)[2])){
t2=C_fix((C_word)sizeof(size_t) * CHAR_BIT);
t3=C_i_foreign_unsigned_ranged_integer_argumentp(((C_word*)t0)[3],t2);
t4=stub548(C_SCHEME_UNDEFINED,t3);
if(C_truep(t4)){
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* srfi-4.scm:381: ##sys#error */
t5=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=lf[69];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2552,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:382: ##sys#allocate-vector */
t3=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k2550 in k2535 in k2529 in k2526 in alloc in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2552,2,av);}
t2=C_string_to_bytevector(t1);
t3=t1;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* srfi-4#release-number-vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2563,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2570,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:388: number-vector? */
t4=*((C_word*)lf[76]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2568 in srfi-4#release-number-vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2570,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub554(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* srfi-4.scm:390: ##sys#error */
t2=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[74];
av2[3]=lf[75];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* srfi-4#make-u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,5)))){
C_save_and_reclaim((void*)f_2578,c,av);}
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
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2656,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:394: alloc */
f_2524(t19,lf[78],C_fix(1),t2,t11);}

/* k2601 in k2654 in srfi-4#make-u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2603(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2603,2,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2614,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[78];
tp(4,av2);}}}

/* k2612 in k2601 in k2654 in srfi-4#make-u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2614,2,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(8)))){
t3=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[78];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=C_fix(256);
tp(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2631 in k2601 in k2654 in srfi-4#make-u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2633,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_2638(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop600 in k2631 in k2601 in k2654 in srfi-4#make-u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static C_word C_fcall f_2638(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k2654 in srfi-4#make-u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2656,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[3],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:395: chicken.gc#set-finalizer! */
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2603(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2603(2,av2);}}}

/* srfi-4#make-s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,5)))){
C_save_and_reclaim((void*)f_2694,c,av);}
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
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2772,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:406: alloc */
f_2524(t19,lf[81],C_fix(1),t2,t11);}

/* k2717 in k2770 in srfi-4#make-s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2719(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2719,2,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2730,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[81];
tp(4,av2);}}}

/* k2728 in k2717 in k2770 in srfi-4#make-s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2730,2,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(8)))){
t3=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=C_fix(256);
tp(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2747 in k2717 in k2770 in srfi-4#make-s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2749,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_2754(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop634 in k2747 in k2717 in k2770 in srfi-4#make-s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static C_word C_fcall f_2754(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k2770 in srfi-4#make-s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2772,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[6],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:407: chicken.gc#set-finalizer! */
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2719(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2719(2,av2);}}}

/* srfi-4#make-u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,5)))){
C_save_and_reclaim((void*)f_2810,c,av);}
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
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2888,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:418: alloc */
f_2524(t19,lf[83],C_fix(2),t2,t11);}

/* k2833 in k2886 in srfi-4#make-u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2835(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2835,2,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2865,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2846,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[83];
tp(4,av2);}}}

/* k2844 in k2833 in k2886 in srfi-4#make-u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2846,2,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(16)))){
t3=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[83];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=C_fix(65536);
tp(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2863 in k2833 in k2886 in srfi-4#make-u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2865,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li27),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_2870(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop668 in k2863 in k2833 in k2886 in srfi-4#make-u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static C_word C_fcall f_2870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k2886 in srfi-4#make-u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2888,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[9],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:419: chicken.gc#set-finalizer! */
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2835(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2835(2,av2);}}}

/* srfi-4#make-s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,5)))){
C_save_and_reclaim((void*)f_2926,c,av);}
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
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3014,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:430: alloc */
f_2524(t19,lf[85],C_fix(2),t2,t11);}

/* k2949 in k3012 in srfi-4#make-s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2951(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2951,2,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2991,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2962,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:115: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[85];
tp(4,av2);}}}

/* k2960 in k2949 in k3012 in srfi-4#make-s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2962(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,6)))){
C_save_and_reclaim((void *)f_2962,2,av);}
a=C_alloc(58);
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(16),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
t5=C_s_a_i_negate(&a,1,C_fix(65536));
t6=C_s_a_i_minus(&a,2,C_fix(65536),C_fix(1));
/* srfi-4.scm:117: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[85];
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
av2[6]=t6;
tp(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2989 in k2949 in k3012 in srfi-4#make-s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_2991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2991,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_2996(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop702 in k2989 in k2949 in k3012 in srfi-4#make-s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static C_word C_fcall f_2996(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k3012 in srfi-4#make-s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3014,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[12],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:431: chicken.gc#set-finalizer! */
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2951(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2951(2,av2);}}}

/* srfi-4#make-u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,5)))){
C_save_and_reclaim((void*)f_3052,c,av);}
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
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3130,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:442: alloc */
f_2524(t19,lf[87],C_fix(4),t2,t11);}

/* k3075 in k3128 in srfi-4#make-u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3077(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3077,2,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3107,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3088,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[87];
tp(4,av2);}}}

/* k3086 in k3075 in k3128 in srfi-4#make-u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3088,2,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(32)))){
t3=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[87];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=lf[46];
tp(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3105 in k3075 in k3128 in srfi-4#make-u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3107,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_3112(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop736 in k3105 in k3075 in k3128 in srfi-4#make-u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static C_word C_fcall f_3112(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k3128 in srfi-4#make-u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3130,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[15],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:443: chicken.gc#set-finalizer! */
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3077(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3077(2,av2);}}}

/* srfi-4#make-u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,5)))){
C_save_and_reclaim((void*)f_3168,c,av);}
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
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3246,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:454: alloc */
f_2524(t19,lf[89],C_fix(8),t2,t11);}

/* k3191 in k3244 in srfi-4#make-u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3193(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3193,2,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3223,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3204,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[89];
tp(4,av2);}}}

/* k3202 in k3191 in k3244 in srfi-4#make-u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3204,2,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(64)))){
t3=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[89];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=lf[51];
tp(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3221 in k3191 in k3244 in srfi-4#make-u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3223,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_3228(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop770 in k3221 in k3191 in k3244 in srfi-4#make-u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static C_word C_fcall f_3228(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u64vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k3244 in srfi-4#make-u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3246,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[21],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:455: chicken.gc#set-finalizer! */
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3193(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3193(2,av2);}}}

/* srfi-4#make-s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,5)))){
C_save_and_reclaim((void*)f_3284,c,av);}
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
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3372,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:466: alloc */
f_2524(t19,lf[91],C_fix(4),t2,t11);}

/* k3307 in k3370 in srfi-4#make-s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3309(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3309,2,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3349,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3320,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:115: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[91];
tp(4,av2);}}}

/* k3318 in k3307 in k3370 in srfi-4#make-s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3320(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,6)))){
C_save_and_reclaim((void *)f_3320,2,av);}
a=C_alloc(58);
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(32),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
t5=C_s_a_i_negate(&a,1,lf[46]);
t6=C_s_a_i_minus(&a,2,lf[46],C_fix(1));
/* srfi-4.scm:117: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[91];
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
av2[6]=t6;
tp(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3347 in k3307 in k3370 in srfi-4#make-s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3349,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_3354(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop804 in k3347 in k3307 in k3370 in srfi-4#make-s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static C_word C_fcall f_3354(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k3370 in srfi-4#make-s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3372,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[18],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:467: chicken.gc#set-finalizer! */
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3309(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3309(2,av2);}}}

/* srfi-4#make-s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,5)))){
C_save_and_reclaim((void*)f_3410,c,av);}
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
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_TRUE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3498,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:478: alloc */
f_2524(t19,lf[93],C_fix(8),t2,t11);}

/* k3433 in k3496 in srfi-4#make-s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3435(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3435,2,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3475,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=t2;
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3446,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:115: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[93];
tp(4,av2);}}}

/* k3444 in k3433 in k3496 in srfi-4#make-s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3446(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,6)))){
C_save_and_reclaim((void *)f_3446,2,av);}
a=C_alloc(58);
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(64),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
t5=C_s_a_i_negate(&a,1,lf[51]);
t6=C_s_a_i_minus(&a,2,lf[51],C_fix(1));
/* srfi-4.scm:117: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[93];
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
av2[6]=t6;
tp(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3473 in k3433 in k3496 in srfi-4#make-s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3475,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li37),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_3480(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop838 in k3473 in k3433 in k3496 in srfi-4#make-s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static C_word C_fcall f_3480(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s64vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k3496 in srfi-4#make-s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3498,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[24],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:479: chicken.gc#set-finalizer! */
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3435(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3435(2,av2);}}}

/* srfi-4#make-f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,5)))){
C_save_and_reclaim((void*)f_3536,c,av);}
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
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_TRUE:C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3609,a[2]=t7,a[3]=t1,a[4]=t2,a[5]=t12,a[6]=t17,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:490: alloc */
f_2524(t20,lf[95],C_fix(4),t2,t12);}

/* k3559 in k3607 in srfi-4#make-f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3561(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3561,2,av);}
a=C_alloc(6);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3582,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_i_exact_integerp(t3);
t5=(C_truep(t4)?t4:C_i_flonump(t3));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_3582(2,av2);}}
else{
t6=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR);
/* srfi-4.scm:99: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t2;
av2[2]=t6;
av2[3]=lf[95];
av2[4]=t3;
tp(5,av2);}}}}

/* k3580 in k3559 in k3607 in srfi-4#make-f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3582,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_flonump(((C_word*)((C_word*)t0)[4])[1]))){
t3=t2;
f_3585(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_a_u_i_int_to_flo(&a,1,((C_word*)((C_word*)t0)[4])[1]));
t4=t2;
f_3585(t4,t3);}}

/* k3583 in k3580 in k3559 in k3607 in srfi-4#make-f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_3585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3585,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li39),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t3;
av2[1]=(
  f_3590(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop873 in k3583 in k3580 in k3559 in k3607 in srfi-4#make-f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static C_word C_fcall f_3590(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f32vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k3607 in srfi-4#make-f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3609,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[27],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:491: chicken.gc#set-finalizer! */
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3561(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3561(2,av2);}}}

/* srfi-4#make-f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,5)))){
C_save_and_reclaim((void*)f_3647,c,av);}
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
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_TRUE:C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3720,a[2]=t7,a[3]=t1,a[4]=t2,a[5]=t12,a[6]=t17,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:504: alloc */
f_2524(t20,lf[97],C_fix(8),t2,t12);}

/* k3670 in k3718 in srfi-4#make-f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3672(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3672,2,av);}
a=C_alloc(6);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3693,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_i_exact_integerp(t3);
t5=(C_truep(t4)?t4:C_i_flonump(t3));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_3693(2,av2);}}
else{
t6=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR);
/* srfi-4.scm:99: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t2;
av2[2]=t6;
av2[3]=lf[97];
av2[4]=t3;
tp(5,av2);}}}}

/* k3691 in k3670 in k3718 in srfi-4#make-f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3693,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_flonump(((C_word*)((C_word*)t0)[4])[1]))){
t3=t2;
f_3696(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_a_u_i_int_to_flo(&a,1,((C_word*)((C_word*)t0)[4])[1]));
t4=t2;
f_3696(t4,t3);}}

/* k3694 in k3691 in k3670 in k3718 in srfi-4#make-f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_3696(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3696,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t3;
av2[1]=(
  f_3701(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop909 in k3694 in k3691 in k3670 in k3718 in srfi-4#make-f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static C_word C_fcall f_3701(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f64vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* k3718 in srfi-4#make-f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3720,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[30],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:505: chicken.gc#set-finalizer! */
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3672(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3672(2,av2);}}}

/* srfi-4#list->u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3758(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3758,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[3]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3765,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:540: make-u8vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3763 in srfi-4#list->u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3765(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3765,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3770,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3770(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop944 in k3763 in srfi-4#list->u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_3770(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3770,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3777,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:540: u8vector-set! */
t7=*((C_word*)lf[32]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:540: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3775 in doloop944 in k3763 in srfi-4#list->u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3777,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3770(t4,((C_word*)t0)[5],t2,t3);}

/* srfi-4#list->s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3794(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3794,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[6]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3801,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:541: make-s8vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3799 in srfi-4#list->s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3801(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3801,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3806,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3806(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop957 in k3799 in srfi-4#list->s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_3806(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3806,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3813,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:541: s8vector-set! */
t7=*((C_word*)lf[37]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:541: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3811 in doloop957 in k3799 in srfi-4#list->s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3813,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3806(t4,((C_word*)t0)[5],t2,t3);}

/* srfi-4#list->u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3830(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3830,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[9]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3837,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:542: make-u16vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3835 in srfi-4#list->u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3837(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3837,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3842,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3842(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop970 in k3835 in srfi-4#list->u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_3842(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3842,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3849,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:542: u16vector-set! */
t7=*((C_word*)lf[40]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:542: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3847 in doloop970 in k3835 in srfi-4#list->u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3849,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3842(t4,((C_word*)t0)[5],t2,t3);}

/* srfi-4#list->s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3866(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3866,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[12]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3873,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:543: make-s16vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3871 in srfi-4#list->s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3873(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3873,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3878,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3878(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop983 in k3871 in srfi-4#list->s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_3878(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3878,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3885,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:543: s16vector-set! */
t7=*((C_word*)lf[42]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:543: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3883 in doloop983 in k3871 in srfi-4#list->s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3885,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3878(t4,((C_word*)t0)[5],t2,t3);}

/* srfi-4#list->u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3902(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3902,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[15]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3909,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:544: make-u32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3907 in srfi-4#list->u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3909(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3909,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3914,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3914(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop996 in k3907 in srfi-4#list->u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_3914(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3914,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3921,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:544: u32vector-set! */
t7=*((C_word*)lf[44]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:544: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3919 in doloop996 in k3907 in srfi-4#list->u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3921,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3914(t4,((C_word*)t0)[5],t2,t3);}

/* srfi-4#list->s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3938(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3938,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[18]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3945,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:545: make-s32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3943 in srfi-4#list->s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3945(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3945,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3950,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3950(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop1009 in k3943 in srfi-4#list->s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_3950(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3950,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3957,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:545: s32vector-set! */
t7=*((C_word*)lf[47]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:545: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3955 in doloop1009 in k3943 in srfi-4#list->s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3957,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3950(t4,((C_word*)t0)[5],t2,t3);}

/* srfi-4#list->u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3974(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3974,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[21]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3981,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:546: make-u64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3979 in srfi-4#list->u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3981(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3981,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3986,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3986(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop1022 in k3979 in srfi-4#list->u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_3986(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3986,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3993,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:546: u64vector-set! */
t7=*((C_word*)lf[49]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:546: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3991 in doloop1022 in k3979 in srfi-4#list->u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_3993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3993,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3986(t4,((C_word*)t0)[5],t2,t3);}

/* srfi-4#list->s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4010(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4010,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[24]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4017,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:547: make-s64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k4015 in srfi-4#list->s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4017(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4017,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4022,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4022(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop1035 in k4015 in srfi-4#list->s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4022(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4022,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4029,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:547: s64vector-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[52]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[52]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
tp(5,av2);}}
else{
/* srfi-4.scm:547: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k4027 in doloop1035 in k4015 in srfi-4#list->s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4029,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4022(t4,((C_word*)t0)[5],t2,t3);}

/* srfi-4#list->f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4046(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4046,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[27]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4053,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:548: make-f32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4051 in srfi-4#list->f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4053(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4053,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4058,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4058(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop1048 in k4051 in srfi-4#list->f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4058(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4058,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4065,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:548: f32vector-set! */
t7=*((C_word*)lf[54]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:548: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k4063 in doloop1048 in k4051 in srfi-4#list->f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4065,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4058(t4,((C_word*)t0)[5],t2,t3);}

/* srfi-4#list->f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4082(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4082,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[30]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4089,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:549: make-f64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4087 in srfi-4#list->f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4089(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4089,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4094,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4094(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop1061 in k4087 in srfi-4#list->f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4094(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4094,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4101,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:549: f64vector-set! */
t7=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:549: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k4099 in doloop1061 in k4087 in srfi-4#list->f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4101,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4094(t4,((C_word*)t0)[5],t2,t3);}

/* srfi-4#u8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_4118,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:555: list->u8vector */
t3=*((C_word*)lf[98]+1);{
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

/* srfi-4#s8vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_4124,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:558: list->s8vector */
t3=*((C_word*)lf[100]+1);{
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

/* srfi-4#u16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_4130,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:561: list->u16vector */
t3=*((C_word*)lf[101]+1);{
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

/* srfi-4#s16vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_4136,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:564: list->s16vector */
t3=*((C_word*)lf[102]+1);{
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

/* srfi-4#u32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_4142,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:567: list->u32vector */
t3=*((C_word*)lf[103]+1);{
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

/* srfi-4#s32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_4148,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:570: list->s32vector */
t3=*((C_word*)lf[104]+1);{
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

/* srfi-4#u64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_4154,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:573: list->u64vector */
t3=*((C_word*)lf[105]+1);{
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

/* srfi-4#s64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_4160,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:576: list->s64vector */
t3=lf[106];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
f_4010(3,av2);}}

/* srfi-4#f32vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_4166,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:579: list->f32vector */
t3=*((C_word*)lf[107]+1);{
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

/* srfi-4#f64vector in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_4172,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:582: list->f64vector */
t3=*((C_word*)lf[108]+1);{
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

/* srfi-4#u8vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4178(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4178,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[3],lf[120]);
t4=C_u_i_u8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4187,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4187(t8,t1,C_fix(0));}

/* loop in srfi-4#u8vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4187(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4187,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_u8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4202,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:605: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k4200 in loop in srfi-4#u8vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4202,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s8vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4208(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4208,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[6],lf[122]);
t4=C_u_i_s8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4217,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4217(t8,t1,C_fix(0));}

/* loop in srfi-4#s8vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4217(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4217,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_s8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4232,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:606: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k4230 in loop in srfi-4#s8vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4232,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u16vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4238,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[9],lf[124]);
t4=C_u_i_u16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4247,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4247(t8,t1,C_fix(0));}

/* loop in srfi-4#u16vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4247(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4247,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_u16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4262,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:607: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k4260 in loop in srfi-4#u16vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4262,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s16vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4268(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4268,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[12],lf[126]);
t4=C_u_i_s16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4277,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4277(t8,t1,C_fix(0));}

/* loop in srfi-4#s16vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4277(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4277,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_s16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4292,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:608: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k4290 in loop in srfi-4#s16vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4292,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u32vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4298(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4298,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[15],lf[128]);
t4=C_u_i_u32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4307,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4307(t8,t1,C_fix(0));}

/* loop in srfi-4#u32vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4307,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4321,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:610: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k4319 in loop in srfi-4#u32vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_4321,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s32vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4327(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4327,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[18],lf[130]);
t4=C_u_i_s32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4336,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4336(t8,t1,C_fix(0));}

/* loop in srfi-4#s32vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4336(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4336,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4350,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:611: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k4348 in loop in srfi-4#s32vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_4350,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u64vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4356(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4356,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[21],lf[132]);
t4=C_u_i_u64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4365,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4365(t8,t1,C_fix(0));}

/* loop in srfi-4#u64vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4365(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4365,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4379,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:612: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k4377 in loop in srfi-4#u64vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,1)))){
C_save_and_reclaim((void *)f_4379,2,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_u64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s64vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4385(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4385,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[24],lf[134]);
t4=C_u_i_s64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4394,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4394(t8,t1,C_fix(0));}

/* loop in srfi-4#s64vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4394(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4394,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4408,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:613: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k4406 in loop in srfi-4#s64vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,1)))){
C_save_and_reclaim((void *)f_4408,2,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_s64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#f32vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4414(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4414,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[27],lf[136]);
t4=C_u_i_f32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4423,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4423(t8,t1,C_fix(0));}

/* loop in srfi-4#f32vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4423(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4423,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4437,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:614: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k4435 in loop in srfi-4#f32vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_4437,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#f64vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4443(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4443,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[30],lf[138]);
t4=C_u_i_f64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4452,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4452(t8,t1,C_fix(0));}

/* loop in srfi-4#f64vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4452(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4452,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4466,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:615: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k4464 in loop in srfi-4#f64vector->list in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_4466,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u8vector? in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4472,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s8vector? in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
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
av2[1]=C_i_structurep(t2,lf[6]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#u16vector? in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4484,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[9]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s16vector? in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4490,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[12]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#u32vector? in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4496,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[15]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s32vector? in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4502,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[18]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#u64vector? in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4508,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[21]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s64vector? in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4514,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[24]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#f32vector? in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4520,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[27]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#f64vector? in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4526,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[30]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#pack-copy in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4544(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4544,3,t1,t2,t3);}
a=C_alloc(5);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4546,a[2]=t2,a[3]=t3,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_4546 in srfi-4#pack-copy in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4546(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4546,3,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4556,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_block_size(t5);
/* srfi-4.scm:645: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[151]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t6;
av2[2]=t7;
tp(3,av2);}}

/* k4554 */
static void C_ccall f_4556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4556,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_copy_block(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#unpack in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4562(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4562,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4564,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_4564 in srfi-4#unpack in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4564(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4564,3,av);}
a=C_alloc(8);
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=t4;
t6=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4580,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_4580(t8,t6);}
else{
t8=C_fixnum_modulo(t5,((C_word*)t0)[3]);
t9=t7;
f_4580(t9,C_eqp(C_fix(0),t8));}}

/* k4578 */
static void C_fcall f_4580(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_4580,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_record2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* srfi-4.scm:655: ##sys#error */
t2=*((C_word*)lf[68]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[5];
av2[3]=lf[153];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}}

/* srfi-4#unpack-copy in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_fcall f_4592(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4592,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4594,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_4594 in srfi-4#unpack-copy in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4594(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4594,3,av);}
a=C_alloc(8);
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4604,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:661: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[151]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t6;
av2[2]=t5;
tp(3,av2);}}

/* k4602 */
static void C_ccall f_4604(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4604,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4613,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_4613(t5,t3);}
else{
t5=C_fixnum_modulo(((C_word*)t0)[7],((C_word*)t0)[2]);
t6=t4;
f_4613(t6,C_eqp(C_fix(0),t5));}}

/* k4611 in k4602 */
static void C_fcall f_4613(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_4613,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_copy_block(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_record2(&a,2,((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* srfi-4.scm:667: ##sys#error */
t2=*((C_word*)lf[68]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[6];
av2[3]=lf[155];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[7];
av2[6]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}}

/* k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4668,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[176]+1 /* (set! srfi-4#u8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:681: pack-copy */
f_4544(t3,lf[6],lf[284]);}

/* k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4672,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[177]+1 /* (set! srfi-4#s8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:682: pack-copy */
f_4544(t3,lf[9],lf[283]);}

/* k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4676,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[178]+1 /* (set! srfi-4#u16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:683: pack-copy */
f_4544(t3,lf[12],lf[282]);}

/* k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4680,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[179]+1 /* (set! srfi-4#s16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:684: pack-copy */
f_4544(t3,lf[15],lf[281]);}

/* k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4684,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[180]+1 /* (set! srfi-4#u32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4688,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:685: pack-copy */
f_4544(t3,lf[18],lf[280]);}

/* k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4688,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[181]+1 /* (set! srfi-4#s32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:686: pack-copy */
f_4544(t3,lf[21],lf[279]);}

/* k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4692,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[182]+1 /* (set! srfi-4#u64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:687: pack-copy */
f_4544(t3,lf[24],lf[278]);}

/* k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_4696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4696,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[183]+1 /* (set! srfi-4#s64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:688: pack-copy */
f_4544(t3,lf[27],lf[277]);}

/* k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 in ... */
static void C_ccall f_4700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4700,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[184]+1 /* (set! srfi-4#f32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4704,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:689: pack-copy */
f_4544(t3,lf[30],lf[276]);}

/* k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in ... */
static void C_ccall f_4704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4704,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[185]+1 /* (set! srfi-4#f64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:691: unpack */
f_4562(t3,lf[3],C_SCHEME_TRUE,lf[275]);}

/* k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in ... */
static void C_ccall f_4708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4708,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[186]+1 /* (set! srfi-4#blob->u8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:692: unpack */
f_4562(t3,lf[6],C_SCHEME_TRUE,lf[274]);}

/* k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in ... */
static void C_ccall f_4712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4712,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[187]+1 /* (set! srfi-4#blob->s8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4716,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:693: unpack */
f_4562(t3,lf[9],C_fix(2),lf[273]);}

/* k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in ... */
static void C_ccall f_4716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4716,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[188]+1 /* (set! srfi-4#blob->u16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:694: unpack */
f_4562(t3,lf[12],C_fix(2),lf[272]);}

/* k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in ... */
static void C_ccall f_4720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4720,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[189]+1 /* (set! srfi-4#blob->s16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4724,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:695: unpack */
f_4562(t3,lf[15],C_fix(4),lf[271]);}

/* k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in ... */
static void C_ccall f_4724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4724,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[190]+1 /* (set! srfi-4#blob->u32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4728,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:696: unpack */
f_4562(t3,lf[18],C_fix(4),lf[270]);}

/* k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in k2492 in ... */
static void C_ccall f_4728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4728,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[191]+1 /* (set! srfi-4#blob->s32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4732,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:697: unpack */
f_4562(t3,lf[21],C_fix(4),lf[269]);}

/* k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in k2496 in ... */
static void C_ccall f_4732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4732,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[192]+1 /* (set! srfi-4#blob->u64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4736,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:698: unpack */
f_4562(t3,lf[24],C_fix(4),lf[268]);}

/* k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in k2500 in ... */
static void C_ccall f_4736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4736,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[193]+1 /* (set! srfi-4#blob->s64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4740,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:699: unpack */
f_4562(t3,lf[27],C_fix(4),lf[267]);}

/* k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in k2504 in ... */
static void C_ccall f_4740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4740,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[194]+1 /* (set! srfi-4#blob->f32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4744,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:700: unpack */
f_4562(t3,lf[30],C_fix(8),lf[266]);}

/* k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in k2508 in ... */
static void C_ccall f_4744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4744,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[195]+1 /* (set! srfi-4#blob->f64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4748,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:702: unpack-copy */
f_4592(t3,lf[3],C_SCHEME_TRUE,lf[265]);}

/* k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in k2512 in ... */
static void C_ccall f_4748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4748,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[196]+1 /* (set! srfi-4#blob->u8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4752,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:703: unpack-copy */
f_4592(t3,lf[6],C_SCHEME_TRUE,lf[264]);}

/* k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in k4666 in ... */
static void C_ccall f_4752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4752,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[197]+1 /* (set! srfi-4#blob->s8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4756,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:704: unpack-copy */
f_4592(t3,lf[9],C_fix(2),lf[263]);}

/* k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in k4670 in ... */
static void C_ccall f_4756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4756,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[198]+1 /* (set! srfi-4#blob->u16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4760,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:705: unpack-copy */
f_4592(t3,lf[12],C_fix(2),lf[262]);}

/* k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in k4674 in ... */
static void C_ccall f_4760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4760,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[199]+1 /* (set! srfi-4#blob->s16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4764,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:706: unpack-copy */
f_4592(t3,lf[15],C_fix(4),lf[261]);}

/* k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in k4678 in ... */
static void C_ccall f_4764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4764,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[200]+1 /* (set! srfi-4#blob->u32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4768,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:707: unpack-copy */
f_4592(t3,lf[18],C_fix(4),lf[260]);}

/* k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in k4682 in ... */
static void C_ccall f_4768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4768,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[201]+1 /* (set! srfi-4#blob->s32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4772,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:708: unpack-copy */
f_4592(t3,lf[21],C_fix(4),lf[259]);}

/* k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in k4686 in ... */
static void C_ccall f_4772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4772,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[202]+1 /* (set! srfi-4#blob->u64vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4776,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:709: unpack-copy */
f_4592(t3,lf[24],C_fix(4),lf[258]);}

/* k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in k4690 in ... */
static void C_ccall f_4776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4776,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[203]+1 /* (set! srfi-4#blob->s64vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:710: unpack-copy */
f_4592(t3,lf[27],C_fix(4),lf[257]);}

/* k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in k4694 in ... */
static void C_ccall f_4780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4780,2,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[204]+1 /* (set! srfi-4#blob->f32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4784,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:711: unpack-copy */
f_4592(t3,lf[30],C_fix(8),lf[256]);}

/* k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in k4698 in ... */
static void C_ccall f_4784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
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
if(C_unlikely(!C_demand(C_calculate_demand(114,c,8)))){
C_save_and_reclaim((void *)f_4784,2,av);}
a=C_alloc(114);
t2=C_mutate((C_word*)lf[205]+1 /* (set! srfi-4#blob->f64vector ...) */,t1);
t3=*((C_word*)lf[206]+1);
t4=C_a_i_list(&a,20,lf[207],*((C_word*)lf[98]+1),lf[208],*((C_word*)lf[100]+1),lf[209],*((C_word*)lf[101]+1),lf[210],*((C_word*)lf[102]+1),lf[211],*((C_word*)lf[103]+1),lf[212],*((C_word*)lf[104]+1),lf[213],*((C_word*)lf[105]+1),lf[214],lf[106],lf[215],*((C_word*)lf[107]+1),lf[216],*((C_word*)lf[108]+1));
t5=t4;
t6=C_mutate((C_word*)lf[206]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4789,a[2]=t5,a[3]=t3,a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t7=*((C_word*)lf[222]+1);
t8=C_mutate((C_word*)lf[222]+1 /* (set! ##sys#user-print-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4849,a[2]=t7,a[3]=((C_word)li121),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate(&lf[224] /* (set! srfi-4#subnvector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4923,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[225]+1 /* (set! srfi-4#subu8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5008,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[227]+1 /* (set! srfi-4#subu16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5014,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[229]+1 /* (set! srfi-4#subu32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5020,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[231]+1 /* (set! srfi-4#subu64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5026,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[233]+1 /* (set! srfi-4#subs8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5032,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[235]+1 /* (set! srfi-4#subs16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5038,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[237]+1 /* (set! srfi-4#subs32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5044,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[239]+1 /* (set! srfi-4#subs64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5050,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[241]+1 /* (set! srfi-4#subf32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5056,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[243]+1 /* (set! srfi-4#subf64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5062,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[245]+1 /* (set! srfi-4#write-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5068,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[248]+1 /* (set! srfi-4#read-u8vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5237,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[252]+1 /* (set! srfi-4#read-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5317,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:823: chicken.platform#register-feature! */
t24=*((C_word*)lf[255]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t24;
av2[1]=t23;
av2[2]=lf[0];
((C_proc)(void*)(*((C_word*)t24+1)))(3,av2);}}

/* ##sys#user-read-hook in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_4789(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4789,4,av);}
a=C_alloc(5);
t4=t2;
if(C_truep((C_truep(C_eqp(t4,C_make_character(117)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(102)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(85)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(83)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(70)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4798,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:731: read */
t6=*((C_word*)lf[219]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* srfi-4.scm:736: old-hook */
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k4796 in user-read-hook in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in ... */
static void C_ccall f_4798(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4798,2,av);}
a=C_alloc(4);
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:C_SCHEME_FALSE);
t4=C_eqp(t3,lf[217]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[218]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_memq(t3,((C_word*)t0)[3]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4817,a[2]=((C_word*)t0)[4],a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:733: g1287 */
t8=t7;
f_4817(t8,((C_word*)t0)[2],t6);}
else{
/* srfi-4.scm:735: ##sys#read-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[220]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[221];
av2[4]=t3;
tp(5,av2);}}}}

/* g1287 in k4796 in user-read-hook in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in ... */
static void C_fcall f_4817(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4817,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4828,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:734: read */
t7=*((C_word*)lf[219]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k4826 in g1287 in k4796 in user-read-hook in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in ... */
static void C_ccall f_4828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4828,2,av);}
/* srfi-4.scm:734: g1290 */
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

/* ##sys#user-print-hook in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_4849(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(126,c,4)))){
C_save_and_reclaim((void *)f_4849,5,av);}
a=C_alloc(126);
t5=C_slot(t2,C_fix(0));
t6=C_a_i_list(&a,3,lf[3],lf[207],*((C_word*)lf[119]+1));
t7=C_a_i_list(&a,3,lf[6],lf[208],*((C_word*)lf[121]+1));
t8=C_a_i_list(&a,3,lf[9],lf[209],*((C_word*)lf[123]+1));
t9=C_a_i_list(&a,3,lf[12],lf[210],*((C_word*)lf[125]+1));
t10=C_a_i_list(&a,3,lf[15],lf[211],*((C_word*)lf[127]+1));
t11=C_a_i_list(&a,3,lf[18],lf[212],*((C_word*)lf[129]+1));
t12=C_a_i_list(&a,3,lf[21],lf[213],*((C_word*)lf[131]+1));
t13=C_a_i_list(&a,3,lf[24],lf[214],*((C_word*)lf[133]+1));
t14=C_a_i_list(&a,3,lf[27],lf[215],*((C_word*)lf[135]+1));
t15=C_a_i_list(&a,3,lf[30],lf[216],*((C_word*)lf[137]+1));
t16=C_a_i_list(&a,10,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15);
t17=C_u_i_assq(t5,t16);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4861,a[2]=t17,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:756: ##sys#print */
t19=*((C_word*)lf[223]+1);{
C_word *av2=av;
av2[0]=t19;
av2[1]=t18;
av2[2]=C_make_character(35);
av2[3]=C_SCHEME_FALSE;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}
else{
/* srfi-4.scm:759: old-hook */
t18=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t18;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)C_fast_retrieve_proc(t18))(5,av2);}}}

/* k4859 in user-print-hook in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in ... */
static void C_ccall f_4861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4861,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* srfi-4.scm:757: ##sys#print */
t4=*((C_word*)lf[223]+1);{
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

/* k4862 in k4859 in user-print-hook in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in ... */
static void C_ccall f_4864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4864,2,av);}
a=C_alloc(4);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:758: g1303 */
t4=t2;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4872 in k4862 in k4859 in user-print-hook in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in ... */
static void C_ccall f_4874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4874,2,av);}
/* srfi-4.scm:758: ##sys#print */
t2=*((C_word*)lf[223]+1);{
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

/* srfi-4#subnvector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_fcall f_4923(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_4923,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(16);
t8=C_i_check_structure_2(t2,t3,t7);
t9=C_slot(t2,C_fix(1));
t10=t9;
t11=C_block_size(t10);
t12=C_u_fixnum_divide(t11,t4);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4957,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t10,a[7]=t1,a[8]=t12,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t14=C_fixnum_plus(t12,C_fix(1));
t15=t13;
t16=t5;
t17=t14;
t18=t7;
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4938,a[2]=t16,a[3]=t17,a[4]=t15,a[5]=t18,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t19;
av2[2]=t16;
av2[3]=t18;
tp(4,av2);}}

/* k4936 in srfi-4#subnvector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in ... */
static void C_ccall f_4938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4938,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k4955 in srfi-4#subnvector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in ... */
static void C_ccall f_4957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_4957,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=t2;
t5=((C_word*)t0)[2];
t6=t3;
t7=((C_word*)t0)[9];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4962,a[2]=t5,a[3]=t6,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t8;
av2[2]=t5;
av2[3]=t7;
tp(4,av2);}}

/* k4960 in k4955 in srfi-4#subnvector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in ... */
static void C_ccall f_4962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4962,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k4979 in k4955 in srfi-4#subnvector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in ... */
static void C_ccall f_4981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_4981,2,av);}
a=C_alloc(8);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_times(((C_word*)t0)[4],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:772: ##sys#allocate-vector */
t6=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}

/* k4985 in k4979 in k4955 in srfi-4#subnvector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in ... */
static void C_ccall f_4987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4987,2,av);}
a=C_alloc(3);
t2=C_string_to_bytevector(t1);
t3=C_a_i_record2(&a,2,((C_word*)t0)[2],t1);
t4=C_fixnum_times(((C_word*)t0)[3],((C_word*)t0)[4]);
t5=C_copy_subvector(t1,((C_word*)t0)[5],C_fix(0),t4,((C_word*)t0)[6]);
t6=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* srfi-4#subu8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5008,5,av);}
/* srfi-4.scm:778: subnvector */
f_4923(t1,t2,lf[3],C_fix(1),t3,t4,lf[226]);}

/* srfi-4#subu16vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5014,5,av);}
/* srfi-4.scm:779: subnvector */
f_4923(t1,t2,lf[9],C_fix(2),t3,t4,lf[228]);}

/* srfi-4#subu32vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5020,5,av);}
/* srfi-4.scm:780: subnvector */
f_4923(t1,t2,lf[15],C_fix(4),t3,t4,lf[230]);}

/* srfi-4#subu64vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5026,5,av);}
/* srfi-4.scm:781: subnvector */
f_4923(t1,t2,lf[21],C_fix(8),t3,t4,lf[232]);}

/* srfi-4#subs8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5032,5,av);}
/* srfi-4.scm:782: subnvector */
f_4923(t1,t2,lf[6],C_fix(1),t3,t4,lf[234]);}

/* srfi-4#subs16vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5038,5,av);}
/* srfi-4.scm:783: subnvector */
f_4923(t1,t2,lf[12],C_fix(2),t3,t4,lf[236]);}

/* srfi-4#subs32vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5044,5,av);}
/* srfi-4.scm:784: subnvector */
f_4923(t1,t2,lf[18],C_fix(4),t3,t4,lf[238]);}

/* srfi-4#subs64vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5050,5,av);}
/* srfi-4.scm:785: subnvector */
f_4923(t1,t2,lf[24],C_fix(8),t3,t4,lf[240]);}

/* srfi-4#subf32vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5056,5,av);}
/* srfi-4.scm:786: subnvector */
f_4923(t1,t2,lf[27],C_fix(4),t3,t4,lf[242]);}

/* srfi-4#subf64vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5062,5,av);}
/* srfi-4.scm:787: subnvector */
f_4923(t1,t2,lf[30],C_fix(8),t3,t4,lf[244]);}

/* srfi-4#write-u8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +13,c,3)))){
C_save_and_reclaim((void*)f_5068,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+13);
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[246]+1):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_i_car(t13));
t16=t15;
t17=C_i_nullp(t13);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t19=C_i_check_structure_2(t2,lf[3],lf[247]);
t20=C_i_check_port_2(t6,C_fix(2),C_SCHEME_TRUE,lf[247]);
t21=C_u_i_8vector_length(t2);
t22=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5117,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t16,a[6]=t11,a[7]=t21,tmp=(C_word)a,a+=8,tmp);
t23=(C_truep(t16)?C_fixnum_plus(t16,C_fix(1)):C_fixnum_plus(t21,C_fix(1)));
t24=t22;
t25=t11;
t26=t23;
t27=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5098,a[2]=t25,a[3]=t26,a[4]=t24,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t27;
av2[2]=t25;
av2[3]=lf[247];
tp(4,av2);}}

/* k5096 in srfi-4#write-u8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in ... */
static void C_ccall f_5098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5098,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[247];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5115 in srfi-4#write-u8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in ... */
static void C_ccall f_5117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_5117,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
t4=t2;
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=t3;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5168,a[2]=t6,a[3]=t5,a[4]=t7,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t8;
av2[2]=t5;
av2[3]=lf[247];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5120(2,av2);}}}

/* k5118 in k5115 in srfi-4#write-u8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in ... */
static void C_ccall f_5120(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5120,2,av);}
a=C_alloc(9);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(3));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5133,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=C_eqp(((C_word*)t0)[6],C_fix(0));
if(C_truep(t6)){
t7=C_i_not(((C_word*)t0)[5]);
t8=t5;
f_5133(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[5],((C_word*)t0)[7])));}
else{
t7=t5;
f_5133(t7,C_SCHEME_FALSE);}}

/* k5131 in k5118 in k5115 in srfi-4#write-u8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in ... */
static void C_fcall f_5133(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_5133,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* srfi-4.scm:792: g1424 */
t3=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5143,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:801: subu8vector */
t3=*((C_word*)lf[225]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* srfi-4.scm:801: subu8vector */
t3=*((C_word*)lf[225]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* k5141 in k5131 in k5118 in k5115 in srfi-4#write-u8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in ... */
static void C_ccall f_5143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5143,2,av);}
t2=C_slot(t1,C_fix(1));
/* srfi-4.scm:792: g1424 */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k5166 in k5115 in srfi-4#write-u8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in ... */
static void C_ccall f_5168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5168,2,av);}
t2=C_fixnum_less_or_equal_p(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[3],((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
av2[3]=lf[247];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[4];
tp(7,av2);}}}

/* srfi-4#read-u8vector! in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_5237,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+9);
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
C_word t16;
C_word t17;
C_word t18;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?*((C_word*)lf[249]+1):C_i_car(t4));
t8=t7;
t9=C_i_nullp(t4);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_fix(0):C_i_car(t10));
t13=t12;
t14=C_i_nullp(t10);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t16=C_i_check_port_2(t8,C_fix(1),C_SCHEME_TRUE,lf[250]);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5256,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t8,a[6]=t13,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:805: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t17;
av2[2]=t13;
av2[3]=lf[250];
tp(4,av2);}}

/* k5254 in srfi-4#read-u8vector! in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in ... */
static void C_ccall f_5256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5256,2,av);}
a=C_alloc(7);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[250]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* srfi-4.scm:807: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=lf[250];
tp(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5262(2,av2);}}}

/* k5260 in k5254 in srfi-4#read-u8vector! in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in ... */
static void C_ccall f_5262(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5262,2,av);}
a=C_alloc(8);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=C_block_size(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=C_fixnum_plus(((C_word*)t0)[6],((C_word*)((C_word*)t0)[4])[1]);
t8=t6;
f_5277(t8,C_fixnum_less_or_equal_p(t7,t5));}
else{
t7=t6;
f_5277(t7,C_SCHEME_FALSE);}}

/* k5275 in k5260 in k5254 in srfi-4#read-u8vector! in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in ... */
static void C_fcall f_5277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_5277,2,t0,t1);}
if(C_truep(t1)){
/* srfi-4.scm:812: chicken.io#read-string!/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[251]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[251]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
tp(6,av2);}}
else{
t2=C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
/* srfi-4.scm:812: chicken.io#read-string!/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[251]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[251]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
tp(6,av2);}}}

/* srfi-4#read-u8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_5317,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
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
C_word t12;
C_word t13;
C_word t14;
C_word t15;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?*((C_word*)lf[249]+1):C_i_car(t7));
t10=t9;
t11=C_i_nullp(t7);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t13=C_i_check_port_2(t10,C_fix(1),C_SCHEME_TRUE,lf[253]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5336,a[2]=t1,a[3]=t5,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
/* srfi-4.scm:816: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t14;
av2[2]=t5;
av2[3]=lf[253];
tp(4,av2);}}
else{
t15=t14;{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_SCHEME_UNDEFINED;
f_5336(2,av2);}}}

/* k5334 in srfi-4#read-u8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in ... */
static void C_ccall f_5336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5336,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:817: chicken.io#read-string/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[254]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[254]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k5337 in k5334 in srfi-4#read-u8vector in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in ... */
static void C_ccall f_5339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5339,2,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_string_to_bytevector(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record2(&a,2,lf[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5376 in k4782 in k4778 in k4774 in k4770 in k4766 in k4762 in k4758 in k4754 in k4750 in k4746 in k4742 in k4738 in k4734 in k4730 in k4726 in k4722 in k4718 in k4714 in k4710 in k4706 in k4702 in ... */
static void C_ccall f_5378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5378,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5379 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5380(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5380,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[30],lf[286]);
t5=C_u_i_f64vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5408,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t3;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5389,a[2]=t8,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[286];
tp(4,av2);}}

/* k5387 in a5379 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5389,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[286];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5406 in a5379 in k2508 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_5408,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_u_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5409 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5410(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5410,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[27],lf[289]);
t5=C_u_i_f32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5438,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t3;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5419,a[2]=t8,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[289];
tp(4,av2);}}

/* k5417 in a5409 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5419,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[289];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5436 in a5409 in k2504 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_5438,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_u_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5439 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5440(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5440,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[24],lf[291]);
t5=C_u_i_s64vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5468,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t3;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5449,a[2]=t8,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[291];
tp(4,av2);}}

/* k5447 in a5439 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5449,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[291];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5466 in a5439 in k2500 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_5468,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_u_i_s64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5469 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5470(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5470,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[21],lf[293]);
t5=C_u_i_u64vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5498,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t3;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5479,a[2]=t8,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[293];
tp(4,av2);}}

/* k5477 in a5469 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5479,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[293];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5496 in a5469 in k2496 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_5498,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_u_i_u64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5499 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5500(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5500,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[18],lf[295]);
t5=C_u_i_s32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5528,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t3;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5509,a[2]=t8,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[295];
tp(4,av2);}}

/* k5507 in a5499 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5509,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[295];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5526 in a5499 in k2492 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_5528,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_u_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5529 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5530(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5530,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[15],lf[297]);
t5=C_u_i_u32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5558,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t3;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5539,a[2]=t8,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[297];
tp(4,av2);}}

/* k5537 in a5529 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5539,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[297];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5556 in a5529 in k2488 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_5558,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_u_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5559 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5560(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5560,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[12],lf[299]);
t5=C_u_i_s16vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5588,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t3;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5569,a[2]=t8,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[299];
tp(4,av2);}}

/* k5567 in a5559 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5569,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[299];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5586 in a5559 in k2484 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5588,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_s16vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5589 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5590(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5590,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[9],lf[301]);
t5=C_u_i_s16vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5618,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t3;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5599,a[2]=t8,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[301];
tp(4,av2);}}

/* k5597 in a5589 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5599,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[301];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5616 in a5589 in k2480 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5618,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_u16vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5619 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5620(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5620,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[6],lf[303]);
t5=C_u_i_s8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5648,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t3;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5629,a[2]=t8,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[303];
tp(4,av2);}}

/* k5627 in a5619 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5629,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[303];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5646 in a5619 in k2476 in k1842 in k1839 in k1836 */
static void C_ccall f_5648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5648,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_s8vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5649 in k1842 in k1839 in k1836 */
static void C_ccall f_5650(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5650,4,av);}
a=C_alloc(10);
t4=C_i_check_structure_2(t2,lf[3],lf[305]);
t5=C_u_i_s8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5678,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t3;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5659,a[2]=t8,a[3]=t9,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t10;
av2[2]=t8;
av2[3]=lf[305];
tp(4,av2);}}

/* k5657 in a5649 in k1842 in k1839 in k1836 */
static void C_ccall f_5659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5659,2,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[305];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k5676 in a5649 in k1842 in k1839 in k1836 */
static void C_ccall f_5678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5678,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_u8vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("srfi-4"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_srfi_2d4_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1985))){
C_save(t1);
C_rereclaim2(1985*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,307);
lf[0]=C_h_intern(&lf[0],6, C_text("srfi-4"));
lf[1]=C_h_intern(&lf[1],7, C_text("srfi-4#"));
lf[2]=C_h_intern(&lf[2],22, C_text("srfi-4#u8vector-length"));
lf[3]=C_h_intern(&lf[3],8, C_text("u8vector"));
lf[4]=C_h_intern(&lf[4],15, C_text("u8vector-length"));
lf[5]=C_h_intern(&lf[5],22, C_text("srfi-4#s8vector-length"));
lf[6]=C_h_intern(&lf[6],8, C_text("s8vector"));
lf[7]=C_h_intern(&lf[7],15, C_text("s8vector-length"));
lf[8]=C_h_intern(&lf[8],23, C_text("srfi-4#u16vector-length"));
lf[9]=C_h_intern(&lf[9],9, C_text("u16vector"));
lf[10]=C_h_intern(&lf[10],16, C_text("u16vector-length"));
lf[11]=C_h_intern(&lf[11],23, C_text("srfi-4#s16vector-length"));
lf[12]=C_h_intern(&lf[12],9, C_text("s16vector"));
lf[13]=C_h_intern(&lf[13],16, C_text("s16vector-length"));
lf[14]=C_h_intern(&lf[14],23, C_text("srfi-4#u32vector-length"));
lf[15]=C_h_intern(&lf[15],9, C_text("u32vector"));
lf[16]=C_h_intern(&lf[16],16, C_text("u32vector-length"));
lf[17]=C_h_intern(&lf[17],23, C_text("srfi-4#s32vector-length"));
lf[18]=C_h_intern(&lf[18],9, C_text("s32vector"));
lf[19]=C_h_intern(&lf[19],16, C_text("s32vector-length"));
lf[20]=C_h_intern(&lf[20],23, C_text("srfi-4#u64vector-length"));
lf[21]=C_h_intern(&lf[21],9, C_text("u64vector"));
lf[22]=C_h_intern(&lf[22],16, C_text("u64vector-length"));
lf[23]=C_h_intern(&lf[23],23, C_text("srfi-4#s64vector-length"));
lf[24]=C_h_intern(&lf[24],9, C_text("s64vector"));
lf[25]=C_h_intern(&lf[25],16, C_text("s64vector-length"));
lf[26]=C_h_intern(&lf[26],23, C_text("srfi-4#f32vector-length"));
lf[27]=C_h_intern(&lf[27],9, C_text("f32vector"));
lf[28]=C_h_intern(&lf[28],16, C_text("f32vector-length"));
lf[29]=C_h_intern(&lf[29],23, C_text("srfi-4#f64vector-length"));
lf[30]=C_h_intern(&lf[30],9, C_text("f64vector"));
lf[31]=C_h_intern(&lf[31],16, C_text("f64vector-length"));
lf[32]=C_h_intern(&lf[32],20, C_text("srfi-4#u8vector-set!"));
lf[33]=C_h_intern(&lf[33],13, C_text("u8vector-set!"));
lf[34]=C_h_intern(&lf[34],14, C_text("\003syserror-hook"));
lf[35]=C_h_intern(&lf[35],16, C_text("\003syscheck-fixnum"));
lf[36]=C_h_intern(&lf[36],24, C_text("\003syscheck-exact-uinteger"));
lf[37]=C_h_intern(&lf[37],20, C_text("srfi-4#s8vector-set!"));
lf[38]=C_h_intern(&lf[38],13, C_text("s8vector-set!"));
lf[39]=C_h_intern(&lf[39],23, C_text("\003syscheck-exact-integer"));
lf[40]=C_h_intern(&lf[40],21, C_text("srfi-4#u16vector-set!"));
lf[41]=C_h_intern(&lf[41],14, C_text("u16vector-set!"));
lf[42]=C_h_intern(&lf[42],21, C_text("srfi-4#s16vector-set!"));
lf[43]=C_h_intern(&lf[43],14, C_text("s16vector-set!"));
lf[44]=C_h_intern(&lf[44],21, C_text("srfi-4#u32vector-set!"));
lf[45]=C_h_intern(&lf[45],14, C_text("u32vector-set!"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376\302\000\000\011100000000"));
lf[47]=C_h_intern(&lf[47],21, C_text("srfi-4#s32vector-set!"));
lf[48]=C_h_intern(&lf[48],14, C_text("s32vector-set!"));
lf[49]=C_h_intern(&lf[49],21, C_text("srfi-4#u64vector-set!"));
lf[50]=C_h_intern(&lf[50],14, C_text("u64vector-set!"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\302\000\000\02110000000000000000"));
lf[52]=C_h_intern(&lf[52],21, C_text("srfi-4#s64vector-set!"));
lf[53]=C_h_intern(&lf[53],14, C_text("s64vector-set!"));
lf[54]=C_h_intern(&lf[54],21, C_text("srfi-4#f32vector-set!"));
lf[55]=C_h_intern(&lf[55],14, C_text("f32vector-set!"));
lf[56]=C_h_intern(&lf[56],21, C_text("srfi-4#f64vector-set!"));
lf[57]=C_h_intern(&lf[57],14, C_text("f64vector-set!"));
lf[58]=C_h_intern(&lf[58],19, C_text("srfi-4#u8vector-ref"));
lf[59]=C_h_intern(&lf[59],19, C_text("srfi-4#s8vector-ref"));
lf[60]=C_h_intern(&lf[60],20, C_text("srfi-4#u16vector-ref"));
lf[61]=C_h_intern(&lf[61],20, C_text("srfi-4#s16vector-ref"));
lf[62]=C_h_intern(&lf[62],20, C_text("srfi-4#u32vector-ref"));
lf[63]=C_h_intern(&lf[63],20, C_text("srfi-4#s32vector-ref"));
lf[64]=C_h_intern(&lf[64],20, C_text("srfi-4#u64vector-ref"));
lf[65]=C_h_intern(&lf[65],20, C_text("srfi-4#s64vector-ref"));
lf[66]=C_h_intern(&lf[66],20, C_text("srfi-4#f32vector-ref"));
lf[67]=C_h_intern(&lf[67],20, C_text("srfi-4#f64vector-ref"));
lf[68]=C_h_intern(&lf[68],9, C_text("\003syserror"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000:not enough memory - cannot allocate external number vector"));
lf[70]=C_h_intern(&lf[70],19, C_text("\003sysallocate-vector"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000:overflow - cannot allocate the required number of elements"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020size is negative"));
lf[73]=C_h_intern(&lf[73],28, C_text("srfi-4#release-number-vector"));
lf[74]=C_h_intern(&lf[74],21, C_text("release-number-vector"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047bad argument type - not a number vector"));
lf[76]=C_h_intern(&lf[76],21, C_text("srfi-4#number-vector\077"));
lf[77]=C_h_intern(&lf[77],20, C_text("srfi-4#make-u8vector"));
lf[78]=C_h_intern(&lf[78],13, C_text("make-u8vector"));
lf[79]=C_h_intern(&lf[79],25, C_text("chicken.gc#set-finalizer!"));
lf[80]=C_h_intern(&lf[80],20, C_text("srfi-4#make-s8vector"));
lf[81]=C_h_intern(&lf[81],13, C_text("make-s8vector"));
lf[82]=C_h_intern(&lf[82],21, C_text("srfi-4#make-u16vector"));
lf[83]=C_h_intern(&lf[83],14, C_text("make-u16vector"));
lf[84]=C_h_intern(&lf[84],21, C_text("srfi-4#make-s16vector"));
lf[85]=C_h_intern(&lf[85],14, C_text("make-s16vector"));
lf[86]=C_h_intern(&lf[86],21, C_text("srfi-4#make-u32vector"));
lf[87]=C_h_intern(&lf[87],14, C_text("make-u32vector"));
lf[88]=C_h_intern(&lf[88],21, C_text("srfi-4#make-u64vector"));
lf[89]=C_h_intern(&lf[89],14, C_text("make-u64vector"));
lf[90]=C_h_intern(&lf[90],21, C_text("srfi-4#make-s32vector"));
lf[91]=C_h_intern(&lf[91],14, C_text("make-s32vector"));
lf[92]=C_h_intern(&lf[92],21, C_text("srfi-4#make-s64vector"));
lf[93]=C_h_intern(&lf[93],14, C_text("make-s64vector"));
lf[94]=C_h_intern(&lf[94],21, C_text("srfi-4#make-f32vector"));
lf[95]=C_h_intern(&lf[95],14, C_text("make-f32vector"));
lf[96]=C_h_intern(&lf[96],21, C_text("srfi-4#make-f64vector"));
lf[97]=C_h_intern(&lf[97],14, C_text("make-f64vector"));
lf[98]=C_h_intern(&lf[98],21, C_text("srfi-4#list->u8vector"));
lf[99]=C_h_intern(&lf[99],27, C_text("\003syserror-not-a-proper-list"));
lf[100]=C_h_intern(&lf[100],21, C_text("srfi-4#list->s8vector"));
lf[101]=C_h_intern(&lf[101],22, C_text("srfi-4#list->u16vector"));
lf[102]=C_h_intern(&lf[102],22, C_text("srfi-4#list->s16vector"));
lf[103]=C_h_intern(&lf[103],22, C_text("srfi-4#list->u32vector"));
lf[104]=C_h_intern(&lf[104],22, C_text("srfi-4#list->s32vector"));
lf[105]=C_h_intern(&lf[105],22, C_text("srfi-4#list->u64vector"));
lf[107]=C_h_intern(&lf[107],22, C_text("srfi-4#list->f32vector"));
lf[108]=C_h_intern(&lf[108],22, C_text("srfi-4#list->f64vector"));
lf[109]=C_h_intern(&lf[109],15, C_text("srfi-4#u8vector"));
lf[110]=C_h_intern(&lf[110],15, C_text("srfi-4#s8vector"));
lf[111]=C_h_intern(&lf[111],16, C_text("srfi-4#u16vector"));
lf[112]=C_h_intern(&lf[112],16, C_text("srfi-4#s16vector"));
lf[113]=C_h_intern(&lf[113],16, C_text("srfi-4#u32vector"));
lf[114]=C_h_intern(&lf[114],16, C_text("srfi-4#s32vector"));
lf[115]=C_h_intern(&lf[115],16, C_text("srfi-4#u64vector"));
lf[116]=C_h_intern(&lf[116],16, C_text("srfi-4#s64vector"));
lf[117]=C_h_intern(&lf[117],16, C_text("srfi-4#f32vector"));
lf[118]=C_h_intern(&lf[118],16, C_text("srfi-4#f64vector"));
lf[119]=C_h_intern(&lf[119],21, C_text("srfi-4#u8vector->list"));
lf[120]=C_h_intern(&lf[120],14, C_text("u8vector->list"));
lf[121]=C_h_intern(&lf[121],21, C_text("srfi-4#s8vector->list"));
lf[122]=C_h_intern(&lf[122],14, C_text("s8vector->list"));
lf[123]=C_h_intern(&lf[123],22, C_text("srfi-4#u16vector->list"));
lf[124]=C_h_intern(&lf[124],15, C_text("u16vector->list"));
lf[125]=C_h_intern(&lf[125],22, C_text("srfi-4#s16vector->list"));
lf[126]=C_h_intern(&lf[126],15, C_text("s16vector->list"));
lf[127]=C_h_intern(&lf[127],22, C_text("srfi-4#u32vector->list"));
lf[128]=C_h_intern(&lf[128],15, C_text("u32vector->list"));
lf[129]=C_h_intern(&lf[129],22, C_text("srfi-4#s32vector->list"));
lf[130]=C_h_intern(&lf[130],15, C_text("s32vector->list"));
lf[131]=C_h_intern(&lf[131],22, C_text("srfi-4#u64vector->list"));
lf[132]=C_h_intern(&lf[132],15, C_text("u64vector->list"));
lf[133]=C_h_intern(&lf[133],22, C_text("srfi-4#s64vector->list"));
lf[134]=C_h_intern(&lf[134],15, C_text("s64vector->list"));
lf[135]=C_h_intern(&lf[135],22, C_text("srfi-4#f32vector->list"));
lf[136]=C_h_intern(&lf[136],15, C_text("f32vector->list"));
lf[137]=C_h_intern(&lf[137],22, C_text("srfi-4#f64vector->list"));
lf[138]=C_h_intern(&lf[138],15, C_text("f64vector->list"));
lf[139]=C_h_intern(&lf[139],16, C_text("srfi-4#u8vector\077"));
lf[140]=C_h_intern(&lf[140],16, C_text("srfi-4#s8vector\077"));
lf[141]=C_h_intern(&lf[141],17, C_text("srfi-4#u16vector\077"));
lf[142]=C_h_intern(&lf[142],17, C_text("srfi-4#s16vector\077"));
lf[143]=C_h_intern(&lf[143],17, C_text("srfi-4#u32vector\077"));
lf[144]=C_h_intern(&lf[144],17, C_text("srfi-4#s32vector\077"));
lf[145]=C_h_intern(&lf[145],17, C_text("srfi-4#u64vector\077"));
lf[146]=C_h_intern(&lf[146],17, C_text("srfi-4#s64vector\077"));
lf[147]=C_h_intern(&lf[147],17, C_text("srfi-4#f32vector\077"));
lf[148]=C_h_intern(&lf[148],17, C_text("srfi-4#f64vector\077"));
lf[149]=C_h_intern(&lf[149],18, C_text("\003syssrfi-4-vector\077"));
lf[151]=C_h_intern(&lf[151],13, C_text("\003sysmake-blob"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000+blob does not have correct size for packing"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376B\000\000+blob does not have correct size for packing"));
lf[156]=C_h_intern(&lf[156],21, C_text("u8vector->blob/shared"));
lf[157]=C_h_intern(&lf[157],28, C_text("srfi-4#u8vector->blob/shared"));
lf[158]=C_h_intern(&lf[158],21, C_text("s8vector->blob/shared"));
lf[159]=C_h_intern(&lf[159],28, C_text("srfi-4#s8vector->blob/shared"));
lf[160]=C_h_intern(&lf[160],22, C_text("u16vector->blob/shared"));
lf[161]=C_h_intern(&lf[161],29, C_text("srfi-4#u16vector->blob/shared"));
lf[162]=C_h_intern(&lf[162],22, C_text("s16vector->blob/shared"));
lf[163]=C_h_intern(&lf[163],29, C_text("srfi-4#s16vector->blob/shared"));
lf[164]=C_h_intern(&lf[164],22, C_text("u32vector->blob/shared"));
lf[165]=C_h_intern(&lf[165],29, C_text("srfi-4#u32vector->blob/shared"));
lf[166]=C_h_intern(&lf[166],22, C_text("s32vector->blob/shared"));
lf[167]=C_h_intern(&lf[167],29, C_text("srfi-4#s32vector->blob/shared"));
lf[168]=C_h_intern(&lf[168],22, C_text("u64vector->blob/shared"));
lf[169]=C_h_intern(&lf[169],29, C_text("srfi-4#u64vector->blob/shared"));
lf[170]=C_h_intern(&lf[170],22, C_text("s64vector->blob/shared"));
lf[171]=C_h_intern(&lf[171],29, C_text("srfi-4#s64vector->blob/shared"));
lf[172]=C_h_intern(&lf[172],22, C_text("f32vector->blob/shared"));
lf[173]=C_h_intern(&lf[173],29, C_text("srfi-4#f32vector->blob/shared"));
lf[174]=C_h_intern(&lf[174],22, C_text("f64vector->blob/shared"));
lf[175]=C_h_intern(&lf[175],29, C_text("srfi-4#f64vector->blob/shared"));
lf[176]=C_h_intern(&lf[176],21, C_text("srfi-4#u8vector->blob"));
lf[177]=C_h_intern(&lf[177],21, C_text("srfi-4#s8vector->blob"));
lf[178]=C_h_intern(&lf[178],22, C_text("srfi-4#u16vector->blob"));
lf[179]=C_h_intern(&lf[179],22, C_text("srfi-4#s16vector->blob"));
lf[180]=C_h_intern(&lf[180],22, C_text("srfi-4#u32vector->blob"));
lf[181]=C_h_intern(&lf[181],22, C_text("srfi-4#s32vector->blob"));
lf[182]=C_h_intern(&lf[182],22, C_text("srfi-4#u64vector->blob"));
lf[183]=C_h_intern(&lf[183],22, C_text("srfi-4#s64vector->blob"));
lf[184]=C_h_intern(&lf[184],22, C_text("srfi-4#f32vector->blob"));
lf[185]=C_h_intern(&lf[185],22, C_text("srfi-4#f64vector->blob"));
lf[186]=C_h_intern(&lf[186],28, C_text("srfi-4#blob->u8vector/shared"));
lf[187]=C_h_intern(&lf[187],28, C_text("srfi-4#blob->s8vector/shared"));
lf[188]=C_h_intern(&lf[188],29, C_text("srfi-4#blob->u16vector/shared"));
lf[189]=C_h_intern(&lf[189],29, C_text("srfi-4#blob->s16vector/shared"));
lf[190]=C_h_intern(&lf[190],29, C_text("srfi-4#blob->u32vector/shared"));
lf[191]=C_h_intern(&lf[191],29, C_text("srfi-4#blob->s32vector/shared"));
lf[192]=C_h_intern(&lf[192],29, C_text("srfi-4#blob->u64vector/shared"));
lf[193]=C_h_intern(&lf[193],29, C_text("srfi-4#blob->s64vector/shared"));
lf[194]=C_h_intern(&lf[194],29, C_text("srfi-4#blob->f32vector/shared"));
lf[195]=C_h_intern(&lf[195],29, C_text("srfi-4#blob->f64vector/shared"));
lf[196]=C_h_intern(&lf[196],21, C_text("srfi-4#blob->u8vector"));
lf[197]=C_h_intern(&lf[197],21, C_text("srfi-4#blob->s8vector"));
lf[198]=C_h_intern(&lf[198],22, C_text("srfi-4#blob->u16vector"));
lf[199]=C_h_intern(&lf[199],22, C_text("srfi-4#blob->s16vector"));
lf[200]=C_h_intern(&lf[200],22, C_text("srfi-4#blob->u32vector"));
lf[201]=C_h_intern(&lf[201],22, C_text("srfi-4#blob->s32vector"));
lf[202]=C_h_intern(&lf[202],22, C_text("srfi-4#blob->u64vector"));
lf[203]=C_h_intern(&lf[203],22, C_text("srfi-4#blob->s64vector"));
lf[204]=C_h_intern(&lf[204],22, C_text("srfi-4#blob->f32vector"));
lf[205]=C_h_intern(&lf[205],22, C_text("srfi-4#blob->f64vector"));
lf[206]=C_h_intern(&lf[206],18, C_text("\003sysuser-read-hook"));
lf[207]=C_h_intern(&lf[207],2, C_text("u8"));
lf[208]=C_h_intern(&lf[208],2, C_text("s8"));
lf[209]=C_h_intern(&lf[209],3, C_text("u16"));
lf[210]=C_h_intern(&lf[210],3, C_text("s16"));
lf[211]=C_h_intern(&lf[211],3, C_text("u32"));
lf[212]=C_h_intern(&lf[212],3, C_text("s32"));
lf[213]=C_h_intern(&lf[213],3, C_text("u64"));
lf[214]=C_h_intern(&lf[214],3, C_text("s64"));
lf[215]=C_h_intern(&lf[215],3, C_text("f32"));
lf[216]=C_h_intern(&lf[216],3, C_text("f64"));
lf[217]=C_h_intern(&lf[217],1, C_text("f"));
lf[218]=C_h_intern(&lf[218],1, C_text("F"));
lf[219]=C_h_intern(&lf[219],11, C_text("scheme#read"));
lf[220]=C_h_intern(&lf[220],14, C_text("\003sysread-error"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031illegal bytevector syntax"));
lf[222]=C_h_intern(&lf[222],19, C_text("\003sysuser-print-hook"));
lf[223]=C_h_intern(&lf[223],9, C_text("\003sysprint"));
lf[225]=C_h_intern(&lf[225],18, C_text("srfi-4#subu8vector"));
lf[226]=C_h_intern(&lf[226],11, C_text("subu8vector"));
lf[227]=C_h_intern(&lf[227],19, C_text("srfi-4#subu16vector"));
lf[228]=C_h_intern(&lf[228],12, C_text("subu16vector"));
lf[229]=C_h_intern(&lf[229],19, C_text("srfi-4#subu32vector"));
lf[230]=C_h_intern(&lf[230],12, C_text("subu32vector"));
lf[231]=C_h_intern(&lf[231],19, C_text("srfi-4#subu64vector"));
lf[232]=C_h_intern(&lf[232],12, C_text("subu64vector"));
lf[233]=C_h_intern(&lf[233],18, C_text("srfi-4#subs8vector"));
lf[234]=C_h_intern(&lf[234],11, C_text("subs8vector"));
lf[235]=C_h_intern(&lf[235],19, C_text("srfi-4#subs16vector"));
lf[236]=C_h_intern(&lf[236],12, C_text("subs16vector"));
lf[237]=C_h_intern(&lf[237],19, C_text("srfi-4#subs32vector"));
lf[238]=C_h_intern(&lf[238],12, C_text("subs32vector"));
lf[239]=C_h_intern(&lf[239],19, C_text("srfi-4#subs64vector"));
lf[240]=C_h_intern(&lf[240],12, C_text("subs64vector"));
lf[241]=C_h_intern(&lf[241],19, C_text("srfi-4#subf32vector"));
lf[242]=C_h_intern(&lf[242],12, C_text("subf32vector"));
lf[243]=C_h_intern(&lf[243],19, C_text("srfi-4#subf64vector"));
lf[244]=C_h_intern(&lf[244],12, C_text("subf64vector"));
lf[245]=C_h_intern(&lf[245],21, C_text("srfi-4#write-u8vector"));
lf[246]=C_h_intern(&lf[246],19, C_text("\003sysstandard-output"));
lf[247]=C_h_intern(&lf[247],14, C_text("write-u8vector"));
lf[248]=C_h_intern(&lf[248],21, C_text("srfi-4#read-u8vector!"));
lf[249]=C_h_intern(&lf[249],18, C_text("\003sysstandard-input"));
lf[250]=C_h_intern(&lf[250],14, C_text("read-u8vector!"));
lf[251]=C_h_intern(&lf[251],28, C_text("chicken.io#read-string!/port"));
lf[252]=C_h_intern(&lf[252],20, C_text("srfi-4#read-u8vector"));
lf[253]=C_h_intern(&lf[253],13, C_text("read-u8vector"));
lf[254]=C_h_intern(&lf[254],27, C_text("chicken.io#read-string/port"));
lf[255]=C_h_intern(&lf[255],34, C_text("chicken.platform#register-feature!"));
lf[256]=C_h_intern(&lf[256],15, C_text("blob->f64vector"));
lf[257]=C_h_intern(&lf[257],15, C_text("blob->f32vector"));
lf[258]=C_h_intern(&lf[258],15, C_text("blob->s64vector"));
lf[259]=C_h_intern(&lf[259],15, C_text("blob->u64vector"));
lf[260]=C_h_intern(&lf[260],15, C_text("blob->s32vector"));
lf[261]=C_h_intern(&lf[261],15, C_text("blob->u32vector"));
lf[262]=C_h_intern(&lf[262],15, C_text("blob->s16vector"));
lf[263]=C_h_intern(&lf[263],15, C_text("blob->u16vector"));
lf[264]=C_h_intern(&lf[264],14, C_text("blob->s8vector"));
lf[265]=C_h_intern(&lf[265],14, C_text("blob->u8vector"));
lf[266]=C_h_intern(&lf[266],22, C_text("blob->f64vector/shared"));
lf[267]=C_h_intern(&lf[267],22, C_text("blob->f32vector/shared"));
lf[268]=C_h_intern(&lf[268],22, C_text("blob->s64vector/shared"));
lf[269]=C_h_intern(&lf[269],22, C_text("blob->u64vector/shared"));
lf[270]=C_h_intern(&lf[270],22, C_text("blob->s32vector/shared"));
lf[271]=C_h_intern(&lf[271],22, C_text("blob->u32vector/shared"));
lf[272]=C_h_intern(&lf[272],22, C_text("blob->s16vector/shared"));
lf[273]=C_h_intern(&lf[273],22, C_text("blob->u16vector/shared"));
lf[274]=C_h_intern(&lf[274],21, C_text("blob->s8vector/shared"));
lf[275]=C_h_intern(&lf[275],21, C_text("blob->u8vector/shared"));
lf[276]=C_h_intern(&lf[276],15, C_text("f64vector->blob"));
lf[277]=C_h_intern(&lf[277],15, C_text("f32vector->blob"));
lf[278]=C_h_intern(&lf[278],15, C_text("s64vector->blob"));
lf[279]=C_h_intern(&lf[279],15, C_text("u64vector->blob"));
lf[280]=C_h_intern(&lf[280],15, C_text("s32vector->blob"));
lf[281]=C_h_intern(&lf[281],15, C_text("u32vector->blob"));
lf[282]=C_h_intern(&lf[282],15, C_text("s16vector->blob"));
lf[283]=C_h_intern(&lf[283],15, C_text("u16vector->blob"));
lf[284]=C_h_intern(&lf[284],14, C_text("s8vector->blob"));
lf[285]=C_h_intern(&lf[285],14, C_text("u8vector->blob"));
lf[286]=C_h_intern(&lf[286],13, C_text("f64vector-ref"));
lf[287]=C_h_intern(&lf[287],31, C_text("chicken.base#getter-with-setter"));
lf[288]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#f64vector-ref v i)"));
lf[289]=C_h_intern(&lf[289],13, C_text("f32vector-ref"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#f32vector-ref v i)"));
lf[291]=C_h_intern(&lf[291],13, C_text("s64vector-ref"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#s64vector-ref v i)"));
lf[293]=C_h_intern(&lf[293],13, C_text("u64vector-ref"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#u64vector-ref v i)"));
lf[295]=C_h_intern(&lf[295],13, C_text("s32vector-ref"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#s32vector-ref v i)"));
lf[297]=C_h_intern(&lf[297],13, C_text("u32vector-ref"));
lf[298]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#u32vector-ref v i)"));
lf[299]=C_h_intern(&lf[299],13, C_text("s16vector-ref"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#s16vector-ref v i)"));
lf[301]=C_h_intern(&lf[301],13, C_text("u16vector-ref"));
lf[302]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#u16vector-ref v i)"));
lf[303]=C_h_intern(&lf[303],12, C_text("s8vector-ref"));
lf[304]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.srfi-4#s8vector-ref v i)"));
lf[305]=C_h_intern(&lf[305],12, C_text("u8vector-ref"));
lf[306]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.srfi-4#u8vector-ref v i)"));
C_register_lf2(lf,307,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1838,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[350] = {
{C_text("f6457:srfi_2d4_2escm"),(void*)f6457},
{C_text("f6464:srfi_2d4_2escm"),(void*)f6464},
{C_text("f6471:srfi_2d4_2escm"),(void*)f6471},
{C_text("f6478:srfi_2d4_2escm"),(void*)f6478},
{C_text("f6485:srfi_2d4_2escm"),(void*)f6485},
{C_text("f6492:srfi_2d4_2escm"),(void*)f6492},
{C_text("f6499:srfi_2d4_2escm"),(void*)f6499},
{C_text("f6506:srfi_2d4_2escm"),(void*)f6506},
{C_text("f6513:srfi_2d4_2escm"),(void*)f6513},
{C_text("f6520:srfi_2d4_2escm"),(void*)f6520},
{C_text("f_1838:srfi_2d4_2escm"),(void*)f_1838},
{C_text("f_1841:srfi_2d4_2escm"),(void*)f_1841},
{C_text("f_1844:srfi_2d4_2escm"),(void*)f_1844},
{C_text("f_1846:srfi_2d4_2escm"),(void*)f_1846},
{C_text("f_1852:srfi_2d4_2escm"),(void*)f_1852},
{C_text("f_1858:srfi_2d4_2escm"),(void*)f_1858},
{C_text("f_1864:srfi_2d4_2escm"),(void*)f_1864},
{C_text("f_1870:srfi_2d4_2escm"),(void*)f_1870},
{C_text("f_1876:srfi_2d4_2escm"),(void*)f_1876},
{C_text("f_1882:srfi_2d4_2escm"),(void*)f_1882},
{C_text("f_1888:srfi_2d4_2escm"),(void*)f_1888},
{C_text("f_1894:srfi_2d4_2escm"),(void*)f_1894},
{C_text("f_1900:srfi_2d4_2escm"),(void*)f_1900},
{C_text("f_1906:srfi_2d4_2escm"),(void*)f_1906},
{C_text("f_1915:srfi_2d4_2escm"),(void*)f_1915},
{C_text("f_1934:srfi_2d4_2escm"),(void*)f_1934},
{C_text("f_1939:srfi_2d4_2escm"),(void*)f_1939},
{C_text("f_1958:srfi_2d4_2escm"),(void*)f_1958},
{C_text("f_1960:srfi_2d4_2escm"),(void*)f_1960},
{C_text("f_1969:srfi_2d4_2escm"),(void*)f_1969},
{C_text("f_1998:srfi_2d4_2escm"),(void*)f_1998},
{C_text("f_2003:srfi_2d4_2escm"),(void*)f_2003},
{C_text("f_2022:srfi_2d4_2escm"),(void*)f_2022},
{C_text("f_2024:srfi_2d4_2escm"),(void*)f_2024},
{C_text("f_2033:srfi_2d4_2escm"),(void*)f_2033},
{C_text("f_2052:srfi_2d4_2escm"),(void*)f_2052},
{C_text("f_2057:srfi_2d4_2escm"),(void*)f_2057},
{C_text("f_2076:srfi_2d4_2escm"),(void*)f_2076},
{C_text("f_2078:srfi_2d4_2escm"),(void*)f_2078},
{C_text("f_2087:srfi_2d4_2escm"),(void*)f_2087},
{C_text("f_2116:srfi_2d4_2escm"),(void*)f_2116},
{C_text("f_2121:srfi_2d4_2escm"),(void*)f_2121},
{C_text("f_2140:srfi_2d4_2escm"),(void*)f_2140},
{C_text("f_2142:srfi_2d4_2escm"),(void*)f_2142},
{C_text("f_2151:srfi_2d4_2escm"),(void*)f_2151},
{C_text("f_2170:srfi_2d4_2escm"),(void*)f_2170},
{C_text("f_2175:srfi_2d4_2escm"),(void*)f_2175},
{C_text("f_2194:srfi_2d4_2escm"),(void*)f_2194},
{C_text("f_2196:srfi_2d4_2escm"),(void*)f_2196},
{C_text("f_2205:srfi_2d4_2escm"),(void*)f_2205},
{C_text("f_2234:srfi_2d4_2escm"),(void*)f_2234},
{C_text("f_2239:srfi_2d4_2escm"),(void*)f_2239},
{C_text("f_2258:srfi_2d4_2escm"),(void*)f_2258},
{C_text("f_2260:srfi_2d4_2escm"),(void*)f_2260},
{C_text("f_2269:srfi_2d4_2escm"),(void*)f_2269},
{C_text("f_2288:srfi_2d4_2escm"),(void*)f_2288},
{C_text("f_2293:srfi_2d4_2escm"),(void*)f_2293},
{C_text("f_2312:srfi_2d4_2escm"),(void*)f_2312},
{C_text("f_2314:srfi_2d4_2escm"),(void*)f_2314},
{C_text("f_2323:srfi_2d4_2escm"),(void*)f_2323},
{C_text("f_2352:srfi_2d4_2escm"),(void*)f_2352},
{C_text("f_2357:srfi_2d4_2escm"),(void*)f_2357},
{C_text("f_2376:srfi_2d4_2escm"),(void*)f_2376},
{C_text("f_2378:srfi_2d4_2escm"),(void*)f_2378},
{C_text("f_2397:srfi_2d4_2escm"),(void*)f_2397},
{C_text("f_2402:srfi_2d4_2escm"),(void*)f_2402},
{C_text("f_2421:srfi_2d4_2escm"),(void*)f_2421},
{C_text("f_2427:srfi_2d4_2escm"),(void*)f_2427},
{C_text("f_2446:srfi_2d4_2escm"),(void*)f_2446},
{C_text("f_2451:srfi_2d4_2escm"),(void*)f_2451},
{C_text("f_2470:srfi_2d4_2escm"),(void*)f_2470},
{C_text("f_2478:srfi_2d4_2escm"),(void*)f_2478},
{C_text("f_2482:srfi_2d4_2escm"),(void*)f_2482},
{C_text("f_2486:srfi_2d4_2escm"),(void*)f_2486},
{C_text("f_2490:srfi_2d4_2escm"),(void*)f_2490},
{C_text("f_2494:srfi_2d4_2escm"),(void*)f_2494},
{C_text("f_2498:srfi_2d4_2escm"),(void*)f_2498},
{C_text("f_2502:srfi_2d4_2escm"),(void*)f_2502},
{C_text("f_2506:srfi_2d4_2escm"),(void*)f_2506},
{C_text("f_2510:srfi_2d4_2escm"),(void*)f_2510},
{C_text("f_2514:srfi_2d4_2escm"),(void*)f_2514},
{C_text("f_2522:srfi_2d4_2escm"),(void*)f_2522},
{C_text("f_2524:srfi_2d4_2escm"),(void*)f_2524},
{C_text("f_2528:srfi_2d4_2escm"),(void*)f_2528},
{C_text("f_2531:srfi_2d4_2escm"),(void*)f_2531},
{C_text("f_2537:srfi_2d4_2escm"),(void*)f_2537},
{C_text("f_2552:srfi_2d4_2escm"),(void*)f_2552},
{C_text("f_2563:srfi_2d4_2escm"),(void*)f_2563},
{C_text("f_2570:srfi_2d4_2escm"),(void*)f_2570},
{C_text("f_2578:srfi_2d4_2escm"),(void*)f_2578},
{C_text("f_2603:srfi_2d4_2escm"),(void*)f_2603},
{C_text("f_2614:srfi_2d4_2escm"),(void*)f_2614},
{C_text("f_2633:srfi_2d4_2escm"),(void*)f_2633},
{C_text("f_2638:srfi_2d4_2escm"),(void*)f_2638},
{C_text("f_2656:srfi_2d4_2escm"),(void*)f_2656},
{C_text("f_2694:srfi_2d4_2escm"),(void*)f_2694},
{C_text("f_2719:srfi_2d4_2escm"),(void*)f_2719},
{C_text("f_2730:srfi_2d4_2escm"),(void*)f_2730},
{C_text("f_2749:srfi_2d4_2escm"),(void*)f_2749},
{C_text("f_2754:srfi_2d4_2escm"),(void*)f_2754},
{C_text("f_2772:srfi_2d4_2escm"),(void*)f_2772},
{C_text("f_2810:srfi_2d4_2escm"),(void*)f_2810},
{C_text("f_2835:srfi_2d4_2escm"),(void*)f_2835},
{C_text("f_2846:srfi_2d4_2escm"),(void*)f_2846},
{C_text("f_2865:srfi_2d4_2escm"),(void*)f_2865},
{C_text("f_2870:srfi_2d4_2escm"),(void*)f_2870},
{C_text("f_2888:srfi_2d4_2escm"),(void*)f_2888},
{C_text("f_2926:srfi_2d4_2escm"),(void*)f_2926},
{C_text("f_2951:srfi_2d4_2escm"),(void*)f_2951},
{C_text("f_2962:srfi_2d4_2escm"),(void*)f_2962},
{C_text("f_2991:srfi_2d4_2escm"),(void*)f_2991},
{C_text("f_2996:srfi_2d4_2escm"),(void*)f_2996},
{C_text("f_3014:srfi_2d4_2escm"),(void*)f_3014},
{C_text("f_3052:srfi_2d4_2escm"),(void*)f_3052},
{C_text("f_3077:srfi_2d4_2escm"),(void*)f_3077},
{C_text("f_3088:srfi_2d4_2escm"),(void*)f_3088},
{C_text("f_3107:srfi_2d4_2escm"),(void*)f_3107},
{C_text("f_3112:srfi_2d4_2escm"),(void*)f_3112},
{C_text("f_3130:srfi_2d4_2escm"),(void*)f_3130},
{C_text("f_3168:srfi_2d4_2escm"),(void*)f_3168},
{C_text("f_3193:srfi_2d4_2escm"),(void*)f_3193},
{C_text("f_3204:srfi_2d4_2escm"),(void*)f_3204},
{C_text("f_3223:srfi_2d4_2escm"),(void*)f_3223},
{C_text("f_3228:srfi_2d4_2escm"),(void*)f_3228},
{C_text("f_3246:srfi_2d4_2escm"),(void*)f_3246},
{C_text("f_3284:srfi_2d4_2escm"),(void*)f_3284},
{C_text("f_3309:srfi_2d4_2escm"),(void*)f_3309},
{C_text("f_3320:srfi_2d4_2escm"),(void*)f_3320},
{C_text("f_3349:srfi_2d4_2escm"),(void*)f_3349},
{C_text("f_3354:srfi_2d4_2escm"),(void*)f_3354},
{C_text("f_3372:srfi_2d4_2escm"),(void*)f_3372},
{C_text("f_3410:srfi_2d4_2escm"),(void*)f_3410},
{C_text("f_3435:srfi_2d4_2escm"),(void*)f_3435},
{C_text("f_3446:srfi_2d4_2escm"),(void*)f_3446},
{C_text("f_3475:srfi_2d4_2escm"),(void*)f_3475},
{C_text("f_3480:srfi_2d4_2escm"),(void*)f_3480},
{C_text("f_3498:srfi_2d4_2escm"),(void*)f_3498},
{C_text("f_3536:srfi_2d4_2escm"),(void*)f_3536},
{C_text("f_3561:srfi_2d4_2escm"),(void*)f_3561},
{C_text("f_3582:srfi_2d4_2escm"),(void*)f_3582},
{C_text("f_3585:srfi_2d4_2escm"),(void*)f_3585},
{C_text("f_3590:srfi_2d4_2escm"),(void*)f_3590},
{C_text("f_3609:srfi_2d4_2escm"),(void*)f_3609},
{C_text("f_3647:srfi_2d4_2escm"),(void*)f_3647},
{C_text("f_3672:srfi_2d4_2escm"),(void*)f_3672},
{C_text("f_3693:srfi_2d4_2escm"),(void*)f_3693},
{C_text("f_3696:srfi_2d4_2escm"),(void*)f_3696},
{C_text("f_3701:srfi_2d4_2escm"),(void*)f_3701},
{C_text("f_3720:srfi_2d4_2escm"),(void*)f_3720},
{C_text("f_3758:srfi_2d4_2escm"),(void*)f_3758},
{C_text("f_3765:srfi_2d4_2escm"),(void*)f_3765},
{C_text("f_3770:srfi_2d4_2escm"),(void*)f_3770},
{C_text("f_3777:srfi_2d4_2escm"),(void*)f_3777},
{C_text("f_3794:srfi_2d4_2escm"),(void*)f_3794},
{C_text("f_3801:srfi_2d4_2escm"),(void*)f_3801},
{C_text("f_3806:srfi_2d4_2escm"),(void*)f_3806},
{C_text("f_3813:srfi_2d4_2escm"),(void*)f_3813},
{C_text("f_3830:srfi_2d4_2escm"),(void*)f_3830},
{C_text("f_3837:srfi_2d4_2escm"),(void*)f_3837},
{C_text("f_3842:srfi_2d4_2escm"),(void*)f_3842},
{C_text("f_3849:srfi_2d4_2escm"),(void*)f_3849},
{C_text("f_3866:srfi_2d4_2escm"),(void*)f_3866},
{C_text("f_3873:srfi_2d4_2escm"),(void*)f_3873},
{C_text("f_3878:srfi_2d4_2escm"),(void*)f_3878},
{C_text("f_3885:srfi_2d4_2escm"),(void*)f_3885},
{C_text("f_3902:srfi_2d4_2escm"),(void*)f_3902},
{C_text("f_3909:srfi_2d4_2escm"),(void*)f_3909},
{C_text("f_3914:srfi_2d4_2escm"),(void*)f_3914},
{C_text("f_3921:srfi_2d4_2escm"),(void*)f_3921},
{C_text("f_3938:srfi_2d4_2escm"),(void*)f_3938},
{C_text("f_3945:srfi_2d4_2escm"),(void*)f_3945},
{C_text("f_3950:srfi_2d4_2escm"),(void*)f_3950},
{C_text("f_3957:srfi_2d4_2escm"),(void*)f_3957},
{C_text("f_3974:srfi_2d4_2escm"),(void*)f_3974},
{C_text("f_3981:srfi_2d4_2escm"),(void*)f_3981},
{C_text("f_3986:srfi_2d4_2escm"),(void*)f_3986},
{C_text("f_3993:srfi_2d4_2escm"),(void*)f_3993},
{C_text("f_4010:srfi_2d4_2escm"),(void*)f_4010},
{C_text("f_4017:srfi_2d4_2escm"),(void*)f_4017},
{C_text("f_4022:srfi_2d4_2escm"),(void*)f_4022},
{C_text("f_4029:srfi_2d4_2escm"),(void*)f_4029},
{C_text("f_4046:srfi_2d4_2escm"),(void*)f_4046},
{C_text("f_4053:srfi_2d4_2escm"),(void*)f_4053},
{C_text("f_4058:srfi_2d4_2escm"),(void*)f_4058},
{C_text("f_4065:srfi_2d4_2escm"),(void*)f_4065},
{C_text("f_4082:srfi_2d4_2escm"),(void*)f_4082},
{C_text("f_4089:srfi_2d4_2escm"),(void*)f_4089},
{C_text("f_4094:srfi_2d4_2escm"),(void*)f_4094},
{C_text("f_4101:srfi_2d4_2escm"),(void*)f_4101},
{C_text("f_4118:srfi_2d4_2escm"),(void*)f_4118},
{C_text("f_4124:srfi_2d4_2escm"),(void*)f_4124},
{C_text("f_4130:srfi_2d4_2escm"),(void*)f_4130},
{C_text("f_4136:srfi_2d4_2escm"),(void*)f_4136},
{C_text("f_4142:srfi_2d4_2escm"),(void*)f_4142},
{C_text("f_4148:srfi_2d4_2escm"),(void*)f_4148},
{C_text("f_4154:srfi_2d4_2escm"),(void*)f_4154},
{C_text("f_4160:srfi_2d4_2escm"),(void*)f_4160},
{C_text("f_4166:srfi_2d4_2escm"),(void*)f_4166},
{C_text("f_4172:srfi_2d4_2escm"),(void*)f_4172},
{C_text("f_4178:srfi_2d4_2escm"),(void*)f_4178},
{C_text("f_4187:srfi_2d4_2escm"),(void*)f_4187},
{C_text("f_4202:srfi_2d4_2escm"),(void*)f_4202},
{C_text("f_4208:srfi_2d4_2escm"),(void*)f_4208},
{C_text("f_4217:srfi_2d4_2escm"),(void*)f_4217},
{C_text("f_4232:srfi_2d4_2escm"),(void*)f_4232},
{C_text("f_4238:srfi_2d4_2escm"),(void*)f_4238},
{C_text("f_4247:srfi_2d4_2escm"),(void*)f_4247},
{C_text("f_4262:srfi_2d4_2escm"),(void*)f_4262},
{C_text("f_4268:srfi_2d4_2escm"),(void*)f_4268},
{C_text("f_4277:srfi_2d4_2escm"),(void*)f_4277},
{C_text("f_4292:srfi_2d4_2escm"),(void*)f_4292},
{C_text("f_4298:srfi_2d4_2escm"),(void*)f_4298},
{C_text("f_4307:srfi_2d4_2escm"),(void*)f_4307},
{C_text("f_4321:srfi_2d4_2escm"),(void*)f_4321},
{C_text("f_4327:srfi_2d4_2escm"),(void*)f_4327},
{C_text("f_4336:srfi_2d4_2escm"),(void*)f_4336},
{C_text("f_4350:srfi_2d4_2escm"),(void*)f_4350},
{C_text("f_4356:srfi_2d4_2escm"),(void*)f_4356},
{C_text("f_4365:srfi_2d4_2escm"),(void*)f_4365},
{C_text("f_4379:srfi_2d4_2escm"),(void*)f_4379},
{C_text("f_4385:srfi_2d4_2escm"),(void*)f_4385},
{C_text("f_4394:srfi_2d4_2escm"),(void*)f_4394},
{C_text("f_4408:srfi_2d4_2escm"),(void*)f_4408},
{C_text("f_4414:srfi_2d4_2escm"),(void*)f_4414},
{C_text("f_4423:srfi_2d4_2escm"),(void*)f_4423},
{C_text("f_4437:srfi_2d4_2escm"),(void*)f_4437},
{C_text("f_4443:srfi_2d4_2escm"),(void*)f_4443},
{C_text("f_4452:srfi_2d4_2escm"),(void*)f_4452},
{C_text("f_4466:srfi_2d4_2escm"),(void*)f_4466},
{C_text("f_4472:srfi_2d4_2escm"),(void*)f_4472},
{C_text("f_4478:srfi_2d4_2escm"),(void*)f_4478},
{C_text("f_4484:srfi_2d4_2escm"),(void*)f_4484},
{C_text("f_4490:srfi_2d4_2escm"),(void*)f_4490},
{C_text("f_4496:srfi_2d4_2escm"),(void*)f_4496},
{C_text("f_4502:srfi_2d4_2escm"),(void*)f_4502},
{C_text("f_4508:srfi_2d4_2escm"),(void*)f_4508},
{C_text("f_4514:srfi_2d4_2escm"),(void*)f_4514},
{C_text("f_4520:srfi_2d4_2escm"),(void*)f_4520},
{C_text("f_4526:srfi_2d4_2escm"),(void*)f_4526},
{C_text("f_4544:srfi_2d4_2escm"),(void*)f_4544},
{C_text("f_4546:srfi_2d4_2escm"),(void*)f_4546},
{C_text("f_4556:srfi_2d4_2escm"),(void*)f_4556},
{C_text("f_4562:srfi_2d4_2escm"),(void*)f_4562},
{C_text("f_4564:srfi_2d4_2escm"),(void*)f_4564},
{C_text("f_4580:srfi_2d4_2escm"),(void*)f_4580},
{C_text("f_4592:srfi_2d4_2escm"),(void*)f_4592},
{C_text("f_4594:srfi_2d4_2escm"),(void*)f_4594},
{C_text("f_4604:srfi_2d4_2escm"),(void*)f_4604},
{C_text("f_4613:srfi_2d4_2escm"),(void*)f_4613},
{C_text("f_4668:srfi_2d4_2escm"),(void*)f_4668},
{C_text("f_4672:srfi_2d4_2escm"),(void*)f_4672},
{C_text("f_4676:srfi_2d4_2escm"),(void*)f_4676},
{C_text("f_4680:srfi_2d4_2escm"),(void*)f_4680},
{C_text("f_4684:srfi_2d4_2escm"),(void*)f_4684},
{C_text("f_4688:srfi_2d4_2escm"),(void*)f_4688},
{C_text("f_4692:srfi_2d4_2escm"),(void*)f_4692},
{C_text("f_4696:srfi_2d4_2escm"),(void*)f_4696},
{C_text("f_4700:srfi_2d4_2escm"),(void*)f_4700},
{C_text("f_4704:srfi_2d4_2escm"),(void*)f_4704},
{C_text("f_4708:srfi_2d4_2escm"),(void*)f_4708},
{C_text("f_4712:srfi_2d4_2escm"),(void*)f_4712},
{C_text("f_4716:srfi_2d4_2escm"),(void*)f_4716},
{C_text("f_4720:srfi_2d4_2escm"),(void*)f_4720},
{C_text("f_4724:srfi_2d4_2escm"),(void*)f_4724},
{C_text("f_4728:srfi_2d4_2escm"),(void*)f_4728},
{C_text("f_4732:srfi_2d4_2escm"),(void*)f_4732},
{C_text("f_4736:srfi_2d4_2escm"),(void*)f_4736},
{C_text("f_4740:srfi_2d4_2escm"),(void*)f_4740},
{C_text("f_4744:srfi_2d4_2escm"),(void*)f_4744},
{C_text("f_4748:srfi_2d4_2escm"),(void*)f_4748},
{C_text("f_4752:srfi_2d4_2escm"),(void*)f_4752},
{C_text("f_4756:srfi_2d4_2escm"),(void*)f_4756},
{C_text("f_4760:srfi_2d4_2escm"),(void*)f_4760},
{C_text("f_4764:srfi_2d4_2escm"),(void*)f_4764},
{C_text("f_4768:srfi_2d4_2escm"),(void*)f_4768},
{C_text("f_4772:srfi_2d4_2escm"),(void*)f_4772},
{C_text("f_4776:srfi_2d4_2escm"),(void*)f_4776},
{C_text("f_4780:srfi_2d4_2escm"),(void*)f_4780},
{C_text("f_4784:srfi_2d4_2escm"),(void*)f_4784},
{C_text("f_4789:srfi_2d4_2escm"),(void*)f_4789},
{C_text("f_4798:srfi_2d4_2escm"),(void*)f_4798},
{C_text("f_4817:srfi_2d4_2escm"),(void*)f_4817},
{C_text("f_4828:srfi_2d4_2escm"),(void*)f_4828},
{C_text("f_4849:srfi_2d4_2escm"),(void*)f_4849},
{C_text("f_4861:srfi_2d4_2escm"),(void*)f_4861},
{C_text("f_4864:srfi_2d4_2escm"),(void*)f_4864},
{C_text("f_4874:srfi_2d4_2escm"),(void*)f_4874},
{C_text("f_4923:srfi_2d4_2escm"),(void*)f_4923},
{C_text("f_4938:srfi_2d4_2escm"),(void*)f_4938},
{C_text("f_4957:srfi_2d4_2escm"),(void*)f_4957},
{C_text("f_4962:srfi_2d4_2escm"),(void*)f_4962},
{C_text("f_4981:srfi_2d4_2escm"),(void*)f_4981},
{C_text("f_4987:srfi_2d4_2escm"),(void*)f_4987},
{C_text("f_5008:srfi_2d4_2escm"),(void*)f_5008},
{C_text("f_5014:srfi_2d4_2escm"),(void*)f_5014},
{C_text("f_5020:srfi_2d4_2escm"),(void*)f_5020},
{C_text("f_5026:srfi_2d4_2escm"),(void*)f_5026},
{C_text("f_5032:srfi_2d4_2escm"),(void*)f_5032},
{C_text("f_5038:srfi_2d4_2escm"),(void*)f_5038},
{C_text("f_5044:srfi_2d4_2escm"),(void*)f_5044},
{C_text("f_5050:srfi_2d4_2escm"),(void*)f_5050},
{C_text("f_5056:srfi_2d4_2escm"),(void*)f_5056},
{C_text("f_5062:srfi_2d4_2escm"),(void*)f_5062},
{C_text("f_5068:srfi_2d4_2escm"),(void*)f_5068},
{C_text("f_5098:srfi_2d4_2escm"),(void*)f_5098},
{C_text("f_5117:srfi_2d4_2escm"),(void*)f_5117},
{C_text("f_5120:srfi_2d4_2escm"),(void*)f_5120},
{C_text("f_5133:srfi_2d4_2escm"),(void*)f_5133},
{C_text("f_5143:srfi_2d4_2escm"),(void*)f_5143},
{C_text("f_5168:srfi_2d4_2escm"),(void*)f_5168},
{C_text("f_5237:srfi_2d4_2escm"),(void*)f_5237},
{C_text("f_5256:srfi_2d4_2escm"),(void*)f_5256},
{C_text("f_5262:srfi_2d4_2escm"),(void*)f_5262},
{C_text("f_5277:srfi_2d4_2escm"),(void*)f_5277},
{C_text("f_5317:srfi_2d4_2escm"),(void*)f_5317},
{C_text("f_5336:srfi_2d4_2escm"),(void*)f_5336},
{C_text("f_5339:srfi_2d4_2escm"),(void*)f_5339},
{C_text("f_5378:srfi_2d4_2escm"),(void*)f_5378},
{C_text("f_5380:srfi_2d4_2escm"),(void*)f_5380},
{C_text("f_5389:srfi_2d4_2escm"),(void*)f_5389},
{C_text("f_5408:srfi_2d4_2escm"),(void*)f_5408},
{C_text("f_5410:srfi_2d4_2escm"),(void*)f_5410},
{C_text("f_5419:srfi_2d4_2escm"),(void*)f_5419},
{C_text("f_5438:srfi_2d4_2escm"),(void*)f_5438},
{C_text("f_5440:srfi_2d4_2escm"),(void*)f_5440},
{C_text("f_5449:srfi_2d4_2escm"),(void*)f_5449},
{C_text("f_5468:srfi_2d4_2escm"),(void*)f_5468},
{C_text("f_5470:srfi_2d4_2escm"),(void*)f_5470},
{C_text("f_5479:srfi_2d4_2escm"),(void*)f_5479},
{C_text("f_5498:srfi_2d4_2escm"),(void*)f_5498},
{C_text("f_5500:srfi_2d4_2escm"),(void*)f_5500},
{C_text("f_5509:srfi_2d4_2escm"),(void*)f_5509},
{C_text("f_5528:srfi_2d4_2escm"),(void*)f_5528},
{C_text("f_5530:srfi_2d4_2escm"),(void*)f_5530},
{C_text("f_5539:srfi_2d4_2escm"),(void*)f_5539},
{C_text("f_5558:srfi_2d4_2escm"),(void*)f_5558},
{C_text("f_5560:srfi_2d4_2escm"),(void*)f_5560},
{C_text("f_5569:srfi_2d4_2escm"),(void*)f_5569},
{C_text("f_5588:srfi_2d4_2escm"),(void*)f_5588},
{C_text("f_5590:srfi_2d4_2escm"),(void*)f_5590},
{C_text("f_5599:srfi_2d4_2escm"),(void*)f_5599},
{C_text("f_5618:srfi_2d4_2escm"),(void*)f_5618},
{C_text("f_5620:srfi_2d4_2escm"),(void*)f_5620},
{C_text("f_5629:srfi_2d4_2escm"),(void*)f_5629},
{C_text("f_5648:srfi_2d4_2escm"),(void*)f_5648},
{C_text("f_5650:srfi_2d4_2escm"),(void*)f_5650},
{C_text("f_5659:srfi_2d4_2escm"),(void*)f_5659},
{C_text("f_5678:srfi_2d4_2escm"),(void*)f_5678},
{C_text("toplevel:srfi_2d4_2escm"),(void*)C_srfi_2d4_toplevel},
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
o|hiding unexported module binding: srfi-4#d 
o|hiding unexported module binding: srfi-4#define-alias 
o|hiding unexported module binding: srfi-4#list->NNNvector 
o|hiding unexported module binding: srfi-4#list->s64vector 
o|hiding unexported module binding: srfi-4#NNNvector->list 
o|hiding unexported module binding: srfi-4#pack 
o|hiding unexported module binding: srfi-4#pack-copy 
o|hiding unexported module binding: srfi-4#unpack 
o|hiding unexported module binding: srfi-4#unpack-copy 
o|hiding unexported module binding: srfi-4#subnvector 
o|eliminated procedure checks: 42 
o|specializations:
o|  2 (##sys#check-input-port * * *)
o|  1 (##sys#check-output-port * * *)
o|  1 (scheme#assq * (list-of pair))
o|  1 (scheme#memq * list)
o|  7 (chicken.base#sub1 *)
o|  7 (scheme#- *)
o|  16 (chicken.bitwise#integer-length *)
(o e)|safe calls: 511 
(o e)|assignments to immediate values: 1 
o|dropping redundant toplevel assignment: srfi-4#release-number-vector 
o|dropping redundant toplevel assignment: srfi-4#make-u8vector 
o|dropping redundant toplevel assignment: srfi-4#make-s8vector 
o|dropping redundant toplevel assignment: srfi-4#make-u16vector 
o|dropping redundant toplevel assignment: srfi-4#make-s16vector 
o|dropping redundant toplevel assignment: srfi-4#make-u32vector 
o|dropping redundant toplevel assignment: srfi-4#make-u64vector 
o|dropping redundant toplevel assignment: srfi-4#make-s32vector 
o|dropping redundant toplevel assignment: srfi-4#make-s64vector 
o|dropping redundant toplevel assignment: srfi-4#make-f32vector 
o|dropping redundant toplevel assignment: srfi-4#make-f64vector 
o|safe globals: (srfi-4#f64vector-set! srfi-4#f32vector-set! srfi-4#s64vector-set! srfi-4#u64vector-set! srfi-4#s32vector-set! srfi-4#u32vector-set! srfi-4#s16vector-set! srfi-4#u16vector-set! srfi-4#s8vector-set! srfi-4#u8vector-set! srfi-4#f64vector-length srfi-4#f32vector-length srfi-4#s64vector-length srfi-4#u64vector-length srfi-4#s32vector-length srfi-4#u32vector-length srfi-4#s16vector-length srfi-4#u16vector-length srfi-4#s8vector-length srfi-4#u8vector-length) 
o|contracted procedure: "(srfi-4.scm:171) g155156" 
o|inlining procedure: k1940 
o|inlining procedure: k1940 
o|contracted procedure: "(srfi-4.scm:170) g148149" 
o|inlining procedure: k1916 
o|inlining procedure: k1916 
o|contracted procedure: "(srfi-4.scm:178) g179180" 
o|inlining procedure: k2004 
o|inlining procedure: k2004 
o|contracted procedure: "(srfi-4.scm:177) g172173" 
o|inlining procedure: k1970 
o|inlining procedure: k1970 
o|contracted procedure: "(srfi-4.scm:185) g203204" 
o|inlining procedure: k2058 
o|inlining procedure: k2058 
o|contracted procedure: "(srfi-4.scm:184) g196197" 
o|inlining procedure: k2034 
o|inlining procedure: k2034 
o|contracted procedure: "(srfi-4.scm:192) g227228" 
o|inlining procedure: k2122 
o|inlining procedure: k2122 
o|contracted procedure: "(srfi-4.scm:191) g220221" 
o|inlining procedure: k2088 
o|inlining procedure: k2088 
o|contracted procedure: "(srfi-4.scm:199) g251252" 
o|inlining procedure: k2176 
o|inlining procedure: k2176 
o|contracted procedure: "(srfi-4.scm:198) g244245" 
o|inlining procedure: k2152 
o|inlining procedure: k2152 
o|contracted procedure: "(srfi-4.scm:206) g275276" 
o|inlining procedure: k2240 
o|inlining procedure: k2240 
o|contracted procedure: "(srfi-4.scm:205) g268269" 
o|inlining procedure: k2206 
o|inlining procedure: k2206 
o|contracted procedure: "(srfi-4.scm:213) g299300" 
o|inlining procedure: k2294 
o|inlining procedure: k2294 
o|contracted procedure: "(srfi-4.scm:212) g292293" 
o|inlining procedure: k2270 
o|inlining procedure: k2270 
o|contracted procedure: "(srfi-4.scm:220) g323324" 
o|inlining procedure: k2358 
o|inlining procedure: k2358 
o|contracted procedure: "(srfi-4.scm:219) g316317" 
o|inlining procedure: k2324 
o|inlining procedure: k2324 
o|inlining procedure: k2423 
o|inlining procedure: k2423 
o|contracted procedure: "(srfi-4.scm:227) g348349" 
o|inlining procedure: k2403 
o|inlining procedure: k2403 
o|contracted procedure: "(srfi-4.scm:226) g340341" 
o|inlining procedure: k2385 
o|inlining procedure: k2385 
o|inlining procedure: k2472 
o|inlining procedure: k2472 
o|contracted procedure: "(srfi-4.scm:239) g373374" 
o|inlining procedure: k2452 
o|inlining procedure: k2452 
o|contracted procedure: "(srfi-4.scm:238) g365366" 
o|inlining procedure: k2434 
o|inlining procedure: k2434 
o|inlining procedure: k2538 
o|contracted procedure: "(srfi-4.scm:379) ext-alloc546" 
o|inlining procedure: k2538 
o|inlining procedure: k2565 
o|inlining procedure: "(srfi-4.scm:389) ext-free552" 
o|inlining procedure: k2565 
o|inlining procedure: k2604 
o|inlining procedure: k2604 
o|inlining procedure: k2640 
o|inlining procedure: k2640 
o|contracted procedure: "(srfi-4.scm:399) g593594" 
o|inlining procedure: k2615 
o|inlining procedure: k2615 
o|inlining procedure: k2720 
o|inlining procedure: k2720 
o|inlining procedure: k2756 
o|inlining procedure: k2756 
o|contracted procedure: "(srfi-4.scm:411) g627628" 
o|inlining procedure: k2731 
o|inlining procedure: k2731 
o|inlining procedure: k2836 
o|inlining procedure: k2836 
o|inlining procedure: k2872 
o|inlining procedure: k2872 
o|contracted procedure: "(srfi-4.scm:423) g661662" 
o|inlining procedure: k2847 
o|inlining procedure: k2847 
o|inlining procedure: k2952 
o|inlining procedure: k2952 
o|inlining procedure: k2998 
o|inlining procedure: k2998 
o|contracted procedure: "(srfi-4.scm:435) g695696" 
o|inlining procedure: k2963 
o|inlining procedure: k2963 
o|inlining procedure: k3078 
o|inlining procedure: k3078 
o|inlining procedure: k3114 
o|inlining procedure: k3114 
o|contracted procedure: "(srfi-4.scm:447) g729730" 
o|inlining procedure: k3089 
o|inlining procedure: k3089 
o|inlining procedure: k3194 
o|inlining procedure: k3194 
o|inlining procedure: k3230 
o|inlining procedure: k3230 
o|contracted procedure: "(srfi-4.scm:459) g763764" 
o|inlining procedure: k3205 
o|inlining procedure: k3205 
o|inlining procedure: k3310 
o|inlining procedure: k3310 
o|inlining procedure: k3356 
o|inlining procedure: k3356 
o|contracted procedure: "(srfi-4.scm:471) g797798" 
o|inlining procedure: k3321 
o|inlining procedure: k3321 
o|inlining procedure: k3436 
o|inlining procedure: k3436 
o|inlining procedure: k3482 
o|inlining procedure: k3482 
o|contracted procedure: "(srfi-4.scm:483) g831832" 
o|inlining procedure: k3447 
o|inlining procedure: k3447 
o|inlining procedure: k3562 
o|inlining procedure: k3562 
o|inlining procedure: k3592 
o|inlining procedure: k3592 
o|contracted procedure: "(srfi-4.scm:495) g865866" 
o|inlining procedure: k3570 
o|inlining procedure: k3570 
o|inlining procedure: k3673 
o|inlining procedure: k3673 
o|inlining procedure: k3703 
o|inlining procedure: k3703 
o|contracted procedure: "(srfi-4.scm:509) g901902" 
o|inlining procedure: k3681 
o|inlining procedure: k3681 
o|inlining procedure: k3772 
o|inlining procedure: k3772 
o|inlining procedure: k3808 
o|inlining procedure: k3808 
o|inlining procedure: k3844 
o|inlining procedure: k3844 
o|inlining procedure: k3880 
o|inlining procedure: k3880 
o|inlining procedure: k3916 
o|inlining procedure: k3916 
o|inlining procedure: k3952 
o|inlining procedure: k3952 
o|inlining procedure: k3988 
o|inlining procedure: k3988 
o|inlining procedure: k4024 
o|inlining procedure: k4024 
o|inlining procedure: k4060 
o|inlining procedure: k4060 
o|inlining procedure: k4096 
o|inlining procedure: k4096 
o|inlining procedure: k4189 
o|inlining procedure: k4189 
o|inlining procedure: k4219 
o|inlining procedure: k4219 
o|inlining procedure: k4249 
o|inlining procedure: k4249 
o|inlining procedure: k4279 
o|inlining procedure: k4279 
o|inlining procedure: k4309 
o|inlining procedure: k4309 
o|inlining procedure: k4338 
o|inlining procedure: k4338 
o|inlining procedure: k4367 
o|inlining procedure: k4367 
o|inlining procedure: k4396 
o|inlining procedure: k4396 
o|inlining procedure: k4425 
o|inlining procedure: k4425 
o|inlining procedure: k4454 
o|inlining procedure: k4454 
o|inlining procedure: k4572 
o|inlining procedure: k4572 
o|inlining procedure: k4605 
o|inlining procedure: k4605 
o|substituted constant variable: a4795 
o|inlining procedure: k4791 
o|inlining procedure: k4814 
o|inlining procedure: k4814 
o|inlining procedure: k4791 
o|inlining procedure: k4856 
o|inlining procedure: k4856 
o|contracted procedure: "(srfi-4.scm:770) g13261327" 
o|inlining procedure: k4963 
o|inlining procedure: k4963 
o|contracted procedure: "(srfi-4.scm:769) g13171318" 
o|inlining procedure: k4939 
o|inlining procedure: k4939 
o|substituted constant variable: a5092 
o|substituted constant variable: a5093 
o|inlining procedure: k5128 
o|inlining procedure: k5128 
o|inlining procedure: k5145 
o|inlining procedure: k5145 
o|inlining procedure: k5154 
o|inlining procedure: k5154 
o|contracted procedure: "(srfi-4.scm:794) g14151416" 
o|inlining procedure: k5169 
o|inlining procedure: k5169 
o|contracted procedure: "(srfi-4.scm:793) g14031404" 
o|inlining procedure: k5099 
o|inlining procedure: k5099 
o|inlining procedure: k5197 
o|inlining procedure: k5197 
o|substituted constant variable: a5252 
o|substituted constant variable: a5253 
o|substituted constant variable: a5332 
o|substituted constant variable: a5333 
o|inlining procedure: k5340 
o|inlining procedure: k5340 
o|contracted procedure: "(srfi-4.scm:342) g524525" 
o|inlining procedure: k5390 
o|inlining procedure: k5390 
o|contracted procedure: "(srfi-4.scm:332) g509510" 
o|inlining procedure: k5420 
o|inlining procedure: k5420 
o|contracted procedure: "(srfi-4.scm:322) g494495" 
o|inlining procedure: k5450 
o|inlining procedure: k5450 
o|contracted procedure: "(srfi-4.scm:312) g479480" 
o|inlining procedure: k5480 
o|inlining procedure: k5480 
o|contracted procedure: "(srfi-4.scm:302) g464465" 
o|inlining procedure: k5510 
o|inlining procedure: k5510 
o|contracted procedure: "(srfi-4.scm:292) g449450" 
o|inlining procedure: k5540 
o|inlining procedure: k5540 
o|contracted procedure: "(srfi-4.scm:282) g434435" 
o|inlining procedure: k5570 
o|inlining procedure: k5570 
o|contracted procedure: "(srfi-4.scm:272) g419420" 
o|inlining procedure: k5600 
o|inlining procedure: k5600 
o|contracted procedure: "(srfi-4.scm:262) g404405" 
o|inlining procedure: k5630 
o|inlining procedure: k5630 
o|contracted procedure: "(srfi-4.scm:252) g389390" 
o|inlining procedure: k5660 
o|inlining procedure: k5660 
o|simplifications: ((if . 1)) 
o|replaced variables: 406 
o|removed binding forms: 417 
o|substituted constant variable: loc160 
o|substituted constant variable: from158 
o|substituted constant variable: from158 
o|substituted constant variable: loc160 
o|substituted constant variable: loc152 
o|substituted constant variable: len151 
o|folded constant expression: (scheme#expt (quote 2) (quote 8)) 
o|substituted constant variable: len151 
o|substituted constant variable: loc152 
o|substituted constant variable: loc184 
o|substituted constant variable: from182 
o|substituted constant variable: from182 
o|substituted constant variable: loc184 
o|substituted constant variable: loc176 
o|substituted constant variable: len175 
o|folded constant expression: (scheme#expt (quote 2) (quote 8)) 
o|substituted constant variable: len175 
o|folded constant expression: (scheme#expt (quote 2) (quote 8)) 
o|substituted constant variable: len175 
o|substituted constant variable: loc176 
o|substituted constant variable: loc208 
o|substituted constant variable: from206 
o|substituted constant variable: from206 
o|substituted constant variable: loc208 
o|substituted constant variable: loc200 
o|substituted constant variable: len199 
o|folded constant expression: (scheme#expt (quote 2) (quote 16)) 
o|substituted constant variable: len199 
o|substituted constant variable: loc200 
o|substituted constant variable: loc232 
o|substituted constant variable: from230 
o|substituted constant variable: from230 
o|substituted constant variable: loc232 
o|substituted constant variable: loc224 
o|substituted constant variable: len223 
o|folded constant expression: (scheme#expt (quote 2) (quote 16)) 
o|substituted constant variable: len223 
o|folded constant expression: (scheme#expt (quote 2) (quote 16)) 
o|substituted constant variable: len223 
o|substituted constant variable: loc224 
o|substituted constant variable: loc256 
o|substituted constant variable: from254 
o|substituted constant variable: from254 
o|substituted constant variable: loc256 
o|substituted constant variable: loc248 
o|substituted constant variable: len247 
o|folded constant expression: (scheme#expt (quote 2) (quote 32)) 
o|substituted constant variable: len247 
o|substituted constant variable: loc248 
o|substituted constant variable: loc280 
o|substituted constant variable: from278 
o|substituted constant variable: from278 
o|substituted constant variable: loc280 
o|substituted constant variable: loc272 
o|substituted constant variable: len271 
o|folded constant expression: (scheme#expt (quote 2) (quote 32)) 
o|substituted constant variable: len271 
o|folded constant expression: (scheme#expt (quote 2) (quote 32)) 
o|substituted constant variable: len271 
o|substituted constant variable: loc272 
o|substituted constant variable: loc304 
o|substituted constant variable: from302 
o|substituted constant variable: from302 
o|substituted constant variable: loc304 
o|substituted constant variable: loc296 
o|substituted constant variable: len295 
o|folded constant expression: (scheme#expt (quote 2) (quote 64)) 
o|substituted constant variable: len295 
o|substituted constant variable: loc296 
o|substituted constant variable: loc328 
o|substituted constant variable: from326 
o|substituted constant variable: from326 
o|substituted constant variable: loc328 
o|substituted constant variable: loc320 
o|substituted constant variable: len319 
o|folded constant expression: (scheme#expt (quote 2) (quote 64)) 
o|substituted constant variable: len319 
o|folded constant expression: (scheme#expt (quote 2) (quote 64)) 
o|substituted constant variable: len319 
o|substituted constant variable: loc320 
o|substituted constant variable: loc353 
o|substituted constant variable: from351 
o|substituted constant variable: from351 
o|substituted constant variable: loc353 
o|substituted constant variable: loc343 
o|substituted constant variable: loc378 
o|substituted constant variable: from376 
o|substituted constant variable: from376 
o|substituted constant variable: loc378 
o|substituted constant variable: loc368 
o|substituted constant variable: loc597 
o|substituted constant variable: len596 
o|folded constant expression: (scheme#expt (quote 2) (quote 8)) 
o|substituted constant variable: len596 
o|substituted constant variable: loc597 
o|substituted constant variable: loc631 
o|substituted constant variable: len630 
o|folded constant expression: (scheme#expt (quote 2) (quote 8)) 
o|substituted constant variable: len630 
o|substituted constant variable: loc631 
o|substituted constant variable: loc665 
o|substituted constant variable: len664 
o|folded constant expression: (scheme#expt (quote 2) (quote 16)) 
o|substituted constant variable: len664 
o|substituted constant variable: loc665 
o|substituted constant variable: loc699 
o|substituted constant variable: len698 
o|folded constant expression: (scheme#expt (quote 2) (quote 16)) 
o|substituted constant variable: len698 
o|folded constant expression: (scheme#expt (quote 2) (quote 16)) 
o|substituted constant variable: len698 
o|substituted constant variable: loc699 
o|substituted constant variable: loc733 
o|substituted constant variable: len732 
o|folded constant expression: (scheme#expt (quote 2) (quote 32)) 
o|substituted constant variable: len732 
o|substituted constant variable: loc733 
o|substituted constant variable: loc767 
o|substituted constant variable: len766 
o|folded constant expression: (scheme#expt (quote 2) (quote 64)) 
o|substituted constant variable: len766 
o|substituted constant variable: loc767 
o|substituted constant variable: loc801 
o|substituted constant variable: len800 
o|folded constant expression: (scheme#expt (quote 2) (quote 32)) 
o|substituted constant variable: len800 
o|folded constant expression: (scheme#expt (quote 2) (quote 32)) 
o|substituted constant variable: len800 
o|substituted constant variable: loc801 
o|substituted constant variable: loc835 
o|substituted constant variable: len834 
o|folded constant expression: (scheme#expt (quote 2) (quote 64)) 
o|substituted constant variable: len834 
o|folded constant expression: (scheme#expt (quote 2) (quote 64)) 
o|substituted constant variable: len834 
o|substituted constant variable: loc835 
o|substituted constant variable: loc868 
o|substituted constant variable: loc904 
o|substituted constant variable: r41905813 
o|substituted constant variable: r42205815 
o|substituted constant variable: r42505817 
o|substituted constant variable: r42805819 
o|substituted constant variable: r43105821 
o|substituted constant variable: r43395823 
o|substituted constant variable: r43685825 
o|substituted constant variable: r43975827 
o|substituted constant variable: r44265829 
o|substituted constant variable: r44555831 
o|substituted constant variable: from1329 
o|substituted constant variable: from1329 
o|substituted constant variable: from1320 
o|substituted constant variable: from1320 
o|substituted constant variable: loc1420 
o|substituted constant variable: loc1420 
o|substituted constant variable: loc1408 
o|substituted constant variable: from1406 
o|substituted constant variable: from1406 
o|substituted constant variable: loc1408 
o|substituted constant variable: loc529 
o|substituted constant variable: from527 
o|substituted constant variable: from527 
o|substituted constant variable: loc529 
o|substituted constant variable: loc514 
o|substituted constant variable: from512 
o|substituted constant variable: from512 
o|substituted constant variable: loc514 
o|substituted constant variable: loc499 
o|substituted constant variable: from497 
o|substituted constant variable: from497 
o|substituted constant variable: loc499 
o|substituted constant variable: loc484 
o|substituted constant variable: from482 
o|substituted constant variable: from482 
o|substituted constant variable: loc484 
o|substituted constant variable: loc469 
o|substituted constant variable: from467 
o|substituted constant variable: from467 
o|substituted constant variable: loc469 
o|substituted constant variable: loc454 
o|substituted constant variable: from452 
o|substituted constant variable: from452 
o|substituted constant variable: loc454 
o|substituted constant variable: loc439 
o|substituted constant variable: from437 
o|substituted constant variable: from437 
o|substituted constant variable: loc439 
o|substituted constant variable: loc424 
o|substituted constant variable: from422 
o|substituted constant variable: from422 
o|substituted constant variable: loc424 
o|substituted constant variable: loc409 
o|substituted constant variable: from407 
o|substituted constant variable: from407 
o|substituted constant variable: loc409 
o|substituted constant variable: loc394 
o|substituted constant variable: from392 
o|substituted constant variable: from392 
o|substituted constant variable: loc394 
o|replaced variables: 66 
o|removed binding forms: 492 
o|contracted procedure: k1927 
o|contracted procedure: k1982 
o|contracted procedure: k1987 
o|contracted procedure: k2045 
o|contracted procedure: k2100 
o|contracted procedure: k2105 
o|contracted procedure: k2163 
o|contracted procedure: k2218 
o|contracted procedure: k2223 
o|contracted procedure: k2281 
o|contracted procedure: k2336 
o|contracted procedure: k2341 
o|contracted procedure: k2626 
o|inlining procedure: k2647 
o|inlining procedure: k2647 
o|contracted procedure: k2742 
o|inlining procedure: k2763 
o|inlining procedure: k2763 
o|contracted procedure: k2858 
o|inlining procedure: k2879 
o|inlining procedure: k2879 
o|contracted procedure: k2975 
o|contracted procedure: k2980 
o|inlining procedure: k3005 
o|inlining procedure: k3005 
o|contracted procedure: k3100 
o|inlining procedure: k3121 
o|inlining procedure: k3121 
o|contracted procedure: k3216 
o|inlining procedure: k3237 
o|inlining procedure: k3237 
o|contracted procedure: k3333 
o|contracted procedure: k3338 
o|inlining procedure: k3363 
o|inlining procedure: k3363 
o|contracted procedure: k3459 
o|contracted procedure: k3464 
o|inlining procedure: k3489 
o|inlining procedure: k3489 
o|inlining procedure: k3600 
o|inlining procedure: k3600 
o|inlining procedure: k3711 
o|inlining procedure: k3711 
o|inlining procedure: k5269 
o|inlining procedure: k5269 
o|removed binding forms: 175 
o|substituted constant variable: r1928 
o|substituted constant variable: r1983 
o|substituted constant variable: r1988 
o|substituted constant variable: r2046 
o|substituted constant variable: r2101 
o|substituted constant variable: r2106 
o|substituted constant variable: r2164 
o|substituted constant variable: r2219 
o|substituted constant variable: r2224 
o|substituted constant variable: r2282 
o|substituted constant variable: r2337 
o|substituted constant variable: r2342 
o|substituted constant variable: r2627 
o|substituted constant variable: r26486011 
o|substituted constant variable: r2743 
o|substituted constant variable: r27646015 
o|substituted constant variable: r2859 
o|substituted constant variable: r28806019 
o|substituted constant variable: r2976 
o|substituted constant variable: r2981 
o|substituted constant variable: r30066023 
o|substituted constant variable: r3101 
o|substituted constant variable: r31226027 
o|substituted constant variable: r3217 
o|substituted constant variable: r32386031 
o|substituted constant variable: r3334 
o|substituted constant variable: r3339 
o|substituted constant variable: r33646035 
o|substituted constant variable: r3460 
o|substituted constant variable: r3465 
o|substituted constant variable: r34906039 
o|substituted constant variable: r36016043 
o|substituted constant variable: r37126047 
o|replaced variables: 10 
o|removed binding forms: 13 
o|removed conditional forms: 10 
o|removed binding forms: 43 
o|simplifications: ((if . 115) (##core#call . 395)) 
o|  call simplifications:
o|    scheme#list
o|    scheme#eof-object?
o|    chicken.fixnum#fx=	2
o|    chicken.fixnum#fx*	2
o|    ##sys#list	11
o|    scheme#cadr
o|    scheme#caddr
o|    scheme#symbol?
o|    scheme#memq
o|    ##sys#check-byte-vector	2
o|    scheme#eq?	6
o|    ##sys#size	5
o|    ##sys#slot	10
o|    ##sys#structure?	10
o|    chicken.fixnum#fx>=	10
o|    chicken.fixnum#fx+	16
o|    scheme#cons	10
o|    ##sys#check-list	10
o|    scheme#car	37
o|    scheme#null?	74
o|    scheme#cdr	37
o|    ##sys#make-structure	14
o|    scheme#not	11
o|    chicken.fixnum#fx*?
o|    ##sys#foreign-unsigned-ranged-integer-argument
o|    chicken.fixnum#fx-	9
o|    chicken.fixnum#fx>	16
o|    chicken.fixnum#fx<=	25
o|    chicken.fixnum#fx<	25
o|    ##sys#check-structure	45
o|contracted procedure: k1848 
o|contracted procedure: k1854 
o|contracted procedure: k1860 
o|contracted procedure: k1866 
o|contracted procedure: k1872 
o|contracted procedure: k1878 
o|contracted procedure: k1884 
o|contracted procedure: k1890 
o|contracted procedure: k1896 
o|contracted procedure: k1902 
o|contracted procedure: k1908 
o|contracted procedure: k1950 
o|contracted procedure: k1943 
o|contracted procedure: k1919 
o|contracted procedure: k1962 
o|contracted procedure: k2014 
o|contracted procedure: k2007 
o|contracted procedure: k1993 
o|contracted procedure: k1973 
o|contracted procedure: k2026 
o|contracted procedure: k2068 
o|contracted procedure: k2061 
o|contracted procedure: k2037 
o|contracted procedure: k2080 
o|contracted procedure: k2132 
o|contracted procedure: k2125 
o|contracted procedure: k2111 
o|contracted procedure: k2091 
o|contracted procedure: k2144 
o|contracted procedure: k2186 
o|contracted procedure: k2179 
o|contracted procedure: k2155 
o|contracted procedure: k2198 
o|contracted procedure: k2250 
o|contracted procedure: k2243 
o|contracted procedure: k2229 
o|contracted procedure: k2209 
o|contracted procedure: k2262 
o|contracted procedure: k2304 
o|contracted procedure: k2297 
o|contracted procedure: k2273 
o|contracted procedure: k2316 
o|contracted procedure: k2368 
o|contracted procedure: k2361 
o|contracted procedure: k2347 
o|contracted procedure: k2327 
o|contracted procedure: k2380 
o|contracted procedure: k2413 
o|contracted procedure: k2406 
o|contracted procedure: k2388 
o|contracted procedure: k2429 
o|contracted procedure: k2462 
o|contracted procedure: k2455 
o|contracted procedure: k2437 
o|contracted procedure: k2532 
o|contracted procedure: k2518 
o|contracted procedure: k2556 
o|contracted procedure: k2687 
o|contracted procedure: k2580 
o|contracted procedure: k2681 
o|contracted procedure: k2583 
o|contracted procedure: k2675 
o|contracted procedure: k2586 
o|contracted procedure: k2669 
o|contracted procedure: k2589 
o|contracted procedure: k2663 
o|contracted procedure: k2592 
o|contracted procedure: k2657 
o|contracted procedure: k2595 
o|contracted procedure: k2598 
o|contracted procedure: k2607 
o|contracted procedure: k2618 
o|contracted procedure: k2803 
o|contracted procedure: k2696 
o|contracted procedure: k2797 
o|contracted procedure: k2699 
o|contracted procedure: k2791 
o|contracted procedure: k2702 
o|contracted procedure: k2785 
o|contracted procedure: k2705 
o|contracted procedure: k2779 
o|contracted procedure: k2708 
o|contracted procedure: k2773 
o|contracted procedure: k2711 
o|contracted procedure: k2714 
o|contracted procedure: k2723 
o|contracted procedure: k2734 
o|contracted procedure: k2919 
o|contracted procedure: k2812 
o|contracted procedure: k2913 
o|contracted procedure: k2815 
o|contracted procedure: k2907 
o|contracted procedure: k2818 
o|contracted procedure: k2901 
o|contracted procedure: k2821 
o|contracted procedure: k2895 
o|contracted procedure: k2824 
o|contracted procedure: k2889 
o|contracted procedure: k2827 
o|contracted procedure: k2830 
o|contracted procedure: k2839 
o|contracted procedure: k2850 
o|contracted procedure: k3045 
o|contracted procedure: k2928 
o|contracted procedure: k3039 
o|contracted procedure: k2931 
o|contracted procedure: k3033 
o|contracted procedure: k2934 
o|contracted procedure: k3027 
o|contracted procedure: k2937 
o|contracted procedure: k3021 
o|contracted procedure: k2940 
o|contracted procedure: k3015 
o|contracted procedure: k2943 
o|contracted procedure: k2946 
o|contracted procedure: k2955 
o|contracted procedure: k2986 
o|contracted procedure: k2966 
o|contracted procedure: k3161 
o|contracted procedure: k3054 
o|contracted procedure: k3155 
o|contracted procedure: k3057 
o|contracted procedure: k3149 
o|contracted procedure: k3060 
o|contracted procedure: k3143 
o|contracted procedure: k3063 
o|contracted procedure: k3137 
o|contracted procedure: k3066 
o|contracted procedure: k3131 
o|contracted procedure: k3069 
o|contracted procedure: k3072 
o|contracted procedure: k3081 
o|contracted procedure: k3092 
o|contracted procedure: k3277 
o|contracted procedure: k3170 
o|contracted procedure: k3271 
o|contracted procedure: k3173 
o|contracted procedure: k3265 
o|contracted procedure: k3176 
o|contracted procedure: k3259 
o|contracted procedure: k3179 
o|contracted procedure: k3253 
o|contracted procedure: k3182 
o|contracted procedure: k3247 
o|contracted procedure: k3185 
o|contracted procedure: k3188 
o|contracted procedure: k3197 
o|contracted procedure: k3208 
o|contracted procedure: k3403 
o|contracted procedure: k3286 
o|contracted procedure: k3397 
o|contracted procedure: k3289 
o|contracted procedure: k3391 
o|contracted procedure: k3292 
o|contracted procedure: k3385 
o|contracted procedure: k3295 
o|contracted procedure: k3379 
o|contracted procedure: k3298 
o|contracted procedure: k3373 
o|contracted procedure: k3301 
o|contracted procedure: k3304 
o|contracted procedure: k3313 
o|contracted procedure: k3344 
o|contracted procedure: k3324 
o|contracted procedure: k3529 
o|contracted procedure: k3412 
o|contracted procedure: k3523 
o|contracted procedure: k3415 
o|contracted procedure: k3517 
o|contracted procedure: k3418 
o|contracted procedure: k3511 
o|contracted procedure: k3421 
o|contracted procedure: k3505 
o|contracted procedure: k3424 
o|contracted procedure: k3499 
o|contracted procedure: k3427 
o|contracted procedure: k3430 
o|contracted procedure: k3439 
o|contracted procedure: k3470 
o|contracted procedure: k3450 
o|contracted procedure: k3640 
o|contracted procedure: k3538 
o|contracted procedure: k3634 
o|contracted procedure: k3541 
o|contracted procedure: k3628 
o|contracted procedure: k3544 
o|contracted procedure: k3622 
o|contracted procedure: k3547 
o|contracted procedure: k3616 
o|contracted procedure: k3550 
o|contracted procedure: k3610 
o|contracted procedure: k3553 
o|contracted procedure: k3556 
o|contracted procedure: k3565 
o|contracted procedure: k3573 
o|contracted procedure: k3751 
o|contracted procedure: k3649 
o|contracted procedure: k3745 
o|contracted procedure: k3652 
o|contracted procedure: k3739 
o|contracted procedure: k3655 
o|contracted procedure: k3733 
o|contracted procedure: k3658 
o|contracted procedure: k3727 
o|contracted procedure: k3661 
o|contracted procedure: k3721 
o|contracted procedure: k3664 
o|contracted procedure: k3667 
o|contracted procedure: k3676 
o|contracted procedure: k3684 
o|contracted procedure: k3760 
o|contracted procedure: k3783 
o|contracted procedure: k3796 
o|contracted procedure: k3819 
o|contracted procedure: k3832 
o|contracted procedure: k3855 
o|contracted procedure: k3868 
o|contracted procedure: k3891 
o|contracted procedure: k3904 
o|contracted procedure: k3927 
o|contracted procedure: k3940 
o|contracted procedure: k3963 
o|contracted procedure: k3976 
o|contracted procedure: k3999 
o|contracted procedure: k4012 
o|contracted procedure: k4035 
o|contracted procedure: k4048 
o|contracted procedure: k4071 
o|contracted procedure: k4084 
o|contracted procedure: k4107 
o|contracted procedure: k4180 
o|contracted procedure: k4192 
o|contracted procedure: k4204 
o|contracted procedure: k4210 
o|contracted procedure: k4222 
o|contracted procedure: k4234 
o|contracted procedure: k4240 
o|contracted procedure: k4252 
o|contracted procedure: k4264 
o|contracted procedure: k4270 
o|contracted procedure: k4282 
o|contracted procedure: k4294 
o|contracted procedure: k4300 
o|contracted procedure: k4312 
o|contracted procedure: k4323 
o|contracted procedure: k4329 
o|contracted procedure: k4341 
o|contracted procedure: k4352 
o|contracted procedure: k4358 
o|contracted procedure: k4370 
o|contracted procedure: k4381 
o|contracted procedure: k4387 
o|contracted procedure: k4399 
o|contracted procedure: k4410 
o|contracted procedure: k4416 
o|contracted procedure: k4428 
o|contracted procedure: k4439 
o|contracted procedure: k4445 
o|contracted procedure: k4457 
o|contracted procedure: k4468 
o|contracted procedure: k4537 
o|contracted procedure: k4548 
o|contracted procedure: k4551 
o|contracted procedure: k4558 
o|contracted procedure: k4566 
o|contracted procedure: k4569 
o|contracted procedure: k4575 
o|contracted procedure: k4596 
o|contracted procedure: k4599 
o|contracted procedure: k4608 
o|contracted procedure: k4786 
o|contracted procedure: k4842 
o|contracted procedure: k4799 
o|contracted procedure: k4805 
o|contracted procedure: k4808 
o|contracted procedure: k4811 
o|contracted procedure: k4830 
o|contracted procedure: k4819 
o|contracted procedure: k4883 
o|contracted procedure: k4887 
o|contracted procedure: k4891 
o|contracted procedure: k4895 
o|contracted procedure: k4899 
o|contracted procedure: k4903 
o|contracted procedure: k4907 
o|contracted procedure: k4911 
o|contracted procedure: k4915 
o|contracted procedure: k4919 
o|contracted procedure: k4853 
o|contracted procedure: k4869 
o|contracted procedure: k4876 
o|contracted procedure: k4925 
o|contracted procedure: k4928 
o|contracted procedure: k4931 
o|contracted procedure: k4996 
o|contracted procedure: k4982 
o|contracted procedure: k4988 
o|contracted procedure: k4992 
o|contracted procedure: k5000 
o|contracted procedure: k4973 
o|contracted procedure: k4966 
o|contracted procedure: k5004 
o|contracted procedure: k4949 
o|contracted procedure: k4942 
o|contracted procedure: k5230 
o|contracted procedure: k5070 
o|contracted procedure: k5224 
o|contracted procedure: k5073 
o|contracted procedure: k5218 
o|contracted procedure: k5076 
o|contracted procedure: k5212 
o|contracted procedure: k5079 
o|contracted procedure: k5206 
o|contracted procedure: k5082 
o|contracted procedure: k5200 
o|contracted procedure: k5085 
o|contracted procedure: k5088 
o|contracted procedure: k5161 
o|contracted procedure: k5121 
o|inlining procedure: k5128 
o|inlining procedure: k5128 
o|contracted procedure: k5148 
o|contracted procedure: k5151 
o|contracted procedure: k5189 
o|contracted procedure: k5179 
o|contracted procedure: k5172 
o|contracted procedure: k5193 
o|contracted procedure: k5109 
o|contracted procedure: k5102 
o|contracted procedure: k5310 
o|contracted procedure: k5239 
o|contracted procedure: k5304 
o|contracted procedure: k5242 
o|contracted procedure: k5298 
o|contracted procedure: k5245 
o|contracted procedure: k5292 
o|contracted procedure: k5248 
o|contracted procedure: k5257 
o|contracted procedure: k5263 
o|contracted procedure: k5266 
o|contracted procedure: k5279 
o|contracted procedure: k5286 
o|contracted procedure: k5370 
o|contracted procedure: k5319 
o|contracted procedure: k5364 
o|contracted procedure: k5322 
o|contracted procedure: k5358 
o|contracted procedure: k5325 
o|contracted procedure: k5352 
o|contracted procedure: k5328 
o|contracted procedure: k5343 
o|contracted procedure: k5382 
o|contracted procedure: k5400 
o|contracted procedure: k5393 
o|contracted procedure: k5412 
o|contracted procedure: k5430 
o|contracted procedure: k5423 
o|contracted procedure: k5442 
o|contracted procedure: k5460 
o|contracted procedure: k5453 
o|contracted procedure: k5472 
o|contracted procedure: k5490 
o|contracted procedure: k5483 
o|contracted procedure: k5502 
o|contracted procedure: k5520 
o|contracted procedure: k5513 
o|contracted procedure: k5532 
o|contracted procedure: k5550 
o|contracted procedure: k5543 
o|contracted procedure: k5562 
o|contracted procedure: k5580 
o|contracted procedure: k5573 
o|contracted procedure: k5592 
o|contracted procedure: k5610 
o|contracted procedure: k5603 
o|contracted procedure: k5622 
o|contracted procedure: k5640 
o|contracted procedure: k5633 
o|contracted procedure: k5652 
o|contracted procedure: k5670 
o|contracted procedure: k5663 
o|simplifications: ((let . 38)) 
o|removed binding forms: 379 
o|inlining procedure: "(srfi-4.scm:678) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:677) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:676) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:675) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:674) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:673) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:672) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:671) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:670) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:669) srfi-4#pack" 
o|replaced variables: 181 
o|removed binding forms: 1 
o|inlining procedure: k2541 
o|removed side-effect free assignment to unused variable: srfi-4#pack 
o|substituted constant variable: tag11986453 
o|substituted constant variable: loc11996454 
o|substituted constant variable: tag11986460 
o|substituted constant variable: loc11996461 
o|substituted constant variable: tag11986467 
o|substituted constant variable: loc11996468 
o|substituted constant variable: tag11986474 
o|substituted constant variable: loc11996475 
o|substituted constant variable: tag11986481 
o|substituted constant variable: loc11996482 
o|substituted constant variable: tag11986488 
o|substituted constant variable: loc11996489 
o|substituted constant variable: tag11986495 
o|substituted constant variable: loc11996496 
o|substituted constant variable: tag11986502 
o|substituted constant variable: loc11996503 
o|substituted constant variable: tag11986509 
o|substituted constant variable: loc11996510 
o|substituted constant variable: tag11986516 
o|substituted constant variable: loc11996517 
o|simplifications: ((if . 1)) 
o|replaced variables: 10 
o|removed binding forms: 57 
o|removed binding forms: 32 
o|contracted procedure: k4626 
o|contracted procedure: k4630 
o|contracted procedure: k4634 
o|contracted procedure: k4638 
o|contracted procedure: k4642 
o|contracted procedure: k4646 
o|contracted procedure: k4650 
o|contracted procedure: k4654 
o|contracted procedure: k4658 
o|contracted procedure: k4662 
o|removed binding forms: 10 
o|direct leaf routine/allocation: doloop600601 0 
o|direct leaf routine/allocation: doloop634635 0 
o|direct leaf routine/allocation: doloop668669 0 
o|direct leaf routine/allocation: doloop702703 0 
o|direct leaf routine/allocation: doloop736737 0 
o|direct leaf routine/allocation: doloop770771 0 
o|direct leaf routine/allocation: doloop804805 0 
o|direct leaf routine/allocation: doloop838839 0 
o|direct leaf routine/allocation: doloop873874 0 
o|direct leaf routine/allocation: doloop909910 0 
o|converted assignments to bindings: (doloop600601) 
o|converted assignments to bindings: (doloop634635) 
o|converted assignments to bindings: (doloop668669) 
o|converted assignments to bindings: (doloop702703) 
o|converted assignments to bindings: (doloop736737) 
o|converted assignments to bindings: (doloop770771) 
o|converted assignments to bindings: (doloop804805) 
o|converted assignments to bindings: (doloop838839) 
o|converted assignments to bindings: (doloop873874) 
o|converted assignments to bindings: (doloop909910) 
o|simplifications: ((let . 10)) 
o|customizable procedures: (srfi-4#pack-copy srfi-4#unpack srfi-4#unpack-copy k5275 k5131 srfi-4#subnvector g12871288 k4611 k4578 loop1172 loop1165 loop1158 loop1151 loop1144 loop1137 loop1130 loop1123 loop1116 loop1109 doloop10611062 doloop10481049 doloop10351036 doloop10221023 doloop10091010 doloop996997 doloop983984 doloop970971 doloop957958 doloop944945 k3694 k3583 alloc557) 
o|calls to known targets: 133 
o|identified direct recursive calls: f_2638 1 
o|identified direct recursive calls: f_2754 1 
o|identified direct recursive calls: f_2870 1 
o|identified direct recursive calls: f_2996 1 
o|identified direct recursive calls: f_3112 1 
o|identified direct recursive calls: f_3228 1 
o|identified direct recursive calls: f_3354 1 
o|identified direct recursive calls: f_3480 1 
o|identified direct recursive calls: f_3590 1 
o|identified direct recursive calls: f_3701 1 
o|identified direct recursive calls: f_4187 1 
o|identified direct recursive calls: f_4217 1 
o|identified direct recursive calls: f_4247 1 
o|identified direct recursive calls: f_4277 1 
o|identified direct recursive calls: f_4307 1 
o|identified direct recursive calls: f_4336 1 
o|identified direct recursive calls: f_4365 1 
o|identified direct recursive calls: f_4394 1 
o|identified direct recursive calls: f_4423 1 
o|identified direct recursive calls: f_4452 1 
o|fast box initializations: 20 
o|fast global references: 42 
o|fast global assignments: 5 
o|dropping unused closure argument: f_2524 
o|dropping unused closure argument: f_4544 
o|dropping unused closure argument: f_4562 
o|dropping unused closure argument: f_4592 
o|dropping unused closure argument: f_4923 
*/
/* end of file */

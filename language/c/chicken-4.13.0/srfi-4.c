/* Generated from srfi-4.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: srfi-4.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-4.c
   unit: srfi_2d4
*/

#include "chicken.h"

#define C_copy_subvector(to, from, start_to, start_from, bytes)   \
  (C_memcpy((C_char *)C_data_pointer(to) + C_unfix(start_to), (C_char *)C_data_pointer(from) + C_unfix(start_from), C_unfix(bytes)), \
    C_SCHEME_UNDEFINED)

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[164];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,99,104,101,99,107,45,101,120,97,99,116,45,105,110,116,101,114,118,97,108,32,110,54,52,32,102,114,111,109,54,53,32,116,111,54,54,32,108,111,99,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,21),40,117,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,55,51,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,21),40,115,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,55,54,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,22),40,117,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,55,57,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,22),40,115,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,56,50,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,22),40,117,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,56,53,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,22),40,115,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,56,56,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,22),40,102,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,57,49,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,22),40,102,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,57,52,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,27),40,117,56,118,101,99,116,111,114,45,115,101,116,33,32,120,57,55,32,105,57,56,32,121,57,57,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,30),40,115,56,118,101,99,116,111,114,45,115,101,116,33,32,120,49,49,53,32,105,49,49,54,32,121,49,49,55,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,31),40,117,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,49,51,50,32,105,49,51,51,32,121,49,51,52,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,31),40,115,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,49,53,48,32,105,49,53,49,32,121,49,53,50,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,31),40,117,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,49,54,55,32,105,49,54,56,32,121,49,54,57,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,31),40,115,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,49,56,57,32,105,49,57,48,32,121,49,57,49,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,31),40,102,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,50,48,55,32,105,50,48,56,32,121,50,48,57,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,31),40,102,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,50,50,52,32,105,50,50,53,32,121,50,50,54,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,19),40,101,120,116,45,102,114,101,101,32,98,118,51,54,54,51,54,57,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,29),40,97,108,108,111,99,32,108,111,99,51,55,49,32,108,101,110,51,55,50,32,101,120,116,63,51,55,51,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,28),40,114,101,108,101,97,115,101,45,110,117,109,98,101,114,45,118,101,99,116,111,114,32,118,51,56,50,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,48,51,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,34),40,109,97,107,101,45,117,56,118,101,99,116,111,114,32,108,101,110,51,56,55,32,46,32,116,109,112,51,56,54,51,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,51,48,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,34),40,109,97,107,101,45,115,56,118,101,99,116,111,114,32,108,101,110,52,49,52,32,46,32,116,109,112,52,49,51,52,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,53,55,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,117,49,54,118,101,99,116,111,114,32,108,101,110,52,52,49,32,46,32,116,109,112,52,52,48,52,52,50,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,56,52,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,115,49,54,118,101,99,116,111,114,32,108,101,110,52,54,56,32,46,32,116,109,112,52,54,55,52,54,57,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,49,49,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,117,51,50,118,101,99,116,111,114,32,108,101,110,52,57,53,32,46,32,116,109,112,52,57,52,52,57,54,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,51,56,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,115,51,50,118,101,99,116,111,114,32,108,101,110,53,50,50,32,46,32,116,109,112,53,50,49,53,50,51,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,54,53,41,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,102,51,50,118,101,99,116,111,114,32,108,101,110,53,52,57,32,46,32,116,109,112,53,52,56,53,53,48,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,57,51,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,102,54,52,118,101,99,116,111,114,32,108,101,110,53,55,55,32,46,32,116,109,112,53,55,54,53,55,56,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,50,54,32,112,54,50,56,32,105,54,50,57,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,23),40,108,105,115,116,45,62,117,56,118,101,99,116,111,114,32,108,115,116,54,50,51,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,51,57,32,112,54,52,49,32,105,54,52,50,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,23),40,108,105,115,116,45,62,115,56,118,101,99,116,111,114,32,108,115,116,54,51,54,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,53,50,32,112,54,53,52,32,105,54,53,53,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,117,49,54,118,101,99,116,111,114,32,108,115,116,54,52,57,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,54,53,32,112,54,54,55,32,105,54,54,56,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,115,49,54,118,101,99,116,111,114,32,108,115,116,54,54,50,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,55,56,32,112,54,56,48,32,105,54,56,49,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,117,51,50,118,101,99,116,111,114,32,108,115,116,54,55,53,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,57,49,32,112,54,57,51,32,105,54,57,52,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,115,51,50,118,101,99,116,111,114,32,108,115,116,54,56,56,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,48,52,32,112,55,48,54,32,105,55,48,55,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,102,51,50,118,101,99,116,111,114,32,108,115,116,55,48,49,41};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,49,55,32,112,55,49,57,32,105,55,50,48,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,24),40,108,105,115,116,45,62,102,54,52,118,101,99,116,111,114,32,108,115,116,55,49,52,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,18),40,117,56,118,101,99,116,111,114,32,46,32,120,115,55,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,18),40,115,56,118,101,99,116,111,114,32,46,32,120,115,55,50,56,41,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,19),40,117,49,54,118,101,99,116,111,114,32,46,32,120,115,55,51,48,41,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,19),40,115,49,54,118,101,99,116,111,114,32,46,32,120,115,55,51,50,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,19),40,117,51,50,118,101,99,116,111,114,32,46,32,120,115,55,51,52,41,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,19),40,115,51,50,118,101,99,116,111,114,32,46,32,120,115,55,51,54,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,19),40,102,51,50,118,101,99,116,111,114,32,46,32,120,115,55,51,56,41,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,19),40,102,54,52,118,101,99,116,111,114,32,46,32,120,115,55,52,48,41,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,54,49,41,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,21),40,117,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,53,56,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,54,56,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,21),40,115,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,54,53,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,55,53,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,22),40,117,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,55,50,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,56,50,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,22),40,115,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,55,57,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,56,57,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,22),40,117,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,56,54,41,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,57,54,41,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,22),40,115,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,55,57,51,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,48,51,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,22),40,102,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,56,48,48,41,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,49,48,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,22),40,102,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,56,48,55,41,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,117,56,118,101,99,116,111,114,63,32,120,56,49,52,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,16),40,115,56,118,101,99,116,111,114,63,32,120,56,49,54,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,17),40,117,49,54,118,101,99,116,111,114,63,32,120,56,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,17),40,115,49,54,118,101,99,116,111,114,63,32,120,56,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,17),40,117,51,50,118,101,99,116,111,114,63,32,120,56,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,17),40,115,51,50,118,101,99,116,111,114,63,32,120,56,50,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,17),40,102,51,50,118,101,99,116,111,114,63,32,120,56,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,17),40,102,54,52,118,101,99,116,111,114,63,32,120,56,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,13),40,102,95,51,51,54,52,32,118,56,51,56,41,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,25),40,112,97,99,107,45,99,111,112,121,32,116,97,103,56,51,54,32,108,111,99,56,51,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,15),40,102,95,51,51,56,50,32,115,116,114,56,52,54,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,28),40,117,110,112,97,99,107,32,116,97,103,56,52,51,32,115,122,56,52,52,32,108,111,99,56,52,53,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,49,50,32,115,116,114,56,53,54,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,33),40,117,110,112,97,99,107,45,99,111,112,121,32,116,97,103,56,53,51,32,115,122,56,53,52,32,108,111,99,56,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,16),40,102,53,48,50,51,32,118,56,51,51,53,48,50,50,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,16),40,102,53,48,49,54,32,118,56,51,51,53,48,49,53,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,16),40,102,53,48,48,57,32,118,56,51,51,53,48,48,56,41};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,16),40,102,53,48,48,50,32,118,56,51,51,53,48,48,49,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,16),40,102,52,57,57,53,32,118,56,51,51,52,57,57,52,41};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,16),40,102,52,57,56,56,32,118,56,51,51,52,57,56,55,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,16),40,102,52,57,56,49,32,118,56,51,51,52,57,56,48,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,16),40,102,52,57,55,52,32,118,56,51,51,52,57,55,51,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,11),40,103,57,49,50,32,99,57,49,52,41,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,117,115,101,114,45,114,101,97,100,45,104,111,111,107,32,99,104,97,114,56,57,56,32,112,111,114,116,56,57,57,41,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,117,115,101,114,45,112,114,105,110,116,45,104,111,111,107,32,120,57,49,56,32,114,101,97,100,97,98,108,101,57,49,57,32,112,111,114,116,57,50,48,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,49),40,115,117,98,110,118,101,99,116,111,114,32,118,57,51,51,32,116,57,51,52,32,101,115,57,51,53,32,102,114,111,109,57,51,54,32,116,111,57,51,55,32,108,111,99,57,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,32),40,115,117,98,117,56,118,101,99,116,111,114,32,118,57,54,57,32,102,114,111,109,57,55,48,32,116,111,57,55,49,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,33),40,115,117,98,117,49,54,118,101,99,116,111,114,32,118,57,55,51,32,102,114,111,109,57,55,52,32,116,111,57,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,33),40,115,117,98,117,51,50,118,101,99,116,111,114,32,118,57,55,55,32,102,114,111,109,57,55,56,32,116,111,57,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,32),40,115,117,98,115,56,118,101,99,116,111,114,32,118,57,56,49,32,102,114,111,109,57,56,50,32,116,111,57,56,51,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,33),40,115,117,98,115,49,54,118,101,99,116,111,114,32,118,57,56,53,32,102,114,111,109,57,56,54,32,116,111,57,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,33),40,115,117,98,115,51,50,118,101,99,116,111,114,32,118,57,56,57,32,102,114,111,109,57,57,48,32,116,111,57,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,33),40,115,117,98,102,51,50,118,101,99,116,111,114,32,118,57,57,51,32,102,114,111,109,57,57,52,32,116,111,57,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,33),40,115,117,98,102,54,52,118,101,99,116,111,114,32,118,57,57,55,32,102,114,111,109,57,57,56,32,116,111,57,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,36),40,119,114,105,116,101,45,117,56,118,101,99,116,111,114,32,118,49,48,48,53,32,46,32,116,109,112,49,48,48,52,49,48,48,54,41,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,45),40,114,101,97,100,45,117,56,118,101,99,116,111,114,33,32,110,49,48,53,57,32,100,101,115,116,49,48,54,48,32,46,32,116,109,112,49,48,53,56,49,48,54,49,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,29),40,114,101,97,100,45,117,56,118,101,99,116,111,114,32,46,32,116,109,112,49,48,56,52,49,48,56,53,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,17),40,97,52,49,51,48,32,120,51,52,54,32,105,51,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,17),40,97,52,49,54,48,32,120,51,51,49,32,105,51,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,17),40,97,52,49,57,48,32,120,51,49,54,32,105,51,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,97,52,50,50,48,32,120,51,48,49,32,105,51,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,97,52,50,53,48,32,120,50,56,54,32,105,50,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,97,52,50,56,48,32,120,50,55,49,32,105,50,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,17),40,97,52,51,49,48,32,120,50,53,54,32,105,50,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,17),40,97,52,51,52,48,32,120,50,52,49,32,105,50,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub367(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word bv=(C_word )(C_a0);
C_free((void *)C_block_item(bv, 1));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub362(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
size_t bytes=(size_t )(size_t)C_num_to_int(C_a0);
C_word *buf;if (bytes > C_HEADER_SIZE_MASK) C_return(C_SCHEME_FALSE);buf = (C_word *)C_malloc(bytes + sizeof(C_header));if(buf == NULL) C_return(C_SCHEME_FALSE);C_block_header_init(buf, C_make_header(C_BYTEVECTOR_TYPE, bytes));C_return(buf);
C_ret:
#undef return

return C_r;}

C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word *av) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word *av) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word *av) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word *av) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word *av) C_noret;
C_noret_decl(f_4043)
static void C_fcall f_4043(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word *av) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word *av) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word *av) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word *av) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word *av) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word *av) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word *av) C_noret;
C_noret_decl(f_2377)
static C_word C_fcall f_2377(C_word t0,C_word t1);
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word *av) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word *av) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word *av) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word *av) C_noret;
C_noret_decl(f_2778)
static void C_fcall f_2778(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word *av) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word *av) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word *av) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word *av) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word *av) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word *av) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word *av) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word *av) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_2667)
static void C_fcall f_2667(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word *av) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word *av) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word *av) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word *av) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word *av) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word *av) C_noret;
C_noret_decl(f_2655)
static void C_ccall f_2655(C_word c,C_word *av) C_noret;
C_noret_decl(f_3075)
static void C_fcall f_3075(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4099)
static void C_ccall f_4099(C_word c,C_word *av) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word *av) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word *av) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word *av) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word *av) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word *av) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word *av) C_noret;
C_noret_decl(f_2672)
static C_word C_fcall f_2672(C_word t0,C_word t1);
C_noret_decl(f_4341)
static void C_ccall f_4341(C_word c,C_word *av) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word *av) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word *av) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word *av) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word *av) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word *av) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word *av) C_noret;
C_noret_decl(f_3135)
static void C_fcall f_3135(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word *av) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word *av) C_noret;
C_noret_decl(f_2922)
static void C_fcall f_2922(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word *av) C_noret;
C_noret_decl(f_2742)
static void C_fcall f_2742(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3105)
static void C_fcall f_3105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word *av) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word *av) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word *av) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word *av) C_noret;
C_noret_decl(f_2958)
static void C_fcall f_2958(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word *av) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2090)
static C_word C_fcall f_2090(C_word t0,C_word t1);
C_noret_decl(f_3380)
static void C_fcall f_3380(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word *av) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word *av) C_noret;
C_noret_decl(f_3364)
static void C_ccall f_3364(C_word c,C_word *av) C_noret;
C_noret_decl(f_3362)
static void C_fcall f_3362(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2085)
static void C_ccall f_2085(C_word c,C_word *av) C_noret;
C_noret_decl(f5023)
static void C_ccall f5023(C_word c,C_word *av) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word *av) C_noret;
C_noret_decl(f_3410)
static void C_fcall f_3410(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word *av) C_noret;
C_noret_decl(f_3422)
static void C_ccall f_3422(C_word c,C_word *av) C_noret;
C_noret_decl(f_3398)
static void C_fcall f_3398(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3431)
static void C_fcall f_3431(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word *av) C_noret;
C_noret_decl(f_2809)
static void C_ccall f_2809(C_word c,C_word *av) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word *av) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word *av) C_noret;
C_noret_decl(f_3282)
static void C_fcall f_3282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3296)
static void C_ccall f_3296(C_word c,C_word *av) C_noret;
C_noret_decl(f_2814)
static void C_fcall f_2814(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1981)
static void C_ccall f_1981(C_word c,C_word *av) C_noret;
C_noret_decl(f_2845)
static void C_ccall f_2845(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externexport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1995)
static C_word C_fcall f_1995(C_word t0,C_word t1);
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word *av) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word *av) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word *av) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word *av) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word *av) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word *av) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word *av) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word *av) C_noret;
C_noret_decl(f_3253)
static void C_fcall f_3253(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2850)
static void C_fcall f_2850(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word *av) C_noret;
C_noret_decl(f_3224)
static void C_fcall f_3224(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3562)
static void C_ccall f_3562(C_word c,C_word *av) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word *av) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word *av) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word *av) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word *av) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word *av) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word *av) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word *av) C_noret;
C_noret_decl(f_3238)
static void C_ccall f_3238(C_word c,C_word *av) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word *av) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word *av) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word *av) C_noret;
C_noret_decl(f_2276)
static void C_ccall f_2276(C_word c,C_word *av) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word *av) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word *av) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word *av) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word *av) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3886)
static void C_ccall f_3886(C_word c,C_word *av) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word *av) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word *av) C_noret;
C_noret_decl(f_3546)
static void C_ccall f_3546(C_word c,C_word *av) C_noret;
C_noret_decl(f_3899)
static void C_fcall f_3899(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word *av) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word *av) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word *av) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word *av) C_noret;
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word *av) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word *av) C_noret;
C_noret_decl(f_2185)
static C_word C_fcall f_2185(C_word t0,C_word t1);
C_noret_decl(f_3526)
static void C_ccall f_3526(C_word c,C_word *av) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word *av) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word *av) C_noret;
C_noret_decl(f_2473)
static C_word C_fcall f_2473(C_word t0,C_word t1);
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word *av) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word *av) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word *av) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word *av) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word *av) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word *av) C_noret;
C_noret_decl(f_1515)
static void C_ccall f_1515(C_word c,C_word *av) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word *av) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word *av) C_noret;
C_noret_decl(f5002)
static void C_ccall f5002(C_word c,C_word *av) C_noret;
C_noret_decl(f5009)
static void C_ccall f5009(C_word c,C_word *av) C_noret;
C_noret_decl(f5016)
static void C_ccall f5016(C_word c,C_word *av) C_noret;
C_noret_decl(f_3308)
static void C_ccall f_3308(C_word c,C_word *av) C_noret;
C_noret_decl(f_2766)
static void C_ccall f_2766(C_word c,C_word *av) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word *av) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word *av) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word *av) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4003)
static void C_ccall f_4003(C_word c,C_word *av) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word *av) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word *av) C_noret;
C_noret_decl(f_3701)
static void C_fcall f_3701(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word *av) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word *av) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word *av) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word *av) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word *av) C_noret;
C_noret_decl(f_2567)
static void C_fcall f_2567(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1701)
static void C_ccall f_1701(C_word c,C_word *av) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word *av) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word *av) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word *av) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word *av) C_noret;
C_noret_decl(f_3828)
static void C_ccall f_3828(C_word c,C_word *av) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word *av) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word *av) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word *av) C_noret;
C_noret_decl(f_3603)
static void C_fcall f_3603(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word *av) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word *av) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word *av) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word *av) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word *av) C_noret;
C_noret_decl(f_1874)
static void C_ccall f_1874(C_word c,C_word *av) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word *av) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word *av) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word *av) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word *av) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word *av) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word *av) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word *av) C_noret;
C_noret_decl(f_2886)
static void C_fcall f_2886(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word *av) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word *av) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word *av) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word *av) C_noret;
C_noret_decl(f_1909)
static void C_ccall f_1909(C_word c,C_word *av) C_noret;
C_noret_decl(f_1911)
static void C_fcall f_1911(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word *av) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word *av) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word *av) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word *av) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word *av) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word *av) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word *av) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word *av) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word *av) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word *av) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word *av) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word *av) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word *av) C_noret;
C_noret_decl(f_1551)
static void C_ccall f_1551(C_word c,C_word *av) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word *av) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word *av) C_noret;
C_noret_decl(f4974)
static void C_ccall f4974(C_word c,C_word *av) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word *av) C_noret;
C_noret_decl(f_1488)
static void C_fcall f_1488(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word *av) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word *av) C_noret;
C_noret_decl(f4981)
static void C_ccall f4981(C_word c,C_word *av) C_noret;
C_noret_decl(f4988)
static void C_ccall f4988(C_word c,C_word *av) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word *av) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word *av) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word *av) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word *av) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word *av) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word *av) C_noret;
C_noret_decl(f_2281)
static C_word C_fcall f_2281(C_word t0,C_word t1);
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word *av) C_noret;
C_noret_decl(f_2572)
static C_word C_fcall f_2572(C_word t0,C_word t1);
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word *av) C_noret;
C_noret_decl(f_1533)
static void C_ccall f_1533(C_word c,C_word *av) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word *av) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word *av) C_noret;
C_noret_decl(f_3195)
static void C_fcall f_3195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word *av) C_noret;
C_noret_decl(f_2994)
static void C_fcall f_2994(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f4995)
static void C_ccall f4995(C_word c,C_word *av) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word *av) C_noret;
C_noret_decl(f_3165)
static void C_fcall f_3165(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2013)
static void C_ccall f_2013(C_word c,C_word *av) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word *av) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word *av) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word *av) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word *av) C_noret;

C_noret_decl(trf_4043)
static void C_ccall trf_4043(C_word c,C_word *av) C_noret;
static void C_ccall trf_4043(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4043(t0,t1);}

C_noret_decl(trf_2778)
static void C_ccall trf_2778(C_word c,C_word *av) C_noret;
static void C_ccall trf_2778(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2778(t0,t1,t2,t3);}

C_noret_decl(trf_2667)
static void C_ccall trf_2667(C_word c,C_word *av) C_noret;
static void C_ccall trf_2667(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2667(t0,t1);}

C_noret_decl(trf_3075)
static void C_ccall trf_3075(C_word c,C_word *av) C_noret;
static void C_ccall trf_3075(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3075(t0,t1,t2);}

C_noret_decl(trf_3135)
static void C_ccall trf_3135(C_word c,C_word *av) C_noret;
static void C_ccall trf_3135(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3135(t0,t1,t2);}

C_noret_decl(trf_2922)
static void C_ccall trf_2922(C_word c,C_word *av) C_noret;
static void C_ccall trf_2922(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2922(t0,t1,t2,t3);}

C_noret_decl(trf_2742)
static void C_ccall trf_2742(C_word c,C_word *av) C_noret;
static void C_ccall trf_2742(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2742(t0,t1,t2,t3);}

C_noret_decl(trf_3105)
static void C_ccall trf_3105(C_word c,C_word *av) C_noret;
static void C_ccall trf_3105(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3105(t0,t1,t2);}

C_noret_decl(trf_2958)
static void C_ccall trf_2958(C_word c,C_word *av) C_noret;
static void C_ccall trf_2958(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2958(t0,t1,t2,t3);}

C_noret_decl(trf_3380)
static void C_ccall trf_3380(C_word c,C_word *av) C_noret;
static void C_ccall trf_3380(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3380(t0,t1,t2,t3);}

C_noret_decl(trf_3362)
static void C_ccall trf_3362(C_word c,C_word *av) C_noret;
static void C_ccall trf_3362(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3362(t0,t1,t2);}

C_noret_decl(trf_3410)
static void C_ccall trf_3410(C_word c,C_word *av) C_noret;
static void C_ccall trf_3410(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3410(t0,t1,t2,t3);}

C_noret_decl(trf_3398)
static void C_ccall trf_3398(C_word c,C_word *av) C_noret;
static void C_ccall trf_3398(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3398(t0,t1);}

C_noret_decl(trf_3431)
static void C_ccall trf_3431(C_word c,C_word *av) C_noret;
static void C_ccall trf_3431(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3431(t0,t1);}

C_noret_decl(trf_3282)
static void C_ccall trf_3282(C_word c,C_word *av) C_noret;
static void C_ccall trf_3282(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3282(t0,t1,t2);}

C_noret_decl(trf_2814)
static void C_ccall trf_2814(C_word c,C_word *av) C_noret;
static void C_ccall trf_2814(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2814(t0,t1,t2,t3);}

C_noret_decl(trf_3253)
static void C_ccall trf_3253(C_word c,C_word *av) C_noret;
static void C_ccall trf_3253(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3253(t0,t1,t2);}

C_noret_decl(trf_2850)
static void C_ccall trf_2850(C_word c,C_word *av) C_noret;
static void C_ccall trf_2850(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2850(t0,t1,t2,t3);}

C_noret_decl(trf_3224)
static void C_ccall trf_3224(C_word c,C_word *av) C_noret;
static void C_ccall trf_3224(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3224(t0,t1,t2);}

C_noret_decl(trf_3899)
static void C_ccall trf_3899(C_word c,C_word *av) C_noret;
static void C_ccall trf_3899(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3899(t0,t1);}

C_noret_decl(trf_3701)
static void C_ccall trf_3701(C_word c,C_word *av) C_noret;
static void C_ccall trf_3701(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_3701(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2567)
static void C_ccall trf_2567(C_word c,C_word *av) C_noret;
static void C_ccall trf_2567(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2567(t0,t1);}

C_noret_decl(trf_3603)
static void C_ccall trf_3603(C_word c,C_word *av) C_noret;
static void C_ccall trf_3603(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3603(t0,t1,t2);}

C_noret_decl(trf_2886)
static void C_ccall trf_2886(C_word c,C_word *av) C_noret;
static void C_ccall trf_2886(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2886(t0,t1,t2,t3);}

C_noret_decl(trf_1911)
static void C_ccall trf_1911(C_word c,C_word *av) C_noret;
static void C_ccall trf_1911(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1911(t0,t1,t2,t3);}

C_noret_decl(trf_1488)
static void C_ccall trf_1488(C_word c,C_word *av) C_noret;
static void C_ccall trf_1488(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1488(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3195)
static void C_ccall trf_3195(C_word c,C_word *av) C_noret;
static void C_ccall trf_3195(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3195(t0,t1,t2);}

C_noret_decl(trf_2994)
static void C_ccall trf_2994(C_word c,C_word *av) C_noret;
static void C_ccall trf_2994(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2994(t0,t1,t2,t3);}

C_noret_decl(trf_3165)
static void C_ccall trf_3165(C_word c,C_word *av) C_noret;
static void C_ccall trf_3165(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3165(t0,t1,t2);}

/* k3148 in loop in u16vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3150,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#user-read-hook in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3575(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3575,4,av);}
a=C_alloc(5);
t4=t2;
if(C_truep((C_truep(C_eqp(t4,C_make_character(117)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(102)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(85)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(83)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(70)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3584,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:583: read */
t6=*((C_word*)lf[132]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* srfi-4.scm:588: old-hook */
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* s16vector-set! in k1484 */
static void C_ccall f_1668(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_1668,5,av);}
a=C_alloc(6);
t5=C_i_check_structure_2(t2,lf[10],lf[25]);
t6=C_u_i_16vector_length(t2);
t7=C_i_check_exact_2(t4,lf[25]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1699,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[25]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_u_i_s16vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t8;
av2[2]=t13;
av2[3]=lf[25];
av2[4]=t9;
av2[5]=C_fix(0);
av2[6]=t6;
tp(7,av2);}}}

/* k1658 in k1634 in u16vector-set! in k1484 */
static void C_ccall f_1660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1660,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_u_i_u16vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2201 in make-u16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2203,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[8],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:314: set-finalizer! */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2171(2,av2);}}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2171(2,av2);}}}

/* k4041 in read-u8vector! in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in ... */
static void C_fcall f_4043(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_4043,2,t0,t1);}
if(C_truep(t1)){
/* srfi-4.scm:662: ##sys#read-string! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[150]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[150]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
tp(6,av2);}}
else{
t2=C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
/* srfi-4.scm:662: ##sys#read-string! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[150]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[150]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
tp(6,av2);}}}

/* s16vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3156(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3156,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[10],lf[69]);
t4=C_u_i_s16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3165,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3165(t8,t1,C_fix(0));}

/* k3582 in user-read-hook in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in ... */
static void C_ccall f_3584(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_3584,2,av);}
a=C_alloc(4);
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:C_SCHEME_FALSE);
t4=C_eqp(t3,lf[130]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[131]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_memq(t3,((C_word*)t0)[3]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3603,a[2]=((C_word*)t0)[4],a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:583: g912 */
t8=t7;
f_3603(t8,((C_word*)t0)[2],t6);}
else{
/* srfi-4.scm:587: ##sys#read-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[133]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[133]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[134];
av2[4]=t3;
tp(5,av2);}}}}

/* k2783 in doloop639 in k2771 in list->s8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2785,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2778(t4,((C_word*)t0)[5],t2,t3);}

/* s8vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3096(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3096,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[6],lf[67]);
t4=C_u_i_s8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3105,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3105(t8,t1,C_fix(0));}

/* k3088 in loop in u8vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3090,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* u16vector-set! in k1484 */
static void C_ccall f_1626(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1626,5,av);}
a=C_alloc(7);
t5=C_i_check_structure_2(t2,lf[8],lf[23]);
t6=C_u_i_16vector_length(t2);
t7=C_i_check_exact_2(t4,lf[23]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1636,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-4.scm:120: ##sys#error */
t9=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[23];
av2[3]=lf[24];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t9=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_1636(2,av2);}}}

/* k1622 in s8vector-set! in k1484 */
static void C_ccall f_1624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1624,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_u_i_s8vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop511 in k2361 in k2393 in make-u32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static C_word C_fcall f_2377(C_word t0,C_word t1){
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

/* k1634 in u16vector-set! in k1484 */
static void C_ccall f_1636(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_1636,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[23]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[6]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_u_i_u16vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=t7;
av2[3]=lf[23];
av2[4]=t3;
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[6];
tp(7,av2);}}}

/* k2999 in doloop717 in k2987 in list->f64vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3001,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2994(t4,((C_word*)t0)[5],t2,t3);}

/* k2771 in list->s8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2773(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2773,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2778,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2778(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* u32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3042,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:438: list->u32vector */
t3=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* doloop639 in k2771 in list->s8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_2778(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2778,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2785,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:414: s8vector-set! */
t7=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:414: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* s32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3048,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:441: list->s32vector */
t3=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a4280 in k1876 in k1872 in k1484 */
static void C_ccall f_4281(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4281,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[8],lf[36]);
t5=C_u_i_s16vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4309,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[36]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_u_i_u16vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t6;
av2[2]=t11;
av2[3]=lf[36];
av2[4]=t7;
av2[5]=C_fix(0);
av2[6]=t5;
tp(7,av2);}}}

/* u8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3018,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:426: list->u8vector */
t3=*((C_word*)lf[57]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* f32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3054,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:444: list->f32vector */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* make-f64vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,4)))){
C_save_and_reclaim((void*)f_2630,c,av);}
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
C_word t22;
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
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2691,a[2]=t7,a[3]=t2,a[4]=t1,a[5]=t12,a[6]=t17,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t21=C_fixnum_shift_left(t2,C_fix(3));
/* srfi-4.scm:377: alloc */
f_1911(t20,lf[56],t21,t12);}

/* s8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3024,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:429: list->s8vector */
t3=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3486,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[99]+1 /* (set! u16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3490,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:543: pack-copy */
f_3362(t3,lf[10],lf[100]);}

/* k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3482,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[98]+1 /* (set! s8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3486,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:542: pack-copy */
f_3362(t3,lf[8],lf[99]);}

/* f64vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3060,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:447: list->f64vector */
t3=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2665 in k2653 in k2689 in make-f64vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_2667(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2667,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li34),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t3;
av2[1]=(
  f_2672(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* u8vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3066(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3066,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[4],lf[66]);
t4=C_u_i_u8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3075,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3075(t8,t1,C_fix(0));}

/* u16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3030,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:432: list->u16vector */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3498,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[102]+1 /* (set! s32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3502,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:546: pack-copy */
f_3362(t3,lf[16],lf[103]);}

/* k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3494,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[101]+1 /* (set! u32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3498,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:545: pack-copy */
f_3362(t3,lf[14],lf[102]);}

/* s16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3036,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:435: list->s16vector */
t3=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3490,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[100]+1 /* (set! s16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:544: pack-copy */
f_3362(t3,lf[12],lf[101]);}

/* k2653 in k2689 in make-f64vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2655(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2655,2,av);}
a=C_alloc(10);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_i_check_number_2(((C_word*)((C_word*)t0)[2])[1],lf[56]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)((C_word*)t0)[2])[1]))){
t5=t4;
f_2667(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_a_i_fix_to_flo(&a,1,((C_word*)((C_word*)t0)[2])[1]));
t6=t4;
f_2667(t6,t5);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* loop in u8vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3075(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3075,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_u8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3090,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:470: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k4097 in read-u8vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in ... */
static void C_ccall f_4099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4099,2,av);}
a=C_alloc(3);
t2=C_string_to_bytevector(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record2(&a,2,lf[4],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* read-u8vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_4083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,3)))){
C_save_and_reclaim((void*)f_4083,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
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
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[149]+1):C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4099,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:665: ##sys#read-string/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[152]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[152]+1);
av2[1]=t11;
av2[2]=t4;
av2[3]=t8;
tp(4,av2);}}

/* k1764 in k1761 in s32vector-set! in k1484 */
static void C_ccall f_1766(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_1766,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[30]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[6]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_u_i_s32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=t7;
av2[3]=lf[30];
av2[4]=t3;
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[6];
tp(7,av2);}}}

/* k1761 in s32vector-set! in k1484 */
static void C_ccall f_1763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1763,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fits_in_int_p(((C_word*)t0)[5]))){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1766(2,av2);}}
else{
/* srfi-4.scm:147: ##sys#error */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[30];
av2[3]=lf[31];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k2689 in make-f64vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2691,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[18],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:378: set-finalizer! */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2655(2,av2);}}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2655(2,av2);}}}

/* k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3478,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[97]+1 /* (set! u8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:541: pack-copy */
f_3362(t3,lf[6],lf[98]);}

/* k4367 in a4340 in k1484 */
static void C_ccall f_4369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4369,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_u_i_u8vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1733 in k1709 in k1706 in u32vector-set! in k1484 */
static void C_ccall f_1735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1735,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_u_i_u32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop593 in k2665 in k2653 in k2689 in make-f64vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static C_word C_fcall f_2672(C_word t0,C_word t1){
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

/* a4340 in k1484 */
static void C_ccall f_4341(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4341,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[4],lf[34]);
t5=C_u_i_s8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4369,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[34]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_u_i_u8vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t6;
av2[2]=t11;
av2[3]=lf[34];
av2[4]=t7;
av2[5]=C_fix(0);
av2[6]=t5;
tp(7,av2);}}}

/* make-u16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_2146,c,av);}
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
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2203,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t20=C_fixnum_shift_left(t2,C_fix(1));
/* srfi-4.scm:313: alloc */
f_1911(t19,lf[51],t20,t11);}

/* s32vector-set! in k1484 */
static void C_ccall f_1756(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1756,5,av);}
a=C_alloc(7);
t5=C_i_check_structure_2(t2,lf[14],lf[30]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1763,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:145: ##sys#check-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t7;
av2[2]=t4;
av2[3]=lf[30];
tp(4,av2);}}

/* list->s32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2910(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2910,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[14]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2917,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:418: make-s32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2915 in list->s32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2917(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2917,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2922,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2922(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k2169 in k2201 in make-u16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2171,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:318: ##sys#check-exact-interval */
f_1488(t2,((C_word*)t0)[2],C_fix(0),C_fix(65535),lf[51]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* list->f32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2946(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2946,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[16]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2953,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:419: make-f32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* loop in u16vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3135(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3135,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_u16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3150,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:472: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* u16vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3126(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3126,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[8],lf[68]);
t4=C_u_i_u16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3135,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3135(t8,t1,C_fix(0));}

/* a4190 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_4191(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,6)))){
C_save_and_reclaim((void *)f_4191,4,av);}
a=C_alloc(9);
t4=C_i_check_structure_2(t2,lf[14],lf[39]);
t5=C_u_i_s32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4219,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[39]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_a_u_i_s32vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t6;
av2[2]=t11;
av2[3]=lf[39];
av2[4]=t7;
av2[5]=C_fix(0);
av2[6]=t5;
tp(7,av2);}}}

/* doloop691 in k2915 in list->s32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_2922(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2922,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2929,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:418: s32vector-set! */
t7=*((C_word*)lf[30]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:418: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k2927 in doloop691 in k2915 in list->s32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2929,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2922(t4,((C_word*)t0)[5],t2,t3);}

/* doloop626 in k2735 in list->u8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_2742(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2742,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2749,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:413: u8vector-set! */
t7=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:413: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* loop in s8vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3105(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3105,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_s8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3120,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:471: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k2747 in doloop626 in k2735 in list->u8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2749,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2742(t4,((C_word*)t0)[5],t2,t3);}

/* k1709 in k1706 in u32vector-set! in k1484 */
static void C_ccall f_1711(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_1711,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[26]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[6]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_u_i_u32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=t7;
av2[3]=lf[26];
av2[4]=t3;
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[6];
tp(7,av2);}}}

/* k4187 in a4160 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_4189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_4189,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_u_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3372 */
static void C_ccall f_3374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3374,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_copy_block(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop704 in k2951 in list->f32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_2958(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2958,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2965,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:419: f32vector-set! */
t7=*((C_word*)lf[32]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:419: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k2951 in list->f32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2953(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2953,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2958,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2958(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k2735 in list->u8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2737(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2737,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2742,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2742(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* list->u8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2730(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2730,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[4]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2737,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:413: make-u8vector */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* doloop430 in k2083 in k2074 in k2106 in make-s8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static C_word C_fcall f_2090(C_word t0,C_word t1){
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

/* unpack in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3380(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3380,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3382,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_3382 in unpack in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3382(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3382,3,av);}
a=C_alloc(8);
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=t4;
t6=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3398,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_3398(t8,t6);}
else{
t8=C_fixnum_modulo(t5,((C_word*)t0)[3]);
t9=t7;
f_3398(t9,C_eqp(C_fix(0),t8));}}

/* make-u32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_2338,c,av);}
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
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2395,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t20=C_fixnum_shift_left(t2,C_fix(2));
/* srfi-4.scm:337: alloc */
f_1911(t19,lf[53],t20,t11);}

/* f_3364 in pack-copy in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3364(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3364,3,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3374,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_block_size(t5);
/* srfi-4.scm:507: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t6;
av2[2]=t7;
tp(3,av2);}}

/* pack-copy in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3362(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3362,3,t1,t2,t3);}
a=C_alloc(5);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3364,a[2]=t2,a[3]=t3,a[4]=((C_word)li84),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2083 in k2074 in k2106 in make-s8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2085,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(
  f_2090(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f5023 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f5023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5023,3,av);}
t3=C_i_check_structure_2(t2,lf[4],lf[89]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_3412 in unpack-copy in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3412(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3412,3,av);}
a=C_alloc(8);
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3422,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:523: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t6;
av2[2]=t5;
tp(3,av2);}}

/* unpack-copy in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3410(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3410,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3412,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3118 in loop in s8vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3120,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3420 */
static void C_ccall f_3422(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3422,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3431,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_3431(t5,t3);}
else{
t5=C_fixnum_modulo(((C_word*)t0)[7],((C_word*)t0)[2]);
t6=t4;
f_3431(t6,C_eqp(C_fix(0),t5));}}

/* k3396 */
static void C_fcall f_3398(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_3398,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_record2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* srfi-4.scm:517: ##sys#error */
t2=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[5];
av2[3]=lf[86];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}}

/* k3429 in k3420 */
static void C_fcall f_3431(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_3431,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_copy_block(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_record2(&a,2,((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* srfi-4.scm:529: ##sys#error */
t2=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[6];
av2[3]=lf[88];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[7];
av2[6]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}}

/* list->u16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2802(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2802,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[8]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2809,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:415: make-u16vector */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2807 in list->u16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2809(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2809,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2814,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2814(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k3612 in g912 in k3582 in user-read-hook in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in ... */
static void C_ccall f_3614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3614,2,av);}
/* srfi-4.scm:586: g915 */
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
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k2819 in doloop652 in k2807 in list->u16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2821,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2814(t4,((C_word*)t0)[5],t2,t3);}

/* loop in f64vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3282(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3282,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3296,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:477: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k3294 in loop in f64vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3296,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop652 in k2807 in list->u16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_2814(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2814,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2821,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:415: u16vector-set! */
t7=*((C_word*)lf[23]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:415: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k1979 in k2011 in make-u8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_1981,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1990,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:294: ##sys#check-exact-interval */
f_1488(t2,((C_word*)t0)[2],C_fix(0),C_fix(255),lf[48]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2843 in list->s16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2845(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2845,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2850,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2850(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

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
else C_toplevel_entry(C_text("srfi_2d4_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_srfi_2d4_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(973))){
C_save(t1);
C_rereclaim2(973*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,164);
lf[1]=C_h_intern(&lf[1],9,"\003syserror");
lf[2]=C_decode_literal(C_heaptop,"\376B\000\000&numeric value is not in expected range");
lf[3]=C_h_intern(&lf[3],15,"u8vector-length");
lf[4]=C_h_intern(&lf[4],8,"u8vector");
lf[5]=C_h_intern(&lf[5],15,"s8vector-length");
lf[6]=C_h_intern(&lf[6],8,"s8vector");
lf[7]=C_h_intern(&lf[7],16,"u16vector-length");
lf[8]=C_h_intern(&lf[8],9,"u16vector");
lf[9]=C_h_intern(&lf[9],16,"s16vector-length");
lf[10]=C_h_intern(&lf[10],9,"s16vector");
lf[11]=C_h_intern(&lf[11],16,"u32vector-length");
lf[12]=C_h_intern(&lf[12],9,"u32vector");
lf[13]=C_h_intern(&lf[13],16,"s32vector-length");
lf[14]=C_h_intern(&lf[14],9,"s32vector");
lf[15]=C_h_intern(&lf[15],16,"f32vector-length");
lf[16]=C_h_intern(&lf[16],9,"f32vector");
lf[17]=C_h_intern(&lf[17],16,"f64vector-length");
lf[18]=C_h_intern(&lf[18],9,"f64vector");
lf[19]=C_h_intern(&lf[19],13,"u8vector-set!");
lf[20]=C_h_intern(&lf[20],14,"\003syserror-hook");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[22]=C_h_intern(&lf[22],13,"s8vector-set!");
lf[23]=C_h_intern(&lf[23],14,"u16vector-set!");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[25]=C_h_intern(&lf[25],14,"s16vector-set!");
lf[26]=C_h_intern(&lf[26],14,"u32vector-set!");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\036argument exceeds integer range");
lf[29]=C_h_intern(&lf[29],17,"\003syscheck-integer");
lf[30]=C_h_intern(&lf[30],14,"s32vector-set!");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\036argument exceeds integer range");
lf[32]=C_h_intern(&lf[32],14,"f32vector-set!");
lf[33]=C_h_intern(&lf[33],14,"f64vector-set!");
lf[34]=C_h_intern(&lf[34],12,"u8vector-ref");
lf[35]=C_h_intern(&lf[35],12,"s8vector-ref");
lf[36]=C_h_intern(&lf[36],13,"u16vector-ref");
lf[37]=C_h_intern(&lf[37],13,"s16vector-ref");
lf[38]=C_h_intern(&lf[38],13,"u32vector-ref");
lf[39]=C_h_intern(&lf[39],13,"s32vector-ref");
lf[40]=C_h_intern(&lf[40],13,"f32vector-ref");
lf[41]=C_h_intern(&lf[41],13,"f64vector-ref");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000:not enough memory - cannot allocate external number vector");
lf[43]=C_h_intern(&lf[43],19,"\003sysallocate-vector");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\020size is negative");
lf[45]=C_h_intern(&lf[45],21,"release-number-vector");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\047bad argument type - not a number vector");
lf[47]=C_h_intern(&lf[47],14,"number-vector\077");
lf[48]=C_h_intern(&lf[48],13,"make-u8vector");
lf[49]=C_h_intern(&lf[49],14,"set-finalizer!");
lf[50]=C_h_intern(&lf[50],13,"make-s8vector");
lf[51]=C_h_intern(&lf[51],14,"make-u16vector");
lf[52]=C_h_intern(&lf[52],14,"make-s16vector");
lf[53]=C_h_intern(&lf[53],14,"make-u32vector");
lf[54]=C_h_intern(&lf[54],14,"make-s32vector");
lf[55]=C_h_intern(&lf[55],14,"make-f32vector");
lf[56]=C_h_intern(&lf[56],14,"make-f64vector");
lf[57]=C_h_intern(&lf[57],14,"list->u8vector");
lf[58]=C_h_intern(&lf[58],27,"\003syserror-not-a-proper-list");
lf[59]=C_h_intern(&lf[59],14,"list->s8vector");
lf[60]=C_h_intern(&lf[60],15,"list->u16vector");
lf[61]=C_h_intern(&lf[61],15,"list->s16vector");
lf[62]=C_h_intern(&lf[62],15,"list->u32vector");
lf[63]=C_h_intern(&lf[63],15,"list->s32vector");
lf[64]=C_h_intern(&lf[64],15,"list->f32vector");
lf[65]=C_h_intern(&lf[65],15,"list->f64vector");
lf[66]=C_h_intern(&lf[66],14,"u8vector->list");
lf[67]=C_h_intern(&lf[67],14,"s8vector->list");
lf[68]=C_h_intern(&lf[68],15,"u16vector->list");
lf[69]=C_h_intern(&lf[69],15,"s16vector->list");
lf[70]=C_h_intern(&lf[70],15,"u32vector->list");
lf[71]=C_h_intern(&lf[71],15,"s32vector->list");
lf[72]=C_h_intern(&lf[72],15,"f32vector->list");
lf[73]=C_h_intern(&lf[73],15,"f64vector->list");
lf[74]=C_h_intern(&lf[74],9,"u8vector\077");
lf[75]=C_h_intern(&lf[75],9,"s8vector\077");
lf[76]=C_h_intern(&lf[76],10,"u16vector\077");
lf[77]=C_h_intern(&lf[77],10,"s16vector\077");
lf[78]=C_h_intern(&lf[78],10,"u32vector\077");
lf[79]=C_h_intern(&lf[79],10,"s32vector\077");
lf[80]=C_h_intern(&lf[80],10,"f32vector\077");
lf[81]=C_h_intern(&lf[81],10,"f64vector\077");
lf[82]=C_h_intern(&lf[82],18,"\003syssrfi-4-vector\077");
lf[84]=C_h_intern(&lf[84],13,"\003sysmake-blob");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000+blob does not have correct size for packing");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000+blob does not have correct size for packing");
lf[89]=C_h_intern(&lf[89],21,"u8vector->blob/shared");
lf[90]=C_h_intern(&lf[90],21,"s8vector->blob/shared");
lf[91]=C_h_intern(&lf[91],22,"u16vector->blob/shared");
lf[92]=C_h_intern(&lf[92],22,"s16vector->blob/shared");
lf[93]=C_h_intern(&lf[93],22,"u32vector->blob/shared");
lf[94]=C_h_intern(&lf[94],22,"s32vector->blob/shared");
lf[95]=C_h_intern(&lf[95],22,"f32vector->blob/shared");
lf[96]=C_h_intern(&lf[96],22,"f64vector->blob/shared");
lf[97]=C_h_intern(&lf[97],14,"u8vector->blob");
lf[98]=C_h_intern(&lf[98],14,"s8vector->blob");
lf[99]=C_h_intern(&lf[99],15,"u16vector->blob");
lf[100]=C_h_intern(&lf[100],15,"s16vector->blob");
lf[101]=C_h_intern(&lf[101],15,"u32vector->blob");
lf[102]=C_h_intern(&lf[102],15,"s32vector->blob");
lf[103]=C_h_intern(&lf[103],15,"f32vector->blob");
lf[104]=C_h_intern(&lf[104],15,"f64vector->blob");
lf[105]=C_h_intern(&lf[105],21,"blob->u8vector/shared");
lf[106]=C_h_intern(&lf[106],21,"blob->s8vector/shared");
lf[107]=C_h_intern(&lf[107],22,"blob->u16vector/shared");
lf[108]=C_h_intern(&lf[108],22,"blob->s16vector/shared");
lf[109]=C_h_intern(&lf[109],22,"blob->u32vector/shared");
lf[110]=C_h_intern(&lf[110],22,"blob->s32vector/shared");
lf[111]=C_h_intern(&lf[111],22,"blob->f32vector/shared");
lf[112]=C_h_intern(&lf[112],22,"blob->f64vector/shared");
lf[113]=C_h_intern(&lf[113],14,"blob->u8vector");
lf[114]=C_h_intern(&lf[114],14,"blob->s8vector");
lf[115]=C_h_intern(&lf[115],15,"blob->u16vector");
lf[116]=C_h_intern(&lf[116],15,"blob->s16vector");
lf[117]=C_h_intern(&lf[117],15,"blob->u32vector");
lf[118]=C_h_intern(&lf[118],15,"blob->s32vector");
lf[119]=C_h_intern(&lf[119],15,"blob->f32vector");
lf[120]=C_h_intern(&lf[120],15,"blob->f64vector");
lf[121]=C_h_intern(&lf[121],18,"\003sysuser-read-hook");
lf[122]=C_h_intern(&lf[122],2,"u8");
lf[123]=C_h_intern(&lf[123],2,"s8");
lf[124]=C_h_intern(&lf[124],3,"u16");
lf[125]=C_h_intern(&lf[125],3,"s16");
lf[126]=C_h_intern(&lf[126],3,"u32");
lf[127]=C_h_intern(&lf[127],3,"s32");
lf[128]=C_h_intern(&lf[128],3,"f32");
lf[129]=C_h_intern(&lf[129],3,"f64");
lf[130]=C_h_intern(&lf[130],1,"f");
lf[131]=C_h_intern(&lf[131],1,"F");
lf[132]=C_h_intern(&lf[132],4,"read");
lf[133]=C_h_intern(&lf[133],14,"\003sysread-error");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal bytevector syntax");
lf[135]=C_h_intern(&lf[135],19,"\003sysuser-print-hook");
lf[136]=C_h_intern(&lf[136],9,"\003sysprint");
lf[138]=C_h_intern(&lf[138],11,"subu8vector");
lf[139]=C_h_intern(&lf[139],12,"subu16vector");
lf[140]=C_h_intern(&lf[140],12,"subu32vector");
lf[141]=C_h_intern(&lf[141],11,"subs8vector");
lf[142]=C_h_intern(&lf[142],12,"subs16vector");
lf[143]=C_h_intern(&lf[143],12,"subs32vector");
lf[144]=C_h_intern(&lf[144],12,"subf32vector");
lf[145]=C_h_intern(&lf[145],12,"subf64vector");
lf[146]=C_h_intern(&lf[146],14,"write-u8vector");
lf[147]=C_h_intern(&lf[147],19,"\003sysstandard-output");
lf[148]=C_h_intern(&lf[148],14,"read-u8vector!");
lf[149]=C_h_intern(&lf[149],18,"\003sysstandard-input");
lf[150]=C_h_intern(&lf[150],16,"\003sysread-string!");
lf[151]=C_h_intern(&lf[151],13,"read-u8vector");
lf[152]=C_h_intern(&lf[152],20,"\003sysread-string/port");
lf[153]=C_h_intern(&lf[153],17,"register-feature!");
lf[154]=C_h_intern(&lf[154],6,"srfi-4");
lf[155]=C_h_intern(&lf[155],18,"getter-with-setter");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\023(f64vector-ref v i)");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\023(f32vector-ref v i)");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\023(s32vector-ref v i)");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\023(u32vector-ref v i)");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\023(s16vector-ref v i)");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\023(u16vector-ref v i)");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\022(s8vector-ref v i)");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\022(u8vector-ref v i)");
C_register_lf2(lf,164,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1486,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* doloop403 in k1988 in k1979 in k2011 in make-u8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static C_word C_fcall f_1995(C_word t0,C_word t1){
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

/* list->s16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2838(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2838,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[10]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2845,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:416: make-s16vector */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k1988 in k1979 in k2011 in make-u8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1990,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(
  f_1995(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3207 in loop in u32vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3209,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* make-s8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_2051,c,av);}
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
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2108,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:301: alloc */
f_1911(t19,lf[50],t2,t11);}

/* f32vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3244(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3244,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[16],lf[72]);
t4=C_u_i_f32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3253,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3253(t8,t1,C_fix(0));}

/* k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in ... */
static void C_ccall f_3550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3550,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[115]+1 /* (set! blob->u16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:561: unpack-copy */
f_3410(t3,lf[10],C_fix(2),lf[116]);}

/* s32vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3215(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3215,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[14],lf[71]);
t4=C_u_i_s32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3224,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3224(t8,t1,C_fix(0));}

/* k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in ... */
static void C_ccall f_3554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3554,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[116]+1 /* (set! blob->s16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3558,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:562: unpack-copy */
f_3410(t3,lf[12],C_fix(4),lf[117]);}

/* loop in f32vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3253(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3253,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3267,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:476: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* doloop665 in k2843 in list->s16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_2850(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2850,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2857,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:416: s16vector-set! */
t7=*((C_word*)lf[25]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:416: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k2855 in doloop665 in k2843 in list->s16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2857,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2850(t4,((C_word*)t0)[5],t2,t3);}

/* loop in s32vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3224(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3224,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3238,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:475: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in ... */
static void C_ccall f_3562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3562,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[118]+1 /* (set! blob->s32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3566,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:564: unpack-copy */
f_3410(t3,lf[16],C_fix(4),lf[119]);}

/* k2074 in k2106 in make-s8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2076,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2085,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:306: ##sys#check-exact-interval */
f_1488(t2,((C_word*)t0)[2],C_fix(-128),C_fix(127),lf[50]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in ... */
static void C_ccall f_3558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3558,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[117]+1 /* (set! blob->u32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3562,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:563: unpack-copy */
f_3410(t3,lf[14],C_fix(4),lf[118]);}

/* k1583 in k1559 in u8vector-set! in k1484 */
static void C_ccall f_1585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1585,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_u_i_u8vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* make-s16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_2242,c,av);}
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
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2299,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t20=C_fixnum_shift_left(t2,C_fix(1));
/* srfi-4.scm:325: alloc */
f_1911(t19,lf[52],t20,t11);}

/* k3265 in loop in f32vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3267,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in ... */
static void C_ccall f_3530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3530,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[110]+1 /* (set! blob->s32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3534,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:555: unpack */
f_3380(t3,lf[16],C_fix(4),lf[111]);}

/* k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in ... */
static void C_ccall f_3534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3534,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[111]+1 /* (set! blob->f32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3538,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:556: unpack */
f_3380(t3,lf[18],C_fix(8),lf[112]);}

/* k3236 in loop in s32vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3238,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in ... */
static void C_ccall f_3566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3566,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[119]+1 /* (set! blob->f32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:565: unpack-copy */
f_3410(t3,lf[18],C_fix(8),lf[120]);}

/* f64vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3273(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3273,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[18],lf[73]);
t4=C_u_i_f64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3282,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li74),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3282(t8,t1,C_fix(0));}

/* s8vector-set! in k1484 */
static void C_ccall f_1593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_1593,5,av);}
a=C_alloc(6);
t5=C_i_check_structure_2(t2,lf[6],lf[22]);
t6=C_u_i_8vector_length(t2);
t7=C_i_check_exact_2(t4,lf[22]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1624,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[22]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_u_i_s8vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t8;
av2[2]=t13;
av2[3]=lf[22];
av2[4]=t9;
av2[5]=C_fix(0);
av2[6]=t6;
tp(7,av2);}}}

/* k2274 in k2265 in k2297 in make-s16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2276,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(
  f_2281(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4127 in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_4129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4129,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in ... */
static void C_ccall f_3542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3542,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[113]+1 /* (set! blob->u8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3546,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:559: unpack-copy */
f_3410(t3,lf[6],C_SCHEME_TRUE,lf[114]);}

/* k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in ... */
static void C_ccall f_3538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3538,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[112]+1 /* (set! blob->f64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3542,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:558: unpack-copy */
f_3410(t3,lf[4],C_SCHEME_TRUE,lf[113]);}

/* k2265 in k2297 in make-s16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2267,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2276,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:330: ##sys#check-exact-interval */
f_1488(t2,((C_word*)t0)[2],C_fix(-32768),C_fix(32767),lf[52]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3881 in write-u8vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in ... */
static void C_ccall f_3883(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_3883,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
t4=C_i_check_exact_2(((C_word*)t0)[5],lf[146]);
t5=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[5]);
t6=(C_truep(t5)?C_fixnum_lessp(((C_word*)t0)[5],t3):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
f_3886(2,av2);}}
else{
t7=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=t7;
av2[3]=lf[146];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=t3;
tp(7,av2);}}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_3886(2,av2);}}}

/* k3884 in k3881 in write-u8vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in ... */
static void C_ccall f_3886(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_3886,2,av);}
a=C_alloc(9);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(3));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3899,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=C_eqp(((C_word*)t0)[6],C_fix(0));
if(C_truep(t6)){
t7=C_i_not(((C_word*)t0)[5]);
t8=t5;
f_3899(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[5],((C_word*)t0)[7])));}
else{
t7=t5;
f_3899(t7,C_SCHEME_FALSE);}}

/* k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3514,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[106]+1 /* (set! blob->s8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:551: unpack */
f_3380(t3,lf[8],C_fix(2),lf[107]);}

/* k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3510,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[105]+1 /* (set! blob->u8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3514,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:550: unpack */
f_3380(t3,lf[6],C_SCHEME_TRUE,lf[106]);}

/* k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in ... */
static void C_ccall f_3546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3546,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[114]+1 /* (set! blob->s8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3550,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:560: unpack-copy */
f_3410(t3,lf[8],C_fix(2),lf[115]);}

/* k3897 in k3884 in k3881 in write-u8vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in ... */
static void C_fcall f_3899(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_3899,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* srfi-4.scm:642: g1041 */
t3=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3909,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:651: subu8vector */
t3=*((C_word*)lf[138]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* srfi-4.scm:651: subu8vector */
t3=*((C_word*)lf[138]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* subu32vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3798(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3798,5,av);}
/* srfi-4.scm:632: subnvector */
f_3701(t1,t2,lf[12],C_fix(4),t3,t4,lf[140]);}

/* k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3522,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[108]+1 /* (set! blob->s16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:553: unpack */
f_3380(t3,lf[12],C_fix(4),lf[109]);}

/* subu16vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3792(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3792,5,av);}
/* srfi-4.scm:631: subnvector */
f_3701(t1,t2,lf[8],C_fix(2),t3,t4,lf[139]);}

/* k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3518,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[107]+1 /* (set! blob->u16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3522,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:552: unpack */
f_3380(t3,lf[10],C_fix(2),lf[108]);}

/* k2489 in make-s32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2491,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[14],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:350: set-finalizer! */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2459(2,av2);}}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2459(2,av2);}}}

/* k2178 in k2169 in k2201 in make-u16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2180,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(
  f_2185(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop457 in k2178 in k2169 in k2201 in make-u16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static C_word C_fcall f_2185(C_word t0,C_word t1){
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

/* k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 in ... */
static void C_ccall f_3526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3526,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[109]+1 /* (set! blob->u32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:554: unpack */
f_3380(t3,lf[14],C_fix(4),lf[110]);}

/* k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3502,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[103]+1 /* (set! f32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:547: pack-copy */
f_3362(t3,lf[18],lf[104]);}

/* subs8vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3804(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3804,5,av);}
/* srfi-4.scm:633: subnvector */
f_3701(t1,t2,lf[6],C_fix(1),t3,t4,lf[141]);}

/* doloop538 in k2457 in k2489 in make-s32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static C_word C_fcall f_2473(C_word t0,C_word t1){
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

/* subu8vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3786(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3786,5,av);}
/* srfi-4.scm:630: subnvector */
f_3701(t1,t2,lf[4],C_fix(1),t3,t4,lf[138]);}

/* a4130 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_4131(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,6)))){
C_save_and_reclaim((void *)f_4131,4,av);}
a=C_alloc(9);
t4=C_i_check_structure_2(t2,lf[18],lf[41]);
t5=C_u_i_f64vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4159,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[41]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_a_u_i_f64vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t6;
av2[2]=t11;
av2[3]=lf[41];
av2[4]=t7;
av2[5]=C_fix(0);
av2[6]=t5;
tp(7,av2);}}}

/* k1697 in s16vector-set! in k1484 */
static void C_ccall f_1699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1699,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_u_i_s16vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* subs16vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3810(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3810,5,av);}
/* srfi-4.scm:634: subnvector */
f_3701(t1,t2,lf[10],C_fix(2),t3,t4,lf[142]);}

/* subs32vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3816(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3816,5,av);}
/* srfi-4.scm:635: subnvector */
f_3701(t1,t2,lf[14],C_fix(4),t3,t4,lf[143]);}

/* s8vector-length in k1484 */
static void C_ccall f_1509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1509,3,av);}
t3=C_i_check_structure_2(t2,lf[6],lf[5]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_8vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* u8vector-length in k1484 */
static void C_ccall f_1503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1503,3,av);}
t3=C_i_check_structure_2(t2,lf[4],lf[3]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_8vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* u16vector-length in k1484 */
static void C_ccall f_1515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1515,3,av);}
t3=C_i_check_structure_2(t2,lf[8],lf[7]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_16vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* u32vector-length in k1484 */
static void C_ccall f_1527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1527,3,av);}
t3=C_i_check_structure_2(t2,lf[12],lf[11]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_32vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* s16vector-length in k1484 */
static void C_ccall f_1521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1521,3,av);}
t3=C_i_check_structure_2(t2,lf[10],lf[9]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_16vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5002 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5002,3,av);}
t3=C_i_check_structure_2(t2,lf[10],lf[92]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5009 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f5009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5009,3,av);}
t3=C_i_check_structure_2(t2,lf[8],lf[91]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5016 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f5016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5016,3,av);}
t3=C_i_check_structure_2(t2,lf[6],lf[90]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* s8vector? in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3308,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[6]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* list->s8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2766(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2766,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[6]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2773,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:414: make-s8vector */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* u8vector? in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3302,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3645 in user-print-hook in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in ... */
static void C_ccall f_3647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3647,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* srfi-4.scm:607: ##sys#print */
t4=*((C_word*)lf[136]+1);{
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

/* a4220 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_4221(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,6)))){
C_save_and_reclaim((void *)f_4221,4,av);}
a=C_alloc(9);
t4=C_i_check_structure_2(t2,lf[12],lf[38]);
t5=C_u_i_u32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4249,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[38]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_a_u_i_u32vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t6;
av2[2]=t11;
av2[3]=lf[38];
av2[4]=t7;
av2[5]=C_fix(0);
av2[6]=t5;
tp(7,av2);}}}

/* k4217 in a4190 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_4219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_4219,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_u_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* read-u8vector! in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_4003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_4003,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+10);
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
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=C_i_nullp(t4);
t7=(C_truep(t6)?*((C_word*)lf[149]+1):C_i_car(t4));
t8=t7;
t9=C_i_nullp(t4);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_fix(0):C_i_car(t10));
t13=t12;
t14=C_i_nullp(t10);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t16=C_i_check_port_2(t8,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[148]);
t17=C_i_check_exact_2(t13,lf[148]);
t18=C_i_check_structure_2(t3,lf[4],lf[148]);
t19=(C_truep(((C_word*)t5)[1])?C_i_check_exact_2(((C_word*)t5)[1],lf[148]):C_SCHEME_UNDEFINED);
t20=C_slot(t3,C_fix(1));
t21=t20;
t22=C_block_size(t21);
t23=t22;
t24=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4043,a[2]=t1,a[3]=t5,a[4]=t21,a[5]=t8,a[6]=t13,a[7]=t23,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t5)[1])){
t25=C_fixnum_plus(t13,((C_word*)t5)[1]);
t26=t24;
f_4043(t26,C_fixnum_less_or_equal_p(t25,t23));}
else{
t25=t24;
f_4043(t25,C_SCHEME_FALSE);}}

/* k3658 in k3648 in k3645 in user-print-hook in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in ... */
static void C_ccall f_3660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3660,2,av);}
/* srfi-4.scm:608: ##sys#print */
t2=*((C_word*)lf[136]+1);{
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

/* f32vector? in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3338,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[16]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* subnvector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_fcall f_3701(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
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
C_word t21;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,6)))){
C_save_and_reclaim_args((void *)trf_3701,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(10);
t8=C_i_check_structure_2(t2,t3,t7);
t9=C_slot(t2,C_fix(1));
t10=t9;
t11=C_block_size(t10);
t12=C_u_fixnum_divide(t11,t4);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3735,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t10,a[7]=t1,a[8]=t12,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t14=C_fixnum_plus(t12,C_fix(1));
t15=t5;
t16=t7;
t17=C_i_check_exact_2(t15,t16);
t18=C_fixnum_less_or_equal_p(C_fix(0),t15);
t19=(C_truep(t18)?C_fixnum_lessp(t15,t14):C_SCHEME_FALSE);
if(C_truep(t19)){
t20=C_SCHEME_UNDEFINED;
t21=t13;{
C_word av2[2];
av2[0]=t21;
av2[1]=t20;
f_3735(2,av2);}}
else{
t20=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t13;
av2[2]=t20;
av2[3]=t16;
av2[4]=t15;
av2[5]=C_fix(0);
av2[6]=t14;
tp(7,av2);}}}

/* k4247 in a4220 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_4249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_4249,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_u_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1882,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[36]+1 /* (set! u16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1886,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4251,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:206: getter-with-setter */
t5=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[25]+1);
av2[4]=lf[160];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1886,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[37]+1 /* (set! s16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4221,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:216: getter-with-setter */
t5=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[26]+1);
av2[4]=lf[159];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1706 in u32vector-set! in k1484 */
static void C_ccall f_1708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1708,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_negativep(((C_word*)t0)[5]))){
/* srfi-4.scm:136: ##sys#error */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[26];
av2[3]=lf[27];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
if(C_truep(C_fits_in_unsigned_int_p(((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
f_1711(2,av2);}}
else{
/* srfi-4.scm:138: ##sys#error */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[26];
av2[3]=lf[28];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* s32vector? in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3332,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[14]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2565 in k2553 in k2589 in make-f32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_2567(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2567,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t3;
av2[1]=(
  f_2572(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* u32vector-set! in k1484 */
static void C_ccall f_1701(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1701,5,av);}
a=C_alloc(7);
t5=C_i_check_structure_2(t2,lf[12],lf[26]);
t6=C_u_i_32vector_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1708,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:134: ##sys#check-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t7;
av2[2]=t4;
av2[3]=lf[26];
tp(4,av2);}}

/* ##sys#user-print-hook in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3635(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(102,c,4)))){
C_save_and_reclaim((void *)f_3635,5,av);}
a=C_alloc(102);
t5=C_slot(t2,C_fix(0));
t6=C_a_i_list(&a,3,lf[4],lf[122],*((C_word*)lf[66]+1));
t7=C_a_i_list(&a,3,lf[6],lf[123],*((C_word*)lf[67]+1));
t8=C_a_i_list(&a,3,lf[8],lf[124],*((C_word*)lf[68]+1));
t9=C_a_i_list(&a,3,lf[10],lf[125],*((C_word*)lf[69]+1));
t10=C_a_i_list(&a,3,lf[12],lf[126],*((C_word*)lf[70]+1));
t11=C_a_i_list(&a,3,lf[14],lf[127],*((C_word*)lf[71]+1));
t12=C_a_i_list(&a,3,lf[16],lf[128],*((C_word*)lf[72]+1));
t13=C_a_i_list(&a,3,lf[18],lf[129],*((C_word*)lf[73]+1));
t14=C_a_i_list(&a,8,t6,t7,t8,t9,t10,t11,t12,t13);
t15=C_u_i_assq(t5,t14);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3647,a[2]=t15,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:606: ##sys#print */
t17=*((C_word*)lf[136]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t17;
av2[1]=t16;
av2[2]=C_make_character(35);
av2[3]=C_SCHEME_FALSE;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}
else{
/* srfi-4.scm:609: old-hook */
t16=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)C_fast_retrieve_proc(t16))(5,av2);}}}

/* subf32vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3822(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3822,5,av);}
/* srfi-4.scm:636: subnvector */
f_3701(t1,t2,lf[16],C_fix(4),t3,t4,lf[144]);}

/* k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1894,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[39]+1 /* (set! s32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4161,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:236: getter-with-setter */
t5=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[32]+1);
av2[4]=lf[157];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1898,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[40]+1 /* (set! f32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1902,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4131,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:246: getter-with-setter */
t5=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[33]+1);
av2[4]=lf[156];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* subf64vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3828(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3828,5,av);}
/* srfi-4.scm:637: subnvector */
f_3701(t1,t2,lf[18],C_fix(8),t3,t4,lf[145]);}

/* k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1890,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[38]+1 /* (set! u32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4191,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:226: getter-with-setter */
t5=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[30]+1);
av2[4]=lf[158];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2553 in k2589 in make-f32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2555(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2555,2,av);}
a=C_alloc(10);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_i_check_number_2(((C_word*)((C_word*)t0)[2])[1],lf[55]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2567,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)((C_word*)t0)[2])[1]))){
t5=t4;
f_2567(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_a_i_fix_to_flo(&a,1,((C_word*)((C_word*)t0)[2])[1]));
t6=t4;
f_2567(t6,t5);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f64vector? in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3344,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[18]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* g912 in k3582 in user-read-hook in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in ... */
static void C_fcall f_3603(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3603,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3614,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:586: read */
t7=*((C_word*)lf[132]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* write-u8vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in ... */
static void C_ccall f_3834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,6)))){
C_save_and_reclaim((void*)f_3834,c,av);}
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[147]+1):C_i_car(t3));
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
t19=C_i_check_structure_2(t2,lf[4],lf[146]);
t20=C_i_check_port_2(t6,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[146]);
t21=C_u_i_8vector_length(t2);
t22=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3883,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t16,a[6]=t11,a[7]=t21,tmp=(C_word)a,a+=8,tmp);
t23=(C_truep(t16)?C_fixnum_plus(t16,C_fix(1)):C_fixnum_plus(t21,C_fix(1)));
t24=C_i_check_exact_2(t11,lf[146]);
t25=C_fixnum_less_or_equal_p(C_fix(0),t11);
t26=(C_truep(t25)?C_fixnum_lessp(t11,t23):C_SCHEME_FALSE);
if(C_truep(t26)){
t27=C_SCHEME_UNDEFINED;
t28=t22;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t28;
av2[1]=t27;
f_3883(2,av2);}}
else{
t27=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t22;
av2[2]=t27;
av2[3]=lf[146];
av2[4]=t11;
av2[5]=C_fix(0);
av2[6]=t23;
tp(7,av2);}}}

/* k1864 in f64vector-set! in k1484 */
static void C_ccall f_1866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_1866,2,av);}
a=C_alloc(4);
if(C_truep(C_blockp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_u_i_f64vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_fix_to_flo(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_u_i_f64vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3648 in k3645 in user-print-hook in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in ... */
static void C_ccall f_3650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3650,2,av);}
a=C_alloc(4);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3660,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:608: g928 */
t4=t2;{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* u16vector? in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3314,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[8]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* u32vector? in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3326,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[12]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1872 in k1484 */
static void C_ccall f_1874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1874,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[34]+1 /* (set! u8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1878,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4311,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:186: getter-with-setter */
t5=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[22]+1);
av2[4]=lf[162];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1876 in k1872 in k1484 */
static void C_ccall f_1878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1878,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[35]+1 /* (set! s8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4281,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:196: getter-with-setter */
t5=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[23]+1);
av2[4]=lf[161];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* s16vector? in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3320,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[10]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* make-f32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,4)))){
C_save_and_reclaim((void*)f_2530,c,av);}
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
C_word t22;
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
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2591,a[2]=t7,a[3]=t2,a[4]=t1,a[5]=t12,a[6]=t17,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t21=C_fixnum_shift_left(t2,C_fix(2));
/* srfi-4.scm:361: alloc */
f_1911(t20,lf[55],t21,t12);}

/* k2891 in doloop678 in k2879 in list->u32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2893,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2886(t4,((C_word*)t0)[5],t2,t3);}

/* k1788 in k1764 in k1761 in s32vector-set! in k1484 */
static void C_ccall f_1790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1790,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_u_i_s32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f32vector-set! in k1484 */
static void C_ccall f_1798(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_1798,5,av);}
a=C_alloc(6);
t5=C_i_check_structure_2(t2,lf[16],lf[32]);
t6=C_u_i_32vector_length(t2);
t7=C_i_check_number_2(t4,lf[32]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1829,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[32]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=C_SCHEME_UNDEFINED;
t14=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t13;
f_1829(2,av2);}}
else{
t13=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t8;
av2[2]=t13;
av2[3]=lf[32];
av2[4]=t9;
av2[5]=C_fix(0);
av2[6]=t6;
tp(7,av2);}}}

/* list->u32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2874(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2874,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[12]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2881,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:417: make-u32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* doloop678 in k2879 in list->u32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_2886(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2886,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2893,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:417: u32vector-set! */
t7=*((C_word*)lf[26]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:417: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k2879 in list->u32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2881(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2881,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2886,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2886(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k3907 in k3897 in k3884 in k3881 in write-u8vector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in ... */
static void C_ccall f_3909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3909,2,av);}
t2=C_slot(t1,C_fix(1));
/* srfi-4.scm:642: g1041 */
t3=((C_word*)t0)[2];{
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
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(189,c,5)))){
C_save_and_reclaim((void *)f_1902,2,av);}
a=C_alloc(189);
t2=C_mutate2((C_word*)lf[41]+1 /* (set! f64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1909,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1911,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate2((C_word*)lf[45]+1 /* (set! release-number-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1941,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[48]+1 /* (set! make-u8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1956,a[2]=t3,a[3]=t4,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t7=C_mutate2((C_word*)lf[50]+1 /* (set! make-s8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2051,a[2]=t3,a[3]=t4,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate2((C_word*)lf[51]+1 /* (set! make-u16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2146,a[2]=t3,a[3]=t4,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t9=C_mutate2((C_word*)lf[52]+1 /* (set! make-s16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2242,a[2]=t3,a[3]=t4,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate2((C_word*)lf[53]+1 /* (set! make-u32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2338,a[2]=t3,a[3]=t4,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
t11=C_mutate2((C_word*)lf[54]+1 /* (set! make-s32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2434,a[2]=t3,a[3]=t4,a[4]=((C_word)li31),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate2((C_word*)lf[55]+1 /* (set! make-f32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2530,a[2]=t3,a[3]=t4,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate2((C_word*)lf[56]+1 /* (set! make-f64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2630,a[2]=t3,a[3]=t4,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t14=*((C_word*)lf[48]+1);
t15=C_mutate2((C_word*)lf[57]+1 /* (set! list->u8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2730,a[2]=t14,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp));
t16=*((C_word*)lf[50]+1);
t17=C_mutate2((C_word*)lf[59]+1 /* (set! list->s8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2766,a[2]=t16,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t18=*((C_word*)lf[51]+1);
t19=C_mutate2((C_word*)lf[60]+1 /* (set! list->u16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2802,a[2]=t18,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp));
t20=*((C_word*)lf[52]+1);
t21=C_mutate2((C_word*)lf[61]+1 /* (set! list->s16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2838,a[2]=t20,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp));
t22=*((C_word*)lf[53]+1);
t23=C_mutate2((C_word*)lf[62]+1 /* (set! list->u32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2874,a[2]=t22,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
t24=*((C_word*)lf[54]+1);
t25=C_mutate2((C_word*)lf[63]+1 /* (set! list->s32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2910,a[2]=t24,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp));
t26=*((C_word*)lf[55]+1);
t27=C_mutate2((C_word*)lf[64]+1 /* (set! list->f32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2946,a[2]=t26,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp));
t28=*((C_word*)lf[56]+1);
t29=C_mutate2((C_word*)lf[65]+1 /* (set! list->f64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2982,a[2]=t28,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp));
t30=C_mutate2((C_word*)lf[4]+1 /* (set! u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate2((C_word*)lf[6]+1 /* (set! s8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3024,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate2((C_word*)lf[8]+1 /* (set! u16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[10]+1 /* (set! s16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3036,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2((C_word*)lf[12]+1 /* (set! u32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3042,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[14]+1 /* (set! s32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3048,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[16]+1 /* (set! f32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3054,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[18]+1 /* (set! f64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3060,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[66]+1 /* (set! u8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3066,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[67]+1 /* (set! s8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3096,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[68]+1 /* (set! u16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3126,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[69]+1 /* (set! s16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3156,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[70]+1 /* (set! u32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3186,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2((C_word*)lf[71]+1 /* (set! s32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[72]+1 /* (set! f32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3244,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[73]+1 /* (set! f64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3273,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2((C_word*)lf[74]+1 /* (set! u8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3302,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[75]+1 /* (set! s8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3308,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2((C_word*)lf[76]+1 /* (set! u16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3314,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[77]+1 /* (set! s16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3320,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2((C_word*)lf[78]+1 /* (set! u32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3326,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate2((C_word*)lf[79]+1 /* (set! s32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3332,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate2((C_word*)lf[80]+1 /* (set! f32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3338,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate2((C_word*)lf[81]+1 /* (set! f64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3344,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[47]+1 /* (set! number-vector? ...) */,*((C_word*)lf[82]+1));
t55=C_mutate2(&lf[83] /* (set! pack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3362,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate2(&lf[85] /* (set! unpack ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3380,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate2(&lf[87] /* (set! unpack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3410,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5023,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
t59=C_mutate2((C_word*)lf[89]+1 /* (set! u8vector->blob/shared ...) */,t58);
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5016,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
t61=C_mutate2((C_word*)lf[90]+1 /* (set! s8vector->blob/shared ...) */,t60);
t62=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5009,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
t63=C_mutate2((C_word*)lf[91]+1 /* (set! u16vector->blob/shared ...) */,t62);
t64=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5002,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
t65=C_mutate2((C_word*)lf[92]+1 /* (set! s16vector->blob/shared ...) */,t64);
t66=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4995,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
t67=C_mutate2((C_word*)lf[93]+1 /* (set! u32vector->blob/shared ...) */,t66);
t68=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4988,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
t69=C_mutate2((C_word*)lf[94]+1 /* (set! s32vector->blob/shared ...) */,t68);
t70=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4981,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
t71=C_mutate2((C_word*)lf[95]+1 /* (set! f32vector->blob/shared ...) */,t70);
t72=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4974,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp);
t73=C_mutate2((C_word*)lf[96]+1 /* (set! f64vector->blob/shared ...) */,t72);
t74=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3478,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:540: pack-copy */
f_3362(t74,lf[4],lf[97]);}

/* k2106 in make-s8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2108,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[6],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:302: set-finalizer! */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2076(2,av2);}}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2076(2,av2);}}}

/* ext-free in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1909,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=stub367(C_SCHEME_UNDEFINED,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* alloc in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_1911(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_1911,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=C_i_check_exact_2(t3,t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1918,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* srfi-4.scm:272: ##sys#error */
t7=*((C_word*)lf[1]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[44];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_1918(2,av2);}}}

/* k1916 in alloc in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1918,2,av);}
a=C_alloc(3);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
t3=C_i_foreign_integer_argumentp(t2);
t4=stub362(C_SCHEME_UNDEFINED,t3);
if(C_truep(t4)){
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* srfi-4.scm:276: ##sys#error */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=lf[42];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1933,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:277: ##sys#allocate-vector */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k2393 in make-u32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2395,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[12],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:338: set-finalizer! */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2363(2,av2);}}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2363(2,av2);}}}

/* k1931 in k1916 in alloc in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1933,2,av);}
t2=C_string_to_bytevector(t1);
t3=t1;
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* release-number-vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1941,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1948,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:283: number-vector? */
t4=*((C_word*)lf[47]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1946 in release-number-vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1948,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub367(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* srfi-4.scm:285: ##sys#error */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=lf[46];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k4337 in a4310 in k1872 in k1484 */
static void C_ccall f_4339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4339,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_u_i_s8vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* make-u8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_1956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_1956,c,av);}
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
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2013,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:289: alloc */
f_1911(t19,lf[48],t2,t11);}

/* a4160 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_4161(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,6)))){
C_save_and_reclaim((void *)f_4161,4,av);}
a=C_alloc(9);
t4=C_i_check_structure_2(t2,lf[16],lf[40]);
t5=C_u_i_f32vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4189,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[40]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_a_u_i_f32vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t6;
av2[2]=t11;
av2[3]=lf[40];
av2[4]=t7;
av2[5]=C_fix(0);
av2[6]=t5;
tp(7,av2);}}}

/* a4310 in k1872 in k1484 */
static void C_ccall f_4311(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4311,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[6],lf[35]);
t5=C_u_i_s8vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4339,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[35]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_u_i_s8vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t6;
av2[2]=t11;
av2[3]=lf[35];
av2[4]=t7;
av2[5]=C_fix(0);
av2[6]=t5;
tp(7,av2);}}}

/* k4157 in a4130 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_4159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_4159,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_u_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4307 in a4280 in k1876 in k1872 in k1484 */
static void C_ccall f_4309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4309,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_u_i_u16vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f64vector-length in k1484 */
static void C_ccall f_1545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1545,3,av);}
t3=C_i_check_structure_2(t2,lf[18],lf[17]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_64vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* make-s32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_2434,c,av);}
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
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2491,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t16,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t20=C_fixnum_shift_left(t2,C_fix(2));
/* srfi-4.scm:349: alloc */
f_1911(t19,lf[54],t20,t11);}

/* u8vector-set! in k1484 */
static void C_ccall f_1551(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1551,5,av);}
a=C_alloc(7);
t5=C_i_check_structure_2(t2,lf[4],lf[19]);
t6=C_u_i_8vector_length(t2);
t7=C_i_check_exact_2(t4,lf[19]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1561,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-4.scm:104: ##sys#error */
t9=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[19];
av2[3]=lf[21];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t9=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_1561(2,av2);}}}

/* k1559 in u8vector-set! in k1484 */
static void C_ccall f_1561(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_1561,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_exact_2(t3,lf[19]);
t5=C_fixnum_less_or_equal_p(C_fix(0),t3);
t6=(C_truep(t5)?C_fixnum_lessp(t3,((C_word*)t0)[6]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_u_i_u8vector_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=t7;
av2[3]=lf[19];
av2[4]=t3;
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[6];
tp(7,av2);}}}

/* k2457 in k2489 in make-s32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2459,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[54]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2473,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li30),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  f_2473(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* f4974 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f4974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f4974,3,av);}
t3=C_i_check_structure_2(t2,lf[18],lf[96]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3757 in k3733 in subnvector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in ... */
static void C_ccall f_3759(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3759,2,av);}
a=C_alloc(8);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_times(((C_word*)t0)[4],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3765,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:624: ##sys#allocate-vector */
t6=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* ##sys#check-exact-interval in k1484 */
static void C_fcall f_1488(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_1488,5,t1,t2,t3,t4,t5);}
t6=C_i_check_exact_2(t2,t5);
t7=C_fixnum_lessp(t2,t3);
t8=(C_truep(t7)?t7:C_fixnum_greaterp(t2,t4));
if(C_truep(t8)){
/* srfi-4.scm:52: ##sys#error */
t9=*((C_word*)lf[1]+1);{
C_word av2[7];
av2[0]=t9;
av2[1]=t1;
av2[2]=t5;
av2[3]=lf[2];
av2[4]=t2;
av2[5]=t3;
av2[6]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(7,av2);}}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k1484 */
static void C_ccall f_1486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,6)))){
C_save_and_reclaim((void *)f_1486,2,av);}
a=C_alloc(57);
t2=C_mutate2(&lf[0] /* (set! ##sys#check-exact-interval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1488,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[3]+1 /* (set! u8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1503,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[5]+1 /* (set! s8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1509,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[7]+1 /* (set! u16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1515,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[9]+1 /* (set! s16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1521,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[11]+1 /* (set! u32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1527,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[13]+1 /* (set! s32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1533,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[15]+1 /* (set! f32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1539,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[17]+1 /* (set! f64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1545,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[19]+1 /* (set! u8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1551,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[22]+1 /* (set! s8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1593,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[23]+1 /* (set! u16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1626,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[25]+1 /* (set! s16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1668,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[26]+1 /* (set! u32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1701,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[30]+1 /* (set! s32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1756,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[32]+1 /* (set! f32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1798,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[33]+1 /* (set! f64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1835,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1874,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4341,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:176: getter-with-setter */
t21=*((C_word*)lf[155]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t21;
av2[1]=t19;
av2[2]=t20;
av2[3]=*((C_word*)lf[19]+1);
av2[4]=lf[163];
((C_proc)(void*)(*((C_word*)t21+1)))(5,av2);}}

/* a4250 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_4251(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4251,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[10],lf[37]);
t5=C_u_i_s16vector_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4279,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t3;
t8=C_i_check_exact_2(t7,lf[37]);
t9=C_fixnum_less_or_equal_p(C_fix(0),t7);
t10=(C_truep(t9)?C_fixnum_lessp(t7,t5):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_u_i_s16vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t6;
av2[2]=t11;
av2[3]=lf[37];
av2[4]=t7;
av2[5]=C_fix(0);
av2[6]=t5;
tp(7,av2);}}}

/* f4981 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f4981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f4981,3,av);}
t3=C_i_check_structure_2(t2,lf[16],lf[95]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f4988 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f4988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f4988,3,av);}
t3=C_i_check_structure_2(t2,lf[14],lf[94]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in k3480 in k3476 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3506,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[104]+1 /* (set! f64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3510,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:549: unpack */
f_3380(t3,lf[4],C_SCHEME_TRUE,lf[105]);}

/* k3763 in k3757 in k3733 in subnvector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3765,2,av);}
a=C_alloc(3);
t2=C_string_to_bytevector(t1);
t3=C_a_i_record2(&a,2,((C_word*)t0)[2],t1);
t4=C_fixnum_times(((C_word*)t0)[3],((C_word*)t0)[4]);
t5=C_copy_subvector(t1,((C_word*)t0)[5],C_fix(0),t4,((C_word*)t0)[6]);
t6=((C_word*)t0)[7];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2589 in make-f32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2591,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[16],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:362: set-finalizer! */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2555(2,av2);}}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2555(2,av2);}}}

/* k3178 in loop in s16vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3180,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4277 in a4250 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_4279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4279,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_u_i_s16vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3733 in subnvector in k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in ... */
static void C_ccall f_3735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_3735,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[9];
t6=C_i_check_exact_2(t4,t5);
t7=C_fixnum_less_or_equal_p(C_fix(0),t4);
t8=(C_truep(t7)?C_fixnum_lessp(t4,t3):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
f_3759(2,av2);}}
else{
t9=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=t9;
av2[3]=t5;
av2[4]=t4;
av2[5]=C_fix(0);
av2[6]=t3;
tp(7,av2);}}}

/* doloop484 in k2274 in k2265 in k2297 in make-s16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static C_word C_fcall f_2281(C_word t0,C_word t1){
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

/* f32vector-length in k1484 */
static void C_ccall f_1539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1539,3,av);}
t3=C_i_check_structure_2(t2,lf[16],lf[15]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_32vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop565 in k2565 in k2553 in k2589 in make-f32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static C_word C_fcall f_2572(C_word t0,C_word t1){
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

/* u32vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_3186(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3186,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[12],lf[70]);
t4=C_u_i_u32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3195,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3195(t8,t1,C_fix(0));}

/* s32vector-length in k1484 */
static void C_ccall f_1533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1533,3,av);}
t3=C_i_check_structure_2(t2,lf[14],lf[13]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_32vector_length(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* list->f64vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2982(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2982,3,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[18]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2989,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:420: make-f64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2987 in list->f64vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2989(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2989,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2994,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2994(t6,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* loop in u32vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3195(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3195,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3209,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:474: loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2297 in make-s16vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2299,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[10],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:326: set-finalizer! */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2267(2,av2);}}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2267(2,av2);}}}

/* doloop717 in k2987 in list->f64vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_2994(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2994,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3001,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
/* srfi-4.scm:420: f64vector-set! */
t7=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* srfi-4.scm:420: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* f4995 in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f4995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f4995,3,av);}
t3=C_i_check_structure_2(t2,lf[12],lf[93]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1827 in f32vector-set! in k1484 */
static void C_ccall f_1829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_1829,2,av);}
a=C_alloc(4);
if(C_truep(C_blockp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_u_i_f32vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_fix_to_flo(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_u_i_f32vector_set(((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* loop in s16vector->list in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_fcall f_3165(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3165,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_s16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3180,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* srfi-4.scm:473: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k2011 in make-u8vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2013,2,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[4],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:290: set-finalizer! */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1981(2,av2);}}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1981(2,av2);}}}

/* k2361 in k2393 in make-u32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2363,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[53]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  f_2377(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2963 in doloop704 in k2951 in list->f32vector in k1900 in k1896 in k1892 in k1888 in k1884 in k1880 in k1876 in k1872 in k1484 */
static void C_ccall f_2965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2965,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2958(t4,((C_word*)t0)[5],t2,t3);}

/* k3568 in k3564 in k3560 in k3556 in k3552 in k3548 in k3544 in k3540 in k3536 in k3532 in k3528 in k3524 in k3520 in k3516 in k3512 in k3508 in k3504 in k3500 in k3496 in k3492 in k3488 in k3484 in ... */
static void C_ccall f_3570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
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
if(C_unlikely(!C_demand(C_calculate_demand(96,c,8)))){
C_save_and_reclaim((void *)f_3570,2,av);}
a=C_alloc(96);
t2=C_mutate2((C_word*)lf[120]+1 /* (set! blob->f64vector ...) */,t1);
t3=*((C_word*)lf[121]+1);
t4=C_a_i_list(&a,16,lf[122],*((C_word*)lf[57]+1),lf[123],*((C_word*)lf[59]+1),lf[124],*((C_word*)lf[60]+1),lf[125],*((C_word*)lf[61]+1),lf[126],*((C_word*)lf[62]+1),lf[127],*((C_word*)lf[63]+1),lf[128],*((C_word*)lf[64]+1),lf[129],*((C_word*)lf[65]+1));
t5=t4;
t6=C_mutate2((C_word*)lf[121]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3575,a[2]=t5,a[3]=t3,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
t7=*((C_word*)lf[135]+1);
t8=C_mutate2((C_word*)lf[135]+1 /* (set! ##sys#user-print-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3635,a[2]=t7,a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate2(&lf[137] /* (set! subnvector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3701,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[138]+1 /* (set! subu8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3786,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[139]+1 /* (set! subu16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3792,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[140]+1 /* (set! subu32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3798,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[141]+1 /* (set! subs8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3804,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[142]+1 /* (set! subs16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3810,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[143]+1 /* (set! subs32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[144]+1 /* (set! subf32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3822,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[145]+1 /* (set! subf64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3828,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[146]+1 /* (set! write-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3834,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[148]+1 /* (set! read-u8vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4003,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[151]+1 /* (set! read-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4083,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:669: register-feature! */
t22=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t22;
av2[1]=t21;
av2[2]=lf[154];
((C_proc)(void*)(*((C_word*)t22+1)))(3,av2);}}

/* f64vector-set! in k1484 */
static void C_ccall f_1835(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_1835,5,av);}
a=C_alloc(6);
t5=C_i_check_structure_2(t2,lf[18],lf[33]);
t6=C_u_i_64vector_length(t2);
t7=C_i_check_number_2(t4,lf[33]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1866,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=t3;
t10=C_i_check_exact_2(t9,lf[33]);
t11=C_fixnum_less_or_equal_p(C_fix(0),t9);
t12=(C_truep(t11)?C_fixnum_lessp(t9,t6):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=C_SCHEME_UNDEFINED;
t14=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t13;
f_1866(2,av2);}}
else{
t13=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:57: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t8;
av2[2]=t13;
av2[3]=lf[33];
av2[4]=t9;
av2[5]=C_fix(0);
av2[6]=t6;
tp(7,av2);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[246] = {
{"f_3150:srfi_2d4_2escm",(void*)f_3150},
{"f_3575:srfi_2d4_2escm",(void*)f_3575},
{"f_1668:srfi_2d4_2escm",(void*)f_1668},
{"f_1660:srfi_2d4_2escm",(void*)f_1660},
{"f_2203:srfi_2d4_2escm",(void*)f_2203},
{"f_4043:srfi_2d4_2escm",(void*)f_4043},
{"f_3156:srfi_2d4_2escm",(void*)f_3156},
{"f_3584:srfi_2d4_2escm",(void*)f_3584},
{"f_2785:srfi_2d4_2escm",(void*)f_2785},
{"f_3096:srfi_2d4_2escm",(void*)f_3096},
{"f_3090:srfi_2d4_2escm",(void*)f_3090},
{"f_1626:srfi_2d4_2escm",(void*)f_1626},
{"f_1624:srfi_2d4_2escm",(void*)f_1624},
{"f_2377:srfi_2d4_2escm",(void*)f_2377},
{"f_1636:srfi_2d4_2escm",(void*)f_1636},
{"f_3001:srfi_2d4_2escm",(void*)f_3001},
{"f_2773:srfi_2d4_2escm",(void*)f_2773},
{"f_3042:srfi_2d4_2escm",(void*)f_3042},
{"f_2778:srfi_2d4_2escm",(void*)f_2778},
{"f_3048:srfi_2d4_2escm",(void*)f_3048},
{"f_4281:srfi_2d4_2escm",(void*)f_4281},
{"f_3018:srfi_2d4_2escm",(void*)f_3018},
{"f_3054:srfi_2d4_2escm",(void*)f_3054},
{"f_2630:srfi_2d4_2escm",(void*)f_2630},
{"f_3024:srfi_2d4_2escm",(void*)f_3024},
{"f_3486:srfi_2d4_2escm",(void*)f_3486},
{"f_3482:srfi_2d4_2escm",(void*)f_3482},
{"f_3060:srfi_2d4_2escm",(void*)f_3060},
{"f_2667:srfi_2d4_2escm",(void*)f_2667},
{"f_3066:srfi_2d4_2escm",(void*)f_3066},
{"f_3030:srfi_2d4_2escm",(void*)f_3030},
{"f_3498:srfi_2d4_2escm",(void*)f_3498},
{"f_3494:srfi_2d4_2escm",(void*)f_3494},
{"f_3036:srfi_2d4_2escm",(void*)f_3036},
{"f_3490:srfi_2d4_2escm",(void*)f_3490},
{"f_2655:srfi_2d4_2escm",(void*)f_2655},
{"f_3075:srfi_2d4_2escm",(void*)f_3075},
{"f_4099:srfi_2d4_2escm",(void*)f_4099},
{"f_4083:srfi_2d4_2escm",(void*)f_4083},
{"f_1766:srfi_2d4_2escm",(void*)f_1766},
{"f_1763:srfi_2d4_2escm",(void*)f_1763},
{"f_2691:srfi_2d4_2escm",(void*)f_2691},
{"f_3478:srfi_2d4_2escm",(void*)f_3478},
{"f_4369:srfi_2d4_2escm",(void*)f_4369},
{"f_1735:srfi_2d4_2escm",(void*)f_1735},
{"f_2672:srfi_2d4_2escm",(void*)f_2672},
{"f_4341:srfi_2d4_2escm",(void*)f_4341},
{"f_2146:srfi_2d4_2escm",(void*)f_2146},
{"f_1756:srfi_2d4_2escm",(void*)f_1756},
{"f_2910:srfi_2d4_2escm",(void*)f_2910},
{"f_2917:srfi_2d4_2escm",(void*)f_2917},
{"f_2171:srfi_2d4_2escm",(void*)f_2171},
{"f_2946:srfi_2d4_2escm",(void*)f_2946},
{"f_3135:srfi_2d4_2escm",(void*)f_3135},
{"f_3126:srfi_2d4_2escm",(void*)f_3126},
{"f_4191:srfi_2d4_2escm",(void*)f_4191},
{"f_2922:srfi_2d4_2escm",(void*)f_2922},
{"f_2929:srfi_2d4_2escm",(void*)f_2929},
{"f_2742:srfi_2d4_2escm",(void*)f_2742},
{"f_3105:srfi_2d4_2escm",(void*)f_3105},
{"f_2749:srfi_2d4_2escm",(void*)f_2749},
{"f_1711:srfi_2d4_2escm",(void*)f_1711},
{"f_4189:srfi_2d4_2escm",(void*)f_4189},
{"f_3374:srfi_2d4_2escm",(void*)f_3374},
{"f_2958:srfi_2d4_2escm",(void*)f_2958},
{"f_2953:srfi_2d4_2escm",(void*)f_2953},
{"f_2737:srfi_2d4_2escm",(void*)f_2737},
{"f_2730:srfi_2d4_2escm",(void*)f_2730},
{"f_2090:srfi_2d4_2escm",(void*)f_2090},
{"f_3380:srfi_2d4_2escm",(void*)f_3380},
{"f_3382:srfi_2d4_2escm",(void*)f_3382},
{"f_2338:srfi_2d4_2escm",(void*)f_2338},
{"f_3364:srfi_2d4_2escm",(void*)f_3364},
{"f_3362:srfi_2d4_2escm",(void*)f_3362},
{"f_2085:srfi_2d4_2escm",(void*)f_2085},
{"f5023:srfi_2d4_2escm",(void*)f5023},
{"f_3412:srfi_2d4_2escm",(void*)f_3412},
{"f_3410:srfi_2d4_2escm",(void*)f_3410},
{"f_3120:srfi_2d4_2escm",(void*)f_3120},
{"f_3422:srfi_2d4_2escm",(void*)f_3422},
{"f_3398:srfi_2d4_2escm",(void*)f_3398},
{"f_3431:srfi_2d4_2escm",(void*)f_3431},
{"f_2802:srfi_2d4_2escm",(void*)f_2802},
{"f_2809:srfi_2d4_2escm",(void*)f_2809},
{"f_3614:srfi_2d4_2escm",(void*)f_3614},
{"f_2821:srfi_2d4_2escm",(void*)f_2821},
{"f_3282:srfi_2d4_2escm",(void*)f_3282},
{"f_3296:srfi_2d4_2escm",(void*)f_3296},
{"f_2814:srfi_2d4_2escm",(void*)f_2814},
{"f_1981:srfi_2d4_2escm",(void*)f_1981},
{"f_2845:srfi_2d4_2escm",(void*)f_2845},
{"toplevel:srfi_2d4_2escm",(void*)C_srfi_2d4_toplevel},
{"f_1995:srfi_2d4_2escm",(void*)f_1995},
{"f_2838:srfi_2d4_2escm",(void*)f_2838},
{"f_1990:srfi_2d4_2escm",(void*)f_1990},
{"f_3209:srfi_2d4_2escm",(void*)f_3209},
{"f_2051:srfi_2d4_2escm",(void*)f_2051},
{"f_3244:srfi_2d4_2escm",(void*)f_3244},
{"f_3550:srfi_2d4_2escm",(void*)f_3550},
{"f_3215:srfi_2d4_2escm",(void*)f_3215},
{"f_3554:srfi_2d4_2escm",(void*)f_3554},
{"f_3253:srfi_2d4_2escm",(void*)f_3253},
{"f_2850:srfi_2d4_2escm",(void*)f_2850},
{"f_2857:srfi_2d4_2escm",(void*)f_2857},
{"f_3224:srfi_2d4_2escm",(void*)f_3224},
{"f_3562:srfi_2d4_2escm",(void*)f_3562},
{"f_2076:srfi_2d4_2escm",(void*)f_2076},
{"f_3558:srfi_2d4_2escm",(void*)f_3558},
{"f_1585:srfi_2d4_2escm",(void*)f_1585},
{"f_2242:srfi_2d4_2escm",(void*)f_2242},
{"f_3267:srfi_2d4_2escm",(void*)f_3267},
{"f_3530:srfi_2d4_2escm",(void*)f_3530},
{"f_3534:srfi_2d4_2escm",(void*)f_3534},
{"f_3238:srfi_2d4_2escm",(void*)f_3238},
{"f_3566:srfi_2d4_2escm",(void*)f_3566},
{"f_3273:srfi_2d4_2escm",(void*)f_3273},
{"f_1593:srfi_2d4_2escm",(void*)f_1593},
{"f_2276:srfi_2d4_2escm",(void*)f_2276},
{"f_4129:srfi_2d4_2escm",(void*)f_4129},
{"f_3542:srfi_2d4_2escm",(void*)f_3542},
{"f_3538:srfi_2d4_2escm",(void*)f_3538},
{"f_2267:srfi_2d4_2escm",(void*)f_2267},
{"f_3883:srfi_2d4_2escm",(void*)f_3883},
{"f_3886:srfi_2d4_2escm",(void*)f_3886},
{"f_3514:srfi_2d4_2escm",(void*)f_3514},
{"f_3510:srfi_2d4_2escm",(void*)f_3510},
{"f_3546:srfi_2d4_2escm",(void*)f_3546},
{"f_3899:srfi_2d4_2escm",(void*)f_3899},
{"f_3798:srfi_2d4_2escm",(void*)f_3798},
{"f_3522:srfi_2d4_2escm",(void*)f_3522},
{"f_3792:srfi_2d4_2escm",(void*)f_3792},
{"f_3518:srfi_2d4_2escm",(void*)f_3518},
{"f_2491:srfi_2d4_2escm",(void*)f_2491},
{"f_2180:srfi_2d4_2escm",(void*)f_2180},
{"f_2185:srfi_2d4_2escm",(void*)f_2185},
{"f_3526:srfi_2d4_2escm",(void*)f_3526},
{"f_3502:srfi_2d4_2escm",(void*)f_3502},
{"f_3804:srfi_2d4_2escm",(void*)f_3804},
{"f_2473:srfi_2d4_2escm",(void*)f_2473},
{"f_3786:srfi_2d4_2escm",(void*)f_3786},
{"f_4131:srfi_2d4_2escm",(void*)f_4131},
{"f_1699:srfi_2d4_2escm",(void*)f_1699},
{"f_3810:srfi_2d4_2escm",(void*)f_3810},
{"f_3816:srfi_2d4_2escm",(void*)f_3816},
{"f_1509:srfi_2d4_2escm",(void*)f_1509},
{"f_1503:srfi_2d4_2escm",(void*)f_1503},
{"f_1515:srfi_2d4_2escm",(void*)f_1515},
{"f_1527:srfi_2d4_2escm",(void*)f_1527},
{"f_1521:srfi_2d4_2escm",(void*)f_1521},
{"f5002:srfi_2d4_2escm",(void*)f5002},
{"f5009:srfi_2d4_2escm",(void*)f5009},
{"f5016:srfi_2d4_2escm",(void*)f5016},
{"f_3308:srfi_2d4_2escm",(void*)f_3308},
{"f_2766:srfi_2d4_2escm",(void*)f_2766},
{"f_3302:srfi_2d4_2escm",(void*)f_3302},
{"f_3647:srfi_2d4_2escm",(void*)f_3647},
{"f_4221:srfi_2d4_2escm",(void*)f_4221},
{"f_4219:srfi_2d4_2escm",(void*)f_4219},
{"f_4003:srfi_2d4_2escm",(void*)f_4003},
{"f_3660:srfi_2d4_2escm",(void*)f_3660},
{"f_3338:srfi_2d4_2escm",(void*)f_3338},
{"f_3701:srfi_2d4_2escm",(void*)f_3701},
{"f_4249:srfi_2d4_2escm",(void*)f_4249},
{"f_1882:srfi_2d4_2escm",(void*)f_1882},
{"f_1886:srfi_2d4_2escm",(void*)f_1886},
{"f_1708:srfi_2d4_2escm",(void*)f_1708},
{"f_3332:srfi_2d4_2escm",(void*)f_3332},
{"f_2567:srfi_2d4_2escm",(void*)f_2567},
{"f_1701:srfi_2d4_2escm",(void*)f_1701},
{"f_3635:srfi_2d4_2escm",(void*)f_3635},
{"f_3822:srfi_2d4_2escm",(void*)f_3822},
{"f_1894:srfi_2d4_2escm",(void*)f_1894},
{"f_1898:srfi_2d4_2escm",(void*)f_1898},
{"f_3828:srfi_2d4_2escm",(void*)f_3828},
{"f_1890:srfi_2d4_2escm",(void*)f_1890},
{"f_2555:srfi_2d4_2escm",(void*)f_2555},
{"f_3344:srfi_2d4_2escm",(void*)f_3344},
{"f_3603:srfi_2d4_2escm",(void*)f_3603},
{"f_3834:srfi_2d4_2escm",(void*)f_3834},
{"f_1866:srfi_2d4_2escm",(void*)f_1866},
{"f_3650:srfi_2d4_2escm",(void*)f_3650},
{"f_3314:srfi_2d4_2escm",(void*)f_3314},
{"f_3326:srfi_2d4_2escm",(void*)f_3326},
{"f_1874:srfi_2d4_2escm",(void*)f_1874},
{"f_1878:srfi_2d4_2escm",(void*)f_1878},
{"f_3320:srfi_2d4_2escm",(void*)f_3320},
{"f_2530:srfi_2d4_2escm",(void*)f_2530},
{"f_2893:srfi_2d4_2escm",(void*)f_2893},
{"f_1790:srfi_2d4_2escm",(void*)f_1790},
{"f_1798:srfi_2d4_2escm",(void*)f_1798},
{"f_2874:srfi_2d4_2escm",(void*)f_2874},
{"f_2886:srfi_2d4_2escm",(void*)f_2886},
{"f_2881:srfi_2d4_2escm",(void*)f_2881},
{"f_3909:srfi_2d4_2escm",(void*)f_3909},
{"f_1902:srfi_2d4_2escm",(void*)f_1902},
{"f_2108:srfi_2d4_2escm",(void*)f_2108},
{"f_1909:srfi_2d4_2escm",(void*)f_1909},
{"f_1911:srfi_2d4_2escm",(void*)f_1911},
{"f_1918:srfi_2d4_2escm",(void*)f_1918},
{"f_2395:srfi_2d4_2escm",(void*)f_2395},
{"f_1933:srfi_2d4_2escm",(void*)f_1933},
{"f_1941:srfi_2d4_2escm",(void*)f_1941},
{"f_1948:srfi_2d4_2escm",(void*)f_1948},
{"f_4339:srfi_2d4_2escm",(void*)f_4339},
{"f_1956:srfi_2d4_2escm",(void*)f_1956},
{"f_4161:srfi_2d4_2escm",(void*)f_4161},
{"f_4311:srfi_2d4_2escm",(void*)f_4311},
{"f_4159:srfi_2d4_2escm",(void*)f_4159},
{"f_4309:srfi_2d4_2escm",(void*)f_4309},
{"f_1545:srfi_2d4_2escm",(void*)f_1545},
{"f_2434:srfi_2d4_2escm",(void*)f_2434},
{"f_1551:srfi_2d4_2escm",(void*)f_1551},
{"f_1561:srfi_2d4_2escm",(void*)f_1561},
{"f_2459:srfi_2d4_2escm",(void*)f_2459},
{"f4974:srfi_2d4_2escm",(void*)f4974},
{"f_3759:srfi_2d4_2escm",(void*)f_3759},
{"f_1488:srfi_2d4_2escm",(void*)f_1488},
{"f_1486:srfi_2d4_2escm",(void*)f_1486},
{"f_4251:srfi_2d4_2escm",(void*)f_4251},
{"f4981:srfi_2d4_2escm",(void*)f4981},
{"f4988:srfi_2d4_2escm",(void*)f4988},
{"f_3506:srfi_2d4_2escm",(void*)f_3506},
{"f_3765:srfi_2d4_2escm",(void*)f_3765},
{"f_2591:srfi_2d4_2escm",(void*)f_2591},
{"f_3180:srfi_2d4_2escm",(void*)f_3180},
{"f_4279:srfi_2d4_2escm",(void*)f_4279},
{"f_3735:srfi_2d4_2escm",(void*)f_3735},
{"f_2281:srfi_2d4_2escm",(void*)f_2281},
{"f_1539:srfi_2d4_2escm",(void*)f_1539},
{"f_2572:srfi_2d4_2escm",(void*)f_2572},
{"f_3186:srfi_2d4_2escm",(void*)f_3186},
{"f_1533:srfi_2d4_2escm",(void*)f_1533},
{"f_2982:srfi_2d4_2escm",(void*)f_2982},
{"f_2989:srfi_2d4_2escm",(void*)f_2989},
{"f_3195:srfi_2d4_2escm",(void*)f_3195},
{"f_2299:srfi_2d4_2escm",(void*)f_2299},
{"f_2994:srfi_2d4_2escm",(void*)f_2994},
{"f4995:srfi_2d4_2escm",(void*)f4995},
{"f_1829:srfi_2d4_2escm",(void*)f_1829},
{"f_3165:srfi_2d4_2escm",(void*)f_3165},
{"f_2013:srfi_2d4_2escm",(void*)f_2013},
{"f_2363:srfi_2d4_2escm",(void*)f_2363},
{"f_2965:srfi_2d4_2escm",(void*)f_2965},
{"f_3570:srfi_2d4_2escm",(void*)f_3570},
{"f_1835:srfi_2d4_2escm",(void*)f_1835},
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
o|eliminated procedure checks: 106 
o|specializations:
o|  1 (##sys#check-input-port * * *)
o|  1 (##sys#check-output-port * * *)
o|  1 (assq * (list-of pair))
o|  1 (memq * list)
(o e)|safe calls: 412 
(o e)|assignments to immediate values: 1 
o|safe globals: (f64vector-set! f32vector-set! s32vector-set! u32vector-set! s16vector-set! u16vector-set! s8vector-set! u8vector-set! f64vector-length f32vector-length s32vector-length u32vector-length s16vector-length u16vector-length s8vector-length u8vector-length ##sys#check-exact-interval) 
o|Removed `not' forms: 9 
o|inlining procedure: k1493 
o|inlining procedure: k1493 
o|contracted procedure: "(srfi-4.scm:105) g101102" 
o|inlining procedure: k1567 
o|inlining procedure: k1567 
o|contracted procedure: "(srfi-4.scm:112) g119120" 
o|inlining procedure: k1606 
o|inlining procedure: k1606 
o|contracted procedure: "(srfi-4.scm:121) g136137" 
o|inlining procedure: k1642 
o|inlining procedure: k1642 
o|contracted procedure: "(srfi-4.scm:128) g154155" 
o|inlining procedure: k1681 
o|inlining procedure: k1681 
o|contracted procedure: "(srfi-4.scm:139) g175176" 
o|inlining procedure: k1717 
o|inlining procedure: k1717 
o|contracted procedure: k1745 
o|inlining procedure: k1742 
o|inlining procedure: k1742 
o|contracted procedure: "(srfi-4.scm:148) g193194" 
o|inlining procedure: k1772 
o|inlining procedure: k1772 
o|inlining procedure: k1831 
o|inlining procedure: k1831 
o|contracted procedure: "(srfi-4.scm:155) g211212" 
o|inlining procedure: k1811 
o|inlining procedure: k1811 
o|inlining procedure: k1868 
o|inlining procedure: k1868 
o|contracted procedure: "(srfi-4.scm:167) g228229" 
o|inlining procedure: k1848 
o|inlining procedure: k1848 
o|inlining procedure: k1919 
o|contracted procedure: "(srfi-4.scm:274) ext-alloc360" 
o|inlining procedure: k1919 
o|inlining procedure: k1943 
o|inlining procedure: "(srfi-4.scm:284) ext-free365" 
o|inlining procedure: k1943 
o|contracted procedure: k1985 
o|inlining procedure: k1982 
o|inlining procedure: k1997 
o|inlining procedure: k1997 
o|inlining procedure: k1982 
o|contracted procedure: k2080 
o|inlining procedure: k2077 
o|inlining procedure: k2092 
o|inlining procedure: k2092 
o|inlining procedure: k2077 
o|contracted procedure: k2175 
o|inlining procedure: k2172 
o|inlining procedure: k2187 
o|inlining procedure: k2187 
o|inlining procedure: k2172 
o|contracted procedure: k2271 
o|inlining procedure: k2268 
o|inlining procedure: k2283 
o|inlining procedure: k2283 
o|inlining procedure: k2268 
o|contracted procedure: k2367 
o|inlining procedure: k2364 
o|inlining procedure: k2379 
o|inlining procedure: k2379 
o|inlining procedure: k2364 
o|contracted procedure: k2463 
o|inlining procedure: k2460 
o|inlining procedure: k2475 
o|inlining procedure: k2475 
o|inlining procedure: k2460 
o|contracted procedure: k2559 
o|inlining procedure: k2556 
o|inlining procedure: k2574 
o|inlining procedure: k2574 
o|inlining procedure: k2556 
o|contracted procedure: k2659 
o|inlining procedure: k2656 
o|inlining procedure: k2674 
o|inlining procedure: k2674 
o|inlining procedure: k2656 
o|inlining procedure: k2744 
o|inlining procedure: k2744 
o|inlining procedure: k2780 
o|inlining procedure: k2780 
o|inlining procedure: k2816 
o|inlining procedure: k2816 
o|inlining procedure: k2852 
o|inlining procedure: k2852 
o|inlining procedure: k2888 
o|inlining procedure: k2888 
o|inlining procedure: k2924 
o|inlining procedure: k2924 
o|inlining procedure: k2960 
o|inlining procedure: k2960 
o|inlining procedure: k2996 
o|inlining procedure: k2996 
o|inlining procedure: k3077 
o|inlining procedure: k3077 
o|inlining procedure: k3107 
o|inlining procedure: k3107 
o|inlining procedure: k3137 
o|inlining procedure: k3137 
o|inlining procedure: k3167 
o|inlining procedure: k3167 
o|inlining procedure: k3197 
o|inlining procedure: k3197 
o|inlining procedure: k3226 
o|inlining procedure: k3226 
o|inlining procedure: k3255 
o|inlining procedure: k3255 
o|inlining procedure: k3284 
o|inlining procedure: k3284 
o|inlining procedure: k3390 
o|inlining procedure: k3390 
o|inlining procedure: k3423 
o|inlining procedure: k3423 
o|substituted constant variable: a3581 
o|inlining procedure: k3577 
o|inlining procedure: k3600 
o|inlining procedure: k3600 
o|inlining procedure: k3577 
o|inlining procedure: k3642 
o|inlining procedure: k3642 
o|contracted procedure: "(srfi-4.scm:622) g951952" 
o|inlining procedure: k3741 
o|inlining procedure: k3741 
o|contracted procedure: "(srfi-4.scm:621) g942943" 
o|inlining procedure: k3717 
o|inlining procedure: k3717 
o|substituted constant variable: a3858 
o|substituted constant variable: a3859 
o|inlining procedure: k3894 
o|inlining procedure: k3894 
o|inlining procedure: k3911 
o|inlining procedure: k3911 
o|inlining procedure: k3920 
o|inlining procedure: k3920 
o|contracted procedure: "(srfi-4.scm:644) g10321033" 
o|inlining procedure: k3935 
o|inlining procedure: k3935 
o|contracted procedure: "(srfi-4.scm:643) g10201021" 
o|inlining procedure: k3865 
o|inlining procedure: k3865 
o|inlining procedure: k3963 
o|inlining procedure: k3963 
o|substituted constant variable: a4018 
o|substituted constant variable: a4019 
o|contracted procedure: "(srfi-4.scm:250) g349350" 
o|inlining procedure: k4141 
o|inlining procedure: k4141 
o|contracted procedure: "(srfi-4.scm:240) g334335" 
o|inlining procedure: k4171 
o|inlining procedure: k4171 
o|contracted procedure: "(srfi-4.scm:230) g319320" 
o|inlining procedure: k4201 
o|inlining procedure: k4201 
o|contracted procedure: "(srfi-4.scm:220) g304305" 
o|inlining procedure: k4231 
o|inlining procedure: k4231 
o|contracted procedure: "(srfi-4.scm:210) g289290" 
o|inlining procedure: k4261 
o|inlining procedure: k4261 
o|contracted procedure: "(srfi-4.scm:200) g274275" 
o|inlining procedure: k4291 
o|inlining procedure: k4291 
o|contracted procedure: "(srfi-4.scm:190) g259260" 
o|inlining procedure: k4321 
o|inlining procedure: k4321 
o|contracted procedure: "(srfi-4.scm:180) g244245" 
o|inlining procedure: k4351 
o|inlining procedure: k4351 
o|simplifications: ((if . 1)) 
o|replaced variables: 312 
o|removed binding forms: 317 
o|substituted constant variable: loc106 
o|substituted constant variable: from104 
o|substituted constant variable: from104 
o|substituted constant variable: loc106 
o|substituted constant variable: loc124 
o|substituted constant variable: from122 
o|substituted constant variable: from122 
o|substituted constant variable: loc124 
o|substituted constant variable: loc141 
o|substituted constant variable: from139 
o|substituted constant variable: from139 
o|substituted constant variable: loc141 
o|substituted constant variable: loc159 
o|substituted constant variable: from157 
o|substituted constant variable: from157 
o|substituted constant variable: loc159 
o|substituted constant variable: loc180 
o|substituted constant variable: from178 
o|substituted constant variable: from178 
o|substituted constant variable: loc180 
o|substituted constant variable: loc198 
o|substituted constant variable: from196 
o|substituted constant variable: from196 
o|substituted constant variable: loc198 
o|substituted constant variable: loc216 
o|substituted constant variable: from214 
o|substituted constant variable: from214 
o|substituted constant variable: loc216 
o|substituted constant variable: loc233 
o|substituted constant variable: from231 
o|substituted constant variable: from231 
o|substituted constant variable: loc233 
o|substituted constant variable: r30784452 
o|substituted constant variable: r31084454 
o|substituted constant variable: r31384456 
o|substituted constant variable: r31684458 
o|substituted constant variable: r31984460 
o|substituted constant variable: r32274462 
o|substituted constant variable: r32564464 
o|substituted constant variable: r32854466 
o|substituted constant variable: from954 
o|substituted constant variable: from954 
o|substituted constant variable: from945 
o|substituted constant variable: from945 
o|substituted constant variable: loc1037 
o|substituted constant variable: loc1037 
o|substituted constant variable: loc1025 
o|substituted constant variable: from1023 
o|substituted constant variable: from1023 
o|substituted constant variable: loc1025 
o|substituted constant variable: loc354 
o|substituted constant variable: from352 
o|substituted constant variable: from352 
o|substituted constant variable: loc354 
o|substituted constant variable: loc339 
o|substituted constant variable: from337 
o|substituted constant variable: from337 
o|substituted constant variable: loc339 
o|substituted constant variable: loc324 
o|substituted constant variable: from322 
o|substituted constant variable: from322 
o|substituted constant variable: loc324 
o|substituted constant variable: loc309 
o|substituted constant variable: from307 
o|substituted constant variable: from307 
o|substituted constant variable: loc309 
o|substituted constant variable: loc294 
o|substituted constant variable: from292 
o|substituted constant variable: from292 
o|substituted constant variable: loc294 
o|substituted constant variable: loc279 
o|substituted constant variable: from277 
o|substituted constant variable: from277 
o|substituted constant variable: loc279 
o|substituted constant variable: loc264 
o|substituted constant variable: from262 
o|substituted constant variable: from262 
o|substituted constant variable: loc264 
o|substituted constant variable: loc249 
o|substituted constant variable: from247 
o|substituted constant variable: from247 
o|substituted constant variable: loc249 
o|replaced variables: 48 
o|removed binding forms: 364 
o|inlining procedure: k2004 
o|inlining procedure: k2004 
o|inlining procedure: k2099 
o|inlining procedure: k2099 
o|inlining procedure: k2194 
o|inlining procedure: k2194 
o|inlining procedure: k2290 
o|inlining procedure: k2290 
o|inlining procedure: k2386 
o|inlining procedure: k2386 
o|inlining procedure: k2482 
o|inlining procedure: k2482 
o|inlining procedure: k2582 
o|inlining procedure: k2582 
o|inlining procedure: k2682 
o|inlining procedure: k2682 
o|inlining procedure: k4035 
o|inlining procedure: k4035 
o|replaced variables: 1 
o|removed binding forms: 88 
o|substituted constant variable: r20054616 
o|substituted constant variable: r21004620 
o|substituted constant variable: r21954624 
o|substituted constant variable: r22914628 
o|substituted constant variable: r23874632 
o|substituted constant variable: r24834636 
o|substituted constant variable: r25834640 
o|substituted constant variable: r26834644 
o|replaced variables: 8 
o|removed binding forms: 12 
o|removed conditional forms: 8 
o|removed binding forms: 16 
o|simplifications: ((##core#call . 345) (if . 95)) 
o|  call simplifications:
o|    list
o|    not
o|    fx=	2
o|    fx-	2
o|    fx*	2
o|    ##sys#list	9
o|    cadr
o|    caddr
o|    symbol?
o|    memq
o|    ##sys#check-byte-vector	2
o|    eq?	6
o|    ##sys#size	5
o|    ##sys#slot	10
o|    ##sys#structure?	8
o|    fx>=	8
o|    fx+	14
o|    cons	8
o|    ##sys#check-list	8
o|    car	31
o|    null?	62
o|    cdr	31
o|    ##sys#make-structure	12
o|    ##sys#foreign-integer-argument
o|    ##sys#check-number	4
o|    ##sys#fits-in-int?
o|    negative?
o|    ##sys#fits-in-unsigned-int?
o|    fx<=	21
o|    fx<	23
o|    ##sys#check-structure	37
o|    ##sys#check-exact	30
o|contracted procedure: k1490 
o|contracted procedure: k1496 
o|contracted procedure: k1505 
o|contracted procedure: k1511 
o|contracted procedure: k1517 
o|contracted procedure: k1523 
o|contracted procedure: k1529 
o|contracted procedure: k1535 
o|contracted procedure: k1541 
o|contracted procedure: k1547 
o|contracted procedure: k1553 
o|contracted procedure: k1556 
o|contracted procedure: k1564 
o|contracted procedure: k1577 
o|contracted procedure: k1570 
o|contracted procedure: k1586 
o|contracted procedure: k1595 
o|contracted procedure: k1598 
o|contracted procedure: k1603 
o|contracted procedure: k1616 
o|contracted procedure: k1609 
o|contracted procedure: k1628 
o|contracted procedure: k1631 
o|contracted procedure: k1639 
o|contracted procedure: k1652 
o|contracted procedure: k1645 
o|contracted procedure: k1661 
o|contracted procedure: k1670 
o|contracted procedure: k1673 
o|contracted procedure: k1678 
o|contracted procedure: k1691 
o|contracted procedure: k1684 
o|contracted procedure: k1703 
o|contracted procedure: k1714 
o|contracted procedure: k1727 
o|contracted procedure: k1720 
o|contracted procedure: k1736 
o|contracted procedure: k1752 
o|contracted procedure: k1758 
o|contracted procedure: k1769 
o|contracted procedure: k1782 
o|contracted procedure: k1775 
o|contracted procedure: k1791 
o|contracted procedure: k1800 
o|contracted procedure: k1803 
o|contracted procedure: k1808 
o|contracted procedure: k1821 
o|contracted procedure: k1814 
o|contracted procedure: k1837 
o|contracted procedure: k1840 
o|contracted procedure: k1845 
o|contracted procedure: k1858 
o|contracted procedure: k1851 
o|contracted procedure: k1913 
o|contracted procedure: k1906 
o|contracted procedure: k1934 
o|contracted procedure: k2044 
o|contracted procedure: k1958 
o|contracted procedure: k2038 
o|contracted procedure: k1961 
o|contracted procedure: k2032 
o|contracted procedure: k1964 
o|contracted procedure: k2026 
o|contracted procedure: k1967 
o|contracted procedure: k2020 
o|contracted procedure: k1970 
o|contracted procedure: k2014 
o|contracted procedure: k1973 
o|contracted procedure: k1976 
o|contracted procedure: k2139 
o|contracted procedure: k2053 
o|contracted procedure: k2133 
o|contracted procedure: k2056 
o|contracted procedure: k2127 
o|contracted procedure: k2059 
o|contracted procedure: k2121 
o|contracted procedure: k2062 
o|contracted procedure: k2115 
o|contracted procedure: k2065 
o|contracted procedure: k2109 
o|contracted procedure: k2068 
o|contracted procedure: k2071 
o|contracted procedure: k2235 
o|contracted procedure: k2148 
o|contracted procedure: k2229 
o|contracted procedure: k2151 
o|contracted procedure: k2223 
o|contracted procedure: k2154 
o|contracted procedure: k2217 
o|contracted procedure: k2157 
o|contracted procedure: k2211 
o|contracted procedure: k2160 
o|contracted procedure: k2205 
o|contracted procedure: k2163 
o|contracted procedure: k2166 
o|contracted procedure: k2331 
o|contracted procedure: k2244 
o|contracted procedure: k2325 
o|contracted procedure: k2247 
o|contracted procedure: k2319 
o|contracted procedure: k2250 
o|contracted procedure: k2313 
o|contracted procedure: k2253 
o|contracted procedure: k2307 
o|contracted procedure: k2256 
o|contracted procedure: k2301 
o|contracted procedure: k2259 
o|contracted procedure: k2262 
o|contracted procedure: k2427 
o|contracted procedure: k2340 
o|contracted procedure: k2421 
o|contracted procedure: k2343 
o|contracted procedure: k2415 
o|contracted procedure: k2346 
o|contracted procedure: k2409 
o|contracted procedure: k2349 
o|contracted procedure: k2403 
o|contracted procedure: k2352 
o|contracted procedure: k2397 
o|contracted procedure: k2355 
o|contracted procedure: k2358 
o|contracted procedure: k2370 
o|contracted procedure: k2523 
o|contracted procedure: k2436 
o|contracted procedure: k2517 
o|contracted procedure: k2439 
o|contracted procedure: k2511 
o|contracted procedure: k2442 
o|contracted procedure: k2505 
o|contracted procedure: k2445 
o|contracted procedure: k2499 
o|contracted procedure: k2448 
o|contracted procedure: k2493 
o|contracted procedure: k2451 
o|contracted procedure: k2454 
o|contracted procedure: k2466 
o|contracted procedure: k2623 
o|contracted procedure: k2532 
o|contracted procedure: k2617 
o|contracted procedure: k2535 
o|contracted procedure: k2611 
o|contracted procedure: k2538 
o|contracted procedure: k2605 
o|contracted procedure: k2541 
o|contracted procedure: k2599 
o|contracted procedure: k2544 
o|contracted procedure: k2593 
o|contracted procedure: k2547 
o|contracted procedure: k2550 
o|contracted procedure: k2562 
o|contracted procedure: k2723 
o|contracted procedure: k2632 
o|contracted procedure: k2717 
o|contracted procedure: k2635 
o|contracted procedure: k2711 
o|contracted procedure: k2638 
o|contracted procedure: k2705 
o|contracted procedure: k2641 
o|contracted procedure: k2699 
o|contracted procedure: k2644 
o|contracted procedure: k2693 
o|contracted procedure: k2647 
o|contracted procedure: k2650 
o|contracted procedure: k2662 
o|contracted procedure: k2732 
o|contracted procedure: k2755 
o|contracted procedure: k2768 
o|contracted procedure: k2791 
o|contracted procedure: k2804 
o|contracted procedure: k2827 
o|contracted procedure: k2840 
o|contracted procedure: k2863 
o|contracted procedure: k2876 
o|contracted procedure: k2899 
o|contracted procedure: k2912 
o|contracted procedure: k2935 
o|contracted procedure: k2948 
o|contracted procedure: k2971 
o|contracted procedure: k2984 
o|contracted procedure: k3007 
o|contracted procedure: k3068 
o|contracted procedure: k3080 
o|contracted procedure: k3092 
o|contracted procedure: k3098 
o|contracted procedure: k3110 
o|contracted procedure: k3122 
o|contracted procedure: k3128 
o|contracted procedure: k3140 
o|contracted procedure: k3152 
o|contracted procedure: k3158 
o|contracted procedure: k3170 
o|contracted procedure: k3182 
o|contracted procedure: k3188 
o|contracted procedure: k3200 
o|contracted procedure: k3211 
o|contracted procedure: k3217 
o|contracted procedure: k3229 
o|contracted procedure: k3240 
o|contracted procedure: k3246 
o|contracted procedure: k3258 
o|contracted procedure: k3269 
o|contracted procedure: k3275 
o|contracted procedure: k3287 
o|contracted procedure: k3298 
o|contracted procedure: k3355 
o|contracted procedure: k3366 
o|contracted procedure: k3369 
o|contracted procedure: k3376 
o|contracted procedure: k3384 
o|contracted procedure: k3387 
o|contracted procedure: k3393 
o|contracted procedure: k3414 
o|contracted procedure: k3417 
o|contracted procedure: k3426 
o|contracted procedure: k3572 
o|contracted procedure: k3628 
o|contracted procedure: k3585 
o|contracted procedure: k3591 
o|contracted procedure: k3594 
o|contracted procedure: k3597 
o|contracted procedure: k3616 
o|contracted procedure: k3605 
o|contracted procedure: k3669 
o|contracted procedure: k3673 
o|contracted procedure: k3677 
o|contracted procedure: k3681 
o|contracted procedure: k3685 
o|contracted procedure: k3689 
o|contracted procedure: k3693 
o|contracted procedure: k3697 
o|contracted procedure: k3639 
o|contracted procedure: k3655 
o|contracted procedure: k3662 
o|contracted procedure: k3703 
o|contracted procedure: k3706 
o|contracted procedure: k3709 
o|contracted procedure: k3774 
o|contracted procedure: k3760 
o|contracted procedure: k3766 
o|contracted procedure: k3770 
o|contracted procedure: k3778 
o|contracted procedure: k3738 
o|contracted procedure: k3751 
o|contracted procedure: k3744 
o|contracted procedure: k3782 
o|contracted procedure: k3714 
o|contracted procedure: k3727 
o|contracted procedure: k3720 
o|contracted procedure: k3996 
o|contracted procedure: k3836 
o|contracted procedure: k3990 
o|contracted procedure: k3839 
o|contracted procedure: k3984 
o|contracted procedure: k3842 
o|contracted procedure: k3978 
o|contracted procedure: k3845 
o|contracted procedure: k3972 
o|contracted procedure: k3848 
o|contracted procedure: k3966 
o|contracted procedure: k3851 
o|contracted procedure: k3854 
o|contracted procedure: k3927 
o|contracted procedure: k3887 
o|inlining procedure: k3894 
o|inlining procedure: k3894 
o|contracted procedure: k3914 
o|contracted procedure: k3917 
o|contracted procedure: k3955 
o|contracted procedure: k3932 
o|contracted procedure: k3945 
o|contracted procedure: k3938 
o|contracted procedure: k3959 
o|contracted procedure: k3862 
o|contracted procedure: k3875 
o|contracted procedure: k3868 
o|contracted procedure: k4076 
o|contracted procedure: k4005 
o|contracted procedure: k4070 
o|contracted procedure: k4008 
o|contracted procedure: k4064 
o|contracted procedure: k4011 
o|contracted procedure: k4058 
o|contracted procedure: k4014 
o|contracted procedure: k4020 
o|contracted procedure: k4023 
o|contracted procedure: k4026 
o|contracted procedure: k4029 
o|contracted procedure: k4032 
o|contracted procedure: k4045 
o|contracted procedure: k4052 
o|contracted procedure: k4121 
o|contracted procedure: k4085 
o|contracted procedure: k4115 
o|contracted procedure: k4088 
o|contracted procedure: k4109 
o|contracted procedure: k4091 
o|contracted procedure: k4103 
o|contracted procedure: k4094 
o|contracted procedure: k4133 
o|contracted procedure: k4138 
o|contracted procedure: k4151 
o|contracted procedure: k4144 
o|contracted procedure: k4163 
o|contracted procedure: k4168 
o|contracted procedure: k4181 
o|contracted procedure: k4174 
o|contracted procedure: k4193 
o|contracted procedure: k4198 
o|contracted procedure: k4211 
o|contracted procedure: k4204 
o|contracted procedure: k4223 
o|contracted procedure: k4228 
o|contracted procedure: k4241 
o|contracted procedure: k4234 
o|contracted procedure: k4253 
o|contracted procedure: k4258 
o|contracted procedure: k4271 
o|contracted procedure: k4264 
o|contracted procedure: k4283 
o|contracted procedure: k4288 
o|contracted procedure: k4301 
o|contracted procedure: k4294 
o|contracted procedure: k4313 
o|contracted procedure: k4318 
o|contracted procedure: k4331 
o|contracted procedure: k4324 
o|contracted procedure: k4343 
o|contracted procedure: k4348 
o|contracted procedure: k4361 
o|contracted procedure: k4354 
o|simplifications: ((let . 14)) 
o|removed binding forms: 328 
o|inlining procedure: "(srfi-4.scm:538) pack" 
o|inlining procedure: "(srfi-4.scm:537) pack" 
o|inlining procedure: "(srfi-4.scm:536) pack" 
o|inlining procedure: "(srfi-4.scm:535) pack" 
o|inlining procedure: "(srfi-4.scm:534) pack" 
o|inlining procedure: "(srfi-4.scm:533) pack" 
o|inlining procedure: "(srfi-4.scm:532) pack" 
o|inlining procedure: "(srfi-4.scm:531) pack" 
o|replaced variables: 235 
o|removed binding forms: 1 
o|inlining procedure: k1583 
o|inlining procedure: k1622 
o|inlining procedure: k1658 
o|inlining procedure: k1697 
o|inlining procedure: k1733 
o|inlining procedure: k1788 
o|inlining procedure: k1922 
o|removed side-effect free assignment to unused variable: pack 
o|substituted constant variable: tag8314970 
o|substituted constant variable: loc8324971 
o|substituted constant variable: tag8314977 
o|substituted constant variable: loc8324978 
o|substituted constant variable: tag8314984 
o|substituted constant variable: loc8324985 
o|substituted constant variable: tag8314991 
o|substituted constant variable: loc8324992 
o|substituted constant variable: tag8314998 
o|substituted constant variable: loc8324999 
o|substituted constant variable: tag8315005 
o|substituted constant variable: loc8325006 
o|substituted constant variable: tag8315012 
o|substituted constant variable: loc8325013 
o|substituted constant variable: tag8315019 
o|substituted constant variable: loc8325020 
o|inlining procedure: k4157 
o|inlining procedure: k4187 
o|inlining procedure: k4217 
o|inlining procedure: k4247 
o|inlining procedure: k4277 
o|inlining procedure: k4307 
o|inlining procedure: k4337 
o|inlining procedure: k4367 
o|simplifications: ((if . 1)) 
o|replaced variables: 8 
o|removed binding forms: 89 
o|removed binding forms: 40 
o|contracted procedure: k3444 
o|contracted procedure: k3448 
o|contracted procedure: k3452 
o|contracted procedure: k3456 
o|contracted procedure: k3460 
o|contracted procedure: k3464 
o|contracted procedure: k3468 
o|contracted procedure: k3472 
o|removed binding forms: 22 
o|direct leaf routine/allocation: doloop403404 0 
o|direct leaf routine/allocation: doloop430431 0 
o|direct leaf routine/allocation: doloop457458 0 
o|direct leaf routine/allocation: doloop484485 0 
o|direct leaf routine/allocation: doloop511512 0 
o|direct leaf routine/allocation: doloop538539 0 
o|direct leaf routine/allocation: doloop565566 0 
o|direct leaf routine/allocation: doloop593594 0 
o|converted assignments to bindings: (doloop403404) 
o|converted assignments to bindings: (doloop430431) 
o|converted assignments to bindings: (doloop457458) 
o|converted assignments to bindings: (doloop484485) 
o|converted assignments to bindings: (doloop511512) 
o|converted assignments to bindings: (doloop538539) 
o|converted assignments to bindings: (doloop565566) 
o|converted assignments to bindings: (doloop593594) 
o|simplifications: ((let . 8)) 
o|customizable procedures: (pack-copy unpack unpack-copy k4041 k3897 subnvector g912913 k3429 k3396 loop809 loop802 loop795 loop788 loop781 loop774 loop767 loop760 doloop717718 doloop704705 doloop691692 doloop678679 doloop665666 doloop652653 doloop639640 doloop626627 k2665 k2565 alloc370 ##sys#check-exact-interval) 
o|calls to known targets: 117 
o|identified direct recursive calls: f_1995 1 
o|identified direct recursive calls: f_2090 1 
o|identified direct recursive calls: f_2185 1 
o|identified direct recursive calls: f_2281 1 
o|identified direct recursive calls: f_2377 1 
o|identified direct recursive calls: f_2473 1 
o|identified direct recursive calls: f_2572 1 
o|identified direct recursive calls: f_2672 1 
o|identified direct recursive calls: f_3075 1 
o|identified direct recursive calls: f_3105 1 
o|identified direct recursive calls: f_3135 1 
o|identified direct recursive calls: f_3165 1 
o|identified direct recursive calls: f_3195 1 
o|identified direct recursive calls: f_3224 1 
o|identified direct recursive calls: f_3253 1 
o|identified direct recursive calls: f_3282 1 
o|fast box initializations: 16 
o|fast global references: 36 
o|fast global assignments: 5 
o|dropping unused closure argument: f_3380 
o|dropping unused closure argument: f_3362 
o|dropping unused closure argument: f_3410 
o|dropping unused closure argument: f_3701 
o|dropping unused closure argument: f_1911 
o|dropping unused closure argument: f_1488 
*/
/* end of file */

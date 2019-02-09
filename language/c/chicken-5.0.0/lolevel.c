/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: lolevel.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file lolevel.c -emit-import-library chicken.locative -emit-import-library chicken.memory -emit-import-library chicken.memory.representation
   unit: lolevel
   uses: library
*/
#include "chicken.h"

#ifndef C_NONUNIX
# include <sys/mman.h>
#endif

#define C_memmove_o(to, from, n, toff, foff) C_memmove((char *)(to) + (toff), (char *)(from) + (foff), (n))

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[156];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,99,104,101,99,107,45,98,108,111,99,107,32,120,32,46,32,108,111,99,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,99,104,101,99,107,45,98,101,99,111,109,101,45,97,108,105,115,116,32,120,32,108,111,99,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,115,116,114,117,99,116,117,114,101,32,120,32,46,32,108,111,99,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,118,101,99,116,111,114,32,120,32,46,32,108,111,99,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,99,104,101,99,107,45,112,111,105,110,116,101,114,32,120,32,46,32,108,111,99,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,10),40,110,111,115,105,122,101,114,114,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,13),40,115,105,122,101,114,114,32,97,114,103,115,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,20),40,99,104,101,99,107,110,49,32,110,32,110,109,97,120,32,111,102,102,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,110,50,32,110,32,110,109,97,120,32,110,109,97,120,50,32,111,102,102,49,32,111,102,102,50,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,14),40,109,111,118,101,32,102,114,111,109,32,116,111,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,109,111,118,101,45,109,101,109,111,114,121,33,32,102,114,111,109,32,116,111,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,97,108,108,111,99,97,116,101,32,105,110,116,51,49,54,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,102,114,101,101,32,99,45,112,111,105,110,116,101,114,51,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,63,32,120,41,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,108,105,107,101,63,32,120,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,97,100,100,114,101,115,115,45,62,112,111,105,110,116,101,114,32,97,100,100,114,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,62,97,100,100,114,101,115,115,32,112,116,114,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,111,98,106,101,99,116,45,62,112,111,105,110,116,101,114,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,62,111,98,106,101,99,116,32,112,116,114,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,61,63,32,112,49,32,112,50,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,43,32,112,116,114,51,54,52,32,111,102,102,51,54,53,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,97,108,105,103,110,45,116,111,45,119,111,114,100,32,120,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,116,97,103,45,112,111,105,110,116,101,114,32,112,116,114,32,116,97,103,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,116,97,103,103,101,100,45,112,111,105,110,116,101,114,63,32,120,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,116,97,103,32,120,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,56,45,115,101,116,33,32,112,32,110,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,56,45,115,101,116,33,32,112,32,110,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,49,54,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,49,54,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,51,50,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,51,50,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,54,52,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,54,52,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,102,51,50,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,102,54,52,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,57,54,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,109,97,107,101,45,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,110,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,63,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,53,49,49,32,112,116,114,115,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,46,32,112,116,114,115,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,50,52,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,102,105,108,108,33,32,112,118,32,112,116,114,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,118,45,98,117,102,45,115,101,116,33,32,105,53,52,49,32,112,116,114,53,52,50,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,115,101,116,33,32,112,118,32,105,32,112,116,114,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,108,101,110,103,116,104,32,112,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,54,51,49,32,105,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,8),40,99,111,112,121,32,120,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,111,98,106,101,99,116,45,99,111,112,121,32,120,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,9),40,97,50,49,51,50,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,11),40,97,50,49,52,56,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,101,120,116,101,110,100,45,112,114,111,99,101,100,117,114,101,32,112,114,111,99,32,100,97,116,97,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,9),40,97,50,49,55,53,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,101,120,116,101,110,100,101,100,45,112,114,111,99,101,100,117,114,101,63,32,120,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,9),40,97,50,50,48,56,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,112,114,111,99,101,100,117,114,101,45,100,97,116,97,32,120,41};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,115,101,116,45,112,114,111,99,101,100,117,114,101,45,100,97,116,97,33,32,112,114,111,99,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,118,101,99,116,111,114,45,108,105,107,101,63,32,120,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,110,117,109,98,101,114,45,111,102,45,115,108,111,116,115,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,110,117,109,98,101,114,45,111,102,45,98,121,116,101,115,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,64),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,109,97,107,101,45,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,32,116,121,112,101,32,46,32,97,114,103,115,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,57),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,63,32,120,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,116,121,112,101,32,120,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,56),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,108,101,110,103,116,104,32,120,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,63),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,115,108,111,116,45,115,101,116,33,32,120,32,105,32,121,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,51,55,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,62,118,101,99,116,111,114,32,120,41};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,111,98,106,101,99,116,45,98,101,99,111,109,101,33,32,97,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,109,117,116,97,116,101,45,112,114,111,99,101,100,117,114,101,33,32,111,108,100,32,112,114,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,109,97,107,101,45,108,111,99,97,116,105,118,101,32,111,98,106,32,46,32,105,110,100,101,120,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,109,97,107,101,45,119,101,97,107,45,108,111,99,97,116,105,118,101,32,111,98,106,32,46,32,105,110,100,101,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,108,111,99,97,116,105,118,101,45,115,101,116,33,32,120,32,121,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,108,111,99,97,116,105,118,101,45,62,111,98,106,101,99,116,32,120,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,108,111,99,97,116,105,118,101,63,32,120,41,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,11),40,97,50,53,50,53,32,108,111,99,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,11),40,97,50,53,50,56,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,12),40,97,50,53,53,50,32,112,118,32,105,41,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,9),40,97,50,53,55,53,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,9),40,97,50,53,55,56,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,9),40,97,50,53,56,49,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,9),40,97,50,53,56,52,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,9),40,97,50,53,56,55,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,9),40,97,50,53,57,48,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,9),40,97,50,53,57,51,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,9),40,97,50,53,57,54,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,9),40,97,50,53,57,57,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,9),40,97,50,54,48,50,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub543(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
void * ptr=(void * )C_c_pointer_or_null(C_a2);
*((void **)C_data_pointer(buf) + i) = ptr;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub534(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
C_return(*((void **)C_data_pointer(buf) + i));
C_ret:
#undef return

return C_r;}

/* from k1842 */
C_regparm static C_word C_fcall stub491(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k1643 */
C_regparm static C_word C_fcall stub377(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub366(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
C_return((unsigned char *)ptr + off);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub351(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
C_return((void *)x);
C_ret:
#undef return

return C_r;}

/* from k1555 */
C_regparm static C_word C_fcall stub323(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k1548 */
C_regparm static C_word C_fcall stub317(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1187 */
C_regparm static C_word C_fcall stub196(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1159 */
C_regparm static C_word C_fcall stub180(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1131 */
C_regparm static C_word C_fcall stub164(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1103 */
C_regparm static C_word C_fcall stub148(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

C_noret_decl(f_1004)
static void C_ccall f_1004(C_word c,C_word *av) C_noret;
C_noret_decl(f_1016)
static void C_fcall f_1016(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word *av) C_noret;
C_noret_decl(f_1048)
static void C_fcall f_1048(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1061)
static void C_ccall f_1061(C_word c,C_word *av) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202(C_word c,C_word *av) C_noret;
C_noret_decl(f_1223)
static void C_fcall f_1223(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1229)
static void C_fcall f_1229(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1235)
static void C_fcall f_1235(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1251)
static void C_fcall f_1251(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1258)
static void C_fcall f_1258(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word *av) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word *av) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word *av) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word *av) C_noret;
C_noret_decl(f_1292)
static void C_fcall f_1292(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1361)
static void C_fcall f_1361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1377)
static void C_fcall f_1377(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word *av) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393(C_word c,C_word *av) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word *av) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word *av) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word *av) C_noret;
C_noret_decl(f_1448)
static void C_fcall f_1448(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1455)
static void C_ccall f_1455(C_word c,C_word *av) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word *av) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word *av) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word *av) C_noret;
C_noret_decl(f_1552)
static void C_ccall f_1552(C_word c,C_word *av) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word *av) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word *av) C_noret;
C_noret_decl(f_1581)
static void C_ccall f_1581(C_word c,C_word *av) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word *av) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word *av) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word *av) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word *av) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word *av) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word *av) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word *av) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word *av) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word *av) C_noret;
C_noret_decl(f_1625)
static void C_ccall f_1625(C_word c,C_word *av) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word *av) C_noret;
C_noret_decl(f_1666)
static void C_fcall f_1666(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word *av) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word *av) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word *av) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1697)
static void C_fcall f_1697(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word *av) C_noret;
C_noret_decl(f_1734)
static void C_ccall f_1734(C_word c,C_word *av) C_noret;
C_noret_decl(f_1746)
static void C_fcall f_1746(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1758)
static void C_ccall f_1758(C_word c,C_word *av) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word *av) C_noret;
C_noret_decl(f_1764)
static void C_ccall f_1764(C_word c,C_word *av) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word *av) C_noret;
C_noret_decl(f_1770)
static void C_ccall f_1770(C_word c,C_word *av) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word *av) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word *av) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word *av) C_noret;
C_noret_decl(f_1782)
static void C_ccall f_1782(C_word c,C_word *av) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word *av) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word *av) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word *av) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word *av) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word *av) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word *av) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word *av) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word *av) C_noret;
C_noret_decl(f_1818)
static void C_ccall f_1818(C_word c,C_word *av) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word *av) C_noret;
C_noret_decl(f_1826)
static void C_ccall f_1826(C_word c,C_word *av) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word *av) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word *av) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word *av) C_noret;
C_noret_decl(f_1867)
static C_word C_fcall f_1867(C_word t0,C_word t1);
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word *av) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word *av) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word *av) C_noret;
C_noret_decl(f_1914)
static void C_fcall f_1914(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1927)
static void C_ccall f_1927(C_word c,C_word *av) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word *av) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word *av) C_noret;
C_noret_decl(f_1959)
static C_word C_fcall f_1959(C_word t0,C_word t1);
C_noret_decl(f_1988)
static C_word C_fcall f_1988(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word *av) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word *av) C_noret;
C_noret_decl(f_2015)
static void C_ccall f_2015(C_word c,C_word *av) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word *av) C_noret;
C_noret_decl(f_2035)
static void C_ccall f_2035(C_word c,C_word *av) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word *av) C_noret;
C_noret_decl(f_2050)
static void C_fcall f_2050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word *av) C_noret;
C_noret_decl(f_2083)
static void C_ccall f_2083(C_word c,C_word *av) C_noret;
C_noret_decl(f_2092)
static void C_fcall f_2092(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word *av) C_noret;
C_noret_decl(f_2124)
static void C_ccall f_2124(C_word c,C_word *av) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word *av) C_noret;
C_noret_decl(f_2133)
static void C_ccall f_2133(C_word c,C_word *av) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word *av) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word *av) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word *av) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word *av) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word *av) C_noret;
C_noret_decl(f_2209)
static void C_ccall f_2209(C_word c,C_word *av) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word *av) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word *av) C_noret;
C_noret_decl(f_2248)
static void C_ccall f_2248(C_word c,C_word *av) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word *av) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word *av) C_noret;
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word *av) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277(C_word c,C_word *av) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word *av) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word *av) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word *av) C_noret;
C_noret_decl(f_2329)
static void C_fcall f_2329(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word *av) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word *av) C_noret;
C_noret_decl(f_2359)
static void C_ccall f_2359(C_word c,C_word *av) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word *av) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word *av) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word *av) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word *av) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word *av) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word *av) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word *av) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word *av) C_noret;
C_noret_decl(f_2415)
static C_word C_fcall f_2415(C_word t0,C_word t1);
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word *av) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word *av) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word *av) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word *av) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word *av) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word *av) C_noret;
C_noret_decl(f_2464)
static void C_ccall f_2464(C_word c,C_word *av) C_noret;
C_noret_decl(f_2476)
static void C_ccall f_2476(C_word c,C_word *av) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word *av) C_noret;
C_noret_decl(f_2494)
static void C_ccall f_2494(C_word c,C_word *av) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word *av) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word *av) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word *av) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word *av) C_noret;
C_noret_decl(f_2526)
static void C_ccall f_2526(C_word c,C_word *av) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word *av) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word *av) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word *av) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word *av) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word *av) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word *av) C_noret;
C_noret_decl(f_2579)
static void C_ccall f_2579(C_word c,C_word *av) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word *av) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word *av) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word *av) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word *av) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word *av) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word *av) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word *av) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word *av) C_noret;
C_noret_decl(f_938)
static void C_ccall f_938(C_word c,C_word *av) C_noret;
C_noret_decl(f_940)
static void C_ccall f_940(C_word c,C_word *av) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word *av) C_noret;
C_noret_decl(f_967)
static void C_fcall f_967(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word *av) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externexport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1016)
static void C_ccall trf_1016(C_word c,C_word *av) C_noret;
static void C_ccall trf_1016(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1016(t0,t1);}

C_noret_decl(trf_1048)
static void C_ccall trf_1048(C_word c,C_word *av) C_noret;
static void C_ccall trf_1048(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1048(t0,t1);}

C_noret_decl(trf_1223)
static void C_ccall trf_1223(C_word c,C_word *av) C_noret;
static void C_ccall trf_1223(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1223(t0,t1);}

C_noret_decl(trf_1229)
static void C_ccall trf_1229(C_word c,C_word *av) C_noret;
static void C_ccall trf_1229(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1229(t0,t1,t2);}

C_noret_decl(trf_1235)
static void C_ccall trf_1235(C_word c,C_word *av) C_noret;
static void C_ccall trf_1235(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1235(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1251)
static void C_ccall trf_1251(C_word c,C_word *av) C_noret;
static void C_ccall trf_1251(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_1251(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1258)
static void C_ccall trf_1258(C_word c,C_word *av) C_noret;
static void C_ccall trf_1258(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1258(t0,t1);}

C_noret_decl(trf_1292)
static void C_ccall trf_1292(C_word c,C_word *av) C_noret;
static void C_ccall trf_1292(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1292(t0,t1,t2,t3);}

C_noret_decl(trf_1361)
static void C_ccall trf_1361(C_word c,C_word *av) C_noret;
static void C_ccall trf_1361(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1361(t0,t1);}

C_noret_decl(trf_1377)
static void C_ccall trf_1377(C_word c,C_word *av) C_noret;
static void C_ccall trf_1377(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1377(t0,t1);}

C_noret_decl(trf_1448)
static void C_ccall trf_1448(C_word c,C_word *av) C_noret;
static void C_ccall trf_1448(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1448(t0,t1);}

C_noret_decl(trf_1666)
static void C_ccall trf_1666(C_word c,C_word *av) C_noret;
static void C_ccall trf_1666(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1666(t0,t1);}

C_noret_decl(trf_1697)
static void C_ccall trf_1697(C_word c,C_word *av) C_noret;
static void C_ccall trf_1697(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1697(t0,t1);}

C_noret_decl(trf_1746)
static void C_ccall trf_1746(C_word c,C_word *av) C_noret;
static void C_ccall trf_1746(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1746(t0,t1);}

C_noret_decl(trf_1914)
static void C_ccall trf_1914(C_word c,C_word *av) C_noret;
static void C_ccall trf_1914(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1914(t0,t1,t2,t3);}

C_noret_decl(trf_2050)
static void C_ccall trf_2050(C_word c,C_word *av) C_noret;
static void C_ccall trf_2050(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2050(t0,t1,t2);}

C_noret_decl(trf_2092)
static void C_ccall trf_2092(C_word c,C_word *av) C_noret;
static void C_ccall trf_2092(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2092(t0,t1,t2);}

C_noret_decl(trf_2329)
static void C_ccall trf_2329(C_word c,C_word *av) C_noret;
static void C_ccall trf_2329(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2329(t0,t1);}

C_noret_decl(trf_967)
static void C_ccall trf_967(C_word c,C_word *av) C_noret;
static void C_ccall trf_967(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_967(t0,t1,t2);}

/* ##sys#check-generic-structure in k936 */
static void C_ccall f_1004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_1004,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1016,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
if(C_truep(C_blockp(t5))){
t6=C_structurep(t5);
t7=t4;
f_1016(t7,t6);}
else{
t6=t4;
f_1016(t6,C_SCHEME_FALSE);}}

/* k1014 in check-generic-structure in k936 */
static void C_fcall f_1016(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1016,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
/* lolevel.scm:105: ##sys#signal-hook */
t4=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=t3;
av2[4]=lf[9];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
/* lolevel.scm:105: ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[9];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* ##sys#check-generic-vector in k936 */
static void C_ccall f_1029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_1029,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1048,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
if(C_truep(C_blockp(t5))){
t6=C_specialp(t5);
if(C_truep(t6)){
t7=t4;
f_1048(t7,C_i_not(t6));}
else{
t7=C_byteblockp(t5);
t8=t4;
f_1048(t8,C_i_not(t7));}}
else{
t6=t4;
f_1048(t6,C_SCHEME_FALSE);}}

/* k1046 in check-generic-vector in k936 */
static void C_fcall f_1048(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1048,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
/* lolevel.scm:113: ##sys#signal-hook */
t4=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=t3;
av2[4]=lf[11];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
/* lolevel.scm:113: ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[11];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* ##sys#check-pointer in k936 */
static void C_ccall f_1061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_1061,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=t2;
if(C_truep(C_i_safe_pointerp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
/* lolevel.scm:119: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t5;
av2[3]=t7;
av2[4]=lf[13];
av2[5]=t2;
tp(6,av2);}}
else{
/* lolevel.scm:119: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t5;
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[13];
av2[5]=t2;
tp(6,av2);}}}}

/* chicken.memory#move-memory! in k936 */
static void C_ccall f_1202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +38,c,7)))){
C_save_and_reclaim((void*)f_1202,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+38);
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
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_fix(0):C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1223,a[2]=t2,a[3]=t3,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t29=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1229,a[2]=t2,a[3]=t3,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t30=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1235,a[2]=t23,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t31=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1251,a[2]=t23,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t32=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1278,a[2]=((C_word*)t0)[2],a[3]=t17,a[4]=t12,a[5]=t7,a[6]=t21,a[7]=t25,a[8]=t27,a[9]=t1,a[10]=t2,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:158: ##sys#check-block */
t33=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t33;
av2[1]=t32;
av2[2]=t2;
av2[3]=lf[17];
((C_proc)(void*)(*((C_word*)t33+1)))(4,av2);}}

/* nosizerr in chicken.memory#move-memory! in k936 */
static void C_fcall f_1223(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1223,2,t0,t1);}
/* lolevel.scm:143: ##sys#error */
t2=*((C_word*)lf[16]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[17];
av2[3]=lf[18];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* sizerr in chicken.memory#move-memory! in k936 */
static void C_fcall f_1229(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_1229,3,t0,t1,t2);}{
C_word av2[8];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[16]+1);
av2[3]=lf[17];
av2[4]=lf[19];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[3];
av2[7]=t2;
C_apply(8,av2);}}

/* checkn1 in chicken.memory#move-memory! in k936 */
static void C_fcall f_1235(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1235,5,t0,t1,t2,t3,t4);}
a=C_alloc(6);
t5=C_fixnum_difference(t3,t4);
if(C_truep(C_fixnum_less_or_equal_p(t2,t5))){
t6=t2;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* lolevel.scm:151: sizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1229(t6,t1,C_a_i_list(&a,2,t2,t3));}}

/* checkn2 in chicken.memory#move-memory! in k936 */
static void C_fcall f_1251(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1251,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(7);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1258,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=C_fixnum_difference(t3,t5);
if(C_truep(C_fixnum_less_or_equal_p(t2,t8))){
t9=C_fixnum_difference(t4,t6);
t10=t7;
f_1258(t10,C_fixnum_less_or_equal_p(t2,t9));}
else{
t9=t7;
f_1258(t9,C_SCHEME_FALSE);}}

/* k1256 in checkn2 in chicken.memory#move-memory! in k936 */
static void C_fcall f_1258(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1258,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* lolevel.scm:156: sizerr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1229(t2,((C_word*)t0)[3],C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]));}}

/* k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1278,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:159: ##sys#check-block */
t3=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=lf[17];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1281,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(0)))){
/* lolevel.scm:161: ##sys#error */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[17];
av2[3]=lf[22];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1284(2,av2);}}}

/* k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1284,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[3],C_fix(0)))){
/* lolevel.scm:163: ##sys#error */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[17];
av2[3]=lf[21];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1287(2,av2);}}}

/* k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1287,2,av);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1292,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li10),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_1292(t5,((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11]);}

/* move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_fcall f_1292(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_1292,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_structurep(t2))){
t4=C_slot(t2,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[2]))){
t5=C_slot(t2,C_fix(1));
/* lolevel.scm:167: move */
t9=t1;
t10=t5;
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t5=t1;
t6=t2;
t7=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t5;
av2[2]=t7;
av2[3]=lf[17];
av2[4]=t6;
tp(5,av2);}}}
else{
if(C_truep(C_structurep(t3))){
t4=C_slot(t3,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[2]))){
t5=C_slot(t3,C_fix(1));
/* lolevel.scm:171: move */
t9=t1;
t10=t2;
t11=t5;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t5=t1;
t6=t3;
t7=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t5;
av2[2]=t7;
av2[3]=lf[17];
av2[4]=t6;
tp(5,av2);}}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1361,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t5=t2;
t6=C_i_safe_pointerp(t5);
if(C_truep(t6)){
t7=t4;
f_1361(t7,t6);}
else{
t7=C_locativep(t5);
t8=t4;
f_1361(t8,t7);}}}}

/* k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_fcall f_1361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1361,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[3];
t4=C_i_safe_pointerp(t3);
if(C_truep(t4)){
t5=t2;
f_1377(t5,t4);}
else{
t5=C_locativep(t3);
t6=t2;
f_1377(t6,t5);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1426,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:180: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k1375 in k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_fcall f_1377(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1377,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[7];
f_1384(2,av2);}}
else{
/* lolevel.scm:175: nosizerr */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1223(t3,t2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1393,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:176: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* k1382 in k1375 in k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1384,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;{
C_word *av2=av;
av2[0]=t10;
av2[1]=stub148(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k1391 in k1375 in k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1393(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1393,2,av);}
a=C_alloc(13);
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1403,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[8])){
t5=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:177: checkn1 */
t6=((C_word*)((C_word*)t0)[7])[1];
f_1235(t6,t3,((C_word*)t0)[8],t5,((C_word*)t0)[5]);}
else{
/* lolevel.scm:177: nosizerr */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1223(t5,t4);}}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[17];
av2[4]=t4;
tp(5,av2);}}}

/* k1401 in k1391 in k1375 in k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1403,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;{
C_word *av2=av;
av2[0]=t10;
av2[1]=stub180(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k1405 in k1391 in k1375 in k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1407,2,av);}
t2=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:177: checkn1 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1235(t3,((C_word*)t0)[4],t1,t2,((C_word*)t0)[5]);}

/* k1424 in k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_1426,2,av);}
a=C_alloc(11);
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=C_block_size(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1448,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t4,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t6=((C_word*)t0)[4];
t7=C_i_safe_pointerp(t6);
if(C_truep(t7)){
t8=t5;
f_1448(t8,t7);}
else{
t8=C_locativep(t6);
t9=t5;
f_1448(t9,t8);}}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[17];
av2[4]=t4;
tp(5,av2);}}}

/* k1446 in k1424 in k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_fcall f_1448(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_1448,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
/* lolevel.scm:183: checkn1 */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1235(t3,t2,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[6]);}
else{
/* lolevel.scm:183: checkn1 */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1235(t3,t2,((C_word*)t0)[9],((C_word*)t0)[9],((C_word*)t0)[6]);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1465,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:184: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* k1453 in k1446 in k1424 in k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1455,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;{
C_word *av2=av;
av2[0]=t10;
av2[1]=stub164(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k1463 in k1446 in k1424 in k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1465(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_1465,2,av);}
a=C_alloc(7);
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1475,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(C_truep(((C_word*)t0)[7])?((C_word*)t0)[7]:((C_word*)t0)[8]);
t5=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:185: checkn2 */
t6=((C_word*)((C_word*)t0)[9])[1];
f_1251(t6,t3,t4,((C_word*)t0)[8],t5,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[17];
av2[4]=t4;
tp(5,av2);}}}

/* k1473 in k1463 in k1446 in k1424 in k1359 in move in k1285 in k1282 in k1279 in k1276 in chicken.memory#move-memory! in k936 */
static void C_ccall f_1475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1475,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;{
C_word *av2=av;
av2[0]=t10;
av2[1]=stub196(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* chicken.memory#allocate in k936 */
static void C_ccall f_1545(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1545,3,av);}
a=C_alloc(5);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=stub317(t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.memory#free in k936 */
static void C_ccall f_1552(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1552,3,av);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub323(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub323(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.memory#pointer? in k936 */
static void C_ccall f_1562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1562,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_safe_pointerp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#pointer-like? in k936 */
static void C_ccall f_1570(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1570,3,av);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.memory#address->pointer in k936 */
static void C_ccall f_1581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1581,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1585,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:203: ##sys#check-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[30];
tp(4,av2);}}

/* k1583 in chicken.memory#address->pointer in k936 */
static void C_ccall f_1585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1585,2,av);}
/* lolevel.scm:204: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.memory#pointer->address in k936 */
static void C_ccall f_1590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1590,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1594,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:207: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[34];
tp(4,av2);}}

/* k1592 in chicken.memory#pointer->address in k936 */
static void C_ccall f_1594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1594,2,av);}
/* lolevel.scm:208: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.memory#object->pointer in k936 */
static void C_ccall f_1599(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1599,3,av);}
a=C_alloc(5);
if(C_truep(C_blockp(t2))){
t3=t1;
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=stub351(t5,t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.memory#pointer->object in k936 */
static void C_ccall f_1610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1610,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1614,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:215: ##sys#check-pointer */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[37];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1612 in chicken.memory#pointer->object in k936 */
static void C_ccall f_1614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1614,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_pointer_to_object(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory#pointer=? in k936 */
static void C_ccall f_1616(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1616,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1620,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:219: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[39];
tp(4,av2);}}

/* k1618 in chicken.memory#pointer=? in k936 */
static void C_ccall f_1620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1620,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:220: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[39];
tp(4,av2);}}

/* k1621 in k1618 in chicken.memory#pointer=? in k936 */
static void C_ccall f_1623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1623,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_pointer_eqp(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory#pointer+ in k936 */
static void C_ccall f_1625(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1625,4,av);}
a=C_alloc(5);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=C_fix((C_word)sizeof(int) * CHAR_BIT);
t7=C_i_foreign_ranged_integer_argumentp(t3,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=stub366(t4,t5,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* chicken.memory#align-to-word in k936 */
static void C_ccall f_1647(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1647,3,av);}
a=C_alloc(8);
t3=t2;
if(C_truep(C_i_integerp(t3))){
t4=t1;
t5=t2;
t6=C_a_i_bytevector(&a,1,C_fix(6));
t7=C_fix((C_word)sizeof(int) * CHAR_BIT);
t8=C_i_foreign_ranged_integer_argumentp(t5,t7);
t9=t4;{
C_word *av2=av;
av2[0]=t9;
av2[1]=stub377(t6,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1666,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=t2;
if(C_truep(C_blockp(t5))){
t6=C_specialp(t5);
t7=t4;
f_1666(t7,t6);}
else{
t6=t4;
f_1666(t6,C_SCHEME_FALSE);}}}

/* k1664 in chicken.memory#align-to-word in k936 */
static void C_fcall f_1666(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_1666,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:233: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
/* lolevel.scm:235: ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=lf[42];
av2[4]=lf[43];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k1675 in k1664 in chicken.memory#align-to-word in k936 */
static void C_ccall f_1677(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1677,2,av);}
a=C_alloc(8);
t2=C_a_i_bytevector(&a,1,C_fix(6));
t3=C_fix((C_word)sizeof(int) * CHAR_BIT);
t4=C_i_foreign_ranged_integer_argumentp(t1,t3);
t5=stub377(t2,t4);
/* lolevel.scm:233: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t5;
tp(3,av2);}}

/* chicken.memory#tag-pointer in k936 */
static void C_ccall f_1682(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1682,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1686,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:243: ##sys#make-tagged-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k1684 in chicken.memory#tag-pointer in k936 */
static void C_ccall f_1686(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1686,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1697,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[3];
if(C_truep(C_blockp(t5))){
t6=C_specialp(t5);
t7=t4;
f_1697(t7,t6);}
else{
t6=t4;
f_1697(t6,C_SCHEME_FALSE);}}

/* k1687 in k1684 in chicken.memory#tag-pointer in k936 */
static void C_ccall f_1689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1689,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1695 in k1684 in chicken.memory#tag-pointer in k936 */
static void C_fcall f_1697(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1697,2,t0,t1);}
if(C_truep(t1)){
t2=C_copy_pointer(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:246: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=lf[45];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* chicken.memory#tagged-pointer? in k936 */
static void C_ccall f_1703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_1703,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(C_blockp(t2))){
if(C_truep(C_taggedpointerp(t2))){
t6=C_i_not(t5);
if(C_truep(t6)){
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_slot(t2,C_fix(1));
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_equalp(t5,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* chicken.memory#pointer-tag in k936 */
static void C_ccall f_1734(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1734,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1746,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_1746(t6,t5);}
else{
t5=t3;
f_1746(t5,C_SCHEME_FALSE);}}

/* k1744 in chicken.memory#pointer-tag in k936 */
static void C_fcall f_1746(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1746,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=(C_truep(C_taggedpointerp(((C_word*)t0)[3]))?C_slot(((C_word*)t0)[3],C_fix(1)):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:258: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[49];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}}

/* chicken.memory#pointer-u8-set! in k936 */
static void C_ccall f_1758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1758,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u8_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s8-set! in k936 */
static void C_ccall f_1761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1761,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s8_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-u16-set! in k936 */
static void C_ccall f_1764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1764,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u16_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s16-set! in k936 */
static void C_ccall f_1767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1767,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s16_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-u32-set! in k936 */
static void C_ccall f_1770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1770,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s32-set! in k936 */
static void C_ccall f_1773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1773,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-u64-set! in k936 */
static void C_ccall f_1776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1776,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u64_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s64-set! in k936 */
static void C_ccall f_1779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1779,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s64_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-f32-set! in k936 */
static void C_ccall f_1782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1782,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_f32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-f64-set! in k936 */
static void C_ccall f_1785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1785,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_f64_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1788 in k936 */
static void C_ccall f_1790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1790,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[60]+1 /* (set! chicken.memory#pointer-u8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1794,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2600,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:283: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[51]+1);
av2[4]=lf[154];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1792 in k1788 in k936 */
static void C_ccall f_1794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1794,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[61]+1 /* (set! chicken.memory#pointer-s8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2597,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:289: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
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
av2[4]=lf[153];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1798,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[62]+1 /* (set! chicken.memory#pointer-u16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1802,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2594,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:295: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[53]+1);
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1802,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[63]+1 /* (set! chicken.memory#pointer-s16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1806,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2591,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:301: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
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
av2[4]=lf[151];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1806,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[64]+1 /* (set! chicken.memory#pointer-u32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2588,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:307: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[55]+1);
av2[4]=lf[150];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1810,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[65]+1 /* (set! chicken.memory#pointer-s32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1814,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2585,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:313: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
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
av2[4]=lf[149];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1814,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[66]+1 /* (set! chicken.memory#pointer-u64-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1818,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2582,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:319: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[57]+1);
av2[4]=lf[148];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1818,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[67]+1 /* (set! chicken.memory#pointer-s64-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1822,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2579,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:325: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[58]+1);
av2[4]=lf[147];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1822,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[68]+1 /* (set! chicken.memory#pointer-f32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1826,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2576,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:331: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[59]+1);
av2[4]=lf[146];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,5)))){
C_save_and_reclaim((void *)f_1826,2,av);}
a=C_alloc(28);
t2=C_mutate((C_word*)lf[69]+1 /* (set! chicken.memory#pointer-f64-ref ...) */,t1);
t3=C_a_i_list1(&a,1,lf[70]);
t4=t3;
t5=C_mutate((C_word*)lf[71]+1 /* (set! chicken.memory#make-pointer-vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1831,a[2]=t4,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp));
t6=C_mutate((C_word*)lf[76]+1 /* (set! chicken.memory#pointer-vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1895,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[77]+1 /* (set! chicken.memory#pointer-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1901,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[78]+1 /* (set! chicken.memory#pointer-vector-fill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1941,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[74] /* (set! chicken.memory#pv-buf-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1988,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[80]+1 /* (set! chicken.memory#pointer-vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2002,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2553,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:393: chicken.base#getter-with-setter */
t13=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t11;
av2[2]=t12;
av2[3]=*((C_word*)lf[80]+1);
av2[4]=lf[145];
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* chicken.memory#make-pointer-vector in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_1831,c,av);}
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?((C_word*)t0)[2]:C_i_car(t3));
t6=t5;
t7=C_i_check_exact_2(t2,lf[72]);
t8=t2;
t9=C_i_foreign_fixnum_argumentp(t8);
t10=stub491(C_SCHEME_UNDEFINED,t9);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1850,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:345: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t11;
av2[2]=t10;
tp(3,av2);}}

/* k1848 in chicken.memory#make-pointer-vector in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1850,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record3(&a,3,lf[73],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1862,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* lolevel.scm:348: ##sys#check-pointer */
t5=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[72];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1862(2,av2);}}}}

/* k1860 in k1848 in chicken.memory#make-pointer-vector in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1862,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t3=(
  f_1867(t2,C_fix(0))
);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record3(&a,3,lf[73],((C_word*)t0)[2],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop496 in k1860 in k1848 in chicken.memory#make-pointer-vector in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static C_word C_fcall f_1867(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=(
  /* lolevel.scm:351: pv-buf-set! */
  f_1988(((C_word*)t0)[3],t1,((C_word*)t0)[4])
);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* chicken.memory#pointer-vector? in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1895,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[73]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#pointer-vector in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_1901,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=t2;
t4=C_u_i_length(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1906,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:359: make-pointer-vector */
t6=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k1904 in chicken.memory#pointer-vector in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1906(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1906,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_slot(t2,C_fix(2));
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1914,a[2]=t2,a[3]=t4,a[4]=t6,a[5]=((C_word)li39),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1914(t8,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop511 in k1904 in chicken.memory#pointer-vector in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_fcall f_1914(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1914,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1927,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:365: ##sys#check-pointer */
t7=*((C_word*)lf[12]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[73];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k1925 in doloop511 in k1904 in chicken.memory#pointer-vector in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1927(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1927,2,av);}
t2=(
  /* lolevel.scm:366: pv-buf-set! */
  f_1988(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4])
);
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
t5=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[6])[1];
f_1914(t6,((C_word*)t0)[7],t4,t5);}

/* chicken.memory#pointer-vector-fill! in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1941(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1941,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[73],lf[79]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1948,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* lolevel.scm:370: ##sys#check-pointer */
t6=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[79];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_1948(2,av2);}}}

/* k1946 in chicken.memory#pointer-vector-fill! in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_1948(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1948,2,av);}
a=C_alloc(6);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=t2;
t4=C_slot(((C_word*)t0)[2],C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1959,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
  f_1959(t6,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* doloop524 in k1946 in chicken.memory#pointer-vector-fill! in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static C_word C_fcall f_1959(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=(
  /* lolevel.scm:375: pv-buf-set! */
  f_1988(((C_word*)t0)[3],t1,((C_word*)t0)[4])
);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* chicken.memory#pv-buf-set! in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static C_word C_fcall f_1988(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_i_foreign_fixnum_argumentp(t2);
if(C_truep(t3)){
t5=C_i_foreign_pointer_argumentp(t3);
return(stub543(C_SCHEME_UNDEFINED,t1,t4,t5));}
else{
return(stub543(C_SCHEME_UNDEFINED,t1,t4,C_SCHEME_FALSE));}}

/* chicken.memory#pointer-vector-set! in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2002(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2002,5,av);}
a=C_alloc(6);
t5=C_i_check_structure_2(t2,lf[73],lf[81]);
t6=C_i_check_exact_2(t3,lf[81]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2012,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=C_slot(t2,C_fix(1));
/* lolevel.scm:388: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[83]+1);
av2[1]=t7;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=t8;
tp(5,av2);}}

/* k2010 in chicken.memory#pointer-vector-set! in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2012,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* lolevel.scm:389: ##sys#check-pointer */
t3=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[82];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(2));
/* lolevel.scm:390: pv-buf-set! */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  /* lolevel.scm:390: pv-buf-set! */
  f_1988(t3,((C_word*)t0)[4],((C_word*)t0)[5])
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2013 in k2010 in chicken.memory#pointer-vector-set! in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2015,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
/* lolevel.scm:390: pv-buf-set! */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  /* lolevel.scm:390: pv-buf-set! */
  f_1988(t2,((C_word*)t0)[4],((C_word*)t0)[5])
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,4)))){
C_save_and_reclaim((void *)f_2033,2,av);}
a=C_alloc(34);
t2=C_mutate((C_word*)lf[84]+1 /* (set! chicken.memory#pointer-vector-ref ...) */,t1);
t3=C_mutate((C_word*)lf[85]+1 /* (set! chicken.memory#pointer-vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2035,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t4=C_a_i_provide(&a,1,lf[87]);
t5=C_mutate((C_word*)lf[88]+1 /* (set! chicken.memory.representation#object-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2044,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t6=C_a_i_vector1(&a,1,lf[90]);
t7=C_mutate(&lf[91] /* (set! chicken.memory.representation#xproc-tag ...) */,t6);
t8=C_mutate((C_word*)lf[92]+1 /* (set! chicken.memory.representation#extend-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2124,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[96]+1 /* (set! chicken.memory.representation#extended-procedure? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2159,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[98]+1 /* (set! chicken.memory.representation#procedure-data ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2195,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[99]+1 /* (set! chicken.memory.representation#set-procedure-data! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2234,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[102]+1 /* (set! chicken.memory.representation#vector-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2250,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[103]+1 /* (set! chicken.memory.representation#block-set! ...) */,*((C_word*)lf[104]+1));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:474: chicken.base#getter-with-setter */
t15=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=*((C_word*)lf[143]+1);
av2[3]=*((C_word*)lf[104]+1);
av2[4]=lf[144];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* chicken.memory#pointer-vector-length in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2035(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2035,3,av);}
t3=C_i_check_structure_2(t2,lf[73],lf[86]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory.representation#object-copy in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2044(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2044,3,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2050,a[2]=t4,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2050(t6,t1,t2);}

/* copy in chicken.memory.representation#object-copy in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_fcall f_2050(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2050,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_blockp(t2);
if(C_truep(C_i_not(t3))){
t4=t2;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
t4=C_slot(t2,C_fix(1));
/* lolevel.scm:425: ##sys#intern-symbol */{
C_word av2[3];
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
C_string_to_symbol(3,av2);}}
else{
t4=C_block_size(t2);
t5=t4;
t6=(C_truep(C_byteblockp(t2))?C_words(t5):t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2080,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:429: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[89]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t7;
av2[2]=t6;
tp(3,av2);}}}}

/* k2078 in copy in chicken.memory.representation#object-copy in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2080(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2080,2,av);}
a=C_alloc(13);
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2083,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[2]))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(C_truep(C_specialp(((C_word*)t0)[2]))?C_fix(1):C_fix(0));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2092,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word)li46),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2092(t8,t3,t4);}}

/* k2081 in k2078 in copy in chicken.memory.representation#object-copy in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2083,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop631 in k2078 in copy in chicken.memory.representation#object-copy in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_fcall f_2092(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2092,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2113,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:433: copy */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2050(t5,t3,t4);}}

/* k2111 in doloop631 in k2078 in copy in chicken.memory.representation#object-copy in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2113,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2092(t4,((C_word*)t0)[5],t3);}

/* chicken.memory.representation#extend-procedure in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2124(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2124,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2128,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:443: ##sys#check-closure */
t5=*((C_word*)lf[94]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[95];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2126 in chicken.memory.representation#extend-procedure in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2128,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2133,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2149,a[2]=((C_word*)t0)[2],a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:444: ##sys#decorate-lambda */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[93]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* a2132 in k2126 in chicken.memory.representation#extend-procedure in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2133(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2133,3,av);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_eqp(lf[91],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a2148 in k2126 in chicken.memory.representation#extend-procedure in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2149(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2149,4,av);}
a=C_alloc(3);
t4=C_a_i_cons(&a,2,lf[91],((C_word*)t0)[2]);
t5=C_i_setslot(t2,t3,t4);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.memory.representation#extended-procedure? in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2159(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2159,3,av);}
a=C_alloc(6);
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2193,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2176,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:450: ##sys#lambda-decoration */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
tp(4,av2);}}
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

/* a2175 in chicken.memory.representation#extended-procedure? in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2176(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2176,3,av);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_eqp(lf[91],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2191 in chicken.memory.representation#extended-procedure? in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2193,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#procedure-data in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2195(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2195,3,av);}
a=C_alloc(6);
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2226,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2209,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:450: ##sys#lambda-decoration */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
tp(4,av2);}}
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

/* a2208 in chicken.memory.representation#procedure-data in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2209(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2209,3,av);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_eqp(lf[91],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2224 in chicken.memory.representation#procedure-data in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2226,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_slot(t1,C_fix(1)):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#set-procedure-data! in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2234(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2234,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2248,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:463: extend-procedure */
t5=*((C_word*)lf[92]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2246 in chicken.memory.representation#set-procedure-data! in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2248,2,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* lolevel.scm:464: ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[6];
av2[3]=lf[100];
av2[4]=lf[101];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* chicken.memory.representation#vector-like? in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2250(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2250,3,av);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_not(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_byteblockp(t2);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_not(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,5)))){
C_save_and_reclaim((void *)f_2271,2,av);}
a=C_alloc(27);
t2=C_mutate((C_word*)lf[105]+1 /* (set! chicken.memory.representation#block-ref ...) */,t1);
t3=C_mutate((C_word*)lf[106]+1 /* (set! chicken.memory.representation#number-of-slots ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2273,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[108]+1 /* (set! chicken.memory.representation#number-of-bytes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2282,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[111]+1 /* (set! chicken.memory.representation#make-record-instance ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2305,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[114]+1 /* (set! chicken.memory.representation#record-instance? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2314,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[115]+1 /* (set! chicken.memory.representation#record-instance-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2350,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[117]+1 /* (set! chicken.memory.representation#record-instance-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2359,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[119]+1 /* (set! chicken.memory.representation#record-instance-slot-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2372,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2398,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2529,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:522: chicken.base#getter-with-setter */
t12=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
av2[3]=*((C_word*)lf[119]+1);
av2[4]=lf[142];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* chicken.memory.representation#number-of-slots in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2273,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2277,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:478: ##sys#check-generic-vector */
t4=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[107];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2275 in chicken.memory.representation#number-of-slots in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2277,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_block_size(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#number-of-bytes in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2282(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2282,3,av);}
t3=C_blockp(t2);
if(C_truep(C_i_not(t3))){
/* lolevel.scm:483: ##sys#signal-hook */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=lf[109];
av2[4]=lf[110];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
if(C_truep(C_byteblockp(t2))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_block_size(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_block_size(t2);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_bytes(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* chicken.memory.representation#make-record-instance in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_2305,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=C_i_check_symbol_2(t2,lf[112]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[113]+1);
av2[3]=t2;
av2[4]=t3;
C_apply(5,av2);}}

/* chicken.memory.representation#record-instance? in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_2314,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2329,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=t2;
if(C_truep(C_blockp(t8))){
t9=C_structurep(t8);
t10=t7;
f_2329(t10,t9);}
else{
t9=t7;
f_2329(t9,C_SCHEME_FALSE);}}

/* k2327 in chicken.memory.representation#record-instance? in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_fcall f_2329(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_2329,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_not(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_slot(((C_word*)t0)[4],C_fix(0));
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_eqp(((C_word*)t0)[2],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.memory.representation#record-instance-type in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2350,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2354,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:509: ##sys#check-generic-structure */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[116];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2352 in chicken.memory.representation#record-instance-type in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2354,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#record-instance-length in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2359,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2363,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:513: ##sys#check-generic-structure */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[118];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2361 in chicken.memory.representation#record-instance-length in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2363,2,av);}
t2=C_block_size(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_fixnum_difference(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory.representation#record-instance-slot-set! in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2372(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2372,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2376,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:517: ##sys#check-generic-structure */
t6=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[120];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2374 in chicken.memory.representation#record-instance-slot-set! in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2376,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[4]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm:518: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[83]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=t4;
av2[5]=lf[120];
tp(6,av2);}}

/* k2377 in k2374 in chicken.memory.representation#record-instance-slot-set! in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2379,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[4],t2,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_2398,2,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[121]+1 /* (set! chicken.memory.representation#record-instance-slot ...) */,t1);
t3=C_mutate((C_word*)lf[122]+1 /* (set! chicken.memory.representation#record->vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2400,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[124]+1 /* (set! chicken.memory.representation#object-become! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2438,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[127]+1 /* (set! chicken.memory.representation#mutate-procedure! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2447,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t6=C_a_i_provide(&a,1,lf[129]);
t7=C_mutate((C_word*)lf[130]+1 /* (set! chicken.locative#make-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2478,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[133]+1 /* (set! chicken.locative#make-weak-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2494,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[135]+1 /* (set! chicken.locative#locative-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2510,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2526,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:593: chicken.base#getter-with-setter */
t12=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
av2[3]=*((C_word*)lf[135]+1);
av2[4]=lf[140];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* chicken.memory.representation#record->vector in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2400,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2404,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:531: ##sys#check-generic-structure */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[123];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2402 in chicken.memory.representation#record->vector in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2404(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2404,2,av);}
a=C_alloc(5);
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2410,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:533: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[89]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k2408 in k2402 in chicken.memory.representation#record->vector in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2410,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2415,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_2415(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop737 in k2408 in k2402 in chicken.memory.representation#record->vector in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static C_word C_fcall f_2415(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],t1);
t3=C_i_setslot(((C_word*)t0)[3],t1,t2);
t4=C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}

/* chicken.memory.representation#object-become! in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2438,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2442,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:542: ##sys#check-become-alist */
t4=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[126];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2440 in chicken.memory.representation#object-become! in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2442,2,av);}
/* lolevel.scm:543: ##sys#become! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[125]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[125]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.memory.representation#mutate-procedure! in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2447(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2447,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2451,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:546: ##sys#check-closure */
t5=*((C_word*)lf[94]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[128];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2449 in chicken.memory.representation#mutate-procedure! in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2451,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:547: ##sys#check-closure */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[128];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2452 in k2449 in chicken.memory.representation#mutate-procedure! in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2454(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2454,2,av);}
a=C_alloc(5);
t2=C_block_size(((C_word*)t0)[2]);
t3=C_words(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:550: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[89]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k2459 in k2452 in k2449 in chicken.memory.representation#mutate-procedure! in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2461(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2461,2,av);}
a=C_alloc(8);
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2464,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2476,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:551: proc */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2462 in k2459 in k2452 in k2449 in chicken.memory.representation#mutate-procedure! in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2464,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2474 in k2459 in k2452 in k2449 in chicken.memory.representation#mutate-procedure! in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2476,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
/* lolevel.scm:551: ##sys#become! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[125]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[125]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
tp(3,av2);}}

/* chicken.locative#make-locative in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_2478,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm:585: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[132];
tp(6,av2);}}
else{
t4=C_i_car(t3);
/* lolevel.scm:585: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[132];
tp(6,av2);}}}

/* chicken.locative#make-weak-locative in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_2494,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm:588: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[134];
tp(6,av2);}}
else{
t4=C_i_car(t3);
/* lolevel.scm:588: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[134];
tp(6,av2);}}}

/* chicken.locative#locative-set! in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2510,4,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_locative_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2513 in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2515,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[136]+1 /* (set! chicken.locative#locative-ref ...) */,t1);
t3=C_mutate((C_word*)lf[137]+1 /* (set! chicken.locative#locative->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2517,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[138]+1 /* (set! chicken.locative#locative? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2520,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.locative#locative->object in k2513 in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2517,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_locative_to_object(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.locative#locative? in k2513 in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2520(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2520,3,av);}
if(C_truep(C_blockp(t2))){
t3=C_locativep(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a2525 in k2396 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2526,3,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_locative_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2528 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2529(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2529,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2533,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:524: ##sys#check-generic-structure */
t5=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[141];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2531 in a2528 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_2533,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[4]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm:525: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[83]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=t4;
av2[5]=lf[141];
tp(6,av2);}}

/* k2534 in k2531 in a2528 in k2269 in k2031 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2536,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2552 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2553(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2553,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[73],lf[81]);
t5=C_i_check_exact_2(t3,lf[81]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2563,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
/* lolevel.scm:397: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[83]+1);
av2[1]=t6;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=t7;
tp(5,av2);}}

/* k2561 in a2552 in k1824 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2563(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_2563,2,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=stub534(t5,t2,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* a2575 in k1820 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2576,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_f64_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2578 in k1816 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2579,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_f32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2581 in k1812 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2582,3,av);}
a=C_alloc(7);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_s64_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2584 in k1808 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2585,3,av);}
a=C_alloc(7);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_u64_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2587 in k1804 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2588,3,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_s32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2590 in k1800 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2591,3,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_u32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2593 in k1796 in k1792 in k1788 in k936 */
static void C_ccall f_2594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2594,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_s16_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2596 in k1792 in k1788 in k936 */
static void C_ccall f_2597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2597,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_u16_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2599 in k1788 in k936 */
static void C_ccall f_2600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2600,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_s8_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2602 in k936 */
static void C_ccall f_2603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2603,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_u8_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k936 */
static void C_ccall f_938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
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
if(C_unlikely(!C_demand(C_calculate_demand(113,c,4)))){
C_save_and_reclaim((void *)f_938,2,av);}
a=C_alloc(113);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#check-block ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_940,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#check-become-alist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_958,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#check-generic-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1004,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[10]+1 /* (set! ##sys#check-generic-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1029,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[12]+1 /* (set! ##sys#check-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1061,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=lf[14];
t10=C_mutate((C_word*)lf[15]+1 /* (set! chicken.memory#move-memory! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1202,a[2]=t9,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp));
t11=C_mutate((C_word*)lf[23]+1 /* (set! chicken.memory#allocate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1545,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[24]+1 /* (set! chicken.memory#free ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1552,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[25]+1 /* (set! chicken.memory#pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1562,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[26]+1 /* (set! chicken.memory#pointer-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1570,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[27]+1 /* (set! chicken.memory#address->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1581,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[31]+1 /* (set! chicken.memory#pointer->address ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1590,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[35]+1 /* (set! chicken.memory#object->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1599,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[36]+1 /* (set! chicken.memory#pointer->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1610,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[38]+1 /* (set! chicken.memory#pointer=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1616,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[40]+1 /* (set! chicken.memory#pointer+ ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1625,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[41]+1 /* (set! chicken.memory#align-to-word ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1647,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[44]+1 /* (set! chicken.memory#tag-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1682,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[47]+1 /* (set! chicken.memory#tagged-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1703,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[48]+1 /* (set! chicken.memory#pointer-tag ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1734,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[50]+1 /* (set! chicken.memory#pointer-u8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1758,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[51]+1 /* (set! chicken.memory#pointer-s8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1761,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[52]+1 /* (set! chicken.memory#pointer-u16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1764,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[53]+1 /* (set! chicken.memory#pointer-s16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1767,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[54]+1 /* (set! chicken.memory#pointer-u32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1770,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[55]+1 /* (set! chicken.memory#pointer-s32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1773,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[56]+1 /* (set! chicken.memory#pointer-u64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1776,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[57]+1 /* (set! chicken.memory#pointer-s64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1779,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[58]+1 /* (set! chicken.memory#pointer-f32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1782,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[59]+1 /* (set! chicken.memory#pointer-f64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1785,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1790,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t36=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2603,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:277: chicken.base#getter-with-setter */
t37=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t37;
av2[1]=t35;
av2[2]=t36;
av2[3]=*((C_word*)lf[50]+1);
av2[4]=lf[155];
((C_proc)(void*)(*((C_word*)t37+1)))(5,av2);}}

/* ##sys#check-block in k936 */
static void C_ccall f_940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_940,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
if(C_truep(C_blockp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=C_u_i_car(t5);
/* lolevel.scm:84: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=t6;
av2[4]=t2;
tp(5,av2);}}
else{
/* lolevel.scm:84: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
tp(5,av2);}}}}

/* ##sys#check-become-alist in k936 */
static void C_ccall f_958(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_958,4,av);}
a=C_alloc(8);
t4=C_i_check_list_2(t2,t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_967,a[2]=t3,a[3]=t6,a[4]=t2,a[5]=((C_word)li1),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_967(t8,t1,t2);}

/* loop in check-become-alist in k936 */
static void C_fcall f_967(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_967,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_check_pair_2(t5,((C_word*)t0)[2]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_987,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t8=C_u_i_car(t5);
/* lolevel.scm:95: ##sys#check-block */
t9=*((C_word*)lf[2]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
/* lolevel.scm:99: ##sys#signal-hook */
t4=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[7];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}}

/* k985 in loop in check-become-alist in k936 */
static void C_ccall f_987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_987,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_cdr(((C_word*)t0)[5]);
/* lolevel.scm:96: ##sys#check-block */
t4=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k988 in k985 in loop in check-become-alist in k936 */
static void C_ccall f_990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_990,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* lolevel.scm:97: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_967(t4,((C_word*)t0)[4],t3);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_lolevel_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("lolevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_lolevel_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1006))){
C_save(t1);
C_rereclaim2(1006*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,156);
lf[0]=C_h_intern(&lf[0],7, C_text("lolevel"));
lf[1]=C_h_intern(&lf[1],15, C_text("chicken.memory#"));
lf[2]=C_h_intern(&lf[2],15, C_text("\003syscheck-block"));
lf[3]=C_h_intern(&lf[3],14, C_text("\003syserror-hook"));
lf[4]=C_h_intern(&lf[4],22, C_text("\003syscheck-become-alist"));
lf[5]=C_h_intern(&lf[5],15, C_text("\003syssignal-hook"));
lf[6]=C_h_intern(&lf[6],11, C_text("\000type-error"));
lf[7]=C_decode_literal(C_heaptop,C_text("\376B\000\000:bad argument type - not an a-list of non-immediate objects"));
lf[8]=C_h_intern(&lf[8],27, C_text("\003syscheck-generic-structure"));
lf[9]=C_decode_literal(C_heaptop,C_text("\376B\000\000#bad argument type - not a structure"));
lf[10]=C_h_intern(&lf[10],24, C_text("\003syscheck-generic-vector"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376B\000\000,bad argument type - not a vector-like object"));
lf[12]=C_h_intern(&lf[12],17, C_text("\003syscheck-pointer"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376B\000\000!bad argument type - not a pointer"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\004mmap\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\011"
"u64vector\376\003\000\000\002\376\001\000\000\010s8vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\011s64ve"
"ctor\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000\011f64vector\376\377\016"));
lf[15]=C_h_intern(&lf[15],27, C_text("chicken.memory#move-memory!"));
lf[16]=C_h_intern(&lf[16],9, C_text("\003syserror"));
lf[17]=C_h_intern(&lf[17],12, C_text("move-memory!"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034need number of bytes to move"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376B\000\000!number of bytes to move too large"));
lf[20]=C_h_intern(&lf[20],15, C_text("\003sysbytevector\077"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033negative destination offset"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026negative source offset"));
lf[23]=C_h_intern(&lf[23],23, C_text("chicken.memory#allocate"));
lf[24]=C_h_intern(&lf[24],19, C_text("chicken.memory#free"));
lf[25]=C_h_intern(&lf[25],23, C_text("chicken.memory#pointer\077"));
lf[26]=C_h_intern(&lf[26],28, C_text("chicken.memory#pointer-like\077"));
lf[27]=C_h_intern(&lf[27],31, C_text("chicken.memory#address->pointer"));
lf[28]=C_h_intern(&lf[28],20, C_text("\003sysaddress->pointer"));
lf[29]=C_h_intern(&lf[29],17, C_text("\003syscheck-integer"));
lf[30]=C_h_intern(&lf[30],16, C_text("address->pointer"));
lf[31]=C_h_intern(&lf[31],31, C_text("chicken.memory#pointer->address"));
lf[32]=C_h_intern(&lf[32],20, C_text("\003syspointer->address"));
lf[33]=C_h_intern(&lf[33],17, C_text("\003syscheck-special"));
lf[34]=C_h_intern(&lf[34],16, C_text("pointer->address"));
lf[35]=C_h_intern(&lf[35],30, C_text("chicken.memory#object->pointer"));
lf[36]=C_h_intern(&lf[36],30, C_text("chicken.memory#pointer->object"));
lf[37]=C_h_intern(&lf[37],15, C_text("pointer->object"));
lf[38]=C_h_intern(&lf[38],24, C_text("chicken.memory#pointer=\077"));
lf[39]=C_h_intern(&lf[39],9, C_text("pointer=\077"));
lf[40]=C_h_intern(&lf[40],23, C_text("chicken.memory#pointer+"));
lf[41]=C_h_intern(&lf[41],28, C_text("chicken.memory#align-to-word"));
lf[42]=C_h_intern(&lf[42],13, C_text("align-to-word"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000,bad argument type - not a pointer or integer"));
lf[44]=C_h_intern(&lf[44],26, C_text("chicken.memory#tag-pointer"));
lf[45]=C_h_intern(&lf[45],11, C_text("tag-pointer"));
lf[46]=C_h_intern(&lf[46],23, C_text("\003sysmake-tagged-pointer"));
lf[47]=C_h_intern(&lf[47],30, C_text("chicken.memory#tagged-pointer\077"));
lf[48]=C_h_intern(&lf[48],26, C_text("chicken.memory#pointer-tag"));
lf[49]=C_h_intern(&lf[49],11, C_text("pointer-tag"));
lf[50]=C_h_intern(&lf[50],30, C_text("chicken.memory#pointer-u8-set!"));
lf[51]=C_h_intern(&lf[51],30, C_text("chicken.memory#pointer-s8-set!"));
lf[52]=C_h_intern(&lf[52],31, C_text("chicken.memory#pointer-u16-set!"));
lf[53]=C_h_intern(&lf[53],31, C_text("chicken.memory#pointer-s16-set!"));
lf[54]=C_h_intern(&lf[54],31, C_text("chicken.memory#pointer-u32-set!"));
lf[55]=C_h_intern(&lf[55],31, C_text("chicken.memory#pointer-s32-set!"));
lf[56]=C_h_intern(&lf[56],31, C_text("chicken.memory#pointer-u64-set!"));
lf[57]=C_h_intern(&lf[57],31, C_text("chicken.memory#pointer-s64-set!"));
lf[58]=C_h_intern(&lf[58],31, C_text("chicken.memory#pointer-f32-set!"));
lf[59]=C_h_intern(&lf[59],31, C_text("chicken.memory#pointer-f64-set!"));
lf[60]=C_h_intern(&lf[60],29, C_text("chicken.memory#pointer-u8-ref"));
lf[61]=C_h_intern(&lf[61],29, C_text("chicken.memory#pointer-s8-ref"));
lf[62]=C_h_intern(&lf[62],30, C_text("chicken.memory#pointer-u16-ref"));
lf[63]=C_h_intern(&lf[63],30, C_text("chicken.memory#pointer-s16-ref"));
lf[64]=C_h_intern(&lf[64],30, C_text("chicken.memory#pointer-u32-ref"));
lf[65]=C_h_intern(&lf[65],30, C_text("chicken.memory#pointer-s32-ref"));
lf[66]=C_h_intern(&lf[66],30, C_text("chicken.memory#pointer-u64-ref"));
lf[67]=C_h_intern(&lf[67],30, C_text("chicken.memory#pointer-s64-ref"));
lf[68]=C_h_intern(&lf[68],30, C_text("chicken.memory#pointer-f32-ref"));
lf[69]=C_h_intern(&lf[69],30, C_text("chicken.memory#pointer-f64-ref"));
lf[70]=C_h_intern(&lf[70],5, C_text("unset"));
lf[71]=C_h_intern(&lf[71],34, C_text("chicken.memory#make-pointer-vector"));
lf[72]=C_h_intern(&lf[72],19, C_text("make-pointer-vector"));
lf[73]=C_h_intern(&lf[73],14, C_text("pointer-vector"));
lf[75]=C_h_intern(&lf[75],13, C_text("\003sysmake-blob"));
lf[76]=C_h_intern(&lf[76],30, C_text("chicken.memory#pointer-vector\077"));
lf[77]=C_h_intern(&lf[77],29, C_text("chicken.memory#pointer-vector"));
lf[78]=C_h_intern(&lf[78],35, C_text("chicken.memory#pointer-vector-fill!"));
lf[79]=C_h_intern(&lf[79],20, C_text("pointer-vector-fill!"));
lf[80]=C_h_intern(&lf[80],34, C_text("chicken.memory#pointer-vector-set!"));
lf[81]=C_h_intern(&lf[81],18, C_text("pointer-vector-ref"));
lf[82]=C_h_intern(&lf[82],19, C_text("pointer-vector-set!"));
lf[83]=C_h_intern(&lf[83],15, C_text("\003syscheck-range"));
lf[84]=C_h_intern(&lf[84],33, C_text("chicken.memory#pointer-vector-ref"));
lf[85]=C_h_intern(&lf[85],36, C_text("chicken.memory#pointer-vector-length"));
lf[86]=C_h_intern(&lf[86],21, C_text("pointer-vector-length"));
lf[87]=C_h_intern(&lf[87],30, C_text("chicken.memory.representation#"));
lf[88]=C_h_intern(&lf[88],41, C_text("chicken.memory.representation#object-copy"));
lf[89]=C_h_intern(&lf[89],15, C_text("\003sysmake-vector"));
lf[90]=C_h_intern(&lf[90],8, C_text("extended"));
lf[92]=C_h_intern(&lf[92],46, C_text("chicken.memory.representation#extend-procedure"));
lf[93]=C_h_intern(&lf[93],19, C_text("\003sysdecorate-lambda"));
lf[94]=C_h_intern(&lf[94],17, C_text("\003syscheck-closure"));
lf[95]=C_h_intern(&lf[95],16, C_text("extend-procedure"));
lf[96]=C_h_intern(&lf[96],49, C_text("chicken.memory.representation#extended-procedure\077"));
lf[97]=C_h_intern(&lf[97],21, C_text("\003syslambda-decoration"));
lf[98]=C_h_intern(&lf[98],44, C_text("chicken.memory.representation#procedure-data"));
lf[99]=C_h_intern(&lf[99],49, C_text("chicken.memory.representation#set-procedure-data!"));
lf[100]=C_h_intern(&lf[100],19, C_text("set-procedure-data!"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000-bad argument type - not an extended procedure"));
lf[102]=C_h_intern(&lf[102],42, C_text("chicken.memory.representation#vector-like\077"));
lf[103]=C_h_intern(&lf[103],40, C_text("chicken.memory.representation#block-set!"));
lf[104]=C_h_intern(&lf[104],14, C_text("\003sysblock-set!"));
lf[105]=C_h_intern(&lf[105],39, C_text("chicken.memory.representation#block-ref"));
lf[106]=C_h_intern(&lf[106],45, C_text("chicken.memory.representation#number-of-slots"));
lf[107]=C_h_intern(&lf[107],15, C_text("number-of-slots"));
lf[108]=C_h_intern(&lf[108],45, C_text("chicken.memory.representation#number-of-bytes"));
lf[109]=C_h_intern(&lf[109],15, C_text("number-of-bytes"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\0002cannot compute number of bytes of immediate object"));
lf[111]=C_h_intern(&lf[111],50, C_text("chicken.memory.representation#make-record-instance"));
lf[112]=C_h_intern(&lf[112],20, C_text("make-record-instance"));
lf[113]=C_h_intern(&lf[113],18, C_text("\003sysmake-structure"));
lf[114]=C_h_intern(&lf[114],46, C_text("chicken.memory.representation#record-instance\077"));
lf[115]=C_h_intern(&lf[115],50, C_text("chicken.memory.representation#record-instance-type"));
lf[116]=C_h_intern(&lf[116],20, C_text("record-instance-type"));
lf[117]=C_h_intern(&lf[117],52, C_text("chicken.memory.representation#record-instance-length"));
lf[118]=C_h_intern(&lf[118],22, C_text("record-instance-length"));
lf[119]=C_h_intern(&lf[119],55, C_text("chicken.memory.representation#record-instance-slot-set!"));
lf[120]=C_h_intern(&lf[120],25, C_text("record-instance-slot-set!"));
lf[121]=C_h_intern(&lf[121],50, C_text("chicken.memory.representation#record-instance-slot"));
lf[122]=C_h_intern(&lf[122],44, C_text("chicken.memory.representation#record->vector"));
lf[123]=C_h_intern(&lf[123],14, C_text("record->vector"));
lf[124]=C_h_intern(&lf[124],44, C_text("chicken.memory.representation#object-become!"));
lf[125]=C_h_intern(&lf[125],11, C_text("\003sysbecome!"));
lf[126]=C_h_intern(&lf[126],14, C_text("object-become!"));
lf[127]=C_h_intern(&lf[127],47, C_text("chicken.memory.representation#mutate-procedure!"));
lf[128]=C_h_intern(&lf[128],17, C_text("mutate-procedure!"));
lf[129]=C_h_intern(&lf[129],17, C_text("chicken.locative#"));
lf[130]=C_h_intern(&lf[130],30, C_text("chicken.locative#make-locative"));
lf[131]=C_h_intern(&lf[131],17, C_text("\003sysmake-locative"));
lf[132]=C_h_intern(&lf[132],13, C_text("make-locative"));
lf[133]=C_h_intern(&lf[133],35, C_text("chicken.locative#make-weak-locative"));
lf[134]=C_h_intern(&lf[134],18, C_text("make-weak-locative"));
lf[135]=C_h_intern(&lf[135],30, C_text("chicken.locative#locative-set!"));
lf[136]=C_h_intern(&lf[136],29, C_text("chicken.locative#locative-ref"));
lf[137]=C_h_intern(&lf[137],33, C_text("chicken.locative#locative->object"));
lf[138]=C_h_intern(&lf[138],26, C_text("chicken.locative#locative\077"));
lf[139]=C_h_intern(&lf[139],31, C_text("chicken.base#getter-with-setter"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376B\000\000#(chicken.locative#locative-ref loc)"));
lf[141]=C_h_intern(&lf[141],20, C_text("record-instance-slot"));
lf[142]=C_decode_literal(C_heaptop,C_text("\376B\000\0008(chicken.memory.representation#record-instance-slot x i)"));
lf[143]=C_h_intern(&lf[143],13, C_text("\003sysblock-ref"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376B\000\000-(chicken.memory.representation#block-ref x i)"));
lf[145]=C_decode_literal(C_heaptop,C_text("\376B\000\000((chicken.memory#pointer-vector-ref pv i)"));
lf[146]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-f64-ref p)"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-f32-ref p)"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-s64-ref p)"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-u64-ref p)"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-s32-ref p)"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-u32-ref p)"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-s16-ref p)"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-u16-ref p)"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.memory#pointer-s8-ref p)"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.memory#pointer-u8-ref p)"));
C_register_lf2(lf,156,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_938,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[166] = {
{C_text("f_1004:lolevel_2escm"),(void*)f_1004},
{C_text("f_1016:lolevel_2escm"),(void*)f_1016},
{C_text("f_1029:lolevel_2escm"),(void*)f_1029},
{C_text("f_1048:lolevel_2escm"),(void*)f_1048},
{C_text("f_1061:lolevel_2escm"),(void*)f_1061},
{C_text("f_1202:lolevel_2escm"),(void*)f_1202},
{C_text("f_1223:lolevel_2escm"),(void*)f_1223},
{C_text("f_1229:lolevel_2escm"),(void*)f_1229},
{C_text("f_1235:lolevel_2escm"),(void*)f_1235},
{C_text("f_1251:lolevel_2escm"),(void*)f_1251},
{C_text("f_1258:lolevel_2escm"),(void*)f_1258},
{C_text("f_1278:lolevel_2escm"),(void*)f_1278},
{C_text("f_1281:lolevel_2escm"),(void*)f_1281},
{C_text("f_1284:lolevel_2escm"),(void*)f_1284},
{C_text("f_1287:lolevel_2escm"),(void*)f_1287},
{C_text("f_1292:lolevel_2escm"),(void*)f_1292},
{C_text("f_1361:lolevel_2escm"),(void*)f_1361},
{C_text("f_1377:lolevel_2escm"),(void*)f_1377},
{C_text("f_1384:lolevel_2escm"),(void*)f_1384},
{C_text("f_1393:lolevel_2escm"),(void*)f_1393},
{C_text("f_1403:lolevel_2escm"),(void*)f_1403},
{C_text("f_1407:lolevel_2escm"),(void*)f_1407},
{C_text("f_1426:lolevel_2escm"),(void*)f_1426},
{C_text("f_1448:lolevel_2escm"),(void*)f_1448},
{C_text("f_1455:lolevel_2escm"),(void*)f_1455},
{C_text("f_1465:lolevel_2escm"),(void*)f_1465},
{C_text("f_1475:lolevel_2escm"),(void*)f_1475},
{C_text("f_1545:lolevel_2escm"),(void*)f_1545},
{C_text("f_1552:lolevel_2escm"),(void*)f_1552},
{C_text("f_1562:lolevel_2escm"),(void*)f_1562},
{C_text("f_1570:lolevel_2escm"),(void*)f_1570},
{C_text("f_1581:lolevel_2escm"),(void*)f_1581},
{C_text("f_1585:lolevel_2escm"),(void*)f_1585},
{C_text("f_1590:lolevel_2escm"),(void*)f_1590},
{C_text("f_1594:lolevel_2escm"),(void*)f_1594},
{C_text("f_1599:lolevel_2escm"),(void*)f_1599},
{C_text("f_1610:lolevel_2escm"),(void*)f_1610},
{C_text("f_1614:lolevel_2escm"),(void*)f_1614},
{C_text("f_1616:lolevel_2escm"),(void*)f_1616},
{C_text("f_1620:lolevel_2escm"),(void*)f_1620},
{C_text("f_1623:lolevel_2escm"),(void*)f_1623},
{C_text("f_1625:lolevel_2escm"),(void*)f_1625},
{C_text("f_1647:lolevel_2escm"),(void*)f_1647},
{C_text("f_1666:lolevel_2escm"),(void*)f_1666},
{C_text("f_1677:lolevel_2escm"),(void*)f_1677},
{C_text("f_1682:lolevel_2escm"),(void*)f_1682},
{C_text("f_1686:lolevel_2escm"),(void*)f_1686},
{C_text("f_1689:lolevel_2escm"),(void*)f_1689},
{C_text("f_1697:lolevel_2escm"),(void*)f_1697},
{C_text("f_1703:lolevel_2escm"),(void*)f_1703},
{C_text("f_1734:lolevel_2escm"),(void*)f_1734},
{C_text("f_1746:lolevel_2escm"),(void*)f_1746},
{C_text("f_1758:lolevel_2escm"),(void*)f_1758},
{C_text("f_1761:lolevel_2escm"),(void*)f_1761},
{C_text("f_1764:lolevel_2escm"),(void*)f_1764},
{C_text("f_1767:lolevel_2escm"),(void*)f_1767},
{C_text("f_1770:lolevel_2escm"),(void*)f_1770},
{C_text("f_1773:lolevel_2escm"),(void*)f_1773},
{C_text("f_1776:lolevel_2escm"),(void*)f_1776},
{C_text("f_1779:lolevel_2escm"),(void*)f_1779},
{C_text("f_1782:lolevel_2escm"),(void*)f_1782},
{C_text("f_1785:lolevel_2escm"),(void*)f_1785},
{C_text("f_1790:lolevel_2escm"),(void*)f_1790},
{C_text("f_1794:lolevel_2escm"),(void*)f_1794},
{C_text("f_1798:lolevel_2escm"),(void*)f_1798},
{C_text("f_1802:lolevel_2escm"),(void*)f_1802},
{C_text("f_1806:lolevel_2escm"),(void*)f_1806},
{C_text("f_1810:lolevel_2escm"),(void*)f_1810},
{C_text("f_1814:lolevel_2escm"),(void*)f_1814},
{C_text("f_1818:lolevel_2escm"),(void*)f_1818},
{C_text("f_1822:lolevel_2escm"),(void*)f_1822},
{C_text("f_1826:lolevel_2escm"),(void*)f_1826},
{C_text("f_1831:lolevel_2escm"),(void*)f_1831},
{C_text("f_1850:lolevel_2escm"),(void*)f_1850},
{C_text("f_1862:lolevel_2escm"),(void*)f_1862},
{C_text("f_1867:lolevel_2escm"),(void*)f_1867},
{C_text("f_1895:lolevel_2escm"),(void*)f_1895},
{C_text("f_1901:lolevel_2escm"),(void*)f_1901},
{C_text("f_1906:lolevel_2escm"),(void*)f_1906},
{C_text("f_1914:lolevel_2escm"),(void*)f_1914},
{C_text("f_1927:lolevel_2escm"),(void*)f_1927},
{C_text("f_1941:lolevel_2escm"),(void*)f_1941},
{C_text("f_1948:lolevel_2escm"),(void*)f_1948},
{C_text("f_1959:lolevel_2escm"),(void*)f_1959},
{C_text("f_1988:lolevel_2escm"),(void*)f_1988},
{C_text("f_2002:lolevel_2escm"),(void*)f_2002},
{C_text("f_2012:lolevel_2escm"),(void*)f_2012},
{C_text("f_2015:lolevel_2escm"),(void*)f_2015},
{C_text("f_2033:lolevel_2escm"),(void*)f_2033},
{C_text("f_2035:lolevel_2escm"),(void*)f_2035},
{C_text("f_2044:lolevel_2escm"),(void*)f_2044},
{C_text("f_2050:lolevel_2escm"),(void*)f_2050},
{C_text("f_2080:lolevel_2escm"),(void*)f_2080},
{C_text("f_2083:lolevel_2escm"),(void*)f_2083},
{C_text("f_2092:lolevel_2escm"),(void*)f_2092},
{C_text("f_2113:lolevel_2escm"),(void*)f_2113},
{C_text("f_2124:lolevel_2escm"),(void*)f_2124},
{C_text("f_2128:lolevel_2escm"),(void*)f_2128},
{C_text("f_2133:lolevel_2escm"),(void*)f_2133},
{C_text("f_2149:lolevel_2escm"),(void*)f_2149},
{C_text("f_2159:lolevel_2escm"),(void*)f_2159},
{C_text("f_2176:lolevel_2escm"),(void*)f_2176},
{C_text("f_2193:lolevel_2escm"),(void*)f_2193},
{C_text("f_2195:lolevel_2escm"),(void*)f_2195},
{C_text("f_2209:lolevel_2escm"),(void*)f_2209},
{C_text("f_2226:lolevel_2escm"),(void*)f_2226},
{C_text("f_2234:lolevel_2escm"),(void*)f_2234},
{C_text("f_2248:lolevel_2escm"),(void*)f_2248},
{C_text("f_2250:lolevel_2escm"),(void*)f_2250},
{C_text("f_2271:lolevel_2escm"),(void*)f_2271},
{C_text("f_2273:lolevel_2escm"),(void*)f_2273},
{C_text("f_2277:lolevel_2escm"),(void*)f_2277},
{C_text("f_2282:lolevel_2escm"),(void*)f_2282},
{C_text("f_2305:lolevel_2escm"),(void*)f_2305},
{C_text("f_2314:lolevel_2escm"),(void*)f_2314},
{C_text("f_2329:lolevel_2escm"),(void*)f_2329},
{C_text("f_2350:lolevel_2escm"),(void*)f_2350},
{C_text("f_2354:lolevel_2escm"),(void*)f_2354},
{C_text("f_2359:lolevel_2escm"),(void*)f_2359},
{C_text("f_2363:lolevel_2escm"),(void*)f_2363},
{C_text("f_2372:lolevel_2escm"),(void*)f_2372},
{C_text("f_2376:lolevel_2escm"),(void*)f_2376},
{C_text("f_2379:lolevel_2escm"),(void*)f_2379},
{C_text("f_2398:lolevel_2escm"),(void*)f_2398},
{C_text("f_2400:lolevel_2escm"),(void*)f_2400},
{C_text("f_2404:lolevel_2escm"),(void*)f_2404},
{C_text("f_2410:lolevel_2escm"),(void*)f_2410},
{C_text("f_2415:lolevel_2escm"),(void*)f_2415},
{C_text("f_2438:lolevel_2escm"),(void*)f_2438},
{C_text("f_2442:lolevel_2escm"),(void*)f_2442},
{C_text("f_2447:lolevel_2escm"),(void*)f_2447},
{C_text("f_2451:lolevel_2escm"),(void*)f_2451},
{C_text("f_2454:lolevel_2escm"),(void*)f_2454},
{C_text("f_2461:lolevel_2escm"),(void*)f_2461},
{C_text("f_2464:lolevel_2escm"),(void*)f_2464},
{C_text("f_2476:lolevel_2escm"),(void*)f_2476},
{C_text("f_2478:lolevel_2escm"),(void*)f_2478},
{C_text("f_2494:lolevel_2escm"),(void*)f_2494},
{C_text("f_2510:lolevel_2escm"),(void*)f_2510},
{C_text("f_2515:lolevel_2escm"),(void*)f_2515},
{C_text("f_2517:lolevel_2escm"),(void*)f_2517},
{C_text("f_2520:lolevel_2escm"),(void*)f_2520},
{C_text("f_2526:lolevel_2escm"),(void*)f_2526},
{C_text("f_2529:lolevel_2escm"),(void*)f_2529},
{C_text("f_2533:lolevel_2escm"),(void*)f_2533},
{C_text("f_2536:lolevel_2escm"),(void*)f_2536},
{C_text("f_2553:lolevel_2escm"),(void*)f_2553},
{C_text("f_2563:lolevel_2escm"),(void*)f_2563},
{C_text("f_2576:lolevel_2escm"),(void*)f_2576},
{C_text("f_2579:lolevel_2escm"),(void*)f_2579},
{C_text("f_2582:lolevel_2escm"),(void*)f_2582},
{C_text("f_2585:lolevel_2escm"),(void*)f_2585},
{C_text("f_2588:lolevel_2escm"),(void*)f_2588},
{C_text("f_2591:lolevel_2escm"),(void*)f_2591},
{C_text("f_2594:lolevel_2escm"),(void*)f_2594},
{C_text("f_2597:lolevel_2escm"),(void*)f_2597},
{C_text("f_2600:lolevel_2escm"),(void*)f_2600},
{C_text("f_2603:lolevel_2escm"),(void*)f_2603},
{C_text("f_938:lolevel_2escm"),(void*)f_938},
{C_text("f_940:lolevel_2escm"),(void*)f_940},
{C_text("f_958:lolevel_2escm"),(void*)f_958},
{C_text("f_967:lolevel_2escm"),(void*)f_967},
{C_text("f_987:lolevel_2escm"),(void*)f_987},
{C_text("f_990:lolevel_2escm"),(void*)f_990},
{C_text("toplevel:lolevel_2escm"),(void*)C_lolevel_toplevel},
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
o|hiding unexported module binding: chicken.memory#pv-buf-ref 
o|hiding unexported module binding: chicken.memory#pv-buf-set! 
o|hiding unexported module binding: chicken.memory.representation#xproc-tag 
o|eliminated procedure checks: 75 
o|specializations:
o|  1 (scheme#length list)
o|  1 (scheme#integer? *)
o|  3 (scheme#cdr pair)
o|  6 (scheme#car pair)
(o e)|safe calls: 212 
o|safe globals: (chicken.memory#pointer-f64-set! chicken.memory#pointer-f32-set! chicken.memory#pointer-s64-set! chicken.memory#pointer-u64-set! chicken.memory#pointer-s32-set! chicken.memory#pointer-u32-set! chicken.memory#pointer-s16-set! chicken.memory#pointer-u16-set! chicken.memory#pointer-s8-set! chicken.memory#pointer-u8-set! chicken.memory#pointer-tag chicken.memory#tagged-pointer? chicken.memory#tag-pointer chicken.memory#align-to-word chicken.memory#pointer+ chicken.memory#pointer=? chicken.memory#pointer->object chicken.memory#object->pointer chicken.memory#pointer->address chicken.memory#address->pointer chicken.memory#pointer-like? chicken.memory#pointer? chicken.memory#free chicken.memory#allocate chicken.memory#move-memory! ##sys#check-pointer ##sys#check-generic-vector ##sys#check-generic-structure ##sys#check-become-alist ##sys#check-block) 
o|inlining procedure: k942 
o|inlining procedure: k942 
o|inlining procedure: k950 
o|inlining procedure: k950 
o|inlining procedure: k972 
o|inlining procedure: k972 
o|inlining procedure: k1006 
o|inlining procedure: k1006 
o|inlining procedure: k1021 
o|inlining procedure: k1021 
o|contracted procedure: "(lolevel.scm:104) g112113" 
o|inlining procedure: k1011 
o|inlining procedure: k1011 
o|inlining procedure: k1031 
o|inlining procedure: k1031 
o|inlining procedure: k1053 
o|inlining procedure: k1053 
o|contracted procedure: "(lolevel.scm:112) g120121" 
o|inlining procedure: k1036 
o|inlining procedure: k1043 
o|inlining procedure: k1043 
o|inlining procedure: k1036 
o|inlining procedure: k1063 
o|inlining procedure: k1063 
o|inlining procedure: k1076 
o|inlining procedure: k1076 
o|contracted procedure: "(lolevel.scm:118) g131132" 
o|merged explicitly consed rest parameter: args232 
o|inlining procedure: k1237 
o|inlining procedure: k1237 
o|consed rest parameter at call site: "(lolevel.scm:151) sizerr229" 1 
o|inlining procedure: k1253 
o|inlining procedure: k1253 
o|consed rest parameter at call site: "(lolevel.scm:156) sizerr229" 1 
o|inlining procedure: k1294 
o|inlining procedure: "(lolevel.scm:168) typerr141" 
o|inlining procedure: k1294 
o|inlining procedure: k1326 
o|inlining procedure: k1326 
o|inlining procedure: "(lolevel.scm:172) typerr141" 
o|inlining procedure: k1346 
o|contracted procedure: "(lolevel.scm:175) memmove1137" 
o|inlining procedure: k1388 
o|contracted procedure: "(lolevel.scm:177) memmove3139" 
o|inlining procedure: k1388 
o|inlining procedure: "(lolevel.scm:179) typerr141" 
o|contracted procedure: "(lolevel.scm:174) g262263" 
o|inlining procedure: k1372 
o|inlining procedure: k1372 
o|contracted procedure: "(lolevel.scm:63) g268269" 
o|inlining procedure: k1346 
o|inlining procedure: k1433 
o|contracted procedure: "(lolevel.scm:183) memmove2138" 
o|inlining procedure: k1457 
o|inlining procedure: k1457 
o|inlining procedure: k1433 
o|contracted procedure: "(lolevel.scm:185) memmove4140" 
o|inlining procedure: "(lolevel.scm:188) typerr141" 
o|contracted procedure: "(lolevel.scm:182) g288289" 
o|inlining procedure: k1443 
o|inlining procedure: k1443 
o|contracted procedure: "(lolevel.scm:63) g294295" 
o|inlining procedure: "(lolevel.scm:190) typerr141" 
o|contracted procedure: "(lolevel.scm:173) g249250" 
o|inlining procedure: k1356 
o|inlining procedure: k1356 
o|contracted procedure: "(lolevel.scm:63) g255256" 
o|inlining procedure: k1555 
o|inlining procedure: k1555 
o|contracted procedure: "(lolevel.scm:198) g330331" 
o|contracted procedure: "(lolevel.scm:200) g335336" 
o|inlining procedure: k1574 
o|inlining procedure: k1574 
o|inlining procedure: k1601 
o|contracted procedure: "(lolevel.scm:211) g348349" 
o|inlining procedure: k1601 
o|inlining procedure: k1649 
o|inlining procedure: k1649 
o|contracted procedure: "(lolevel.scm:232) g387388" 
o|inlining procedure: k1661 
o|inlining procedure: k1661 
o|inlining procedure: k1687 
o|inlining procedure: k1687 
o|contracted procedure: "(lolevel.scm:244) g395396" 
o|inlining procedure: k1692 
o|inlining procedure: k1692 
o|inlining procedure: k1708 
o|inlining procedure: k1717 
o|inlining procedure: k1717 
o|inlining procedure: k1708 
o|inlining procedure: k1736 
o|inlining procedure: k1736 
o|contracted procedure: "(lolevel.scm:255) g420421" 
o|inlining procedure: k1741 
o|inlining procedure: k1741 
o|inlining procedure: k1869 
o|inlining procedure: k1869 
o|contracted procedure: "(lolevel.scm:344) words->bytes489" 
o|inlining procedure: k1916 
o|inlining procedure: k1916 
o|inlining procedure: k1961 
o|inlining procedure: k1961 
o|inlining procedure: k1995 
o|inlining procedure: k1995 
o|inlining procedure: k2052 
o|inlining procedure: k2052 
o|inlining procedure: k2081 
o|inlining procedure: k2081 
o|inlining procedure: k2094 
o|inlining procedure: k2094 
o|inlining procedure: k2135 
o|inlining procedure: k2135 
o|inlining procedure: k2161 
o|inlining procedure: k2167 
o|inlining procedure: k2167 
o|contracted procedure: "(lolevel.scm:454) g653654" 
o|inlining procedure: k2178 
o|inlining procedure: k2178 
o|inlining procedure: k2161 
o|inlining procedure: k2197 
o|inlining procedure: k2227 
o|inlining procedure: k2227 
o|contracted procedure: "(lolevel.scm:459) g663664" 
o|inlining procedure: k2211 
o|inlining procedure: k2211 
o|inlining procedure: k2197 
o|inlining procedure: k2236 
o|inlining procedure: k2236 
o|contracted procedure: "(lolevel.scm:469) g674675" 
o|inlining procedure: k2254 
o|inlining procedure: k2261 
o|inlining procedure: k2261 
o|inlining procedure: k2254 
o|inlining procedure: k2284 
o|inlining procedure: k2284 
o|inlining procedure: k2319 
o|inlining procedure: k2319 
o|contracted procedure: "(lolevel.scm:504) g709710" 
o|inlining procedure: k2324 
o|inlining procedure: k2324 
o|inlining procedure: k2417 
o|inlining procedure: k2417 
o|inlining procedure: k2484 
o|inlining procedure: k2484 
o|inlining procedure: k2500 
o|inlining procedure: k2500 
o|inlining procedure: k2522 
o|inlining procedure: k2522 
o|contracted procedure: "(lolevel.scm:398) chicken.memory#pv-buf-ref" 
o|replaced variables: 283 
o|removed binding forms: 163 
o|substituted constant variable: r9512609 
o|substituted constant variable: r9512609 
o|substituted constant variable: r10222617 
o|substituted constant variable: r10222617 
o|substituted constant variable: r10122620 
o|substituted constant variable: r10542625 
o|substituted constant variable: r10542625 
o|substituted constant variable: r10372632 
o|substituted constant variable: r10772637 
o|substituted constant variable: r10772637 
o|substituted constant variable: r15562695 
o|substituted constant variable: r15562695 
o|substituted constant variable: r15752698 
o|substituted constant variable: r16022700 
o|substituted constant variable: r16622704 
o|substituted constant variable: r16932710 
o|substituted constant variable: r17092714 
o|substituted constant variable: r17422718 
o|inlining procedure: k1851 
o|substituted constant variable: r19962727 
o|substituted constant variable: r19962727 
o|substituted constant variable: r21362738 
o|substituted constant variable: r21682740 
o|substituted constant variable: r21682741 
o|substituted constant variable: r21792743 
o|substituted constant variable: r21622744 
o|substituted constant variable: r22282747 
o|substituted constant variable: r22122749 
o|substituted constant variable: r21982750 
o|substituted constant variable: r22552758 
o|substituted constant variable: r23202762 
o|substituted constant variable: r23252764 
o|substituted constant variable: r24852767 
o|substituted constant variable: r24852767 
o|substituted constant variable: r25012771 
o|substituted constant variable: r25012771 
o|substituted constant variable: r25232776 
o|replaced variables: 42 
o|removed binding forms: 265 
o|inlining procedure: k1369 
o|inlining procedure: k1440 
o|inlining procedure: k1353 
o|replaced variables: 21 
o|removed binding forms: 74 
o|contracted procedure: k1068 
o|simplifications: ((let . 1)) 
o|replaced variables: 3 
o|removed binding forms: 15 
o|replaced variables: 6 
o|removed binding forms: 3 
o|removed binding forms: 3 
o|simplifications: ((if . 27) (##core#call . 168)) 
o|  call simplifications:
o|    scheme#vector
o|    scheme#list	2
o|    ##sys#check-symbol
o|    scheme#cons	2
o|    scheme#symbol?
o|    ##sys#setslot	4
o|    ##sys#intern-symbol
o|    ##sys#check-structure	4
o|    ##sys#structure?
o|    ##sys#check-exact	3
o|    scheme#eq?	6
o|    chicken.fixnum#fx>=	4
o|    chicken.fixnum#fx+	7
o|    ##sys#make-structure	2
o|    scheme#equal?
o|    ##sys#foreign-ranged-integer-argument	2
o|    scheme#car	9
o|    scheme#cdr	3
o|    chicken.fixnum#fx<	2
o|    ##sys#generic-structure?	2
o|    scheme#string?	3
o|    ##sys#size	12
o|    ##sys#foreign-block-argument	4
o|    ##sys#foreign-pointer-argument	7
o|    ##sys#foreign-fixnum-argument	16
o|    scheme#memq	2
o|    ##sys#slot	24
o|    chicken.fixnum#fx-	6
o|    chicken.fixnum#fx<=	3
o|    scheme#apply	2
o|    scheme#not	8
o|    ##sys#check-list
o|    scheme#null?	13
o|    ##sys#check-pair
o|    scheme#pair?	8
o|contracted procedure: k953 
o|contracted procedure: k960 
o|contracted procedure: k969 
o|contracted procedure: k978 
o|contracted procedure: k982 
o|contracted procedure: k1024 
o|contracted procedure: k1056 
o|contracted procedure: k1079 
o|contracted procedure: k1538 
o|contracted procedure: k1204 
o|contracted procedure: k1532 
o|contracted procedure: k1207 
o|contracted procedure: k1526 
o|contracted procedure: k1210 
o|contracted procedure: k1520 
o|contracted procedure: k1213 
o|contracted procedure: k1514 
o|contracted procedure: k1216 
o|contracted procedure: k1508 
o|contracted procedure: k1219 
o|contracted procedure: k1247 
o|contracted procedure: k1240 
o|contracted procedure: k1273 
o|contracted procedure: k1262 
o|contracted procedure: k1269 
o|contracted procedure: k1297 
o|contracted procedure: k1317 
o|contracted procedure: k1303 
o|contracted procedure: k1310 
o|contracted procedure: k1323 
o|contracted procedure: k1343 
o|contracted procedure: k1329 
o|contracted procedure: k1336 
o|contracted procedure: k1087 
o|contracted procedure: k1091 
o|contracted procedure: k1095 
o|contracted procedure: k1099 
o|contracted procedure: k1103 
o|contracted procedure: k1394 
o|contracted procedure: k1143 
o|contracted procedure: k1147 
o|contracted procedure: k1151 
o|contracted procedure: k1155 
o|contracted procedure: k1159 
o|contracted procedure: k1409 
o|contracted procedure: k1427 
o|contracted procedure: k1430 
o|contracted procedure: k1115 
o|contracted procedure: k1119 
o|contracted procedure: k1123 
o|contracted procedure: k1127 
o|contracted procedure: k1131 
o|contracted procedure: k1466 
o|contracted procedure: k1171 
o|contracted procedure: k1175 
o|contracted procedure: k1179 
o|contracted procedure: k1183 
o|contracted procedure: k1187 
o|contracted procedure: k1477 
o|contracted procedure: k1481 
o|contracted procedure: k1496 
o|contracted procedure: k1502 
o|contracted procedure: k1548 
o|contracted procedure: k1555 
o|contracted procedure: k1628 
o|contracted procedure: k1632 
o|contracted procedure: k1643 
o|contracted procedure: k1727 
o|contracted procedure: k1705 
o|contracted procedure: k1714 
o|contracted procedure: k1724 
o|contracted procedure: k1828 
o|contracted procedure: k1888 
o|contracted procedure: k1833 
o|contracted procedure: k1836 
o|contracted procedure: k1857 
o|contracted procedure: k1872 
o|contracted procedure: k1882 
o|contracted procedure: k1842 
o|contracted procedure: k1907 
o|contracted procedure: k1919 
o|contracted procedure: k1922 
o|contracted procedure: k1937 
o|contracted procedure: k1943 
o|contracted procedure: k1949 
o|contracted procedure: k1952 
o|contracted procedure: k1964 
o|contracted procedure: k1974 
o|contracted procedure: k1991 
o|contracted procedure: k1995 
o|contracted procedure: k2004 
o|contracted procedure: k2007 
o|contracted procedure: k2020 
o|contracted procedure: k2027 
o|contracted procedure: k2037 
o|contracted procedure: k2055 
o|contracted procedure: k2061 
o|contracted procedure: k2068 
o|contracted procedure: k2071 
o|contracted procedure: k2074 
o|contracted procedure: k2088 
o|contracted procedure: k2097 
o|contracted procedure: k2100 
o|contracted procedure: k2107 
o|contracted procedure: k2115 
o|contracted procedure: k2120 
o|contracted procedure: k2138 
o|contracted procedure: k2145 
o|contracted procedure: k2155 
o|contracted procedure: k2151 
o|contracted procedure: k2181 
o|contracted procedure: k2188 
o|contracted procedure: k2214 
o|contracted procedure: k2221 
o|contracted procedure: k2239 
o|contracted procedure: k2287 
o|contracted procedure: k2300 
o|contracted procedure: k2307 
o|contracted procedure: k2343 
o|contracted procedure: k2316 
o|contracted procedure: k2330 
o|contracted procedure: k2340 
o|contracted procedure: k2368 
o|contracted procedure: k2384 
o|contracted procedure: k2392 
o|contracted procedure: k2388 
o|contracted procedure: k2405 
o|contracted procedure: k2420 
o|contracted procedure: k2434 
o|contracted procedure: k2423 
o|contracted procedure: k2430 
o|contracted procedure: k2455 
o|contracted procedure: k2470 
o|contracted procedure: k2466 
o|contracted procedure: k2487 
o|contracted procedure: k2484 
o|contracted procedure: k2503 
o|contracted procedure: k2500 
o|contracted procedure: k2541 
o|contracted procedure: k2549 
o|contracted procedure: k2545 
o|contracted procedure: k2555 
o|contracted procedure: k2558 
o|contracted procedure: k2568 
o|contracted procedure: k1984 
o|contracted procedure: k2572 
o|simplifications: ((let . 26)) 
o|removed binding forms: 146 
o|inlining procedure: k1405 
o|inlining procedure: "(lolevel.scm:231) align375" 
o|inlining procedure: "(lolevel.scm:233) align375" 
o|inlining procedure: k2013 
o|replaced variables: 63 
o|replaced variables: 4 
o|removed binding forms: 48 
o|inlining procedure: k1671 
o|contracted procedure: k1845 
o|removed binding forms: 5 
o|removed binding forms: 1 
o|direct leaf routine/allocation: chicken.memory#pv-buf-set! 0 
o|direct leaf routine/allocation: doloop737738 0 
o|contracted procedure: "(lolevel.scm:351) k1875" 
o|contracted procedure: "(lolevel.scm:366) k1928" 
o|contracted procedure: "(lolevel.scm:375) k1967" 
o|converted assignments to bindings: (doloop737738) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|direct leaf routine/allocation: doloop496497 0 
o|direct leaf routine/allocation: doloop524525 0 
o|contracted procedure: k1851 
o|converted assignments to bindings: (doloop496497) 
o|converted assignments to bindings: (doloop524525) 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|customizable procedures: (k2327 copy622 doloop631632 doloop511512 k1744 k1695 k1664 k1359 k1446 checkn2231 k1375 checkn1230 nosizerr228 move242 k1256 sizerr229 k1046 k1014 loop94) 
o|calls to known targets: 46 
o|identified direct recursive calls: f_1292 2 
o|identified direct recursive calls: f_1867 1 
o|identified direct recursive calls: f_1959 1 
o|identified direct recursive calls: f_2415 1 
o|fast box initializations: 9 
o|fast global references: 9 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1988 
*/
/* end of file */

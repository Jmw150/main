/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: lolevel.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file lolevel.c
   unit: lolevel
*/

#include "chicken.h"

#ifndef C_NONUNIX
# include <sys/mman.h>
#endif

#define C_memmove_o(to, from, n, toff, foff) C_memmove((char *)(to) + (toff), (char *)(from) + (foff), (n))

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[141];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,99,104,101,99,107,45,98,108,111,99,107,32,120,54,52,32,108,111,99,54,53,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,115,116,114,117,99,116,117,114,101,32,120,56,55,32,108,111,99,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,99,104,101,99,107,45,112,111,105,110,116,101,114,32,120,49,48,54,32,46,32,108,111,99,49,48,55,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,10),40,110,111,115,105,122,101,114,114,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,115,105,122,101,114,114,32,97,114,103,115,50,48,57,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,99,104,101,99,107,110,49,32,110,50,49,48,32,110,109,97,120,50,49,49,32,111,102,102,50,49,50,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,47),40,99,104,101,99,107,110,50,32,110,50,49,51,32,110,109,97,120,50,49,52,32,110,109,97,120,50,50,49,53,32,111,102,102,49,50,49,54,32,111,102,102,50,50,49,55,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,20),40,109,111,118,101,32,102,114,111,109,50,50,48,32,116,111,50,50,49,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,40),40,109,111,118,101,45,109,101,109,111,114,121,33,32,102,114,111,109,49,57,48,32,116,111,49,57,49,32,46,32,116,109,112,49,56,57,49,57,50,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,51,48,54,32,105,51,48,56,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,50,57,53,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,18),40,111,98,106,101,99,116,45,99,111,112,121,32,120,50,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,20),40,97,108,108,111,99,97,116,101,32,105,110,116,51,49,52,51,49,55,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,22),40,102,114,101,101,32,99,45,112,111,105,110,116,101,114,51,50,48,51,50,52,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,15),40,112,111,105,110,116,101,114,63,32,120,51,50,55,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,112,111,105,110,116,101,114,45,108,105,107,101,63,32,120,51,51,50,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,97,100,100,114,101,115,115,45,62,112,111,105,110,116,101,114,32,97,100,100,114,51,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,25),40,112,111,105,110,116,101,114,45,62,97,100,100,114,101,115,115,32,112,116,114,51,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,22),40,111,98,106,101,99,116,45,62,112,111,105,110,116,101,114,32,120,51,52,52,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,24),40,112,111,105,110,116,101,114,45,62,111,98,106,101,99,116,32,112,116,114,51,53,52,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,23),40,112,111,105,110,116,101,114,61,63,32,112,49,51,53,55,32,112,50,51,53,56,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,30),40,112,111,105,110,116,101,114,43,32,112,116,114,51,54,50,51,54,55,32,111,102,102,51,54,51,51,54,56,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,20),40,97,108,105,103,110,45,116,111,45,119,111,114,100,32,120,51,55,56,41,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,27),40,116,97,103,45,112,111,105,110,116,101,114,32,112,116,114,51,56,56,32,116,97,103,51,56,57,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,34),40,116,97,103,103,101,100,45,112,111,105,110,116,101,114,63,32,120,52,48,50,32,46,32,116,109,112,52,48,49,52,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,18),40,112,111,105,110,116,101,114,45,116,97,103,32,120,52,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,33),40,109,97,107,101,45,108,111,99,97,116,105,118,101,32,111,98,106,52,50,51,32,46,32,105,110,100,101,120,52,50,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,38),40,109,97,107,101,45,119,101,97,107,45,108,111,99,97,116,105,118,101,32,111,98,106,52,51,48,32,46,32,105,110,100,101,120,52,51,49,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,25),40,108,111,99,97,116,105,118,101,45,115,101,116,33,32,120,52,51,55,32,121,52,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,23),40,108,111,99,97,116,105,118,101,45,62,111,98,106,101,99,116,32,120,52,52,50,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,16),40,108,111,99,97,116,105,118,101,63,32,120,52,52,52,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,27),40,112,111,105,110,116,101,114,45,117,56,45,115,101,116,33,32,112,52,52,55,32,110,52,52,56,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,27),40,112,111,105,110,116,101,114,45,115,56,45,115,101,116,33,32,112,52,53,48,32,110,52,53,49,41,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,117,49,54,45,115,101,116,33,32,112,52,53,51,32,110,52,53,52,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,115,49,54,45,115,101,116,33,32,112,52,53,54,32,110,52,53,55,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,117,51,50,45,115,101,116,33,32,112,52,53,57,32,110,52,54,48,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,115,51,50,45,115,101,116,33,32,112,52,54,50,32,110,52,54,51,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,102,51,50,45,115,101,116,33,32,112,52,54,53,32,110,52,54,54,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,28),40,112,111,105,110,116,101,114,45,102,54,52,45,115,101,116,33,32,112,52,54,56,32,110,52,54,57,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,12),40,97,50,49,55,48,32,120,52,57,48,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,17),40,97,50,49,56,54,32,120,52,57,50,32,105,52,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,34),40,101,120,116,101,110,100,45,112,114,111,99,101,100,117,114,101,32,112,114,111,99,52,56,56,32,100,97,116,97,52,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,12),40,97,50,50,49,51,32,120,53,48,52,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,26),40,101,120,116,101,110,100,101,100,45,112,114,111,99,101,100,117,114,101,63,32,120,52,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,12),40,97,50,50,52,54,32,120,53,49,52,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,21),40,112,114,111,99,101,100,117,114,101,45,100,97,116,97,32,120,53,48,55,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,34),40,115,101,116,45,112,114,111,99,101,100,117,114,101,45,100,97,116,97,33,32,112,114,111,99,53,49,55,32,120,53,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,19),40,118,101,99,116,111,114,45,108,105,107,101,63,32,120,53,50,49,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,22),40,110,117,109,98,101,114,45,111,102,45,115,108,111,116,115,32,120,53,51,50,41,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,22),40,110,117,109,98,101,114,45,111,102,45,98,121,116,101,115,32,120,53,51,53,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,40),40,109,97,107,101,45,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,32,116,121,112,101,53,52,49,32,46,32,97,114,103,115,53,52,50,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,35),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,63,32,120,53,52,57,32,46,32,116,109,112,53,52,56,53,53,48,41,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,27),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,116,121,112,101,32,120,53,54,53,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,29),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,108,101,110,103,116,104,32,120,53,54,56,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,42),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,115,108,111,116,45,115,101,116,33,32,120,53,55,49,32,105,53,55,50,32,121,53,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,56,53,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,21),40,114,101,99,111,114,100,45,62,118,101,99,116,111,114,32,120,53,56,50,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,22),40,111,98,106,101,99,116,45,101,118,105,99,116,101,100,63,32,120,53,57,50,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,49,53,32,105,54,49,55,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,54,48,52,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,18),40,102,95,50,53,56,57,32,105,110,116,53,57,56,54,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,34),40,111,98,106,101,99,116,45,101,118,105,99,116,32,120,53,57,52,32,46,32,97,108,108,111,99,97,116,111,114,53,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,53,50,32,105,54,53,52,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,54,52,48,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,49),40,111,98,106,101,99,116,45,101,118,105,99,116,45,116,111,45,108,111,99,97,116,105,111,110,32,120,54,50,57,32,112,116,114,54,51,48,32,46,32,108,105,109,105,116,54,51,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,54,56,53,32,105,54,56,55,41};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,14),40,114,101,108,101,97,115,101,32,120,54,55,57,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,24),40,102,95,50,56,52,50,32,99,45,112,111,105,110,116,101,114,54,55,50,54,55,54,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,35),40,111,98,106,101,99,116,45,114,101,108,101,97,115,101,32,120,54,54,56,32,46,32,114,101,108,101,97,115,101,114,54,54,57,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,48,52,32,105,55,48,54,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,54,57,55,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,18),40,111,98,106,101,99,116,45,115,105,122,101,32,120,54,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,52,51,32,105,55,52,53,41};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,55,50,57,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,33),40,111,98,106,101,99,116,45,117,110,101,118,105,99,116,32,120,55,50,48,32,46,32,116,109,112,55,49,57,55,50,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,115,116,55,50,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,24),40,111,98,106,101,99,116,45,98,101,99,111,109,101,33,32,97,108,115,116,55,53,50,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,34),40,109,117,116,97,116,101,45,112,114,111,99,101,100,117,114,101,33,32,111,108,100,55,53,53,32,112,114,111,99,55,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,55,57,41,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,38),40,109,97,107,101,45,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,110,55,54,57,32,46,32,116,109,112,55,54,56,55,55,48,41,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,22),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,63,32,120,55,56,56,41,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,55,57,52,32,112,116,114,115,55,57,54,32,105,55,57,55,41};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,26),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,46,32,112,116,114,115,55,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,56,48,55,41,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,35),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,102,105,108,108,33,32,112,118,56,48,51,32,112,116,114,56,48,52,41,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,31),40,112,118,45,98,117,102,45,115,101,116,33,32,105,56,50,52,56,51,48,32,112,116,114,56,50,53,56,51,49,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,39),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,115,101,116,33,32,112,118,56,51,52,32,105,56,51,53,32,112,116,114,56,51,54,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,29),40,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,108,101,110,103,116,104,32,112,118,56,52,56,41,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,18),40,97,51,51,48,56,32,112,118,56,52,50,32,105,56,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,17),40,97,51,51,51,49,32,120,53,55,55,32,105,53,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,12),40,97,51,51,53,53,32,112,52,56,53,41,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,12),40,97,51,51,53,56,32,112,52,56,51,41,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,12),40,97,51,51,54,49,32,112,52,56,49,41,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,12),40,97,51,51,54,52,32,112,52,55,57,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,12),40,97,51,51,54,55,32,112,52,55,55,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,12),40,97,51,51,55,48,32,112,52,55,53,41,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,12),40,97,51,51,55,51,32,112,52,55,51,41,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,12),40,97,51,51,55,54,32,112,52,55,49,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,14),40,97,51,51,55,57,32,108,111,99,52,52,48,41,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub826(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
void * ptr=(void * )C_c_pointer_or_null(C_a2);
*((void **)C_data_pointer(buf) + i) = ptr;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub817(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
C_return(*((void **)C_data_pointer(buf) + i));
C_ret:
#undef return

return C_r;}

/* from k2845 */
C_regparm static C_word C_fcall stub673(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k2592 */
C_regparm static C_word C_fcall stub599(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1938 */
C_regparm static C_word C_fcall stub374(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub364(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
C_return((unsigned char *)ptr + off);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub349(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
C_return((void *)x);
C_ret:
#undef return

return C_r;}

/* from k1851 */
C_regparm static C_word C_fcall stub321(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k1844 */
C_regparm static C_word C_fcall stub315(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1401 */
C_regparm static C_word C_fcall stub173(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1373 */
C_regparm static C_word C_fcall stub157(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1345 */
C_regparm static C_word C_fcall stub141(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1317 */
C_regparm static C_word C_fcall stub125(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word *av) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_3224)
static C_word C_fcall f_3224(C_word t0,C_word t1);
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word *av) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word *av) C_noret;
C_noret_decl(f_3253)
static C_word C_fcall f_3253(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2534)
static void C_fcall f_2534(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2532)
static void C_fcall f_2532(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word *av) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word *av) C_noret;
C_noret_decl(f_1201)
static void C_ccall f_1201(C_word c,C_word *av) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word *av) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word *av) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word *av) C_noret;
C_noret_decl(f_1921)
static void C_ccall f_1921(C_word c,C_word *av) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word *av) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word *av) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word *av) C_noret;
C_noret_decl(f_2660)
static void C_fcall f_2660(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word *av) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word *av) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word *av) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2658)
static void C_fcall f_2658(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word *av) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word *av) C_noret;
C_noret_decl(f_2617)
static void C_fcall f_2617(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word *av) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word *av) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word *av) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word *av) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word *av) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word *av) C_noret;
C_noret_decl(f_2814)
static void C_fcall f_2814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word *av) C_noret;
C_noret_decl(f_2603)
static void C_fcall f_2603(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1218)
static void C_fcall f_1218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1810)
static void C_fcall f_1810(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word *av) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word *av) C_noret;
C_noret_decl(f_1262)
static void C_fcall f_1262(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word *av) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word *av) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word *av) C_noret;
C_noret_decl(f_1230)
static void C_fcall f_1230(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3021)
static void C_fcall f_3021(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2152)
static void C_ccall f_2152(C_word c,C_word *av) C_noret;
C_noret_decl(f_1591)
static void C_fcall f_1591(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word *av) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word *av) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word *av) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word *av) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word *av) C_noret;
C_noret_decl(f_1472)
static void C_fcall f_1472(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word *av) C_noret;
C_noret_decl(f_1575)
static void C_fcall f_1575(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word *av) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word *av) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word *av) C_noret;
C_noret_decl(f_2276)
static void C_ccall f_2276(C_word c,C_word *av) C_noret;
C_noret_decl(f_1465)
static void C_fcall f_1465(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word *av) C_noret;
C_noret_decl(f_2105)
static void C_ccall f_2105(C_word c,C_word *av) C_noret;
C_noret_decl(f_2102)
static void C_ccall f_2102(C_word c,C_word *av) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word *av) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word *av) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word *av) C_noret;
C_noret_decl(f_2042)
static void C_fcall f_2042(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2144)
static void C_ccall f_2144(C_word c,C_word *av) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word *av) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148(C_word c,C_word *av) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word *av) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word *av) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word *av) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word *av) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word *av) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word *av) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word *av) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word *av) C_noret;
C_noret_decl(f_3298)
static void C_ccall f_3298(C_word c,C_word *av) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word *av) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word *av) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word *av) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word *av) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word *av) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word *av) C_noret;
C_noret_decl(f_1443)
static void C_fcall f_1443(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1449)
static void C_fcall f_1449(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word *av) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word *av) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word *av) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word *av) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word *av) C_noret;
C_noret_decl(f_1181)
static void C_fcall f_1181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word *av) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word *av) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word *av) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word *av) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word *av) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word *av) C_noret;
C_noret_decl(f_3132)
static C_word C_fcall f_3132(C_word t0,C_word t1);
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word *av) C_noret;
C_noret_decl(f_2519)
static void C_fcall f_2519(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2516)
static void C_ccall f_2516(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_ccall f_3082(C_word c,C_word *av) C_noret;
C_noret_decl(f_3280)
static void C_ccall f_3280(C_word c,C_word *av) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word *av) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word *av) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word *av) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word *av) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word *av) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word *av) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word *av) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word *av) C_noret;
C_noret_decl(f_2096)
static void C_ccall f_2096(C_word c,C_word *av) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word *av) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word *av) C_noret;
C_noret_decl(f_1154)
static void C_fcall f_1154(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word *av) C_noret;
C_noret_decl(f_2751)
static void C_ccall f_2751(C_word c,C_word *av) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word *av) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word *av) C_noret;
C_noret_decl(f_2764)
static void C_fcall f_2764(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_fcall f_2769(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word *av) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word *av) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word *av) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word *av) C_noret;
C_noret_decl(f_2861)
static void C_fcall f_2861(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word *av) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word *av) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word *av) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word *av) C_noret;
C_noret_decl(f_2950)
static void C_fcall f_2950(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word *av) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word *av) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word *av) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word *av) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word *av) C_noret;
C_noret_decl(f_2166)
static void C_ccall f_2166(C_word c,C_word *av) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word *av) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word *av) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word *av) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word *av) C_noret;
C_noret_decl(f_2493)
static void C_fcall f_2493(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2366)
static void C_fcall f_2366(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word *av) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word *av) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word *av) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word *av) C_noret;
C_noret_decl(f_2387)
static void C_ccall f_2387(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externexport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_2485)
static void C_ccall f_2485(C_word c,C_word *av) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word *av) C_noret;
C_noret_decl(f_2482)
static void C_fcall f_2482(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2589)
static void C_ccall f_2589(C_word c,C_word *av) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word *av) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word *av) C_noret;
C_noret_decl(f_2452)
static C_word C_fcall f_2452(C_word t0,C_word t1);
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word *av) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word *av) C_noret;
C_noret_decl(f_3179)
static void C_fcall f_3179(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word *av) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word *av) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word *av) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word *av) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word *av) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word *av) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word *av) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word *av) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word *av) C_noret;
C_noret_decl(f_1993)
static void C_fcall f_1993(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word *av) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word *av) C_noret;
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word *av) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word *av) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word *av) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word *av) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word *av) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word *av) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word *av) C_noret;
C_noret_decl(f_1973)
static void C_ccall f_1973(C_word c,C_word *av) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word *av) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word *av) C_noret;
C_noret_decl(f_2642)
static void C_fcall f_2642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word *av) C_noret;
C_noret_decl(f_2636)
static void C_fcall f_2636(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word *av) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word *av) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word *av) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word *av) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word *av) C_noret;
C_noret_decl(f_1506)
static void C_fcall f_1506(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1765)
static void C_fcall f_1765(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1437)
static void C_fcall f_1437(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word *av) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word *av) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word *av) C_noret;
C_noret_decl(f3719)
static void C_ccall f3719(C_word c,C_word *av) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word *av) C_noret;
C_noret_decl(f_1662)
static void C_fcall f_1662(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word *av) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word *av) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word *av) C_noret;
C_noret_decl(f_2880)
static void C_fcall f_2880(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1962)
static void C_fcall f_1962(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word *av) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word *av) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word *av) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word *av) C_noret;
C_noret_decl(f_2895)
static void C_fcall f_2895(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2893)
static void C_fcall f_2893(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word *av) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word *av) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word *av) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word *av) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word *av) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word *av) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word *av) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2534)
static void C_ccall trf_2534(C_word c,C_word *av) C_noret;
static void C_ccall trf_2534(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2534(t0,t1,t2);}

C_noret_decl(trf_2532)
static void C_ccall trf_2532(C_word c,C_word *av) C_noret;
static void C_ccall trf_2532(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2532(t0,t1);}

C_noret_decl(trf_2660)
static void C_ccall trf_2660(C_word c,C_word *av) C_noret;
static void C_ccall trf_2660(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2660(t0,t1,t2);}

C_noret_decl(trf_2658)
static void C_ccall trf_2658(C_word c,C_word *av) C_noret;
static void C_ccall trf_2658(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2658(t0,t1);}

C_noret_decl(trf_2617)
static void C_ccall trf_2617(C_word c,C_word *av) C_noret;
static void C_ccall trf_2617(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2617(t0,t1,t2);}

C_noret_decl(trf_2814)
static void C_ccall trf_2814(C_word c,C_word *av) C_noret;
static void C_ccall trf_2814(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2814(t0,t1,t2);}

C_noret_decl(trf_2603)
static void C_ccall trf_2603(C_word c,C_word *av) C_noret;
static void C_ccall trf_2603(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2603(t0,t1);}

C_noret_decl(trf_1218)
static void C_ccall trf_1218(C_word c,C_word *av) C_noret;
static void C_ccall trf_1218(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1218(t0,t1,t2);}

C_noret_decl(trf_1810)
static void C_ccall trf_1810(C_word c,C_word *av) C_noret;
static void C_ccall trf_1810(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1810(t0,t1,t2);}

C_noret_decl(trf_1262)
static void C_ccall trf_1262(C_word c,C_word *av) C_noret;
static void C_ccall trf_1262(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1262(t0,t1);}

C_noret_decl(trf_1230)
static void C_ccall trf_1230(C_word c,C_word *av) C_noret;
static void C_ccall trf_1230(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1230(t0,t1);}

C_noret_decl(trf_3021)
static void C_ccall trf_3021(C_word c,C_word *av) C_noret;
static void C_ccall trf_3021(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3021(t0,t1,t2);}

C_noret_decl(trf_1591)
static void C_ccall trf_1591(C_word c,C_word *av) C_noret;
static void C_ccall trf_1591(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1591(t0,t1);}

C_noret_decl(trf_1472)
static void C_ccall trf_1472(C_word c,C_word *av) C_noret;
static void C_ccall trf_1472(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1472(t0,t1);}

C_noret_decl(trf_1575)
static void C_ccall trf_1575(C_word c,C_word *av) C_noret;
static void C_ccall trf_1575(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1575(t0,t1);}

C_noret_decl(trf_1465)
static void C_ccall trf_1465(C_word c,C_word *av) C_noret;
static void C_ccall trf_1465(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_1465(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2042)
static void C_ccall trf_2042(C_word c,C_word *av) C_noret;
static void C_ccall trf_2042(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2042(t0,t1);}

C_noret_decl(trf_1443)
static void C_ccall trf_1443(C_word c,C_word *av) C_noret;
static void C_ccall trf_1443(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1443(t0,t1,t2);}

C_noret_decl(trf_1449)
static void C_ccall trf_1449(C_word c,C_word *av) C_noret;
static void C_ccall trf_1449(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1449(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1181)
static void C_ccall trf_1181(C_word c,C_word *av) C_noret;
static void C_ccall trf_1181(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1181(t0,t1,t2);}

C_noret_decl(trf_2519)
static void C_ccall trf_2519(C_word c,C_word *av) C_noret;
static void C_ccall trf_2519(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2519(t0,t1);}

C_noret_decl(trf_1154)
static void C_ccall trf_1154(C_word c,C_word *av) C_noret;
static void C_ccall trf_1154(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1154(t0,t1,t2);}

C_noret_decl(trf_2764)
static void C_ccall trf_2764(C_word c,C_word *av) C_noret;
static void C_ccall trf_2764(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2764(t0,t1);}

C_noret_decl(trf_2769)
static void C_ccall trf_2769(C_word c,C_word *av) C_noret;
static void C_ccall trf_2769(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2769(t0,t1,t2);}

C_noret_decl(trf_2861)
static void C_ccall trf_2861(C_word c,C_word *av) C_noret;
static void C_ccall trf_2861(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2861(t0,t1,t2);}

C_noret_decl(trf_2950)
static void C_ccall trf_2950(C_word c,C_word *av) C_noret;
static void C_ccall trf_2950(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2950(t0,t1,t2);}

C_noret_decl(trf_2493)
static void C_ccall trf_2493(C_word c,C_word *av) C_noret;
static void C_ccall trf_2493(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2493(t0,t1,t2);}

C_noret_decl(trf_2366)
static void C_ccall trf_2366(C_word c,C_word *av) C_noret;
static void C_ccall trf_2366(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2366(t0,t1);}

C_noret_decl(trf_2482)
static void C_ccall trf_2482(C_word c,C_word *av) C_noret;
static void C_ccall trf_2482(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2482(t0,t1);}

C_noret_decl(trf_3179)
static void C_ccall trf_3179(C_word c,C_word *av) C_noret;
static void C_ccall trf_3179(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3179(t0,t1,t2,t3);}

C_noret_decl(trf_1993)
static void C_ccall trf_1993(C_word c,C_word *av) C_noret;
static void C_ccall trf_1993(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1993(t0,t1);}

C_noret_decl(trf_2642)
static void C_ccall trf_2642(C_word c,C_word *av) C_noret;
static void C_ccall trf_2642(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2642(t0,t1);}

C_noret_decl(trf_2636)
static void C_ccall trf_2636(C_word c,C_word *av) C_noret;
static void C_ccall trf_2636(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2636(t0,t1);}

C_noret_decl(trf_1506)
static void C_ccall trf_1506(C_word c,C_word *av) C_noret;
static void C_ccall trf_1506(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1506(t0,t1,t2,t3);}

C_noret_decl(trf_1765)
static void C_ccall trf_1765(C_word c,C_word *av) C_noret;
static void C_ccall trf_1765(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1765(t0,t1,t2);}

C_noret_decl(trf_1437)
static void C_ccall trf_1437(C_word c,C_word *av) C_noret;
static void C_ccall trf_1437(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1437(t0,t1);}

C_noret_decl(trf_1662)
static void C_ccall trf_1662(C_word c,C_word *av) C_noret;
static void C_ccall trf_1662(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1662(t0,t1);}

C_noret_decl(trf_2880)
static void C_ccall trf_2880(C_word c,C_word *av) C_noret;
static void C_ccall trf_2880(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2880(t0,t1);}

C_noret_decl(trf_1962)
static void C_ccall trf_1962(C_word c,C_word *av) C_noret;
static void C_ccall trf_1962(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1962(t0,t1);}

C_noret_decl(trf_2895)
static void C_ccall trf_2895(C_word c,C_word *av) C_noret;
static void C_ccall trf_2895(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2895(t0,t1,t2);}

C_noret_decl(trf_2893)
static void C_ccall trf_2893(C_word c,C_word *av) C_noret;
static void C_ccall trf_2893(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2893(t0,t1);}

/* record-instance? in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_2351,c,av);}
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
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2366,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=t2;
if(C_truep(C_blockp(t8))){
t9=C_structurep(t8);
t10=t7;
f_2366(t10,t9);}
else{
t9=t7;
f_2366(t9,C_SCHEME_FALSE);}}

/* k1687 in k1677 in k1660 in k1638 in k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_1689,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=stub173(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* doloop807 in k3211 in pointer-vector-fill! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static C_word C_fcall f_3224(C_word t0,C_word t1){
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
  /* lolevel.scm:658: pv-buf-set! */
  f_3253(((C_word*)t0)[3],t1,((C_word*)t0)[4])
);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* record->vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2437,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2441,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:469: ##sys#check-generic-structure */
f_1218(t3,t2,C_a_i_list(&a,1,lf[87]));}

/* k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(55,c,5)))){
C_save_and_reclaim((void *)f_2435,2,av);}
a=C_alloc(55);
t2=C_mutate2((C_word*)lf[86]+1 /* (set! record-instance-slot ...) */,t1);
t3=C_mutate2((C_word*)lf[87]+1 /* (set! record->vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2437,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[88]+1 /* (set! object-evicted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2475,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[89]+1 /* (set! object-evict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2478,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[95]+1 /* (set! object-evict-to-location ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2596,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[107]+1 /* (set! object-release ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2760,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[108]+1 /* (set! object-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2852,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[109]+1 /* (set! object-unevict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2938,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[111]+1 /* (set! object-become! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[114]+1 /* (set! mutate-procedure! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3065,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t12=C_a_i_list1(&a,1,lf[115]);
t13=t12;
t14=C_mutate2((C_word*)lf[116]+1 /* (set! make-pointer-vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3099,a[2]=t13,a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate2((C_word*)lf[120]+1 /* (set! pointer-vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3160,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[117]+1 /* (set! pointer-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3166,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[121]+1 /* (set! pointer-vector-fill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3206,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2(&lf[118] /* (set! pv-buf-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[122]+1 /* (set! pointer-vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3267,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3309,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:676: getter-with-setter */
t22=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t22;
av2[1]=t20;
av2[2]=t21;
av2[3]=*((C_word*)lf[122]+1);
av2[4]=lf[126];
((C_proc)(void*)(*((C_word*)t22+1)))(5,av2);}}

/* pv-buf-set! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static C_word C_fcall f_3253(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_i_foreign_fixnum_argumentp(t2);
if(C_truep(t3)){
t5=C_i_foreign_pointer_argumentp(t3);
return(stub826(C_SCHEME_UNDEFINED,t1,t4,t5));}
else{
return(stub826(C_SCHEME_UNDEFINED,t1,t4,C_SCHEME_FALSE));}}

/* doloop615 in k2530 in k2520 in k2517 in k2514 in k2510 in k2501 in evict in k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in ... */
static void C_fcall f_2534(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2534,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* lolevel.scm:500: evict */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2493(t5,t3,t4);}}

/* k2530 in k2520 in k2517 in k2514 in k2510 in k2501 in evict in k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in ... */
static void C_fcall f_2532(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_2532,2,t0,t1);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li58),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2534(t5,((C_word*)t0)[6],t1);}

/* k2649 in k2646 in k2643 in k2640 in k2637 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in ... */
static void C_ccall f_2651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2651,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* pointer-vector-fill! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3206(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3206,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[117],lf[121]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3213,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* lolevel.scm:653: ##sys#check-pointer */
t6=*((C_word*)lf[6]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[121];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_3213(2,av2);}}}

/* k1199 in loop in object-become! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_1201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1201,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_cdr(((C_word*)t0)[5]);
/* lolevel.scm:91: ##sys#check-block */
f_1154(t2,t3,C_a_i_list(&a,1,lf[111]));}

/* k1202 in k1199 in loop in object-become! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_1204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1204,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* lolevel.scm:92: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1181(t4,((C_word*)t0)[4],t3);}

/* k2646 in k2643 in k2640 in k2637 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in ... */
static void C_ccall f_2648(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2648,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2658,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2658(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2658(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k1147 */
static void C_ccall f_1149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1149,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1152,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:49: register-feature! */
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[140];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* pointer+ in k1150 in k1147 */
static void C_ccall f_1921(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1921,4,av);}
a=C_alloc(5);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_integer_argumentp(t3);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=stub364(t4,t5,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k2643 in k2640 in k2637 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in ... */
static void C_ccall f_2645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2645,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:533: hash-table-set! */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2627(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2627,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2636,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2742,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
/* lolevel.scm:518: align-to-word */
t6=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_bytes(t3);
t7=C_bytes(C_fix(1));
t8=t4;
f_2636(t8,C_fixnum_plus(t6,t7));}}}

/* k2732 in k2728 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in ... */
static void C_ccall f_2734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2734,2,av);}
/* lolevel.scm:524: make-composite-condition */
t2=*((C_word*)lf[98]+1);{
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

/* doloop652 in k2656 in k2646 in k2643 in k2640 in k2637 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in ... */
static void C_fcall f_2660(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2660,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2681,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* lolevel.scm:537: evict */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2617(t5,t3,t4);}}

/* k2728 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 in ... */
static void C_ccall f_2730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2730,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2734,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:529: make-property-condition */
t4=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[100];
av2[3]=lf[101];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2553 in doloop615 in k2530 in k2520 in k2517 in k2514 in k2510 in k2501 in evict in k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in ... */
static void C_ccall f_2555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2555,2,av);}
t2=C_i_set_i_slot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2534(t4,((C_word*)t0)[5],t3);}

/* pointer=? in k1150 in k1147 */
static void C_ccall f_1912(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1912,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1916,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:230: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[30];
tp(4,av2);}}

/* k1917 in k1914 in pointer=? in k1150 in k1147 */
static void C_ccall f_1919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1919,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_pointer_eqp(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1914 in pointer=? in k1150 in k1147 */
static void C_ccall f_1916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1916,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:231: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[30];
tp(4,av2);}}

/* k2656 in k2646 in k2643 in k2640 in k2637 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in ... */
static void C_fcall f_2658(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_2658,2,t0,t1);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li62),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2660(t5,((C_word*)t0)[6],t1);}

/* k1908 in pointer->object in k1150 in k1147 */
static void C_ccall f_1910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1910,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_pointer_to_object(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2724 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 in ... */
static void C_ccall f_2726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2726,2,av);}
/* lolevel.scm:523: signal */
t2=*((C_word*)lf[97]+1);{
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

/* evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2617(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2617,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2627,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:514: hash-table-ref/default */
t4=*((C_word*)lf[92]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2822 in doloop685 in release in k2762 in object-release in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2824,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2814(t3,((C_word*)t0)[4],t2);}

/* k2610 in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2612,2,av);}
/* lolevel.scm:539: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
C_values(4,av2);}}

/* pointer->object in k1150 in k1147 */
static void C_ccall f_1906(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1906,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1910,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:226: ##sys#check-pointer */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[29];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* object-become! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3056(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3056,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3060,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_i_check_list_2(t4,lf[111]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1181,a[2]=t7,a[3]=t4,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1181(t9,t3,t4);}

/* k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2606,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:510: make-hash-table */
t4=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[94]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2609(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2609,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word)li63),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2617(t7,t3,((C_word*)t0)[5]);}

/* doloop685 in release in k2762 in object-release in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2814,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2824,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm:556: release */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2769(t5,t3,t4);}}

/* k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2600(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2600,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=C_u_i_car(t3);
t5=C_i_check_exact_2(t4,lf[95]);
t6=t2;
f_2603(t6,t4);}
else{
t3=t2;
f_2603(t3,C_SCHEME_FALSE);}}

/* k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2603(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_2603,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2606,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2751,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:509: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* ##sys#check-generic-structure in k1150 in k1147 */
static void C_fcall f_1218(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1218,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1230,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
if(C_truep(C_blockp(t5))){
t6=C_structurep(t5);
t7=t4;
f_1230(t7,t6);}
else{
t6=t4;
f_1230(t6,C_SCHEME_FALSE);}}

/* doloop306 in k1793 in copy in object-copy in k1150 in k1147 */
static void C_fcall f_1810(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1810,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1831,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:200: copy */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1765(t5,t3,t4);}}

/* k2803 in k2796 in release in k2762 in object-release in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2805,2,av);}
/* lolevel.scm:557: free */
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

/* k3040 in doloop743 in k3010 in k3007 in k2964 in copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3042,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3021(t4,((C_word*)t0)[5],t3);}

/* k1260 in number-of-slots in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_1262(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1262,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_u_i_car(((C_word*)t0)[3]);
/* lolevel.scm:108: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[4];
av2[3]=t2;
av2[4]=lf[76];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* lolevel.scm:108: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[76];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_2938,c,av);}
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
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2945,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:579: make-hash-table */
t8=*((C_word*)lf[93]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=*((C_word*)lf[94]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k2929 in k2872 in evict in k2854 in object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2931,2,av);}
t2=C_bytes(C_fix(1));
t3=((C_word*)t0)[2];
f_2880(t3,C_fixnum_plus(t1,t2));}

/* k1596 in k1589 in k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_1598,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=stub125(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k1228 in check-generic-structure in k1150 in k1147 */
static void C_fcall f_1230(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1230,2,t0,t1);}
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
/* lolevel.scm:100: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[4];
av2[3]=t3;
av2[4]=lf[5];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
/* lolevel.scm:100: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[5];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* doloop743 in k3010 in k3007 in k2964 in copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_3021(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3021,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3042,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm:600: copy */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2950(t5,t3,t4);}}

/* k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2152(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2152,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[59]+1 /* (set! pointer-f32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3356,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:364: getter-with-setter */
t5=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[52]+1);
av2[4]=lf[130];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1589 in k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_fcall f_1591(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1591,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[7];
f_1598(2,av2);}}
else{
/* lolevel.scm:169: nosizerr */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1437(t3,t2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1607,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:170: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_2156,2,av);}
a=C_alloc(20);
t2=C_mutate2((C_word*)lf[60]+1 /* (set! pointer-f64-ref ...) */,t1);
t3=C_a_i_vector1(&a,1,lf[61]);
t4=C_mutate2(&lf[62] /* (set! xproc-tag ...) */,t3);
t5=C_mutate2((C_word*)lf[63]+1 /* (set! extend-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2162,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[66]+1 /* (set! extended-procedure? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2197,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[68]+1 /* (set! procedure-data ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2233,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[69]+1 /* (set! set-procedure-data! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2272,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[71]+1 /* (set! vector-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2287,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[72]+1 /* (set! block-set! ...) */,*((C_word*)lf[73]+1));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:412: getter-with-setter */
t12=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=*((C_word*)lf[128]+1);
av2[3]=*((C_word*)lf[73]+1);
av2[4]=lf[129];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* pointer-f64-set! in k2089 in k1150 in k1147 */
static void C_ccall f_2123(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2123,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_pointer_f64_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* pointer-f32-set! in k2089 in k1150 in k1147 */
static void C_ccall f_2120(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2120,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_pointer_f32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#check-pointer in k1150 in k1147 */
static void C_ccall f_1275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_1275,c,av);}
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
/* lolevel.scm:114: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=t5;
av2[3]=t7;
av2[4]=lf[7];
av2[5]=t2;
tp(6,av2);}}
else{
/* lolevel.scm:114: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=t5;
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[7];
av2[5]=t2;
tp(6,av2);}}}}

/* k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2128(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2128,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[53]+1 /* (set! pointer-u8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2132,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3374,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:328: getter-with-setter */
t5=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[46]+1);
av2[4]=lf[136];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1470 in checkn2 in move-memory! in k1150 in k1147 */
static void C_fcall f_1472(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1472,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* lolevel.scm:150: sizerr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1443(t2,((C_word*)t0)[3],C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]));}}

/* k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2132(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2132,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[54]+1 /* (set! pointer-s8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2136,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3371,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:334: getter-with-setter */
t5=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[47]+1);
av2[4]=lf[135];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_fcall f_1575(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1575,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[3];
t4=C_i_safe_pointerp(t3);
if(C_truep(t4)){
t5=t2;
f_1591(t5,t4);}
else{
t5=C_locativep(t3);
t6=t2;
f_1591(t6,t5);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1640,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:174: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k1619 in k1605 in k1589 in k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1621,2,av);}
t2=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:171: checkn1 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1449(t3,((C_word*)t0)[4],t1,t2,((C_word*)t0)[5]);}

/* k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2136(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2136,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[55]+1 /* (set! pointer-u16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3368,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:340: getter-with-setter */
t5=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[48]+1);
av2[4]=lf[134];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* set-procedure-data! in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2272(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2272,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2276,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:397: extend-procedure */
t5=*((C_word*)lf[63]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2274 in set-procedure-data! in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2276,2,av);}
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* lolevel.scm:400: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[4];
av2[3]=lf[69];
av2[4]=lf[70];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* checkn2 in move-memory! in k1150 in k1147 */
static void C_fcall f_1465(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1465,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(7);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1472,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=C_fixnum_difference(t3,t5);
if(C_truep(C_fixnum_less_or_equal_p(t2,t8))){
t9=C_fixnum_difference(t4,t6);
t10=t7;
f_1472(t10,C_fixnum_less_or_equal_p(t2,t9));}
else{
t9=t7;
f_1472(t9,C_SCHEME_FALSE);}}

/* make-locative in k1150 in k1147 */
static void C_ccall f_2054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_2054,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm:292: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[38];
tp(6,av2);}}
else{
t4=C_i_car(t3);
/* lolevel.scm:292: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[38];
tp(6,av2);}}}

/* pointer-s8-set! in k2089 in k1150 in k1147 */
static void C_ccall f_2105(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2105,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_pointer_s8_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* pointer-u8-set! in k2089 in k1150 in k1147 */
static void C_ccall f_2102(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2102,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_pointer_u8_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* pointer-u16-set! in k2089 in k1150 in k1147 */
static void C_ccall f_2108(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2108,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_pointer_u16_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* vector-like? in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2287(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2287,3,av);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_not(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_byteblockp(t2);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_not(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2915 in doloop704 in k2891 in k2881 in k2878 in k2872 in evict in k2854 in object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 in ... */
static void C_ccall f_2917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2917,2,av);}
t2=C_fixnum_plus(t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_set_block_item(((C_word*)t0)[2],0,t2);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_2895(t5,((C_word*)t0)[5],t4);}

/* k2040 in pointer-tag in k1150 in k1147 */
static void C_fcall f_2042(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_2042,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=(C_truep(C_taggedpointerp(((C_word*)t0)[3]))?C_slot(((C_word*)t0)[3],C_fix(1)):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:269: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[1]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=lf[37];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}}

/* k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2144(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2144,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[57]+1 /* (set! pointer-u32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2148,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3362,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:352: getter-with-setter */
t5=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[50]+1);
av2[4]=lf[132];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2140(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2140,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[56]+1 /* (set! pointer-s16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3365,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:346: getter-with-setter */
t5=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[49]+1);
av2[4]=lf[133];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2148(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2148,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[58]+1 /* (set! pointer-s32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2152,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3359,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:358: getter-with-setter */
t5=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[51]+1);
av2[4]=lf[131];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1495,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(0)))){
/* lolevel.scm:155: ##sys#error */
t3=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[9];
av2[3]=lf[15];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1498(2,av2);}}}

/* k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_1492,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:153: ##sys#check-block */
f_1154(t2,((C_word*)t0)[11],C_a_i_list(&a,1,lf[9]));}

/* k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1498,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[3],C_fix(0)))){
/* lolevel.scm:157: ##sys#error */
t3=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[9];
av2[3]=lf[14];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1501(2,av2);}}}

/* pointer-tag in k1150 in k1147 */
static void C_ccall f_2030(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2030,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2042,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_2042(t6,t5);}
else{
t5=t3;
f_2042(t5,C_SCHEME_FALSE);}}

/* k2414 in k2411 in record-instance-slot-set! in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2416,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[4],t2,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2262 in procedure-data in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2264,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(C_truep(t1)?C_slot(t1,C_fix(1)):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* pointer-vector-set! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3267(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3267,5,av);}
a=C_alloc(6);
t5=C_i_check_structure_2(t2,lf[117],lf[123]);
t6=C_i_check_exact_2(t3,lf[123]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3277,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=C_slot(t2,C_fix(1));
/* lolevel.scm:671: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[85]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t7;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=t8;
tp(5,av2);}}

/* k2411 in record-instance-slot-set! in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2413(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2413,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[4]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm:456: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[85]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=t4;
av2[5]=lf[84];
tp(6,av2);}}

/* k3296 in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3298,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[123]+1 /* (set! pointer-vector-ref ...) */,t1);
t3=C_mutate2((C_word*)lf[124]+1 /* (set! pointer-vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3300,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1615 in k1605 in k1589 in k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_1617,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=stub157(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* number-of-bytes in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2319,3,av);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_block_size(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_block_size(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_bytes(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
/* lolevel.scm:421: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[4];
av2[3]=lf[77];
av2[4]=lf[78];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* number-of-slots in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2310(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2310,3,av);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2314,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=t2;
t6=C_a_i_list(&a,1,lf[75]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1262,a[2]=t4,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_blockp(t5))){
t8=C_specialp(t5);
if(C_truep(t8)){
t9=t7;
f_1262(t9,C_i_not(t8));}
else{
t9=C_byteblockp(t5);
t10=t7;
f_1262(t10,C_i_not(t9));}}
else{
t8=t7;
f_1262(t8,C_SCHEME_FALSE);}}

/* k2312 in number-of-slots in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2314,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_block_size(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1605 in k1589 in k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1607(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1607,2,av);}
a=C_alloc(13);
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[8])){
t5=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:171: checkn1 */
t6=((C_word*)((C_word*)t0)[7])[1];
f_1449(t6,t3,((C_word*)t0)[8],t5,((C_word*)t0)[5]);}
else{
/* lolevel.scm:171: nosizerr */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1437(t5,t4);}}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:128: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[9];
av2[4]=t4;
tp(5,av2);}}}

/* k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_2308,2,av);}
a=C_alloc(27);
t2=C_mutate2((C_word*)lf[74]+1 /* (set! block-ref ...) */,t1);
t3=C_mutate2((C_word*)lf[75]+1 /* (set! number-of-slots ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2310,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[77]+1 /* (set! number-of-bytes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2319,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[79]+1 /* (set! make-record-instance ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2342,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[81]+1 /* (set! record-instance? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2351,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[82]+1 /* (set! record-instance-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2387,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[83]+1 /* (set! record-instance-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2396,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[84]+1 /* (set! record-instance-slot-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2409,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2435,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3332,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:460: getter-with-setter */
t12=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
av2[3]=*((C_word*)lf[84]+1);
av2[4]=lf[127];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* sizerr in move-memory! in k1150 in k1147 */
static void C_fcall f_1443(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_1443,3,t0,t1,t2);}{
C_word av2[8];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[10]+1);
av2[3]=lf[9];
av2[4]=lf[12];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[3];
av2[7]=t2;
C_apply(8,av2);}}

/* checkn1 in move-memory! in k1150 in k1147 */
static void C_fcall f_1449(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1449,5,t0,t1,t2,t3,t4);}
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
/* lolevel.scm:145: sizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1443(t6,t1,C_a_i_list(&a,2,t2,t3));}}

/* k2501 in evict in k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2503(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2503,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
/* lolevel.scm:492: align-to-word */
t5=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_bytes(t3);
f_2512(2,av2);}}}}

/* k3275 in pointer-vector-set! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3277,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* lolevel.scm:672: ##sys#check-pointer */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[122];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(2));
/* lolevel.scm:673: pv-buf-set! */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  /* lolevel.scm:673: pv-buf-set! */
  f_3253(t3,((C_word*)t0)[4],((C_word*)t0)[5])
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3334 in a3331 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3336(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3336,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[4]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm:463: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[85]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=t4;
av2[5]=lf[86];
tp(6,av2);}}

/* a3331 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3332(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3332,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3336,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:462: ##sys#check-generic-structure */
f_1218(t4,t2,C_a_i_list(&a,1,lf[86]));}

/* k3337 in k3334 in a3331 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3339,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in object-become! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_1181(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1181,3,t0,t1,t2);}
a=C_alloc(9);
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
t6=C_i_check_pair_2(t5,lf[111]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1201,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t8=C_u_i_car(t5);
/* lolevel.scm:90: ##sys#check-block */
f_1154(t7,t8,C_a_i_list(&a,1,lf[111]));}
else{
/* lolevel.scm:94: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[4];
av2[3]=lf[111];
av2[4]=lf[113];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}}

/* record-instance-slot-set! in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2409(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2409,5,av);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2413,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:455: ##sys#check-generic-structure */
f_1218(t5,t2,C_a_i_list(&a,1,lf[84]));}

/* k3092 in k3077 in k3070 in k3067 in mutate-procedure! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3094,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
/* lolevel.scm:616: ##sys#become! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[112]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[112]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
tp(3,av2);}}

/* k2398 in record-instance-length in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2400,2,av);}
t2=C_block_size(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_fixnum_difference(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* make-pointer-vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_3099,c,av);}
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?((C_word*)t0)[2]:C_i_car(t3));
t6=t5;
t7=C_i_check_exact_2(t2,lf[116]);
t8=C_fudge(C_fix(7));
t9=C_fixnum_times(t2,t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3115,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:628: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[119]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[119]+1);
av2[1]=t10;
av2[2]=t9;
tp(3,av2);}}

/* k2523 in k2520 in k2517 in k2514 in k2510 in k2501 in evict in k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in ... */
static void C_ccall f_2525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2525,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2520 in k2517 in k2514 in k2510 in k2501 in evict in k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in ... */
static void C_ccall f_2522(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2522,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2532,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2532(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2532(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* a3355 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_3356,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_u_i_pointer_f64_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop779 in k3125 in k3113 in make-pointer-vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static C_word C_fcall f_3132(C_word t0,C_word t1){
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
  /* lolevel.scm:634: pv-buf-set! */
  f_3253(((C_word*)t0)[3],t1,((C_word*)t0)[4])
);
t3=C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* a3358 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_3359,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_u_i_pointer_f32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2517 in k2514 in k2510 in k2501 in evict in k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 in ... */
static void C_fcall f_2519(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_2519,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:495: hash-table-set! */
t3=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2514 in k2510 in k2501 in evict in k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2516(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2516,2,av);}
a=C_alloc(8);
t2=C_evict_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t4=*((C_word*)lf[91]+1);
t5=t3;
f_2519(t5,C_i_set_i_slot(t2,C_fix(0),*((C_word*)lf[91]+1)));}
else{
t4=t3;
f_2519(t4,C_SCHEME_UNDEFINED);}}

/* k3080 in k3077 in k3070 in k3067 in mutate-procedure! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3082,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3278 in k3275 in pointer-vector-set! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3280,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
/* lolevel.scm:673: pv-buf-set! */
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(
  /* lolevel.scm:673: pv-buf-set! */
  f_3253(t2,((C_word*)t0)[4],((C_word*)t0)[5])
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2510 in k2501 in evict in k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2512(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2512,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_bytes(C_fix(1));
t4=C_fixnum_plus(t1,t3);
/* lolevel.scm:493: allocator */
t5=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* a3364 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_3365,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_u_i_pointer_u32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3361 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_3362,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_u_i_pointer_s32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3125 in k3113 in make-pointer-vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3127,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp);
t3=(
  f_3132(t2,C_fix(0))
);
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record3(&a,3,lf[117],((C_word*)t0)[2],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a3367 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3368,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_u_i_pointer_s16_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2089 in k1150 in k1147 */
static void C_ccall f_2091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_2091,2,av);}
a=C_alloc(36);
t2=C_mutate2((C_word*)lf[42]+1 /* (set! locative-ref ...) */,t1);
t3=C_mutate2((C_word*)lf[43]+1 /* (set! locative->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2093,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[44]+1 /* (set! locative? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2096,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[45]+1 /* (set! pointer-u8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2102,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[46]+1 /* (set! pointer-s8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2105,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[47]+1 /* (set! pointer-u16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2108,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[48]+1 /* (set! pointer-s16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2111,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[49]+1 /* (set! pointer-u32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2114,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[50]+1 /* (set! pointer-s32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2117,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[51]+1 /* (set! pointer-f32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2120,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[52]+1 /* (set! pointer-f64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2123,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3377,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:322: getter-with-setter */
t15=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=*((C_word*)lf[45]+1);
av2[4]=lf[137];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* locative->object in k2089 in k1150 in k1147 */
static void C_ccall f_2093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2093,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_locative_to_object(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2740 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2742,2,av);}
t2=C_bytes(C_fix(1));
t3=((C_word*)t0)[2];
f_2636(t3,C_fixnum_plus(t1,t2));}

/* locative? in k2089 in k1150 in k1147 */
static void C_ccall f_2096(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2096,3,av);}
if(C_truep(C_blockp(t2))){
t3=C_locativep(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3070 in k3067 in mutate-procedure! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3072(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3072,2,av);}
a=C_alloc(5);
t2=C_block_size(((C_word*)t0)[2]);
t3=C_words(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:615: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k3077 in k3070 in k3067 in mutate-procedure! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3079(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3079,2,av);}
a=C_alloc(8);
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3082,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3094,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:616: proc */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* ##sys#check-block in k1150 in k1147 */
static void C_fcall f_1154(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1154,3,t1,t2,t3);}
if(C_truep(C_blockp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=C_u_i_car(t5);
/* lolevel.scm:79: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=t6;
av2[4]=t2;
tp(5,av2);}}
else{
/* lolevel.scm:79: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
tp(5,av2);}}}}

/* k1150 in k1147 */
static void C_ccall f_1152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(73,c,4)))){
C_save_and_reclaim((void *)f_1152,2,av);}
a=C_alloc(73);
t2=C_mutate2(&lf[0] /* (set! ##sys#check-block ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1154,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2(&lf[2] /* (set! ##sys#check-generic-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1218,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[6]+1 /* (set! ##sys#check-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1275,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=lf[8];
t6=C_mutate2((C_word*)lf[9]+1 /* (set! move-memory! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1416,a[2]=t5,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate2((C_word*)lf[16]+1 /* (set! object-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1759,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[18]+1 /* (set! allocate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1841,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[19]+1 /* (set! free ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1848,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[20]+1 /* (set! pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1858,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[21]+1 /* (set! pointer-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1866,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[22]+1 /* (set! address->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1877,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[25]+1 /* (set! pointer->address ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1886,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[28]+1 /* (set! object->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1895,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[29]+1 /* (set! pointer->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1906,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[30]+1 /* (set! pointer=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1912,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[31]+1 /* (set! pointer+ ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1921,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[32]+1 /* (set! align-to-word ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1941,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[34]+1 /* (set! tag-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1978,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[36]+1 /* (set! tagged-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1999,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[37]+1 /* (set! pointer-tag ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2030,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[38]+1 /* (set! make-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2054,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[40]+1 /* (set! make-weak-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2070,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2((C_word*)lf[41]+1 /* (set! locative-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2086,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2091,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3380,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:300: getter-with-setter */
t27=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t27;
av2[1]=t25;
av2[2]=t26;
av2[3]=*((C_word*)lf[41]+1);
av2[4]=lf[138];
((C_proc)(void*)(*((C_word*)t27+1)))(5,av2);}}

/* k2749 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2751,2,av);}
/* lolevel.scm:509: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k3058 in object-become! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3060,2,av);}
/* lolevel.scm:608: ##sys#become! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[112]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[112]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* mutate-procedure! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3065(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3065,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3069,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:611: ##sys#check-closure */
t5=*((C_word*)lf[65]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[114];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3067 in mutate-procedure! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3069,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:612: ##sys#check-closure */
t3=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[114];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2762 in object-release in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2764(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_2764,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2769,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2769(t8,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* release in k2762 in object-release in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2769(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_2769,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_blockp(t2))){
if(C_truep(C_permanentp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_block_size(t2);
t4=t3;
t5=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2798,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_byteblockp(t2))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3719,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:558: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t8;
av2[2]=C_block_address(&a,1,t2);
tp(3,av2);}}
else{
t8=(C_truep(C_specialp(t2))?C_fix(1):C_fix(0));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2814,a[2]=t4,a[3]=t10,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2814(t12,t7,t8);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* object-release in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_2760,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2764,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_2764(t6,C_u_i_car(t5));}
else{
t5=t4;
f_2764(t5,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2842,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));}}

/* k3211 in pointer-vector-fill! in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3213(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3213,2,av);}
a=C_alloc(6);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=t2;
t4=C_slot(((C_word*)t0)[2],C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3224,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=(
  f_3224(t6,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* f_2842 in object-release in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2842(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2842,3,av);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub673(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=stub673(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* locative-set! in k1150 in k1147 */
static void C_ccall f_2086(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2086,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_locative_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2854 in object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2856(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2856,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2861,a[2]=t4,a[3]=t2,a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2861(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2852(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2852,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2856,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:562: make-hash-table */
t4=*((C_word*)lf[93]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[94]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* evict in k2854 in object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2861(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2861,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2874,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:565: hash-table-ref/default */
t4=*((C_word*)lf[92]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2945(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2945,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2950,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2950(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3113 in make-pointer-vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3115(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3115,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record3(&a,3,lf[117],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* lolevel.scm:631: ##sys#check-pointer */
t5=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[116];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3127(2,av2);}}}}

/* k2872 in evict in k2854 in object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2874(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2874,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2931,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
/* lolevel.scm:569: align-to-word */
t6=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_bytes(t3);
t7=C_bytes(C_fix(1));
t8=t4;
f_2880(t8,C_fixnum_plus(t6,t7));}}}

/* extended-procedure? in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2197(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2197,3,av);}
a=C_alloc(6);
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2231,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2214,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:383: ##sys#lambda-decoration */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
tp(4,av2);}}
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

/* copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2950(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_2950,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_blockp(t2))){
if(C_truep(C_permanentp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2966,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:583: hash-table-ref/default */
t4=*((C_word*)lf[92]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* make-weak-locative in k1150 in k1147 */
static void C_ccall f_2070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_2070,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm:295: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[40];
tp(6,av2);}}
else{
t4=C_i_car(t3);
/* lolevel.scm:295: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[40];
tp(6,av2);}}}

/* k3010 in k3007 in k2964 in copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3012(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3012,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(C_specialp(((C_word*)t0)[4]))?C_fix(1):C_fix(0));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3021,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word)li72),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_3021(t7,t2,t3);}

/* k3013 in k3010 in k3007 in k2964 in copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3015,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2964 in copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2966(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2966,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* lolevel.scm:586: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[110]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[110]+1);
av2[1]=t2;
av2[2]=t3;
tp(3,av2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* lolevel.scm:591: ##sys#intern-symbol */{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
C_string_to_symbol(3,av2);}}
else{
t2=C_block_size(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3009,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:596: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}}}}

/* extend-procedure in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2162(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2162,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2166,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:376: ##sys#check-closure */
t5=*((C_word*)lf[65]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[63];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2164 in extend-procedure in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2166,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2171,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2187,a[2]=((C_word*)t0)[2],a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:377: ##sys#decorate-lambda */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[64]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* k3007 in k2964 in copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3009,2,av);}
a=C_alloc(7);
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3012,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:597: hash-table-set! */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a3308 in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3309(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3309,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[117],lf[123]);
t5=C_i_check_exact_2(t3,lf[123]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3319,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
/* lolevel.scm:680: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[85]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t6;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=t7;
tp(5,av2);}}

/* pointer-vector-length in k3296 in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3300(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3300,3,av);}
t3=C_i_check_structure_2(t2,lf[117],lf[124]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2977 in k2964 in copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2979,2,av);}
a=C_alloc(4);
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:587: hash-table-set! */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a2170 in k2164 in extend-procedure in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2171(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2171,3,av);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_eqp(lf[62],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3317 in a3308 in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3319(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3319,2,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=stub817(t5,t2,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* evict in k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2493(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_2493,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2503,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:489: hash-table-ref/default */
t4=*((C_word*)lf[92]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2364 in record-instance? in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2366(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_2366,2,t0,t1);}
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

/* a2186 in k2164 in extend-procedure in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2187(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2187,4,av);}
a=C_alloc(3);
t4=C_a_i_cons(&a,2,lf[62],((C_word*)t0)[2]);
t5=C_i_setslot(t2,t3,t4);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* pointer-s16-set! in k2089 in k1150 in k1147 */
static void C_ccall f_2111(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2111,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_pointer_s16_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* pointer-u32-set! in k2089 in k1150 in k1147 */
static void C_ccall f_2114(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2114,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_pointer_u32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* pointer-s32-set! in k2089 in k1150 in k1147 */
static void C_ccall f_2117(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2117,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_u_i_pointer_s32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* record-instance-type in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2387,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2391,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:447: ##sys#check-generic-structure */
f_1218(t3,t2,C_a_i_list(&a,1,lf[82]));}

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
else C_toplevel_entry(C_text("lolevel_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_lolevel_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(874))){
C_save(t1);
C_rereclaim2(874*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,141);
lf[1]=C_h_intern(&lf[1],14,"\003syserror-hook");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],11,"\000type-error");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000#bad argument type - not a structure");
lf[6]=C_h_intern(&lf[6],17,"\003syscheck-pointer");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a pointer");
lf[8]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004mmap\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\010"
"s8vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000\011f64ve"
"ctor\376\377\016");
lf[9]=C_h_intern(&lf[9],12,"move-memory!");
lf[10]=C_h_intern(&lf[10],9,"\003syserror");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\034need number of bytes to move");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000!number of bytes to move too large");
lf[13]=C_h_intern(&lf[13],15,"\003sysbytevector\077");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\033negative destination offset");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\026negative source offset");
lf[16]=C_h_intern(&lf[16],11,"object-copy");
lf[17]=C_h_intern(&lf[17],15,"\003sysmake-vector");
lf[18]=C_h_intern(&lf[18],8,"allocate");
lf[19]=C_h_intern(&lf[19],4,"free");
lf[20]=C_h_intern(&lf[20],8,"pointer\077");
lf[21]=C_h_intern(&lf[21],13,"pointer-like\077");
lf[22]=C_h_intern(&lf[22],16,"address->pointer");
lf[23]=C_h_intern(&lf[23],20,"\003sysaddress->pointer");
lf[24]=C_h_intern(&lf[24],17,"\003syscheck-integer");
lf[25]=C_h_intern(&lf[25],16,"pointer->address");
lf[26]=C_h_intern(&lf[26],20,"\003syspointer->address");
lf[27]=C_h_intern(&lf[27],17,"\003syscheck-special");
lf[28]=C_h_intern(&lf[28],15,"object->pointer");
lf[29]=C_h_intern(&lf[29],15,"pointer->object");
lf[30]=C_h_intern(&lf[30],9,"pointer=\077");
lf[31]=C_h_intern(&lf[31],8,"pointer+");
lf[32]=C_h_intern(&lf[32],13,"align-to-word");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a pointer or integer");
lf[34]=C_h_intern(&lf[34],11,"tag-pointer");
lf[35]=C_h_intern(&lf[35],23,"\003sysmake-tagged-pointer");
lf[36]=C_h_intern(&lf[36],15,"tagged-pointer\077");
lf[37]=C_h_intern(&lf[37],11,"pointer-tag");
lf[38]=C_h_intern(&lf[38],13,"make-locative");
lf[39]=C_h_intern(&lf[39],17,"\003sysmake-locative");
lf[40]=C_h_intern(&lf[40],18,"make-weak-locative");
lf[41]=C_h_intern(&lf[41],13,"locative-set!");
lf[42]=C_h_intern(&lf[42],12,"locative-ref");
lf[43]=C_h_intern(&lf[43],16,"locative->object");
lf[44]=C_h_intern(&lf[44],9,"locative\077");
lf[45]=C_h_intern(&lf[45],15,"pointer-u8-set!");
lf[46]=C_h_intern(&lf[46],15,"pointer-s8-set!");
lf[47]=C_h_intern(&lf[47],16,"pointer-u16-set!");
lf[48]=C_h_intern(&lf[48],16,"pointer-s16-set!");
lf[49]=C_h_intern(&lf[49],16,"pointer-u32-set!");
lf[50]=C_h_intern(&lf[50],16,"pointer-s32-set!");
lf[51]=C_h_intern(&lf[51],16,"pointer-f32-set!");
lf[52]=C_h_intern(&lf[52],16,"pointer-f64-set!");
lf[53]=C_h_intern(&lf[53],14,"pointer-u8-ref");
lf[54]=C_h_intern(&lf[54],14,"pointer-s8-ref");
lf[55]=C_h_intern(&lf[55],15,"pointer-u16-ref");
lf[56]=C_h_intern(&lf[56],15,"pointer-s16-ref");
lf[57]=C_h_intern(&lf[57],15,"pointer-u32-ref");
lf[58]=C_h_intern(&lf[58],15,"pointer-s32-ref");
lf[59]=C_h_intern(&lf[59],15,"pointer-f32-ref");
lf[60]=C_h_intern(&lf[60],15,"pointer-f64-ref");
lf[61]=C_h_intern(&lf[61],8,"extended");
lf[63]=C_h_intern(&lf[63],16,"extend-procedure");
lf[64]=C_h_intern(&lf[64],19,"\003sysdecorate-lambda");
lf[65]=C_h_intern(&lf[65],17,"\003syscheck-closure");
lf[66]=C_h_intern(&lf[66],19,"extended-procedure\077");
lf[67]=C_h_intern(&lf[67],21,"\003syslambda-decoration");
lf[68]=C_h_intern(&lf[68],14,"procedure-data");
lf[69]=C_h_intern(&lf[69],19,"set-procedure-data!");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000-bad argument type - not an extended procedure");
lf[71]=C_h_intern(&lf[71],12,"vector-like\077");
lf[72]=C_h_intern(&lf[72],10,"block-set!");
lf[73]=C_h_intern(&lf[73],14,"\003sysblock-set!");
lf[74]=C_h_intern(&lf[74],9,"block-ref");
lf[75]=C_h_intern(&lf[75],15,"number-of-slots");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a vector-like object");
lf[77]=C_h_intern(&lf[77],15,"number-of-bytes");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\0002cannot compute number of bytes of immediate object");
lf[79]=C_h_intern(&lf[79],20,"make-record-instance");
lf[80]=C_h_intern(&lf[80],18,"\003sysmake-structure");
lf[81]=C_h_intern(&lf[81],16,"record-instance\077");
lf[82]=C_h_intern(&lf[82],20,"record-instance-type");
lf[83]=C_h_intern(&lf[83],22,"record-instance-length");
lf[84]=C_h_intern(&lf[84],25,"record-instance-slot-set!");
lf[85]=C_h_intern(&lf[85],15,"\003syscheck-range");
lf[86]=C_h_intern(&lf[86],20,"record-instance-slot");
lf[87]=C_h_intern(&lf[87],14,"record->vector");
lf[88]=C_h_intern(&lf[88],15,"object-evicted\077");
lf[89]=C_h_intern(&lf[89],12,"object-evict");
lf[90]=C_h_intern(&lf[90],15,"hash-table-set!");
lf[91]=C_h_intern(&lf[91],19,"\003sysundefined-value");
lf[92]=C_h_intern(&lf[92],22,"hash-table-ref/default");
lf[93]=C_h_intern(&lf[93],15,"make-hash-table");
lf[94]=C_h_intern(&lf[94],3,"eq\077");
lf[95]=C_h_intern(&lf[95],24,"object-evict-to-location");
lf[96]=C_h_intern(&lf[96],24,"\003sysset-pointer-address!");
lf[97]=C_h_intern(&lf[97],6,"signal");
lf[98]=C_h_intern(&lf[98],24,"make-composite-condition");
lf[99]=C_h_intern(&lf[99],23,"make-property-condition");
lf[100]=C_h_intern(&lf[100],5,"evict");
lf[101]=C_h_intern(&lf[101],5,"limit");
lf[102]=C_h_intern(&lf[102],3,"exn");
lf[103]=C_h_intern(&lf[103],8,"location");
lf[104]=C_h_intern(&lf[104],7,"message");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000$cannot evict object - limit exceeded");
lf[106]=C_h_intern(&lf[106],9,"arguments");
lf[107]=C_h_intern(&lf[107],14,"object-release");
lf[108]=C_h_intern(&lf[108],11,"object-size");
lf[109]=C_h_intern(&lf[109],14,"object-unevict");
lf[110]=C_h_intern(&lf[110],15,"\003sysmake-string");
lf[111]=C_h_intern(&lf[111],14,"object-become!");
lf[112]=C_h_intern(&lf[112],11,"\003sysbecome!");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000:bad argument type - not an a-list of non-immediate objects");
lf[114]=C_h_intern(&lf[114],17,"mutate-procedure!");
lf[115]=C_h_intern(&lf[115],5,"unset");
lf[116]=C_h_intern(&lf[116],19,"make-pointer-vector");
lf[117]=C_h_intern(&lf[117],14,"pointer-vector");
lf[119]=C_h_intern(&lf[119],13,"\003sysmake-blob");
lf[120]=C_h_intern(&lf[120],15,"pointer-vector\077");
lf[121]=C_h_intern(&lf[121],20,"pointer-vector-fill!");
lf[122]=C_h_intern(&lf[122],19,"pointer-vector-set!");
lf[123]=C_h_intern(&lf[123],18,"pointer-vector-ref");
lf[124]=C_h_intern(&lf[124],21,"pointer-vector-length");
lf[125]=C_h_intern(&lf[125],18,"getter-with-setter");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\031(pointer-vector-ref pv i)");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\032(record-instance-slot x i)");
lf[128]=C_h_intern(&lf[128],13,"\003sysblock-ref");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\017(block-ref x i)");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-f64-ref p)");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-f32-ref p)");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-s32-ref p)");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-u32-ref p)");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-s16-ref p)");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\023(pointer-u16-ref p)");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\022(pointer-s8-ref p)");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\022(pointer-u8-ref p)");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\022(locative-ref loc)");
lf[139]=C_h_intern(&lf[139],17,"register-feature!");
lf[140]=C_h_intern(&lf[140],7,"lolevel");
C_register_lf2(lf,141,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1149,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d69_toplevel(2,av2);}}

/* k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2485,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2488,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:486: ##sys#check-closure */
t4=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[89];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2486 in k2483 in k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2488(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2488,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2493,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2493(t5,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2480 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2482(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2482,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2485,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:485: make-hash-table */
t4=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[94]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* f_2589 in object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2589(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2589,3,av);}
a=C_alloc(5);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=stub599(t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* record-instance-length in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2396,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2400,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:451: ##sys#check-generic-structure */
f_1218(t3,t2,C_a_i_list(&a,1,lf[83]));}

/* k2389 in record-instance-type in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2391,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop585 in k2445 in k2439 in record->vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static C_word C_fcall f_2452(C_word t0,C_word t1){
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

/* align-to-word in k1150 in k1147 */
static void C_ccall f_1941(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1941,3,av);}
a=C_alloc(6);
if(C_truep(C_i_integerp(t2))){
t3=t1;
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(4));
t6=C_i_foreign_integer_argumentp(t4);
t7=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=stub374(t5,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1962,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_1962(t6,t5);}
else{
t5=t3;
f_1962(t5,C_SCHEME_FALSE);}}}

/* k3169 in pointer-vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3171(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_3171,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_slot(t2,C_fix(2));
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3179,a[2]=t2,a[3]=t4,a[4]=t6,a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3179(t8,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop794 in k3169 in pointer-vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_3179(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3179,4,t0,t1,t2,t3);}
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3192,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:648: ##sys#check-pointer */
t7=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[117];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* object-evicted? in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2475,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_permanentp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* allocate in k1150 in k1147 */
static void C_ccall f_1841(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1841,3,av);}
a=C_alloc(5);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=stub315(t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* object-evict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_2478,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2482,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_2482(t6,C_u_i_car(t5));}
else{
t5=t4;
f_2482(t5,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2589,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));}}

/* free in k1150 in k1147 */
static void C_ccall f_1848(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1848,3,av);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub321(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=stub321(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2679 in doloop652 in k2656 in k2646 in k2643 in k2640 in k2637 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in ... */
static void C_ccall f_2681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2681,2,av);}
t2=C_i_set_i_slot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2660(t4,((C_word*)t0)[5],t3);}

/* pointer-vector? in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3160,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[117]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* tagged-pointer? in k1150 in k1147 */
static void C_ccall f_1999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_1999,c,av);}
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_slot(t2,C_fix(1));
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_i_equalp(t5,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* pointer-vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_3166,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=t2;
t4=C_u_i_length(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3171,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:642: make-pointer-vector */
t6=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k1829 in doloop306 in k1793 in copy in object-copy in k1150 in k1147 */
static void C_ccall f_1831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1831,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_1810(t4,((C_word*)t0)[5],t3);}

/* k1991 in k1980 in tag-pointer in k1150 in k1147 */
static void C_fcall f_1993(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1993,2,t0,t1);}
if(C_truep(t1)){
t2=C_copy_pointer(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:257: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[1]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=lf[34];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k3190 in doloop794 in k3169 in pointer-vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3192(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3192,2,av);}
t2=(
  /* lolevel.scm:649: pv-buf-set! */
  f_3253(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4])
);
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
t5=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[6])[1];
f_3179(t6,((C_word*)t0)[7],t4,t5);}

/* object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_2596,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2600,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:504: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[95];
tp(4,av2);}}

/* k1980 in tag-pointer in k1150 in k1147 */
static void C_ccall f_1982(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1982,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1985,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1993,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[3];
if(C_truep(C_blockp(t5))){
t6=C_specialp(t5);
t7=t4;
f_1993(t7,t6);}
else{
t6=t4;
f_1993(t6,C_SCHEME_FALSE);}}

/* k1983 in k1980 in tag-pointer in k1150 in k1147 */
static void C_ccall f_1985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1985,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* object-copy in k1150 in k1147 */
static void C_ccall f_1759(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1759,3,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1765,a[2]=t4,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1765(t6,t1,t2);}

/* tag-pointer in k1150 in k1147 */
static void C_ccall f_1978(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1978,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1982,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:254: ##sys#make-tagged-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k1888 in pointer->address in k1150 in k1147 */
static void C_ccall f_1890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1890,2,av);}
/* lolevel.scm:219: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k2697 in k2640 in k2637 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in ... */
static void C_ccall f_2699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2699,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* lolevel.scm:532: ##sys#set-pointer-address! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[96]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[96]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
tp(4,av2);}}

/* object->pointer in k1150 in k1147 */
static void C_ccall f_1895(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1895,3,av);}
a=C_alloc(5);
if(C_truep(C_blockp(t2))){
t3=t1;
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=stub349(t5,t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1971 in k1960 in align-to-word in k1150 in k1147 */
static void C_ccall f_1973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1973,2,av);}
a=C_alloc(6);
t2=C_a_i_bytevector(&a,1,C_fix(4));
t3=C_i_foreign_integer_argumentp(t1);
t4=stub374(t2,t3);
/* lolevel.scm:244: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t4;
tp(3,av2);}}

/* k1879 in address->pointer in k1150 in k1147 */
static void C_ccall f_1881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1881,2,av);}
/* lolevel.scm:215: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* pointer->address in k1150 in k1147 */
static void C_ccall f_1886(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1886,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1890,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:218: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[25];
tp(4,av2);}}

/* k2640 in k2637 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in ... */
static void C_fcall f_2642(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_2642,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2699,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:532: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}

/* k2637 in k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 in ... */
static void C_ccall f_2639(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2639,2,av);}
a=C_alloc(10);
t2=C_evict_block(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t4=*((C_word*)lf[91]+1);
t5=t3;
f_2642(t5,C_i_set_i_slot(t2,C_fix(0),*((C_word*)lf[91]+1)));}
else{
t4=t3;
f_2642(t4,C_SCHEME_UNDEFINED);}}

/* k2634 in k2625 in evict in k2607 in k2604 in k2601 in k2598 in object-evict-to-location in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2636(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,8)))){
C_save_and_reclaim_args((void *)trf_2636,2,t0,t1);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[8])[1])){
t4=C_fixnum_difference(((C_word*)((C_word*)t0)[8])[1],t2);
t5=C_set_block_item(((C_word*)t0)[8],0,t4);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[8])[1],C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2726,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2730,a[2]=t6,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t8=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[8])[1]);
/* lolevel.scm:525: make-property-condition */
t9=*((C_word*)lf[99]+1);{
C_word av2[9];
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[102];
av2[3]=lf[103];
av2[4]=lf[95];
av2[5]=lf[104];
av2[6]=lf[105];
av2[7]=lf[106];
av2[8]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(9,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t3;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
f_2639(2,av2);}}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2639(2,av2);}}}

/* address->pointer in k1150 in k1147 */
static void C_ccall f_1877(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1877,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1881,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:214: ##sys#check-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[22];
tp(4,av2);}}

/* k1793 in copy in object-copy in k1150 in k1147 */
static void C_ccall f_1795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_1795,2,av);}
a=C_alloc(13);
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_byteblockp(((C_word*)t0)[2]);
t5=(C_truep(t4)?t4:C_i_symbolp(((C_word*)t0)[2]));
if(C_truep(t5)){
t6=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(C_truep(C_specialp(((C_word*)t0)[2]))?C_fix(1):C_fix(0));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1810,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1810(t10,t3,t6);}}

/* k1638 in k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_1640,2,av);}
a=C_alloc(11);
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=C_block_size(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1662,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t4,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t6=((C_word*)t0)[4];
t7=C_i_safe_pointerp(t6);
if(C_truep(t7)){
t8=t5;
f_1662(t8,t7);}
else{
t8=C_locativep(t6);
t9=t5;
f_1662(t9,t8);}}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:128: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[9];
av2[4]=t4;
tp(5,av2);}}}

/* k2229 in extended-procedure? in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2231,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* procedure-data in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2233(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2233,3,av);}
a=C_alloc(6);
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2264,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2247,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:383: ##sys#lambda-decoration */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
tp(4,av2);}}
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

/* move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_fcall f_1506(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_1506,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_structurep(t2))){
t4=C_slot(t2,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[2]))){
t5=C_slot(t2,C_fix(1));
/* lolevel.scm:161: move */
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
/* lolevel.scm:128: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t5;
av2[2]=t7;
av2[3]=lf[9];
av2[4]=t6;
tp(5,av2);}}}
else{
if(C_truep(C_structurep(t3))){
t4=C_slot(t3,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[2]))){
t5=C_slot(t3,C_fix(1));
/* lolevel.scm:165: move */
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
/* lolevel.scm:128: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t5;
av2[2]=t7;
av2[3]=lf[9];
av2[4]=t6;
tp(5,av2);}}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1575,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t5=t2;
t6=C_i_safe_pointerp(t5);
if(C_truep(t6)){
t7=t4;
f_1575(t7,t6);}
else{
t7=C_locativep(t5);
t8=t4;
f_1575(t8,t7);}}}}

/* k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1501(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1501,2,av);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li7),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_1506(t5,((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11]);}

/* copy in object-copy in k1150 in k1147 */
static void C_fcall f_1765(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1765,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_blockp(t2))){
if(C_truep(C_i_symbolp(t2))){
t3=C_slot(t2,C_fix(1));
/* lolevel.scm:192: ##sys#intern-symbol */{
C_word av2[3];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
C_string_to_symbol(3,av2);}}
else{
t3=C_block_size(t2);
t4=t3;
t5=(C_truep(C_byteblockp(t2))?C_words(t4):t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1795,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:196: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t6;
av2[2]=t5;
tp(3,av2);}}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* nosizerr in move-memory! in k1150 in k1147 */
static void C_fcall f_1437(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1437,2,t0,t1);}
/* lolevel.scm:137: ##sys#error */
t2=*((C_word*)lf[10]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[9];
av2[3]=lf[11];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a2246 in procedure-data in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2247(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2247,3,av);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_eqp(lf[62],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2796 in release in k2762 in object-release in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2798,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:558: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t2;
av2[2]=C_block_address(&a,1,((C_word*)t0)[4]);
tp(3,av2);}}

/* move-memory! in k1150 in k1147 */
static void C_ccall f_1416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +41,c,7)))){
C_save_and_reclaim((void*)f_1416,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+41);
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
t28=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1437,a[2]=t2,a[3]=t3,a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t29=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1443,a[2]=t2,a[3]=t3,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t30=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1449,a[2]=t23,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t31=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1465,a[2]=t23,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t32=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1492,a[2]=((C_word*)t0)[2],a[3]=t17,a[4]=t12,a[5]=t7,a[6]=t21,a[7]=t25,a[8]=t27,a[9]=t1,a[10]=t2,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:152: ##sys#check-block */
f_1154(t32,t2,C_a_i_list(&a,1,lf[9]));}

/* f3719 in release in k2762 in object-release in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f3719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f3719,2,av);}
/* lolevel.scm:557: free */
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

/* k1677 in k1660 in k1638 in k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1679(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1679,2,av);}
a=C_alloc(7);
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(C_truep(((C_word*)t0)[7])?((C_word*)t0)[7]:((C_word*)t0)[8]);
t5=C_block_size(((C_word*)t0)[2]);
/* lolevel.scm:179: checkn2 */
t6=((C_word*)((C_word*)t0)[9])[1];
f_1465(t6,t3,t4,((C_word*)t0)[8],t5,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:128: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[9];
av2[4]=t4;
tp(5,av2);}}}

/* k1660 in k1638 in k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_fcall f_1662(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_1662,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1669,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
/* lolevel.scm:177: checkn1 */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1449(t3,t2,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[6]);}
else{
/* lolevel.scm:177: checkn1 */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1449(t3,t2,((C_word*)t0)[9],((C_word*)t0)[9],((C_word*)t0)[6]);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1679,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:178: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* k1667 in k1660 in k1638 in k1573 in move in k1499 in k1496 in k1493 in k1490 in move-memory! in k1150 in k1147 */
static void C_ccall f_1669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_1669,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t10=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=stub141(C_SCHEME_UNDEFINED,t5,t6,t7,t8,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k2884 in k2881 in k2878 in k2872 in evict in k2854 in object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2886,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2881 in k2878 in k2872 in evict in k2854 in object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2883(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2883,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2893,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2893(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2893(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2878 in k2872 in evict in k2854 in object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2880(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_2880,2,t0,t1);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2883,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:571: hash-table-set! */
t5=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[3];
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1960 in align-to-word in k1150 in k1147 */
static void C_fcall f_1962(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_1962,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1973,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:244: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
/* lolevel.scm:246: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[4];
av2[3]=lf[32];
av2[4]=lf[33];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* a3370 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3371,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_u_i_pointer_u16_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3376 in k2089 in k1150 in k1147 */
static void C_ccall f_3377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3377,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_u_i_pointer_u8_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3373 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_3374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3374,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_u_i_pointer_s8_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2213 in extended-procedure? in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2214(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2214,3,av);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_eqp(lf[62],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* doloop704 in k2891 in k2881 in k2878 in k2872 in evict in k2854 in object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2895(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2895,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2917,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* lolevel.scm:575: evict */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2861(t5,t3,t4);}}

/* k2891 in k2881 in k2878 in k2872 in evict in k2854 in object-size in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_fcall f_2893(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_2893,2,t0,t1);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li69),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2895(t5,((C_word*)t0)[6],t1);}

/* a3379 in k1150 in k1147 */
static void C_ccall f_3380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_3380,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_locative_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* pointer-like? in k1150 in k1147 */
static void C_ccall f_1866(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1866,3,av);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1796 in k1793 in copy in object-copy in k1150 in k1147 */
static void C_ccall f_1798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1798,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2980 in k2977 in k2964 in copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2982,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* pointer? in k1150 in k1147 */
static void C_ccall f_1858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1858,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_safe_pointerp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2996 in k2993 in k2964 in copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2998,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2993 in k2964 in copy in k2943 in object-unevict in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2995,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2998,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:592: hash-table-set! */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* make-record-instance in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_2342,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=C_i_check_symbol_2(t2,lf[79]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[80]+1);
av2[3]=t2;
av2[4]=t3;
C_apply(5,av2);}}

/* k2445 in k2439 in record->vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2447,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  f_2452(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2439 in record->vector in k2433 in k2306 in k2154 in k2150 in k2146 in k2142 in k2138 in k2134 in k2130 in k2126 in k2089 in k1150 in k1147 */
static void C_ccall f_2441(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2441,2,av);}
a=C_alloc(5);
t2=C_block_size(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2447,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:471: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[231] = {
{"f_2351:lolevel_2escm",(void*)f_2351},
{"f_1689:lolevel_2escm",(void*)f_1689},
{"f_3224:lolevel_2escm",(void*)f_3224},
{"f_2437:lolevel_2escm",(void*)f_2437},
{"f_2435:lolevel_2escm",(void*)f_2435},
{"f_3253:lolevel_2escm",(void*)f_3253},
{"f_2534:lolevel_2escm",(void*)f_2534},
{"f_2532:lolevel_2escm",(void*)f_2532},
{"f_2651:lolevel_2escm",(void*)f_2651},
{"f_3206:lolevel_2escm",(void*)f_3206},
{"f_1201:lolevel_2escm",(void*)f_1201},
{"f_1204:lolevel_2escm",(void*)f_1204},
{"f_2648:lolevel_2escm",(void*)f_2648},
{"f_1149:lolevel_2escm",(void*)f_1149},
{"f_1921:lolevel_2escm",(void*)f_1921},
{"f_2645:lolevel_2escm",(void*)f_2645},
{"f_2627:lolevel_2escm",(void*)f_2627},
{"f_2734:lolevel_2escm",(void*)f_2734},
{"f_2660:lolevel_2escm",(void*)f_2660},
{"f_2730:lolevel_2escm",(void*)f_2730},
{"f_2555:lolevel_2escm",(void*)f_2555},
{"f_1912:lolevel_2escm",(void*)f_1912},
{"f_1919:lolevel_2escm",(void*)f_1919},
{"f_1916:lolevel_2escm",(void*)f_1916},
{"f_2658:lolevel_2escm",(void*)f_2658},
{"f_1910:lolevel_2escm",(void*)f_1910},
{"f_2726:lolevel_2escm",(void*)f_2726},
{"f_2617:lolevel_2escm",(void*)f_2617},
{"f_2824:lolevel_2escm",(void*)f_2824},
{"f_2612:lolevel_2escm",(void*)f_2612},
{"f_1906:lolevel_2escm",(void*)f_1906},
{"f_3056:lolevel_2escm",(void*)f_3056},
{"f_2606:lolevel_2escm",(void*)f_2606},
{"f_2609:lolevel_2escm",(void*)f_2609},
{"f_2814:lolevel_2escm",(void*)f_2814},
{"f_2600:lolevel_2escm",(void*)f_2600},
{"f_2603:lolevel_2escm",(void*)f_2603},
{"f_1218:lolevel_2escm",(void*)f_1218},
{"f_1810:lolevel_2escm",(void*)f_1810},
{"f_2805:lolevel_2escm",(void*)f_2805},
{"f_3042:lolevel_2escm",(void*)f_3042},
{"f_1262:lolevel_2escm",(void*)f_1262},
{"f_2938:lolevel_2escm",(void*)f_2938},
{"f_2931:lolevel_2escm",(void*)f_2931},
{"f_1598:lolevel_2escm",(void*)f_1598},
{"f_1230:lolevel_2escm",(void*)f_1230},
{"f_3021:lolevel_2escm",(void*)f_3021},
{"f_2152:lolevel_2escm",(void*)f_2152},
{"f_1591:lolevel_2escm",(void*)f_1591},
{"f_2156:lolevel_2escm",(void*)f_2156},
{"f_2123:lolevel_2escm",(void*)f_2123},
{"f_2120:lolevel_2escm",(void*)f_2120},
{"f_1275:lolevel_2escm",(void*)f_1275},
{"f_2128:lolevel_2escm",(void*)f_2128},
{"f_1472:lolevel_2escm",(void*)f_1472},
{"f_2132:lolevel_2escm",(void*)f_2132},
{"f_1575:lolevel_2escm",(void*)f_1575},
{"f_1621:lolevel_2escm",(void*)f_1621},
{"f_2136:lolevel_2escm",(void*)f_2136},
{"f_2272:lolevel_2escm",(void*)f_2272},
{"f_2276:lolevel_2escm",(void*)f_2276},
{"f_1465:lolevel_2escm",(void*)f_1465},
{"f_2054:lolevel_2escm",(void*)f_2054},
{"f_2105:lolevel_2escm",(void*)f_2105},
{"f_2102:lolevel_2escm",(void*)f_2102},
{"f_2108:lolevel_2escm",(void*)f_2108},
{"f_2287:lolevel_2escm",(void*)f_2287},
{"f_2917:lolevel_2escm",(void*)f_2917},
{"f_2042:lolevel_2escm",(void*)f_2042},
{"f_2144:lolevel_2escm",(void*)f_2144},
{"f_2140:lolevel_2escm",(void*)f_2140},
{"f_2148:lolevel_2escm",(void*)f_2148},
{"f_1495:lolevel_2escm",(void*)f_1495},
{"f_1492:lolevel_2escm",(void*)f_1492},
{"f_1498:lolevel_2escm",(void*)f_1498},
{"f_2030:lolevel_2escm",(void*)f_2030},
{"f_2416:lolevel_2escm",(void*)f_2416},
{"f_2264:lolevel_2escm",(void*)f_2264},
{"f_3267:lolevel_2escm",(void*)f_3267},
{"f_2413:lolevel_2escm",(void*)f_2413},
{"f_3298:lolevel_2escm",(void*)f_3298},
{"f_1617:lolevel_2escm",(void*)f_1617},
{"f_2319:lolevel_2escm",(void*)f_2319},
{"f_2310:lolevel_2escm",(void*)f_2310},
{"f_2314:lolevel_2escm",(void*)f_2314},
{"f_1607:lolevel_2escm",(void*)f_1607},
{"f_2308:lolevel_2escm",(void*)f_2308},
{"f_1443:lolevel_2escm",(void*)f_1443},
{"f_1449:lolevel_2escm",(void*)f_1449},
{"f_2503:lolevel_2escm",(void*)f_2503},
{"f_3277:lolevel_2escm",(void*)f_3277},
{"f_3336:lolevel_2escm",(void*)f_3336},
{"f_3332:lolevel_2escm",(void*)f_3332},
{"f_3339:lolevel_2escm",(void*)f_3339},
{"f_1181:lolevel_2escm",(void*)f_1181},
{"f_2409:lolevel_2escm",(void*)f_2409},
{"f_3094:lolevel_2escm",(void*)f_3094},
{"f_2400:lolevel_2escm",(void*)f_2400},
{"f_3099:lolevel_2escm",(void*)f_3099},
{"f_2525:lolevel_2escm",(void*)f_2525},
{"f_2522:lolevel_2escm",(void*)f_2522},
{"f_3356:lolevel_2escm",(void*)f_3356},
{"f_3132:lolevel_2escm",(void*)f_3132},
{"f_3359:lolevel_2escm",(void*)f_3359},
{"f_2519:lolevel_2escm",(void*)f_2519},
{"f_2516:lolevel_2escm",(void*)f_2516},
{"f_3082:lolevel_2escm",(void*)f_3082},
{"f_3280:lolevel_2escm",(void*)f_3280},
{"f_2512:lolevel_2escm",(void*)f_2512},
{"f_3365:lolevel_2escm",(void*)f_3365},
{"f_3362:lolevel_2escm",(void*)f_3362},
{"f_3127:lolevel_2escm",(void*)f_3127},
{"f_3368:lolevel_2escm",(void*)f_3368},
{"f_2091:lolevel_2escm",(void*)f_2091},
{"f_2093:lolevel_2escm",(void*)f_2093},
{"f_2742:lolevel_2escm",(void*)f_2742},
{"f_2096:lolevel_2escm",(void*)f_2096},
{"f_3072:lolevel_2escm",(void*)f_3072},
{"f_3079:lolevel_2escm",(void*)f_3079},
{"f_1154:lolevel_2escm",(void*)f_1154},
{"f_1152:lolevel_2escm",(void*)f_1152},
{"f_2751:lolevel_2escm",(void*)f_2751},
{"f_3060:lolevel_2escm",(void*)f_3060},
{"f_3065:lolevel_2escm",(void*)f_3065},
{"f_3069:lolevel_2escm",(void*)f_3069},
{"f_2764:lolevel_2escm",(void*)f_2764},
{"f_2769:lolevel_2escm",(void*)f_2769},
{"f_2760:lolevel_2escm",(void*)f_2760},
{"f_3213:lolevel_2escm",(void*)f_3213},
{"f_2842:lolevel_2escm",(void*)f_2842},
{"f_2086:lolevel_2escm",(void*)f_2086},
{"f_2856:lolevel_2escm",(void*)f_2856},
{"f_2852:lolevel_2escm",(void*)f_2852},
{"f_2861:lolevel_2escm",(void*)f_2861},
{"f_2945:lolevel_2escm",(void*)f_2945},
{"f_3115:lolevel_2escm",(void*)f_3115},
{"f_2874:lolevel_2escm",(void*)f_2874},
{"f_2197:lolevel_2escm",(void*)f_2197},
{"f_2950:lolevel_2escm",(void*)f_2950},
{"f_2070:lolevel_2escm",(void*)f_2070},
{"f_3012:lolevel_2escm",(void*)f_3012},
{"f_3015:lolevel_2escm",(void*)f_3015},
{"f_2966:lolevel_2escm",(void*)f_2966},
{"f_2162:lolevel_2escm",(void*)f_2162},
{"f_2166:lolevel_2escm",(void*)f_2166},
{"f_3009:lolevel_2escm",(void*)f_3009},
{"f_3309:lolevel_2escm",(void*)f_3309},
{"f_3300:lolevel_2escm",(void*)f_3300},
{"f_2979:lolevel_2escm",(void*)f_2979},
{"f_2171:lolevel_2escm",(void*)f_2171},
{"f_3319:lolevel_2escm",(void*)f_3319},
{"f_2493:lolevel_2escm",(void*)f_2493},
{"f_2366:lolevel_2escm",(void*)f_2366},
{"f_2187:lolevel_2escm",(void*)f_2187},
{"f_2111:lolevel_2escm",(void*)f_2111},
{"f_2114:lolevel_2escm",(void*)f_2114},
{"f_2117:lolevel_2escm",(void*)f_2117},
{"f_2387:lolevel_2escm",(void*)f_2387},
{"toplevel:lolevel_2escm",(void*)C_lolevel_toplevel},
{"f_2485:lolevel_2escm",(void*)f_2485},
{"f_2488:lolevel_2escm",(void*)f_2488},
{"f_2482:lolevel_2escm",(void*)f_2482},
{"f_2589:lolevel_2escm",(void*)f_2589},
{"f_2396:lolevel_2escm",(void*)f_2396},
{"f_2391:lolevel_2escm",(void*)f_2391},
{"f_2452:lolevel_2escm",(void*)f_2452},
{"f_1941:lolevel_2escm",(void*)f_1941},
{"f_3171:lolevel_2escm",(void*)f_3171},
{"f_3179:lolevel_2escm",(void*)f_3179},
{"f_2475:lolevel_2escm",(void*)f_2475},
{"f_1841:lolevel_2escm",(void*)f_1841},
{"f_2478:lolevel_2escm",(void*)f_2478},
{"f_1848:lolevel_2escm",(void*)f_1848},
{"f_2681:lolevel_2escm",(void*)f_2681},
{"f_3160:lolevel_2escm",(void*)f_3160},
{"f_1999:lolevel_2escm",(void*)f_1999},
{"f_3166:lolevel_2escm",(void*)f_3166},
{"f_1831:lolevel_2escm",(void*)f_1831},
{"f_1993:lolevel_2escm",(void*)f_1993},
{"f_3192:lolevel_2escm",(void*)f_3192},
{"f_2596:lolevel_2escm",(void*)f_2596},
{"f_1982:lolevel_2escm",(void*)f_1982},
{"f_1985:lolevel_2escm",(void*)f_1985},
{"f_1759:lolevel_2escm",(void*)f_1759},
{"f_1978:lolevel_2escm",(void*)f_1978},
{"f_1890:lolevel_2escm",(void*)f_1890},
{"f_2699:lolevel_2escm",(void*)f_2699},
{"f_1895:lolevel_2escm",(void*)f_1895},
{"f_1973:lolevel_2escm",(void*)f_1973},
{"f_1881:lolevel_2escm",(void*)f_1881},
{"f_1886:lolevel_2escm",(void*)f_1886},
{"f_2642:lolevel_2escm",(void*)f_2642},
{"f_2639:lolevel_2escm",(void*)f_2639},
{"f_2636:lolevel_2escm",(void*)f_2636},
{"f_1877:lolevel_2escm",(void*)f_1877},
{"f_1795:lolevel_2escm",(void*)f_1795},
{"f_1640:lolevel_2escm",(void*)f_1640},
{"f_2231:lolevel_2escm",(void*)f_2231},
{"f_2233:lolevel_2escm",(void*)f_2233},
{"f_1506:lolevel_2escm",(void*)f_1506},
{"f_1501:lolevel_2escm",(void*)f_1501},
{"f_1765:lolevel_2escm",(void*)f_1765},
{"f_1437:lolevel_2escm",(void*)f_1437},
{"f_2247:lolevel_2escm",(void*)f_2247},
{"f_2798:lolevel_2escm",(void*)f_2798},
{"f_1416:lolevel_2escm",(void*)f_1416},
{"f3719:lolevel_2escm",(void*)f3719},
{"f_1679:lolevel_2escm",(void*)f_1679},
{"f_1662:lolevel_2escm",(void*)f_1662},
{"f_1669:lolevel_2escm",(void*)f_1669},
{"f_2886:lolevel_2escm",(void*)f_2886},
{"f_2883:lolevel_2escm",(void*)f_2883},
{"f_2880:lolevel_2escm",(void*)f_2880},
{"f_1962:lolevel_2escm",(void*)f_1962},
{"f_3371:lolevel_2escm",(void*)f_3371},
{"f_3377:lolevel_2escm",(void*)f_3377},
{"f_3374:lolevel_2escm",(void*)f_3374},
{"f_2214:lolevel_2escm",(void*)f_2214},
{"f_2895:lolevel_2escm",(void*)f_2895},
{"f_2893:lolevel_2escm",(void*)f_2893},
{"f_3380:lolevel_2escm",(void*)f_3380},
{"f_1866:lolevel_2escm",(void*)f_1866},
{"f_1798:lolevel_2escm",(void*)f_1798},
{"f_2982:lolevel_2escm",(void*)f_2982},
{"f_1858:lolevel_2escm",(void*)f_1858},
{"f_2998:lolevel_2escm",(void*)f_2998},
{"f_2995:lolevel_2escm",(void*)f_2995},
{"f_2342:lolevel_2escm",(void*)f_2342},
{"f_2447:lolevel_2escm",(void*)f_2447},
{"f_2441:lolevel_2escm",(void*)f_2441},
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
o|eliminated procedure checks: 95 
o|specializations:
o|  1 (length list)
o|  3 (cdr pair)
o|  9 (car pair)
(o e)|safe calls: 272 
(o e)|assignments to immediate values: 2 
o|Removed `not' forms: 9 
o|merged explicitly consed rest parameter: loc65 
o|inlining procedure: k1156 
o|inlining procedure: k1156 
o|inlining procedure: k1164 
o|inlining procedure: k1164 
o|merged explicitly consed rest parameter: loc88 
o|inlining procedure: k1220 
o|inlining procedure: k1220 
o|inlining procedure: k1235 
o|inlining procedure: k1235 
o|contracted procedure: "(lolevel.scm:99) g8990" 
o|inlining procedure: k1225 
o|inlining procedure: k1225 
o|inlining procedure: k1277 
o|inlining procedure: k1277 
o|inlining procedure: k1290 
o|inlining procedure: k1290 
o|contracted procedure: "(lolevel.scm:113) g108109" 
o|merged explicitly consed rest parameter: args209 
o|inlining procedure: k1451 
o|inlining procedure: k1451 
o|consed rest parameter at call site: "(lolevel.scm:145) sizerr206" 1 
o|inlining procedure: k1467 
o|inlining procedure: k1467 
o|consed rest parameter at call site: "(lolevel.scm:150) sizerr206" 1 
o|inlining procedure: k1508 
o|inlining procedure: "(lolevel.scm:162) typerr118" 
o|inlining procedure: k1508 
o|inlining procedure: k1540 
o|inlining procedure: k1540 
o|inlining procedure: "(lolevel.scm:166) typerr118" 
o|inlining procedure: k1560 
o|contracted procedure: "(lolevel.scm:169) memmove1114" 
o|inlining procedure: k1602 
o|contracted procedure: "(lolevel.scm:171) memmove3116" 
o|inlining procedure: k1602 
o|inlining procedure: "(lolevel.scm:173) typerr118" 
o|contracted procedure: "(lolevel.scm:168) g239240" 
o|inlining procedure: k1586 
o|inlining procedure: k1586 
o|contracted procedure: "(lolevel.scm:58) g245246" 
o|inlining procedure: k1560 
o|inlining procedure: k1647 
o|contracted procedure: "(lolevel.scm:177) memmove2115" 
o|inlining procedure: k1671 
o|inlining procedure: k1671 
o|inlining procedure: k1647 
o|contracted procedure: "(lolevel.scm:179) memmove4117" 
o|inlining procedure: "(lolevel.scm:182) typerr118" 
o|contracted procedure: "(lolevel.scm:176) g265266" 
o|inlining procedure: k1657 
o|inlining procedure: k1657 
o|contracted procedure: "(lolevel.scm:58) g271272" 
o|inlining procedure: "(lolevel.scm:184) typerr118" 
o|contracted procedure: "(lolevel.scm:167) g226227" 
o|inlining procedure: k1570 
o|inlining procedure: k1570 
o|contracted procedure: "(lolevel.scm:58) g232233" 
o|consed rest parameter at call site: "(lolevel.scm:153) check-block" 2 
o|consed rest parameter at call site: "(lolevel.scm:152) check-block" 2 
o|contracted procedure: k1770 
o|inlining procedure: k1767 
o|inlining procedure: k1796 
o|inlining procedure: k1796 
o|inlining procedure: k1812 
o|inlining procedure: k1812 
o|inlining procedure: k1767 
o|inlining procedure: k1851 
o|inlining procedure: k1851 
o|contracted procedure: "(lolevel.scm:209) g328329" 
o|contracted procedure: "(lolevel.scm:211) g333334" 
o|inlining procedure: k1870 
o|inlining procedure: k1870 
o|inlining procedure: k1897 
o|contracted procedure: "(lolevel.scm:221) g346347" 
o|inlining procedure: k1897 
o|inlining procedure: k1943 
o|inlining procedure: k1943 
o|contracted procedure: "(lolevel.scm:243) g383384" 
o|inlining procedure: k1957 
o|inlining procedure: k1957 
o|inlining procedure: k1983 
o|inlining procedure: k1983 
o|contracted procedure: "(lolevel.scm:255) g391392" 
o|inlining procedure: k1988 
o|inlining procedure: k1988 
o|inlining procedure: k2004 
o|inlining procedure: k2013 
o|inlining procedure: k2013 
o|inlining procedure: k2004 
o|inlining procedure: k2032 
o|inlining procedure: k2032 
o|contracted procedure: "(lolevel.scm:266) g416417" 
o|inlining procedure: k2037 
o|inlining procedure: k2037 
o|inlining procedure: k2060 
o|inlining procedure: k2060 
o|inlining procedure: k2076 
o|inlining procedure: k2076 
o|inlining procedure: k2098 
o|inlining procedure: k2098 
o|inlining procedure: k2173 
o|inlining procedure: k2173 
o|inlining procedure: k2199 
o|inlining procedure: k2205 
o|inlining procedure: k2205 
o|contracted procedure: "(lolevel.scm:387) g501502" 
o|inlining procedure: k2216 
o|inlining procedure: k2216 
o|inlining procedure: k2199 
o|inlining procedure: k2235 
o|inlining procedure: k2265 
o|inlining procedure: k2265 
o|contracted procedure: "(lolevel.scm:392) g511512" 
o|inlining procedure: k2249 
o|inlining procedure: k2249 
o|inlining procedure: k2235 
o|inlining procedure: k2277 
o|inlining procedure: k2277 
o|contracted procedure: "(lolevel.scm:407) g522523" 
o|inlining procedure: k2291 
o|inlining procedure: k2298 
o|inlining procedure: k2298 
o|inlining procedure: k2291 
o|contracted procedure: "(lolevel.scm:416) check-generic-vector" 
o|inlining procedure: k1245 
o|inlining procedure: k1245 
o|inlining procedure: k1267 
o|inlining procedure: k1267 
o|contracted procedure: "(lolevel.scm:107) g9798" 
o|inlining procedure: k1250 
o|inlining procedure: k1257 
o|inlining procedure: k1257 
o|inlining procedure: k1250 
o|contracted procedure: k2324 
o|inlining procedure: k2321 
o|inlining procedure: k2321 
o|inlining procedure: k2356 
o|inlining procedure: k2356 
o|contracted procedure: "(lolevel.scm:442) g557558" 
o|inlining procedure: k2361 
o|inlining procedure: k2361 
o|consed rest parameter at call site: "(lolevel.scm:447) check-generic-structure" 2 
o|consed rest parameter at call site: "(lolevel.scm:451) check-generic-structure" 2 
o|consed rest parameter at call site: "(lolevel.scm:455) check-generic-structure" 2 
o|inlining procedure: k2454 
o|inlining procedure: k2454 
o|consed rest parameter at call site: "(lolevel.scm:469) check-generic-structure" 2 
o|contracted procedure: k2498 
o|inlining procedure: k2495 
o|inlining procedure: k2523 
o|inlining procedure: k2523 
o|inlining procedure: k2536 
o|inlining procedure: k2536 
o|inlining procedure: k2560 
o|inlining procedure: k2560 
o|inlining procedure: k2495 
o|contracted procedure: k2622 
o|inlining procedure: k2619 
o|inlining procedure: k2649 
o|inlining procedure: k2649 
o|inlining procedure: k2662 
o|inlining procedure: k2662 
o|inlining procedure: k2686 
o|inlining procedure: k2686 
o|inlining procedure: k2714 
o|inlining procedure: k2714 
o|inlining procedure: k2740 
o|inlining procedure: k2740 
o|inlining procedure: k2619 
o|contracted procedure: k2774 
o|inlining procedure: k2771 
o|contracted procedure: k2780 
o|inlining procedure: k2783 
o|inlining procedure: k2783 
o|inlining procedure: k2816 
o|inlining procedure: k2816 
o|inlining procedure: k2771 
o|inlining procedure: k2845 
o|inlining procedure: k2845 
o|contracted procedure: k2866 
o|inlining procedure: k2863 
o|inlining procedure: k2884 
o|inlining procedure: k2884 
o|inlining procedure: k2897 
o|inlining procedure: k2897 
o|inlining procedure: k2922 
o|inlining procedure: k2922 
o|inlining procedure: k2929 
o|inlining procedure: k2929 
o|inlining procedure: k2863 
o|contracted procedure: k2955 
o|inlining procedure: k2952 
o|contracted procedure: k2961 
o|inlining procedure: k2967 
o|inlining procedure: k2967 
o|inlining procedure: k2973 
o|inlining procedure: k2973 
o|inlining procedure: k2987 
o|inlining procedure: k2987 
o|inlining procedure: k3023 
o|inlining procedure: k3023 
o|inlining procedure: k2952 
o|contracted procedure: "(lolevel.scm:607) check-become-alist" 
o|inlining procedure: k1186 
o|inlining procedure: k1186 
o|consed rest parameter at call site: "(lolevel.scm:91) check-block" 2 
o|consed rest parameter at call site: "(lolevel.scm:90) check-block" 2 
o|inlining procedure: k3134 
o|inlining procedure: k3134 
o|inlining procedure: k3181 
o|inlining procedure: k3181 
o|inlining procedure: k3226 
o|inlining procedure: k3226 
o|inlining procedure: k3260 
o|inlining procedure: k3260 
o|contracted procedure: "(lolevel.scm:681) pv-buf-ref" 
o|consed rest parameter at call site: "(lolevel.scm:462) check-generic-structure" 2 
o|replaced variables: 384 
o|removed binding forms: 208 
o|substituted constant variable: r11653386 
o|substituted constant variable: r11653386 
o|substituted constant variable: r12363392 
o|substituted constant variable: r12363392 
o|substituted constant variable: r12263395 
o|substituted constant variable: r12913400 
o|substituted constant variable: r12913400 
o|substituted constant variable: r18523466 
o|substituted constant variable: r18523466 
o|substituted constant variable: r18713469 
o|substituted constant variable: r18983471 
o|substituted constant variable: r19583475 
o|substituted constant variable: r19893481 
o|substituted constant variable: r20053485 
o|substituted constant variable: r20383489 
o|substituted constant variable: r20613490 
o|substituted constant variable: r20613490 
o|substituted constant variable: r20773494 
o|substituted constant variable: r20773494 
o|substituted constant variable: r20993499 
o|substituted constant variable: r21743501 
o|substituted constant variable: r22063503 
o|substituted constant variable: r22063504 
o|substituted constant variable: r22173506 
o|substituted constant variable: r22003507 
o|substituted constant variable: r22663510 
o|substituted constant variable: r22503512 
o|substituted constant variable: r22363513 
o|substituted constant variable: r22923521 
o|substituted constant variable: r12683526 
o|substituted constant variable: r12683526 
o|substituted constant variable: r12513533 
o|substituted constant variable: r23573537 
o|substituted constant variable: r23623539 
o|substituted constant variable: r28463578 
o|substituted constant variable: r28463578 
o|substituted constant variable: r28643595 
o|substituted constant variable: loc70 
o|substituted constant variable: loc70 
o|substituted constant variable: loc70 
o|substituted constant variable: loc70 
o|substituted constant variable: loc70 
o|inlining procedure: k3116 
o|substituted constant variable: r32613616 
o|substituted constant variable: r32613616 
o|replaced variables: 63 
o|removed binding forms: 362 
o|inlining procedure: k1583 
o|inlining procedure: k1654 
o|inlining procedure: k1567 
o|inlining procedure: k2796 
o|replaced variables: 21 
o|removed binding forms: 100 
o|contracted procedure: k1282 
o|simplifications: ((let . 10)) 
o|replaced variables: 3 
o|removed binding forms: 16 
o|replaced variables: 6 
o|removed binding forms: 3 
o|removed binding forms: 3 
o|simplifications: ((if . 37) (##core#call . 226)) 
o|  call simplifications:
o|    vector
o|    ##sys#check-structure	4
o|    ##sys#structure?
o|    ##sys#fudge
o|    fx*
o|    ##sys#make-structure	2
o|    ##sys#check-list
o|    ##sys#check-pair
o|    ##sys#check-exact	4
o|    list	3
o|    +
o|    values
o|    void	2
o|    ##sys#setislot	4
o|    ##sys#check-symbol
o|    cons	3
o|    eq?	6
o|    not	6
o|    equal?
o|    integer?
o|    ##sys#foreign-integer-argument	2
o|    symbol?	8
o|    fx>=	9
o|    ##sys#setslot	5
o|    fx+	18
o|    ##sys#intern-symbol	2
o|    car	10
o|    null?	14
o|    cdr	3
o|    fx<	3
o|    ##sys#generic-structure?	2
o|    string?	3
o|    ##sys#size	18
o|    ##sys#foreign-block-argument	4
o|    ##sys#foreign-pointer-argument	8
o|    ##sys#foreign-fixnum-argument	16
o|    memq	3
o|    ##sys#slot	30
o|    fx-	7
o|    fx<=	3
o|    apply	2
o|    pair?	11
o|contracted procedure: k1167 
o|contracted procedure: k1238 
o|contracted procedure: k1293 
o|contracted procedure: k1752 
o|contracted procedure: k1418 
o|contracted procedure: k1746 
o|contracted procedure: k1421 
o|contracted procedure: k1740 
o|contracted procedure: k1424 
o|contracted procedure: k1734 
o|contracted procedure: k1427 
o|contracted procedure: k1728 
o|contracted procedure: k1430 
o|contracted procedure: k1722 
o|contracted procedure: k1433 
o|contracted procedure: k1461 
o|contracted procedure: k1454 
o|contracted procedure: k1487 
o|contracted procedure: k1476 
o|contracted procedure: k1483 
o|contracted procedure: k1511 
o|contracted procedure: k1531 
o|contracted procedure: k1517 
o|contracted procedure: k1524 
o|contracted procedure: k1537 
o|contracted procedure: k1557 
o|contracted procedure: k1543 
o|contracted procedure: k1550 
o|contracted procedure: k1301 
o|contracted procedure: k1305 
o|contracted procedure: k1309 
o|contracted procedure: k1313 
o|contracted procedure: k1317 
o|contracted procedure: k1608 
o|contracted procedure: k1357 
o|contracted procedure: k1361 
o|contracted procedure: k1365 
o|contracted procedure: k1369 
o|contracted procedure: k1373 
o|contracted procedure: k1623 
o|contracted procedure: k1641 
o|contracted procedure: k1644 
o|contracted procedure: k1329 
o|contracted procedure: k1333 
o|contracted procedure: k1337 
o|contracted procedure: k1341 
o|contracted procedure: k1345 
o|contracted procedure: k1680 
o|contracted procedure: k1385 
o|contracted procedure: k1389 
o|contracted procedure: k1393 
o|contracted procedure: k1397 
o|contracted procedure: k1401 
o|contracted procedure: k1691 
o|contracted procedure: k1695 
o|contracted procedure: k1710 
o|contracted procedure: k1716 
o|contracted procedure: k1776 
o|contracted procedure: k1783 
o|contracted procedure: k1786 
o|contracted procedure: k1789 
o|contracted procedure: k1799 
o|contracted procedure: k1806 
o|contracted procedure: k1815 
o|contracted procedure: k1818 
o|contracted procedure: k1825 
o|contracted procedure: k1833 
o|contracted procedure: k1844 
o|contracted procedure: k1851 
o|contracted procedure: k1924 
o|contracted procedure: k1928 
o|contracted procedure: k1938 
o|contracted procedure: k1946 
o|contracted procedure: k2023 
o|contracted procedure: k2001 
o|contracted procedure: k2010 
o|contracted procedure: k2020 
o|contracted procedure: k2063 
o|contracted procedure: k2060 
o|contracted procedure: k2079 
o|contracted procedure: k2076 
o|contracted procedure: k2158 
o|contracted procedure: k2176 
o|contracted procedure: k2183 
o|contracted procedure: k2193 
o|contracted procedure: k2189 
o|contracted procedure: k2219 
o|contracted procedure: k2226 
o|contracted procedure: k2252 
o|contracted procedure: k2259 
o|contracted procedure: k2280 
o|contracted procedure: k1270 
o|contracted procedure: k2337 
o|contracted procedure: k2344 
o|contracted procedure: k2380 
o|contracted procedure: k2353 
o|contracted procedure: k2367 
o|contracted procedure: k2377 
o|contracted procedure: k2405 
o|contracted procedure: k2421 
o|contracted procedure: k2429 
o|contracted procedure: k2425 
o|contracted procedure: k2442 
o|contracted procedure: k2457 
o|contracted procedure: k2471 
o|contracted procedure: k2460 
o|contracted procedure: k2467 
o|contracted procedure: k2507 
o|contracted procedure: k2539 
o|contracted procedure: k2542 
o|contracted procedure: k2549 
o|contracted procedure: k2557 
o|contracted procedure: k2560 
o|contracted procedure: k2566 
o|contracted procedure: k2573 
o|propagated global variable: r2574 ##sys#undefined-value 
o|contracted procedure: k2577 
o|contracted procedure: k2585 
o|contracted procedure: k2592 
o|contracted procedure: k2631 
o|contracted procedure: k2665 
o|contracted procedure: k2668 
o|contracted procedure: k2675 
o|contracted procedure: k2683 
o|contracted procedure: k2686 
o|contracted procedure: k2693 
o|contracted procedure: k2700 
o|contracted procedure: k2707 
o|propagated global variable: r2708 ##sys#undefined-value 
o|contracted procedure: k2711 
o|contracted procedure: k2717 
o|contracted procedure: k2736 
o|contracted procedure: k2752 
o|contracted procedure: k2756 
o|contracted procedure: k2786 
o|contracted procedure: k2789 
o|contracted procedure: k2793 
o|contracted procedure: k2810 
o|contracted procedure: k2819 
o|contracted procedure: k2829 
o|contracted procedure: k2833 
o|contracted procedure: k2838 
o|contracted procedure: k2845 
o|contracted procedure: k2875 
o|contracted procedure: k2900 
o|contracted procedure: k2904 
o|contracted procedure: k2911 
o|contracted procedure: k2919 
o|contracted procedure: k2922 
o|contracted procedure: k3049 
o|contracted procedure: k2940 
o|contracted procedure: k2984 
o|contracted procedure: k2990 
o|contracted procedure: k3000 
o|contracted procedure: k3003 
o|contracted procedure: k3017 
o|contracted procedure: k3026 
o|contracted procedure: k3029 
o|contracted procedure: k3036 
o|contracted procedure: k3044 
o|contracted procedure: k1174 
o|contracted procedure: k1183 
o|contracted procedure: k1192 
o|contracted procedure: k1196 
o|contracted procedure: k3073 
o|contracted procedure: k3088 
o|contracted procedure: k3084 
o|contracted procedure: k3096 
o|contracted procedure: k3153 
o|contracted procedure: k3101 
o|contracted procedure: k3104 
o|contracted procedure: k3107 
o|contracted procedure: k3110 
o|contracted procedure: k3122 
o|contracted procedure: k3137 
o|contracted procedure: k3147 
o|contracted procedure: k3172 
o|contracted procedure: k3184 
o|contracted procedure: k3187 
o|contracted procedure: k3202 
o|contracted procedure: k3208 
o|contracted procedure: k3214 
o|contracted procedure: k3217 
o|contracted procedure: k3229 
o|contracted procedure: k3239 
o|contracted procedure: k3256 
o|contracted procedure: k3260 
o|contracted procedure: k3269 
o|contracted procedure: k3272 
o|contracted procedure: k3285 
o|contracted procedure: k3292 
o|contracted procedure: k3302 
o|contracted procedure: k3311 
o|contracted procedure: k3314 
o|contracted procedure: k3324 
o|contracted procedure: k3249 
o|contracted procedure: k3328 
o|contracted procedure: k3344 
o|contracted procedure: k3352 
o|contracted procedure: k3348 
o|simplifications: ((let . 38)) 
o|removed binding forms: 198 
o|inlining procedure: k1619 
o|inlining procedure: "(lolevel.scm:242) align372" 
o|inlining procedure: "(lolevel.scm:244) align372" 
o|inlining procedure: k3278 
o|replaced variables: 65 
o|replaced variables: 4 
o|removed binding forms: 49 
o|inlining procedure: k1967 
o|removed binding forms: 4 
o|removed binding forms: 1 
o|direct leaf routine/allocation: doloop585586 0 
o|direct leaf routine/allocation: pv-buf-set! 0 
o|converted assignments to bindings: (doloop585586) 
o|contracted procedure: "(lolevel.scm:634) k3140" 
o|contracted procedure: "(lolevel.scm:649) k3193" 
o|contracted procedure: "(lolevel.scm:658) k3232" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|direct leaf routine/allocation: doloop779780 0 
o|direct leaf routine/allocation: doloop807808 0 
o|contracted procedure: k3116 
o|converted assignments to bindings: (doloop779780) 
o|converted assignments to bindings: (doloop807808) 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|customizable procedures: (doloop794795 loop71 copy728 doloop743744 k2878 k2891 evict696 doloop704705 k2762 release678 doloop685686 k2601 k2634 k2640 k2656 evict639 doloop652653 k2480 k2517 k2530 evict603 doloop615616 ##sys#check-generic-structure k2364 k1260 k2040 k1991 k1960 copy294 doloop306307 ##sys#check-block k1573 k1660 checkn2208 k1589 checkn1207 nosizerr205 move219 k1470 sizerr206 k1228) 
o|calls to known targets: 98 
o|identified direct recursive calls: f_1506 2 
o|identified direct recursive calls: f_2452 1 
o|identified direct recursive calls: f_3132 1 
o|identified direct recursive calls: f_3224 1 
o|fast box initializations: 19 
o|fast global references: 18 
o|fast global assignments: 4 
o|dropping unused closure argument: f_3253 
o|dropping unused closure argument: f_1218 
o|dropping unused closure argument: f_1154 
*/
/* end of file */

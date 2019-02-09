/* Generated from srfi-69.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: srfi-69.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-69.c
   unit: srfi_2d69
*/

#include "chicken.h"

#define C_rnd_fix() (C_fix(rand()))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[124];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,110,117,109,98,101,114,45,104,97,115,104,45,104,111,111,107,32,111,98,106,56,54,32,114,110,100,56,55,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,29),40,110,117,109,98,101,114,45,104,97,115,104,32,111,98,106,57,51,32,46,32,116,109,112,57,50,57,52,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,36),40,111,98,106,101,99,116,45,117,105,100,45,104,97,115,104,32,111,98,106,49,55,54,32,46,32,116,109,112,49,55,53,49,55,55,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,32),40,115,121,109,98,111,108,45,104,97,115,104,32,111,98,106,50,48,54,32,46,32,116,109,112,50,48,53,50,48,55,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,99,104,101,99,107,45,107,101,121,119,111,114,100,32,120,50,51,55,32,46,32,121,50,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,33),40,107,101,121,119,111,114,100,45,104,97,115,104,32,111,98,106,50,52,53,32,46,32,116,109,112,50,52,52,50,52,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,29),40,101,113,63,45,104,97,115,104,32,111,98,106,51,48,50,32,46,32,116,109,112,51,48,49,51,48,51,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,30),40,101,113,118,63,45,104,97,115,104,32,111,98,106,51,57,57,32,46,32,116,109,112,51,57,56,52,48,48,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,104,115,104,52,52,50,32,105,52,52,51,32,108,101,110,52,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,53),40,118,101,99,116,111,114,45,104,97,115,104,32,111,98,106,52,51,53,32,115,101,101,100,52,51,54,32,100,101,112,116,104,52,51,55,32,115,116,97,114,116,52,51,56,32,114,110,100,52,51,57,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,20),40,103,53,49,57,32,111,98,106,53,50,49,32,114,110,100,53,50,50,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,20),40,103,53,51,51,32,111,98,106,53,51,53,32,114,110,100,53,51,54,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,20),40,103,53,51,55,32,111,98,106,53,51,57,32,114,110,100,53,52,48,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,39),40,114,101,99,117,114,115,105,118,101,45,104,97,115,104,32,111,98,106,52,52,54,32,100,101,112,116,104,52,52,55,32,114,110,100,52,52,56,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,28),40,42,101,113,117,97,108,63,45,104,97,115,104,32,111,98,106,52,51,49,32,114,110,100,52,51,50,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,32),40,101,113,117,97,108,63,45,104,97,115,104,32,111,98,106,53,52,56,32,46,32,116,109,112,53,52,55,53,52,57,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,32),40,115,116,114,105,110,103,45,104,97,115,104,32,115,116,114,53,55,53,32,46,32,116,109,112,53,55,52,53,55,54,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,35),40,115,116,114,105,110,103,45,99,105,45,104,97,115,104,32,115,116,114,54,49,55,32,46,32,116,109,112,54,49,54,54,49,56,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,43),40,104,97,115,104,45,116,97,98,108,101,45,99,97,110,111,110,105,99,97,108,45,108,101,110,103,116,104,32,116,97,98,54,55,48,32,114,101,113,54,55,49,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,54,57,32,111,98,106,101,99,116,54,57,51,32,98,111,117,110,100,54,57,52,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,55,52,32,111,98,106,101,99,116,54,57,53,32,98,111,117,110,100,54,57,54,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,27),40,102,95,51,53,55,57,32,111,98,106,101,99,116,54,57,55,32,98,111,117,110,100,54,57,56,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,38),40,42,109,97,107,101,45,104,97,115,104,45,102,117,110,99,116,105,111,110,32,117,115,101,114,45,102,117,110,99,116,105,111,110,54,57,49,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,86),40,42,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,116,101,115,116,55,48,56,32,104,97,115,104,55,48,57,32,108,101,110,55,49,48,32,109,105,110,45,108,111,97,100,55,49,49,32,109,97,120,45,108,111,97,100,55,49,50,32,105,110,105,116,105,97,108,55,49,53,32,116,109,112,55,48,55,55,49,54,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,19),40,105,110,118,97,114,103,45,101,114,114,32,109,115,103,55,56,53,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,8),40,102,95,51,56,50,55,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,97,114,103,115,55,56,50,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,33),40,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,46,32,97,114,103,117,109,101,110,116,115,48,55,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,20),40,104,97,115,104,45,116,97,98,108,101,63,32,111,98,106,56,49,56,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,23),40,104,97,115,104,45,116,97,98,108,101,45,115,105,122,101,32,104,116,56,50,48,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,39),40,104,97,115,104,45,116,97,98,108,101,45,101,113,117,105,118,97,108,101,110,99,101,45,102,117,110,99,116,105,111,110,32,104,116,56,50,51,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,32),40,104,97,115,104,45,116,97,98,108,101,45,104,97,115,104,45,102,117,110,99,116,105,111,110,32,104,116,56,50,54,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,27),40,104,97,115,104,45,116,97,98,108,101,45,109,105,110,45,108,111,97,100,32,104,116,56,50,57,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,27),40,104,97,115,104,45,116,97,98,108,101,45,109,97,120,45,108,111,97,100,32,104,116,56,51,50,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,28),40,104,97,115,104,45,116,97,98,108,101,45,119,101,97,107,45,107,101,121,115,32,104,116,56,51,53,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,30),40,104,97,115,104,45,116,97,98,108,101,45,119,101,97,107,45,118,97,108,117,101,115,32,104,116,56,51,56,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,31),40,104,97,115,104,45,116,97,98,108,101,45,104,97,115,45,105,110,105,116,105,97,108,63,32,104,116,56,52,49,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,105,110,105,116,105,97,108,32,104,116,56,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,56,53,56,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,53,52,32,105,56,53,54,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,40),40,104,97,115,104,45,116,97,98,108,101,45,114,101,115,105,122,101,33,32,104,116,56,54,55,32,118,101,99,56,54,56,32,108,101,110,56,54,57,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,21),40,99,111,112,121,45,108,111,111,112,32,98,117,99,107,101,116,56,56,53,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,56,49,32,105,56,56,51,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,24),40,42,104,97,115,104,45,116,97,98,108,101,45,99,111,112,121,32,104,116,56,55,54,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,23),40,104,97,115,104,45,116,97,98,108,101,45,99,111,112,121,32,104,116,56,57,51,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,52,48,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,52,57,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,8),40,102,95,52,53,56,57,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,53),40,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,32,104,116,57,48,49,32,107,101,121,57,48,50,32,102,117,110,99,57,48,51,32,46,32,116,109,112,57,48,48,57,48,52,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,57,51,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,57),40,42,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,47,100,101,102,97,117,108,116,32,104,116,57,54,51,32,107,101,121,57,54,52,32,102,117,110,99,57,54,53,32,100,101,102,57,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,60),40,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,47,100,101,102,97,117,108,116,32,104,116,49,48,49,50,32,107,101,121,49,48,49,51,32,102,117,110,99,49,48,49,52,32,100,101,102,49,48,49,53,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,52,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,40),40,104,97,115,104,45,116,97,98,108,101,45,115,101,116,33,32,104,116,49,48,50,48,32,107,101,121,49,48,50,49,32,118,97,108,49,48,50,50,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,47),40,104,97,115,104,45,116,97,98,108,101,45,114,101,102,47,100,101,102,97,117,108,116,32,104,116,49,48,57,49,32,107,101,121,49,48,57,50,32,100,101,102,49,48,57,51,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,50,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,101,120,105,115,116,115,63,32,104,116,49,49,48,57,32,107,101,121,49,49,49,48,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,112,114,101,118,49,49,53,51,32,98,117,99,107,101,116,49,49,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,100,101,108,101,116,101,33,32,104,116,49,49,51,52,32,107,101,121,49,49,51,53,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,112,114,101,118,49,49,55,50,32,98,117,99,107,101,116,49,49,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,49,54,56,32,105,49,49,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,36),40,104,97,115,104,45,116,97,98,108,101,45,114,101,109,111,118,101,33,32,104,116,49,49,54,51,32,102,117,110,99,49,49,54,52,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,99,108,101,97,114,33,32,104,116,49,49,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,13),40,97,53,53,55,51,32,120,49,50,48,48,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,49,49,57,54,32,108,115,116,49,49,57,56,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,49,57,51,32,105,49,49,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,36),40,42,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,33,32,104,116,49,49,49,56,57,32,104,116,50,49,49,57,48,41,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,33,32,104,116,49,49,50,48,54,32,104,116,50,49,50,48,55,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,34),40,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,32,104,116,49,49,50,49,49,32,104,116,50,49,50,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,50,50,51,32,108,115,116,49,50,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,50,48,32,108,115,116,49,50,50,49,41,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,62,97,108,105,115,116,32,104,116,49,50,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,13),40,97,53,55,48,50,32,120,49,50,52,54,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,13),40,103,49,50,51,54,32,120,49,50,52,53,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,51,53,32,103,49,50,52,50,49,50,52,57,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,40),40,97,108,105,115,116,45,62,104,97,115,104,45,116,97,98,108,101,32,97,108,105,115,116,49,50,51,48,32,46,32,114,101,115,116,49,50,51,49,41};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,50,54,51,32,108,115,116,49,50,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,54,48,32,108,115,116,49,50,54,49,41,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,24),40,104,97,115,104,45,116,97,98,108,101,45,107,101,121,115,32,104,116,49,50,53,54,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,50,55,55,32,108,115,116,49,50,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,50,55,52,32,108,115,116,49,50,55,53,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,118,97,108,117,101,115,32,104,116,49,50,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,18),40,103,49,50,57,52,32,98,117,99,107,101,116,49,51,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,57,51,32,103,49,51,48,48,49,51,48,53,41,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,50,56,56,32,105,49,50,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,38),40,42,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,104,116,49,50,56,52,32,112,114,111,99,49,50,56,53,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,50,32,98,117,99,107,101,116,49,51,50,49,32,97,99,99,49,51,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,51,49,56,32,97,99,99,49,51,49,57,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,43),40,42,104,97,115,104,45,116,97,98,108,101,45,102,111,108,100,32,104,116,49,51,49,50,32,102,117,110,99,49,51,49,51,32,105,110,105,116,49,51,49,52,41,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,42),40,104,97,115,104,45,116,97,98,108,101,45,102,111,108,100,32,104,116,49,51,50,55,32,102,117,110,99,49,51,50,56,32,105,110,105,116,49,51,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,37),40,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,104,116,49,51,51,51,32,112,114,111,99,49,51,51,52,41,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,33),40,104,97,115,104,45,116,97,98,108,101,45,119,97,108,107,32,104,116,49,51,51,56,32,112,114,111,99,49,51,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,25),40,97,54,48,53,50,32,107,49,51,52,53,32,118,49,51,52,54,32,97,49,51,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,32),40,104,97,115,104,45,116,97,98,108,101,45,109,97,112,32,104,116,49,51,52,51,32,102,117,110,99,49,51,52,52,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,23),40,97,54,48,54,53,32,104,116,49,51,53,48,32,112,111,114,116,49,51,53,49,41,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,8),40,102,95,54,50,48,50,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,36),40,97,54,48,56,49,32,104,116,49,48,54,55,32,107,101,121,49,48,54,56,32,46,32,116,109,112,49,48,54,54,49,48,54,57,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,12),40,97,54,50,49,48,32,120,52,50,55,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,12),40,97,54,50,50,52,32,120,52,50,50,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_5951)
static void C_fcall f_5951(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word *av) C_noret;
C_noret_decl(f_3150)
static void C_fcall f_3150(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5504)
static void C_ccall f_5504(C_word c,C_word *av) C_noret;
C_noret_decl(f_3138)
static void C_fcall f_3138(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word *av) C_noret;
C_noret_decl(f_5525)
static void C_fcall f_5525(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word *av) C_noret;
C_noret_decl(f_2803)
static void C_fcall f_2803(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6225)
static void C_ccall f_6225(C_word c,C_word *av) C_noret;
C_noret_decl(f_6218)
static void C_fcall f_6218(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word *av) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word *av) C_noret;
C_noret_decl(f_4227)
static void C_fcall f_4227(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word *av) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word *av) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word *av) C_noret;
C_noret_decl(f_6232)
static void C_fcall f_6232(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word *av) C_noret;
C_noret_decl(f_5767)
static void C_fcall f_5767(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word *av) C_noret;
C_noret_decl(f_5435)
static void C_ccall f_5435(C_word c,C_word *av) C_noret;
C_noret_decl(f_3758)
static void C_fcall f_3758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4881)
static void C_fcall f_4881(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4887)
static void C_fcall f_4887(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_5422)
static void C_fcall f_5422(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3747)
static void C_fcall f_3747(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word *av) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3738)
static void C_ccall f_3738(C_word c,C_word *av) C_noret;
C_noret_decl(f_5751)
static void C_fcall f_5751(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5193)
static C_word C_fcall f_5193(C_word t0,C_word t1);
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word *av) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word *av) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word *av) C_noret;
C_noret_decl(f_4870)
static void C_fcall f_4870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3809)
static void C_ccall f_3809(C_word c,C_word *av) C_noret;
C_noret_decl(f_5448)
static void C_fcall f_5448(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5916)
static void C_fcall f_5916(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word *av) C_noret;
C_noret_decl(f_5832)
static void C_fcall f_5832(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5907)
static void C_ccall f_5907(C_word c,C_word *av) C_noret;
C_noret_decl(f_3630)
static C_word C_fcall f_3630(C_word t0);
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word *av) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word *av) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word *av) C_noret;
C_noret_decl(f_6048)
static void C_ccall f_6048(C_word c,C_word *av) C_noret;
C_noret_decl(f_6041)
static void C_ccall f_6041(C_word c,C_word *av) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word *av) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word *av) C_noret;
C_noret_decl(f_4182)
static void C_ccall f_4182(C_word c,C_word *av) C_noret;
C_noret_decl(f_6202)
static void C_ccall f_6202(C_word c,C_word *av) C_noret;
C_noret_decl(f_5142)
static void C_ccall f_5142(C_word c,C_word *av) C_noret;
C_noret_decl(f_4198)
static void C_fcall f_4198(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6073)
static void C_ccall f_6073(C_word c,C_word *av) C_noret;
C_noret_decl(f_6070)
static void C_ccall f_6070(C_word c,C_word *av) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word *av) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word *av) C_noret;
C_noret_decl(f_4185)
static void C_ccall f_4185(C_word c,C_word *av) C_noret;
C_noret_decl(f_5574)
static void C_ccall f_5574(C_word c,C_word *av) C_noret;
C_noret_decl(f_5002)
static void C_fcall f_5002(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6066)
static void C_ccall f_6066(C_word c,C_word *av) C_noret;
C_noret_decl(f_6064)
static void C_ccall f_6064(C_word c,C_word *av) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061(C_word c,C_word *av) C_noret;
C_noret_decl(f_5162)
static void C_ccall f_5162(C_word c,C_word *av) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word *av) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word *av) C_noret;
C_noret_decl(f_6012)
static void C_ccall f_6012(C_word c,C_word *av) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word *av) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word *av) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word *av) C_noret;
C_noret_decl(f_5682)
static void C_ccall f_5682(C_word c,C_word *av) C_noret;
C_noret_decl(f_6036)
static void C_ccall f_6036(C_word c,C_word *av) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word *av) C_noret;
C_noret_decl(f_5054)
static void C_ccall f_5054(C_word c,C_word *av) C_noret;
C_noret_decl(f_5690)
static void C_fcall f_5690(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3059)
static void C_fcall f_3059(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word *av) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word *av) C_noret;
C_noret_decl(f_6024)
static void C_ccall f_6024(C_word c,C_word *av) C_noret;
C_noret_decl(f_5126)
static void C_fcall f_5126(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word *av) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word *av) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586(C_word c,C_word *av) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word *av) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word *av) C_noret;
C_noret_decl(f_5640)
static void C_fcall f_5640(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word *av) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word *av) C_noret;
C_noret_decl(f_4337)
static void C_fcall f_4337(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word *av) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word *av) C_noret;
C_noret_decl(f_5723)
static void C_ccall f_5723(C_word c,C_word *av) C_noret;
C_noret_decl(f_3603)
static void C_fcall f_3603(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word *av) C_noret;
C_noret_decl(f_5736)
static void C_ccall f_5736(C_word c,C_word *av) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word *av) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word *av) C_noret;
C_noret_decl(f_5087)
static C_word C_fcall f_5087(C_word t0,C_word t1);
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word *av) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word *av) C_noret;
C_noret_decl(f_2747)
static void C_fcall f_2747(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word *av) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word *av) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_fcall f_2730(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6161)
static void C_fcall f_6161(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word *av) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word *av) C_noret;
C_noret_decl(f_3527)
static C_word C_fcall f_3527(C_word t0,C_word t1);
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word *av) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word *av) C_noret;
C_noret_decl(f_3521)
static void C_fcall f_3521(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4289)
static void C_fcall f_4289(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externexport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word *av) C_noret;
C_noret_decl(f_4914)
static void C_ccall f_4914(C_word c,C_word *av) C_noret;
C_noret_decl(f_5353)
static void C_fcall f_5353(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4410)
static void C_ccall f_4410(C_word c,C_word *av) C_noret;
C_noret_decl(f_5816)
static void C_fcall f_5816(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word *av) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word *av) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word *av) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word *av) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word *av) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word *av) C_noret;
C_noret_decl(f_2025)
static void C_ccall f_2025(C_word c,C_word *av) C_noret;
C_noret_decl(f_5624)
static void C_fcall f_5624(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word *av) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word *av) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word *av) C_noret;
C_noret_decl(f_6119)
static void C_fcall f_6119(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word *av) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word *av) C_noret;
C_noret_decl(f_3718)
static void C_ccall f_3718(C_word c,C_word *av) C_noret;
C_noret_decl(f_4671)
static void C_ccall f_4671(C_word c,C_word *av) C_noret;
C_noret_decl(f_4454)
static void C_fcall f_4454(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word *av) C_noret;
C_noret_decl(f_3709)
static void C_fcall f_3709(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3706)
static void C_fcall f_3706(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word *av) C_noret;
C_noret_decl(f_5306)
static C_word C_fcall f_5306(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word *av) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word *av) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word *av) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word *av) C_noret;
C_noret_decl(f_4003)
static void C_ccall f_4003(C_word c,C_word *av) C_noret;
C_noret_decl(f_4644)
static void C_fcall f_4644(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word *av) C_noret;
C_noret_decl(f_4494)
static void C_ccall f_4494(C_word c,C_word *av) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word *av) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word *av) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word *av) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word *av) C_noret;
C_noret_decl(f_5372)
static void C_ccall f_5372(C_word c,C_word *av) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word *av) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word *av) C_noret;
C_noret_decl(f_6092)
static void C_ccall f_6092(C_word c,C_word *av) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word *av) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word *av) C_noret;
C_noret_decl(f_6082)
static void C_ccall f_6082(C_word c,C_word *av) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word *av) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word *av) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word *av) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word *av) C_noret;
C_noret_decl(f_5713)
static void C_fcall f_5713(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word *av) C_noret;
C_noret_decl(f_4385)
static void C_fcall f_4385(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5939)
static void C_fcall f_5939(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word *av) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word *av) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word *av) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word *av) C_noret;
C_noret_decl(f_5233)
static void C_fcall f_5233(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word *av) C_noret;
C_noret_decl(f_4953)
static void C_fcall f_4953(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5967)
static void C_fcall f_5967(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word *av) C_noret;
C_noret_decl(f_4391)
static void C_fcall f_4391(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word *av) C_noret;
C_noret_decl(f_4374)
static void C_fcall f_4374(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word *av) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word *av) C_noret;
C_noret_decl(f_4527)
static void C_ccall f_4527(C_word c,C_word *av) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word *av) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word *av) C_noret;
C_noret_decl(f_4517)
static void C_fcall f_4517(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4638)
static void C_fcall f_4638(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5286)
static void C_ccall f_5286(C_word c,C_word *av) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word *av) C_noret;
C_noret_decl(f_4627)
static void C_fcall f_4627(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331(C_word c,C_word *av) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word *av) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word *av) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word *av) C_noret;
C_noret_decl(f_2727)
static void C_fcall f_2727(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word *av) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word *av) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word *av) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word *av) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word *av) C_noret;
C_noret_decl(f_4776)
static void C_ccall f_4776(C_word c,C_word *av) C_noret;
C_noret_decl(f_3021)
static void C_ccall f_3021(C_word c,C_word *av) C_noret;
C_noret_decl(f_4766)
static void C_fcall f_4766(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5246)
static void C_ccall f_5246(C_word c,C_word *av) C_noret;
C_noret_decl(f_4115)
static void C_ccall f_4115(C_word c,C_word *av) C_noret;
C_noret_decl(f_4128)
static void C_fcall f_4128(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4105)
static void C_fcall f_4105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743(C_word c,C_word *av) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word *av) C_noret;
C_noret_decl(f_4598)
static void C_fcall f_4598(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word *av) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179(C_word c,C_word *av) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word *av) C_noret;
C_noret_decl(f_5878)
static void C_fcall f_5878(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6180)
static void C_ccall f_6180(C_word c,C_word *av) C_noret;
C_noret_decl(f_4707)
static void C_fcall f_4707(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5886)
static void C_fcall f_5886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word *av) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word *av) C_noret;
C_noret_decl(f_5609)
static void C_ccall f_5609(C_word c,C_word *av) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word *av) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word *av) C_noret;
C_noret_decl(f_5866)
static void C_fcall f_5866(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word *av) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word *av) C_noret;
C_noret_decl(f_5513)
static void C_fcall f_5513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word *av) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void C_fcall f_5548(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3712)
static void C_fcall f_3712(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word *av) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word *av) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word *av) C_noret;

C_noret_decl(trf_5951)
static void C_ccall trf_5951(C_word c,C_word *av) C_noret;
static void C_ccall trf_5951(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5951(t0,t1,t2,t3);}

C_noret_decl(trf_3150)
static void C_ccall trf_3150(C_word c,C_word *av) C_noret;
static void C_ccall trf_3150(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3150(t0,t1,t2,t3);}

C_noret_decl(trf_3138)
static void C_ccall trf_3138(C_word c,C_word *av) C_noret;
static void C_ccall trf_3138(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3138(t0,t1,t2,t3);}

C_noret_decl(trf_5525)
static void C_ccall trf_5525(C_word c,C_word *av) C_noret;
static void C_ccall trf_5525(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5525(t0,t1,t2);}

C_noret_decl(trf_2803)
static void C_ccall trf_2803(C_word c,C_word *av) C_noret;
static void C_ccall trf_2803(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2803(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6218)
static void C_ccall trf_6218(C_word c,C_word *av) C_noret;
static void C_ccall trf_6218(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6218(t0,t1);}

C_noret_decl(trf_4227)
static void C_ccall trf_4227(C_word c,C_word *av) C_noret;
static void C_ccall trf_4227(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4227(t0,t1,t2);}

C_noret_decl(trf_6232)
static void C_ccall trf_6232(C_word c,C_word *av) C_noret;
static void C_ccall trf_6232(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6232(t0,t1);}

C_noret_decl(trf_5767)
static void C_ccall trf_5767(C_word c,C_word *av) C_noret;
static void C_ccall trf_5767(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5767(t0,t1,t2,t3);}

C_noret_decl(trf_3758)
static void C_ccall trf_3758(C_word c,C_word *av) C_noret;
static void C_ccall trf_3758(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3758(t0,t1,t2);}

C_noret_decl(trf_4881)
static void C_ccall trf_4881(C_word c,C_word *av) C_noret;
static void C_ccall trf_4881(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4881(t0,t1);}

C_noret_decl(trf_4887)
static void C_ccall trf_4887(C_word c,C_word *av) C_noret;
static void C_ccall trf_4887(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4887(t0,t1);}

C_noret_decl(trf_5422)
static void C_ccall trf_5422(C_word c,C_word *av) C_noret;
static void C_ccall trf_5422(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5422(t0,t1,t2);}

C_noret_decl(trf_3747)
static void C_ccall trf_3747(C_word c,C_word *av) C_noret;
static void C_ccall trf_3747(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3747(t0,t1,t2);}

C_noret_decl(trf_5751)
static void C_ccall trf_5751(C_word c,C_word *av) C_noret;
static void C_ccall trf_5751(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5751(t0,t1,t2,t3);}

C_noret_decl(trf_4870)
static void C_ccall trf_4870(C_word c,C_word *av) C_noret;
static void C_ccall trf_4870(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4870(t0,t1);}

C_noret_decl(trf_5448)
static void C_ccall trf_5448(C_word c,C_word *av) C_noret;
static void C_ccall trf_5448(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5448(t0,t1,t2,t3);}

C_noret_decl(trf_5916)
static void C_ccall trf_5916(C_word c,C_word *av) C_noret;
static void C_ccall trf_5916(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5916(t0,t1,t2);}

C_noret_decl(trf_5832)
static void C_ccall trf_5832(C_word c,C_word *av) C_noret;
static void C_ccall trf_5832(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5832(t0,t1,t2,t3);}

C_noret_decl(trf_4198)
static void C_ccall trf_4198(C_word c,C_word *av) C_noret;
static void C_ccall trf_4198(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4198(t0,t1);}

C_noret_decl(trf_5002)
static void C_ccall trf_5002(C_word c,C_word *av) C_noret;
static void C_ccall trf_5002(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5002(t0,t1,t2);}

C_noret_decl(trf_5690)
static void C_ccall trf_5690(C_word c,C_word *av) C_noret;
static void C_ccall trf_5690(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5690(t0,t1,t2);}

C_noret_decl(trf_3059)
static void C_ccall trf_3059(C_word c,C_word *av) C_noret;
static void C_ccall trf_3059(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3059(t0,t1,t2,t3);}

C_noret_decl(trf_5126)
static void C_ccall trf_5126(C_word c,C_word *av) C_noret;
static void C_ccall trf_5126(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5126(t0,t1,t2);}

C_noret_decl(trf_5640)
static void C_ccall trf_5640(C_word c,C_word *av) C_noret;
static void C_ccall trf_5640(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5640(t0,t1,t2,t3);}

C_noret_decl(trf_4337)
static void C_ccall trf_4337(C_word c,C_word *av) C_noret;
static void C_ccall trf_4337(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4337(t0,t1);}

C_noret_decl(trf_3603)
static void C_ccall trf_3603(C_word c,C_word *av) C_noret;
static void C_ccall trf_3603(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_3603(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_2747)
static void C_ccall trf_2747(C_word c,C_word *av) C_noret;
static void C_ccall trf_2747(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2747(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2730)
static void C_ccall trf_2730(C_word c,C_word *av) C_noret;
static void C_ccall trf_2730(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_2730(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6161)
static void C_ccall trf_6161(C_word c,C_word *av) C_noret;
static void C_ccall trf_6161(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6161(t0,t1,t2);}

C_noret_decl(trf_3521)
static void C_ccall trf_3521(C_word c,C_word *av) C_noret;
static void C_ccall trf_3521(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3521(t0,t1,t2);}

C_noret_decl(trf_4289)
static void C_ccall trf_4289(C_word c,C_word *av) C_noret;
static void C_ccall trf_4289(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4289(t0,t1,t2);}

C_noret_decl(trf_5353)
static void C_ccall trf_5353(C_word c,C_word *av) C_noret;
static void C_ccall trf_5353(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5353(t0,t1,t2,t3);}

C_noret_decl(trf_5816)
static void C_ccall trf_5816(C_word c,C_word *av) C_noret;
static void C_ccall trf_5816(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5816(t0,t1,t2,t3);}

C_noret_decl(trf_5624)
static void C_ccall trf_5624(C_word c,C_word *av) C_noret;
static void C_ccall trf_5624(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5624(t0,t1,t2,t3);}

C_noret_decl(trf_6119)
static void C_ccall trf_6119(C_word c,C_word *av) C_noret;
static void C_ccall trf_6119(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6119(t0,t1,t2);}

C_noret_decl(trf_4454)
static void C_ccall trf_4454(C_word c,C_word *av) C_noret;
static void C_ccall trf_4454(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4454(t0,t1,t2);}

C_noret_decl(trf_3709)
static void C_ccall trf_3709(C_word c,C_word *av) C_noret;
static void C_ccall trf_3709(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3709(t0,t1);}

C_noret_decl(trf_3706)
static void C_ccall trf_3706(C_word c,C_word *av) C_noret;
static void C_ccall trf_3706(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3706(t0,t1);}

C_noret_decl(trf_4644)
static void C_ccall trf_4644(C_word c,C_word *av) C_noret;
static void C_ccall trf_4644(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4644(t0,t1);}

C_noret_decl(trf_5713)
static void C_ccall trf_5713(C_word c,C_word *av) C_noret;
static void C_ccall trf_5713(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5713(t0,t1,t2);}

C_noret_decl(trf_4385)
static void C_ccall trf_4385(C_word c,C_word *av) C_noret;
static void C_ccall trf_4385(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4385(t0,t1);}

C_noret_decl(trf_5939)
static void C_ccall trf_5939(C_word c,C_word *av) C_noret;
static void C_ccall trf_5939(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5939(t0,t1,t2,t3);}

C_noret_decl(trf_5233)
static void C_ccall trf_5233(C_word c,C_word *av) C_noret;
static void C_ccall trf_5233(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5233(t0,t1,t2);}

C_noret_decl(trf_4953)
static void C_ccall trf_4953(C_word c,C_word *av) C_noret;
static void C_ccall trf_4953(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4953(t0,t1,t2);}

C_noret_decl(trf_5967)
static void C_ccall trf_5967(C_word c,C_word *av) C_noret;
static void C_ccall trf_5967(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5967(t0,t1,t2,t3);}

C_noret_decl(trf_4391)
static void C_ccall trf_4391(C_word c,C_word *av) C_noret;
static void C_ccall trf_4391(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4391(t0,t1);}

C_noret_decl(trf_4374)
static void C_ccall trf_4374(C_word c,C_word *av) C_noret;
static void C_ccall trf_4374(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4374(t0,t1);}

C_noret_decl(trf_4517)
static void C_ccall trf_4517(C_word c,C_word *av) C_noret;
static void C_ccall trf_4517(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4517(t0,t1,t2);}

C_noret_decl(trf_4638)
static void C_ccall trf_4638(C_word c,C_word *av) C_noret;
static void C_ccall trf_4638(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4638(t0,t1);}

C_noret_decl(trf_4627)
static void C_ccall trf_4627(C_word c,C_word *av) C_noret;
static void C_ccall trf_4627(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4627(t0,t1);}

C_noret_decl(trf_2727)
static void C_ccall trf_2727(C_word c,C_word *av) C_noret;
static void C_ccall trf_2727(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2727(t0,t1,t2);}

C_noret_decl(trf_4766)
static void C_ccall trf_4766(C_word c,C_word *av) C_noret;
static void C_ccall trf_4766(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4766(t0,t1,t2);}

C_noret_decl(trf_4128)
static void C_ccall trf_4128(C_word c,C_word *av) C_noret;
static void C_ccall trf_4128(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4128(t0,t1,t2);}

C_noret_decl(trf_4105)
static void C_ccall trf_4105(C_word c,C_word *av) C_noret;
static void C_ccall trf_4105(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4105(t0,t1,t2);}

C_noret_decl(trf_4598)
static void C_ccall trf_4598(C_word c,C_word *av) C_noret;
static void C_ccall trf_4598(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_4598(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5878)
static void C_ccall trf_5878(C_word c,C_word *av) C_noret;
static void C_ccall trf_5878(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5878(t0,t1,t2);}

C_noret_decl(trf_4707)
static void C_ccall trf_4707(C_word c,C_word *av) C_noret;
static void C_ccall trf_4707(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4707(t0,t1,t2);}

C_noret_decl(trf_5886)
static void C_ccall trf_5886(C_word c,C_word *av) C_noret;
static void C_ccall trf_5886(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5886(t0,t1,t2);}

C_noret_decl(trf_5866)
static void C_ccall trf_5866(C_word c,C_word *av) C_noret;
static void C_ccall trf_5866(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5866(t0,t1,t2);}

C_noret_decl(trf_5513)
static void C_ccall trf_5513(C_word c,C_word *av) C_noret;
static void C_ccall trf_5513(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5513(t0,t1,t2);}

C_noret_decl(trf_5548)
static void C_ccall trf_5548(C_word c,C_word *av) C_noret;
static void C_ccall trf_5548(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5548(t0,t1,t2);}

C_noret_decl(trf_3712)
static void C_ccall trf_3712(C_word c,C_word *av) C_noret;
static void C_ccall trf_3712(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3712(t0,t1);}

/* loop in *hash-table-fold in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5951(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_5951,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5967,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word)li93),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_5967(t8,t1,t4,t3);}}

/* k3309 in string-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_3311,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* srfi-69.scm:361: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=t3;
av2[5]=lf[24];
tp(6,av2);}}

/* g537 in recursive-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_fcall f_3150(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_3150,4,t0,t1,t2,t3);}
/* srfi-69.scm:303: vector-hash */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2730(t4,t1,t2,C_fix(0),((C_word*)t0)[3],C_fix(0),t3);}

/* k5502 in hash-table-clear! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5504,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g533 in recursive-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_fcall f_3138(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_3138,4,t0,t1,t2,t3);}
t4=C_peek_fixnum(t2,C_fix(0));
/* srfi-69.scm:300: vector-hash */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2730(t5,t1,t2,t4,((C_word*)t0)[3],C_fix(1),t3);}

/* k5924 in for-each-loop1293 in doloop1288 in *hash-table-for-each in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5926,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5916(t3,((C_word*)t0)[4],t2);}

/* doloop1193 in *hash-table-merge! in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5525(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5525,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5535,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5548,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5548(t8,t3,t4);}}

/* equal?-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_3162,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
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
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_check_exact_2(t6,lf[23]);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3210,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:348: *equal?-hash */
f_2727(t14,t2,t10);}

/* recursive-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_fcall f_2803(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_2803,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t3,*((C_word*)lf[17]+1)))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fixnum_xor(C_fix(99),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_fixnump(t2))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fixnum_xor(t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_charp(t2))){
t5=C_fix(C_character_code(t2));
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_fixnum_xor(t5,t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
switch(t2){
case C_SCHEME_TRUE:
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fixnum_xor(C_fix(256),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
case C_SCHEME_FALSE:
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fixnum_xor(C_fix(257),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
default:
if(C_truep(C_i_nullp(t2))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fixnum_xor(C_fix(258),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_eofp(t2))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fixnum_xor(C_fix(259),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
t5=t1;
t6=t2;
t7=t4;
t8=C_slot(t6,C_fix(1));
t9=t5;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_u_i_string_hash(t8,t7);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
if(C_truep(C_i_numberp(t2))){
t5=t1;
t6=t2;
t7=t4;
if(C_truep(C_i_flonump(t6))){
t8=C_subbyte(t6,C_fix(7));
t9=C_subbyte(t6,C_fix(6));
t10=C_subbyte(t6,C_fix(5));
t11=C_subbyte(t6,C_fix(4));
t12=C_subbyte(t6,C_fix(3));
t13=C_subbyte(t6,C_fix(2));
t14=C_subbyte(t6,C_fix(1));
t15=C_subbyte(t6,C_fix(0));
t16=C_fixnum_shift_left(t15,C_fix(1));
t17=C_fixnum_plus(t14,t16);
t18=C_fixnum_shift_left(t17,C_fix(1));
t19=C_fixnum_plus(t13,t18);
t20=C_fixnum_shift_left(t19,C_fix(1));
t21=C_fixnum_plus(t12,t20);
t22=C_fixnum_shift_left(t21,C_fix(1));
t23=C_fixnum_plus(t11,t22);
t24=C_fixnum_shift_left(t23,C_fix(1));
t25=C_fixnum_plus(t10,t24);
t26=C_fixnum_shift_left(t25,C_fix(1));
t27=C_fixnum_plus(t9,t26);
t28=C_fixnum_shift_left(t27,C_fix(1));
t29=C_fixnum_plus(t8,t28);
t30=t5;{
C_word av2[2];
av2[0]=t30;
av2[1]=C_fixnum_times(C_fix(331804471),t29);
((C_proc)(void*)(*((C_word*)t30+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3021,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:148: ##sys#number-hash-hook */
t9=*((C_word*)lf[1]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}
else{
t5=t2;
if(C_truep(C_blockp(t5))){
t6=t2;
if(C_truep(C_byteblockp(t6))){
t7=t1;
t8=t2;
t9=t4;
t10=t7;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_u_i_string_hash(t8,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3059,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:337: g519 */
t8=t7;
f_3059(t8,t1,t2,t4);}
else{
t7=t2;
if(C_truep(C_portp(t7))){
t8=t1;
t9=t2;
t10=t4;
t11=C_peek_fixnum(t9,C_fix(0));
t12=C_fixnum_shift_left(t11,C_fix(4));
t13=C_fixnum_xor(t12,t10);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3118,a[2]=t8,a[3]=t14,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:295: input-port? */
t16=*((C_word*)lf[21]+1);{
C_word av2[3];
av2[0]=t16;
av2[1]=t15;
av2[2]=t9;
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}
else{
t8=t2;
if(C_truep(C_specialp(t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3138,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:339: g533 */
t10=t9;
f_3138(t10,t1,t2,t4);}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3150,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:340: g537 */
t10=t9;
f_3150(t10,t1,t2,t4);}}}}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_fixnum_xor(C_fix(262),t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}}}}}}}

/* a6224 in k1714 */
static void C_ccall f_6225(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6225,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6232,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t4=t2;
t5=t3;
f_6232(t5,C_fixnum_greaterp(t4,C_fix(0)));}
else{
t4=t3;
f_6232(t4,C_SCHEME_FALSE);}}

/* k6216 in a6210 in k2718 in k1714 */
static void C_fcall f_6218(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_6218,2,t0,t1);}
if(C_truep(t1)){
t2=C_mutate2((C_word*)lf[19]+1 /* (set! *recursive-hash-max-length* ...) */,((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=*((C_word*)lf[19]+1);
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=*((C_word*)lf[19]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a6210 in k2718 in k1714 */
static void C_ccall f_6211(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6211,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6218,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t4=t2;
t5=t3;
f_6218(t5,C_fixnum_greaterp(t4,C_fix(0)));}
else{
t4=t3;
f_6218(t4,C_SCHEME_FALSE);}}

/* k3784 in k3770 in k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3786,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3747(t4,((C_word*)t0)[6],t3);}

/* doloop881 in k4206 in *hash-table-copy in k2723 in k2718 in k1714 */
static void C_fcall f_4227(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,8)))){
C_save_and_reclaim_args((void *)trf_4227,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_slot(((C_word*)t0)[3],C_fix(3));
t4=C_slot(((C_word*)t0)[3],C_fix(4));
t5=C_slot(((C_word*)t0)[3],C_fix(2));
t6=C_slot(((C_word*)t0)[3],C_fix(5));
t7=C_slot(((C_word*)t0)[3],C_fix(6));
t8=C_slot(((C_word*)t0)[3],C_fix(9));
/* srfi-69.scm:680: *make-hash-table */
f_3603(t1,t3,t4,t5,t6,t7,t8,C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[6],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4289,a[2]=t6,a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4289(t8,t3,t4);}}

/* k3770 in k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3772,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(((C_word*)t0)[5],lf[53]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:541: ##sys#check-closure */
t6=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[45];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t5=C_eqp(((C_word*)t0)[5],lf[55]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3796,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:544: ##sys#check-closure */
t7=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[45];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=C_eqp(((C_word*)t0)[5],lf[56]);
if(C_truep(t6)){
t7=C_i_check_exact_2(t2,lf[45]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3809,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(C_fix(0),t2))){
t9=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_3809(2,av2);}}
else{
/* srfi-69.scm:549: error */
t9=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[45];
av2[3]=lf[57];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}
else{
t7=C_eqp(((C_word*)t0)[5],lf[58]);
if(C_truep(t7)){
t8=C_mutate2(((C_word *)((C_word*)t0)[9])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3827,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
t9=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t10=((C_word*)((C_word*)t0)[3])[1];
f_3747(t10,((C_word*)t0)[4],t9);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[59]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3837,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:554: ##sys#check-inexact */
t10=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[45];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t9=C_eqp(((C_word*)t0)[5],lf[64]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3860,a[2]=((C_word*)t0)[11],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:559: ##sys#check-inexact */
t11=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[45];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t10=C_eqp(((C_word*)t0)[5],lf[66]);
if(C_truep(t10)){
if(C_truep(t2)){
t11=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t12=((C_word*)((C_word*)t0)[3])[1];
f_3747(t12,((C_word*)t0)[4],t11);}
else{
t11=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t12=((C_word*)((C_word*)t0)[3])[1];
f_3747(t12,((C_word*)t0)[4],t11);}}
else{
t11=C_eqp(((C_word*)t0)[5],lf[67]);
if(C_truep(t11)){
if(C_truep(t2)){
t12=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t13=((C_word*)((C_word*)t0)[3])[1];
f_3747(t13,((C_word*)t0)[4],t12);}
else{
t12=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t13=((C_word*)((C_word*)t0)[3])[1];
f_3747(t13,((C_word*)t0)[4],t12);}}
else{
/* srfi-69.scm:568: invarg-err */
t12=((C_word*)t0)[12];
f_3758(t12,t3,lf[68]);}}}}}}}}}

/* k3773 in k3770 in k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3775,2,av);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* srfi-69.scm:569: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3747(t3,((C_word*)t0)[4],t2);}

/* k4209 in k4206 in *hash-table-copy in k2723 in k2718 in k1714 */
static void C_ccall f_4211(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4211,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_setslot(t1,C_fix(2),t2);
t4=C_slot(((C_word*)t0)[2],C_fix(10));
t5=C_i_setslot(t1,C_fix(10),t4);
t6=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6230 in a6224 in k1714 */
static void C_fcall f_6232(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_6232,2,t0,t1);}
if(C_truep(t1)){
t2=C_mutate2((C_word*)lf[17]+1 /* (set! *recursive-hash-max-depth* ...) */,((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=*((C_word*)lf[17]+1);
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=*((C_word*)lf[17]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3768(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3768,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3772,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_u_i_car(t3);
f_3772(2,av2);}}
else{
/* srfi-69.scm:538: invarg-err */
t5=((C_word*)t0)[12];
f_3758(t5,t4,lf[69]);}}
else{
/* srfi-69.scm:570: invarg-err */
t2=((C_word*)t0)[12];
f_3758(t2,((C_word*)t0)[4],lf[70]);}}

/* loop2 in loop in hash-table-keys in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5767(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_5767,4,t0,t1,t2,t3);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1054: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5751(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(0));
t7=C_a_i_cons(&a,2,t6,t3);
/* srfi-69.scm:1055: loop2 */
t9=t1;
t10=t4;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* k4206 in *hash-table-copy in k2723 in k2718 in k1714 */
static void C_ccall f_4208(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4208,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4211,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4227,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t5,a[6]=((C_word*)t0)[5],a[7]=((C_word)li43),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_4227(t7,t3,C_fix(0));}

/* k5433 in doloop1168 in k5406 in hash-table-remove! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5435,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5422(t3,((C_word*)t0)[4],t2);}

/* invarg-err in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_fcall f_3758(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_3758,3,t0,t1,t2);}
/* srfi-69.scm:533: error */
t3=*((C_word*)lf[50]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[45];
av2[3]=t2;
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4879 in k4868 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_fcall f_4881(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4881,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[7]);
t4=t2;
f_4887(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[7],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4887(t3,C_SCHEME_FALSE);}}

/* k4885 in k4879 in k4868 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_fcall f_4887(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_4887,2,t0,t1);}
if(C_truep(t1)){
/* srfi-69.scm:668: hash-table-resize! */
t2=*((C_word*)lf[82]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3740 in k3713 in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3742,2,av);}
if(C_truep(t1)){
/* srfi-69.scm:573: error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=lf[51];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
av2[5]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_3718(2,av2);}}}

/* doloop1168 in k5406 in hash-table-remove! in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5422(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_5422,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),((C_word*)((C_word*)t0)[4])[1]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5435,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[6],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5448,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[7],a[7]=((C_word)li66),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_5448(t8,t3,C_SCHEME_FALSE,t4);}}

/* loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_fcall f_3747(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_3747,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3758,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3768,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=t5,tmp=(C_word)a,a+=13,tmp);
/* srfi-69.scm:534: keyword? */
t7=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k4831 in hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4833,2,av);}
/* srfi-69.scm:801: *hash-table-update!/default */
t2=lf[89];
f_4598(t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* hash-table-set! in k2723 in k2718 in k1714 */
static void C_ccall f_4838(C_word c,C_word *av){
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
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_4838,5,av);}
a=C_alloc(23);
t5=C_i_check_structure_2(t2,lf[37],lf[91]);
t6=C_slot(t2,C_fix(2));
t7=C_fixnum_plus(t6,C_fix(1));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4921,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t4,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t10=t9;
t11=t2;
t12=t8;
t13=C_slot(t11,C_fix(1));
t14=t13;
t15=C_slot(t11,C_fix(5));
t16=C_slot(t11,C_fix(6));
t17=t16;
t18=C_block_size(t14);
t19=t18;
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4870,a[2]=t10,a[3]=t11,a[4]=t14,a[5]=t19,a[6]=t12,a[7]=t17,tmp=(C_word)a,a+=8,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4914,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
t22=C_a_i_times(&a,2,t19,t15);
/* srfi-69.scm:664: floor */
t23=*((C_word*)lf[86]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t23;
av2[1]=t21;
av2[2]=t22;
((C_proc)(void*)(*((C_word*)t23+1)))(3,av2);}}

/* k3736 in k3720 in k3716 in k3713 in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3738,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
/* srfi-69.scm:585: *make-hash-table */
f_3603(((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[8])[1],((C_word*)((C_word*)t0)[9])[1],C_SCHEME_END_OF_LIST);}

/* loop in hash-table-keys in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5751(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_5751,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5767,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5767(t8,t1,t4,t3);}}

/* loop in k5176 in hash-table-exists? in k5052 in k2723 in k2718 in k1714 */
static C_word C_fcall f_5193(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_slot(t1,C_fix(0));
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t4);}
else{
t5=C_slot(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}}

/* k5406 in hash-table-remove! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_5408,2,av);}
a=C_alloc(13);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=C_block_size(t3);
t5=t4;
t6=C_slot(((C_word*)t0)[2],C_fix(2));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5422,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=t10,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word)li67),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_5422(t12,((C_word*)t0)[4],C_fix(0));}

/* hash-table-remove! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5401(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5401,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[37],lf[97]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5408,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:966: ##sys#check-closure */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[97];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k5465 in loop in doloop1168 in k5406 in hash-table-remove! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5467(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5467,2,av);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]):C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3]));
t3=C_fixnum_difference(((C_word*)((C_word*)t0)[6])[1],C_fix(1));
t4=C_set_block_item(((C_word*)t0)[6],0,t3);
t5=((C_word*)t0)[7];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* srfi-69.scm:983: loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_5448(t2,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[3]);}}

/* k4868 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_fcall f_4870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_4870,2,t0,t1);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4906,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_times(&a,2,((C_word*)t0)[5],((C_word*)t0)[7]);
/* srfi-69.scm:665: floor */
t6=*((C_word*)lf[86]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3807 in k3770 in k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3809(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3809,2,av);}
t2=C_i_fixnum_min(C_fix(1073741823),((C_word*)t0)[2]);
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
t4=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3747(t5,((C_word*)t0)[6],t4);}

/* loop in doloop1168 in k5406 in hash-table-remove! in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5448(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_5448,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5467,a[2]=t2,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
t8=C_slot(t4,C_fix(0));
t9=C_slot(t4,C_fix(1));
/* srfi-69.scm:976: func */
t10=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
((C_proc)C_fast_retrieve_proc(t10))(4,av2);}}}

/* for-each-loop1293 in doloop1288 in *hash-table-for-each in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5916(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5916,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5926,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-69.scm:1081: g1294 */
t5=((C_word*)t0)[3];
f_5886(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a6052 in k6046 in hash-table-map in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6053(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6053,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6061,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1122: func */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}

/* loop2 in loop in hash-table-values in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5832(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_5832,4,t0,t1,t2,t3);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1069: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5816(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(1));
t7=C_a_i_cons(&a,2,t6,t3);
/* srfi-69.scm:1070: loop2 */
t9=t1;
t10=t4;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* k5905 in doloop1288 in *hash-table-for-each in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5907,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5878(t3,((C_word*)t0)[4],t2);}

/* hash-for-test in make-hash-table in k2723 in k2718 in k1714 */
static C_word C_fcall f_3630(C_word t0){
C_word tmp;
C_word t1;
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
C_stack_overflow_check;{}
t1=C_eqp(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=(C_truep(t1)?t1:C_eqp(*((C_word*)lf[39]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t2)){
return(((C_word*)t0)[4]);}
else{
t3=C_eqp(((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);
t4=(C_truep(t3)?t3:C_eqp(*((C_word*)lf[40]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t4)){
return(((C_word*)t0)[6]);}
else{
t5=C_eqp(((C_word*)t0)[7],((C_word*)((C_word*)t0)[3])[1]);
t6=(C_truep(t5)?t5:C_eqp(*((C_word*)lf[41]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t6)){
return(((C_word*)t0)[8]);}
else{
t7=C_eqp(((C_word*)t0)[9],((C_word*)((C_word*)t0)[3])[1]);
t8=(C_truep(t7)?t7:C_eqp(*((C_word*)lf[42]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t8)){
return(((C_word*)t0)[10]);}
else{
t9=C_eqp(((C_word*)t0)[11],((C_word*)((C_word*)t0)[3])[1]);
t10=(C_truep(t9)?t9:C_eqp(*((C_word*)lf[43]+1),((C_word*)((C_word*)t0)[3])[1]));
if(C_truep(t10)){
return(((C_word*)t0)[12]);}
else{
t11=C_eqp(((C_word*)t0)[13],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t11)){
return((C_truep(t11)?((C_word*)t0)[14]:C_SCHEME_FALSE));}
else{
t12=C_eqp(*((C_word*)lf[44]+1),((C_word*)((C_word*)t0)[3])[1]);
return((C_truep(t12)?((C_word*)t0)[14]:C_SCHEME_FALSE));}}}}}}}

/* f_3827 in k3770 in k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3827,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4800 in k4797 in loop in k4691 in k4676 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4802,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* hash-table-merge in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5593,4,av);}
a=C_alloc(4);
t4=C_i_check_structure_2(t2,lf[37],lf[102]);
t5=C_i_check_structure_2(t3,lf[37],lf[102]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5607,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1012: *hash-table-copy */
f_4198(t6,t2);}

/* k6046 in hash-table-map in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_6048,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6053,a[2]=((C_word*)t0)[2],a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:1122: *hash-table-fold */
f_5939(((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST);}

/* hash-table-map in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6041(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6041,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[37],lf[113]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6048,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1121: ##sys#check-closure */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[113];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1739 in number-hash in k1714 */
static void C_ccall f_1741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1741,2,av);}
a=C_alloc(7);
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1914,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
if(C_truep(C_fixnump(t4))){
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_fixnum_xor(t4,((C_word*)t0)[5]);
f_1914(2,av2);}}
else{
t5=t3;
if(C_truep(C_i_flonump(t4))){
t6=C_subbyte(t4,C_fix(7));
t7=C_subbyte(t4,C_fix(6));
t8=C_subbyte(t4,C_fix(5));
t9=C_subbyte(t4,C_fix(4));
t10=C_subbyte(t4,C_fix(3));
t11=C_subbyte(t4,C_fix(2));
t12=C_subbyte(t4,C_fix(1));
t13=C_subbyte(t4,C_fix(0));
t14=C_fixnum_shift_left(t13,C_fix(1));
t15=C_fixnum_plus(t12,t14);
t16=C_fixnum_shift_left(t15,C_fix(1));
t17=C_fixnum_plus(t11,t16);
t18=C_fixnum_shift_left(t17,C_fix(1));
t19=C_fixnum_plus(t10,t18);
t20=C_fixnum_shift_left(t19,C_fix(1));
t21=C_fixnum_plus(t9,t20);
t22=C_fixnum_shift_left(t21,C_fix(1));
t23=C_fixnum_plus(t8,t22);
t24=C_fixnum_shift_left(t23,C_fix(1));
t25=C_fixnum_plus(t7,t24);
t26=C_fixnum_shift_left(t25,C_fix(1));
t27=C_fixnum_plus(t6,t26);
t28=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t28;
av2[1]=C_fixnum_times(C_fix(331804471),t27);
((C_proc)(void*)(*((C_word*)t28+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:148: ##sys#number-hash-hook */
t7=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k3208 in equal?-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3210(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3210,2,av);}
t2=((C_word*)t0)[2];
t3=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t4=C_fixnum_lessp(t1,C_fix(0));
t5=(C_truep(t4)?C_fixnum_negate(t1):t1);
t6=C_fixnum_and(t3,t5);
t7=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_fixnum_modulo(t6,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k4180 in k4177 in hash-table-resize! in k2723 in k2718 in k1714 */
static void C_ccall f_4182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_4182,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[3],C_fix(10));
t5=((C_word*)t0)[4];
t6=t2;
t7=t4;
t8=C_block_size(t5);
t9=t8;
t10=C_block_size(t6);
t11=t10;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4105,a[2]=t9,a[3]=t13,a[4]=t5,a[5]=t6,a[6]=t7,a[7]=t11,a[8]=((C_word)li40),tmp=(C_word)a,a+=9,tmp));
t15=((C_word*)t13)[1];
f_4105(t15,t3,C_fix(0));}

/* f_6202 in a6081 in k2723 in k2718 in k1714 */
static void C_ccall f_6202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6202,2,av);}
/* srfi-69.scm:844: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[87];
av2[3]=lf[93];
av2[4]=lf[118];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k5140 in loop in k5070 in hash-table-ref/default in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5142,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:897: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5126(t3,((C_word*)t0)[2],t2);}}

/* *hash-table-copy in k2723 in k2718 in k1714 */
static void C_fcall f_4198(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4198,2,t1,t2);}
a=C_alloc(6);
t3=C_slot(t2,C_fix(1));
t4=t3;
t5=C_block_size(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4208,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:677: make-vector */
t8=*((C_word*)lf[38]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k6071 in k6068 in a6065 in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6073,2,av);}
/* srfi-69.scm:1132: ##sys#print */
t2=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[115];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6068 in a6065 in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6070,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(2));
/* srfi-69.scm:1131: ##sys#print */
t4=*((C_word*)lf[114]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5176 in hash-table-exists? in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5178(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5178,2,av);}
a=C_alloc(8);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[4],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5193,a[2]=((C_word*)t0)[5],a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(
  f_5193(t4,t3)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5233,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5233(t7,((C_word*)t0)[6],t3);}}

/* string-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +11,c,5)))){
C_save_and_reclaim((void*)f_3237,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+11);
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
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t18=C_i_nullp(t17);
t19=(C_truep(t18)?lf[0]:C_i_car(t17));
t20=t19;
t21=C_i_nullp(t17);
t22=(C_truep(t21)?C_SCHEME_END_OF_LIST:C_i_cdr(t17));
t23=C_i_check_string_2(t2,lf[24]);
t24=C_i_check_exact_2(t6,lf[24]);
t25=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3271,a[2]=t20,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t11)){
t26=(C_truep(t15)?t15:C_block_size(t2));
t27=t26;
t28=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3311,a[2]=t25,a[3]=t2,a[4]=t11,a[5]=t27,tmp=(C_word)a,a+=6,tmp);
t29=C_block_size(t2);
/* srfi-69.scm:360: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t28;
av2[2]=t11;
av2[3]=C_fix(0);
av2[4]=t29;
av2[5]=lf[24];
tp(6,av2);}}
else{
t26=t25;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t26;
av2[1]=t2;
f_3271(2,av2);}}}

/* k4183 in k4180 in k4177 in hash-table-resize! in k2723 in k2718 in k1714 */
static void C_ccall f_4185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4185,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5573 in doloop1196 in doloop1193 in *hash-table-merge! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5574,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in k4934 in k4919 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_fcall f_5002(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5002,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_set_i_slot(((C_word*)t0)[7],C_fix(2),((C_word*)t0)[8]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5032,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t6=C_slot(t4,C_fix(0));
/* srfi-69.scm:833: test */
t7=((C_word*)t0)[10];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* a6065 in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6066(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6066,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6070,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1130: ##sys#print */
t5=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[116];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k6062 in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6064,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6059 in a6052 in k6046 in hash-table-map in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6061,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* hash-table-exists? in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5162(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5162,4,av);}
a=C_alloc(7);
t4=C_i_check_structure_2(t2,lf[37],lf[95]);
t5=C_slot(t2,C_fix(1));
t6=t5;
t7=C_slot(t2,C_fix(3));
t8=t7;
t9=C_slot(t2,C_fix(10));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5178,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t6,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t11=C_block_size(t6);
/* srfi-69.scm:906: hash */
t12=t9;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t10;
av2[2]=t3;
av2[3]=t11;
((C_proc)C_fast_retrieve_proc(t12))(4,av2);}}

/* hash-table-for-each in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6017(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6017,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[37],lf[111]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6024,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1111: ##sys#check-closure */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[111];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k5070 in hash-table-ref/default in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5072(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5072,2,av);}
a=C_alloc(9);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[4],t1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5087,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[7];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(
  f_5087(t4,t3)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5126,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word)li58),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_5126(t7,((C_word*)t0)[7],t3);}}

/* k6010 in hash-table-fold in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6012,2,av);}
/* srfi-69.scm:1107: *hash-table-fold */
f_5939(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3794 in k3770 in k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3796,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3747(t4,((C_word*)t0)[6],t3);}

/* hash-table-fold in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6005(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6005,5,av);}
a=C_alloc(6);
t5=C_i_check_structure_2(t2,lf[37],lf[110]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6012,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:1106: ##sys#check-closure */
t7=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
av2[3]=lf[110];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k5687 in alist->hash-table in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_5689,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5690,a[2]=t2,a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5711,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5713,a[2]=t7,a[3]=t3,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_5713(t9,t5,t4);}

/* alist->hash-table in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_5682,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_i_check_list_2(t2,lf[104]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5689,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[45]+1);
av2[3]=t3;
C_apply(4,av2);}}

/* k6034 in hash-table-walk in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6036,2,av);}
/* srfi-69.scm:1117: *hash-table-for-each */
f_5866(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* hash-table-ref/default in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5056(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5056,5,av);}
a=C_alloc(8);
t5=C_i_check_structure_2(t2,lf[37],lf[94]);
t6=C_slot(t2,C_fix(1));
t7=t6;
t8=C_slot(t2,C_fix(3));
t9=t8;
t10=C_slot(t2,C_fix(10));
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5072,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t7,a[5]=t4,a[6]=t3,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t12=C_block_size(t7);
/* srfi-69.scm:880: hash */
t13=t10;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t11;
av2[2]=t3;
av2[3]=t12;
((C_proc)C_fast_retrieve_proc(t13))(4,av2);}}

/* k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(63,c,5)))){
C_save_and_reclaim((void *)f_5054,2,av);}
a=C_alloc(63);
t2=C_mutate2((C_word*)lf[93]+1 /* (set! hash-table-ref ...) */,t1);
t3=*((C_word*)lf[39]+1);
t4=C_mutate2((C_word*)lf[94]+1 /* (set! hash-table-ref/default ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5056,a[2]=t3,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp));
t5=*((C_word*)lf[39]+1);
t6=C_mutate2((C_word*)lf[95]+1 /* (set! hash-table-exists? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5162,a[2]=t5,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp));
t7=*((C_word*)lf[39]+1);
t8=C_mutate2((C_word*)lf[96]+1 /* (set! hash-table-delete! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5270,a[2]=t7,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate2((C_word*)lf[97]+1 /* (set! hash-table-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5401,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[98]+1 /* (set! hash-table-clear! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5497,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2(&lf[100] /* (set! *hash-table-merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5513,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[101]+1 /* (set! hash-table-merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5581,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[102]+1 /* (set! hash-table-merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5593,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[103]+1 /* (set! hash-table->alist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5609,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[104]+1 /* (set! alist->hash-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5682,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[105]+1 /* (set! hash-table-keys ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5736,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[106]+1 /* (set! hash-table-values ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5801,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2(&lf[107] /* (set! *hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5866,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2(&lf[109] /* (set! *hash-table-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5939,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[110]+1 /* (set! hash-table-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6005,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[111]+1 /* (set! hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6017,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[112]+1 /* (set! hash-table-walk ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6029,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[113]+1 /* (set! hash-table-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6041,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6064,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6066,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:1127: ##sys#register-record-printer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[117]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[117]+1);
av2[1]=t24;
av2[2]=lf[37];
av2[3]=t25;
tp(4,av2);}}

/* g1236 in k5687 in alist->hash-table in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5690(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_5690,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_check_pair_2(t2,lf[104]);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5703,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:1038: *hash-table-update!/default */
t7=lf[89];
f_4598(t7,t1,((C_word*)t0)[2],t4,t5,t6);}

/* g519 in recursive-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_fcall f_3059(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3059,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3083,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
t6=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:290: recursive-hash */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2803(t7,t4,t5,t6,t3);}

/* k2118 in check-keyword in k1714 */
static void C_ccall f_2120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2120,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* srfi-69.scm:194: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[11];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
/* srfi-69.scm:194: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=t2;
av2[4]=lf[11];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}}

/* hash-table-walk in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6029(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6029,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[37],lf[112]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6036,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:1116: ##sys#check-closure */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[112];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k6022 in hash-table-for-each in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_6024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6024,2,av);}
/* srfi-69.scm:1112: *hash-table-for-each */
f_5866(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* loop in k5070 in hash-table-ref/default in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5126(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5126,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5142,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=C_slot(t4,C_fix(0));
/* srfi-69.scm:895: test */
t7=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k3081 in g519 in recursive-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3083(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3083,2,av);}
a=C_alloc(4);
t2=C_fixnum_shift_left(t1,C_fix(16));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3071,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:291: recursive-hash */
t7=((C_word*)((C_word*)t0)[5])[1];
f_2803(t7,t4,t5,t6,((C_word*)t0)[6]);}

/* keyword-hash in k1714 */
static void C_ccall f_2139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_2139,c,av);}
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
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2155,a[2]=t6,a[3]=t2,a[4]=t11,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:207: ##sys#check-keyword */
t15=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=t2;
av2[3]=lf[13];
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}

/* k3584 in k3581 */
static void C_ccall f_3586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3586,2,av);}
t2=C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(C_truep(t2)?C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* srfi-69.scm:442: ##sys#signal-hook */
t4=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[33];
av2[3]=lf[23];
av2[4]=lf[34];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[2];
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}}

/* k3581 */
static void C_ccall f_3583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3583,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3586,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:439: ##sys#check-exact */
t4=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[23];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3069 in k3081 in g519 in recursive-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3071,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fixnum_plus(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop2 in loop in hash-table->alist in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5640(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5640,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1026: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5624(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_slot(t5,C_fix(0));
t7=C_slot(t5,C_fix(1));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,t3);
/* srfi-69.scm:1027: loop2 */
t11=t1;
t12=t4;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}

/* f_3579 in *make-hash-function in k2723 in k2718 in k1714 */
static void C_ccall f_3579(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3579,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3583,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:438: user-function */
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}

/* f_3574 in *make-hash-function in k2723 in k2718 in k1714 */
static void C_ccall f_3574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3574,4,av);}
/* srfi-69.scm:436: user-function */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_fcall f_4337(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_4337,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=C_i_check_structure_2(((C_word*)t0)[2],lf[37],lf[85]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:721: ##sys#check-closure */
t5=*((C_word*)lf[54]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[85];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* f_3569 in *make-hash-function in k2723 in k2718 in k1714 */
static void C_ccall f_3569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3569,4,av);}
/* srfi-69.scm:434: user-function */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t4))(7,av2);}}

/* hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4333(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +12,c,2)))){
C_save_and_reclaim((void*)f_4333,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+12);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4337,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t5))){
t7=C_slot(t2,C_fix(9));
if(C_truep(t7)){
t8=t6;
f_4337(t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4589,a[2]=t3,a[3]=t2,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp);
t9=t6;
f_4337(t9,t8);}}
else{
t7=t6;
f_4337(t7,C_i_car(t5));}}

/* k2779 in loop in vector-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_ccall f_2781(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2781,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:315: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_2747(t6,((C_word*)t0)[7],t3,t4,t5);}

/* k3605 in *make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3607(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3607,2,av);}
a=C_alloc(16);
t2=C_a_i_record(&a,11,lf[37],t1,C_fix(0),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[6],C_SCHEME_FALSE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3617,a[2]=t3,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:454: *make-hash-function */
t5=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5721 in for-each-loop1235 in k5687 in alist->hash-table in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5723,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5713(t3,((C_word*)t0)[4],t2);}

/* *make-hash-table in k2723 in k2718 in k1714 */
static void C_fcall f_3603(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3603,8,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(8);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3607,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=t6,a[6]=t7,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t8))){
/* srfi-69.scm:451: make-vector */
t10=*((C_word*)lf[38]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=t4;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t10=t9;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_i_car(t8);
f_3607(2,av2);}}}

/* hash-table-merge! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5581(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5581,4,av);}
t4=C_i_check_structure_2(t2,lf[37],lf[101]);
t5=C_i_check_structure_2(t3,lf[37],lf[101]);
/* srfi-69.scm:1007: *hash-table-merge! */
f_5513(t1,t2,t3);}

/* hash-table-keys in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5736(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5736,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[37],lf[105]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5751,a[2]=t7,a[3]=t5,a[4]=t9,a[5]=((C_word)li84),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5751(t11,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* k4308 in copy-loop in doloop881 in k4206 in *hash-table-copy in k2723 in k2718 in k1714 */
static void C_ccall f_4310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4310,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +48,c,2)))){
C_save_and_reclaim((void*)f_3628,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+48);
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=*((C_word*)lf[41]+1);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(307);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=lf[46];
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=lf[47];
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3630,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t18=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3706,a[2]=t10,a[3]=t8,a[4]=t1,a[5]=t6,a[6]=t14,a[7]=t16,a[8]=t12,a[9]=t17,a[10]=((C_word*)t0)[7],a[11]=t2,a[12]=t4,tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_nullp(((C_word*)t4)[1]))){
t19=t18;
f_3706(t19,C_SCHEME_UNDEFINED);}
else{
t19=C_i_car(((C_word*)t4)[1]);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3987,a[2]=t18,a[3]=t6,a[4]=t20,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:509: keyword? */
t22=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t22;
av2[1]=t21;
av2[2]=t20;
((C_proc)(void*)(*((C_word*)t22+1)))(3,av2);}}}

/* loop in k5070 in hash-table-ref/default in k5052 in k2723 in k2718 in k1714 */
static C_word C_fcall f_5087(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
return(t2);}
else{
t2=C_slot(t1,C_fix(0));
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[3],t3);
if(C_truep(t4)){
return(C_slot(t2,C_fix(1)));}
else{
t5=C_slot(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}}

/* ##sys#check-keyword in k1714 */
static void C_ccall f_2113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_2113,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2120,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:193: keyword? */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3615 in k3605 in *make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3617,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in vector-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_fcall f_2747(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2747,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t2;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_fixnum_shift_left(t2,C_fix(4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2781,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[2],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t9=C_slot(((C_word*)t0)[3],t3);
t10=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:317: recursive-hash */
t11=((C_word*)((C_word*)t0)[5])[1];
f_2803(t11,t8,t9,t10,((C_word*)t0)[6]);}}

/* hash-table-copy in k2723 in k2718 in k1714 */
static void C_ccall f_4324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4324,3,av);}
t3=C_i_check_structure_2(t2,lf[37],lf[84]);
/* srfi-69.scm:701: *hash-table-copy */
f_4198(t1,t2);}

/* k5030 in loop in k4934 in k4919 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_ccall f_5032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5032,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:835: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_5002(t3,((C_word*)t0)[2],t2);}}

/* k2153 in keyword-hash in k1714 */
static void C_ccall f_2155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2155,2,av);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[13]);
t3=((C_word*)t0)[3];
t4=C_slot(t3,C_fix(1));
t5=C_u_i_string_hash(t4,((C_word*)t0)[4]);
t6=((C_word*)t0)[5];
t7=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t8=C_fixnum_lessp(t5,C_fix(0));
t9=(C_truep(t8)?C_fixnum_negate(t5):t5);
t10=C_fixnum_and(t7,t9);
t11=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_fixnum_modulo(t10,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* vector-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_fcall f_2730(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_2730,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(10);
t7=C_block_size(t2);
t8=C_fixnum_xor(t3,t6);
t9=C_fixnum_plus(t7,t8);
t10=C_i_fixnum_min(*((C_word*)lf[19]+1),t7);
t11=C_i_fixnum_max(t5,t10);
t12=C_fixnum_difference(t11,t5);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2747,a[2]=t14,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=((C_word)li8),tmp=(C_word)a,a+=8,tmp));
t16=((C_word*)t14)[1];
f_2747(t16,t1,t9,t5,t12);}

/* loop in k6102 in k6090 in a6081 in k2723 in k2718 in k1714 */
static void C_fcall f_6161(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6161,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
/* srfi-69.scm:865: def */
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6180,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=C_slot(t4,C_fix(0));
/* srfi-69.scm:867: test */
t7=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* *make-hash-function in k2723 in k2718 in k1714 */
static void C_ccall f_3551(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,4)))){
C_save_and_reclaim((void *)f_3551,3,av);}
a=C_alloc(41);
t3=t2;
t4=C_a_i_list(&a,10,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11]);
if(C_truep(C_u_i_memq(t3,t4))){
t5=C_rnd_fix();
t6=t2;
t7=C_a_i_list2(&a,2,((C_word*)t0)[6],((C_word*)t0)[7]);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=(C_truep(C_u_i_memq(t6,t7))?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3569,a[2]=t2,a[3]=t5,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3574,a[2]=t2,a[3]=t5,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3579,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_4346,2,av);}
a=C_alloc(24);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_fixnum_plus(t2,C_fix(1));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4425,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=t5;
t7=((C_word*)t0)[2];
t8=t4;
t9=C_slot(t7,C_fix(1));
t10=t9;
t11=C_slot(t7,C_fix(5));
t12=C_slot(t7,C_fix(6));
t13=t12;
t14=C_block_size(t10);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4374,a[2]=t6,a[3]=t7,a[4]=t10,a[5]=t15,a[6]=t8,a[7]=t13,tmp=(C_word)a,a+=8,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4418,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
t18=C_a_i_times(&a,2,t15,t11);
/* srfi-69.scm:664: floor */
t19=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t19;
av2[1]=t17;
av2[2]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(3,av2);}}

/* k6102 in k6090 in a6081 in k2723 in k2718 in k1714 */
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6104,2,av);}
a=C_alloc(9);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6119,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word)li103),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6119(t7,((C_word*)t0)[7],t3);}
else{
t3=C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6161,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word)li104),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_6161(t7,((C_word*)t0)[7],t3);}}

/* k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4343,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:722: ##sys#check-closure */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[85];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* loop in hash-table-canonical-length in k2723 in k2718 in k1714 */
static C_word C_fcall f_3527(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_slot(t1,C_fix(0));
t3=C_slot(t1,C_fix(1));
t4=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t4)){
if(C_truep(t4)){
return(t2);}
else{
t6=t3;
t1=t6;
goto loop;}}
else{
if(C_truep(C_i_nullp(t3))){
return(t2);}
else{
t6=t3;
t1=t6;
goto loop;}}}

/* k4438 in k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4440,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_slot(((C_word*)t0)[2],t2);
t4=t3;
t5=C_eqp(((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4454,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t7,a[11]=((C_word)li46),tmp=(C_word)a,a+=12,tmp));
t9=((C_word*)t7)[1];
f_4454(t9,((C_word*)t0)[10],t4);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4517,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t7,a[11]=((C_word*)t0)[4],a[12]=((C_word)li47),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_4517(t9,((C_word*)t0)[10],t4);}}

/* hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4826(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4826,6,av);}
a=C_alloc(7);
t6=C_i_check_structure_2(t2,lf[37],lf[90]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4833,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:800: ##sys#check-closure */
t8=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=t4;
av2[3]=lf[90];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* hash-table-canonical-length in k2723 in k2718 in k1714 */
static void C_fcall f_3521(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3521,3,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3527,a[2]=t3,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(
  f_3527(t4,t2)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* copy-loop in doloop881 in k4206 in *hash-table-copy in k2723 in k2718 in k1714 */
static void C_fcall f_4289(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4289,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=C_a_i_cons(&a,2,t4,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4310,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_slot(t2,C_fix(1));
/* srfi-69.scm:692: copy-loop */
t11=t8;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* k4281 in doloop881 in k4206 in *hash-table-copy in k2723 in k2718 in k1714 */
static void C_ccall f_4283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4283,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4227(t4,((C_word*)t0)[5],t3);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_srfi_2d69_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("srfi_2d69_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_srfi_2d69_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(729))){
C_save(t1);
C_rereclaim2(729*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,124);
lf[1]=C_h_intern(&lf[1],20,"\003sysnumber-hash-hook");
lf[3]=C_h_intern(&lf[3],11,"number-hash");
lf[4]=C_h_intern(&lf[4],15,"\003syssignal-hook");
lf[5]=C_h_intern(&lf[5],5,"\000type");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid number");
lf[7]=C_h_intern(&lf[7],15,"object-uid-hash");
lf[8]=C_h_intern(&lf[8],11,"symbol-hash");
lf[9]=C_h_intern(&lf[9],17,"\003syscheck-keyword");
lf[10]=C_h_intern(&lf[10],11,"\000type-error");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a keyword");
lf[12]=C_h_intern(&lf[12],8,"keyword\077");
lf[13]=C_h_intern(&lf[13],12,"keyword-hash");
lf[14]=C_h_intern(&lf[14],8,"eq\077-hash");
lf[15]=C_h_intern(&lf[15],16,"hash-by-identity");
lf[16]=C_h_intern(&lf[16],9,"eqv\077-hash");
lf[17]=C_h_intern(&lf[17],26,"\052recursive-hash-max-depth\052");
lf[18]=C_h_intern(&lf[18],24,"recursive-hash-max-depth");
lf[19]=C_h_intern(&lf[19],27,"\052recursive-hash-max-length\052");
lf[20]=C_h_intern(&lf[20],25,"recursive-hash-max-length");
lf[21]=C_h_intern(&lf[21],11,"input-port\077");
lf[22]=C_h_intern(&lf[22],11,"equal\077-hash");
lf[23]=C_h_intern(&lf[23],4,"hash");
lf[24]=C_h_intern(&lf[24],11,"string-hash");
lf[25]=C_h_intern(&lf[25],13,"\003syssubstring");
lf[26]=C_h_intern(&lf[26],15,"\003syscheck-range");
lf[27]=C_h_intern(&lf[27],14,"string-ci-hash");
lf[28]=C_h_intern(&lf[28],14,"string-hash-ci");
lf[30]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\0013\376\003\000\000\002\376\377\001\000\000\002i\376\003\000\000\002\376\377\001\000\000\004\325\376\003\000\000\002\376\377\001\000\000\011\255\376\003\000\000\002\376\377\001\000\000\023]\376\003\000\000\002\376\377\001\000\000&\303\376\003\000\000\002\376\377\001"
"\000\000M\215\376\003\000\000\002\376\377\001\000\000\233\035\376\003\000\000\002\376\377\001\000\0016\077\376\003\000\000\002\376\377\001\000\002l\201\376\003\000\000\002\376\377\001\000\004\331\005\376\003\000\000\002\376\377\001\000\011\262\025\376\003\000\000\002\376\377\001\000\023dA\376\003\000\000"
"\002\376\377\001\000&\310\205\376\003\000\000\002\376\377\001\000M\221\037\376\003\000\000\002\376\377\001\000\233\042I\376\003\000\000\002\376\377\001\0016D\277\376\003\000\000\002\376\377\001\002l\211\207\376\003\000\000\002\376\377\001\004\331\023\027\376\003\000\000\002\376\377\001\011\262&1"
"\376\003\000\000\002\376\377\001\023dLq\376\003\000\000\002\376\377\001&\310\230\373\376\003\000\000\002\376\377\001\077\377\377\377\376\377\016");
lf[32]=C_h_intern(&lf[32],19,"\052make-hash-function");
lf[33]=C_h_intern(&lf[33],13,"\000bounds-error");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\030Hash value out of bounds");
lf[35]=C_h_intern(&lf[35],15,"\003syscheck-exact");
lf[37]=C_h_intern(&lf[37],10,"hash-table");
lf[38]=C_h_intern(&lf[38],11,"make-vector");
lf[39]=C_h_intern(&lf[39],3,"eq\077");
lf[40]=C_h_intern(&lf[40],4,"eqv\077");
lf[41]=C_h_intern(&lf[41],6,"equal\077");
lf[42]=C_h_intern(&lf[42],8,"string=\077");
lf[43]=C_h_intern(&lf[43],11,"string-ci=\077");
lf[44]=C_h_intern(&lf[44],1,"=");
lf[45]=C_h_intern(&lf[45],15,"make-hash-table");
lf[46]=C_decode_literal(C_heaptop,"\376U0.5\000");
lf[47]=C_decode_literal(C_heaptop,"\376U0.8000000000000000444089209850062616169452667236328125\000");
lf[48]=C_h_intern(&lf[48],7,"warning");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\033user test without user hash");
lf[50]=C_h_intern(&lf[50],5,"error");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\036min-load greater than max-load");
lf[52]=C_h_intern(&lf[52],3,"fp<");
lf[53]=C_h_intern(&lf[53],5,"\000test");
lf[54]=C_h_intern(&lf[54],17,"\003syscheck-closure");
lf[55]=C_h_intern(&lf[55],5,"\000hash");
lf[56]=C_h_intern(&lf[56],5,"\000size");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid size");
lf[58]=C_h_intern(&lf[58],8,"\000initial");
lf[59]=C_h_intern(&lf[59],9,"\000min-load");
lf[60]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[61]=C_decode_literal(C_heaptop,"\376U1.0\000");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid min-load");
lf[63]=C_h_intern(&lf[63],17,"\003syscheck-inexact");
lf[64]=C_h_intern(&lf[64],9,"\000max-load");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid max-load");
lf[66]=C_h_intern(&lf[66],10,"\000weak-keys");
lf[67]=C_h_intern(&lf[67],12,"\000weak-values");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\017unknown keyword");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\025missing keyword value");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\017missing keyword");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid size");
lf[72]=C_h_intern(&lf[72],11,"hash-table\077");
lf[73]=C_h_intern(&lf[73],15,"hash-table-size");
lf[74]=C_h_intern(&lf[74],31,"hash-table-equivalence-function");
lf[75]=C_h_intern(&lf[75],24,"hash-table-hash-function");
lf[76]=C_h_intern(&lf[76],19,"hash-table-min-load");
lf[77]=C_h_intern(&lf[77],19,"hash-table-max-load");
lf[78]=C_h_intern(&lf[78],20,"hash-table-weak-keys");
lf[79]=C_h_intern(&lf[79],22,"hash-table-weak-values");
lf[80]=C_h_intern(&lf[80],23,"hash-table-has-initial\077");
lf[81]=C_h_intern(&lf[81],18,"hash-table-initial");
lf[82]=C_h_intern(&lf[82],18,"hash-table-resize!");
lf[84]=C_h_intern(&lf[84],15,"hash-table-copy");
lf[85]=C_h_intern(&lf[85],18,"hash-table-update!");
lf[86]=C_h_intern(&lf[86],5,"floor");
lf[87]=C_h_intern(&lf[87],13,"\000access-error");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\037hash-table does not contain key");
lf[90]=C_h_intern(&lf[90],26,"hash-table-update!/default");
lf[91]=C_h_intern(&lf[91],15,"hash-table-set!");
lf[92]=C_h_intern(&lf[92],19,"\003sysundefined-value");
lf[93]=C_h_intern(&lf[93],14,"hash-table-ref");
lf[94]=C_h_intern(&lf[94],22,"hash-table-ref/default");
lf[95]=C_h_intern(&lf[95],18,"hash-table-exists\077");
lf[96]=C_h_intern(&lf[96],18,"hash-table-delete!");
lf[97]=C_h_intern(&lf[97],18,"hash-table-remove!");
lf[98]=C_h_intern(&lf[98],17,"hash-table-clear!");
lf[99]=C_h_intern(&lf[99],12,"vector-fill!");
lf[101]=C_h_intern(&lf[101],17,"hash-table-merge!");
lf[102]=C_h_intern(&lf[102],16,"hash-table-merge");
lf[103]=C_h_intern(&lf[103],17,"hash-table->alist");
lf[104]=C_h_intern(&lf[104],17,"alist->hash-table");
lf[105]=C_h_intern(&lf[105],15,"hash-table-keys");
lf[106]=C_h_intern(&lf[106],17,"hash-table-values");
lf[108]=C_h_intern(&lf[108],8,"for-each");
lf[110]=C_h_intern(&lf[110],15,"hash-table-fold");
lf[111]=C_h_intern(&lf[111],19,"hash-table-for-each");
lf[112]=C_h_intern(&lf[112],15,"hash-table-walk");
lf[113]=C_h_intern(&lf[113],14,"hash-table-map");
lf[114]=C_h_intern(&lf[114],9,"\003sysprint");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\002)>");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\016#<hash-table (");
lf[117]=C_h_intern(&lf[117],27,"\003sysregister-record-printer");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\037hash-table does not contain key");
lf[119]=C_h_intern(&lf[119],18,"getter-with-setter");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\035(hash-table-ref ht key . def)");
lf[121]=C_h_intern(&lf[121],14,"make-parameter");
lf[122]=C_h_intern(&lf[122],17,"register-feature!");
lf[123]=C_h_intern(&lf[123],7,"srfi-69");
C_register_lf2(lf,124,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1716,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:40: register-feature! */
t3=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[123];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4425,2,av);}
a=C_alloc(11);
t2=C_slot(((C_word*)t0)[2],C_fix(10));
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(1));
t6=t5;
t7=C_block_size(t6);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4440,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:729: hash */
t9=t2;{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[4];
av2[3]=t7;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}

/* k4912 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_ccall f_4914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4914,2,av);}
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4870(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4870(t3,t2);}}

/* loop in k5284 in hash-table-delete! in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5353(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_5353,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_slot(t3,C_fix(0));
t5=C_slot(t3,C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5372,a[2]=t2,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
t8=C_slot(t4,C_fix(0));
/* srfi-69.scm:953: test */
t9=((C_word*)t0)[7];{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=t8;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}}

/* k4408 in k4372 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4410,2,av);}
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4385(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4385(t3,t2);}}

/* loop in hash-table-values in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5816(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_5816,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5832,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5832(t8,t1,t4,t3);}}

/* k4416 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4418,2,av);}
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4374(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4374(t3,t2);}}

/* hash-table-clear! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5497(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5497,3,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,lf[37],lf[98]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5504,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(1));
/* srfi-69.scm:989: vector-fill! */
t6=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* eqv?-hash in k1714 */
static void C_ccall f_2643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_2643,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
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
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_check_exact_2(t6,lf[16]);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2691,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(t2,t10);
f_2691(2,av2);}}
else{
if(C_truep(C_charp(t2))){
t15=C_fix(C_character_code(t2));
t16=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_fixnum_xor(t15,t10);
f_2691(2,av2);}}
else{
switch(t2){
case C_SCHEME_TRUE:
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(C_fix(256),t10);
f_2691(2,av2);}
case C_SCHEME_FALSE:
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(C_fix(257),t10);
f_2691(2,av2);}
default:
if(C_truep(C_i_nullp(t2))){
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(C_fix(258),t10);
f_2691(2,av2);}}
else{
if(C_truep(C_eofp(t2))){
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(C_fix(259),t10);
f_2691(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
t15=C_slot(t2,C_fix(1));
t16=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_u_i_string_hash(t15,t10);
f_2691(2,av2);}}
else{
if(C_truep(C_i_numberp(t2))){
t15=t14;
if(C_truep(C_i_flonump(t2))){
t16=C_subbyte(t2,C_fix(7));
t17=C_subbyte(t2,C_fix(6));
t18=C_subbyte(t2,C_fix(5));
t19=C_subbyte(t2,C_fix(4));
t20=C_subbyte(t2,C_fix(3));
t21=C_subbyte(t2,C_fix(2));
t22=C_subbyte(t2,C_fix(1));
t23=C_subbyte(t2,C_fix(0));
t24=C_fixnum_shift_left(t23,C_fix(1));
t25=C_fixnum_plus(t22,t24);
t26=C_fixnum_shift_left(t25,C_fix(1));
t27=C_fixnum_plus(t21,t26);
t28=C_fixnum_shift_left(t27,C_fix(1));
t29=C_fixnum_plus(t20,t28);
t30=C_fixnum_shift_left(t29,C_fix(1));
t31=C_fixnum_plus(t19,t30);
t32=C_fixnum_shift_left(t31,C_fix(1));
t33=C_fixnum_plus(t18,t32);
t34=C_fixnum_shift_left(t33,C_fix(1));
t35=C_fixnum_plus(t17,t34);
t36=C_fixnum_shift_left(t35,C_fix(1));
t37=C_fixnum_plus(t16,t36);
t38=t15;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t38;
av2[1]=C_fixnum_times(C_fix(331804471),t37);
((C_proc)(void*)(*((C_word*)t38+1)))(2,av2);}}
else{
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2615,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:148: ##sys#number-hash-hook */
t17=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t17;
av2[1]=t16;
av2[2]=t2;
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}}
else{
if(C_truep(C_blockp(t2))){
/* srfi-69.scm:168: *equal?-hash */
f_2727(t14,t2,t10);}
else{
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(C_fix(262),t10);
f_2691(2,av2);}}}}}}}}}}

/* k4904 in k4868 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_ccall f_4906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4906,2,av);}
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4881(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4881(t3,t2);}}

/* k1997 in object-uid-hash in k1714 */
static void C_ccall f_1999(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1999,2,av);}
t2=((C_word*)t0)[2];
t3=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t4=C_fixnum_lessp(t1,C_fix(0));
t5=(C_truep(t4)?C_fixnum_negate(t1):t1);
t6=C_fixnum_and(t3,t5);
t7=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_fixnum_modulo(t6,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* hash-table-values in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5801(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5801,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[37],lf[106]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5816,a[2]=t7,a[3]=t5,a[4]=t9,a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5816(t11,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* symbol-hash in k1714 */
static void C_ccall f_2025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_2025,c,av);}
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
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?lf[0]:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_check_symbol_2(t2,lf[8]);
t13=C_i_check_exact_2(t5,lf[8]);
t14=t2;
t15=C_slot(t14,C_fix(1));
t16=C_u_i_string_hash(t15,t9);
t17=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t18=C_fixnum_lessp(t16,C_fix(0));
t19=(C_truep(t18)?C_fixnum_negate(t16):t16);
t20=C_fixnum_and(t17,t19);
t21=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t21;
av2[1]=C_fixnum_modulo(t20,t5);
((C_proc)(void*)(*((C_word*)t21+1)))(2,av2);}}

/* loop in hash-table->alist in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5624(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_5624,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5640,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word)li76),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5640(t8,t1,t4,t3);}}

/* ##sys#number-hash-hook in k1714 */
static void C_ccall f_1719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1719,4,av);}
/* srfi-69.scm:144: *equal?-hash */
f_2727(t1,t2,t3);}

/* k4691 in k4676 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4693,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_slot(((C_word*)t0)[2],t2);
t4=t3;
t5=C_eqp(((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4707,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t7,a[11]=((C_word)li50),tmp=(C_word)a,a+=12,tmp));
t9=((C_word*)t7)[1];
f_4707(t9,((C_word*)t0)[10],t4);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4766,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t7,a[11]=((C_word*)t0)[4],a[12]=((C_word)li51),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_4766(t9,((C_word*)t0)[10],t4);}}

/* k1714 */
static void C_ccall f_1716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,4)))){
C_save_and_reclaim((void *)f_1716,2,av);}
a=C_alloc(30);
t2=C_mutate2(&lf[0] /* (set! hash-default-randomization ...) */,C_rnd_fix());
t3=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#number-hash-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1719,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[3]+1 /* (set! number-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1725,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[7]+1 /* (set! object-uid-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1946,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[8]+1 /* (set! symbol-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2025,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[9]+1 /* (set! ##sys#check-keyword ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2113,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[13]+1 /* (set! keyword-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2139,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! eq?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2331,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[15]+1 /* (set! hash-by-identity ...) */,*((C_word*)lf[14]+1));
t11=C_mutate2((C_word*)lf[16]+1 /* (set! eqv?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2643,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(lf[17] /* *recursive-hash-max-depth* */,0,C_fix(4));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6225,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:270: make-parameter */
t15=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=C_fix(4);
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}

/* loop in k6102 in k6090 in a6081 in k2723 in k2718 in k1714 */
static void C_fcall f_6119(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_6119,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* srfi-69.scm:857: def */
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(t3,C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:861: loop */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* k4462 in loop in k4438 in k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4464(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4464,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* number-hash in k1714 */
static void C_ccall f_1725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,5)))){
C_save_and_reclaim((void*)f_1725,c,av);}
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
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1741,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_numberp(t2))){
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_SCHEME_UNDEFINED;
f_1741(2,av2);}}
else{
/* srfi-69.scm:157: ##sys#signal-hook */
t15=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[5];
av2[3]=lf[3];
av2[4]=lf[6];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t15+1)))(6,av2);}}}

/* k3716 in k3713 in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3718,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:575: hash-table-canonical-length */
f_3521(t2,lf[29],((C_word*)((C_word*)t0)[2])[1]);}

/* k4669 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4671,2,av);}
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4627(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4627(t3,t2);}}

/* loop in k4438 in k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_fcall f_4454(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_4454,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4482,a[2]=((C_word*)t0)[8],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:735: thunk */
t5=((C_word*)t0)[9];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_slot(t4,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4494,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_slot(t4,C_fix(1));
/* srfi-69.scm:741: func */
t9=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)C_fast_retrieve_proc(t9))(3,av2);}}
else{
t7=C_slot(t2,C_fix(1));
/* srfi-69.scm:744: loop */
t10=t1;
t11=t7;
t1=t10;
t2=t11;
goto loop;}}}

/* k4676 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4678,2,av);}
a=C_alloc(11);
t2=C_slot(((C_word*)t0)[2],C_fix(10));
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(1));
t6=t5;
t7=C_block_size(t6);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4693,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm:768: hash */
t9=t2;{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[4];
av2[3]=t7;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}

/* k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_fcall f_3709(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_3709,2,t0,t1);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[12])[1]))){
t3=t2;
f_3712(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_i_car(((C_word*)((C_word*)t0)[12])[1]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3935,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:521: keyword? */
t6=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_fcall f_3706(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_3706,2,t0,t1);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[12])[1]))){
t3=t2;
f_3709(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_i_car(((C_word*)((C_word*)t0)[12])[1]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3967,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:515: keyword? */
t6=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k3453 in k3450 in string-ci-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3455,2,av);}
/* srfi-69.scm:374: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}

/* loop in k5284 in hash-table-delete! in k5052 in k2723 in k2718 in k1714 */
static C_word C_fcall f_5306(C_word t0,C_word t1,C_word t2){
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
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
t5=C_slot(t3,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(C_truep(t1)?C_i_setslot(t1,C_fix(1),t4):C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t4));
t8=C_i_set_i_slot(((C_word*)t0)[5],C_fix(2),((C_word*)t0)[6]);
return(C_SCHEME_TRUE);}
else{
t10=t2;
t11=t4;
t1=t10;
t2=t11;
goto loop;}}}

/* k4661 in k4625 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4663,2,av);}
if(C_truep(C_immp(t1))){
t2=((C_word*)t0)[2];
f_4638(t2,t1);}
else{
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
f_4638(t3,t2);}}

/* k3450 in string-ci-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_3452,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* srfi-69.scm:373: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=t3;
av2[5]=lf[24];
tp(6,av2);}}

/* k2613 in eqv?-hash in k1714 */
static void C_ccall f_2615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2615,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* object-uid-hash in k1714 */
static void C_ccall f_1946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_1946,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
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
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_check_exact_2(t6,lf[7]);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1999,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:168: *equal?-hash */
f_2727(t14,t2,t10);}

/* hash-table-size in k2723 in k2718 in k1714 */
static void C_ccall f_4003(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4003,3,av);}
t3=C_i_check_structure_2(t2,lf[37],lf[73]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4642 in k4636 in k4625 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_fcall f_4644(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_4644,2,t0,t1);}
if(C_truep(t1)){
/* srfi-69.scm:668: hash-table-resize! */
t2=*((C_word*)lf[82]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* hash-table-min-load in k2723 in k2718 in k1714 */
static void C_ccall f_4030(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4030,3,av);}
t3=C_i_check_structure_2(t2,lf[37],lf[76]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(5));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4492 in loop in k4438 in k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4494,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* hash-table-max-load in k2723 in k2718 in k1714 */
static void C_ccall f_4039(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4039,3,av);}
t3=C_i_check_structure_2(t2,lf[37],lf[77]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(6));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3410 in string-ci-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3412(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3412,2,av);}
t2=C_u_i_string_ci_hash(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=C_fixnum_lessp(t2,C_fix(0));
t6=(C_truep(t5)?C_fixnum_negate(t2):t2);
t7=C_fixnum_and(t4,t6);
t8=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_fixnum_modulo(t7,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* hash-table-has-initial? in k2723 in k2718 in k1714 */
static void C_ccall f_4066(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4066,3,av);}
t3=C_i_check_structure_2(t2,lf[37],lf[80]);
t4=C_slot(t2,C_fix(9));
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(C_truep(t4)?C_SCHEME_TRUE:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* hash-table-equivalence-function in k2723 in k2718 in k1714 */
static void C_ccall f_4012(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4012,3,av);}
t3=C_i_check_structure_2(t2,lf[37],lf[74]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5370 in loop in k5284 in hash-table-delete! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5372,2,av);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]):C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3]));
t3=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t4=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* srfi-69.scm:960: loop */
t2=((C_word*)((C_word*)t0)[9])[1];
f_5353(t2,((C_word*)t0)[8],((C_word*)t0)[10],((C_word*)t0)[3]);}}

/* k3988 in k3985 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3990(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3990,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[5];
f_3706(t5,t4);}

/* hash-table? in k2723 in k2718 in k1714 */
static void C_ccall f_3997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3997,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[37]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6090 in a6081 in k2723 in k2718 in k1714 */
static void C_ccall f_6092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6092,2,av);}
a=C_alloc(8);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=C_slot(((C_word*)t0)[2],C_fix(3));
t5=t4;
t6=C_slot(((C_word*)t0)[2],C_fix(10));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6104,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_block_size(t3);
/* srfi-69.scm:852: hash */
t9=t6;{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
av2[3]=t8;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}

/* hash-table-weak-keys in k2723 in k2718 in k1714 */
static void C_ccall f_4048(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4048,3,av);}
t3=C_i_check_structure_2(t2,lf[37],lf[78]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(7));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3939 in k3933 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3941(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3941,2,av);}
t2=C_i_fixnum_min(C_fix(1073741823),((C_word*)t0)[2]);
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t4);
t6=((C_word*)t0)[5];
f_3712(t6,t5);}

/* a6081 in k2723 in k2718 in k1714 */
static void C_ccall f_6082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +12,c,3)))){
C_save_and_reclaim((void*)f_6082,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+12);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6202,a[2]=t3,a[3]=t2,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp):C_i_car(t4));
t7=t6;
t8=C_i_check_structure_2(t2,lf[37],lf[93]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6092,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t7,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:848: ##sys#check-closure */
t10=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=t7;
av2[3]=lf[93];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* hash-table-initial in k2723 in k2718 in k1714 */
static void C_ccall f_4078(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4078,3,av);}
t3=C_i_check_structure_2(t2,lf[37],lf[81]);
t4=C_slot(t2,C_fix(9));
if(C_truep(t4)){
/* srfi-69.scm:630: thunk */
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}
else{
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3968 in k3965 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3970(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3970,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[5];
f_3709(t5,t4);}

/* k1906 in k1739 in number-hash in k1714 */
static void C_ccall f_1908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1908,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2689 in eqv?-hash in k1714 */
static void C_ccall f_2691(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2691,2,av);}
t2=((C_word*)t0)[2];
t3=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t4=C_fixnum_lessp(t1,C_fix(0));
t5=(C_truep(t4)?C_fixnum_negate(t1):t1);
t6=C_fixnum_and(t3,t5);
t7=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_fixnum_modulo(t6,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* hash-table-weak-values in k2723 in k2718 in k1714 */
static void C_ccall f_4057(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4057,3,av);}
t3=C_i_check_structure_2(t2,lf[37],lf[79]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(8));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1912 in k1739 in number-hash in k1714 */
static void C_ccall f_1914(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1914,2,av);}
t2=((C_word*)t0)[2];
t3=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t4=C_fixnum_lessp(t1,C_fix(0));
t5=(C_truep(t4)?C_fixnum_negate(t1):t1);
t6=C_fixnum_and(t3,t5);
t7=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_fixnum_modulo(t6,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* for-each-loop1235 in k5687 in alist->hash-table in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5713(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5713,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5723,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-69.scm:1034: g1236 */
t5=((C_word*)t0)[3];
f_5690(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5709 in k5687 in alist->hash-table in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5711,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4383 in k4372 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_fcall f_4385(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4385,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[7]);
t4=t2;
f_4391(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[7],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4391(t3,C_SCHEME_FALSE);}}

/* *hash-table-fold in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5939(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_5939,4,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_slot(t2,C_fix(1));
t6=t5;
t7=C_block_size(t6);
t8=t7;
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5951,a[2]=t8,a[3]=t6,a[4]=t10,a[5]=t3,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_5951(t12,t1,C_fix(0),t4);}

/* k3933 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3935,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3712(t3,t2);}
else{
t2=C_i_check_exact_2(((C_word*)t0)[3],lf[45]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)t0)[3]))){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3941(2,av2);}}
else{
/* srfi-69.scm:524: error */
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[45];
av2[3]=lf[71];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}}

/* a5702 in g1236 in k5687 in alist->hash-table in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5703,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4480 in loop in k4438 in k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4482,2,av);}
/* srfi-69.scm:735: func */
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

/* k3965 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3967,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3709(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:516: ##sys#check-closure */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[45];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* loop in k5176 in hash-table-exists? in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5233(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5233,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5246,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t3,C_fix(0));
/* srfi-69.scm:918: test */
t6=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k5993 in fold2 in loop in *hash-table-fold in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5995,2,av);}
/* srfi-69.scm:1101: fold2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5967(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in k4934 in k4919 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_fcall f_4953(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4953,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_set_i_slot(((C_word*)t0)[7],C_fix(2),((C_word*)t0)[8]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_setslot(t3,C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_slot(t2,C_fix(1));
/* srfi-69.scm:825: loop */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* fold2 in loop in *hash-table-fold in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5967(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_5967,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:1099: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5951(t5,t1,t4,t3);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5995,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_slot(t4,C_fix(0));
t9=C_slot(t4,C_fix(1));
/* srfi-69.scm:1102: func */
t10=((C_word*)t0)[5];{
C_word av2[5];
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=t3;
((C_proc)C_fast_retrieve_proc(t10))(5,av2);}}}

/* k4940 in k4934 in k4919 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_ccall f_4942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4942,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[92]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4389 in k4383 in k4372 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_fcall f_4391(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_4391,2,t0,t1);}
if(C_truep(t1)){
/* srfi-69.scm:668: hash-table-resize! */
t2=*((C_word*)lf[82]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* hash-table-hash-function in k2723 in k2718 in k1714 */
static void C_ccall f_4021(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4021,3,av);}
t3=C_i_check_structure_2(t2,lf[37],lf[75]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(4));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4372 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_fcall f_4374(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_4374,2,t0,t1);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4410,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_times(&a,2,((C_word*)t0)[5],((C_word*)t0)[7]);
/* srfi-69.scm:665: floor */
t6=*((C_word*)lf[86]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4919 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_ccall f_4921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4921,2,av);}
a=C_alloc(10);
t2=C_slot(((C_word*)t0)[2],C_fix(10));
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(1));
t6=t5;
t7=C_block_size(t6);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4936,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:813: hash */
t9=t2;{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[5];
av2[3]=t7;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}

/* k4934 in k4919 in hash-table-set! in k2723 in k2718 in k1714 */
static void C_ccall f_4936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_4936,2,av);}
a=C_alloc(17);
t2=t1;
t3=C_slot(((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4942,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t8,a[10]=((C_word)li54),tmp=(C_word)a,a+=11,tmp));
t10=((C_word*)t8)[1];
f_4953(t10,t5,t4);}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5002,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t8,a[10]=((C_word*)t0)[5],a[11]=((C_word)li55),tmp=(C_word)a,a+=12,tmp));
t10=((C_word*)t8)[1];
f_5002(t10,t5,t4);}}

/* k4525 in loop in k4438 in k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4527(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4527,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3985 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3987,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3706(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3990,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm:510: ##sys#check-closure */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[45];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* string-ci-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +11,c,5)))){
C_save_and_reclaim((void*)f_3378,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+11);
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
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_nullp(t13);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_i_car(t13));
t16=C_i_nullp(t13);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t13));
t18=C_i_nullp(t17);
t19=(C_truep(t18)?lf[0]:C_i_car(t17));
t20=t19;
t21=C_i_nullp(t17);
t22=(C_truep(t21)?C_SCHEME_END_OF_LIST:C_i_cdr(t17));
t23=C_i_check_string_2(t2,lf[27]);
t24=C_i_check_exact_2(t6,lf[27]);
t25=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3412,a[2]=t20,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t11)){
t26=(C_truep(t15)?t15:C_block_size(t2));
t27=t26;
t28=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3452,a[2]=t25,a[3]=t2,a[4]=t11,a[5]=t27,tmp=(C_word)a,a+=6,tmp);
t29=C_block_size(t2);
/* srfi-69.scm:372: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t28;
av2[2]=t11;
av2[3]=C_fix(0);
av2[4]=t29;
av2[5]=lf[24];
tp(6,av2);}}
else{
t26=t25;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t26;
av2[1]=t2;
f_3412(2,av2);}}}

/* loop in k4438 in k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_fcall f_4517(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_4517,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4545,a[2]=((C_word*)t0)[8],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:748: thunk */
t5=((C_word*)t0)[9];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4554,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=t2,a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t6=C_slot(t4,C_fix(0));
/* srfi-69.scm:753: test */
t7=((C_word*)t0)[11];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k4636 in k4625 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_fcall f_4638(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4638,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(1073741823)))){
t3=C_fixnum_less_or_equal_p(((C_word*)t0)[6],((C_word*)t0)[7]);
t4=t2;
f_4644(t4,(C_truep(t3)?C_fixnum_less_or_equal_p(((C_word*)t0)[7],t1):C_SCHEME_FALSE));}
else{
t3=t2;
f_4644(t3,C_SCHEME_FALSE);}}

/* k5284 in hash-table-delete! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5286,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=t3;
t5=C_slot(((C_word*)t0)[2],C_fix(2));
t6=C_fixnum_difference(t5,C_fix(1));
t7=t6;
t8=C_slot(((C_word*)t0)[3],t2);
t9=C_eqp(((C_word*)t0)[4],t4);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5306,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t7,a[7]=((C_word)li63),tmp=(C_word)a,a+=8,tmp);
t11=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=(
  f_5306(t10,C_SCHEME_FALSE,t8)
);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5353,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t11,a[7]=t4,a[8]=((C_word*)t0)[5],a[9]=((C_word)li64),tmp=(C_word)a,a+=10,tmp));
t13=((C_word*)t11)[1];
f_5353(t13,((C_word*)t0)[6],C_SCHEME_FALSE,t8);}}

/* k3838 in k3835 in k3770 in k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3840,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3747(t4,((C_word*)t0)[6],t3);}

/* k4625 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_fcall f_4627(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_4627,2,t0,t1);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4663,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_times(&a,2,((C_word*)t0)[5],((C_word*)t0)[7]);
/* srfi-69.scm:665: floor */
t6=*((C_word*)lf[86]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* eq?-hash in k1714 */
static void C_ccall f_2331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_2331,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?lf[0]:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_check_exact_2(t6,lf[14]);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2379,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(t2,t10);
f_2379(2,av2);}}
else{
if(C_truep(C_charp(t2))){
t15=C_fix(C_character_code(t2));
t16=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_fixnum_xor(t15,t10);
f_2379(2,av2);}}
else{
switch(t2){
case C_SCHEME_TRUE:
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(C_fix(256),t10);
f_2379(2,av2);}
case C_SCHEME_FALSE:
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(C_fix(257),t10);
f_2379(2,av2);}
default:
if(C_truep(C_i_nullp(t2))){
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(C_fix(258),t10);
f_2379(2,av2);}}
else{
if(C_truep(C_eofp(t2))){
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(C_fix(259),t10);
f_2379(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
t15=C_slot(t2,C_fix(1));
t16=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_u_i_string_hash(t15,t10);
f_2379(2,av2);}}
else{
if(C_truep(C_blockp(t2))){
/* srfi-69.scm:168: *equal?-hash */
f_2727(t14,t2,t10);}
else{
t15=t14;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_fixnum_xor(C_fix(262),t10);
f_2379(2,av2);}}}}}}}}}

/* k4797 in loop in k4691 in k4676 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4799,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:793: func */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:796: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4766(t3,((C_word*)t0)[3],t2);}}

/* k3835 in k3770 in k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3837,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_truep(C_flonum_lessp(lf[60],((C_word*)t0)[3]))?C_flonum_lessp(((C_word*)t0)[3],lf[61]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t5=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3747(t6,((C_word*)t0)[6],t5);}
else{
/* srfi-69.scm:556: error */
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[45];
av2[3]=lf[62];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k4552 in loop in k4438 in k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4554,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* srfi-69.scm:754: func */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:757: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4517(t3,((C_word*)t0)[3],t2);}}

/* k2723 in k2718 in k1714 */
static void C_ccall f_2725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(107,c,9)))){
C_save_and_reclaim((void *)f_2725,2,av);}
a=C_alloc(107);
t2=C_mutate2((C_word*)lf[20]+1 /* (set! recursive-hash-max-length ...) */,t1);
t3=C_mutate2(&lf[2] /* (set! *equal?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[22]+1 /* (set! equal?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3162,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[23]+1 /* (set! hash ...) */,*((C_word*)lf[22]+1));
t6=C_mutate2((C_word*)lf[24]+1 /* (set! string-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[27]+1 /* (set! string-ci-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3378,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[28]+1 /* (set! string-hash-ci ...) */,*((C_word*)lf[27]+1));
t9=C_mutate2(&lf[29] /* (set! constant667 ...) */,lf[30]);
t10=C_mutate2(&lf[31] /* (set! hash-table-canonical-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3521,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[14]+1);
t12=*((C_word*)lf[16]+1);
t13=*((C_word*)lf[22]+1);
t14=*((C_word*)lf[23]+1);
t15=*((C_word*)lf[24]+1);
t16=*((C_word*)lf[28]+1);
t17=*((C_word*)lf[3]+1);
t18=*((C_word*)lf[7]+1);
t19=*((C_word*)lf[8]+1);
t20=*((C_word*)lf[13]+1);
t21=C_mutate2((C_word*)lf[32]+1 /* (set! *make-hash-function ...) */,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3551,a[2]=t11,a[3]=t12,a[4]=t13,a[5]=t14,a[6]=t15,a[7]=t16,a[8]=t17,a[9]=t18,a[10]=t19,a[11]=t20,a[12]=((C_word)li23),tmp=(C_word)a,a+=13,tmp));
t22=C_mutate2(&lf[36] /* (set! *make-hash-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3603,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t23=*((C_word*)lf[39]+1);
t24=*((C_word*)lf[40]+1);
t25=*((C_word*)lf[41]+1);
t26=*((C_word*)lf[42]+1);
t27=*((C_word*)lf[43]+1);
t28=*((C_word*)lf[44]+1);
t29=*((C_word*)lf[14]+1);
t30=*((C_word*)lf[16]+1);
t31=*((C_word*)lf[22]+1);
t32=*((C_word*)lf[23]+1);
t33=*((C_word*)lf[24]+1);
t34=*((C_word*)lf[28]+1);
t35=*((C_word*)lf[3]+1);
t36=C_mutate2((C_word*)lf[45]+1 /* (set! make-hash-table ...) */,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3628,a[2]=t23,a[3]=t29,a[4]=t24,a[5]=t30,a[6]=t25,a[7]=t31,a[8]=t26,a[9]=t33,a[10]=t27,a[11]=t34,a[12]=t28,a[13]=t35,a[14]=((C_word)li28),tmp=(C_word)a,a+=15,tmp));
t37=C_mutate2((C_word*)lf[72]+1 /* (set! hash-table? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3997,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[73]+1 /* (set! hash-table-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4003,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[74]+1 /* (set! hash-table-equivalence-function ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4012,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[75]+1 /* (set! hash-table-hash-function ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4021,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[76]+1 /* (set! hash-table-min-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4030,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[77]+1 /* (set! hash-table-max-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4039,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2((C_word*)lf[78]+1 /* (set! hash-table-weak-keys ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4048,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[79]+1 /* (set! hash-table-weak-values ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4057,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[80]+1 /* (set! hash-table-has-initial? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4066,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2((C_word*)lf[81]+1 /* (set! hash-table-initial ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4078,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[82]+1 /* (set! hash-table-resize! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4172,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2(&lf[83] /* (set! *hash-table-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4198,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[84]+1 /* (set! hash-table-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4324,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t50=*((C_word*)lf[39]+1);
t51=C_mutate2((C_word*)lf[85]+1 /* (set! hash-table-update! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4333,a[2]=t50,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp));
t52=*((C_word*)lf[39]+1);
t53=C_mutate2(&lf[89] /* (set! *hash-table-update!/default ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4598,a[2]=t52,a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp));
t54=C_mutate2((C_word*)lf[90]+1 /* (set! hash-table-update!/default ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4826,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t55=*((C_word*)lf[39]+1);
t56=C_mutate2((C_word*)lf[91]+1 /* (set! hash-table-set! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4838,a[2]=t55,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5054,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t58=*((C_word*)lf[39]+1);
t59=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6082,a[2]=t58,a[3]=((C_word)li105),tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm:841: getter-with-setter */
t60=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t60;
av2[1]=t57;
av2[2]=t59;
av2[3]=*((C_word*)lf[91]+1);
av2[4]=lf[120];
((C_proc)(void*)(*((C_word*)t60+1)))(5,av2);}}

/* *equal?-hash in k2723 in k2718 in k1714 */
static void C_fcall f_2727(C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,7)))){
C_save_and_reclaim_args((void *)trf_2727,3,t1,t2,t3);}
a=C_alloc(13);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2730,a[2]=t7,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2803,a[2]=t7,a[3]=t5,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp));
/* srfi-69.scm:343: recursive-hash */
t10=((C_word*)t7)[1];
f_2803(t10,t1,t2,C_fix(0),t3);}

/* k3858 in k3770 in k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3860(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3860,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_truep(C_flonum_lessp(lf[60],((C_word*)t0)[3]))?C_flonum_lessp(((C_word*)t0)[3],lf[61]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t5=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3747(t6,((C_word*)t0)[6],t5);}
else{
/* srfi-69.scm:561: error */
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[45];
av2[3]=lf[65];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k2718 in k1714 */
static void C_ccall f_2720(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2720,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[18]+1 /* (set! recursive-hash-max-depth ...) */,t1);
t3=C_set_block_item(lf[19] /* *recursive-hash-max-length* */,0,C_fix(4));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2725,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6211,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm:279: make-parameter */
t6=*((C_word*)lf[121]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_fix(4);
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3861 in k3858 in k3770 in k3766 in loop in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3863,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm:569: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3747(t4,((C_word*)t0)[6],t3);}

/* k4543 in loop in k4438 in k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4545,2,av);}
/* srfi-69.scm:748: func */
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

/* k4555 in k4552 in loop in k4438 in k4423 in k4344 in k4341 in k4335 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4557,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4774 in loop in k4691 in k4676 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4776(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4776,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3019 in recursive-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3021,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k4691 in k4676 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_fcall f_4766(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4766,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:787: func */
t4=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4799,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=t2,a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t6=C_slot(t4,C_fix(0));
/* srfi-69.scm:792: test */
t7=((C_word*)t0)[11];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k5244 in loop in k5176 in hash-table-exists? in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5246,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm:919: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5233(t3,((C_word*)t0)[2],t2);}}

/* k4113 in doloop854 in k4180 in k4177 in hash-table-resize! in k2723 in k2718 in k1714 */
static void C_ccall f_4115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4115,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4105(t3,((C_word*)t0)[4],t2);}

/* loop in doloop854 in k4180 in k4177 in hash-table-resize! in k2723 in k2718 in k1714 */
static void C_fcall f_4128(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_4128,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_slot(t4,C_fix(0));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4144,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm:643: hash */
t8=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}}

/* doloop854 in k4180 in k4177 in hash-table-resize! in k2723 in k2718 in k1714 */
static void C_fcall f_4105(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_4105,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4115,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4128,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_4128(t8,t3,t4);}}

/* k4741 in loop in k4691 in k4676 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4743,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* hash-table-delete! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5270(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5270,4,av);}
a=C_alloc(7);
t4=C_i_check_structure_2(t2,lf[37],lf[96]);
t5=C_slot(t2,C_fix(1));
t6=t5;
t7=C_block_size(t6);
t8=C_slot(t2,C_fix(10));
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5286,a[2]=t2,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm:930: hash */
t10=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
av2[3]=t7;
((C_proc)C_fast_retrieve_proc(t10))(4,av2);}}

/* *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_fcall f_4598(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word t22;
C_word t23;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_4598,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(24);
t6=C_slot(t2,C_fix(2));
t7=C_fixnum_plus(t6,C_fix(1));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4678,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t8,a[6]=t4,a[7]=t5,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t10=t9;
t11=t2;
t12=t8;
t13=C_slot(t11,C_fix(1));
t14=t13;
t15=C_slot(t11,C_fix(5));
t16=C_slot(t11,C_fix(6));
t17=t16;
t18=C_block_size(t14);
t19=t18;
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4627,a[2]=t10,a[3]=t11,a[4]=t14,a[5]=t19,a[6]=t12,a[7]=t17,tmp=(C_word)a,a+=8,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4671,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
t22=C_a_i_times(&a,2,t19,t15);
/* srfi-69.scm:664: floor */
t23=*((C_word*)lf[86]+1);{
C_word av2[3];
av2[0]=t23;
av2[1]=t21;
av2[2]=t22;
((C_proc)(void*)(*((C_word*)t23+1)))(3,av2);}}

/* hash-table-resize! in k2723 in k2718 in k1714 */
static void C_ccall f_4172(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4172,5,av);}
a=C_alloc(5);
t5=C_fixnum_times(t4,C_fix(2));
t6=C_i_fixnum_min(C_fix(1073741823),t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4179,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:652: hash-table-canonical-length */
f_3521(t7,lf[29],t6);}

/* k4177 in hash-table-resize! in k2723 in k2718 in k1714 */
static void C_ccall f_4179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4179,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:653: make-vector */
t3=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4715 in loop in k4691 in k4676 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_ccall f_4717(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4717,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[7]);
t6=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* doloop1288 in *hash-table-for-each in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5878(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_5878,3,t0,t1,t2);}
a=C_alloc(16);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5886,a[2]=((C_word*)t0)[3],a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[108]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5907,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5916,a[2]=t8,a[3]=t3,a[4]=((C_word)li90),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_5916(t10,t6,t4);}}

/* k6178 in loop in k6102 in k6090 in a6081 in k2723 in k2718 in k1714 */
static void C_ccall f_6180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6180,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm:869: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6161(t3,((C_word*)t0)[2],t2);}}

/* loop in k4691 in k4676 in *hash-table-update!/default in k2723 in k2718 in k1714 */
static void C_fcall f_4707(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4707,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm:774: func */
t4=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_slot(t4,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4743,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_slot(t4,C_fix(1));
/* srfi-69.scm:780: func */
t9=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)C_fast_retrieve_proc(t9))(3,av2);}}
else{
t7=C_slot(t2,C_fix(1));
/* srfi-69.scm:783: loop */
t10=t1;
t11=t7;
t1=t10;
t2=t11;
goto loop;}}}

/* g1294 in doloop1288 in *hash-table-for-each in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5886(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_5886,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* srfi-69.scm:1087: proc */
t5=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}

/* k4142 in loop in doloop854 in k4180 in k4177 in hash-table-resize! in k2723 in k2718 in k1714 */
static void C_ccall f_4144(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4144,2,av);}
a=C_alloc(6);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_slot(((C_word*)t0)[4],t1);
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_i_setslot(((C_word*)t0)[4],t1,t5);
t7=C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm:646: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_4128(t8,((C_word*)t0)[7],t7);}

/* k3269 in string-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3271(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3271,2,av);}
t2=C_u_i_string_hash(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t5=C_fixnum_lessp(t2,C_fix(0));
t6=(C_truep(t5)?C_fixnum_negate(t2):t2);
t7=C_fixnum_and(t4,t6);
t8=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_fixnum_modulo(t7,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* hash-table->alist in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5609(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5609,3,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[37],lf[103]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5624,a[2]=t7,a[3]=t5,a[4]=t9,a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5624(t11,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* k5605 in hash-table-merge in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5607,2,av);}
/* srfi-69.scm:1012: *hash-table-merge! */
f_5513(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2377 in eq?-hash in k1714 */
static void C_ccall f_2379(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2379,2,av);}
t2=((C_word*)t0)[2];
t3=C_fix((C_word)C_MOST_POSITIVE_32_BIT_FIXNUM);
t4=C_fixnum_lessp(t1,C_fix(0));
t5=(C_truep(t4)?C_fixnum_negate(t1):t1);
t6=C_fixnum_and(t3,t5);
t7=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_fixnum_modulo(t6,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* *hash-table-for-each in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5866(C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5866,3,t1,t2,t3);}
a=C_alloc(9);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5878,a[2]=t7,a[3]=t3,a[4]=t5,a[5]=t9,a[6]=((C_word)li91),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_5878(t11,t1,C_fix(0));}

/* k3312 in k3309 in string-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3314,2,av);}
/* srfi-69.scm:362: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}

/* k3116 in recursive-hash in *equal?-hash in k2723 in k2718 in k1714 */
static void C_ccall f_3118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3118,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(C_truep(t1)?C_fixnum_plus(((C_word*)t0)[3],C_fix(260)):C_fixnum_plus(((C_word*)t0)[3],C_fix(261)));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* *hash-table-merge! in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5513(C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5513,3,t1,t2,t3);}
a=C_alloc(9);
t4=C_slot(t3,C_fix(1));
t5=t4;
t6=C_block_size(t5);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5525,a[2]=t7,a[3]=t2,a[4]=t9,a[5]=t5,a[6]=((C_word)li72),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_5525(t11,t1,C_fix(0));}

/* f_4589 in hash-table-update! in k2723 in k2718 in k1714 */
static void C_ccall f_4589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4589,2,av);}
/* srfi-69.scm:716: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[87];
av2[3]=lf[85];
av2[4]=lf[88];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k3720 in k3716 in k3713 in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,8)))){
C_save_and_reclaim((void *)f_3722,2,av);}
a=C_alloc(10);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* srfi-69.scm:585: *make-hash-table */
f_3603(((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[8])[1],C_SCHEME_END_OF_LIST);}
else{
t3=(
  /* srfi-69.scm:578: hash-for-test */
  f_3630(((C_word*)t0)[9])
);
if(C_truep(t3)){
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
/* srfi-69.scm:585: *make-hash-table */
f_3603(((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[8])[1],C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3738,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm:582: warning */
t5=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[45];
av2[3]=lf[49];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* doloop1196 in doloop1193 in *hash-table-merge! in k5052 in k2723 in k2718 in k1714 */
static void C_fcall f_5548(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_5548,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5561,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t3,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5574,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t7=C_slot(t3,C_fix(1));
/* srfi-69.scm:1002: *hash-table-update!/default */
t8=lf[89];
f_4598(t8,t4,((C_word*)t0)[3],t5,t6,t7);}}

/* k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_fcall f_3712(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,3)))){
C_save_and_reclaim_args((void *)trf_3712,2,t0,t1);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3747,a[2]=((C_word*)t0)[11],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li27),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_3747(t6,t2,((C_word*)((C_word*)t0)[12])[1]);}

/* k3713 in k3710 in k3707 in k3704 in make-hash-table in k2723 in k2718 in k1714 */
static void C_ccall f_3715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_3715,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3742,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm:572: fp< */
t4=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
av2[3]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5533 in doloop1193 in *hash-table-merge! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5535,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5525(t3,((C_word*)t0)[4],t2);}

/* k5559 in doloop1196 in doloop1193 in *hash-table-merge! in k5052 in k2723 in k2718 in k1714 */
static void C_ccall f_5561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5561,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5548(t3,((C_word*)t0)[4],t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[244] = {
{"f_5951:srfi_2d69_2escm",(void*)f_5951},
{"f_3311:srfi_2d69_2escm",(void*)f_3311},
{"f_3150:srfi_2d69_2escm",(void*)f_3150},
{"f_5504:srfi_2d69_2escm",(void*)f_5504},
{"f_3138:srfi_2d69_2escm",(void*)f_3138},
{"f_5926:srfi_2d69_2escm",(void*)f_5926},
{"f_5525:srfi_2d69_2escm",(void*)f_5525},
{"f_3162:srfi_2d69_2escm",(void*)f_3162},
{"f_2803:srfi_2d69_2escm",(void*)f_2803},
{"f_6225:srfi_2d69_2escm",(void*)f_6225},
{"f_6218:srfi_2d69_2escm",(void*)f_6218},
{"f_6211:srfi_2d69_2escm",(void*)f_6211},
{"f_3786:srfi_2d69_2escm",(void*)f_3786},
{"f_4227:srfi_2d69_2escm",(void*)f_4227},
{"f_3772:srfi_2d69_2escm",(void*)f_3772},
{"f_3775:srfi_2d69_2escm",(void*)f_3775},
{"f_4211:srfi_2d69_2escm",(void*)f_4211},
{"f_6232:srfi_2d69_2escm",(void*)f_6232},
{"f_3768:srfi_2d69_2escm",(void*)f_3768},
{"f_5767:srfi_2d69_2escm",(void*)f_5767},
{"f_4208:srfi_2d69_2escm",(void*)f_4208},
{"f_5435:srfi_2d69_2escm",(void*)f_5435},
{"f_3758:srfi_2d69_2escm",(void*)f_3758},
{"f_4881:srfi_2d69_2escm",(void*)f_4881},
{"f_4887:srfi_2d69_2escm",(void*)f_4887},
{"f_3742:srfi_2d69_2escm",(void*)f_3742},
{"f_5422:srfi_2d69_2escm",(void*)f_5422},
{"f_3747:srfi_2d69_2escm",(void*)f_3747},
{"f_4833:srfi_2d69_2escm",(void*)f_4833},
{"f_4838:srfi_2d69_2escm",(void*)f_4838},
{"f_3738:srfi_2d69_2escm",(void*)f_3738},
{"f_5751:srfi_2d69_2escm",(void*)f_5751},
{"f_5193:srfi_2d69_2escm",(void*)f_5193},
{"f_5408:srfi_2d69_2escm",(void*)f_5408},
{"f_5401:srfi_2d69_2escm",(void*)f_5401},
{"f_5467:srfi_2d69_2escm",(void*)f_5467},
{"f_4870:srfi_2d69_2escm",(void*)f_4870},
{"f_3809:srfi_2d69_2escm",(void*)f_3809},
{"f_5448:srfi_2d69_2escm",(void*)f_5448},
{"f_5916:srfi_2d69_2escm",(void*)f_5916},
{"f_6053:srfi_2d69_2escm",(void*)f_6053},
{"f_5832:srfi_2d69_2escm",(void*)f_5832},
{"f_5907:srfi_2d69_2escm",(void*)f_5907},
{"f_3630:srfi_2d69_2escm",(void*)f_3630},
{"f_3827:srfi_2d69_2escm",(void*)f_3827},
{"f_4802:srfi_2d69_2escm",(void*)f_4802},
{"f_5593:srfi_2d69_2escm",(void*)f_5593},
{"f_6048:srfi_2d69_2escm",(void*)f_6048},
{"f_6041:srfi_2d69_2escm",(void*)f_6041},
{"f_1741:srfi_2d69_2escm",(void*)f_1741},
{"f_3210:srfi_2d69_2escm",(void*)f_3210},
{"f_4182:srfi_2d69_2escm",(void*)f_4182},
{"f_6202:srfi_2d69_2escm",(void*)f_6202},
{"f_5142:srfi_2d69_2escm",(void*)f_5142},
{"f_4198:srfi_2d69_2escm",(void*)f_4198},
{"f_6073:srfi_2d69_2escm",(void*)f_6073},
{"f_6070:srfi_2d69_2escm",(void*)f_6070},
{"f_5178:srfi_2d69_2escm",(void*)f_5178},
{"f_3237:srfi_2d69_2escm",(void*)f_3237},
{"f_4185:srfi_2d69_2escm",(void*)f_4185},
{"f_5574:srfi_2d69_2escm",(void*)f_5574},
{"f_5002:srfi_2d69_2escm",(void*)f_5002},
{"f_6066:srfi_2d69_2escm",(void*)f_6066},
{"f_6064:srfi_2d69_2escm",(void*)f_6064},
{"f_6061:srfi_2d69_2escm",(void*)f_6061},
{"f_5162:srfi_2d69_2escm",(void*)f_5162},
{"f_6017:srfi_2d69_2escm",(void*)f_6017},
{"f_5072:srfi_2d69_2escm",(void*)f_5072},
{"f_6012:srfi_2d69_2escm",(void*)f_6012},
{"f_3796:srfi_2d69_2escm",(void*)f_3796},
{"f_6005:srfi_2d69_2escm",(void*)f_6005},
{"f_5689:srfi_2d69_2escm",(void*)f_5689},
{"f_5682:srfi_2d69_2escm",(void*)f_5682},
{"f_6036:srfi_2d69_2escm",(void*)f_6036},
{"f_5056:srfi_2d69_2escm",(void*)f_5056},
{"f_5054:srfi_2d69_2escm",(void*)f_5054},
{"f_5690:srfi_2d69_2escm",(void*)f_5690},
{"f_3059:srfi_2d69_2escm",(void*)f_3059},
{"f_2120:srfi_2d69_2escm",(void*)f_2120},
{"f_6029:srfi_2d69_2escm",(void*)f_6029},
{"f_6024:srfi_2d69_2escm",(void*)f_6024},
{"f_5126:srfi_2d69_2escm",(void*)f_5126},
{"f_3083:srfi_2d69_2escm",(void*)f_3083},
{"f_2139:srfi_2d69_2escm",(void*)f_2139},
{"f_3586:srfi_2d69_2escm",(void*)f_3586},
{"f_3583:srfi_2d69_2escm",(void*)f_3583},
{"f_3071:srfi_2d69_2escm",(void*)f_3071},
{"f_5640:srfi_2d69_2escm",(void*)f_5640},
{"f_3579:srfi_2d69_2escm",(void*)f_3579},
{"f_3574:srfi_2d69_2escm",(void*)f_3574},
{"f_4337:srfi_2d69_2escm",(void*)f_4337},
{"f_3569:srfi_2d69_2escm",(void*)f_3569},
{"f_4333:srfi_2d69_2escm",(void*)f_4333},
{"f_2781:srfi_2d69_2escm",(void*)f_2781},
{"f_3607:srfi_2d69_2escm",(void*)f_3607},
{"f_5723:srfi_2d69_2escm",(void*)f_5723},
{"f_3603:srfi_2d69_2escm",(void*)f_3603},
{"f_5581:srfi_2d69_2escm",(void*)f_5581},
{"f_5736:srfi_2d69_2escm",(void*)f_5736},
{"f_4310:srfi_2d69_2escm",(void*)f_4310},
{"f_3628:srfi_2d69_2escm",(void*)f_3628},
{"f_5087:srfi_2d69_2escm",(void*)f_5087},
{"f_2113:srfi_2d69_2escm",(void*)f_2113},
{"f_3617:srfi_2d69_2escm",(void*)f_3617},
{"f_2747:srfi_2d69_2escm",(void*)f_2747},
{"f_4324:srfi_2d69_2escm",(void*)f_4324},
{"f_5032:srfi_2d69_2escm",(void*)f_5032},
{"f_2155:srfi_2d69_2escm",(void*)f_2155},
{"f_2730:srfi_2d69_2escm",(void*)f_2730},
{"f_6161:srfi_2d69_2escm",(void*)f_6161},
{"f_3551:srfi_2d69_2escm",(void*)f_3551},
{"f_4346:srfi_2d69_2escm",(void*)f_4346},
{"f_6104:srfi_2d69_2escm",(void*)f_6104},
{"f_4343:srfi_2d69_2escm",(void*)f_4343},
{"f_3527:srfi_2d69_2escm",(void*)f_3527},
{"f_4440:srfi_2d69_2escm",(void*)f_4440},
{"f_4826:srfi_2d69_2escm",(void*)f_4826},
{"f_3521:srfi_2d69_2escm",(void*)f_3521},
{"f_4289:srfi_2d69_2escm",(void*)f_4289},
{"f_4283:srfi_2d69_2escm",(void*)f_4283},
{"toplevel:srfi_2d69_2escm",(void*)C_srfi_2d69_toplevel},
{"f_4425:srfi_2d69_2escm",(void*)f_4425},
{"f_4914:srfi_2d69_2escm",(void*)f_4914},
{"f_5353:srfi_2d69_2escm",(void*)f_5353},
{"f_4410:srfi_2d69_2escm",(void*)f_4410},
{"f_5816:srfi_2d69_2escm",(void*)f_5816},
{"f_4418:srfi_2d69_2escm",(void*)f_4418},
{"f_5497:srfi_2d69_2escm",(void*)f_5497},
{"f_2643:srfi_2d69_2escm",(void*)f_2643},
{"f_4906:srfi_2d69_2escm",(void*)f_4906},
{"f_1999:srfi_2d69_2escm",(void*)f_1999},
{"f_5801:srfi_2d69_2escm",(void*)f_5801},
{"f_2025:srfi_2d69_2escm",(void*)f_2025},
{"f_5624:srfi_2d69_2escm",(void*)f_5624},
{"f_1719:srfi_2d69_2escm",(void*)f_1719},
{"f_4693:srfi_2d69_2escm",(void*)f_4693},
{"f_1716:srfi_2d69_2escm",(void*)f_1716},
{"f_6119:srfi_2d69_2escm",(void*)f_6119},
{"f_4464:srfi_2d69_2escm",(void*)f_4464},
{"f_1725:srfi_2d69_2escm",(void*)f_1725},
{"f_3718:srfi_2d69_2escm",(void*)f_3718},
{"f_4671:srfi_2d69_2escm",(void*)f_4671},
{"f_4454:srfi_2d69_2escm",(void*)f_4454},
{"f_4678:srfi_2d69_2escm",(void*)f_4678},
{"f_3709:srfi_2d69_2escm",(void*)f_3709},
{"f_3706:srfi_2d69_2escm",(void*)f_3706},
{"f_3455:srfi_2d69_2escm",(void*)f_3455},
{"f_5306:srfi_2d69_2escm",(void*)f_5306},
{"f_4663:srfi_2d69_2escm",(void*)f_4663},
{"f_3452:srfi_2d69_2escm",(void*)f_3452},
{"f_2615:srfi_2d69_2escm",(void*)f_2615},
{"f_1946:srfi_2d69_2escm",(void*)f_1946},
{"f_4003:srfi_2d69_2escm",(void*)f_4003},
{"f_4644:srfi_2d69_2escm",(void*)f_4644},
{"f_4030:srfi_2d69_2escm",(void*)f_4030},
{"f_4494:srfi_2d69_2escm",(void*)f_4494},
{"f_4039:srfi_2d69_2escm",(void*)f_4039},
{"f_3412:srfi_2d69_2escm",(void*)f_3412},
{"f_4066:srfi_2d69_2escm",(void*)f_4066},
{"f_4012:srfi_2d69_2escm",(void*)f_4012},
{"f_5372:srfi_2d69_2escm",(void*)f_5372},
{"f_3990:srfi_2d69_2escm",(void*)f_3990},
{"f_3997:srfi_2d69_2escm",(void*)f_3997},
{"f_6092:srfi_2d69_2escm",(void*)f_6092},
{"f_4048:srfi_2d69_2escm",(void*)f_4048},
{"f_3941:srfi_2d69_2escm",(void*)f_3941},
{"f_6082:srfi_2d69_2escm",(void*)f_6082},
{"f_4078:srfi_2d69_2escm",(void*)f_4078},
{"f_3970:srfi_2d69_2escm",(void*)f_3970},
{"f_1908:srfi_2d69_2escm",(void*)f_1908},
{"f_2691:srfi_2d69_2escm",(void*)f_2691},
{"f_4057:srfi_2d69_2escm",(void*)f_4057},
{"f_1914:srfi_2d69_2escm",(void*)f_1914},
{"f_5713:srfi_2d69_2escm",(void*)f_5713},
{"f_5711:srfi_2d69_2escm",(void*)f_5711},
{"f_4385:srfi_2d69_2escm",(void*)f_4385},
{"f_5939:srfi_2d69_2escm",(void*)f_5939},
{"f_3935:srfi_2d69_2escm",(void*)f_3935},
{"f_5703:srfi_2d69_2escm",(void*)f_5703},
{"f_4482:srfi_2d69_2escm",(void*)f_4482},
{"f_3967:srfi_2d69_2escm",(void*)f_3967},
{"f_5233:srfi_2d69_2escm",(void*)f_5233},
{"f_5995:srfi_2d69_2escm",(void*)f_5995},
{"f_4953:srfi_2d69_2escm",(void*)f_4953},
{"f_5967:srfi_2d69_2escm",(void*)f_5967},
{"f_4942:srfi_2d69_2escm",(void*)f_4942},
{"f_4391:srfi_2d69_2escm",(void*)f_4391},
{"f_4021:srfi_2d69_2escm",(void*)f_4021},
{"f_4374:srfi_2d69_2escm",(void*)f_4374},
{"f_4921:srfi_2d69_2escm",(void*)f_4921},
{"f_4936:srfi_2d69_2escm",(void*)f_4936},
{"f_4527:srfi_2d69_2escm",(void*)f_4527},
{"f_3987:srfi_2d69_2escm",(void*)f_3987},
{"f_3378:srfi_2d69_2escm",(void*)f_3378},
{"f_4517:srfi_2d69_2escm",(void*)f_4517},
{"f_4638:srfi_2d69_2escm",(void*)f_4638},
{"f_5286:srfi_2d69_2escm",(void*)f_5286},
{"f_3840:srfi_2d69_2escm",(void*)f_3840},
{"f_4627:srfi_2d69_2escm",(void*)f_4627},
{"f_2331:srfi_2d69_2escm",(void*)f_2331},
{"f_4799:srfi_2d69_2escm",(void*)f_4799},
{"f_3837:srfi_2d69_2escm",(void*)f_3837},
{"f_4554:srfi_2d69_2escm",(void*)f_4554},
{"f_2725:srfi_2d69_2escm",(void*)f_2725},
{"f_2727:srfi_2d69_2escm",(void*)f_2727},
{"f_3860:srfi_2d69_2escm",(void*)f_3860},
{"f_2720:srfi_2d69_2escm",(void*)f_2720},
{"f_3863:srfi_2d69_2escm",(void*)f_3863},
{"f_4545:srfi_2d69_2escm",(void*)f_4545},
{"f_4557:srfi_2d69_2escm",(void*)f_4557},
{"f_4776:srfi_2d69_2escm",(void*)f_4776},
{"f_3021:srfi_2d69_2escm",(void*)f_3021},
{"f_4766:srfi_2d69_2escm",(void*)f_4766},
{"f_5246:srfi_2d69_2escm",(void*)f_5246},
{"f_4115:srfi_2d69_2escm",(void*)f_4115},
{"f_4128:srfi_2d69_2escm",(void*)f_4128},
{"f_4105:srfi_2d69_2escm",(void*)f_4105},
{"f_4743:srfi_2d69_2escm",(void*)f_4743},
{"f_5270:srfi_2d69_2escm",(void*)f_5270},
{"f_4598:srfi_2d69_2escm",(void*)f_4598},
{"f_4172:srfi_2d69_2escm",(void*)f_4172},
{"f_4179:srfi_2d69_2escm",(void*)f_4179},
{"f_4717:srfi_2d69_2escm",(void*)f_4717},
{"f_5878:srfi_2d69_2escm",(void*)f_5878},
{"f_6180:srfi_2d69_2escm",(void*)f_6180},
{"f_4707:srfi_2d69_2escm",(void*)f_4707},
{"f_5886:srfi_2d69_2escm",(void*)f_5886},
{"f_4144:srfi_2d69_2escm",(void*)f_4144},
{"f_3271:srfi_2d69_2escm",(void*)f_3271},
{"f_5609:srfi_2d69_2escm",(void*)f_5609},
{"f_5607:srfi_2d69_2escm",(void*)f_5607},
{"f_2379:srfi_2d69_2escm",(void*)f_2379},
{"f_5866:srfi_2d69_2escm",(void*)f_5866},
{"f_3314:srfi_2d69_2escm",(void*)f_3314},
{"f_3118:srfi_2d69_2escm",(void*)f_3118},
{"f_5513:srfi_2d69_2escm",(void*)f_5513},
{"f_4589:srfi_2d69_2escm",(void*)f_4589},
{"f_3722:srfi_2d69_2escm",(void*)f_3722},
{"f_5548:srfi_2d69_2escm",(void*)f_5548},
{"f_3712:srfi_2d69_2escm",(void*)f_3712},
{"f_3715:srfi_2d69_2escm",(void*)f_3715},
{"f_5535:srfi_2d69_2escm",(void*)f_5535},
{"f_5561:srfi_2d69_2escm",(void*)f_5561},
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
S|  ##sys#for-each		1
S|  for-each		1
o|eliminated procedure checks: 243 
o|specializations:
o|  1 (##sys#check-list (or pair list) *)
o|  4 (fp< float float)
o|  8 (eqv? * (not float))
o|  1 (car pair)
o|  2 (cdr pair)
o|  2 (memq * list)
o|  2 (positive? fixnum)
(o e)|safe calls: 632 
(o e)|assignments to immediate values: 7 
o|Removed `not' forms: 6 
o|contracted procedure: "(srfi-69.scm:159) g105106" 
o|contracted procedure: "(srfi-69.scm:120) g110111" 
o|inlining procedure: k1758 
o|inlining procedure: k1758 
o|contracted procedure: "(srfi-69.scm:159) g113114" 
o|inlining procedure: k1776 
o|inlining procedure: k1776 
o|contracted procedure: "(srfi-69.scm:152) g121122" 
o|inlining procedure: k1787 
o|contracted procedure: "(srfi-69.scm:147) g162163" 
o|contracted procedure: "(srfi-69.scm:147) g158159" 
o|contracted procedure: "(srfi-69.scm:147) g154155" 
o|contracted procedure: "(srfi-69.scm:147) g150151" 
o|contracted procedure: "(srfi-69.scm:147) g146147" 
o|contracted procedure: "(srfi-69.scm:147) g142143" 
o|contracted procedure: "(srfi-69.scm:147) g138139" 
o|contracted procedure: "(srfi-69.scm:147) g134135" 
o|inlining procedure: k1787 
o|contracted procedure: "(srfi-69.scm:148) g166167" 
o|contracted procedure: "(srfi-69.scm:173) g188189" 
o|contracted procedure: "(srfi-69.scm:120) g193194" 
o|inlining procedure: k1976 
o|inlining procedure: k1976 
o|contracted procedure: "(srfi-69.scm:173) g196197" 
o|contracted procedure: "(srfi-69.scm:188) g218219" 
o|contracted procedure: "(srfi-69.scm:120) g223224" 
o|inlining procedure: k2058 
o|inlining procedure: k2058 
o|contracted procedure: "(srfi-69.scm:188) g226227" 
o|contracted procedure: "(srfi-69.scm:182) g230231" 
o|inlining procedure: k2115 
o|inlining procedure: k2115 
o|contracted procedure: k2128 
o|inlining procedure: k2125 
o|inlining procedure: k2125 
o|contracted procedure: "(srfi-69.scm:209) g257258" 
o|contracted procedure: "(srfi-69.scm:120) g262263" 
o|inlining procedure: k2172 
o|inlining procedure: k2172 
o|contracted procedure: "(srfi-69.scm:209) g265266" 
o|contracted procedure: "(srfi-69.scm:203) g269270" 
o|contracted procedure: "(srfi-69.scm:235) g314315" 
o|contracted procedure: "(srfi-69.scm:120) g319320" 
o|inlining procedure: k2361 
o|inlining procedure: k2361 
o|contracted procedure: "(srfi-69.scm:235) *eq?-hash" 
o|inlining procedure: k2229 
o|inlining procedure: k2229 
o|inlining procedure: k2251 
o|inlining procedure: k2251 
o|inlining procedure: k2269 
o|inlining procedure: k2269 
o|inlining procedure: k2287 
o|contracted procedure: "(srfi-69.scm:226) g282283" 
o|contracted procedure: "(srfi-69.scm:182) g286287" 
o|inlining procedure: k2287 
o|contracted procedure: "(srfi-69.scm:230) g293294" 
o|contracted procedure: "(srfi-69.scm:229) g290291" 
o|contracted procedure: "(srfi-69.scm:262) g411412" 
o|contracted procedure: "(srfi-69.scm:120) g416417" 
o|inlining procedure: k2673 
o|inlining procedure: k2673 
o|contracted procedure: "(srfi-69.scm:262) *eqv?-hash" 
o|inlining procedure: k2408 
o|inlining procedure: k2408 
o|inlining procedure: k2430 
o|inlining procedure: k2430 
o|inlining procedure: k2448 
o|inlining procedure: k2448 
o|inlining procedure: k2466 
o|contracted procedure: "(srfi-69.scm:252) g331332" 
o|contracted procedure: "(srfi-69.scm:182) g335336" 
o|inlining procedure: k2466 
o|contracted procedure: "(srfi-69.scm:255) g339340" 
o|inlining procedure: k2494 
o|contracted procedure: "(srfi-69.scm:147) g380381" 
o|contracted procedure: "(srfi-69.scm:147) g376377" 
o|contracted procedure: "(srfi-69.scm:147) g372373" 
o|contracted procedure: "(srfi-69.scm:147) g368369" 
o|contracted procedure: "(srfi-69.scm:147) g364365" 
o|contracted procedure: "(srfi-69.scm:147) g360361" 
o|contracted procedure: "(srfi-69.scm:147) g356357" 
o|contracted procedure: "(srfi-69.scm:147) g352353" 
o|inlining procedure: k2494 
o|contracted procedure: "(srfi-69.scm:148) g384385" 
o|inlining procedure: k2619 
o|inlining procedure: k2619 
o|contracted procedure: "(srfi-69.scm:257) g390391" 
o|contracted procedure: "(srfi-69.scm:256) g387388" 
o|inlining procedure: k2749 
o|inlining procedure: k2749 
o|inlining procedure: k2805 
o|inlining procedure: k2805 
o|inlining procedure: k2823 
o|inlining procedure: k2823 
o|inlining procedure: k2845 
o|inlining procedure: k2845 
o|inlining procedure: k2863 
o|inlining procedure: k2863 
o|contracted procedure: "(srfi-69.scm:331) g453454" 
o|contracted procedure: "(srfi-69.scm:182) g457458" 
o|inlining procedure: k2892 
o|contracted procedure: "(srfi-69.scm:334) g461462" 
o|inlining procedure: k2900 
o|contracted procedure: "(srfi-69.scm:147) g502503" 
o|contracted procedure: "(srfi-69.scm:147) g498499" 
o|contracted procedure: "(srfi-69.scm:147) g494495" 
o|contracted procedure: "(srfi-69.scm:147) g490491" 
o|contracted procedure: "(srfi-69.scm:147) g486487" 
o|contracted procedure: "(srfi-69.scm:147) g482483" 
o|contracted procedure: "(srfi-69.scm:147) g478479" 
o|contracted procedure: "(srfi-69.scm:147) g474475" 
o|inlining procedure: k2900 
o|contracted procedure: "(srfi-69.scm:148) g506507" 
o|inlining procedure: k2892 
o|inlining procedure: k3040 
o|contracted procedure: "(srfi-69.scm:336) g515516" 
o|inlining procedure: k3040 
o|inlining procedure: k3095 
o|contracted procedure: "(srfi-69.scm:338) g526527" 
o|inlining procedure: k3113 
o|inlining procedure: k3113 
o|inlining procedure: k3095 
o|contracted procedure: "(srfi-69.scm:339) g530531" 
o|contracted procedure: "(srfi-69.scm:338) g523524" 
o|contracted procedure: "(srfi-69.scm:336) g512513" 
o|contracted procedure: "(srfi-69.scm:335) g509510" 
o|contracted procedure: "(srfi-69.scm:348) g560561" 
o|contracted procedure: "(srfi-69.scm:120) g565566" 
o|inlining procedure: k3192 
o|inlining procedure: k3192 
o|contracted procedure: "(srfi-69.scm:364) g598599" 
o|contracted procedure: "(srfi-69.scm:120) g603604" 
o|inlining procedure: k3285 
o|inlining procedure: k3285 
o|contracted procedure: "(srfi-69.scm:364) g606607" 
o|contracted procedure: "(srfi-69.scm:376) g640641" 
o|contracted procedure: "(srfi-69.scm:120) g645646" 
o|inlining procedure: k3426 
o|inlining procedure: k3426 
o|contracted procedure: "(srfi-69.scm:376) g648649" 
o|inlining procedure: k3535 
o|inlining procedure: k3535 
o|inlining procedure: k3553 
o|inlining procedure: k3553 
o|inlining procedure: k3587 
o|inlining procedure: k3587 
o|merged explicitly consed rest parameter: tmp707716 
o|inlining procedure: k3632 
o|inlining procedure: k3632 
o|inlining procedure: k3650 
o|inlining procedure: k3650 
o|inlining procedure: k3668 
o|inlining procedure: k3668 
o|inlining procedure: k3683 
o|inlining procedure: k3683 
o|consed rest parameter at call site: "(srfi-69.scm:585) *make-hash-table" 9 
o|inlining procedure: k3732 
o|inlining procedure: k3732 
o|inlining procedure: k3749 
o|inlining procedure: k3749 
o|inlining procedure: k3788 
o|inlining procedure: k3788 
o|inlining procedure: k3820 
o|inlining procedure: k3820 
o|inlining procedure: k3838 
o|inlining procedure: k3838 
o|substituted constant variable: a3848 
o|substituted constant variable: a3851 
o|inlining procedure: k3852 
o|substituted constant variable: a3871 
o|substituted constant variable: a3874 
o|inlining procedure: k3852 
o|inlining procedure: k3882 
o|inlining procedure: k3882 
o|inlining procedure: k3885 
o|inlining procedure: k3885 
o|substituted constant variable: a3899 
o|substituted constant variable: a3901 
o|substituted constant variable: a3903 
o|substituted constant variable: a3905 
o|substituted constant variable: a3907 
o|substituted constant variable: a3909 
o|substituted constant variable: a3911 
o|substituted constant variable: a3913 
o|inlining procedure: k3930 
o|inlining procedure: k3930 
o|inlining procedure: k3962 
o|inlining procedure: k3962 
o|inlining procedure: k3982 
o|inlining procedure: k3982 
o|inlining procedure: k4071 
o|inlining procedure: k4071 
o|inlining procedure: k4086 
o|inlining procedure: k4086 
o|contracted procedure: "(srfi-69.scm:654) hash-table-rehash!" 
o|inlining procedure: k4107 
o|inlining procedure: k4107 
o|inlining procedure: k4130 
o|inlining procedure: k4130 
o|inlining procedure: k4229 
o|consed rest parameter at call site: "(srfi-69.scm:680) *make-hash-table" 9 
o|inlining procedure: k4229 
o|inlining procedure: k4291 
o|inlining procedure: k4291 
o|inlining procedure: k4444 
o|inlining procedure: k4456 
o|inlining procedure: k4456 
o|inlining procedure: k4444 
o|inlining procedure: k4519 
o|inlining procedure: k4519 
o|contracted procedure: "(srfi-69.scm:724) g915916" 
o|inlining procedure: k4386 
o|inlining procedure: k4386 
o|inlining procedure: k4398 
o|inlining procedure: k4398 
o|contracted procedure: "(srfi-69.scm:665) g928929" 
o|inlining procedure: k4377 
o|inlining procedure: k4377 
o|contracted procedure: "(srfi-69.scm:664) g925926" 
o|inlining procedure: k4366 
o|inlining procedure: k4366 
o|inlining procedure: k4586 
o|inlining procedure: k4586 
o|inlining procedure: k4697 
o|inlining procedure: k4709 
o|inlining procedure: k4709 
o|inlining procedure: k4697 
o|inlining procedure: k4768 
o|inlining procedure: k4768 
o|contracted procedure: "(srfi-69.scm:763) g968969" 
o|inlining procedure: k4639 
o|inlining procedure: k4639 
o|inlining procedure: k4651 
o|inlining procedure: k4651 
o|contracted procedure: "(srfi-69.scm:665) g981982" 
o|inlining procedure: k4630 
o|inlining procedure: k4630 
o|contracted procedure: "(srfi-69.scm:664) g978979" 
o|inlining procedure: k4619 
o|inlining procedure: k4619 
o|inlining procedure: k4940 
o|inlining procedure: k4955 
o|inlining procedure: k4955 
o|inlining procedure: k4940 
o|inlining procedure: k5004 
o|inlining procedure: k5004 
o|contracted procedure: "(srfi-69.scm:808) g10241025" 
o|inlining procedure: k4882 
o|inlining procedure: k4882 
o|inlining procedure: k4894 
o|inlining procedure: k4894 
o|contracted procedure: "(srfi-69.scm:665) g10371038" 
o|inlining procedure: k4873 
o|inlining procedure: k4873 
o|contracted procedure: "(srfi-69.scm:664) g10341035" 
o|inlining procedure: k4862 
o|inlining procedure: k4862 
o|inlining procedure: k5073 
o|inlining procedure: k5089 
o|inlining procedure: k5089 
o|inlining procedure: k5073 
o|inlining procedure: k5128 
o|inlining procedure: k5128 
o|inlining procedure: k5179 
o|contracted procedure: k5198 
o|inlining procedure: k5195 
o|inlining procedure: k5195 
o|inlining procedure: k5179 
o|contracted procedure: k5238 
o|inlining procedure: k5235 
o|inlining procedure: k5235 
o|inlining procedure: k5296 
o|contracted procedure: k5311 
o|inlining procedure: k5308 
o|inlining procedure: k5308 
o|inlining procedure: k5296 
o|contracted procedure: k5358 
o|inlining procedure: k5355 
o|inlining procedure: k5355 
o|inlining procedure: k5424 
o|inlining procedure: k5424 
o|contracted procedure: k5453 
o|inlining procedure: k5450 
o|inlining procedure: k5450 
o|inlining procedure: k5527 
o|inlining procedure: k5527 
o|inlining procedure: k5550 
o|inlining procedure: k5550 
o|inlining procedure: k5626 
o|inlining procedure: k5626 
o|inlining procedure: k5642 
o|inlining procedure: k5642 
o|inlining procedure: k5715 
o|inlining procedure: k5715 
o|inlining procedure: k5753 
o|inlining procedure: k5753 
o|inlining procedure: k5769 
o|inlining procedure: k5769 
o|inlining procedure: k5818 
o|inlining procedure: k5818 
o|inlining procedure: k5834 
o|inlining procedure: k5834 
o|inlining procedure: k5880 
o|inlining procedure: k5880 
o|inlining procedure: k5918 
o|inlining procedure: k5918 
o|inlining procedure: k5953 
o|inlining procedure: k5953 
o|inlining procedure: k5969 
o|inlining procedure: k5969 
o|inlining procedure: k6105 
o|inlining procedure: k6121 
o|inlining procedure: k6121 
o|inlining procedure: k6105 
o|inlining procedure: k6163 
o|inlining procedure: k6163 
o|inlining procedure: k6213 
o|inlining procedure: k6213 
o|propagated global variable: r62146469 *recursive-hash-max-length* 
o|inlining procedure: k6227 
o|inlining procedure: k6227 
o|propagated global variable: r62286471 *recursive-hash-max-depth* 
o|replaced variables: 690 
o|removed binding forms: 330 
o|substituted constant variable: i165 
o|substituted constant variable: i161 
o|substituted constant variable: i157 
o|substituted constant variable: i153 
o|substituted constant variable: i149 
o|substituted constant variable: i145 
o|substituted constant variable: i141 
o|substituted constant variable: i137 
o|substituted constant variable: r21266250 
o|substituted constant variable: r21266250 
o|substituted constant variable: i383 
o|substituted constant variable: i379 
o|substituted constant variable: i375 
o|substituted constant variable: i371 
o|substituted constant variable: i367 
o|substituted constant variable: i363 
o|substituted constant variable: i359 
o|substituted constant variable: i355 
o|substituted constant variable: i505 
o|substituted constant variable: i501 
o|substituted constant variable: i497 
o|substituted constant variable: i493 
o|substituted constant variable: i489 
o|substituted constant variable: i485 
o|substituted constant variable: i481 
o|substituted constant variable: i477 
o|substituted constant variable: r31146297 
o|substituted constant variable: r31146297 
o|substituted constant variable: r31146299 
o|substituted constant variable: r31146299 
o|removed unused formal parameters: (weak-keys713 weak-values714) 
o|removed unused parameter to known procedure: weak-keys713 "(srfi-69.scm:585) *make-hash-table" 
o|removed unused parameter to known procedure: weak-values714 "(srfi-69.scm:585) *make-hash-table" 
o|inlining procedure: k3861 
o|substituted constant variable: r38836338 
o|substituted constant variable: r38836340 
o|inlining procedure: k3892 
o|inlining procedure: k3892 
o|substituted constant variable: r40726350 
o|substituted constant variable: r40726351 
o|substituted constant variable: r40876353 
o|removed unused parameter to known procedure: weak-keys713 "(srfi-69.scm:680) *make-hash-table" 
o|removed unused parameter to known procedure: weak-values714 "(srfi-69.scm:680) *make-hash-table" 
o|substituted constant variable: r42926360 
o|substituted constant variable: r43996371 
o|substituted constant variable: r46526387 
o|substituted constant variable: r48956409 
o|substituted constant variable: r51966421 
o|substituted constant variable: r52366424 
o|substituted constant variable: r53096427 
o|substituted constant variable: r53566430 
o|substituted constant variable: r54516434 
o|replaced variables: 110 
o|removed binding forms: 711 
o|inlining procedure: k1897 
o|inlining procedure: k2604 
o|inlining procedure: k3010 
o|inlining procedure: k3541 
o|inlining procedure: k3723 
o|inlining procedure: k3723 
o|inlining procedure: k3723 
o|inlining procedure: k3773 
o|inlining procedure: k3773 
o|inlining procedure: k3773 
o|inlining procedure: k3773 
o|inlining procedure: k3773 
o|inlining procedure: k3773 
o|inlining procedure: k3773 
o|inlining procedure: k3773 
o|removed side-effect free assignment to unused variable: weak-keys746 
o|inlining procedure: k3773 
o|removed side-effect free assignment to unused variable: weak-keys746 
o|inlining procedure: k3773 
o|removed side-effect free assignment to unused variable: weak-values747 
o|inlining procedure: k3773 
o|removed side-effect free assignment to unused variable: weak-values747 
o|inlining procedure: k3773 
o|replaced variables: 34 
o|removed binding forms: 158 
o|contracted procedure: k1803 
o|contracted procedure: k1817 
o|contracted procedure: k1831 
o|contracted procedure: k1845 
o|contracted procedure: k1859 
o|contracted procedure: k1873 
o|contracted procedure: k1887 
o|contracted procedure: k2510 
o|contracted procedure: k2524 
o|contracted procedure: k2538 
o|contracted procedure: k2552 
o|contracted procedure: k2566 
o|contracted procedure: k2580 
o|contracted procedure: k2594 
o|contracted procedure: k2916 
o|contracted procedure: k2930 
o|contracted procedure: k2944 
o|contracted procedure: k2958 
o|contracted procedure: k2972 
o|contracted procedure: k2986 
o|contracted procedure: k3000 
o|contracted procedure: k3045 
o|contracted procedure: k3100 
o|contracted procedure: k3135 
o|contracted procedure: k3303 
o|contracted procedure: k3444 
o|removed call to pure procedure with unused result: "(srfi-69.scm:684) slot" 
o|removed call to pure procedure with unused result: "(srfi-69.scm:684) slot" 
o|simplifications: ((let . 3)) 
o|removed binding forms: 84 
o|Removed `not' forms: 3 
o|contracted procedure: k2316 
o|contracted procedure: k2628 
o|contracted procedure: k3034 
o|contracted procedure: k4259 
o|contracted procedure: k4263 
o|removed binding forms: 9 
o|replaced variables: 3 
o|removed binding forms: 2 
o|removed binding forms: 3 
o|simplifications: ((let . 3)) 
o|simplifications: ((if . 75) (##core#call . 698)) 
o|  call simplifications:
o|    ##sys#check-list	2
o|    apply
o|    ##sys#check-pair
o|    void
o|    *	6
o|    ##sys#immediate?	6
o|    fx<=	6
o|    ##sys#setislot	10
o|    cons	21
o|    ##sys#check-structure	30
o|    ##sys#structure?
o|    ##sys#make-structure
o|    ##sys#setslot	24
o|    list	2
o|    ##sys#check-string	2
o|    fx>=	12
o|    pair?	4
o|    ##sys#peek-fixnum	2
o|    ##sys#size	27
o|    fxmin	4
o|    fxmax
o|    fx=
o|    fx-	4
o|    char?	3
o|    eq?	40
o|    eof-object?	3
o|    symbol?	3
o|    char->integer	3
o|    ##sys#check-symbol
o|    ##sys#slot	182
o|    car	30
o|    null?	78
o|    cdr	25
o|    number?	3
o|    ##sys#check-exact	11
o|    fixnum?	6
o|    flonum?	3
o|    fxshl	24
o|    fx+	43
o|    fx*	4
o|    fxxor	25
o|    fx<	15
o|    fxneg	9
o|    fxand	9
o|    fxmod	9
o|contracted procedure: k1939 
o|contracted procedure: k1727 
o|contracted procedure: k1933 
o|contracted procedure: k1730 
o|contracted procedure: k1927 
o|contracted procedure: k1733 
o|contracted procedure: k1921 
o|contracted procedure: k1736 
o|contracted procedure: k1742 
o|contracted procedure: k1751 
o|contracted procedure: k1761 
o|contracted procedure: k1779 
o|contracted procedure: k1790 
o|contracted procedure: k1891 
o|contracted procedure: k1881 
o|contracted procedure: k1877 
o|contracted procedure: k1867 
o|contracted procedure: k1863 
o|contracted procedure: k1853 
o|contracted procedure: k1849 
o|contracted procedure: k1839 
o|contracted procedure: k1835 
o|contracted procedure: k1825 
o|contracted procedure: k1821 
o|contracted procedure: k1811 
o|contracted procedure: k1807 
o|contracted procedure: k1797 
o|contracted procedure: k1915 
o|contracted procedure: k2018 
o|contracted procedure: k1948 
o|contracted procedure: k2012 
o|contracted procedure: k1951 
o|contracted procedure: k2006 
o|contracted procedure: k1954 
o|contracted procedure: k2000 
o|contracted procedure: k1957 
o|contracted procedure: k1960 
o|contracted procedure: k1969 
o|contracted procedure: k1979 
o|contracted procedure: k2106 
o|contracted procedure: k2027 
o|contracted procedure: k2100 
o|contracted procedure: k2030 
o|contracted procedure: k2094 
o|contracted procedure: k2033 
o|contracted procedure: k2088 
o|contracted procedure: k2036 
o|contracted procedure: k2039 
o|contracted procedure: k2042 
o|contracted procedure: k2051 
o|contracted procedure: k2061 
o|contracted procedure: k2082 
o|contracted procedure: k2135 
o|contracted procedure: k2125 
o|contracted procedure: k2220 
o|contracted procedure: k2141 
o|contracted procedure: k2214 
o|contracted procedure: k2144 
o|contracted procedure: k2208 
o|contracted procedure: k2147 
o|contracted procedure: k2202 
o|contracted procedure: k2150 
o|contracted procedure: k2156 
o|contracted procedure: k2165 
o|contracted procedure: k2175 
o|contracted procedure: k2196 
o|contracted procedure: k2398 
o|contracted procedure: k2333 
o|contracted procedure: k2392 
o|contracted procedure: k2336 
o|contracted procedure: k2386 
o|contracted procedure: k2339 
o|contracted procedure: k2380 
o|contracted procedure: k2342 
o|contracted procedure: k2345 
o|contracted procedure: k2354 
o|contracted procedure: k2364 
o|contracted procedure: k2232 
o|contracted procedure: k2241 
o|contracted procedure: k2248 
o|contracted procedure: k2254 
o|contracted procedure: k2263 
o|contracted procedure: k2272 
o|contracted procedure: k2281 
o|contracted procedure: k2290 
o|contracted procedure: k2301 
o|contracted procedure: k2710 
o|contracted procedure: k2645 
o|contracted procedure: k2704 
o|contracted procedure: k2648 
o|contracted procedure: k2698 
o|contracted procedure: k2651 
o|contracted procedure: k2692 
o|contracted procedure: k2654 
o|contracted procedure: k2657 
o|contracted procedure: k2666 
o|contracted procedure: k2676 
o|contracted procedure: k2411 
o|contracted procedure: k2420 
o|contracted procedure: k2427 
o|contracted procedure: k2433 
o|contracted procedure: k2442 
o|contracted procedure: k2451 
o|contracted procedure: k2460 
o|contracted procedure: k2469 
o|contracted procedure: k2480 
o|contracted procedure: k2489 
o|contracted procedure: k2497 
o|contracted procedure: k2598 
o|contracted procedure: k2588 
o|contracted procedure: k2584 
o|contracted procedure: k2574 
o|contracted procedure: k2570 
o|contracted procedure: k2560 
o|contracted procedure: k2556 
o|contracted procedure: k2546 
o|contracted procedure: k2542 
o|contracted procedure: k2532 
o|contracted procedure: k2528 
o|contracted procedure: k2518 
o|contracted procedure: k2514 
o|contracted procedure: k2504 
o|contracted procedure: k2732 
o|contracted procedure: k2799 
o|contracted procedure: k2739 
o|contracted procedure: k2795 
o|contracted procedure: k2791 
o|contracted procedure: k2743 
o|contracted procedure: k2752 
o|contracted procedure: k2775 
o|contracted procedure: k2771 
o|contracted procedure: k2759 
o|contracted procedure: k2763 
o|contracted procedure: k2767 
o|contracted procedure: k2783 
o|contracted procedure: k2787 
o|contracted procedure: k2808 
o|contracted procedure: k2817 
o|contracted procedure: k2826 
o|contracted procedure: k2833 
o|contracted procedure: k2839 
o|contracted procedure: k2848 
o|contracted procedure: k2857 
o|contracted procedure: k2866 
o|contracted procedure: k2875 
o|contracted procedure: k2886 
o|contracted procedure: k2895 
o|contracted procedure: k2903 
o|contracted procedure: k3004 
o|contracted procedure: k2994 
o|contracted procedure: k2990 
o|contracted procedure: k2980 
o|contracted procedure: k2976 
o|contracted procedure: k2966 
o|contracted procedure: k2962 
o|contracted procedure: k2952 
o|contracted procedure: k2948 
o|contracted procedure: k2938 
o|contracted procedure: k2934 
o|contracted procedure: k2924 
o|contracted procedure: k2920 
o|contracted procedure: k2910 
o|contracted procedure: k3056 
o|contracted procedure: k3065 
o|contracted procedure: k3073 
o|contracted procedure: k3077 
o|contracted procedure: k3085 
o|contracted procedure: k3089 
o|contracted procedure: k3124 
o|contracted procedure: k3120 
o|contracted procedure: k3109 
o|contracted procedure: k3144 
o|contracted procedure: k3229 
o|contracted procedure: k3164 
o|contracted procedure: k3223 
o|contracted procedure: k3167 
o|contracted procedure: k3217 
o|contracted procedure: k3170 
o|contracted procedure: k3211 
o|contracted procedure: k3173 
o|contracted procedure: k3176 
o|contracted procedure: k3185 
o|contracted procedure: k3195 
o|contracted procedure: k3371 
o|contracted procedure: k3239 
o|contracted procedure: k3365 
o|contracted procedure: k3242 
o|contracted procedure: k3359 
o|contracted procedure: k3245 
o|contracted procedure: k3353 
o|contracted procedure: k3248 
o|contracted procedure: k3347 
o|contracted procedure: k3251 
o|contracted procedure: k3341 
o|contracted procedure: k3254 
o|contracted procedure: k3335 
o|contracted procedure: k3257 
o|contracted procedure: k3329 
o|contracted procedure: k3260 
o|contracted procedure: k3263 
o|contracted procedure: k3266 
o|contracted procedure: k3278 
o|contracted procedure: k3288 
o|contracted procedure: k3306 
o|contracted procedure: k3319 
o|contracted procedure: k3323 
o|contracted procedure: k3512 
o|contracted procedure: k3380 
o|contracted procedure: k3506 
o|contracted procedure: k3383 
o|contracted procedure: k3500 
o|contracted procedure: k3386 
o|contracted procedure: k3494 
o|contracted procedure: k3389 
o|contracted procedure: k3488 
o|contracted procedure: k3392 
o|contracted procedure: k3482 
o|contracted procedure: k3395 
o|contracted procedure: k3476 
o|contracted procedure: k3398 
o|contracted procedure: k3470 
o|contracted procedure: k3401 
o|contracted procedure: k3404 
o|contracted procedure: k3407 
o|contracted procedure: k3419 
o|contracted procedure: k3429 
o|contracted procedure: k3447 
o|contracted procedure: k3460 
o|contracted procedure: k3464 
o|contracted procedure: k3529 
o|contracted procedure: k3532 
o|contracted procedure: k3538 
o|contracted procedure: k3541 
o|contracted procedure: k3558 
o|contracted procedure: k3566 
o|contracted procedure: k3596 
o|contracted procedure: k3590 
o|contracted procedure: k3608 
o|contracted procedure: k3611 
o|contracted procedure: k3618 
o|contracted procedure: k3635 
o|contracted procedure: k3638 
o|contracted procedure: k3644 
o|contracted procedure: k3647 
o|contracted procedure: k3653 
o|contracted procedure: k3656 
o|contracted procedure: k3662 
o|contracted procedure: k3665 
o|contracted procedure: k3671 
o|contracted procedure: k3674 
o|contracted procedure: k3680 
o|contracted procedure: k3683 
o|contracted procedure: k3752 
o|contracted procedure: k3755 
o|contracted procedure: k3781 
o|contracted procedure: k3791 
o|contracted procedure: k3801 
o|contracted procedure: k3804 
o|contracted procedure: k3811 
o|contracted procedure: k3814 
o|contracted procedure: k3823 
o|contracted procedure: k3832 
o|contracted procedure: k3842 
o|contracted procedure: k3855 
o|contracted procedure: k3865 
o|contracted procedure: k3878 
o|contracted procedure: k3888 
o|contracted procedure: k3914 
o|contracted procedure: k3924 
o|contracted procedure: k3927 
o|contracted procedure: k3936 
o|contracted procedure: k3943 
o|contracted procedure: k3947 
o|contracted procedure: k3950 
o|contracted procedure: k3956 
o|contracted procedure: k3959 
o|contracted procedure: k3973 
o|contracted procedure: k3976 
o|contracted procedure: k3979 
o|contracted procedure: k3993 
o|contracted procedure: k4005 
o|contracted procedure: k4014 
o|contracted procedure: k4023 
o|contracted procedure: k4032 
o|contracted procedure: k4041 
o|contracted procedure: k4050 
o|contracted procedure: k4059 
o|contracted procedure: k4068 
o|contracted procedure: k4074 
o|contracted procedure: k4080 
o|contracted procedure: k4083 
o|contracted procedure: k4194 
o|contracted procedure: k4174 
o|contracted procedure: k4190 
o|contracted procedure: k4095 
o|contracted procedure: k4098 
o|contracted procedure: k4110 
o|contracted procedure: k4120 
o|contracted procedure: k4124 
o|contracted procedure: k4133 
o|contracted procedure: k4136 
o|contracted procedure: k4139 
o|contracted procedure: k4168 
o|contracted procedure: k4160 
o|contracted procedure: k4164 
o|contracted procedure: k4156 
o|contracted procedure: k4145 
o|contracted procedure: k4152 
o|contracted procedure: k4200 
o|contracted procedure: k4203 
o|contracted procedure: k4223 
o|contracted procedure: k4212 
o|contracted procedure: k4219 
o|contracted procedure: k4215 
o|contracted procedure: k4232 
o|contracted procedure: k4239 
o|contracted procedure: k4243 
o|contracted procedure: k4247 
o|contracted procedure: k4251 
o|contracted procedure: k4255 
o|contracted procedure: k4267 
o|contracted procedure: k4270 
o|contracted procedure: k4277 
o|contracted procedure: k4285 
o|contracted procedure: k4294 
o|contracted procedure: k4297 
o|contracted procedure: k4316 
o|contracted procedure: k4320 
o|contracted procedure: k4304 
o|contracted procedure: k4312 
o|contracted procedure: k4326 
o|contracted procedure: k4338 
o|contracted procedure: k4577 
o|contracted procedure: k4347 
o|contracted procedure: k4426 
o|contracted procedure: k4429 
o|contracted procedure: k4432 
o|contracted procedure: k4435 
o|contracted procedure: k4441 
o|contracted procedure: k4447 
o|contracted procedure: k4459 
o|contracted procedure: k4476 
o|contracted procedure: k4472 
o|contracted procedure: k4465 
o|contracted procedure: k4468 
o|contracted procedure: k4483 
o|contracted procedure: k4510 
o|contracted procedure: k4489 
o|contracted procedure: k4495 
o|contracted procedure: k4499 
o|contracted procedure: k4506 
o|contracted procedure: k4522 
o|contracted procedure: k4539 
o|contracted procedure: k4535 
o|contracted procedure: k4528 
o|contracted procedure: k4531 
o|contracted procedure: k4546 
o|contracted procedure: k4558 
o|contracted procedure: k4562 
o|contracted procedure: k4569 
o|contracted procedure: k4573 
o|contracted procedure: k4352 
o|contracted procedure: k4355 
o|contracted procedure: k4358 
o|contracted procedure: k4361 
o|contracted procedure: k4395 
o|contracted procedure: k4401 
o|contracted procedure: k4380 
o|contracted procedure: k4412 
o|contracted procedure: k4369 
o|contracted procedure: k4420 
o|contracted procedure: k4580 
o|contracted procedure: k4583 
o|contracted procedure: k4822 
o|contracted procedure: k4600 
o|contracted procedure: k4679 
o|contracted procedure: k4682 
o|contracted procedure: k4685 
o|contracted procedure: k4688 
o|contracted procedure: k4694 
o|contracted procedure: k4700 
o|contracted procedure: k4712 
o|contracted procedure: k4729 
o|contracted procedure: k4725 
o|contracted procedure: k4718 
o|contracted procedure: k4721 
o|contracted procedure: k4732 
o|contracted procedure: k4759 
o|contracted procedure: k4738 
o|contracted procedure: k4744 
o|contracted procedure: k4748 
o|contracted procedure: k4755 
o|contracted procedure: k4771 
o|contracted procedure: k4788 
o|contracted procedure: k4784 
o|contracted procedure: k4777 
o|contracted procedure: k4780 
o|contracted procedure: k4791 
o|contracted procedure: k4803 
o|contracted procedure: k4807 
o|contracted procedure: k4814 
o|contracted procedure: k4818 
o|contracted procedure: k4605 
o|contracted procedure: k4608 
o|contracted procedure: k4611 
o|contracted procedure: k4614 
o|contracted procedure: k4648 
o|contracted procedure: k4654 
o|contracted procedure: k4633 
o|contracted procedure: k4665 
o|contracted procedure: k4622 
o|contracted procedure: k4673 
o|contracted procedure: k4828 
o|contracted procedure: k4840 
o|contracted procedure: k5048 
o|contracted procedure: k4843 
o|contracted procedure: k4922 
o|contracted procedure: k4925 
o|contracted procedure: k4928 
o|contracted procedure: k4931 
o|contracted procedure: k4937 
o|contracted procedure: k4946 
o|contracted procedure: k4958 
o|contracted procedure: k4972 
o|contracted procedure: k4968 
o|contracted procedure: k4961 
o|contracted procedure: k4975 
o|contracted procedure: k4995 
o|contracted procedure: k4981 
o|contracted procedure: k4991 
o|contracted procedure: k5007 
o|contracted procedure: k5021 
o|contracted procedure: k5017 
o|contracted procedure: k5010 
o|contracted procedure: k5024 
o|contracted procedure: k5040 
o|contracted procedure: k5044 
o|contracted procedure: k4848 
o|contracted procedure: k4851 
o|contracted procedure: k4854 
o|contracted procedure: k4857 
o|contracted procedure: k4891 
o|contracted procedure: k4897 
o|contracted procedure: k4876 
o|contracted procedure: k4908 
o|contracted procedure: k4865 
o|contracted procedure: k4916 
o|contracted procedure: k5058 
o|contracted procedure: k5061 
o|contracted procedure: k5064 
o|contracted procedure: k5067 
o|contracted procedure: k5076 
o|contracted procedure: k5083 
o|contracted procedure: k5092 
o|contracted procedure: k5095 
o|contracted procedure: k5115 
o|contracted procedure: k5101 
o|contracted procedure: k5111 
o|contracted procedure: k5122 
o|contracted procedure: k5131 
o|contracted procedure: k5134 
o|contracted procedure: k5150 
o|contracted procedure: k5154 
o|contracted procedure: k5158 
o|contracted procedure: k5164 
o|contracted procedure: k5167 
o|contracted procedure: k5170 
o|contracted procedure: k5173 
o|contracted procedure: k5182 
o|contracted procedure: k5189 
o|contracted procedure: k5222 
o|contracted procedure: k5201 
o|contracted procedure: k5218 
o|contracted procedure: k5204 
o|contracted procedure: k5214 
o|contracted procedure: k5229 
o|contracted procedure: k5262 
o|contracted procedure: k5241 
o|contracted procedure: k5254 
o|contracted procedure: k5258 
o|contracted procedure: k5266 
o|contracted procedure: k5272 
o|contracted procedure: k5275 
o|contracted procedure: k5278 
o|contracted procedure: k5281 
o|contracted procedure: k5287 
o|contracted procedure: k5397 
o|contracted procedure: k5290 
o|contracted procedure: k5293 
o|contracted procedure: k5299 
o|contracted procedure: k5346 
o|contracted procedure: k5314 
o|contracted procedure: k5317 
o|contracted procedure: k5342 
o|contracted procedure: k5323 
o|contracted procedure: k5326 
o|contracted procedure: k5329 
o|contracted procedure: k5393 
o|contracted procedure: k5361 
o|contracted procedure: k5364 
o|contracted procedure: k5373 
o|contracted procedure: k5376 
o|contracted procedure: k5389 
o|contracted procedure: k5403 
o|contracted procedure: k5409 
o|contracted procedure: k5412 
o|contracted procedure: k5415 
o|contracted procedure: k5427 
o|contracted procedure: k5440 
o|contracted procedure: k5444 
o|contracted procedure: k5493 
o|contracted procedure: k5456 
o|contracted procedure: k5459 
o|contracted procedure: k5468 
o|contracted procedure: k5472 
o|contracted procedure: k5485 
o|contracted procedure: k5489 
o|contracted procedure: k5499 
o|contracted procedure: k5509 
o|contracted procedure: k5515 
o|contracted procedure: k5518 
o|contracted procedure: k5530 
o|contracted procedure: k5540 
o|contracted procedure: k5544 
o|contracted procedure: k5553 
o|contracted procedure: k5556 
o|contracted procedure: k5566 
o|contracted procedure: k5570 
o|contracted procedure: k5577 
o|contracted procedure: k5583 
o|contracted procedure: k5586 
o|contracted procedure: k5595 
o|contracted procedure: k5598 
o|contracted procedure: k5611 
o|contracted procedure: k5614 
o|contracted procedure: k5617 
o|contracted procedure: k5629 
o|contracted procedure: k5636 
o|contracted procedure: k5645 
o|contracted procedure: k5652 
o|contracted procedure: k5659 
o|contracted procedure: k5663 
o|contracted procedure: k5674 
o|contracted procedure: k5678 
o|contracted procedure: k5670 
o|contracted procedure: k5666 
o|contracted procedure: k5684 
o|contracted procedure: k5692 
o|contracted procedure: k5699 
o|contracted procedure: k5706 
o|contracted procedure: k5718 
o|contracted procedure: k5728 
o|contracted procedure: k5732 
o|contracted procedure: k5738 
o|contracted procedure: k5741 
o|contracted procedure: k5744 
o|contracted procedure: k5756 
o|contracted procedure: k5763 
o|contracted procedure: k5772 
o|contracted procedure: k5779 
o|contracted procedure: k5786 
o|contracted procedure: k5790 
o|contracted procedure: k5797 
o|contracted procedure: k5793 
o|contracted procedure: k5803 
o|contracted procedure: k5806 
o|contracted procedure: k5809 
o|contracted procedure: k5821 
o|contracted procedure: k5828 
o|contracted procedure: k5837 
o|contracted procedure: k5844 
o|contracted procedure: k5851 
o|contracted procedure: k5855 
o|contracted procedure: k5862 
o|contracted procedure: k5858 
o|contracted procedure: k5868 
o|contracted procedure: k5871 
o|contracted procedure: k5883 
o|contracted procedure: k5892 
o|contracted procedure: k5896 
o|contracted procedure: k5899 
o|contracted procedure: k5902 
o|contracted procedure: k5912 
o|contracted procedure: k5921 
o|contracted procedure: k5931 
o|contracted procedure: k5935 
o|contracted procedure: k5941 
o|contracted procedure: k5944 
o|contracted procedure: k5956 
o|contracted procedure: k5963 
o|contracted procedure: k5972 
o|contracted procedure: k5979 
o|contracted procedure: k5982 
o|contracted procedure: k5989 
o|contracted procedure: k5997 
o|contracted procedure: k6001 
o|contracted procedure: k6007 
o|contracted procedure: k6019 
o|contracted procedure: k6031 
o|contracted procedure: k6043 
o|contracted procedure: k6078 
o|contracted procedure: k6199 
o|contracted procedure: k6084 
o|contracted procedure: k6087 
o|contracted procedure: k6093 
o|contracted procedure: k6096 
o|contracted procedure: k6099 
o|contracted procedure: k6108 
o|contracted procedure: k6115 
o|contracted procedure: k6124 
o|contracted procedure: k6130 
o|contracted procedure: k6150 
o|contracted procedure: k6136 
o|contracted procedure: k6146 
o|contracted procedure: k6157 
o|contracted procedure: k6166 
o|contracted procedure: k6172 
o|contracted procedure: k6188 
o|contracted procedure: k6192 
o|contracted procedure: k6196 
o|contracted procedure: k6220 
o|contracted procedure: k6234 
o|simplifications: ((let . 82)) 
o|removed binding forms: 622 
o|replaced variables: 394 
o|inlining procedure: k1767 
o|inlining procedure: k1985 
o|inlining procedure: k2067 
o|inlining procedure: k2181 
o|inlining procedure: k2370 
o|inlining procedure: k2682 
o|inlining procedure: k3201 
o|inlining procedure: k3294 
o|inlining procedure: k3435 
o|removed binding forms: 173 
o|contracted procedure: k2085 
o|contracted procedure: k2199 
o|removed binding forms: 11 
o|replaced variables: 12 
o|removed binding forms: 11 
o|direct leaf routine/allocation: loop672 0 
o|direct leaf routine/allocation: hash-for-test748 0 
o|direct leaf routine/allocation: loop1098 0 
o|direct leaf routine/allocation: loop1115 0 
o|direct leaf routine/allocation: loop1143 0 
o|converted assignments to bindings: (loop672) 
o|contracted procedure: "(srfi-69.scm:578) k3729" 
o|converted assignments to bindings: (loop1098) 
o|converted assignments to bindings: (loop1115) 
o|converted assignments to bindings: (loop1143) 
o|simplifications: ((let . 4)) 
o|removed binding forms: 1 
o|customizable procedures: (k6230 k6216 loop1083 loop1079 *hash-table-for-each *hash-table-fold fold21320 loop1317 g12941301 for-each-loop12931304 doloop12881289 loop21276 loop1273 loop21262 loop1259 g12361243 for-each-loop12351248 loop21222 loop1219 *hash-table-merge! doloop11961197 doloop11931194 loop1171 doloop11681169 loop1152 loop1123 loop1102 k4868 k4879 k4885 loop1053 loop1048 *hash-table-update!/default k4625 k4636 k4642 loop1001 loop992 k4335 k4372 k4383 k4389 loop948 loop939 *hash-table-copy copy-loop884 doloop881882 loop857 doloop854855 k3704 k3707 k3710 invarg-err784 loop781 hash-table-canonical-length *make-hash-table g537538 g533534 vector-hash433 g519520 recursive-hash434 loop441 *equal?-hash) 
o|calls to known targets: 171 
o|identified direct recursive calls: f_3527 2 
o|identified direct recursive calls: f_4289 1 
o|identified direct recursive calls: f_4454 1 
o|identified direct recursive calls: f_4707 1 
o|identified direct recursive calls: f_4953 1 
o|identified direct recursive calls: f_5087 1 
o|identified direct recursive calls: f_5193 1 
o|identified direct recursive calls: f_5306 1 
o|identified direct recursive calls: f_5640 1 
o|identified direct recursive calls: f_5767 1 
o|identified direct recursive calls: f_5832 1 
o|identified direct recursive calls: f_6119 1 
o|fast box initializations: 34 
o|fast global references: 33 
o|fast global assignments: 10 
o|dropping unused closure argument: f_4198 
o|dropping unused closure argument: f_3603 
o|dropping unused closure argument: f_3521 
o|dropping unused closure argument: f_5939 
o|dropping unused closure argument: f_2727 
o|dropping unused closure argument: f_5866 
o|dropping unused closure argument: f_5513 
*/
/* end of file */

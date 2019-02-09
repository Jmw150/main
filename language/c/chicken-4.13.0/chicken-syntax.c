/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[296];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,25),40,97,51,56,50,50,32,120,50,54,53,51,32,114,50,54,53,52,32,99,50,54,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,18),40,103,50,54,50,57,32,99,108,97,117,115,101,50,54,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,54,50,51,32,103,50,54,51,53,50,54,52,54,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,25),40,97,51,56,56,50,32,120,50,54,49,50,32,114,50,54,49,51,32,99,50,54,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,50,53,54,56,32,103,50,53,56,48,50,53,57,51,32,103,50,53,56,49,50,53,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,53,51,49,32,103,50,53,52,51,50,53,53,55,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,50,32,97,110,97,109,101,115,50,53,50,53,32,105,50,53,50,54,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,37),40,108,111,111,112,32,97,114,103,115,50,53,49,49,32,97,110,97,109,101,115,50,53,49,50,32,97,116,121,112,101,115,50,53,49,51,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,25),40,97,52,48,48,53,32,120,50,52,57,51,32,114,50,52,57,52,32,99,50,52,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,24),40,97,52,52,52,48,32,116,121,112,101,50,52,57,49,32,118,97,114,50,52,57,50,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,52,54,53,32,103,50,52,55,55,50,52,56,52,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,52,51,55,32,103,50,52,52,57,50,52,53,54,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,51,56,57,32,108,50,51,56,52,50,52,50,55,32,108,101,110,50,51,56,53,50,52,50,56,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,51,56,57,32,108,50,51,56,52,50,52,49,49,32,108,101,110,50,51,56,53,50,52,49,50,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,52),40,97,52,51,55,50,32,105,110,112,117,116,50,51,56,51,50,51,57,54,32,114,101,110,97,109,101,50,51,57,50,50,51,57,55,32,99,111,109,112,97,114,101,50,51,56,48,50,51,57,56,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,25),40,97,52,54,56,49,32,120,50,51,55,50,32,114,50,51,55,51,32,99,50,51,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,52,55,52,48,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,58),40,97,52,55,53,48,32,116,121,112,101,50,51,52,54,50,51,52,55,50,51,53,50,32,112,114,101,100,50,51,52,56,50,51,52,57,50,51,53,51,32,112,117,114,101,50,51,53,48,50,51,53,49,50,51,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,97,52,55,49,57,32,120,50,51,52,49,32,114,50,51,52,50,32,99,50,51,52,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,15),40,103,50,51,48,57,32,97,114,103,50,51,50,48,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,51,48,51,32,103,50,51,49,53,50,51,51,49,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,25),40,97,52,56,50,55,32,120,50,50,56,56,32,114,50,50,56,57,32,99,50,50,57,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,25),40,97,52,57,57,48,32,120,50,50,55,48,32,114,50,50,55,49,32,99,50,50,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,50,50,56,32,108,50,50,50,51,50,50,54,49,32,108,101,110,50,50,50,52,50,50,54,50,41};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,50,50,50,56,32,108,50,50,50,51,50,50,53,48,32,108,101,110,50,50,50,52,50,50,53,49,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,52),40,97,53,48,55,55,32,105,110,112,117,116,50,50,50,50,50,50,51,53,32,114,101,110,97,109,101,50,50,51,49,50,50,51,54,32,99,111,109,112,97,114,101,50,50,49,57,50,50,51,55,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,52),40,97,53,50,50,53,32,105,110,112,117,116,50,49,56,56,50,50,48,49,32,114,101,110,97,109,101,50,49,57,55,50,50,48,50,32,99,111,109,112,97,114,101,50,49,56,53,50,50,48,51,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,25),40,97,53,51,50,50,32,120,50,49,55,55,32,114,50,49,55,56,32,99,50,49,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,25),40,97,53,51,52,51,32,120,50,49,55,48,32,114,50,49,55,49,32,99,50,49,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,28),40,97,53,51,54,48,32,102,111,114,109,50,49,54,51,32,114,50,49,54,52,32,99,50,49,54,53,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,28),40,97,53,51,56,57,32,102,111,114,109,50,49,53,50,32,114,50,49,53,51,32,99,50,49,53,52,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,47),40,108,111,111,112,32,120,115,50,49,51,48,32,118,97,114,115,50,49,51,49,32,98,115,50,49,51,50,32,118,97,108,115,50,49,51,51,32,114,101,115,116,50,49,51,52,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,28),40,97,53,52,53,52,32,102,111,114,109,50,49,50,51,32,114,50,49,50,52,32,99,50,49,50,53,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,40),40,108,111,111,112,32,120,115,50,49,48,48,32,118,97,114,115,50,49,48,49,32,118,97,108,115,50,49,48,50,32,114,101,115,116,50,49,48,51,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,28),40,97,53,54,53,51,32,102,111,114,109,50,48,57,51,32,114,50,48,57,52,32,99,50,48,57,53,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,103,50,48,51,54,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,108,111,116,115,50,48,53,54,32,105,50,48,53,55,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,48,51,48,32,103,50,48,52,50,50,48,52,57,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,48,48,49,32,103,50,48,49,51,50,48,49,57,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,28),40,97,53,56,51,51,32,102,111,114,109,49,57,56,54,32,114,49,57,56,55,32,99,49,57,56,56,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,103,49,57,50,51,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,49,55,32,103,49,57,50,57,49,57,51,57,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,20),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,49,56,57,56,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,52,56,32,103,49,57,54,48,49,57,54,54,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,28),40,97,54,50,49,52,32,102,111,114,109,49,56,56,54,32,114,49,56,56,55,32,99,49,56,56,56,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,28),40,97,54,52,57,57,32,102,111,114,109,49,56,55,52,32,114,49,56,55,53,32,99,49,56,55,54,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,28),40,97,54,54,49,56,32,102,111,114,109,49,56,53,51,32,114,49,56,53,52,32,99,49,56,53,53,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,55,51,53,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,15),40,103,101,110,118,97,114,115,32,110,49,55,51,51,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,54,56,49,48,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,49,56,50,48,32,103,49,56,51,50,49,56,52,48,32,103,49,56,51,51,49,56,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,27),40,98,117,105,108,100,32,118,97,114,115,50,49,55,57,56,32,118,114,101,115,116,49,55,57,57,41,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,27),40,97,54,56,50,48,32,118,97,114,115,49,49,55,57,52,32,118,97,114,115,50,49,55,57,53,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,34),40,97,54,55,57,48,32,118,97,114,115,49,55,56,49,32,97,114,103,99,49,55,56,50,32,114,101,115,116,49,55,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,22),40,97,54,55,56,48,32,99,49,55,55,57,32,98,111,100,121,49,55,56,48,41,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,34),40,97,55,48,51,57,32,118,97,114,115,49,55,53,56,32,97,114,103,99,49,55,53,57,32,114,101,115,116,49,55,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,52,48,32,103,49,55,53,50,49,55,54,50,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,28),40,97,54,54,57,49,32,102,111,114,109,49,55,50,57,32,114,49,55,51,48,32,99,49,55,51,49,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,97,114,103,115,49,55,49,49,32,118,97,114,100,101,102,115,49,55,49,50,41,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,28),40,97,55,49,51,51,32,102,111,114,109,49,54,57,55,32,114,49,54,57,56,32,99,49,54,57,57,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,28),40,97,55,51,48,53,32,102,111,114,109,49,54,56,50,32,114,49,54,56,51,32,99,49,54,56,52,41,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,48),40,114,101,99,117,114,32,118,97,114,115,49,53,52,51,32,100,101,102,97,117,108,116,101,114,115,49,53,52,52,32,110,111,110,45,100,101,102,97,117,108,116,115,49,53,52,53,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,61),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,49,53,51,55,32,100,101,102,97,117,108,116,101,114,115,49,53,51,56,32,98,111,100,121,45,112,114,111,99,49,53,51,57,32,114,101,115,116,49,53,52,48,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,31),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,49,53,56,50,32,115,121,109,49,53,56,51,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,13),40,103,49,53,57,51,32,118,49,54,48,52,41,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,15),40,103,49,54,53,48,32,118,97,114,49,54,54,49,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,58),40,114,101,99,117,114,32,118,97,114,115,49,53,50,56,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,49,53,50,57,32,100,101,102,115,49,53,51,48,32,110,101,120,116,45,103,117,121,49,53,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,54,52,52,32,103,49,54,53,54,49,54,54,51,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,54,49,53,32,103,49,54,50,55,49,54,51,51,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,56,55,32,103,49,53,57,57,49,54,48,54,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,53,55,32,103,49,53,54,57,49,53,55,53,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,28),40,97,55,51,57,52,32,102,111,114,109,49,53,49,52,32,114,49,53,49,53,32,99,49,53,49,54,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,7),40,103,49,52,56,54,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,56,48,32,103,49,52,57,50,49,53,48,50,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,52,53,55,32,101,108,115,101,63,49,52,53,56,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,28),40,97,55,56,52,50,32,102,111,114,109,49,52,52,53,32,114,49,52,52,54,32,99,49,52,52,55,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,13),40,102,111,108,100,32,98,115,49,52,50,50,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,28),40,97,56,48,49,48,32,102,111,114,109,49,52,49,54,32,114,49,52,49,55,32,99,49,52,49,56,41,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,32),40,113,117,111,116,105,102,121,45,112,114,111,99,49,51,57,53,32,120,115,49,51,57,56,32,105,100,49,51,57,57,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,28),40,97,56,49,48,55,32,102,111,114,109,49,51,57,50,32,114,49,51,57,51,32,99,49,51,57,52,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,28),40,97,56,50,49,49,32,102,111,114,109,49,51,56,52,32,114,49,51,56,53,32,99,49,51,56,54,41,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,34),40,109,97,112,45,108,111,111,112,49,51,53,49,32,103,49,51,54,51,49,51,55,49,32,103,49,51,54,52,49,51,55,50,41,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,48,51,32,103,49,51,49,53,49,51,52,51,41};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,25),40,97,56,52,51,53,32,97,49,51,51,55,32,95,49,51,51,56,32,95,49,51,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,31),40,102,111,108,100,108,49,51,50,54,32,103,49,51,50,55,49,51,51,49,32,103,49,51,50,53,49,51,51,50,41,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,55,52,32,103,49,50,56,54,49,50,57,50,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,52,56,32,103,49,50,54,48,49,50,54,54,41};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,28),40,97,56,50,53,57,32,102,111,114,109,49,50,51,57,32,114,49,50,52,48,32,99,49,50,52,49,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,20),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,49,50,51,48,41,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,28),40,97,56,53,49,55,32,102,111,114,109,49,50,50,51,32,114,49,50,50,52,32,99,49,50,50,53,41,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,26),40,97,112,112,101,110,100,42,49,48,53,52,32,105,108,49,48,54,48,32,108,49,48,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,25),40,109,97,112,42,49,48,53,53,32,112,114,111,99,49,48,54,50,32,108,49,48,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,13),40,103,49,49,49,53,32,118,49,49,50,54,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,14),40,108,111,111,107,117,112,32,118,49,49,51,53,41,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,13),40,103,49,49,54,54,32,118,49,49,55,55,41,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,54,48,32,103,49,49,55,50,49,49,55,57,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,38),40,102,111,108,100,32,108,108,105,115,116,115,49,49,52,56,32,101,120,112,115,49,49,52,57,32,108,108,105,115,116,115,50,49,49,53,48,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,57,53,32,103,49,50,48,55,49,50,49,52,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,108,108,105,115,116,115,49,49,51,56,32,97,99,99,49,49,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,48,57,32,103,49,49,50,49,49,49,50,56,41};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,108,108,105,115,116,115,49,48,57,55,32,97,99,99,49,48,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,55,49,32,103,49,48,56,51,49,48,56,57,41};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,28),40,97,56,53,55,49,32,102,111,114,109,49,48,52,57,32,114,49,48,53,48,32,99,49,48,53,49,41,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,50,55,32,103,49,48,51,52,49,48,52,48,41,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,34),40,97,57,48,55,48,32,118,97,114,115,49,48,50,50,32,97,114,103,99,49,48,50,51,32,114,101,115,116,49,48,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,28),40,97,57,48,52,56,32,102,111,114,109,49,48,49,57,32,114,49,48,50,48,32,99,49,48,50,49,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,28),40,97,57,49,49,56,32,102,111,114,109,49,48,49,53,32,114,49,48,49,54,32,99,49,48,49,55,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,28),40,97,57,49,51,57,32,102,111,114,109,49,48,48,56,32,114,49,48,48,57,32,99,49,48,49,48,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,28),40,97,57,49,54,55,32,102,111,114,109,49,48,48,49,32,114,49,48,48,50,32,99,49,48,48,51,41,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,11),40,103,54,48,48,32,122,54,49,49,41,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,6),40,103,54,50,56,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,6),40,103,54,53,54,41,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,19),40,103,55,55,57,32,115,55,57,53,32,116,101,109,112,55,57,54,41,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,57,54,53,32,103,57,55,55,57,57,48,32,103,57,55,56,57,57,49,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,57,50,57,32,103,57,52,49,57,53,52,32,103,57,52,50,57,53,53,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,37),40,109,97,112,45,108,111,111,112,56,56,55,32,103,56,57,57,57,49,53,32,103,57,48,48,57,49,54,32,103,57,48,49,57,49,55,41,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,56,53,49,32,103,56,54,51,56,55,54,32,103,56,54,52,56,55,55,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,56,49,53,32,103,56,50,55,56,52,48,32,103,56,50,56,56,52,49,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,37),40,109,97,112,45,108,111,111,112,55,55,51,32,103,55,56,53,56,48,49,32,103,55,56,54,56,48,50,32,103,55,56,55,56,48,51,41,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,55,52,50,32,103,55,53,52,55,54,50,32,103,55,53,53,55,54,51,41,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,55,49,49,32,103,55,50,51,55,51,49,32,103,55,50,52,55,51,50,41,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,54,56,48,32,103,54,57,50,55,48,48,32,103,54,57,51,55,48,49,41,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,53,48,32,103,54,54,50,54,54,57,41,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,50,50,32,103,54,51,52,54,52,49,41,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,57,52,32,103,54,48,54,54,49,51,41,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,54,55,32,103,53,55,57,53,56,53,41,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,53,52,48,32,103,53,53,50,53,53,56,41,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,25),40,97,57,49,57,49,32,102,111,114,109,53,50,55,32,114,53,50,56,32,99,53,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,115,53,48,54,41,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,26),40,97,49,48,49,50,55,32,102,111,114,109,52,57,49,32,114,52,57,50,32,99,52,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,6),40,103,50,48,53,41,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,6),40,103,50,51,51,41,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,52,53,54,32,103,52,54,56,52,56,49,32,103,52,54,57,52,56,50,41,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,52,50,48,32,103,52,51,50,52,52,53,32,103,52,51,51,52,52,54,41,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,56,52,32,103,51,57,54,52,48,57,32,103,51,57,55,52,49,48,41,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,52,56,32,103,51,54,48,51,55,51,32,103,51,54,49,51,55,52,41,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,51,49,52,32,103,51,50,54,51,51,55,32,103,51,50,55,51,51,56,41,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,110,51,51,52,41,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,50,53,55,32,103,50,54,57,51,48,51,32,103,50,55,48,51,48,52,41,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,55,56,32,103,50,57,48,50,57,54,41,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,50,55,32,103,50,51,57,50,52,54,41,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,57,57,32,103,50,49,49,50,49,56,41,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,55,50,32,103,49,56,52,49,57,48,41,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,26),40,97,49,48,50,50,56,32,102,111,114,109,49,54,52,32,114,49,54,53,32,99,49,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,26),40,97,49,48,56,56,49,32,102,111,114,109,49,53,48,32,114,49,53,49,32,99,49,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,26),40,97,49,48,57,53,54,32,102,111,114,109,49,51,48,32,114,49,51,49,32,99,49,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,26),40,97,49,49,48,52,53,32,102,111,114,109,49,50,50,32,114,49,50,51,32,99,49,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,26),40,97,49,49,48,54,50,32,102,111,114,109,49,49,54,32,114,49,49,55,32,99,49,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,26),40,97,49,49,48,55,54,32,102,111,114,109,49,48,57,32,114,49,49,48,32,99,49,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,23),40,97,49,49,49,50,53,32,102,111,114,109,56,55,32,114,56,56,32,99,56,57,41,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,12),40,103,51,49,32,115,108,111,116,52,50,41,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,22),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,54,50,32,105,54,51,41,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,50,53,32,103,51,55,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,20),40,97,49,49,50,49,56,32,120,49,51,32,114,49,52,32,99,49,53,41,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,20),40,97,49,49,53,56,48,32,102,111,114,109,54,32,114,55,32,99,56,41,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_6748)
static void C_ccall f_6748(C_word c,C_word *av) C_noret;
C_noret_decl(f_10742)
static void C_fcall f_10742(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8212)
static void C_ccall f_8212(C_word c,C_word *av) C_noret;
C_noret_decl(f_8210)
static void C_ccall f_8210(C_word c,C_word *av) C_noret;
C_noret_decl(f_8216)
static void C_ccall f_8216(C_word c,C_word *av) C_noret;
C_noret_decl(f_8219)
static void C_ccall f_8219(C_word c,C_word *av) C_noret;
C_noret_decl(f_3924)
static void C_ccall f_3924(C_word c,C_word *av) C_noret;
C_noret_decl(f_3920)
static void C_fcall f_3920(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word *av) C_noret;
C_noret_decl(f_4025)
static void C_ccall f_4025(C_word c,C_word *av) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word *av) C_noret;
C_noret_decl(f_6718)
static void C_ccall f_6718(C_word c,C_word *av) C_noret;
C_noret_decl(f_11304)
static void C_ccall f_11304(C_word c,C_word *av) C_noret;
C_noret_decl(f_8357)
static void C_ccall f_8357(C_word c,C_word *av) C_noret;
C_noret_decl(f_10776)
static void C_fcall f_10776(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7789)
static void C_fcall f_7789(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7780)
static void C_ccall f_7780(C_word c,C_word *av) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word *av) C_noret;
C_noret_decl(f_11329)
static void C_fcall f_11329(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11327)
static void C_ccall f_11327(C_word c,C_word *av) C_noret;
C_noret_decl(f_8376)
static void C_fcall f_8376(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10688)
static void C_ccall f_10688(C_word c,C_word *av) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word *av) C_noret;
C_noret_decl(f_4467)
static void C_fcall f_4467(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8582)
static void C_ccall f_8582(C_word c,C_word *av) C_noret;
C_noret_decl(f_4383)
static void C_ccall f_4383(C_word c,C_word *av) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word *av) C_noret;
C_noret_decl(f_4059)
static void C_ccall f_4059(C_word c,C_word *av) C_noret;
C_noret_decl(f_4373)
static void C_ccall f_4373(C_word c,C_word *av) C_noret;
C_noret_decl(f_4046)
static void C_fcall f_4046(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word *av) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word *av) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word *av) C_noret;
C_noret_decl(f_8572)
static void C_ccall f_8572(C_word c,C_word *av) C_noret;
C_noret_decl(f_8576)
static void C_ccall f_8576(C_word c,C_word *av) C_noret;
C_noret_decl(f_8570)
static void C_ccall f_8570(C_word c,C_word *av) C_noret;
C_noret_decl(f_10694)
static void C_fcall f_10694(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10674)
static void C_fcall f_10674(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8560)
static void C_ccall f_8560(C_word c,C_word *av) C_noret;
C_noret_decl(f_10606)
static void C_ccall f_10606(C_word c,C_word *av) C_noret;
C_noret_decl(f_11244)
static void C_fcall f_11244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11240)
static void C_ccall f_11240(C_word c,C_word *av) C_noret;
C_noret_decl(f_11234)
static void C_ccall f_11234(C_word c,C_word *av) C_noret;
C_noret_decl(f_11231)
static void C_ccall f_11231(C_word c,C_word *av) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word *av) C_noret;
C_noret_decl(f_11237)
static void C_ccall f_11237(C_word c,C_word *av) C_noret;
C_noret_decl(f_9634)
static void C_ccall f_9634(C_word c,C_word *av) C_noret;
C_noret_decl(f_11223)
static void C_ccall f_11223(C_word c,C_word *av) C_noret;
C_noret_decl(f_11217)
static void C_ccall f_11217(C_word c,C_word *av) C_noret;
C_noret_decl(f_11219)
static void C_ccall f_11219(C_word c,C_word *av) C_noret;
C_noret_decl(f_5334)
static void C_ccall f_5334(C_word c,C_word *av) C_noret;
C_noret_decl(f_9622)
static void C_ccall f_9622(C_word c,C_word *av) C_noret;
C_noret_decl(f_10613)
static void C_ccall f_10613(C_word c,C_word *av) C_noret;
C_noret_decl(f_5321)
static void C_ccall f_5321(C_word c,C_word *av) C_noret;
C_noret_decl(f_5327)
static void C_ccall f_5327(C_word c,C_word *av) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word *av) C_noret;
C_noret_decl(f_10624)
static void C_fcall f_10624(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10622)
static void C_ccall f_10622(C_word c,C_word *av) C_noret;
C_noret_decl(f_5359)
static void C_ccall f_5359(C_word c,C_word *av) C_noret;
C_noret_decl(f_6825)
static void C_ccall f_6825(C_word c,C_word *av) C_noret;
C_noret_decl(f_6821)
static void C_ccall f_6821(C_word c,C_word *av) C_noret;
C_noret_decl(f_5342)
static void C_ccall f_5342(C_word c,C_word *av) C_noret;
C_noret_decl(f_5348)
static void C_ccall f_5348(C_word c,C_word *av) C_noret;
C_noret_decl(f_5344)
static void C_ccall f_5344(C_word c,C_word *av) C_noret;
C_noret_decl(f_7603)
static void C_ccall f_7603(C_word c,C_word *av) C_noret;
C_noret_decl(f_6847)
static void C_ccall f_6847(C_word c,C_word *av) C_noret;
C_noret_decl(f_6849)
static void C_fcall f_6849(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9407)
static void C_fcall f_9407(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9405)
static void C_ccall f_9405(C_word c,C_word *av) C_noret;
C_noret_decl(f_9301)
static void C_ccall f_9301(C_word c,C_word *av) C_noret;
C_noret_decl(f_7124)
static void C_ccall f_7124(C_word c,C_word *av) C_noret;
C_noret_decl(f_7120)
static void C_ccall f_7120(C_word c,C_word *av) C_noret;
C_noret_decl(f_7607)
static void C_fcall f_7607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9102)
static void C_ccall f_9102(C_word c,C_word *av) C_noret;
C_noret_decl(f_7621)
static void C_ccall f_7621(C_word c,C_word *av) C_noret;
C_noret_decl(f_7615)
static void C_ccall f_7615(C_word c,C_word *av) C_noret;
C_noret_decl(f_5973)
static void C_ccall f_5973(C_word c,C_word *av) C_noret;
C_noret_decl(f_6486)
static void C_ccall f_6486(C_word c,C_word *av) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word *av) C_noret;
C_noret_decl(f_7116)
static void C_ccall f_7116(C_word c,C_word *av) C_noret;
C_noret_decl(f_7112)
static void C_ccall f_7112(C_word c,C_word *av) C_noret;
C_noret_decl(f_9262)
static void C_fcall f_9262(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7134)
static void C_ccall f_7134(C_word c,C_word *av) C_noret;
C_noret_decl(f_7138)
static void C_ccall f_7138(C_word c,C_word *av) C_noret;
C_noret_decl(f_6498)
static void C_ccall f_6498(C_word c,C_word *av) C_noret;
C_noret_decl(f_6490)
static void C_ccall f_6490(C_word c,C_word *av) C_noret;
C_noret_decl(f_7132)
static void C_ccall f_7132(C_word c,C_word *av) C_noret;
C_noret_decl(f_6165)
static void C_fcall f_6165(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4400)
static void C_ccall f_4400(C_word c,C_word *av) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word *av) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word *av) C_noret;
C_noret_decl(f_9252)
static void C_ccall f_9252(C_word c,C_word *av) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word *av) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word *av) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word *av) C_noret;
C_noret_decl(f_9455)
static void C_fcall f_9455(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3702)
static void C_ccall f_3702(C_word c,C_word *av) C_noret;
C_noret_decl(f_9258)
static void C_ccall f_9258(C_word c,C_word *av) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word *av) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word *av) C_noret;
C_noret_decl(f_5494)
static void C_ccall f_5494(C_word c,C_word *av) C_noret;
C_noret_decl(f_9285)
static void C_ccall f_9285(C_word c,C_word *av) C_noret;
C_noret_decl(f_9288)
static void C_ccall f_9288(C_word c,C_word *av) C_noret;
C_noret_decl(f_8238)
static void C_ccall f_8238(C_word c,C_word *av) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word *av) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word *av) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word *av) C_noret;
C_noret_decl(f_9273)
static void C_ccall f_9273(C_word c,C_word *av) C_noret;
C_noret_decl(f_8326)
static void C_ccall f_8326(C_word c,C_word *av) C_noret;
C_noret_decl(f_5994)
static void C_ccall f_5994(C_word c,C_word *av) C_noret;
C_noret_decl(f_5775)
static void C_ccall f_5775(C_word c,C_word *av) C_noret;
C_noret_decl(f_9270)
static void C_ccall f_9270(C_word c,C_word *av) C_noret;
C_noret_decl(f_5468)
static void C_ccall f_5468(C_word c,C_word *av) C_noret;
C_noret_decl(f_9277)
static void C_fcall f_9277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5752)
static void C_ccall f_5752(C_word c,C_word *av) C_noret;
C_noret_decl(f_9580)
static C_word C_fcall f_9580(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3);
C_noret_decl(f_5475)
static void C_fcall f_5475(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8328)
static void C_fcall f_8328(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9598)
static void C_ccall f_9598(C_word c,C_word *av) C_noret;
C_noret_decl(f_6402)
static void C_ccall f_6402(C_word c,C_word *av) C_noret;
C_noret_decl(f_10229)
static void C_ccall f_10229(C_word c,C_word *av) C_noret;
C_noret_decl(f_10227)
static void C_ccall f_10227(C_word c,C_word *av) C_noret;
C_noret_decl(f_6422)
static void C_fcall f_6422(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10233)
static void C_ccall f_10233(C_word c,C_word *av) C_noret;
C_noret_decl(f_8518)
static void C_ccall f_8518(C_word c,C_word *av) C_noret;
C_noret_decl(f_10247)
static void C_ccall f_10247(C_word c,C_word *av) C_noret;
C_noret_decl(f_6897)
static void C_fcall f_6897(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8516)
static void C_ccall f_8516(C_word c,C_word *av) C_noret;
C_noret_decl(f_10259)
static void C_ccall f_10259(C_word c,C_word *av) C_noret;
C_noret_decl(f_10251)
static void C_fcall f_10251(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3960)
static void C_fcall f_3960(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8312)
static void C_ccall f_8312(C_word c,C_word *av) C_noret;
C_noret_decl(f_8316)
static void C_ccall f_8316(C_word c,C_word *av) C_noret;
C_noret_decl(f_7948)
static C_word C_fcall f_7948(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_7941)
static void C_ccall f_7941(C_word c,C_word *av) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word *av) C_noret;
C_noret_decl(f_3985)
static void C_ccall f_3985(C_word c,C_word *av) C_noret;
C_noret_decl(f_7961)
static void C_fcall f_7961(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10207)
static void C_ccall f_10207(C_word c,C_word *av) C_noret;
C_noret_decl(f_10200)
static void C_ccall f_10200(C_word c,C_word *av) C_noret;
C_noret_decl(f_10214)
static void C_ccall f_10214(C_word c,C_word *av) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word *av) C_noret;
C_noret_decl(f_7905)
static void C_ccall f_7905(C_word c,C_word *av) C_noret;
C_noret_decl(f_7908)
static void C_ccall f_7908(C_word c,C_word *av) C_noret;
C_noret_decl(f_7959)
static void C_ccall f_7959(C_word c,C_word *av) C_noret;
C_noret_decl(f_5001)
static void C_ccall f_5001(C_word c,C_word *av) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word *av) C_noret;
C_noret_decl(f_7926)
static void C_ccall f_7926(C_word c,C_word *av) C_noret;
C_noret_decl(f_7922)
static void C_ccall f_7922(C_word c,C_word *av) C_noret;
C_noret_decl(f_7721)
static void C_fcall f_7721(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10266)
static void C_fcall f_10266(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10262)
static void C_ccall f_10262(C_word c,C_word *av) C_noret;
C_noret_decl(f_7919)
static void C_ccall f_7919(C_word c,C_word *av) C_noret;
C_noret_decl(f_7209)
static void C_ccall f_7209(C_word c,C_word *av) C_noret;
C_noret_decl(f_10274)
static void C_ccall f_10274(C_word c,C_word *av) C_noret;
C_noret_decl(f_10277)
static void C_ccall f_10277(C_word c,C_word *av) C_noret;
C_noret_decl(f_11351)
static void C_ccall f_11351(C_word c,C_word *av) C_noret;
C_noret_decl(f_10284)
static void C_ccall f_10284(C_word c,C_word *av) C_noret;
C_noret_decl(f_11365)
static void C_ccall f_11365(C_word c,C_word *av) C_noret;
C_noret_decl(f_7535)
static void C_ccall f_7535(C_word c,C_word *av) C_noret;
C_noret_decl(f_6447)
static void C_ccall f_6447(C_word c,C_word *av) C_noret;
C_noret_decl(f_7159)
static void C_ccall f_7159(C_word c,C_word *av) C_noret;
C_noret_decl(f_7156)
static void C_ccall f_7156(C_word c,C_word *av) C_noret;
C_noret_decl(f_7153)
static void C_ccall f_7153(C_word c,C_word *av) C_noret;
C_noret_decl(f_7150)
static void C_ccall f_7150(C_word c,C_word *av) C_noret;
C_noret_decl(f_5918)
static void C_fcall f_5918(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7559)
static void C_ccall f_7559(C_word c,C_word *av) C_noret;
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word *av) C_noret;
C_noret_decl(f_7172)
static void C_fcall f_7172(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7170)
static void C_ccall f_7170(C_word c,C_word *av) C_noret;
C_noret_decl(f_5931)
static void C_fcall f_5931(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5935)
static void C_ccall f_5935(C_word c,C_word *av) C_noret;
C_noret_decl(f_5939)
static void C_fcall f_5939(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9117)
static void C_ccall f_9117(C_word c,C_word *av) C_noret;
C_noret_decl(f_9084)
static void C_ccall f_9084(C_word c,C_word *av) C_noret;
C_noret_decl(f_5505)
static void C_ccall f_5505(C_word c,C_word *av) C_noret;
C_noret_decl(f_9119)
static void C_ccall f_9119(C_word c,C_word *av) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word *av) C_noret;
C_noret_decl(f_5924)
static void C_fcall f_5924(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9123)
static void C_ccall f_9123(C_word c,C_word *av) C_noret;
C_noret_decl(f_9077)
static void C_ccall f_9077(C_word c,C_word *av) C_noret;
C_noret_decl(f_11381)
static void C_fcall f_11381(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9071)
static void C_ccall f_9071(C_word c,C_word *av) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word *av) C_noret;
C_noret_decl(f_9138)
static void C_ccall f_9138(C_word c,C_word *av) C_noret;
C_noret_decl(f_11272)
static void C_ccall f_11272(C_word c,C_word *av) C_noret;
C_noret_decl(f_5943)
static void C_ccall f_5943(C_word c,C_word *av) C_noret;
C_noret_decl(f_9140)
static void C_ccall f_9140(C_word c,C_word *av) C_noret;
C_noret_decl(f_9144)
static void C_ccall f_9144(C_word c,C_word *av) C_noret;
C_noret_decl(f_7304)
static void C_ccall f_7304(C_word c,C_word *av) C_noret;
C_noret_decl(f_7306)
static void C_ccall f_7306(C_word c,C_word *av) C_noret;
C_noret_decl(f_9092)
static void C_fcall f_9092(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5246)
static void C_ccall f_5246(C_word c,C_word *av) C_noret;
C_noret_decl(f_7313)
static void C_ccall f_7313(C_word c,C_word *av) C_noret;
C_noret_decl(f_9810)
static void C_fcall f_9810(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7310)
static void C_ccall f_7310(C_word c,C_word *av) C_noret;
C_noret_decl(f_11348)
static void C_ccall f_11348(C_word c,C_word *av) C_noret;
C_noret_decl(f_11345)
static void C_ccall f_11345(C_word c,C_word *av) C_noret;
C_noret_decl(f_6811)
static void C_ccall f_6811(C_word c,C_word *av) C_noret;
C_noret_decl(f_6819)
static void C_ccall f_6819(C_word c,C_word *av) C_noret;
C_noret_decl(f_4887)
static void C_fcall f_4887(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8108)
static void C_ccall f_8108(C_word c,C_word *av) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word *av) C_noret;
C_noret_decl(f_6116)
static C_word C_fcall f_6116(C_word t0,C_word t1);
C_noret_decl(f_6073)
static void C_ccall f_6073(C_word c,C_word *av) C_noret;
C_noret_decl(f_11377)
static void C_ccall f_11377(C_word c,C_word *av) C_noret;
C_noret_decl(f_8106)
static void C_ccall f_8106(C_word c,C_word *av) C_noret;
C_noret_decl(f_7687)
static void C_fcall f_7687(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4102)
static void C_fcall f_4102(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word *av) C_noret;
C_noret_decl(f_6131)
static void C_fcall f_6131(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6129)
static void C_ccall f_6129(C_word c,C_word *av) C_noret;
C_noret_decl(f_7198)
static void C_ccall f_7198(C_word c,C_word *av) C_noret;
C_noret_decl(f_10452)
static void C_ccall f_10452(C_word c,C_word *av) C_noret;
C_noret_decl(f_6805)
static void C_fcall f_6805(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6809)
static void C_ccall f_6809(C_word c,C_word *av) C_noret;
C_noret_decl(f_8155)
static void C_ccall f_8155(C_word c,C_word *av) C_noret;
C_noret_decl(f_8151)
static void C_ccall f_8151(C_word c,C_word *av) C_noret;
C_noret_decl(f_10467)
static void C_ccall f_10467(C_word c,C_word *av) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word *av) C_noret;
C_noret_decl(f_4897)
static void C_ccall f_4897(C_word c,C_word *av) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word *av) C_noret;
C_noret_decl(f_7661)
static void C_ccall f_7661(C_word c,C_word *av) C_noret;
C_noret_decl(f_10493)
static void C_fcall f_10493(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4686)
static void C_ccall f_4686(C_word c,C_word *av) C_noret;
C_noret_decl(f_4682)
static void C_ccall f_4682(C_word c,C_word *av) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word *av) C_noret;
C_noret_decl(f_4576)
static void C_ccall f_4576(C_word c,C_word *av) C_noret;
C_noret_decl(f_8198)
static void C_ccall f_8198(C_word c,C_word *av) C_noret;
C_noret_decl(f_11519)
static void C_ccall f_11519(C_word c,C_word *av) C_noret;
C_noret_decl(f_11513)
static void C_ccall f_11513(C_word c,C_word *av) C_noret;
C_noret_decl(f_4569)
static void C_fcall f_4569(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4560)
static void C_ccall f_4560(C_word c,C_word *av) C_noret;
C_noret_decl(f_10471)
static void C_ccall f_10471(C_word c,C_word *av) C_noret;
C_noret_decl(f_10483)
static void C_ccall f_10483(C_word c,C_word *av) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word *av) C_noret;
C_noret_decl(f_4160)
static void C_ccall f_4160(C_word c,C_word *av) C_noret;
C_noret_decl(f_4199)
static void C_fcall f_4199(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10597)
static void C_ccall f_10597(C_word c,C_word *av) C_noret;
C_noret_decl(f_4197)
static void C_ccall f_4197(C_word c,C_word *av) C_noret;
C_noret_decl(f_11130)
static void C_ccall f_11130(C_word c,C_word *av) C_noret;
C_noret_decl(f_11124)
static void C_ccall f_11124(C_word c,C_word *av) C_noret;
C_noret_decl(f_11050)
static void C_ccall f_11050(C_word c,C_word *av) C_noret;
C_noret_decl(f_9954)
static void C_fcall f_9954(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4626)
static void C_ccall f_4626(C_word c,C_word *av) C_noret;
C_noret_decl(f_5236)
static void C_fcall f_5236(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11044)
static void C_ccall f_11044(C_word c,C_word *av) C_noret;
C_noret_decl(f_8895)
static void C_fcall f_8895(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10541)
static void C_fcall f_10541(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word *av) C_noret;
C_noret_decl(f_4619)
static void C_fcall f_4619(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11126)
static void C_ccall f_11126(C_word c,C_word *av) C_noret;
C_noret_decl(f_11046)
static void C_ccall f_11046(C_word c,C_word *av) C_noret;
C_noret_decl(f_5226)
static void C_ccall f_5226(C_word c,C_word *av) C_noret;
C_noret_decl(f_5224)
static void C_ccall f_5224(C_word c,C_word *av) C_noret;
C_noret_decl(f_11034)
static void C_ccall f_11034(C_word c,C_word *av) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word *av) C_noret;
C_noret_decl(f_8861)
static void C_fcall f_8861(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word *av) C_noret;
C_noret_decl(f_7449)
static void C_ccall f_7449(C_word c,C_word *av) C_noret;
C_noret_decl(f_11027)
static void C_ccall f_11027(C_word c,C_word *av) C_noret;
C_noret_decl(f_9190)
static void C_ccall f_9190(C_word c,C_word *av) C_noret;
C_noret_decl(f_9192)
static void C_ccall f_9192(C_word c,C_word *av) C_noret;
C_noret_decl(f_11017)
static void C_ccall f_11017(C_word c,C_word *av) C_noret;
C_noret_decl(f_11152)
static void C_ccall f_11152(C_word c,C_word *av) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word *av) C_noret;
C_noret_decl(f_9172)
static void C_ccall f_9172(C_word c,C_word *av) C_noret;
C_noret_decl(f_9168)
static void C_ccall f_9168(C_word c,C_word *av) C_noret;
C_noret_decl(f_9166)
static void C_ccall f_9166(C_word c,C_word *av) C_noret;
C_noret_decl(f_6205)
static void C_ccall f_6205(C_word c,C_word *av) C_noret;
C_noret_decl(f_9047)
static void C_ccall f_9047(C_word c,C_word *av) C_noret;
C_noret_decl(f_9049)
static void C_ccall f_9049(C_word c,C_word *av) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word *av) C_noret;
C_noret_decl(f_9063)
static void C_ccall f_9063(C_word c,C_word *av) C_noret;
C_noret_decl(f_9906)
static void C_fcall f_9906(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9056)
static void C_ccall f_9056(C_word c,C_word *av) C_noret;
C_noret_decl(f_7509)
static void C_ccall f_7509(C_word c,C_word *av) C_noret;
C_noret_decl(f_9053)
static void C_ccall f_9053(C_word c,C_word *av) C_noret;
C_noret_decl(f_6537)
static void C_ccall f_6537(C_word c,C_word *av) C_noret;
C_noret_decl(f_5853)
static void C_ccall f_5853(C_word c,C_word *av) C_noret;
C_noret_decl(f_5856)
static void C_ccall f_5856(C_word c,C_word *av) C_noret;
C_noret_decl(f_6521)
static void C_ccall f_6521(C_word c,C_word *av) C_noret;
C_noret_decl(f_5654)
static void C_ccall f_5654(C_word c,C_word *av) C_noret;
C_noret_decl(f_5652)
static void C_ccall f_5652(C_word c,C_word *av) C_noret;
C_noret_decl(f_7052)
static void C_fcall f_7052(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7050)
static void C_ccall f_7050(C_word c,C_word *av) C_noret;
C_noret_decl(f_5658)
static void C_ccall f_5658(C_word c,C_word *av) C_noret;
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word *av) C_noret;
C_noret_decl(f_7843)
static void C_ccall f_7843(C_word c,C_word *av) C_noret;
C_noret_decl(f_5664)
static void C_ccall f_5664(C_word c,C_word *av) C_noret;
C_noret_decl(f_5661)
static void C_ccall f_5661(C_word c,C_word *av) C_noret;
C_noret_decl(f_7841)
static void C_ccall f_7841(C_word c,C_word *av) C_noret;
C_noret_decl(f_5667)
static void C_ccall f_5667(C_word c,C_word *av) C_noret;
C_noret_decl(f_6287)
static void C_fcall f_6287(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6285)
static void C_ccall f_6285(C_word c,C_word *av) C_noret;
C_noret_decl(f_9381)
static void C_ccall f_9381(C_word c,C_word *av) C_noret;
C_noret_decl(f_9377)
static void C_ccall f_9377(C_word c,C_word *av) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word *av) C_noret;
C_noret_decl(f_6271)
static C_word C_fcall f_6271(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word *av) C_noret;
C_noret_decl(f_4501)
static void C_fcall f_4501(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3805)
static void C_ccall f_3805(C_word c,C_word *av) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word *av) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word *av) C_noret;
C_noret_decl(f_5674)
static void C_fcall f_5674(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5394)
static void C_ccall f_5394(C_word c,C_word *av) C_noret;
C_noret_decl(f_8110)
static void C_fcall f_8110(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8114)
static void C_ccall f_8114(C_word c,C_word *av) C_noret;
C_noret_decl(f_5388)
static void C_ccall f_5388(C_word c,C_word *av) C_noret;
C_noret_decl(f_5361)
static void C_ccall f_5361(C_word c,C_word *av) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word *av) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word *av) C_noret;
C_noret_decl(f_8123)
static void C_fcall f_8123(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8126)
static void C_ccall f_8126(C_word c,C_word *av) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word *av) C_noret;
C_noret_decl(f_5372)
static void C_ccall f_5372(C_word c,C_word *av) C_noret;
C_noret_decl(f_8135)
static void C_fcall f_8135(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word *av) C_noret;
C_noret_decl(f_5865)
static void C_ccall f_5865(C_word c,C_word *av) C_noret;
C_noret_decl(f_4649)
static void C_ccall f_4649(C_word c,C_word *av) C_noret;
C_noret_decl(f_4832)
static void C_ccall f_4832(C_word c,C_word *av) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word *av) C_noret;
C_noret_decl(f_8833)
static void C_ccall f_8833(C_word c,C_word *av) C_noret;
C_noret_decl(f_4638)
static void C_fcall f_4638(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9393)
static void C_ccall f_9393(C_word c,C_word *av) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word *av) C_noret;
C_noret_decl(f_4828)
static void C_ccall f_4828(C_word c,C_word *av) C_noret;
C_noret_decl(f_8009)
static void C_ccall f_8009(C_word c,C_word *av) C_noret;
C_noret_decl(f_5897)
static void C_ccall f_5897(C_word c,C_word *av) C_noret;
C_noret_decl(f_5899)
static void C_fcall f_5899(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8015)
static void C_ccall f_8015(C_word c,C_word *av) C_noret;
C_noret_decl(f_8011)
static void C_ccall f_8011(C_word c,C_word *av) C_noret;
C_noret_decl(f_8025)
static void C_fcall f_8025(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8086)
static void C_ccall f_8086(C_word c,C_word *av) C_noret;
C_noret_decl(f_7108)
static void C_ccall f_7108(C_word c,C_word *av) C_noret;
C_noret_decl(f_8067)
static void C_ccall f_8067(C_word c,C_word *av) C_noret;
C_noret_decl(f_8926)
static void C_ccall f_8926(C_word c,C_word *av) C_noret;
C_noret_decl(f_8939)
static void C_fcall f_8939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8933)
static void C_ccall f_8933(C_word c,C_word *av) C_noret;
C_noret_decl(f_7630)
static void C_ccall f_7630(C_word c,C_word *av) C_noret;
C_noret_decl(f_7467)
static void C_ccall f_7467(C_word c,C_word *av) C_noret;
C_noret_decl(f_7627)
static void C_ccall f_7627(C_word c,C_word *av) C_noret;
C_noret_decl(f_7479)
static void C_ccall f_7479(C_word c,C_word *av) C_noret;
C_noret_decl(f_7475)
static void C_ccall f_7475(C_word c,C_word *av) C_noret;
C_noret_decl(f_7637)
static void C_fcall f_7637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7633)
static void C_ccall f_7633(C_word c,C_word *av) C_noret;
C_noret_decl(f_7651)
static void C_ccall f_7651(C_word c,C_word *av) C_noret;
C_noret_decl(f_7489)
static void C_fcall f_7489(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8964)
static void C_ccall f_8964(C_word c,C_word *av) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word *av) C_noret;
C_noret_decl(f_7077)
static void C_ccall f_7077(C_word c,C_word *av) C_noret;
C_noret_decl(f_7648)
static void C_ccall f_7648(C_word c,C_word *av) C_noret;
C_noret_decl(f_7645)
static void C_ccall f_7645(C_word c,C_word *av) C_noret;
C_noret_decl(f_7040)
static void C_ccall f_7040(C_word c,C_word *av) C_noret;
C_noret_decl(f_7495)
static void C_fcall f_7495(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7654)
static void C_ccall f_7654(C_word c,C_word *av) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word *av) C_noret;
C_noret_decl(f_8745)
static void C_ccall f_8745(C_word c,C_word *av) C_noret;
C_noret_decl(f_8739)
static void C_ccall f_8739(C_word c,C_word *av) C_noret;
C_noret_decl(f_8747)
static void C_fcall f_8747(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5832)
static void C_ccall f_5832(C_word c,C_word *av) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word *av) C_noret;
C_noret_decl(f_9602)
static void C_ccall f_9602(C_word c,C_word *av) C_noret;
C_noret_decl(f_5838)
static void C_ccall f_5838(C_word c,C_word *av) C_noret;
C_noret_decl(f_11167)
static void C_fcall f_11167(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4906)
static void C_fcall f_4906(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11081)
static void C_ccall f_11081(C_word c,C_word *av) C_noret;
C_noret_decl(f_11075)
static void C_ccall f_11075(C_word c,C_word *av) C_noret;
C_noret_decl(f_11077)
static void C_ccall f_11077(C_word c,C_word *av) C_noret;
C_noret_decl(f_11474)
static void C_ccall f_11474(C_word c,C_word *av) C_noret;
C_noret_decl(f_11478)
static void C_ccall f_11478(C_word c,C_word *av) C_noret;
C_noret_decl(f_11061)
static void C_ccall f_11061(C_word c,C_word *av) C_noret;
C_noret_decl(f_11063)
static void C_ccall f_11063(C_word c,C_word *av) C_noret;
C_noret_decl(f_9644)
static void C_fcall f_9644(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8658)
static void C_ccall f_8658(C_word c,C_word *av) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word *av) C_noret;
C_noret_decl(f_11493)
static void C_ccall f_11493(C_word c,C_word *av) C_noret;
C_noret_decl(f_7567)
static void C_ccall f_7567(C_word c,C_word *av) C_noret;
C_noret_decl(f_9618)
static void C_ccall f_9618(C_word c,C_word *av) C_noret;
C_noret_decl(f_6510)
static void C_ccall f_6510(C_word c,C_word *av) C_noret;
C_noret_decl(f_10346)
static void C_fcall f_10346(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7578)
static void C_ccall f_7578(C_word c,C_word *av) C_noret;
C_noret_decl(f_8633)
static void C_ccall f_8633(C_word c,C_word *av) C_noret;
C_noret_decl(f_10972)
static void C_ccall f_10972(C_word c,C_word *av) C_noret;
C_noret_decl(f_8637)
static void C_ccall f_8637(C_word c,C_word *av) C_noret;
C_noret_decl(f_7575)
static void C_ccall f_7575(C_word c,C_word *av) C_noret;
C_noret_decl(f_10975)
static void C_fcall f_10975(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10898)
static void C_ccall f_10898(C_word c,C_word *av) C_noret;
C_noret_decl(f_6222)
static void C_ccall f_6222(C_word c,C_word *av) C_noret;
C_noret_decl(f_6225)
static void C_ccall f_6225(C_word c,C_word *av) C_noret;
C_noret_decl(f_6228)
static void C_ccall f_6228(C_word c,C_word *av) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word *av) C_noret;
C_noret_decl(f_4953)
static void C_fcall f_4953(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6500)
static void C_ccall f_6500(C_word c,C_word *av) C_noret;
C_noret_decl(f_6507)
static void C_ccall f_6507(C_word c,C_word *av) C_noret;
C_noret_decl(f_6504)
static void C_ccall f_6504(C_word c,C_word *av) C_noret;
C_noret_decl(f_7581)
static void C_ccall f_7581(C_word c,C_word *av) C_noret;
C_noret_decl(f_6213)
static void C_ccall f_6213(C_word c,C_word *av) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215(C_word c,C_word *av) C_noret;
C_noret_decl(f_6219)
static void C_ccall f_6219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4989)
static void C_ccall f_4989(C_word c,C_word *av) C_noret;
C_noret_decl(f_7599)
static void C_ccall f_7599(C_word c,C_word *av) C_noret;
C_noret_decl(f_7590)
static void C_ccall f_7590(C_word c,C_word *av) C_noret;
C_noret_decl(f_7591)
static void C_fcall f_7591(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6243)
static void C_fcall f_6243(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6240)
static void C_fcall f_6240(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6246)
static void C_fcall f_6246(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word *av) C_noret;
C_noret_decl(f_10336)
static void C_ccall f_10336(C_word c,C_word *av) C_noret;
C_noret_decl(f_10886)
static void C_ccall f_10886(C_word c,C_word *av) C_noret;
C_noret_decl(f_7874)
static void C_fcall f_7874(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10882)
static void C_ccall f_10882(C_word c,C_word *av) C_noret;
C_noret_decl(f_7872)
static void C_ccall f_7872(C_word c,C_word *av) C_noret;
C_noret_decl(f_10880)
static void C_ccall f_10880(C_word c,C_word *av) C_noret;
C_noret_decl(f_5141)
static void C_fcall f_5141(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10998)
static void C_fcall f_10998(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6231)
static void C_ccall f_6231(C_word c,C_word *av) C_noret;
C_noret_decl(f_6236)
static void C_ccall f_6236(C_word c,C_word *av) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word *av) C_noret;
C_noret_decl(f_6234)
static void C_ccall f_6234(C_word c,C_word *av) C_noret;
C_noret_decl(f_3823)
static void C_ccall f_3823(C_word c,C_word *av) C_noret;
C_noret_decl(f_3821)
static void C_ccall f_3821(C_word c,C_word *av) C_noret;
C_noret_decl(f_7899)
static void C_ccall f_7899(C_word c,C_word *av) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word *av) C_noret;
C_noret_decl(f_3839)
static void C_ccall f_3839(C_word c,C_word *av) C_noret;
C_noret_decl(f_8973)
static void C_fcall f_8973(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3714)
static void C_ccall f_3714(C_word c,C_word *av) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word *av) C_noret;
C_noret_decl(f_3718)
static void C_ccall f_3718(C_word c,C_word *av) C_noret;
C_noret_decl(f_7861)
static void C_ccall f_7861(C_word c,C_word *av) C_noret;
C_noret_decl(f_5132)
static void C_ccall f_5132(C_word c,C_word *av) C_noret;
C_noret_decl(f_10955)
static void C_ccall f_10955(C_word c,C_word *av) C_noret;
C_noret_decl(f_10957)
static void C_ccall f_10957(C_word c,C_word *av) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word *av) C_noret;
C_noret_decl(f_8480)
static void C_fcall f_8480(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_fcall f_4780(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8986)
static void C_ccall f_8986(C_word c,C_word *av) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word *av) C_noret;
C_noret_decl(f_10961)
static void C_ccall f_10961(C_word c,C_word *av) C_noret;
C_noret_decl(f_3817)
static void C_ccall f_3817(C_word c,C_word *av) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word *av) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word *av) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word *av) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word *av) C_noret;
C_noret_decl(f_3730)
static void C_ccall f_3730(C_word c,C_word *av) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word *av) C_noret;
C_noret_decl(f_8683)
static void C_ccall f_8683(C_word c,C_word *av) C_noret;
C_noret_decl(f_10394)
static void C_fcall f_10394(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8684)
static void C_ccall f_8684(C_word c,C_word *av) C_noret;
C_noret_decl(f_5162)
static void C_ccall f_5162(C_word c,C_word *av) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word *av) C_noret;
C_noret_decl(f_4776)
static void C_ccall f_4776(C_word c,C_word *av) C_noret;
C_noret_decl(f_8070)
static void C_ccall f_8070(C_word c,C_word *av) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word *av) C_noret;
C_noret_decl(f_8695)
static void C_ccall f_8695(C_word c,C_word *av) C_noret;
C_noret_decl(f_4297)
static void C_fcall f_4297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word *av) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word *av) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word *av) C_noret;
C_noret_decl(f_8665)
static void C_fcall f_8665(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8661)
static void C_ccall f_8661(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_8052)
static void C_ccall f_8052(C_word c,C_word *av) C_noret;
C_noret_decl(f_8673)
static void C_ccall f_8673(C_word c,C_word *av) C_noret;
C_noret_decl(f_8677)
static void C_ccall f_8677(C_word c,C_word *av) C_noret;
C_noret_decl(f_4995)
static void C_ccall f_4995(C_word c,C_word *av) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word *av) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word *av) C_noret;
C_noret_decl(f_8772)
static void C_ccall f_8772(C_word c,C_word *av) C_noret;
C_noret_decl(f_8785)
static void C_fcall f_8785(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4702)
static void C_ccall f_4702(C_word c,C_word *av) C_noret;
C_noret_decl(f_4718)
static void C_ccall f_4718(C_word c,C_word *av) C_noret;
C_noret_decl(f_8796)
static void C_ccall f_8796(C_word c,C_word *av) C_noret;
C_noret_decl(f_10844)
static void C_fcall f_10844(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6950)
static void C_ccall f_6950(C_word c,C_word *av) C_noret;
C_noret_decl(f_7343)
static void C_ccall f_7343(C_word c,C_word *av) C_noret;
C_noret_decl(f_9858)
static void C_fcall f_9858(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5459)
static void C_ccall f_5459(C_word c,C_word *av) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word *av) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word *av) C_noret;
C_noret_decl(f_5531)
static void C_ccall f_5531(C_word c,C_word *av) C_noret;
C_noret_decl(f_6961)
static void C_ccall f_6961(C_word c,C_word *av) C_noret;
C_noret_decl(f_10308)
static void C_ccall f_10308(C_word c,C_word *av) C_noret;
C_noret_decl(f_9740)
static void C_fcall f_9740(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9747)
static void C_fcall f_9747(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5521)
static void C_ccall f_5521(C_word c,C_word *av) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word *av) C_noret;
C_noret_decl(f_5554)
static void C_ccall f_5554(C_word c,C_word *av) C_noret;
C_noret_decl(f_10324)
static void C_ccall f_10324(C_word c,C_word *av) C_noret;
C_noret_decl(f_10320)
static void C_ccall f_10320(C_word c,C_word *av) C_noret;
C_noret_decl(f_10835)
static void C_ccall f_10835(C_word c,C_word *av) C_noret;
C_noret_decl(f_6736)
static void C_ccall f_6736(C_word c,C_word *av) C_noret;
C_noret_decl(f_6733)
static void C_ccall f_6733(C_word c,C_word *av) C_noret;
C_noret_decl(f_7712)
static void C_ccall f_7712(C_word c,C_word *av) C_noret;
C_noret_decl(f_6730)
static void C_ccall f_6730(C_word c,C_word *av) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word *av) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word *av) C_noret;
C_noret_decl(f_6754)
static void C_ccall f_6754(C_word c,C_word *av) C_noret;
C_noret_decl(f_6751)
static void C_ccall f_6751(C_word c,C_word *av) C_noret;
C_noret_decl(f_6757)
static void C_ccall f_6757(C_word c,C_word *av) C_noret;
C_noret_decl(f_6366)
static void C_ccall f_6366(C_word c,C_word *av) C_noret;
C_noret_decl(f_6623)
static void C_ccall f_6623(C_word c,C_word *av) C_noret;
C_noret_decl(f_7755)
static void C_fcall f_7755(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6998)
static void C_ccall f_6998(C_word c,C_word *av) C_noret;
C_noret_decl(f_6398)
static void C_ccall f_6398(C_word c,C_word *av) C_noret;
C_noret_decl(f_6391)
static void C_ccall f_6391(C_word c,C_word *av) C_noret;
C_noret_decl(f_5182)
static void C_ccall f_5182(C_word c,C_word *av) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word *av) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word *av) C_noret;
C_noret_decl(f_5198)
static void C_ccall f_5198(C_word c,C_word *av) C_noret;
C_noret_decl(f_5191)
static void C_fcall f_5191(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8603)
static void C_ccall f_8603(C_word c,C_word *av) C_noret;
C_noret_decl(f_8436)
static void C_ccall f_8436(C_word c,C_word *av) C_noret;
C_noret_decl(f_8434)
static void C_ccall f_8434(C_word c,C_word *av) C_noret;
C_noret_decl(f_5176)
static void C_ccall f_5176(C_word c,C_word *av) C_noret;
C_noret_decl(f_8610)
static void C_ccall f_8610(C_word c,C_word *av) C_noret;
C_noret_decl(f_8440)
static void C_ccall f_8440(C_word c,C_word *av) C_noret;
C_noret_decl(f_8446)
static void C_fcall f_8446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5173)
static void C_ccall f_5173(C_word c,C_word *av) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word *av) C_noret;
C_noret_decl(f_5574)
static void C_ccall f_5574(C_word c,C_word *av) C_noret;
C_noret_decl(f_9988)
static void C_fcall f_9988(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word *av) C_noret;
C_noret_decl(f_8410)
static void C_fcall f_8410(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4243)
static void C_fcall f_4243(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word *av) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word *av) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word *av) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word *av) C_noret;
C_noret_decl(f_9979)
static void C_ccall f_9979(C_word c,C_word *av) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word *av) C_noret;
C_noret_decl(f_4749)
static void C_ccall f_4749(C_word c,C_word *av) C_noret;
C_noret_decl(f_10022)
static void C_fcall f_10022(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word *av) C_noret;
C_noret_decl(f_3766)
static void C_ccall f_3766(C_word c,C_word *av) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word *av) C_noret;
C_noret_decl(f_10126)
static void C_ccall f_10126(C_word c,C_word *av) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word *av) C_noret;
C_noret_decl(f_10128)
static void C_ccall f_10128(C_word c,C_word *av) C_noret;
C_noret_decl(f_10921)
static void C_fcall f_10921(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word *av) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word *av) C_noret;
C_noret_decl(f_5260)
static void C_fcall f_5260(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8712)
static void C_fcall f_8712(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8710)
static void C_ccall f_8710(C_word c,C_word *av) C_noret;
C_noret_decl(f_10132)
static void C_ccall f_10132(C_word c,C_word *av) C_noret;
C_noret_decl(f_10150)
static void C_ccall f_10150(C_word c,C_word *av) C_noret;
C_noret_decl(f_10047)
static void C_ccall f_10047(C_word c,C_word *av) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787(C_word c,C_word *av) C_noret;
C_noret_decl(f_6667)
static void C_ccall f_6667(C_word c,C_word *av) C_noret;
C_noret_decl(f_3784)
static void C_ccall f_3784(C_word c,C_word *av) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word *av) C_noret;
C_noret_decl(f_10147)
static void C_ccall f_10147(C_word c,C_word *av) C_noret;
C_noret_decl(f_6781)
static void C_ccall f_6781(C_word c,C_word *av) C_noret;
C_noret_decl(f_10144)
static void C_ccall f_10144(C_word c,C_word *av) C_noret;
C_noret_decl(f_10141)
static void C_ccall f_10141(C_word c,C_word *av) C_noret;
C_noret_decl(f_10056)
static void C_fcall f_10056(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word *av) C_noret;
C_noret_decl(f_3684)
static void C_ccall f_3684(C_word c,C_word *av) C_noret;
C_noret_decl(f_3681)
static void C_ccall f_3681(C_word c,C_word *av) C_noret;
C_noret_decl(f_6692)
static void C_ccall f_6692(C_word c,C_word *av) C_noret;
C_noret_decl(f_6698)
static void C_fcall f_6698(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6696)
static void C_ccall f_6696(C_word c,C_word *av) C_noret;
C_noret_decl(f_8731)
static void C_fcall f_8731(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6690)
static void C_ccall f_6690(C_word c,C_word *av) C_noret;
C_noret_decl(f_10810)
static void C_fcall f_10810(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3678)
static void C_ccall f_3678(C_word c,C_word *av) C_noret;
C_noret_decl(f_3675)
static void C_ccall f_3675(C_word c,C_word *av) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word *av) C_noret;
C_noret_decl(f_9692)
static void C_fcall f_9692(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word *av) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word *av) C_noret;
C_noret_decl(f_10013)
static void C_ccall f_10013(C_word c,C_word *av) C_noret;
C_noret_decl(f_10801)
static void C_ccall f_10801(C_word c,C_word *av) C_noret;
C_noret_decl(f_6779)
static void C_ccall f_6779(C_word c,C_word *av) C_noret;
C_noret_decl(f_6767)
static void C_ccall f_6767(C_word c,C_word *av) C_noret;
C_noret_decl(f_5117)
static void C_ccall f_5117(C_word c,C_word *av) C_noret;
C_noret_decl(f_6760)
static void C_ccall f_6760(C_word c,C_word *av) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word *av) C_noret;
C_noret_decl(f_6795)
static void C_ccall f_6795(C_word c,C_word *av) C_noret;
C_noret_decl(f_3799)
static void C_ccall f_3799(C_word c,C_word *av) C_noret;
C_noret_decl(f_3790)
static void C_ccall f_3790(C_word c,C_word *av) C_noret;
C_noret_decl(f_6791)
static void C_ccall f_6791(C_word c,C_word *av) C_noret;
C_noret_decl(f_5101)
static void C_ccall f_5101(C_word c,C_word *av) C_noret;
C_noret_decl(f_3793)
static void C_ccall f_3793(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word *av) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word *av) C_noret;
C_noret_decl(f_3690)
static void C_ccall f_3690(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_3896)
static void C_ccall f_3896(C_word c,C_word *av) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word *av) C_noret;
C_noret_decl(f_7837)
static void C_ccall f_7837(C_word c,C_word *av) C_noret;
C_noret_decl(f_7833)
static void C_ccall f_7833(C_word c,C_word *av) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word *av) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word *av) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word *av) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word *av) C_noret;
C_noret_decl(f_5123)
static void C_ccall f_5123(C_word c,C_word *av) C_noret;
C_noret_decl(f_7858)
static void C_ccall f_7858(C_word c,C_word *av) C_noret;
C_noret_decl(f_7855)
static void C_ccall f_7855(C_word c,C_word *av) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751(C_word c,C_word *av) C_noret;
C_noret_decl(f_10179)
static void C_fcall f_10179(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3754)
static void C_ccall f_3754(C_word c,C_word *av) C_noret;
C_noret_decl(f_10190)
static void C_ccall f_10190(C_word c,C_word *av) C_noret;
C_noret_decl(f_7353)
static void C_ccall f_7353(C_word c,C_word *av) C_noret;
C_noret_decl(f_10090)
static void C_fcall f_10090(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9011)
static void C_fcall f_9011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7377)
static void C_ccall f_7377(C_word c,C_word *av) C_noret;
C_noret_decl(f_7385)
static void C_ccall f_7385(C_word c,C_word *av) C_noret;
C_noret_decl(f_7381)
static void C_ccall f_7381(C_word c,C_word *av) C_noret;
C_noret_decl(f_11568)
static void C_ccall f_11568(C_word c,C_word *av) C_noret;
C_noret_decl(f_7399)
static void C_ccall f_7399(C_word c,C_word *av) C_noret;
C_noret_decl(f_7395)
static void C_ccall f_7395(C_word c,C_word *av) C_noret;
C_noret_decl(f_7393)
static void C_ccall f_7393(C_word c,C_word *av) C_noret;
C_noret_decl(f_7288)
static void C_ccall f_7288(C_word c,C_word *av) C_noret;
C_noret_decl(f_11543)
static void C_fcall f_11543(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8535)
static void C_fcall f_8535(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8530)
static void C_ccall f_8530(C_word c,C_word *av) C_noret;
C_noret_decl(f_9211)
static void C_ccall f_9211(C_word c,C_word *av) C_noret;
C_noret_decl(f_9219)
static void C_ccall f_9219(C_word c,C_word *av) C_noret;
C_noret_decl(f_11539)
static void C_ccall f_11539(C_word c,C_word *av) C_noret;
C_noret_decl(f_8284)
static void C_ccall f_8284(C_word c,C_word *av) C_noret;
C_noret_decl(f_9510)
static void C_fcall f_9510(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9318)
static void C_ccall f_9318(C_word c,C_word *av) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word *av) C_noret;
C_noret_decl(f_9222)
static void C_ccall f_9222(C_word c,C_word *av) C_noret;
C_noret_decl(f_9225)
static void C_ccall f_9225(C_word c,C_word *av) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word *av) C_noret;
C_noret_decl(f_11581)
static void C_ccall f_11581(C_word c,C_word *av) C_noret;
C_noret_decl(f_9329)
static void C_ccall f_9329(C_word c,C_word *av) C_noret;
C_noret_decl(f_9234)
static void C_ccall f_9234(C_word c,C_word *av) C_noret;
C_noret_decl(f_8264)
static void C_ccall f_8264(C_word c,C_word *av) C_noret;
C_noret_decl(f_8260)
static void C_ccall f_8260(C_word c,C_word *av) C_noret;
C_noret_decl(f_8522)
static void C_ccall f_8522(C_word c,C_word *av) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word *av) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word *av) C_noret;
C_noret_decl(f_5644)
static void C_ccall f_5644(C_word c,C_word *av) C_noret;
C_noret_decl(f_9240)
static void C_ccall f_9240(C_word c,C_word *av) C_noret;
C_noret_decl(f_9244)
static void C_fcall f_9244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8278)
static void C_ccall f_8278(C_word c,C_word *av) C_noret;
C_noret_decl(f_11585)
static void C_ccall f_11585(C_word c,C_word *av) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word *av) C_noret;
C_noret_decl(f_5726)
static void C_ccall f_5726(C_word c,C_word *av) C_noret;
C_noret_decl(f_11579)
static void C_ccall f_11579(C_word c,C_word *av) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word *av) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word *av) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word *av) C_noret;
C_noret_decl(f_6704)
static void C_fcall f_6704(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7418)
static void C_ccall f_7418(C_word c,C_word *av) C_noret;
C_noret_decl(f_8258)
static void C_ccall f_8258(C_word c,C_word *av) C_noret;
C_noret_decl(f_8254)
static void C_ccall f_8254(C_word c,C_word *av) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word *av) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word *av) C_noret;
C_noret_decl(f_8306)
static void C_ccall f_8306(C_word c,C_word *av) C_noret;
C_noret_decl(f_5749)
static void C_ccall f_5749(C_word c,C_word *av) C_noret;
C_noret_decl(f_7426)
static void C_ccall f_7426(C_word c,C_word *av) C_noret;
C_noret_decl(f_7428)
static void C_fcall f_7428(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6613)
static void C_ccall f_6613(C_word c,C_word *av) C_noret;
C_noret_decl(f_7422)
static void C_ccall f_7422(C_word c,C_word *av) C_noret;
C_noret_decl(f_6617)
static void C_ccall f_6617(C_word c,C_word *av) C_noret;
C_noret_decl(f_6619)
static void C_ccall f_6619(C_word c,C_word *av) C_noret;
C_noret_decl(f_9503)
static void C_fcall f_9503(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609(C_word c,C_word *av) C_noret;
C_noret_decl(f_7296)
static void C_ccall f_7296(C_word c,C_word *av) C_noret;
C_noret_decl(f_7292)
static void C_ccall f_7292(C_word c,C_word *av) C_noret;
C_noret_decl(f_6637)
static void C_ccall f_6637(C_word c,C_word *av) C_noret;
C_noret_decl(f_6745)
static void C_ccall f_6745(C_word c,C_word *av) C_noret;
C_noret_decl(f_6742)
static void C_ccall f_6742(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10742)
static void C_ccall trf_10742(C_word c,C_word *av) C_noret;
static void C_ccall trf_10742(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10742(t0,t1,t2);}

C_noret_decl(trf_3920)
static void C_ccall trf_3920(C_word c,C_word *av) C_noret;
static void C_ccall trf_3920(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3920(t0,t1,t2);}

C_noret_decl(trf_10776)
static void C_ccall trf_10776(C_word c,C_word *av) C_noret;
static void C_ccall trf_10776(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10776(t0,t1,t2);}

C_noret_decl(trf_7789)
static void C_ccall trf_7789(C_word c,C_word *av) C_noret;
static void C_ccall trf_7789(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7789(t0,t1,t2);}

C_noret_decl(trf_11329)
static void C_ccall trf_11329(C_word c,C_word *av) C_noret;
static void C_ccall trf_11329(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11329(t0,t1,t2,t3);}

C_noret_decl(trf_8376)
static void C_ccall trf_8376(C_word c,C_word *av) C_noret;
static void C_ccall trf_8376(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8376(t0,t1,t2);}

C_noret_decl(trf_4467)
static void C_ccall trf_4467(C_word c,C_word *av) C_noret;
static void C_ccall trf_4467(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4467(t0,t1,t2);}

C_noret_decl(trf_4046)
static void C_ccall trf_4046(C_word c,C_word *av) C_noret;
static void C_ccall trf_4046(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4046(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10694)
static void C_ccall trf_10694(C_word c,C_word *av) C_noret;
static void C_ccall trf_10694(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10694(t0,t1,t2,t3);}

C_noret_decl(trf_10674)
static void C_ccall trf_10674(C_word c,C_word *av) C_noret;
static void C_ccall trf_10674(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10674(t0,t1,t2);}

C_noret_decl(trf_11244)
static void C_ccall trf_11244(C_word c,C_word *av) C_noret;
static void C_ccall trf_11244(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11244(t0,t1,t2);}

C_noret_decl(trf_10624)
static void C_ccall trf_10624(C_word c,C_word *av) C_noret;
static void C_ccall trf_10624(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10624(t0,t1,t2,t3);}

C_noret_decl(trf_6849)
static void C_ccall trf_6849(C_word c,C_word *av) C_noret;
static void C_ccall trf_6849(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6849(t0,t1,t2,t3);}

C_noret_decl(trf_9407)
static void C_ccall trf_9407(C_word c,C_word *av) C_noret;
static void C_ccall trf_9407(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9407(t0,t1,t2,t3);}

C_noret_decl(trf_7607)
static void C_ccall trf_7607(C_word c,C_word *av) C_noret;
static void C_ccall trf_7607(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7607(t0,t1,t2);}

C_noret_decl(trf_9262)
static void C_ccall trf_9262(C_word c,C_word *av) C_noret;
static void C_ccall trf_9262(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9262(t0,t1);}

C_noret_decl(trf_6165)
static void C_ccall trf_6165(C_word c,C_word *av) C_noret;
static void C_ccall trf_6165(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6165(t0,t1,t2);}

C_noret_decl(trf_9455)
static void C_ccall trf_9455(C_word c,C_word *av) C_noret;
static void C_ccall trf_9455(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9455(t0,t1,t2,t3);}

C_noret_decl(trf_9277)
static void C_ccall trf_9277(C_word c,C_word *av) C_noret;
static void C_ccall trf_9277(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9277(t0,t1);}

C_noret_decl(trf_5475)
static void C_ccall trf_5475(C_word c,C_word *av) C_noret;
static void C_ccall trf_5475(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5475(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8328)
static void C_ccall trf_8328(C_word c,C_word *av) C_noret;
static void C_ccall trf_8328(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8328(t0,t1,t2,t3);}

C_noret_decl(trf_6422)
static void C_ccall trf_6422(C_word c,C_word *av) C_noret;
static void C_ccall trf_6422(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6422(t0,t1,t2);}

C_noret_decl(trf_6897)
static void C_ccall trf_6897(C_word c,C_word *av) C_noret;
static void C_ccall trf_6897(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6897(t0,t1,t2,t3);}

C_noret_decl(trf_10251)
static void C_ccall trf_10251(C_word c,C_word *av) C_noret;
static void C_ccall trf_10251(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10251(t0,t1);}

C_noret_decl(trf_3960)
static void C_ccall trf_3960(C_word c,C_word *av) C_noret;
static void C_ccall trf_3960(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3960(t0,t1,t2);}

C_noret_decl(trf_7961)
static void C_ccall trf_7961(C_word c,C_word *av) C_noret;
static void C_ccall trf_7961(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7961(t0,t1,t2);}

C_noret_decl(trf_7721)
static void C_ccall trf_7721(C_word c,C_word *av) C_noret;
static void C_ccall trf_7721(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7721(t0,t1,t2);}

C_noret_decl(trf_10266)
static void C_ccall trf_10266(C_word c,C_word *av) C_noret;
static void C_ccall trf_10266(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10266(t0,t1);}

C_noret_decl(trf_5918)
static void C_ccall trf_5918(C_word c,C_word *av) C_noret;
static void C_ccall trf_5918(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5918(t0,t1);}

C_noret_decl(trf_7172)
static void C_ccall trf_7172(C_word c,C_word *av) C_noret;
static void C_ccall trf_7172(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7172(t0,t1,t2,t3);}

C_noret_decl(trf_5931)
static void C_ccall trf_5931(C_word c,C_word *av) C_noret;
static void C_ccall trf_5931(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5931(t0,t1);}

C_noret_decl(trf_5939)
static void C_ccall trf_5939(C_word c,C_word *av) C_noret;
static void C_ccall trf_5939(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5939(t0,t1);}

C_noret_decl(trf_5924)
static void C_ccall trf_5924(C_word c,C_word *av) C_noret;
static void C_ccall trf_5924(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5924(t0,t1);}

C_noret_decl(trf_11381)
static void C_ccall trf_11381(C_word c,C_word *av) C_noret;
static void C_ccall trf_11381(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11381(t0,t1);}

C_noret_decl(trf_9092)
static void C_ccall trf_9092(C_word c,C_word *av) C_noret;
static void C_ccall trf_9092(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9092(t0,t1,t2);}

C_noret_decl(trf_9810)
static void C_ccall trf_9810(C_word c,C_word *av) C_noret;
static void C_ccall trf_9810(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9810(t0,t1,t2,t3);}

C_noret_decl(trf_4887)
static void C_ccall trf_4887(C_word c,C_word *av) C_noret;
static void C_ccall trf_4887(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4887(t0,t1,t2);}

C_noret_decl(trf_7687)
static void C_ccall trf_7687(C_word c,C_word *av) C_noret;
static void C_ccall trf_7687(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7687(t0,t1,t2);}

C_noret_decl(trf_4102)
static void C_ccall trf_4102(C_word c,C_word *av) C_noret;
static void C_ccall trf_4102(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4102(t0,t1,t2,t3);}

C_noret_decl(trf_6131)
static void C_ccall trf_6131(C_word c,C_word *av) C_noret;
static void C_ccall trf_6131(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6131(t0,t1,t2);}

C_noret_decl(trf_6805)
static void C_ccall trf_6805(C_word c,C_word *av) C_noret;
static void C_ccall trf_6805(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6805(t0,t1);}

C_noret_decl(trf_10493)
static void C_ccall trf_10493(C_word c,C_word *av) C_noret;
static void C_ccall trf_10493(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10493(t0,t1,t2,t3);}

C_noret_decl(trf_4569)
static void C_ccall trf_4569(C_word c,C_word *av) C_noret;
static void C_ccall trf_4569(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4569(t0,t1,t2,t3);}

C_noret_decl(trf_4199)
static void C_ccall trf_4199(C_word c,C_word *av) C_noret;
static void C_ccall trf_4199(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4199(t0,t1,t2);}

C_noret_decl(trf_9954)
static void C_ccall trf_9954(C_word c,C_word *av) C_noret;
static void C_ccall trf_9954(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9954(t0,t1,t2);}

C_noret_decl(trf_5236)
static void C_ccall trf_5236(C_word c,C_word *av) C_noret;
static void C_ccall trf_5236(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5236(t0,t1);}

C_noret_decl(trf_8895)
static void C_ccall trf_8895(C_word c,C_word *av) C_noret;
static void C_ccall trf_8895(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8895(t0,t1,t2,t3);}

C_noret_decl(trf_10541)
static void C_ccall trf_10541(C_word c,C_word *av) C_noret;
static void C_ccall trf_10541(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10541(t0,t1,t2,t3);}

C_noret_decl(trf_4619)
static void C_ccall trf_4619(C_word c,C_word *av) C_noret;
static void C_ccall trf_4619(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4619(t0,t1,t2,t3);}

C_noret_decl(trf_8861)
static void C_ccall trf_8861(C_word c,C_word *av) C_noret;
static void C_ccall trf_8861(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8861(t0,t1,t2);}

C_noret_decl(trf_9906)
static void C_ccall trf_9906(C_word c,C_word *av) C_noret;
static void C_ccall trf_9906(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9906(t0,t1,t2,t3);}

C_noret_decl(trf_7052)
static void C_ccall trf_7052(C_word c,C_word *av) C_noret;
static void C_ccall trf_7052(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7052(t0,t1,t2);}

C_noret_decl(trf_6287)
static void C_ccall trf_6287(C_word c,C_word *av) C_noret;
static void C_ccall trf_6287(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6287(t0,t1,t2);}

C_noret_decl(trf_4501)
static void C_ccall trf_4501(C_word c,C_word *av) C_noret;
static void C_ccall trf_4501(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4501(t0,t1,t2);}

C_noret_decl(trf_5674)
static void C_ccall trf_5674(C_word c,C_word *av) C_noret;
static void C_ccall trf_5674(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_5674(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8110)
static void C_ccall trf_8110(C_word c,C_word *av) C_noret;
static void C_ccall trf_8110(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8110(t0,t1,t2,t3);}

C_noret_decl(trf_8123)
static void C_ccall trf_8123(C_word c,C_word *av) C_noret;
static void C_ccall trf_8123(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8123(t0,t1);}

C_noret_decl(trf_8135)
static void C_ccall trf_8135(C_word c,C_word *av) C_noret;
static void C_ccall trf_8135(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8135(t0,t1);}

C_noret_decl(trf_4638)
static void C_ccall trf_4638(C_word c,C_word *av) C_noret;
static void C_ccall trf_4638(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4638(t0,t1);}

C_noret_decl(trf_5899)
static void C_ccall trf_5899(C_word c,C_word *av) C_noret;
static void C_ccall trf_5899(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5899(t0,t1,t2,t3);}

C_noret_decl(trf_8025)
static void C_ccall trf_8025(C_word c,C_word *av) C_noret;
static void C_ccall trf_8025(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8025(t0,t1,t2);}

C_noret_decl(trf_8939)
static void C_ccall trf_8939(C_word c,C_word *av) C_noret;
static void C_ccall trf_8939(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8939(t0,t1,t2);}

C_noret_decl(trf_7637)
static void C_ccall trf_7637(C_word c,C_word *av) C_noret;
static void C_ccall trf_7637(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7637(t0,t1,t2);}

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

C_noret_decl(trf_7495)
static void C_ccall trf_7495(C_word c,C_word *av) C_noret;
static void C_ccall trf_7495(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7495(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8747)
static void C_ccall trf_8747(C_word c,C_word *av) C_noret;
static void C_ccall trf_8747(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8747(t0,t1,t2);}

C_noret_decl(trf_11167)
static void C_ccall trf_11167(C_word c,C_word *av) C_noret;
static void C_ccall trf_11167(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11167(t0,t1);}

C_noret_decl(trf_4906)
static void C_ccall trf_4906(C_word c,C_word *av) C_noret;
static void C_ccall trf_4906(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4906(t0,t1);}

C_noret_decl(trf_9644)
static void C_ccall trf_9644(C_word c,C_word *av) C_noret;
static void C_ccall trf_9644(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9644(t0,t1,t2,t3);}

C_noret_decl(trf_10346)
static void C_ccall trf_10346(C_word c,C_word *av) C_noret;
static void C_ccall trf_10346(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10346(t0,t1,t2,t3);}

C_noret_decl(trf_10975)
static void C_ccall trf_10975(C_word c,C_word *av) C_noret;
static void C_ccall trf_10975(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10975(t0,t1);}

C_noret_decl(trf_4953)
static void C_ccall trf_4953(C_word c,C_word *av) C_noret;
static void C_ccall trf_4953(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4953(t0,t1,t2);}

C_noret_decl(trf_7591)
static void C_ccall trf_7591(C_word c,C_word *av) C_noret;
static void C_ccall trf_7591(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7591(t0,t1,t2);}

C_noret_decl(trf_6243)
static void C_ccall trf_6243(C_word c,C_word *av) C_noret;
static void C_ccall trf_6243(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6243(t0,t1);}

C_noret_decl(trf_6240)
static void C_ccall trf_6240(C_word c,C_word *av) C_noret;
static void C_ccall trf_6240(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6240(t0,t1);}

C_noret_decl(trf_6246)
static void C_ccall trf_6246(C_word c,C_word *av) C_noret;
static void C_ccall trf_6246(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6246(t0,t1);}

C_noret_decl(trf_7874)
static void C_ccall trf_7874(C_word c,C_word *av) C_noret;
static void C_ccall trf_7874(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7874(t0,t1,t2,t3);}

C_noret_decl(trf_5141)
static void C_ccall trf_5141(C_word c,C_word *av) C_noret;
static void C_ccall trf_5141(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5141(t0,t1,t2,t3);}

C_noret_decl(trf_10998)
static void C_ccall trf_10998(C_word c,C_word *av) C_noret;
static void C_ccall trf_10998(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10998(t0,t1);}

C_noret_decl(trf_8973)
static void C_ccall trf_8973(C_word c,C_word *av) C_noret;
static void C_ccall trf_8973(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8973(t0,t1,t2,t3);}

C_noret_decl(trf_8480)
static void C_ccall trf_8480(C_word c,C_word *av) C_noret;
static void C_ccall trf_8480(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8480(t0,t1,t2);}

C_noret_decl(trf_4780)
static void C_ccall trf_4780(C_word c,C_word *av) C_noret;
static void C_ccall trf_4780(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4780(t0,t1);}

C_noret_decl(trf_10394)
static void C_ccall trf_10394(C_word c,C_word *av) C_noret;
static void C_ccall trf_10394(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10394(t0,t1,t2,t3);}

C_noret_decl(trf_4297)
static void C_ccall trf_4297(C_word c,C_word *av) C_noret;
static void C_ccall trf_4297(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4297(t0,t1);}

C_noret_decl(trf_8665)
static void C_ccall trf_8665(C_word c,C_word *av) C_noret;
static void C_ccall trf_8665(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8665(t0,t1,t2);}

C_noret_decl(trf_8785)
static void C_ccall trf_8785(C_word c,C_word *av) C_noret;
static void C_ccall trf_8785(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8785(t0,t1);}

C_noret_decl(trf_10844)
static void C_ccall trf_10844(C_word c,C_word *av) C_noret;
static void C_ccall trf_10844(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10844(t0,t1,t2);}

C_noret_decl(trf_9858)
static void C_ccall trf_9858(C_word c,C_word *av) C_noret;
static void C_ccall trf_9858(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9858(t0,t1,t2,t3);}

C_noret_decl(trf_9740)
static void C_ccall trf_9740(C_word c,C_word *av) C_noret;
static void C_ccall trf_9740(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9740(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9747)
static void C_ccall trf_9747(C_word c,C_word *av) C_noret;
static void C_ccall trf_9747(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9747(t0,t1);}

C_noret_decl(trf_7755)
static void C_ccall trf_7755(C_word c,C_word *av) C_noret;
static void C_ccall trf_7755(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7755(t0,t1,t2);}

C_noret_decl(trf_5191)
static void C_ccall trf_5191(C_word c,C_word *av) C_noret;
static void C_ccall trf_5191(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5191(t0,t1,t2,t3);}

C_noret_decl(trf_8446)
static void C_ccall trf_8446(C_word c,C_word *av) C_noret;
static void C_ccall trf_8446(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8446(t0,t1,t2);}

C_noret_decl(trf_9988)
static void C_ccall trf_9988(C_word c,C_word *av) C_noret;
static void C_ccall trf_9988(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9988(t0,t1,t2);}

C_noret_decl(trf_8410)
static void C_ccall trf_8410(C_word c,C_word *av) C_noret;
static void C_ccall trf_8410(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8410(t0,t1,t2,t3);}

C_noret_decl(trf_4243)
static void C_ccall trf_4243(C_word c,C_word *av) C_noret;
static void C_ccall trf_4243(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4243(t0,t1,t2,t3);}

C_noret_decl(trf_10022)
static void C_ccall trf_10022(C_word c,C_word *av) C_noret;
static void C_ccall trf_10022(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10022(t0,t1,t2);}

C_noret_decl(trf_10921)
static void C_ccall trf_10921(C_word c,C_word *av) C_noret;
static void C_ccall trf_10921(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10921(t0,t1);}

C_noret_decl(trf_5260)
static void C_ccall trf_5260(C_word c,C_word *av) C_noret;
static void C_ccall trf_5260(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5260(t0,t1);}

C_noret_decl(trf_8712)
static void C_ccall trf_8712(C_word c,C_word *av) C_noret;
static void C_ccall trf_8712(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8712(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10056)
static void C_ccall trf_10056(C_word c,C_word *av) C_noret;
static void C_ccall trf_10056(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10056(t0,t1,t2);}

C_noret_decl(trf_6698)
static void C_ccall trf_6698(C_word c,C_word *av) C_noret;
static void C_ccall trf_6698(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6698(t0,t1,t2);}

C_noret_decl(trf_8731)
static void C_ccall trf_8731(C_word c,C_word *av) C_noret;
static void C_ccall trf_8731(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8731(t0,t1,t2);}

C_noret_decl(trf_10810)
static void C_ccall trf_10810(C_word c,C_word *av) C_noret;
static void C_ccall trf_10810(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10810(t0,t1,t2);}

C_noret_decl(trf_9692)
static void C_ccall trf_9692(C_word c,C_word *av) C_noret;
static void C_ccall trf_9692(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9692(t0,t1,t2,t3);}

C_noret_decl(trf_10179)
static void C_ccall trf_10179(C_word c,C_word *av) C_noret;
static void C_ccall trf_10179(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10179(t0,t1,t2);}

C_noret_decl(trf_10090)
static void C_ccall trf_10090(C_word c,C_word *av) C_noret;
static void C_ccall trf_10090(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10090(t0,t1,t2);}

C_noret_decl(trf_9011)
static void C_ccall trf_9011(C_word c,C_word *av) C_noret;
static void C_ccall trf_9011(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9011(t0,t1,t2);}

C_noret_decl(trf_11543)
static void C_ccall trf_11543(C_word c,C_word *av) C_noret;
static void C_ccall trf_11543(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11543(t0,t1,t2);}

C_noret_decl(trf_8535)
static void C_ccall trf_8535(C_word c,C_word *av) C_noret;
static void C_ccall trf_8535(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8535(t0,t1,t2);}

C_noret_decl(trf_9510)
static void C_ccall trf_9510(C_word c,C_word *av) C_noret;
static void C_ccall trf_9510(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9510(t0,t1);}

C_noret_decl(trf_9244)
static void C_ccall trf_9244(C_word c,C_word *av) C_noret;
static void C_ccall trf_9244(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9244(t0,t1,t2);}

C_noret_decl(trf_6704)
static void C_ccall trf_6704(C_word c,C_word *av) C_noret;
static void C_ccall trf_6704(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6704(t0,t1,t2);}

C_noret_decl(trf_7428)
static void C_ccall trf_7428(C_word c,C_word *av) C_noret;
static void C_ccall trf_7428(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7428(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_9503)
static void C_ccall trf_9503(C_word c,C_word *av) C_noret;
static void C_ccall trf_9503(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9503(t0,t1,t2,t3,t4);}

/* k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_6748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6748,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:795: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[156];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* map-loop278 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10742(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10742,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* a8211 in k8252 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_8212(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8212,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8216,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:459: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[211];
av2[3]=t2;
av2[4]=lf[212];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8208 in k8252 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_8210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8210,2,av);}
/* chicken-syntax.scm:454: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[211];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8214 in a8211 in k8252 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8216,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:460: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[176];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8217 in k8214 in a8211 in k8252 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_8219(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8219,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8238,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:463: r */
t7=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[210];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k3922 in g2629 in k3894 in k3891 in k3885 in a3882 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in ... */
static void C_ccall f_3924(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_3924,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,lf[27]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[26],t5);
t7=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list2(&a,2,lf[27],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
/* chicken-syntax.scm:1309: ##compiler#check-and-validate-type */
t4=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[25];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t1;
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,lf[26],t6);
t8=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_list2(&a,2,t4,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* g2629 in k3894 in k3891 in k3885 in a3882 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in ... */
static void C_fcall f_3920(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3920,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3924,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* chicken-syntax.scm:1304: ##sys#strip-syntax */
t5=*((C_word*)lf[19]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5028 in k5025 in k5002 in k4999 in k4996 in k4993 in a4990 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_5030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_5030,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[17],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_ccall f_4025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4025,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4029,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1238: gensym */
t5=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in ... */
static void C_ccall f_4029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4029,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4032,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1239: ##sys#globalize */
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6716 in loop in genvars in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_6718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6718,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6722,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:784: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6704(t5,t3,t4);}

/* k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_11304,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11519,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11539,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t5=*((C_word*)lf[286]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[288];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k8355 in map-loop1351 in k8310 in k8304 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_8357(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8357,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
t7=((C_word*)((C_word*)t0)[5])[1];
f_8328(t7,((C_word*)t0)[6],t5,t6);}

/* map-loop227 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10776(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10776,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10801,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:218: g233 */
t4=((C_word*)t0)[4];
f_10266(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop1557 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_fcall f_7789(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7789,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k7778 in map-loop1587 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_7780(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7780,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7755(t6,((C_word*)t0)[5],t5);}

/* k3929 in k3922 in g2629 in k3894 in k3891 in k3885 in a3882 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in ... */
static void C_ccall f_3931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3931,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,lf[26],t3);
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list2(&a,2,t1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* mapslots in k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_fcall f_11329(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_11329,4,t0,t1,t2,t3);}
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
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11345,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t8,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t8)){
t10=C_i_cadr(t5);
/* chicken-syntax.scm:92: symbol->string */
t11=*((C_word*)lf[183]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
/* chicken-syntax.scm:92: symbol->string */
t10=*((C_word*)lf[183]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}}

/* k11325 in k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11327,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[26],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop1303 in k8304 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_fcall f_8376(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8376,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[216]);
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

/* k10686 in loop in k10604 in k10595 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10688,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4369 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_4371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4371,2,av);}
/* chicken-syntax.scm:1221: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[51];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop2465 in k4398 in k4381 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_fcall f_4467(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4467,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* append*1054 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8582(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8582,4,av);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8603,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-syntax.scm:377: append* */
t9=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t6;
av2[2]=t8;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4381 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_4383,2,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[28]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4501,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4501(t12,t8,t6);}
else{
/* chicken-syntax.scm:1223: ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in ... */
static void C_ccall f_4056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4056,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1246: reverse */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in ... */
static void C_ccall f_4059(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4059,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4243,a[2]=t5,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4243(t7,t3,((C_word*)t0)[10],C_fix(1));}

/* a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_4373(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4373,5,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=t5;
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4383,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t7))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4545,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4601,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_car(t7);
/* chicken-syntax.scm:1223: ##sys#list? */
t12=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t9=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_4383(2,av2);}}}

/* loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in ... */
static void C_fcall f_4046(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_4046,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1245: reverse */
t6=*((C_word*)lf[43]+1);{
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
t10=C_a_i_cons(&a,2,lf[44],t4);
/* chicken-syntax.scm:1277: loop */
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
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4297,a[2]=t2,a[3]=t6,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t6))){
t8=C_u_i_length(t6);
t9=C_eqp(C_fix(2),t8);
if(C_truep(t9)){
t10=C_i_car(t6);
t11=t7;
f_4297(t11,C_i_symbolp(t10));}
else{
t10=t7;
f_4297(t10,C_SCHEME_FALSE);}}
else{
t8=t7;
f_4297(t8,C_SCHEME_FALSE);}}}}

/* k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in ... */
static void C_ccall f_4035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4035,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4038,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1241: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[47];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in ... */
static void C_ccall f_4032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_4032,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4035,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_i_cdddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
/* chicken-syntax.scm:1240: ##sys#strip-syntax */
t9=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t3;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_4035(2,av2);}}}

/* k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in ... */
static void C_ccall f_4038(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_4038,2,av);}
a=C_alloc(13);
t2=t1;
t3=(C_truep(((C_word*)t0)[2])?C_i_cadddr(((C_word*)t0)[3]):C_i_caddr(((C_word*)t0)[3]));
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4046,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=t6,a[9]=((C_word*)t0)[7],a[10]=((C_word)li7),tmp=(C_word)a,a+=11,tmp));
t8=((C_word*)t6)[1];
f_4046(t8,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8572(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8572,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8576,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:370: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[219];
av2[3]=t2;
av2[4]=lf[221];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8576,2,av);}
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
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8582,a[2]=t8,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8610,a[2]=t10,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp);
t13=C_set_block_item(t8,0,t11);
t14=C_set_block_item(t10,0,t12);
t15=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t16=t15;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=((C_word*)t17)[1];
t19=C_i_check_list_2(t3,lf[28]);
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8658,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t10,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9011,a[2]=t17,a[3]=t22,a[4]=t18,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_9011(t24,t20,t3);}

/* k8568 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8570,2,av);}
/* chicken-syntax.scm:366: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[219];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop257 in k10595 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10694(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10694,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* loop in k10604 in k10595 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10674(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10674,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10688,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_difference(t2,C_fix(1));
/* chicken-syntax.scm:225: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k8558 in fold in k8528 in k8520 in a8517 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8560,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10604 in k10595 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10606,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10613,a[2]=t7,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t5,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t9=C_u_i_length(((C_word*)t0)[4]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10674,a[2]=t11,a[3]=((C_word)li137),tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_10674(t13,t8,t9);}

/* g31 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_fcall f_11244(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_11244,3,t0,t1,t2);}
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
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11272,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* chicken-syntax.scm:69: c */
t6=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* chicken-syntax.scm:75: syntax-error */
t3=*((C_word*)lf[45]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[280];
av2[3]=lf[281];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_11240,2,av);}
a=C_alloc(27);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li150),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[28]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11304,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11543,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li152),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_11543(t13,t9,((C_word*)t0)[4]);}

/* k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11234,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:63: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[125];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11231,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:62: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[47];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4063 in k4239 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in ... */
static void C_ccall f_4065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_4065,2,av);}
a=C_alloc(44);
t2=C_a_i_list(&a,2,lf[35],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[37],t2,t3);
t5=t4;
t6=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t7=t6;
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4100,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=((C_word*)t0)[6],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4102,a[2]=t10,a[3]=t14,a[4]=t11,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_4102(t16,t12,((C_word*)t0)[3],((C_word*)t0)[7]);}

/* k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11237,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11240,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:64: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[114];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k9632 in k9616 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_9634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9634,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[239],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:280: ##sys#append */
t4=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11223(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_11223,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11231,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:61: symbol->string */
t8=*((C_word*)lf[183]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k11215 in k3673 in k3670 in k3666 */
static void C_ccall f_11217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11217,2,av);}
/* chicken-syntax.scm:54: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[280];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11219(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11219,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11223,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:58: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[280];
av2[3]=t2;
av2[4]=lf[289];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5332 in k5325 in a5322 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_5334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5334,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9620 in k9616 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_9622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9622,2,av);}
/* chicken-syntax.scm:280: ##sys#append */
t2=*((C_word*)lf[41]+1);{
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

/* k10611 in k10604 in k10595 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10613(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_10613,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t3=C_i_check_list_2(t1,lf[28]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10622,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10624,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word)li136),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10624(t8,t4,((C_word*)t0)[2],t1);}

/* k5319 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_5321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5321,2,av);}
/* chicken-syntax.scm:1100: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[92];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5325 in a5322 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_5327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5327,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1105: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a5322 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_5323(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5323,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5327,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1104: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[92];
av2[3]=t2;
av2[4]=lf[94];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* map-loop314 in k10611 in k10604 in k10595 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10624(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10624,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* k10620 in k10611 in k10604 in k10595 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10622,2,av);}
/* chicken-syntax.scm:214: ##sys#append */
t2=*((C_word*)lf[41]+1);{
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

/* k5357 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_5359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5359,2,av);}
/* chicken-syntax.scm:1082: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[98];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6823 in a6820 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in ... */
static void C_ccall f_6825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_6825,2,av);}
a=C_alloc(17);
t2=t1;
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[28]);
t9=C_i_check_list_2(((C_word*)t0)[4],lf[28]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6847,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6849,a[2]=t5,a[3]=t12,a[4]=t6,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6849(t14,t10,t7,((C_word*)t0)[4]);}}

/* a6820 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in ... */
static void C_ccall f_6821(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6821,4,av);}
a=C_alloc(16);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6825,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6897,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=((C_word*)t0)[7],a[8]=((C_word)li51),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6897(t8,t4,t3,((C_word*)t0)[8]);}

/* k5340 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_5342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5342,2,av);}
/* chicken-syntax.scm:1093: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[95];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5346 in a5343 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_5348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_5348,2,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[96],t2,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5343 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_5344(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5344,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5348,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1097: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[95];
av2[3]=t2;
av2[4]=lf[97];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7601 in prefix-sym in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_7603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7603,2,av);}
/* chicken-syntax.scm:668: string-append */
t2=*((C_word*)lf[182]+1);{
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

/* k6845 in k6823 in a6820 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in ... */
static void C_ccall f_6847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6847,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[30],t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1820 in k6823 in a6820 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in ... */
static void C_fcall f_6849(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_6849,4,t0,t1,t2,t3);}
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

/* map-loop965 in k9391 in k9375 in k9600 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_fcall f_9407(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9407,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[239],t6,t7);
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

/* k9403 in k9391 in k9375 in k9600 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_9405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9405,2,av);}
/* chicken-syntax.scm:280: ##sys#append */
t2=*((C_word*)lf[41]+1);{
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

/* k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_9301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_9301,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[28]);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9318,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t2,a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9858,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li120),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_9858(t13,t9,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_7124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7124,2,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[153],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7120,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:773: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[154];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_7120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7120,2,av);}
a=C_alloc(8);
t2=C_a_i_cons(&a,2,lf[154],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7116,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:774: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[155];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* g1593 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_fcall f_7607(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7607,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7615,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:673: prefix-sym */
f_7591(t3,lf[184],t2);}

/* k9100 in for-each-loop1027 in a9070 in k9051 in a9048 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9102,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9092(t3,((C_word*)t0)[4],t2);}

/* k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_7621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7621,2,av);}
a=C_alloc(23);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7721,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7721(t11,t7,((C_word*)t0)[9]);}

/* k7613 in g1593 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_7615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7615,2,av);}
/* chicken-syntax.scm:673: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5971 in k5929 in k5922 in k5916 in loop in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_5973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_5973,2,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5939(t2,C_SCHEME_END_OF_LIST);}
else{
t2=C_a_i_list(&a,2,lf[123],lf[123]);
t3=C_a_i_list(&a,3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=((C_word*)t0)[2];
f_5939(t4,C_a_i_list(&a,1,t3));}}

/* k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_6486(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,5)))){
C_save_and_reclaim((void *)f_6486,2,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,lf[129],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6213,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6215,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:886: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5767 in k5747 in loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5769,2,av);}
/* chicken-syntax.scm:1015: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_7116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7116,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,lf[155],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:775: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[156];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_7112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7112,2,av);}
a=C_alloc(10);
t2=C_a_i_cons(&a,2,lf[156],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:776: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[157];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* g628 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_9262(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9262,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9270,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:288: gensym */
t3=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[237];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a7133 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_7134(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7134,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7138,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:742: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[174];
av2[3]=t2;
av2[4]=lf[177];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7136 in a7133 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_7138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7138,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7150,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t9,a[5]=((C_word*)t0)[4],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:746: r */
t11=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[173];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k6496 in k6607 in k6611 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_6498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6498,2,av);}
/* chicken-syntax.scm:860: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[135];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_6490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6490,2,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[27],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6486,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:885: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[129];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7130 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_7132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7132,2,av);}
/* chicken-syntax.scm:735: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[174];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop2001 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_fcall f_6165(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6165,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k4398 in k4381 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_4400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_4400,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4467,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4467(t13,t9,t7);}

/* k5483 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5485,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1038: reverse */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3708,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9138,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9140,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:337: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9250 in g600 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9252,2,av);}
/* chicken-syntax.scm:287: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3705,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9166,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9168,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:329: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4312 in k4295 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in ... */
static void C_ccall f_4314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4314,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:1279: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4046(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k5486 in k5483 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_5488,2,av);}
a=C_alloc(21);
t2=t1;
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5494,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5531,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1040: gensym */
t5=*((C_word*)lf[32]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_a_i_list(&a,3,lf[101],((C_word*)t0)[6],t5);
t7=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* map-loop929 in k9375 in k9600 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_fcall f_9455(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9455,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
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

/* k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3702,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9190,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9192,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:273: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_9258,2,av);}
a=C_alloc(29);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9262,a[2]=((C_word*)t0)[2],a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9273,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9988,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li123),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_9988(t12,t8,((C_word*)t0)[9]);}

/* k5074 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_5076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5076,2,av);}
/* chicken-syntax.scm:1118: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[88];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_5078(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5078,5,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=t5;
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5088,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t7))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5117,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5173,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=C_i_car(t7);
/* chicken-syntax.scm:1120: ##sys#list? */
t12=*((C_word*)lf[60]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t9=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_5088(2,av2);}}}

/* k5492 in k5486 in k5483 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_5494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5494,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5505,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1040: ##sys#append */
t4=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k9283 in g656 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_9285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9285,2,av);}
/* chicken-syntax.scm:289: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_9288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_9288,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9301,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9906,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li121),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9906(t12,t8,((C_word*)t0)[2],((C_word*)t0)[10]);}

/* k8236 in k8217 in k8214 in a8211 in k8252 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_8238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8238,2,av);}
a=C_alloc(27);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[101],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[144],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5086 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5088(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5088,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cdr(((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5101,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1120: rename2231 */
t7=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[89];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
/* chicken-syntax.scm:1120: ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_5462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5462,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1032: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[108];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_5465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5465,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t4))){
/* chicken-syntax.scm:1034: syntax-error */
t5=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[105];
av2[3]=lf[107];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5468(2,av2);}}}

/* k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_9273,2,av);}
a=C_alloc(29);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9277,a[2]=((C_word*)t0)[2],a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9288,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9954,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li122),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_9954(t12,t8,((C_word*)t0)[10]);}

/* k8324 in k8310 in k8304 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_8326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8326,2,av);}
/* chicken-syntax.scm:440: ##sys#append */
t2=*((C_word*)lf[41]+1);{
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

/* k5992 in k5922 in k5916 in loop in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_5994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_5994,2,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_5931(t3,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2));}
else{
t2=((C_word*)t0)[5];
f_5931(t2,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]));}}

/* k5773 in k5747 in loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5775(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5775,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1019: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5674(t4,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1020: syntax-error */
t4=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[111];
av2[3]=lf[112];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[6]);
/* chicken-syntax.scm:1023: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_5674(t7,((C_word*)t0)[4],t3,((C_word*)t0)[5],t6,C_SCHEME_FALSE);}}

/* k9268 in g628 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_9270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9270,2,av);}
/* chicken-syntax.scm:288: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_5468(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5468,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5475,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li31),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_5475(t7,((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* g656 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_fcall f_9277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9277,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9285,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:289: gensym */
t3=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[176];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5750 in k5747 in loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5752(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5752,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1016: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5674(t6,((C_word*)t0)[6],t3,t4,t5,C_SCHEME_FALSE);}

/* g779 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static C_word C_fcall f_9580(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_a_i_list(&a,4,t1,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);
t5=C_a_i_list(&a,4,lf[159],((C_word*)t0)[2],t4,t2);
return(C_a_i_list(&a,2,t3,t5));}

/* loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_fcall f_5475(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5475,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5485,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1037: reverse */
t8=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5554,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t8=C_i_car(t2);
/* chicken-syntax.scm:1047: c */
t9=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}

/* map-loop1351 in k8310 in k8304 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_fcall f_8328(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8328,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8357,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-syntax.scm:451: g1357 */
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

/* k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_9598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9598,2,av);}
a=C_alloc(31);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9602,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9618,a[2]=t3,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9692,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li117),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9692(t12,t8,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k6400 in k6396 in k6389 in k6364 in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_6402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_6402,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[7],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10229(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10229,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10233,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:213: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[254];
av2[3]=t2;
av2[4]=lf[255];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10225 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10227,2,av);}
/* chicken-syntax.scm:209: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[254];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1948 in k6364 in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_fcall f_6422(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6422,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6447,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:909: g1954 */
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

/* k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10233,2,av);}
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
t11=C_i_check_list_2(t3,lf[28]);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10247,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10844,a[2]=t9,a[3]=t14,a[4]=t10,a[5]=((C_word)li142),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_10844(t16,t12,t3);}

/* a8517 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8518(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8518,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8522,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:424: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[218];
av2[3]=t2;
av2[4]=lf[220];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10247,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10251,a[2]=((C_word*)t0)[2],a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10810,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li141),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10810(t12,t8,((C_word*)t0)[5]);}

/* build in a6820 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in ... */
static void C_fcall f_6897(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_6897,4,t0,t1,t2,t3);}
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
av2[1]=C_a_i_cons(&a,2,lf[30],t7);
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
av2[1]=C_a_i_cons(&a,2,lf[30],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6950,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6998,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:823: gensym */
t6=*((C_word*)lf[32]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k8514 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8516,2,av);}
/* chicken-syntax.scm:420: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[218];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k10257 in g205 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10259,2,av);}
/* chicken-syntax.scm:217: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* g205 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10251(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10251,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10259,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:217: gensym */
t3=*((C_word*)lf[32]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2623 in k3894 in k3891 in k3885 in a3882 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in ... */
static void C_fcall f_3960(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3960,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3985,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:1303: g2629 */
t5=((C_word*)t0)[4];
f_3920(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8310 in k8304 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_8312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8312,2,av);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8316,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=*((C_word*)lf[215]+1);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[28]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8326,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8328,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,a[6]=((C_word)li81),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_8328(t14,t10,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k8314 in k8310 in k8304 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_8316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8316,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[30],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* g1486 in k7903 in k7897 in expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static C_word C_fcall f_7948(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_list(&a,3,lf[197],((C_word*)t0)[2],t1));}

/* k7939 in k7957 in k7903 in k7897 in expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_7941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_7941,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[159],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3956 in k3894 in k3891 in k3885 in a3882 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in ... */
static void C_ccall f_3958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_3958,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[29],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3983 in map-loop2623 in k3894 in k3891 in k3885 in a3882 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in ... */
static void C_ccall f_3985(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3985,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3960(t6,((C_word*)t0)[5],t5);}

/* map-loop1480 in k7903 in k7897 in expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_fcall f_7961(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_7961,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* chicken-syntax.scm:538: g1486 */
  f_7948(C_a_i(&a,9),((C_word*)t0)[2],t3)
);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
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

/* k10205 in k10198 in loop in k10145 in k10142 in k10139 in k10130 in a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_10207,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:261: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_10179(t4,((C_word*)t0)[5],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10214,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:259: c */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k10198 in loop in k10145 in k10142 in k10139 in k10130 in a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_10200,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:261: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_10179(t4,((C_word*)t0)[5],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10207,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:258: c */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k10212 in k10205 in k10198 in loop in k10145 in k10142 in k10139 in k10130 in a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10214,2,av);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm:261: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_10179(t4,((C_word*)t0)[5],t3);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
/* chicken-syntax.scm:260: ##sys#error */
t4=*((C_word*)lf[248]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[6];
av2[2]=lf[249];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5025 in k5002 in k4999 in k4996 in k4993 in a4990 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_5027(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_5027,2,av);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(lf[44],t1);
if(C_truep(t3)){
t4=C_a_i_list(&a,2,((C_word*)t0)[2],lf[44]);
t5=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,2,lf[17],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t1))){
t4=C_a_i_list(&a,2,lf[83],t1);
t5=C_a_i_list(&a,2,((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t5);
t7=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,2,lf[17],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(t1))){
/* chicken-syntax.scm:1146: ##sys#validate-exports */
t4=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[81];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_i_caddr(((C_word*)t0)[6]);
/* chicken-syntax.scm:1148: syntax-error-hook */
t5=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[81];
av2[3]=lf[85];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}}}

/* k7903 in k7897 in expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_7905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7905,2,av);}
a=C_alloc(25);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:528: expand */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7874(t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7919,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7926,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:533: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);{
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
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7948,a[2]=((C_word*)t0)[7],a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7959,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7961,a[2]=t6,a[3]=t4,a[4]=t11,a[5]=t5,a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7961(t13,t9,t7);}}}

/* k7906 in k7903 in k7897 in expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_7908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7908,2,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[26],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7957 in k7903 in k7897 in expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7959,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7941,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:541: expand */
t8=((C_word*)((C_word*)t0)[5])[1];
f_7874(t8,t7,((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k4999 in k4996 in k4993 in a4990 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_5001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5001,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5004,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(lf[44],((C_word*)t0)[2]);
if(C_truep(t4)){
/* chicken-syntax.scm:1135: syntax-error-hook */
t5=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[81];
av2[3]=lf[86];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5004(2,av2);}}}

/* k5002 in k4999 in k4996 in k4993 in a4990 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_5004(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_5004,2,av);}
a=C_alloc(19);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_a_i_list(&a,2,((C_word*)t0)[2],lf[82]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5027,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_i_caddr(((C_word*)t0)[5]);
/* chicken-syntax.scm:1142: ##sys#strip-syntax */
t8=*((C_word*)lf[19]+1);{
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

/* k7924 in k7903 in k7897 in expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_7926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7926,2,av);}
/* chicken-syntax.scm:531: ##sys#notice */
t2=*((C_word*)lf[195]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[196];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7920 in k7917 in k7903 in k7897 in expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_7922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7922,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[194];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1615 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_fcall f_7721(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7721,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* g233 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10266(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10266,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10274,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:218: gensym */
t3=*((C_word*)lf[32]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10262,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10266,a[2]=((C_word*)t0)[2],a[3]=((C_word)li131),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10776,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li140),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10776(t12,t8,((C_word*)t0)[6]);}

/* k7917 in k7903 in k7897 in expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_7919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7919,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7922,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:534: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7874(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* k7207 in k7196 in loop in k7157 in k7154 in k7151 in k7148 in k7136 in a7133 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_7209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7209,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10272 in g233 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10274,2,av);}
/* chicken-syntax.scm:218: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
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
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_10277,2,av);}
a=C_alloc(33);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)t0)[5];
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10597,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10742,a[2]=t11,a[3]=t15,a[4]=t12,a[5]=((C_word)li139),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_10742(t17,t13,((C_word*)t0)[6]);}

/* k11349 in k11346 in k11343 in mapslots in k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_11351,2,av);}
a=C_alloc(79);
t2=t1;
t3=C_a_i_list(&a,2,lf[127],lf[282]);
t4=C_a_i_list(&a,2,lf[116],((C_word*)t0)[2]);
t5=C_a_i_list(&a,3,lf[120],lf[127],t4);
t6=C_a_i_list(&a,2,lf[121],t5);
t7=C_a_i_list(&a,4,lf[124],lf[127],((C_word*)t0)[3],lf[282]);
t8=C_a_i_list(&a,4,lf[101],t3,t6,t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11377,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11381,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t9,a[7]=((C_word*)t0)[9],a[8]=t2,a[9]=t10,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t12=t11;
f_11381(t12,C_SCHEME_END_OF_LIST);}
else{
t12=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],t9);
t13=t11;
f_11381(t13,C_a_i_list(&a,1,t12));}}

/* k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10284,2,av);}
a=C_alloc(26);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[4],lf[28]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10467,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10541,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li135),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_10541(t13,t9,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k11363 in k11375 in k11349 in k11346 in k11343 in mapslots in k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11365,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7533 in k7557 in k7565 in k7573 in recur in make-if-tree in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_7535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_7535,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,3,lf[30],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[159],((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6445 in map-loop1948 in k6364 in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_6447(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6447,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6422(t6,((C_word*)t0)[5],t5);}

/* k7157 in k7154 in k7151 in k7148 in k7136 in a7133 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_7159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7159,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7170,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7172,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t7,a[7]=((C_word*)t0)[8],a[8]=((C_word)li58),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_7172(t9,t5,t1,((C_word*)t0)[9]);}

/* k7154 in k7151 in k7148 in k7136 in a7133 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_7156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7156,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:749: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[176];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7151 in k7148 in k7136 in a7133 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_7153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7153,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:748: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[155];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7148 in k7136 in a7133 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_7150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7150,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:747: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[154];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5916 in loop in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_fcall f_5918(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5918,2,t0,t1);}
a=C_alloc(128);
t2=t1;
t3=C_a_i_list(&a,1,((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,lf[116],((C_word*)t0)[3]);
t5=C_i_cadr(((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,lf[116],t5);
t7=C_a_i_list(&a,4,lf[120],((C_word*)t0)[2],t4,t6);
t8=C_a_i_list(&a,2,lf[121],t7);
t9=C_a_i_list(&a,3,lf[122],((C_word*)t0)[2],((C_word*)t0)[5]);
t10=C_a_i_list(&a,4,lf[101],t3,t8,t9);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5924,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t11,tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[9])){
t13=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[14]);
t14=C_a_i_list(&a,2,lf[116],((C_word*)t0)[3]);
t15=C_a_i_list(&a,2,lf[116],t2);
t16=C_a_i_list(&a,4,lf[120],((C_word*)t0)[2],t14,t15);
t17=C_a_i_list(&a,2,lf[121],t16);
t18=C_a_i_list(&a,4,lf[124],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[14]);
t19=t12;
f_5924(t19,C_a_i_list(&a,4,lf[101],t13,t17,t18));}
else{
t13=t12;
f_5924(t13,C_SCHEME_FALSE);}}

/* k7557 in k7565 in k7573 in recur in make-if-tree in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_7559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7559,2,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7535,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[7];
t8=C_u_i_cdr(t7);
t9=((C_word*)t0)[8];
t10=C_u_i_cdr(t9);
t11=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[10]);
/* chicken-syntax.scm:660: recur */
t12=((C_word*)((C_word*)t0)[11])[1];
f_7495(t12,t6,t8,t10,t11);}

/* k5210 in k5196 in loop2228 in k5180 in k5174 in k5171 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_5212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5212,2,av);}
/* chicken-syntax.scm:1120: loop2228 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5191(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in k7157 in k7154 in k7151 in k7148 in k7136 in a7133 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_fcall f_7172(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7172,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[30],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t3);
t5=t4;
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7198,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=t3,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:757: r */
t7=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[175];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=C_a_i_list(&a,2,t5,t2);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[2]);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_a_i_cons(&a,2,lf[30],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* k7168 in k7157 in k7154 in k7151 in k7148 in k7136 in a7133 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_7170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7170,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5929 in k5922 in k5916 in loop in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_fcall f_5931(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_5931,2,t0,t1);}
a=C_alloc(22);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5935,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5939,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(((C_word*)t0)[7])){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5973,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t6=C_i_cadr(((C_word*)t0)[9]);
/* chicken-syntax.scm:983: c */
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
f_5939(t6,C_a_i_list(&a,1,t5));}}
else{
t5=t4;
f_5939(t5,C_SCHEME_END_OF_LIST);}}

/* k5933 in k5929 in k5922 in k5916 in loop in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_5935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5935,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5937 in k5929 in k5922 in k5916 in loop in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_fcall f_5939(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5939,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5943,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=C_fixnum_increase(((C_word*)t0)[4]);
/* chicken-syntax.scm:988: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5899(t7,t3,t5,t6);}

/* k9115 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9117,2,av);}
/* chicken-syntax.scm:344: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[223];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9082 in k9075 in for-each-loop1027 in a9070 in k9051 in a9048 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_9084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9084,2,av);}
/* chicken-syntax.scm:362: ##sys#register-export */
t2=*((C_word*)lf[225]+1);{
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

/* k5503 in k5492 in k5486 in k5483 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_5505(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5505,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5521,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,1,((C_word*)t0)[6]);
/* chicken-syntax.scm:1040: ##sys#append */
t8=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* a9118 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9119(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9119,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9123,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:348: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[223];
av2[3]=t2;
av2[4]=lf[229];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4552 in k4549 in k4543 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_ccall f_4554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4554,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1223: ##sys#>= */
t4=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4549 in k4543 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_4551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4551,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1223: ##sys#length */
t4=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_4383(2,av2);}}}

/* k5922 in k5916 in loop in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_fcall f_5924(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5924,2,t0,t1);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t4=C_u_i_cdr(((C_word*)t0)[8]);
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5994,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[10],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t7=C_u_i_cdr(((C_word*)t0)[8]);
t8=C_u_i_car(t7);
/* chicken-syntax.scm:978: c */
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
f_5994(2,av2);}}}

/* k9121 in a9118 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9123,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
/* chicken-syntax.scm:349: ##sys#expand-multiple-values-assignment */
t4=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k9075 in for-each-loop1027 in a9070 in k9051 in a9048 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9077,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9084,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:362: ##sys#current-module */
t4=*((C_word*)lf[226]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11379 in k11349 in k11346 in k11343 in mapslots in k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_fcall f_11381(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_11381,2,t0,t1);}
a=C_alloc(66);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,1,lf[127]);
t3=C_a_i_list(&a,2,lf[116],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[120],lf[127],t3);
t5=C_a_i_list(&a,2,lf[121],t4);
t6=C_a_i_list(&a,3,lf[122],lf[127],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[101],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[5],t7,((C_word*)t0)[6]);
t9=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t8);
t10=C_a_i_list(&a,1,t9);
/* chicken-syntax.scm:43: ##sys#append */
t11=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t2=C_a_i_list(&a,1,lf[127]);
t3=C_a_i_list(&a,2,lf[116],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[120],lf[127],t3);
t5=C_a_i_list(&a,2,lf[121],t4);
t6=C_a_i_list(&a,3,lf[122],lf[127],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[101],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t7);
t9=C_a_i_list(&a,1,t8);
/* chicken-syntax.scm:43: ##sys#append */
t10=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* a9070 in k9051 in a9048 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9071(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_9071,5,av);}
a=C_alloc(6);
t5=C_i_check_list_2(t2,lf[224]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9092,a[2]=t7,a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_9092(t9,t1,t2);}

/* k4543 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4545,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1223: ##sys#list? */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_4383(2,av2);}}}

/* k9136 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9138,2,av);}
/* chicken-syntax.scm:335: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[230];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11270 in g31 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11272(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_11272,2,av);}
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_i_cadr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
/* chicken-syntax.scm:75: syntax-error */
t8=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[280];
av2[3]=lf[281];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}
else{
/* chicken-syntax.scm:75: syntax-error */
t5=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[280];
av2[3]=lf[281];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
/* chicken-syntax.scm:75: syntax-error */
t4=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[280];
av2[3]=lf[281];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* chicken-syntax.scm:75: syntax-error */
t2=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[280];
av2[3]=lf[281];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k5941 in k5937 in k5929 in k5922 in k5916 in loop in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_5943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5943,2,av);}
/* chicken-syntax.scm:952: ##sys#append */
t2=*((C_word*)lf[41]+1);{
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

/* a9139 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9140(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9140,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9144,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:339: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[230];
av2[3]=t2;
av2[4]=lf[232];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9142 in a9139 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9144(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_9144,2,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,lf[231]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,lf[26],t6);
t8=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_list(&a,4,lf[159],t2,t3,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k7302 in k7375 in k7379 in k7383 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_7304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7304,2,av);}
/* chicken-syntax.scm:707: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[178];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7305 in k7375 in k7379 in k7383 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_7306(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7306,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7310,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:714: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[178];
av2[3]=t2;
av2[4]=lf[179];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* for-each-loop1027 in a9070 in k9051 in a9048 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_9092(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_9092,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9102,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9077,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:361: ##sys#get */
t7=*((C_word*)lf[42]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[227];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5244 in k5234 in a5225 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_5246,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7311 in k7308 in a7305 in k7375 in k7379 in k7383 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_7313(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_7313,2,av);}
a=C_alloc(16);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7353,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:717: r */
t8=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[173];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* map-loop742 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_fcall f_9810(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9810,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* k7308 in a7305 in k7375 in k7379 in k7383 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_7310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7310,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:715: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[176];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11346 in k11343 in mapslots in k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_11348,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11474,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:94: string-append */
t5=*((C_word*)lf[182]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[283];
av2[4]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k11343 in mapslots in k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_11345,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11478,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:93: string-append */
t5=*((C_word*)lf[182]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[284];
av2[4]=t2;
av2[5]=lf[285];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

/* a6810 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in ... */
static void C_ccall f_6811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6811,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6819,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:816: take */
t3=*((C_word*)lf[161]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6817 in a6810 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in ... */
static void C_ccall f_6819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6819,2,av);}
/* chicken-syntax.scm:816: split-at! */
t2=*((C_word*)lf[160]+1);{
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

/* g2309 in k4833 in k4830 in a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_fcall f_4887(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4887,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4894,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_i_cadr(t2);
/* chicken-syntax.scm:1170: ##sys#validate-exports */
t7=*((C_word*)lf[73]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[70];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* a8107 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_8108(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8108,5,av);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8110,a[2]=t4,a[3]=t3,a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8198,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cdr(t2);
/* chicken-syntax.scm:484: quotify-proc */
t8=t5;
f_8110(t8,t6,t7,lf[205]);}

/* k4880 in k4949 in k4833 in k4830 in a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4882(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,1)))){
C_save_and_reclaim((void *)f_4882,2,av);}
a=C_alloc(57);
t2=C_a_i_list(&a,2,lf[20],t1);
t3=C_a_i_list(&a,2,lf[20],((C_word*)t0)[2]);
t4=C_a_i_list(&a,5,lf[74],((C_word*)t0)[3],((C_word*)t0)[4],t2,t3);
t5=C_a_i_list(&a,3,lf[75],lf[76],lf[77]);
t6=C_a_i_list(&a,2,lf[78],t4);
t7=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,5,lf[79],((C_word*)t0)[6],C_SCHEME_TRUE,t5,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* g2036 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static C_word C_fcall f_6116(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
if(C_truep(C_i_memq(t1,((C_word*)t0)[2]))){
t2=t1;
return(t2);}
else{
return(lf[117]);}}

/* k6071 in loop in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_6073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6073,2,av);}
t2=((C_word*)t0)[2];
f_5918(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* k11375 in k11349 in k11346 in k11343 in mapslots in k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11377(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11377,2,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[26],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11365,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:118: mapslots */
t7=((C_word*)((C_word*)t0)[5])[1];
f_11329(t7,t4,t5,t6);}

/* k8104 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_8106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8106,2,av);}
/* chicken-syntax.scm:465: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[205];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1644 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_fcall f_7687(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7687,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7712,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:682: g1650 */
t5=((C_word*)t0)[4];
f_7637(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop2568 in k4063 in k4239 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in ... */
static void C_fcall f_4102(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4102,4,t0,t1,t2,t3);}
a=C_alloc(21);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,lf[38],t7,C_SCHEME_TRUE,t6);
t9=C_a_i_list2(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10);
t12=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t10);
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

/* k4098 in k4063 in k4239 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in ... */
static void C_ccall f_4100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_4100,2,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,3,lf[30],t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[26],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop2030 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_fcall f_6131(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6131,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* chicken-syntax.scm:943: g2036 */
  f_6116(((C_word*)t0)[2],t3)
);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
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

/* k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_6129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(62,c,4)))){
C_save_and_reclaim((void *)f_6129,2,av);}
a=C_alloc(62);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[118],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=t4;
t6=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t7=C_a_i_list(&a,2,lf[116],((C_word*)t0)[7]);
t8=C_a_i_list(&a,3,lf[119],((C_word*)t0)[6],t7);
t9=C_a_i_list(&a,3,((C_word*)t0)[3],t6,t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5897,a[2]=t10,a[3]=t5,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5899,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t13,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word)li36),tmp=(C_word)a,a+=10,tmp));
t15=((C_word*)t13)[1];
f_5899(t15,t11,((C_word*)t0)[12],C_fix(1));}

/* k7196 in loop in k7157 in k7154 in k7151 in k7148 in k7136 in a7133 in k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_7198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7198,2,av);}
a=C_alloc(76);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[159],t3,t4,t5);
t7=C_a_i_list(&a,2,t2,t6);
t8=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t9=C_a_i_list(&a,2,lf[116],C_SCHEME_END_OF_LIST);
t10=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t11=C_a_i_list(&a,4,lf[159],t8,t9,t10);
t12=C_a_i_list(&a,2,t1,t11);
t13=C_a_i_list(&a,2,t7,t12);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7209,a[2]=((C_word*)t0)[7],a[3]=t14,tmp=(C_word)a,a+=4,tmp);
t16=((C_word*)t0)[8];
t17=C_u_i_cdr(t16);
/* chicken-syntax.scm:764: loop */
t18=((C_word*)((C_word*)t0)[9])[1];
f_7172(t18,t15,t1,t17);}

/* k10450 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10452,2,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[101],t2);
t4=t3;
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,lf[101],t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10308,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10320,a[2]=t8,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10394,a[2]=t11,a[3]=t15,a[4]=t12,a[5]=((C_word)li133),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_10394(t17,t13,((C_word*)t0)[7],((C_word*)t0)[5]);}

/* k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in ... */
static void C_fcall f_6805(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_6805,2,t0,t1);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6809,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6811,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6821,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word)li52),tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:815: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* k6807 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in ... */
static void C_ccall f_6809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6809,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[159],((C_word*)t0)[3],t1,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8153 in k8121 in k8112 in quotify-proc1395 in a8107 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_8155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8155,2,av);}
t2=C_u_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:479: c */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8149 in k8121 in k8112 in quotify-proc1395 in a8107 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_8151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8151,2,av);}
t2=((C_word*)t0)[2];
f_8135(t2,C_i_not(t1));}

/* k10465 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10467,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10471,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10483,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10493,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li134),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10493(t12,t8,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4892 in g2309 in k4833 in k4830 in a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_4894,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_symbolp(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_4906(t6,t4);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t6=C_u_i_length(((C_word*)t0)[3]);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_symbolp(t8))){
t9=C_i_cadr(((C_word*)t0)[3]);
t10=t5;
f_4906(t10,C_i_symbolp(t9));}
else{
t9=t5;
f_4906(t9,C_SCHEME_FALSE);}}
else{
t8=t5;
f_4906(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_4906(t6,C_SCHEME_FALSE);}}}

/* k4895 in k4892 in g2309 in k4833 in k4830 in a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_4897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4897,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4588 in k4574 in loop2389 in k4558 in k4552 in k4549 in k4543 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in ... */
static void C_ccall f_4590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4590,2,av);}
/* chicken-syntax.scm:1223: loop2389 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4569(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k7659 in k7652 in k7649 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_7661(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_7661,2,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,lf[101],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[7]);
t7=C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,t1,t7,((C_word*)t0)[9]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* map-loop384 in k10465 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10493(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10493,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[239],t6,t7);
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

/* k4684 in a4681 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_4686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4686,2,av);}
a=C_alloc(4);
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1217: ##compiler#check-and-validate-type */
t4=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=lf[52];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_caddr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a4681 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_4682(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4682,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4686,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1214: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[52];
av2[3]=t2;
av2[4]=lf[61];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4678 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_4680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4680,2,av);}
/* chicken-syntax.scm:1210: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[52];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4574 in loop2389 in k4558 in k4552 in k4549 in k4543 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in ... */
static void C_ccall f_4576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4576,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4590,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1223: ##sys#+ */
t5=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k8196 in a8107 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8198,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[209],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_11519,2,av);}
a=C_alloc(42);
t2=C_a_i_list(&a,2,lf[116],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[118],t3);
t5=C_a_i_list(&a,3,lf[101],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[4],t1,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11513,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t10=*((C_word*)lf[286]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[287];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k11511 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11513,2,av);}
/* chicken-syntax.scm:85: string->symbol */
t2=*((C_word*)lf[181]+1);{
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

/* loop2389 in k4558 in k4552 in k4549 in k4543 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in ... */
static void C_fcall f_4569(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4569,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4576,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1223: ##sys#= */
t5=*((C_word*)lf[57]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4558 in k4552 in k4549 in k4543 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in ... */
static void C_ccall f_4560(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4560,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4569,a[2]=t4,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4569(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_4383(2,av2);}}}

/* k10469 in k10465 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10471,2,av);}
/* chicken-syntax.scm:214: ##sys#append */
t2=*((C_word*)lf[41]+1);{
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

/* k10481 in k10465 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10483,2,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[231]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:214: ##sys#append */
t4=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4162 in k4239 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in ... */
static void C_ccall f_4164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_4164,2,av);}
a=C_alloc(19);
t2=t1;
t3=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4197,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4199,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4199(t13,t9,((C_word*)t0)[2]);}
else{
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=C_a_i_list1(&a,1,t5);
/* chicken-syntax.scm:1255: ##sys#append */
t7=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k4158 in k4239 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in ... */
static void C_ccall f_4160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4160,2,av);}
/* chicken-syntax.scm:1253: ##sys#put! */
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[40];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop2531 in k4162 in k4239 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in ... */
static void C_fcall f_4199(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4199,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4224,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[18]+1);
/* chicken-syntax.scm:1261: g2554 */
t6=*((C_word*)lf[18]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[34];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10595 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10597(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_10597,2,av);}
a=C_alloc(13);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t3=C_i_check_list_2(t1,lf[28]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10606,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10694,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word)li138),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10694(t8,t4,((C_word*)t0)[2],t1);}

/* k4195 in k4162 in k4239 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in ... */
static void C_ccall f_4197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_4197,2,av);}
a=C_alloc(12);
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list1(&a,1,t3);
/* chicken-syntax.scm:1255: ##sys#append */
t5=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11128 in a11125 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11130(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11130,2,av);}
a=C_alloc(15);
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_cons(&a,2,lf[101],t5);
t7=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[144],t6,lf[277]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:129: ##sys#check-syntax */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[276];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[278];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k11122 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11124,2,av);}
/* chicken-syntax.scm:120: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[276];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11048 in a11045 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11050,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[268],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop650 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_fcall f_9954(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9954,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9979,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:289: g656 */
t4=((C_word*)t0)[4];
f_9277(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4624 in loop2389 in k4608 in k4602 in k4599 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in ... */
static void C_ccall f_4626(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4626,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4638,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cdr(t4);
t6=t3;
f_4638(t6,C_eqp(t5,C_SCHEME_END_OF_LIST));}
else{
t5=t3;
f_4638(t5,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4638(t4,C_SCHEME_FALSE);}}}

/* k5234 in a5225 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_fcall f_5236(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5236,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5246,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1112: rename2197 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[91];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cdr(t3);
t5=t2;
f_5260(t5,C_eqp(t4,C_SCHEME_END_OF_LIST));}
else{
t4=t2;
f_5260(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_5260(t3,C_SCHEME_FALSE);}}}

/* k11042 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11044,2,av);}
/* chicken-syntax.scm:159: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[267];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* loop in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_fcall f_8895(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8895,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:396: reverse */
t4=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_i_car(t2);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8933,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:400: map* */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8926,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:399: lookup */
t6=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
f_8684(3,av2);}}}}

/* map-loop348 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10541(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10541,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[239],t6,t7);
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

/* k4608 in k4602 in k4599 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_ccall f_4610(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4610,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4619,a[2]=t4,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4619(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_4545(2,av2);}}}

/* loop2389 in k4608 in k4602 in k4599 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in ... */
static void C_fcall f_4619(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4619,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4626,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1223: ##sys#= */
t5=*((C_word*)lf[57]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a11125 in k3676 in k3673 in k3670 in k3666 */
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
/* chicken-syntax.scm:125: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[276];
av2[3]=t2;
av2[4]=lf[279];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a11045 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11046(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11046,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11050,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:163: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[267];
av2[3]=t2;
av2[4]=lf[269];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a5225 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_5226(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5226,5,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5236,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t6))){
t8=C_i_cdr(t6);
t9=t7;
f_5236(t9,C_eqp(t8,C_SCHEME_END_OF_LIST));}
else{
t8=t7;
f_5236(t8,C_SCHEME_FALSE);}}

/* k5222 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_5224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5224,2,av);}
/* chicken-syntax.scm:1110: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[90];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11032 in k11025 in k10970 in k10959 in a10956 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11034,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_10975(t3,t2);}

/* k4602 in k4599 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_4604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4604,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1223: ##sys#>= */
t4=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1195 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_fcall f_8861(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8861,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* k4599 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4601,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:1223: ##sys#length */
t4=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_4545(2,av2);}}}

/* k7447 in k7473 in k7465 in recur in k7424 in k7420 in k7416 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_7449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7449,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11025 in k10970 in k10959 in a10956 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_11027,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:178: string-append */
t3=*((C_word*)lf[182]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[264];
av2[3]=t1;
av2[4]=lf[265];
av2[5]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t2=((C_word*)t0)[3];
f_10975(t2,C_SCHEME_FALSE);}}

/* k9188 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9190,2,av);}
/* chicken-syntax.scm:271: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[235];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9192(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9192,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9211,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:279: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[235];
av2[3]=t2;
av2[4]=lf[242];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11015 in k10973 in k10970 in k10959 in a10956 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11017,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[116],t1);
t3=C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[2];
f_10998(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t3));}

/* k11150 in k11128 in a11125 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_11152,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11167,a[2]=t3,a[3]=t5,a[4]=t9,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t3))){
t11=C_u_i_cdr(t3);
t12=t10;
f_11167(t12,C_i_nullp(t11));}
else{
t11=t10;
f_11167(t11,C_SCHEME_FALSE);}}

/* k5698 in k5691 in k5685 in k5682 in loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_5700(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5700,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5716,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,1,((C_word*)t0)[5]);
/* chicken-syntax.scm:1008: ##sys#append */
t8=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k9170 in a9167 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9172(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9172,2,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[26],t5);
t7=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[159],t2,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* a9167 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9168(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9168,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9172,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:331: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[233];
av2[3]=t2;
av2[4]=lf[234];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9164 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9166,2,av);}
/* chicken-syntax.scm:327: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[233];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_6205,2,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[114],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5832,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5834,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:923: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k9045 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9047,2,av);}
/* chicken-syntax.scm:352: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[222];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9048 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9049(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9049,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9053,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:356: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[222];
av2[3]=t2;
av2[4]=lf[228];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_5874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_5874,2,av);}
a=C_alloc(37);
t2=C_a_i_list(&a,2,lf[116],((C_word*)t0)[2]);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6116,a[2]=((C_word*)t0)[3],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(t1,lf[28]);
t10=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6129,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6131,a[2]=t8,a[3]=t6,a[4]=t12,a[5]=t7,a[6]=((C_word)li37),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_6131(t14,t10,t1);}

/* k9061 in k9054 in k9051 in a9048 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9063,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop680 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_fcall f_9906(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9906,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* k9054 in k9051 in a9048 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9056,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:364: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[223];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7507 in recur in make-if-tree in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_7509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7509,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9051 in a9048 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_9053,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9071,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:357: ##sys#decompose-lambda-list */
t5=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6535 in k6519 in k6508 in k6505 in k6502 in a6499 in k6607 in k6611 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_6537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(111,c,1)))){
C_save_and_reclaim((void *)f_6537,2,av);}
a=C_alloc(111);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[3],t5);
t7=C_a_i_list(&a,3,lf[101],t3,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t11);
t13=C_a_i_cons(&a,2,lf[101],t12);
t14=C_a_i_list(&a,3,lf[142],lf[143],((C_word*)t0)[4]);
t15=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t14);
t16=C_a_i_list(&a,2,((C_word*)t0)[3],t15);
t17=C_a_i_list(&a,3,lf[101],((C_word*)t0)[4],t16);
t18=C_a_i_list(&a,3,lf[144],t13,t17);
t19=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t18);
t20=C_a_i_list(&a,3,t1,t7,t19);
t21=C_a_i_list(&a,3,lf[101],((C_word*)t0)[5],t20);
t22=C_a_i_list(&a,2,((C_word*)t0)[6],t21);
t23=((C_word*)t0)[7];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t23;
av2[1]=C_a_i_list(&a,1,t22);
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_5853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5853,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:934: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[114];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_5856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5856,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5862,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t2,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:936: r */
t6=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[127];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6519 in k6508 in k6505 in k6502 in a6499 in k6607 in k6611 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_6521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6521,2,av);}
a=C_alloc(11);
t2=t1;
t3=C_a_i_list(&a,1,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6537,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:872: r */
t6=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[141];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_5654(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5654,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5658,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:998: r */
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5650 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_5652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5652,2,av);}
/* chicken-syntax.scm:993: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[111];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1740 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_fcall f_7052(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7052,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7077,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7040,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:787: ##sys#decompose-lambda-list */
t7=*((C_word*)lf[163]+1);{
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

/* k7048 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_7050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7050,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[169]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_5658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5658,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:999: r */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[108];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_7847(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_7847,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7855,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:513: r */
t8=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[176];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_7843(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7843,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7847,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:510: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[192];
av2[3]=t2;
av2[4]=lf[201];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_5664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5664,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5667,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t4))){
/* chicken-syntax.scm:1002: syntax-error */
t5=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[111];
av2[3]=lf[113];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5667(2,av2);}}}

/* k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_5661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5661,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1000: r */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[104];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7839 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_7841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7841,2,av);}
/* chicken-syntax.scm:506: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[192];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_5667(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5667,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5674,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li33),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_5674(t7,((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* map-loop1917 in k6244 in k6241 in k6238 in parse-clause in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_fcall f_6287(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6287,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* chicken-syntax.scm:902: g1923 */
  f_6271(C_a_i(&a,15),((C_word*)t0)[2],t3)
);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
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

/* k6283 in k6244 in k6241 in k6238 in parse-clause in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_6285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6285,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t3,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9379 in k9375 in k9600 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_9381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9381,2,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[30],t2);
t4=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_list(&a,4,lf[238],((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t5);
t7=C_a_i_list(&a,3,lf[30],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,lf[30],((C_word*)t0)[7],t7);
t9=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[9],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k9375 in k9600 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_9377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9377,2,av);}
a=C_alloc(28);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9381,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9393,a[2]=t3,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9455,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li114),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9455(t12,t8,((C_word*)t0)[11],((C_word*)t0)[9]);}

/* k5691 in k5685 in k5682 in loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_5693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5693,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1008: ##sys#append */
t4=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* g1923 in k6244 in k6241 in k6238 in parse-clause in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static C_word C_fcall f_6271(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[116],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],t2,((C_word*)t0)[3]));}

/* k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_3808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3808,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3821,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3823,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1318: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* map-loop2437 in k4381 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_fcall f_4501(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4501,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_3805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3805,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3881,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3883,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1293: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5378 in k5370 in k5363 in a5360 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_5380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_5380,2,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5389 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_5390(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5390,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5394,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1070: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=t2;
av2[4]=lf[103];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_fcall f_5674(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_5674,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5684,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1005: reverse */
t7=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5749,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t7=C_i_car(t2);
/* chicken-syntax.scm:1014: c */
t8=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k5392 in a5389 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_5394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_5394,2,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t2);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t4,t7);
t9=C_a_i_cons(&a,2,lf[101],t8);
t10=C_a_i_list(&a,2,t3,t9);
t11=C_a_i_list(&a,1,t10);
t12=C_u_i_car(t2);
t13=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_a_i_list(&a,3,lf[102],t11,t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_list(&a,1,t6);
t8=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[102],t7,t2);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* quotify-proc1395 in a8107 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_fcall f_8110(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_8110,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8114,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:471: ##sys#check-syntax */
t5=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=t2;
av2[4]=lf[208];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8112 in quotify-proc1395 in a8107 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_8114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8114,2,av);}
a=C_alloc(12);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8123,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t7=C_u_i_cdr(t2);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
t10=C_a_i_cons(&a,2,t7,t9);
t11=t6;
f_8123(t11,C_a_i_cons(&a,2,lf[101],t10));}
else{
t7=t6;
f_8123(t7,C_i_cadr(((C_word*)t0)[2]));}}

/* k5386 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_5388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5388,2,av);}
/* chicken-syntax.scm:1066: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[100];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5360 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_5361(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5361,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5365,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1086: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[98];
av2[3]=t2;
av2[4]=lf[99];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5363 in a5360 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_5365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5365,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1087: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5682 in loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_5684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5684,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1006: reverse */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8121 in k8112 in quotify-proc1395 in a8107 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_fcall f_8123(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_8123,2,t0,t1);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_pairp(t2);
t5=C_i_not(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8135,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_8135(t7,t5);}
else{
t7=C_i_car(t2);
t8=C_eqp(lf[101],t7);
if(C_truep(t8)){
t9=t6;
f_8135(t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8151,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8155,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:479: r */
t11=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[207];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}}}

/* k8124 in k8121 in k8112 in quotify-proc1395 in a8107 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_8126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8126,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5685 in k5682 in loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5687(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5687,2,av);}
a=C_alloc(18);
t2=t1;
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5693,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5726,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1008: gensym */
t5=*((C_word*)lf[32]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,2,lf[26],t3);
t5=C_u_i_cdr(t2);
t6=C_a_i_cons(&a,2,t4,t5);
t7=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[101],((C_word*)t0)[5],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5370 in k5363 in a5360 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_5372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5372,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1088: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[47];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8133 in k8121 in k8112 in quotify-proc1395 in a8107 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_fcall f_8135(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_8135,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* chicken-syntax.scm:480: syntax-error */
t2=*((C_word*)lf[45]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[205];
av2[3]=lf[206];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_5862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5862,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:937: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[126];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_5865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5865,2,av);}
a=C_alloc(26);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t2,a[12]=((C_word*)t0)[2],tmp=(C_word)a,a+=13,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6165,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6165(t12,t8,((C_word*)t0)[2]);}

/* k4647 in k4636 in k4624 in loop2389 in k4608 in k4602 in k4599 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in ... */
static void C_ccall f_4649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4649,2,av);}
/* chicken-syntax.scm:1223: loop2389 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4619(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k4830 in a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
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
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1159: ##sys#strip-syntax */
t3=*((C_word*)lf[19]+1);{
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

/* k4833 in k4830 in a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_4835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,3)))){
C_save_and_reclaim((void *)f_4835,2,av);}
a=C_alloc(31);
t2=C_i_cadr(t1);
t3=C_i_car(t2);
t4=t3;
t5=C_u_i_cdr(t2);
t6=C_i_caddr(t1);
t7=t6;
t8=C_u_i_cdr(t1);
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
t11=C_a_i_list(&a,2,lf[20],t4);
t12=t11;
t13=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t14=t13;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t15)[1];
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4887,a[2]=t4,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t18=C_i_check_list_2(t5,lf[28]);
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4951,a[2]=t10,a[3]=t12,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4953,a[2]=t15,a[3]=t21,a[4]=t17,a[5]=t16,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t23=((C_word*)t21)[1];
f_4953(t23,t19,t5);}

/* k8831 in k8783 in fold in k8708 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_8833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_8833,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[101],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[144],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4636 in k4624 in loop2389 in k4608 in k4602 in k4599 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in ... */
static void C_fcall f_4638(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4638,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1223: ##sys#+ */
t5=*((C_word*)lf[56]+1);{
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

/* k9391 in k9375 in k9600 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_9393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9393,2,av);}
a=C_alloc(17);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9405,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9407,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9407(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4824 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_4826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4826,2,av);}
/* chicken-syntax.scm:1154: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[70];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_4828(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4828,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4832,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1158: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[70];
av2[3]=t2;
av2[4]=lf[80];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8007 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8009,2,av);}
/* chicken-syntax.scm:486: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[202];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5895 in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_5897,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[26],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in k6127 in k5872 in k5863 in k5860 in k5854 in k5851 in k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_fcall f_5899(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_5899,4,t0,t1,t2,t3);}
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
t11=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t8,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t10,a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
if(C_truep(C_i_pairp(t10))){
t12=C_u_i_cdr(t10);
if(C_truep(C_i_pairp(t12))){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6073,a[2]=t11,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t14=C_u_i_car(t10);
/* chicken-syntax.scm:957: c */
t15=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t15;
av2[1]=t13;
av2[2]=lf[125];
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t13=t11;
f_5918(t13,C_SCHEME_FALSE);}}
else{
t12=t11;
f_5918(t12,C_SCHEME_FALSE);}}}

/* k8013 in a8010 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_8015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8015,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8025,a[2]=t5,a[3]=t7,a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_8025(t9,((C_word*)t0)[3],t2);}

/* a8010 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8011(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8011,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8015,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:490: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[202];
av2[3]=t2;
av2[4]=lf[204];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* fold in k8013 in a8010 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_fcall f_8025(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_8025,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[26],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t4))){
t7=C_i_cdr(t4);
if(C_truep(C_i_nullp(t7))){
t8=C_u_i_car(t4);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8067,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:499: fold */
t11=t9;
t12=t6;
t1=t11;
t2=t12;
goto loop;}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8070,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:501: ##sys#check-syntax */
t9=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[202];
av2[3]=t4;
av2[4]=lf[203];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8052,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:498: fold */
t11=t7;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k8084 in k8068 in fold in k8013 in a8010 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_8086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8086,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[159],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_7108(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_7108,2,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,lf[157],t1);
t3=C_a_i_list(&a,5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6690,a[2]=((C_word*)t0)[6],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6692,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:777: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k8065 in fold in k8013 in a8010 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_8067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_8067,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[159],((C_word*)t0)[3],t1,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8924 in loop in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_8926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8926,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* chicken-syntax.scm:401: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8895(t5,((C_word*)t0)[5],t4,t2);}

/* map-loop1109 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_fcall f_8939(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8939,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8964,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:392: g1115 */
t5=((C_word*)t0)[4];
f_8665(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8931 in loop in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_8933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8933,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* chicken-syntax.scm:401: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8895(t5,((C_word*)t0)[5],t4,t2);}

/* k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_7630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7630,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:680: r */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[187];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7465 in recur in k7424 in k7420 in k7416 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_7467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7467,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7475,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7479,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:642: reverse */
t5=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_7627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7627,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:677: r */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[188];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7477 in k7465 in recur in k7424 in k7420 in k7416 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_7479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7479,2,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:639: ##sys#append */
t4=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7473 in k7465 in recur in k7424 in k7420 in k7416 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_7475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7475,2,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[101],((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7449,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=((C_word*)t0)[6];
t8=C_u_i_cdr(t7);
t9=((C_word*)t0)[7];
t10=C_u_i_cdr(t9);
t11=((C_word*)t0)[6];
t12=C_u_i_car(t11);
/* chicken-syntax.scm:643: recur */
t13=((C_word*)((C_word*)t0)[8])[1];
f_7428(t13,t6,((C_word*)t0)[9],t8,t10,t12);}

/* g1650 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_fcall f_7637(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7637,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7645,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:682: prefix-sym */
f_7591(t3,lf[185],t2);}

/* k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_7633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7633,2,av);}
a=C_alloc(31);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7648,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7687,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li67),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7687(t12,t8,((C_word*)t0)[5]);}

/* k7649 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_7651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_7651,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:687: make-if-tree */
t4=((C_word*)t0)[9];
f_7489(t4,t3,((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* make-if-tree in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_fcall f_7489(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7489,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7495,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_7495(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* k8962 in map-loop1109 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8964(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8964,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8939(t6,((C_word*)t0)[5],t5);}

/* k4222 in map-loop2531 in k4162 in k4239 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in ... */
static void C_ccall f_4224(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4224,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4199(t6,((C_word*)t0)[5],t5);}

/* k7075 in map-loop1740 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_7077(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7077,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7052(t6,((C_word*)t0)[5],t5);}

/* k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_7648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7648,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=t3;
t5=((C_word*)t0)[6];
t6=t2;
t7=((C_word*)t0)[11];
t8=*((C_word*)lf[32]+1);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7418,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:634: reverse */
t10=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k7643 in g1650 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_7645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7645,2,av);}
/* chicken-syntax.scm:682: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a7039 in map-loop1740 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_7040(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7040,5,av);}
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* recur in make-if-tree in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_fcall f_7495(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_7495,5,t0,t1,t2,t3,t4);}
a=C_alloc(18);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7509,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:654: reverse */
t6=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
t7=C_a_i_list(&a,2,lf[173],((C_word*)t0)[3]);
t8=t7;
t9=C_i_car(t3);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7575,a[2]=t10,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t1,a[6]=t8,a[7]=t2,a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:657: reverse */
t12=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t12;
av2[1]=t11;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}}

/* k7652 in k7649 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_7654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7654,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:690: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[186];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_5824(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_5824,2,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[104],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5652,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5654,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:996: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k8743 in fold in k8708 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_8745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8745,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[30],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8737 in g1166 in fold in k8708 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_8739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8739,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1160 in fold in k8708 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_fcall f_8747(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8747,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8772,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:407: g1166 */
t5=((C_word*)t0)[4];
f_8731(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5830 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_5832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5832,2,av);}
/* chicken-syntax.scm:920: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[115];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_5834(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5834,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5838,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:925: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[115];
av2[3]=t2;
av2[4]=lf[128];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9600 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_9602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9602,2,av);}
a=C_alloc(46);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[30],t2);
t4=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t3);
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,lf[101],t6);
t8=t7;
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9377,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9503,a[2]=t11,a[3]=t15,a[4]=t12,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_9503(t17,t13,((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k5836 in a5833 in k6203 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_5838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5838,2,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=C_i_cadddr(((C_word*)t0)[2]);
t7=t6;
t8=C_i_cddddr(((C_word*)t0)[2]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5853,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t7,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:933: r */
t11=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[47];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k11165 in k11150 in k11128 in a11125 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_11167(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_11167,2,t0,t1);}
a=C_alloc(24);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[30],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t4=C_a_i_cons(&a,2,lf[101],t3);
t5=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[144],t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4904 in k4892 in g2309 in k4833 in k4830 in a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_fcall f_4906(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4906,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1176: ##sys#syntax-error-hook */
t2=*((C_word*)lf[71]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[72];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k11079 in a11076 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_11081,2,av);}
a=C_alloc(57);
t2=C_a_i_list(&a,1,lf[272]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[101],t4);
t6=C_a_i_list(&a,1,lf[273]);
t7=C_a_i_list(&a,2,lf[274],t6);
t8=C_a_i_list(&a,3,lf[142],lf[143],t1);
t9=C_a_i_list(&a,4,lf[101],t1,t7,t8);
t10=C_a_i_list(&a,3,lf[144],t5,t9);
t11=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_a_i_list(&a,3,lf[26],t2,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* k11073 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11075,2,av);}
/* chicken-syntax.scm:139: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[271];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11076 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11077(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11077,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11081,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:143: r */
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[275];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k11472 in k11346 in k11343 in mapslots in k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11474,2,av);}
/* chicken-syntax.scm:94: string->symbol */
t2=*((C_word*)lf[181]+1);{
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

/* k11476 in k11343 in mapslots in k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11478,2,av);}
/* chicken-syntax.scm:93: string->symbol */
t2=*((C_word*)lf[181]+1);{
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

/* k11059 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11061,2,av);}
/* chicken-syntax.scm:153: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[270];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11062 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_11063(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11063,5,av);}
a=C_alloc(3);
t5=C_i_cdr(t2);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[37],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop851 in k9616 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_fcall f_9644(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9644,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
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

/* k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8658(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8658,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8973,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word)li100),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8973(t7,t3,t2,C_SCHEME_END_OF_LIST);}

/* k4976 in map-loop2303 in k4833 in k4830 in a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4978(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4978,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4953(t6,((C_word*)t0)[5],t5);}

/* k11491 in k11517 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(51,c,4)))){
C_save_and_reclaim((void *)f_11493,2,av);}
a=C_alloc(51);
t2=C_a_i_list(&a,1,lf[127]);
t3=C_a_i_list(&a,2,lf[20],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[119],lf[127],t3);
t5=C_a_i_list(&a,3,lf[101],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t1,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11327,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11329,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word)li151),tmp=(C_word)a,a+=8,tmp));
t12=((C_word*)t10)[1];
f_11329(t12,t8,((C_word*)t0)[8],C_fix(1));}

/* k7565 in k7573 in recur in make-if-tree in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_7567(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7567,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7559,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:659: r */
t6=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[155];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9616 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_9618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9618,2,av);}
a=C_alloc(21);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9622,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9634,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9644,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li116),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9644(t12,t8,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k6508 in k6505 in k6502 in a6499 in k6607 in k6611 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_6510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6510,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:869: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[140];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* map-loop456 in k10318 in k10450 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10346(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10346,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[239],t6,t7);
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

/* k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_7578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7578,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:665: ##sys#check-syntax */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[180];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[189];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8631 in map*1055 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8633(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8633,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8637,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* chicken-syntax.scm:381: map* */
t6=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k10970 in k10959 in a10956 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_10972,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10975,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[5])[1]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11027,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:177: get-line-number */
t5=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_10975(t4,C_SCHEME_UNDEFINED);}}

/* k8635 in k8631 in map*1055 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_8637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8637,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7573 in recur in make-if-tree in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_7575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_7575,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7567,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:658: r */
t5=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[154];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10973 in k10970 in k10959 in a10956 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10975(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_10975,2,t0,t1);}
a=C_alloc(25);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=C_a_i_list(&a,2,lf[121],((C_word*)t0)[2]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10998,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t8=C_u_i_cdr(((C_word*)t0)[5]);
t9=t7;
f_10998(t9,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t8));}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11017,a[2]=t7,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:186: ##sys#strip-syntax */
t9=*((C_word*)lf[19]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k10896 in k10884 in a10881 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,2)))){
C_save_and_reclaim((void *)f_10898,2,av);}
a=C_alloc(57);
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t7=C_a_i_list(&a,2,lf[121],t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10921,a[2]=t8,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t10=t9;
f_10921(t10,C_a_i_cons(&a,2,lf[258],((C_word*)t0)[5]));}
else{
t10=C_a_i_list(&a,2,lf[116],lf[259]);
t11=C_a_i_list(&a,2,lf[260],t10);
t12=C_a_i_list(&a,2,lf[116],((C_word*)t0)[3]);
t13=C_a_i_list(&a,3,t11,t2,t12);
t14=t9;
f_10921(t14,C_a_i_cons(&a,2,lf[258],t13));}}

/* k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_6222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6222,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6225,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:890: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[137];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_6225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6225,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6228,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:891: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[136];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_6228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6228,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6231,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:892: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[129];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4949 in k4833 in k4830 in a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_4951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4951,2,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,2,lf[20],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1179: ##sys#validate-exports */
t5=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[70];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop2303 in k4833 in k4830 in a4827 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_fcall f_4953(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4953,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4978,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:1168: g2309 */
t5=((C_word*)t0)[4];
f_4887(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a6499 in k6607 in k6611 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_6500(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6500,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6504,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:866: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[135];
av2[3]=t2;
av2[4]=lf[147];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6505 in k6502 in a6499 in k6607 in k6611 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_6507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6507,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6510,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:868: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[145];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6502 in a6499 in k6607 in k6611 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_6504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6504,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:867: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[146];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_7581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7581,2,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7590,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7789,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7789(t11,t7,((C_word*)t0)[2]);}

/* k6211 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_6213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6213,2,av);}
/* chicken-syntax.scm:882: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[130];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_6215(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6215,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6219,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:888: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[130];
av2[3]=t2;
av2[4]=lf[139];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_6219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6219,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:889: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[138];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4987 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_4989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4989,2,av);}
/* chicken-syntax.scm:1127: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[81];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7597 in prefix-sym in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_7599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7599,2,av);}
/* chicken-syntax.scm:668: string->symbol */
t2=*((C_word*)lf[181]+1);{
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

/* k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_7590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7590,2,av);}
a=C_alloc(32);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7591,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7607,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li64),tmp=(C_word)a,a+=5,tmp);
t9=C_i_check_list_2(t2,lf[28]);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7621,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7755,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,a[6]=((C_word)li69),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_7755(t14,t10,t2);}

/* prefix-sym in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_fcall f_7591(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7591,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7599,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7603,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:668: symbol->string */
t6=*((C_word*)lf[183]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6241 in k6238 in parse-clause in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_fcall f_6243(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_6243,2,t0,t1);}
a=C_alloc(23);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6246,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t4=C_a_i_list(&a,2,((C_word*)t0)[7],((C_word*)t0)[8]);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cddr(((C_word*)t0)[9]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t3;
f_6246(t8,C_a_i_cons(&a,2,lf[30],t7));}
else{
t4=((C_word*)t0)[9];
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=t3;
f_6246(t7,C_a_i_cons(&a,2,lf[30],t6));}}

/* k6238 in parse-clause in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_fcall f_6240(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_6240,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
t4=t3;
f_6243(t4,C_i_cadr(((C_word*)t0)[8]));}
else{
t4=((C_word*)t0)[8];
t5=t3;
f_6243(t5,C_u_i_car(t4));}}

/* k6244 in k6241 in k6238 in parse-clause in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_fcall f_6246(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_6246,2,t0,t1);}
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
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6271,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6285,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6287,a[2]=t7,a[3]=t5,a[4]=t11,a[5]=t6,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_6287(t13,t9,((C_word*)t0)[2]);}}

/* k5146 in loop2228 in k5130 in k5124 in k5121 in k5115 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_5148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5148,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5162,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1120: ##sys#+ */
t5=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k10334 in k10318 in k10450 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10336,2,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[231]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:214: ##sys#append */
t4=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k10884 in a10881 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10886,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10898,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:197: r */
t11=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[176];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_fcall f_7874(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_7874,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[193];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=C_slot(t2,C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7899,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:526: ##sys#check-syntax */
t9=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[192];
av2[3]=t5;
av2[4]=lf[198];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
/* chicken-syntax.scm:522: syntax-error */
t4=*((C_word*)lf[45]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[192];
av2[3]=lf[199];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}}

/* a10881 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10882(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10882,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10886,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:193: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[256];
av2[3]=t2;
av2[4]=lf[261];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7870 in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_7872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7872,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10878 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10880,2,av);}
/* chicken-syntax.scm:188: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[256];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* loop2228 in k5130 in k5124 in k5121 in k5115 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_fcall f_5141(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5141,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5148,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1120: ##sys#= */
t5=*((C_word*)lf[57]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k10996 in k10973 in k10970 in k10959 in a10956 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10998(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_10998,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[248],t1);
t3=C_a_i_list(&a,4,lf[159],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_6231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6231,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6234,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:893: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* parse-clause in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_6236(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6236,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6240,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=t3;
f_6240(t6,C_u_i_car(t5));}
else{
t5=t3;
f_6240(t5,C_SCHEME_FALSE);}}

/* a4750 in k4731 in k4722 in a4719 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4751(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4751,5,av);}
a=C_alloc(30);
t5=t3;
if(C_truep(t2)){
t6=C_i_cdddr(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[4],t7);
t9=C_a_i_list(&a,2,lf[64],t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4776,a[2]=t10,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4780,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t13=C_a_i_list(&a,2,lf[66],((C_word*)t0)[4]);
t14=t12;
f_4780(t14,C_a_i_list(&a,1,t13));}
else{
t13=t12;
f_4780(t13,C_SCHEME_END_OF_LIST);}}
else{
/* chicken-syntax.scm:1203: syntax-error */
t6=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[62];
av2[3]=lf[67];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}}

/* k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_6234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_6234,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6236,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li42),tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6366,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:905: r */
t5=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[135];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a3822 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_ccall f_3823(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3823,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3827,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1320: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[12];
av2[3]=t2;
av2[4]=lf[23];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3819 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_ccall f_3821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3821,2,av);}
/* chicken-syntax.scm:1316: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[12];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7897 in expand in k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_7899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7899,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:527: c */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3834 in k3825 in a3822 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in ... */
static void C_ccall f_3836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3836,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3839,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1324: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[20];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3837 in k3834 in k3825 in a3822 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in ... */
static void C_ccall f_3839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3839,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3842,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caddr(((C_word*)t0)[4]);
/* chicken-syntax.scm:1325: ##sys#strip-syntax */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* loop in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_8973(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_8973,4,t0,t1,t2,t3);}
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8986,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:388: append */
t6=*((C_word*)lf[166]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:389: append* */
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
/* chicken-syntax.scm:391: loop */
t10=t1;
t11=t8;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}}

/* k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3714,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9047,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9049,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:354: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_ccall f_3811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3811,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3814,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1335: ##sys#macro-subset */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[10]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3718(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3718,2,av);}
a=C_alloc(10);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#define-values-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8570,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8572,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:368: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7859 in k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_7861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_7861,2,av);}
a=C_alloc(23);
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7872,a[2]=((C_word*)t0)[4],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7874,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li74),tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_7874(t10,t6,((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k5130 in k5124 in k5121 in k5115 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_5132(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5132,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5141,a[2]=t4,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5141(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5088(2,av2);}}}

/* k10953 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10955,2,av);}
/* chicken-syntax.scm:166: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[262];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10956 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10957(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10957,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10961,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:171: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[262];
av2[3]=t2;
av2[4]=lf[266];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3711,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9117,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9119,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:346: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* map-loop1248 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_fcall f_8480(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8480,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k3825 in a3822 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in ... */
static void C_ccall f_3827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3827,2,av);}
a=C_alloc(5);
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:1323: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[21];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4778 in a4750 in k4731 in k4722 in a4719 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_fcall f_4780(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_4780,2,t0,t1);}
a=C_alloc(15);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[65],t2);
t4=C_a_i_list(&a,1,t3);
/* chicken-syntax.scm:43: ##sys#append */
t5=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:43: ##sys#append */
t2=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k8984 in loop in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_8986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8986,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-syntax.scm:391: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8973(t4,((C_word*)t0)[4],t3,t1);}

/* k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_3802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3802,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4004,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4006,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1229: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10959 in a10956 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10961,2,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?lf[263]:C_i_car(t6));
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10972,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t10,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:175: r */
t12=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[176];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in ... */
static void C_ccall f_3817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3817,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in ... */
static void C_ccall f_3814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_3814,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#chicken-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3817,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1341: register-feature! */
t4=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[3];
av2[3]=lf[4];
av2[4]=lf[5];
av2[5]=lf[6];
av2[6]=lf[7];
av2[7]=lf[8];
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}

/* k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_3736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3736,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7841,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7843,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:508: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_3739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3739,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7837,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:621: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[154];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_3733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3733,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8009,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8011,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:488: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3730,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8106,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8108,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:467: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3724,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8258,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8260,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:437: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3727,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8254,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:456: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[210];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_8683(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_8683,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8684,a[2]=t2,a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8695,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8895,a[2]=t6,a[3]=((C_word*)t0)[7],a[4]=t3,a[5]=((C_word)li98),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8895(t8,t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* map-loop420 in k10450 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10394(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10394,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[239],t6,t7);
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

/* lookup in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8684,3,av);}
t3=C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5160 in k5146 in loop2228 in k5130 in k5124 in k5121 in k5115 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_5162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5162,2,av);}
/* chicken-syntax.scm:1120: loop2228 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5141(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3721,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8516,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8518,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:422: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4774 in a4750 in k4731 in k4722 in a4719 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_4776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4776,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[37],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8068 in fold in k8013 in a8010 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_8070(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_8070,2,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8086,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:504: fold */
t8=((C_word*)((C_word*)t0)[4])[1];
f_8025(t8,t7,((C_word*)t0)[5]);}

/* k4259 in loop2 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in ... */
static void C_ccall f_4261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4261,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8695,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8861,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li97),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8861(t11,t7,((C_word*)t0)[7]);}

/* k4295 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in ... */
static void C_fcall f_4297(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_4297,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_car(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4314,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:1283: ##compiler#check-and-validate-type */
t9=*((C_word*)lf[18]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=lf[34];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
/* chicken-syntax.scm:1287: syntax-error */
t2=*((C_word*)lf[45]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
av2[2]=lf[34];
av2[3]=lf[46];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_3745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3745,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7296,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:737: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[173];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3840 in k3837 in k3834 in k3825 in a3822 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in ... */
static void C_ccall f_3842(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3842,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_a_i_list(&a,2,((C_word*)t0)[2],lf[15]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3865,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1330: ##compiler#check-and-validate-type */
t7=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t1;
av2[3]=lf[12];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_3748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3748,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7124,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:772: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[153];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* g1115 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_fcall f_8665(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8665,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8673,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8677,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:392: gensym */
t5=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8661,2,av);}
a=C_alloc(26);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8665,a[2]=((C_word*)t0)[2],a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(t2,lf[28]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8683,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8939,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8939(t13,t9,t2);}

/* k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_3742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3742,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7385,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:709: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[173];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8050 in fold in k8013 in a8010 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_8052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_8052,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[159],((C_word*)t0)[3],t1,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8671 in g1115 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8673,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8675 in g1115 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8677,2,av);}
/* chicken-syntax.scm:392: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4993 in a4990 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_4995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4995,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-syntax.scm:1132: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4996 in k4993 in a4990 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_4998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4998,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5001,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1133: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[20];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a4990 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_4991(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4991,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4995,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1131: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[81];
av2[3]=t2;
av2[4]=lf[87];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8770 in map-loop1160 in fold in k8708 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_8772(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8772,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8747(t6,((C_word*)t0)[5],t5);}

/* k8783 in fold in k8708 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_fcall f_8785(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_8785,2,t0,t1);}
a=C_alloc(14);
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8796,a[2]=((C_word*)t0)[4],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cdr(((C_word*)t0)[5]);
t9=((C_word*)t0)[3];
t10=C_u_i_cdr(t9);
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
/* chicken-syntax.scm:412: fold */
t13=((C_word*)((C_word*)t0)[6])[1];
f_8712(t13,t7,t8,t10,t12);}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_a_i_list(&a,3,lf[101],C_SCHEME_END_OF_LIST,t2);
t4=t3;
t5=((C_word*)t0)[2];
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8833,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=C_i_cdr(((C_word*)t0)[5]);
t9=((C_word*)t0)[3];
t10=C_u_i_cdr(t9);
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
/* chicken-syntax.scm:418: fold */
t13=((C_word*)((C_word*)t0)[6])[1];
f_8712(t13,t7,t8,t10,t12);}}

/* k4700 in k4684 in a4681 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_4702,2,av);}
a=C_alloc(12);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[38],t1,C_SCHEME_TRUE,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4716 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_4718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4718,2,av);}
/* chicken-syntax.scm:1190: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[62];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8794 in k8783 in fold in k8708 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_8796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8796,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop172 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10844(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10844,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k6948 in build in a6820 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in ... */
static void C_ccall f_6950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_6950,2,av);}
a=C_alloc(34);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6961,a[2]=((C_word*)t0)[6],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
if(C_truep(C_i_pairp(t11))){
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
/* chicken-syntax.scm:827: build */
t14=((C_word*)((C_word*)t0)[7])[1];
f_6897(t14,t9,t13,t1);}
else{
/* chicken-syntax.scm:828: build */
t12=((C_word*)((C_word*)t0)[7])[1];
f_6897(t12,t9,C_SCHEME_END_OF_LIST,t1);}}

/* k7341 in k7351 in k7311 in k7308 in a7305 in k7375 in k7379 in k7383 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_7343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_7343,2,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[159],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop711 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_fcall f_9858(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9858,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_5459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5459,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5462,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1031: r */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_5455(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5455,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5459,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1030: r */
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[104];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5451 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_5453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5453,2,av);}
/* chicken-syntax.scm:1025: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5529 in k5486 in k5483 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_5531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5531,2,av);}
/* chicken-syntax.scm:1040: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6959 in k6948 in build in a6820 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in ... */
static void C_ccall f_6961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6961,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10306 in k10450 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_10308,2,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[101],t2);
t4=C_a_i_list(&a,4,lf[238],((C_word*)t0)[2],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop773 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_fcall f_9740(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9740,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9747,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9747(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9747(t6,C_SCHEME_FALSE);}}

/* k9745 in map-loop773 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_fcall f_9747(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_9747,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_slot(((C_word*)t0)[4],C_fix(0));
t5=(
  /* chicken-syntax.scm:305: g779 */
  f_9580(C_a_i(&a,30),((C_word*)t0)[5],t2,t3,t4)
);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t6);
t8=C_mutate2(((C_word *)((C_word*)t0)[6])+1,t6);
t9=C_slot(((C_word*)t0)[2],C_fix(1));
t10=C_slot(((C_word*)t0)[3],C_fix(1));
t11=C_slot(((C_word*)t0)[4],C_fix(1));
t12=((C_word*)((C_word*)t0)[7])[1];
f_9740(t12,((C_word*)t0)[8],t9,t10,t11);}
else{
t2=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[9],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5519 in k5503 in k5492 in k5486 in k5483 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_5521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_5521,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[101],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5555 in k5552 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_5557(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5557,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1049: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5475(t6,((C_word*)t0)[6],t3,t4,((C_word*)t0)[7],t5,C_SCHEME_FALSE);}

/* k5552 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5554,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5574,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1048: gensym */
t4=*((C_word*)lf[32]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-syntax.scm:1050: c */
t5=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k10322 in k10318 in k10450 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10324,2,av);}
/* chicken-syntax.scm:214: ##sys#append */
t2=*((C_word*)lf[41]+1);{
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

/* k10318 in k10450 in k10282 in k10275 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10320,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10324,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10336,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10346,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li132),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10346(t12,t8,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10833 in map-loop199 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10835(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10835,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10810(t6,((C_word*)t0)[5],t5);}

/* k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_6736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6736,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6739,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:791: genvars */
t4=((C_word*)t0)[5];
f_6698(t4,t3,t2);}

/* k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_6733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_6733,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_cdr(((C_word*)t0)[4]);
t8=C_i_check_list_2(t7,lf[28]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7050,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7052,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7052(t13,t9,t7);}

/* k7710 in map-loop1644 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_7712(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7712,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7687(t6,((C_word*)t0)[5],t5);}

/* k6728 in loop in genvars in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_6730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6730,2,av);}
/* chicken-syntax.scm:784: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_6739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6739,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:792: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[168];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6720 in k6716 in loop in genvars in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_6722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6722,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_6754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6754,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:797: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[155];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_6751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6751,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:796: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[154];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_6757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6757,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:798: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[157];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6364 in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_6366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_6366,2,av);}
a=C_alloc(65);
t2=t1;
t3=C_a_i_list(&a,2,lf[116],lf[131]);
t4=C_a_i_list(&a,3,lf[119],((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,3,lf[132],((C_word*)t0)[2],C_fix(1));
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
t16=C_i_check_list_2(t15,lf[28]);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6391,a[2]=t9,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6422,a[2]=t12,a[3]=t19,a[4]=t14,a[5]=t13,a[6]=((C_word)li43),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_6422(t21,t17,t15);}

/* k6621 in a6618 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_6623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_6623,2,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6637,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_cons(&a,2,t3,t6);
/* chicken-syntax.scm:847: ##sys#check-syntax */
t9=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[148];
av2[3]=t8;
av2[4]=lf[150];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6667,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_cons(&a,2,t3,t6);
/* chicken-syntax.scm:854: ##sys#check-syntax */
t9=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[148];
av2[3]=t8;
av2[4]=lf[151];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}

/* map-loop1587 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_fcall f_7755(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7755,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7780,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:673: g1593 */
t5=((C_word*)t0)[4];
f_7607(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6996 in build in a6820 in k6803 in k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in ... */
static void C_ccall f_6998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6998,2,av);}
/* chicken-syntax.scm:823: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6396 in k6389 in k6364 in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_6398(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6398,2,av);}
a=C_alloc(23);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6402,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[7],((C_word*)t0)[8]))){
/* chicken-syntax.scm:909: ##sys#append */
t4=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_a_i_list(&a,2,lf[133],((C_word*)t0)[6]);
t5=C_a_i_list(&a,2,((C_word*)t0)[7],t4);
t6=C_a_i_list(&a,1,t5);
/* chicken-syntax.scm:909: ##sys#append */
t7=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k6389 in k6364 in k6232 in k6229 in k6226 in k6223 in k6220 in k6217 in a6214 in k6484 in k6488 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_6391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6391,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:910: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[134];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5180 in k5174 in k5171 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_5182(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5182,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5191,a[2]=t4,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5191(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5117(2,av2);}}}

/* k5578 in k5552 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_5580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_5580,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1052: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5475(t4,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1053: syntax-error */
t4=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[105];
av2[3]=lf[106];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5620,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1057: gensym */
t4=*((C_word*)lf[32]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5595 in k5578 in k5552 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_5597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_5597,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_list2(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1058: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_5475(t9,((C_word*)t0)[6],t3,((C_word*)t0)[7],t7,t8,C_SCHEME_FALSE);}

/* k5196 in loop2228 in k5180 in k5174 in k5171 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_5198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5198,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5212,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1120: ##sys#+ */
t5=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* loop2228 in k5180 in k5174 in k5171 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_fcall f_5191(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5191,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5198,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1120: ##sys#= */
t5=*((C_word*)lf[57]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k8601 in append*1054 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8603,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8435 in foldl1326 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_8436(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8436,5,av);}
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8432 in foldl1326 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_8434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8434,2,av);}
/* chicken-syntax.scm:447: ##sys#append */
t2=*((C_word*)lf[41]+1);{
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

/* k5174 in k5171 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_5176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5176,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1120: ##sys#>= */
t4=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map*1055 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8610(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8610,4,av);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8633,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
/* chicken-syntax.scm:381: proc */
t6=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* chicken-syntax.scm:380: proc */
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k8438 in foldl1326 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_8440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8440,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8410(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop1274 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_fcall f_8446(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8446,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* k5171 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5173,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* chicken-syntax.scm:1120: ##sys#length */
t4=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5117(2,av2);}}}

/* k5271 in k5258 in k5234 in a5225 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_5273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_5273,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5572 in k5552 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_5574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5574,2,av);}
/* chicken-syntax.scm:1048: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* map-loop622 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_9988(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9988,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10013,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:288: g628 */
t4=((C_word*)t0)[4];
f_9262(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a4740 in k4731 in k4722 in a4719 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4741,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4749,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1201: ##sys#strip-syntax */
t3=*((C_word*)lf[19]+1);{
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

/* foldl1326 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_fcall f_8410(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_8410,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8440,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(0));
t8=t6;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8434,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8436,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:447: ##sys#decompose-lambda-list */
t12=*((C_word*)lf[163]+1);{
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

/* loop2 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in ... */
static void C_fcall f_4243(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4243,4,t0,t1,t2,t3);}
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4261,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(t2);
t8=C_fixnum_plus(t3,C_fix(1));
/* chicken-syntax.scm:1252: loop2 */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* k4239 in k4057 in k4054 in loop in k4036 in k4033 in k4030 in k4027 in k4023 in k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in ... */
static void C_ccall f_4241(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4241,2,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4065,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4160,a[2]=t4,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4164,a[2]=((C_word*)t0)[10],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1256: ##sys#get */
t7=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[9];
av2[3]=lf[40];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_3778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3778,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5321,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5323,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1102: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_ccall f_3775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3775,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5342,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5344,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1095: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_ccall f_3772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3772,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5359,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5361,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1084: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9977 in map-loop650 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_9979(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9979,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9954(t6,((C_word*)t0)[5],t5);}

/* k4731 in k4722 in a4719 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_4733(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_4733,2,av);}
a=C_alloc(11);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4741,a[2]=t2,a[3]=t4,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4751,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1197: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}

/* k4747 in a4740 in k4731 in k4722 in a4719 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_4749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4749,2,av);}
/* chicken-syntax.scm:1201: ##compiler#validate-type */
t2=*((C_word*)lf[63]+1);{
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

/* map-loop594 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10022(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10022,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10047,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:287: g600 */
t5=((C_word*)t0)[4];
f_9244(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_3769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3769,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5388,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5390,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1068: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_3766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3766,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5644,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1027: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[104];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_3763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3763,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5824,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:995: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[104];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k10124 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10126,2,av);}
/* chicken-syntax.scm:241: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[243];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_3760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3760,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6205,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:922: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[114];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10128(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10128,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10132,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:245: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[243];
av2[3]=t2;
av2[4]=lf[253];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10919 in k10896 in k10884 in a10881 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10921(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_10921,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[257],t1);
t3=C_a_i_list(&a,4,lf[159],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4719 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_4720(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4720,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4724,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1194: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[62];
av2[3]=t2;
av2[4]=lf[69];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4722 in a4719 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_4724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4724,2,av);}
a=C_alloc(4);
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_caddr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1197: ##sys#strip-syntax */
t4=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[68];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5258 in k5234 in a5225 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_fcall f_5260(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5260,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cdr(((C_word*)t0)[2]);
t5=C_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5273,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1112: rename2197 */
t8=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[91];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
/* chicken-syntax.scm:1112: ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* fold in k8708 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_fcall f_8712(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_8712,5,t0,t1,t2,t3,t4);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8731,a[2]=((C_word*)t0)[2],a[3]=((C_word)li94),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[28]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8745,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8747,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_8747(t15,t11,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8785,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t4);
if(C_truep(C_i_pairp(t6))){
t7=C_i_cdar(t4);
t8=t5;
f_8785(t8,C_i_nullp(t7));}
else{
t7=t5;
f_8785(t7,C_SCHEME_FALSE);}}}

/* k8708 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_8710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8710,2,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_8712(t5,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* k10130 in a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10132,2,av);}
a=C_alloc(10);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,lf[26],t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10141,a[2]=((C_word*)t0)[3],a[3]=t8,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:248: r */
t10=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[252];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k10148 in k10145 in k10142 in k10139 in k10130 in a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_10150,2,av);}
a=C_alloc(6);
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t2=(C_truep(((C_word*)((C_word*)t0)[2])[1])?((C_word*)((C_word*)t0)[3])[1]:C_SCHEME_FALSE);
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(t2)?C_a_i_list(&a,2,lf[244],((C_word*)t0)[5]):(C_truep(((C_word*)((C_word*)t0)[2])[1])?C_a_i_list(&a,2,lf[245],((C_word*)t0)[5]):(C_truep(((C_word*)((C_word*)t0)[3])[1])?((C_word*)t0)[5]:lf[246])));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(C_truep(((C_word*)((C_word*)t0)[6])[1])?((C_word*)t0)[5]:lf[247]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k10045 in map-loop594 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10047(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10047,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10022(t6,((C_word*)t0)[5],t5);}

/* k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_3787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3787,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4989,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4991,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1129: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6665 in k6621 in a6618 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_6667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6667,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[20],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[149],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_3784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3784,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5076,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5078,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1120: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_3781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3781,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5224,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5226,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1112: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10145 in k10142 in k10139 in k10130 in a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10147,2,av);}
a=C_alloc(26);
t2=t1;
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10150,a[2]=t6,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10179,a[2]=t11,a[3]=t4,a[4]=t8,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,a[9]=((C_word*)t0)[6],a[10]=((C_word)li128),tmp=(C_word)a,a+=11,tmp));
t13=((C_word*)t11)[1];
f_10179(t13,t9,((C_word*)t0)[7]);}

/* a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_6781(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_6781,4,av);}
a=C_alloc(14);
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6791,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li53),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:805: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[163]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k10142 in k10139 in k10130 in a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10144,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:250: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[250];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k10139 in k10130 in a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10141,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:249: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[251];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* map-loop567 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10056(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10056,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3687,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11044,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11046,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:161: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3684,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11061,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11063,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:155: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3681,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11075,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11077,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:141: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_6692(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6692,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6696,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:779: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[158];
av2[3]=t2;
av2[4]=lf[172];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* genvars in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in ... */
static void C_fcall f_6698(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_6698,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6704,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6704(t6,t1,C_fix(0));}

/* k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_6696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6696,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6698,a[2]=((C_word*)t0)[2],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6733,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:785: require */
t4=*((C_word*)lf[170]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[171];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* g1166 in fold in k8708 in k8693 in k8681 in k8659 in k8656 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_fcall f_8731(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8731,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8739,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:407: lookup */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
f_8684(3,av2);}}

/* k6688 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in ... */
static void C_ccall f_6690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6690,2,av);}
/* chicken-syntax.scm:770: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[158];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop199 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10810(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10810,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10835,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:217: g205 */
t4=((C_word*)t0)[4];
f_10251(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3678,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11124,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11126,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:123: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3673 in k3670 in k3666 */
static void C_ccall f_3675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3675,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11217,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11219,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:56: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3670 in k3666 */
static void C_ccall f_3672(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3672,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3675,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11579,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11581,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:49: ##sys#er-transformer */
t6=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* map-loop815 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_fcall f_9692(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9692,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,1,t6);
t9=C_a_i_list(&a,3,lf[239],t7,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10);
t12=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t10);
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

/* k3666 */
static void C_ccall f_3668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3668,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:44: ##sys#macro-environment */
t3=*((C_word*)lf[293]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3863 in k3840 in k3837 in k3834 in k3825 in a3822 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in ... */
static void C_ccall f_3865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_3865,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[16],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[17],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10011 in map-loop622 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_10013(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10013,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9988(t6,((C_word*)t0)[5],t5);}

/* k10799 in map-loop227 in k10260 in k10245 in k10231 in a10228 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10801(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10801,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10776(t6,((C_word*)t0)[5],t5);}

/* k6777 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_6779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6779,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[30],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[101],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_6767,2,av);}
a=C_alloc(32);
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6779,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6781,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[12],a[11]=((C_word)li54),tmp=(C_word)a,a+=12,tmp);
t9=((C_word*)t0)[13];
t10=C_u_i_cdr(t9);
/* chicken-syntax.scm:803: fold-right */
t11=*((C_word*)lf[164]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=t8;
av2[3]=lf[165];
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* k5115 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_5117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5117,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1120: ##sys#list? */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5088(2,av2);}}}

/* k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_6760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6760,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6767,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:800: append */
t4=*((C_word*)lf[166]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_3796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3796,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4680,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4682,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1212: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6793 in a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in ... */
static void C_ccall f_6795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_6795,2,av);}
a=C_alloc(23);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6805,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_6805(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[14],((C_word*)t0)[15],t2)));}
else{
t4=t3;
f_6805(t4,C_a_i_list(&a,3,((C_word*)t0)[16],((C_word*)t0)[15],t2));}}

/* k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_3799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3799,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4371,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4373,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1223: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_3790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3790,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4826,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4828,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1156: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a6790 in a6780 in k6765 in k6758 in k6755 in k6752 in k6749 in k6746 in k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in ... */
static void C_ccall f_6791(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6791,5,av);}
a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6795,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],tmp=(C_word)a,a+=17,tmp);
t6=C_i_car(((C_word*)t0)[5]);
/* chicken-syntax.scm:808: ##sys#check-syntax */
t7=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[158];
av2[3]=t6;
av2[4]=lf[162];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k5099 in k5086 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_5101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_5101,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_3793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3793,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4718,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4720,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1192: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

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
else C_toplevel_entry(C_text("chicken_2dsyntax_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2901))){
C_save(t1);
C_rereclaim2(2901*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,296);
lf[0]=C_h_intern(&lf[0],28,"\003sysdefine-values-definition");
lf[1]=C_h_intern(&lf[1],29,"\003syschicken-macro-environment");
lf[2]=C_h_intern(&lf[2],17,"register-feature!");
lf[3]=C_h_intern(&lf[3],6,"srfi-8");
lf[4]=C_h_intern(&lf[4],7,"srfi-11");
lf[5]=C_h_intern(&lf[5],7,"srfi-15");
lf[6]=C_h_intern(&lf[6],7,"srfi-16");
lf[7]=C_h_intern(&lf[7],7,"srfi-26");
lf[8]=C_h_intern(&lf[8],7,"srfi-31");
lf[9]=C_h_intern(&lf[9],16,"\003sysmacro-subset");
lf[10]=C_h_intern(&lf[10],29,"\003sysdefault-macro-environment");
lf[11]=C_h_intern(&lf[11],28,"\003sysextend-macro-environment");
lf[12]=C_h_intern(&lf[12],11,"define-type");
lf[13]=C_h_intern(&lf[13],10,"\000compiling");
lf[14]=C_h_intern(&lf[14],12,"\003sysfeatures");
lf[15]=C_h_intern(&lf[15],26,"\010compilertype-abbreviation");
lf[16]=C_h_intern(&lf[16],16,"\003sysput/restore!");
lf[17]=C_h_intern(&lf[17],24,"\004coreelaborationtimeonly");
lf[18]=C_h_intern(&lf[18],32,"\010compilercheck-and-validate-type");
lf[19]=C_h_intern(&lf[19],16,"\003sysstrip-syntax");
lf[20]=C_h_intern(&lf[20],5,"quote");
lf[21]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[22]=C_h_intern(&lf[22],16,"\003syscheck-syntax");
lf[23]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[24]=C_h_intern(&lf[24],18,"\003syser-transformer");
lf[25]=C_h_intern(&lf[25],17,"compiler-typecase");
lf[26]=C_h_intern(&lf[26],10,"\004corebegin");
lf[27]=C_h_intern(&lf[27],4,"else");
lf[28]=C_h_intern(&lf[28],3,"map");
lf[29]=C_h_intern(&lf[29],13,"\004coretypecase");
lf[30]=C_h_intern(&lf[30],8,"\004corelet");
lf[31]=C_h_intern(&lf[31],15,"get-line-number");
lf[32]=C_h_intern(&lf[32],6,"gensym");
lf[33]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001\376\377\001\000\000\000\001");
lf[34]=C_h_intern(&lf[34],21,"define-specialization");
lf[35]=C_h_intern(&lf[35],6,"inline");
lf[36]=C_h_intern(&lf[36],4,"hide");
lf[37]=C_h_intern(&lf[37],12,"\004coredeclare");
lf[38]=C_h_intern(&lf[38],8,"\004corethe");
lf[39]=C_h_intern(&lf[39],8,"\003sysput!");
lf[40]=C_h_intern(&lf[40],30,"\010compilerlocal-specializations");
lf[41]=C_h_intern(&lf[41],10,"\003sysappend");
lf[42]=C_h_intern(&lf[42],7,"\003sysget");
lf[43]=C_h_intern(&lf[43],7,"reverse");
lf[44]=C_h_intern(&lf[44],1,"\052");
lf[45]=C_h_intern(&lf[45],12,"syntax-error");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\027invalid argument syntax");
lf[47]=C_h_intern(&lf[47],6,"define");
lf[48]=C_h_intern(&lf[48],13,"\003sysglobalize");
lf[49]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000"
"\000\376\377\001\000\000\000\001");
lf[50]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[51]=C_h_intern(&lf[51],6,"assume");
lf[52]=C_h_intern(&lf[52],3,"the");
lf[53]=C_h_intern(&lf[53],9,"\003sysmap-n");
lf[54]=C_h_intern(&lf[54],3,"let");
lf[55]=C_h_intern(&lf[55],25,"\003syssyntax-rules-mismatch");
lf[56]=C_h_intern(&lf[56],5,"\003sys+");
lf[57]=C_h_intern(&lf[57],5,"\003sys=");
lf[58]=C_h_intern(&lf[58],6,"\003sys>=");
lf[59]=C_h_intern(&lf[59],10,"\003syslength");
lf[60]=C_h_intern(&lf[60],9,"\003syslist\077");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[62]=C_h_intern(&lf[62],1,":");
lf[63]=C_h_intern(&lf[63],22,"\010compilervalidate-type");
lf[64]=C_h_intern(&lf[64],4,"type");
lf[65]=C_h_intern(&lf[65],9,"predicate");
lf[66]=C_h_intern(&lf[66],4,"pure");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid type syntax");
lf[68]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[69]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[70]=C_h_intern(&lf[70],7,"functor");
lf[71]=C_h_intern(&lf[71],21,"\003syssyntax-error-hook");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid functor argument");
lf[73]=C_h_intern(&lf[73],20,"\003sysvalidate-exports");
lf[74]=C_h_intern(&lf[74],20,"\003sysregister-functor");
lf[75]=C_h_intern(&lf[75],6,"import");
lf[76]=C_h_intern(&lf[76],6,"scheme");
lf[77]=C_h_intern(&lf[77],7,"chicken");
lf[78]=C_h_intern(&lf[78],16,"begin-for-syntax");
lf[79]=C_h_intern(&lf[79],11,"\004coremodule");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_"
"\376\001\000\000\001_");
lf[81]=C_h_intern(&lf[81],16,"define-interface");
lf[82]=C_h_intern(&lf[82],14,"\004coreinterface");
lf[83]=C_h_intern(&lf[83],10,"\000interface");
lf[84]=C_h_intern(&lf[84],17,"syntax-error-hook");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000-`\052\047 is not allowed as a name for an interface");
lf[87]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[88]=C_h_intern(&lf[88],19,"let-compiler-syntax");
lf[89]=C_h_intern(&lf[89],24,"\004corelet-compiler-syntax");
lf[90]=C_h_intern(&lf[90],22,"define-compiler-syntax");
lf[91]=C_h_intern(&lf[91],27,"\004coredefine-compiler-syntax");
lf[92]=C_h_intern(&lf[92],14,"use-for-syntax");
lf[93]=C_h_intern(&lf[93],28,"require-extension-for-syntax");
lf[94]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[95]=C_h_intern(&lf[95],3,"use");
lf[96]=C_h_intern(&lf[96],22,"\004corerequire-extension");
lf[97]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[98]=C_h_intern(&lf[98],17,"define-for-syntax");
lf[99]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[100]=C_h_intern(&lf[100],3,"rec");
lf[101]=C_h_intern(&lf[101],11,"\004corelambda");
lf[102]=C_h_intern(&lf[102],12,"\004coreletrec\052");
lf[103]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[104]=C_h_intern(&lf[104],5,"apply");
lf[105]=C_h_intern(&lf[105],4,"cute");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000+tail patterns after <...> are not supported");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\047you need to supply at least a procedure");
lf[108]=C_h_intern(&lf[108],5,"<...>");
lf[109]=C_h_intern(&lf[109],2,"<>");
lf[110]=C_h_intern(&lf[110],19,"\003sysprimitive-alias");
lf[111]=C_h_intern(&lf[111],3,"cut");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000+tail patterns after <...> are not supported");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\047you need to supply at least a procedure");
lf[114]=C_h_intern(&lf[114],18,"getter-with-setter");
lf[115]=C_h_intern(&lf[115],18,"define-record-type");
lf[116]=C_h_intern(&lf[116],10,"\004corequote");
lf[117]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[118]=C_h_intern(&lf[118],18,"\003sysmake-structure");
lf[119]=C_h_intern(&lf[119],14,"\003sysstructure\077");
lf[120]=C_h_intern(&lf[120],19,"\003syscheck-structure");
lf[121]=C_h_intern(&lf[121],10,"\004corecheck");
lf[122]=C_h_intern(&lf[122],13,"\003sysblock-ref");
lf[123]=C_h_intern(&lf[123],10,"\003syssetter");
lf[124]=C_h_intern(&lf[124],14,"\003sysblock-set!");
lf[125]=C_h_intern(&lf[125],6,"setter");
lf[126]=C_h_intern(&lf[126],1,"y");
lf[127]=C_h_intern(&lf[127],1,"x");
lf[128]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\001\376\003\000\000\002\376\001\000\000\010variable\376\001\000"
"\000\001_");
lf[129]=C_h_intern(&lf[129],4,"memv");
lf[130]=C_h_intern(&lf[130],14,"condition-case");
lf[131]=C_h_intern(&lf[131],9,"condition");
lf[132]=C_h_intern(&lf[132],8,"\003sysslot");
lf[133]=C_h_intern(&lf[133],10,"\003syssignal");
lf[134]=C_h_intern(&lf[134],4,"cond");
lf[135]=C_h_intern(&lf[135],17,"handle-exceptions");
lf[136]=C_h_intern(&lf[136],3,"and");
lf[137]=C_h_intern(&lf[137],4,"kvar");
lf[138]=C_h_intern(&lf[138],5,"exvar");
lf[139]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[140]=C_h_intern(&lf[140],30,"call-with-current-continuation");
lf[141]=C_h_intern(&lf[141],22,"with-exception-handler");
lf[142]=C_h_intern(&lf[142],9,"\003sysapply");
lf[143]=C_h_intern(&lf[143],10,"\003sysvalues");
lf[144]=C_h_intern(&lf[144],20,"\003syscall-with-values");
lf[145]=C_h_intern(&lf[145],4,"args");
lf[146]=C_h_intern(&lf[146],1,"k");
lf[147]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[148]=C_h_intern(&lf[148],21,"define-record-printer");
lf[149]=C_h_intern(&lf[149],27,"\003sysregister-record-printer");
lf[150]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[151]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[152]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[153]=C_h_intern(&lf[153],2,">=");
lf[154]=C_h_intern(&lf[154],3,"car");
lf[155]=C_h_intern(&lf[155],3,"cdr");
lf[156]=C_h_intern(&lf[156],3,"eq\077");
lf[157]=C_h_intern(&lf[157],6,"length");
lf[158]=C_h_intern(&lf[158],11,"case-lambda");
lf[159]=C_h_intern(&lf[159],7,"\004coreif");
lf[160]=C_h_intern(&lf[160],9,"split-at!");
lf[161]=C_h_intern(&lf[161],4,"take");
lf[162]=C_h_intern(&lf[162],11,"lambda-list");
lf[163]=C_h_intern(&lf[163],25,"\003sysdecompose-lambda-list");
lf[164]=C_h_intern(&lf[164],10,"fold-right");
lf[165]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corecheck\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\003syserror\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreimmutable\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376B\000\0000no matching clause in call to \047case-lambda\047 form\376\377\016\376"
"\377\016\376\377\016\376\377\016");
lf[166]=C_h_intern(&lf[166],6,"append");
lf[167]=C_h_intern(&lf[167],4,"lvar");
lf[168]=C_h_intern(&lf[168],4,"rvar");
lf[169]=C_h_intern(&lf[169],3,"min");
lf[170]=C_h_intern(&lf[170],7,"require");
lf[171]=C_h_intern(&lf[171],6,"srfi-1");
lf[172]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[173]=C_h_intern(&lf[173],5,"null\077");
lf[174]=C_h_intern(&lf[174],14,"let-optionals\052");
lf[175]=C_h_intern(&lf[175],4,"tmp2");
lf[176]=C_h_intern(&lf[176],3,"tmp");
lf[177]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[178]=C_h_intern(&lf[178],8,"optional");
lf[179]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[180]=C_h_intern(&lf[180],13,"let-optionals");
lf[181]=C_h_intern(&lf[181],14,"string->symbol");
lf[182]=C_h_intern(&lf[182],13,"string-append");
lf[183]=C_h_intern(&lf[183],14,"symbol->string");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\001%");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\004def-");
lf[186]=C_h_intern(&lf[186],4,"let\052");
lf[187]=C_h_intern(&lf[187],6,"_%rest");
lf[188]=C_h_intern(&lf[188],4,"body");
lf[189]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[190]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000");
lf[191]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[192]=C_h_intern(&lf[192],6,"select");
lf[193]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[194]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[195]=C_h_intern(&lf[195],10,"\003sysnotice");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\0005non-`else\047 clause following `else\047 clause in `select\047");
lf[197]=C_h_intern(&lf[197],8,"\003syseqv\077");
lf[198]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid syntax");
lf[200]=C_h_intern(&lf[200],2,"or");
lf[201]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[202]=C_h_intern(&lf[202],8,"and-let\052");
lf[203]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[204]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[205]=C_h_intern(&lf[205],13,"define-inline");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\052invalid substitution form - must be lambda");
lf[207]=C_h_intern(&lf[207],6,"lambda");
lf[208]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[209]=C_h_intern(&lf[209],18,"\004coredefine-inline");
lf[210]=C_h_intern(&lf[210],8,"list-ref");
lf[211]=C_h_intern(&lf[211],9,"nth-value");
lf[212]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[213]=C_h_intern(&lf[213],13,"letrec-values");
lf[214]=C_h_intern(&lf[214],5,"foldl");
lf[215]=C_h_intern(&lf[215],37,"\003sysexpand-multiple-values-assignment");
lf[216]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[217]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\013lambda-list\376\001\000\000\001_\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[218]=C_h_intern(&lf[218],11,"let\052-values");
lf[219]=C_h_intern(&lf[219],10,"let-values");
lf[220]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[221]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[222]=C_h_intern(&lf[222],13,"define-values");
lf[223]=C_h_intern(&lf[223],11,"set!-values");
lf[224]=C_h_intern(&lf[224],8,"for-each");
lf[225]=C_h_intern(&lf[225],19,"\003sysregister-export");
lf[226]=C_h_intern(&lf[226],18,"\003syscurrent-module");
lf[227]=C_h_intern(&lf[227],16,"\004coremacro-alias");
lf[228]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[229]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[230]=C_h_intern(&lf[230],6,"unless");
lf[231]=C_h_intern(&lf[231],14,"\004coreundefined");
lf[232]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[233]=C_h_intern(&lf[233],4,"when");
lf[234]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[235]=C_h_intern(&lf[235],12,"parameterize");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\011parameter");
lf[237]=C_h_intern(&lf[237],5,"saved");
lf[238]=C_h_intern(&lf[238],16,"\003sysdynamic-wind");
lf[239]=C_h_intern(&lf[239],9,"\004coreset!");
lf[240]=C_h_intern(&lf[240],8,"convert\077");
lf[241]=C_h_intern(&lf[241],7,"boolean");
lf[242]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[243]=C_h_intern(&lf[243],9,"eval-when");
lf[244]=C_h_intern(&lf[244],19,"\004corecompiletimetoo");
lf[245]=C_h_intern(&lf[245],20,"\004corecompiletimeonly");
lf[246]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[247]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[248]=C_h_intern(&lf[248],9,"\003syserror");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid situation specifier");
lf[250]=C_h_intern(&lf[250],4,"load");
lf[251]=C_h_intern(&lf[251],7,"compile");
lf[252]=C_h_intern(&lf[252],4,"eval");
lf[253]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[254]=C_h_intern(&lf[254],9,"fluid-let");
lf[255]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[256]=C_h_intern(&lf[256],6,"ensure");
lf[257]=C_h_intern(&lf[257],15,"\003syssignal-hook");
lf[258]=C_h_intern(&lf[258],11,"\000type-error");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\033argument has incorrect type");
lf[260]=C_h_intern(&lf[260],14,"\004coreimmutable");
lf[261]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\003");
lf[262]=C_h_intern(&lf[262],6,"assert");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\020assertion failed");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[266]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[267]=C_h_intern(&lf[267],7,"include");
lf[268]=C_h_intern(&lf[268],12,"\004coreinclude");
lf[269]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[270]=C_h_intern(&lf[270],7,"declare");
lf[271]=C_h_intern(&lf[271],4,"time");
lf[272]=C_h_intern(&lf[272],15,"\003sysstart-timer");
lf[273]=C_h_intern(&lf[273],14,"\003sysstop-timer");
lf[274]=C_h_intern(&lf[274],17,"\003sysdisplay-times");
lf[275]=C_h_intern(&lf[275],1,"t");
lf[276]=C_h_intern(&lf[276],7,"receive");
lf[277]=C_h_intern(&lf[277],8,"\003syslist");
lf[278]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[279]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[280]=C_h_intern(&lf[280],13,"define-record");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid slot specification");
lf[282]=C_h_intern(&lf[282],3,"val");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\005-set!");
lf[286]=C_h_intern(&lf[286],17,"\003sysstring-append");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\001\077");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\005make-");
lf[289]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\001_");
lf[290]=C_h_intern(&lf[290],15,"define-constant");
lf[291]=C_h_intern(&lf[291],20,"\004coredefine-constant");
lf[292]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[293]=C_h_intern(&lf[293],21,"\003sysmacro-environment");
lf[294]=C_h_intern(&lf[294],11,"\003sysprovide");
lf[295]=C_h_intern(&lf[295],14,"chicken-syntax");
C_register_lf2(lf,296,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:38: ##sys#provide */
t3=*((C_word*)lf[294]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[295];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3696,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10227,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10229,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:211: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3699,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10126,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10128,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:243: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3690,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10955,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10957,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:168: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_3693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3693,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10880,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10882,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:191: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3894 in k3891 in k3885 in a3882 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in ... */
static void C_ccall f_3896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_3896,2,av);}
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
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3920,a[2]=((C_word*)t0)[4],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
t14=C_u_i_cdr(t13);
t15=C_i_check_list_2(t14,lf[28]);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3958,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3960,a[2]=t9,a[3]=t18,a[4]=t11,a[5]=t10,a[6]=((C_word)li2),tmp=(C_word)a,a+=7,tmp));
t20=((C_word*)t18)[1];
f_3960(t20,t16,t14);}

/* k3891 in k3885 in a3882 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in ... */
static void C_ccall f_3893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3893,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3896,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1298: get-line-number */
t4=*((C_word*)lf[31]+1);{
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

/* k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_7837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7837,2,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[154],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7833,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:622: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[155];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_7833(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,5)))){
C_save_and_reclaim((void *)f_7833,2,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,lf[155],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7393,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7395,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:623: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5124 in k5121 in k5115 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_5126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5126,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1120: ##sys#>= */
t4=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3885 in a3882 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_ccall f_3887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3887,2,av);}
a=C_alloc(5);
t2=C_i_memq(lf[13],*((C_word*)lf[14]+1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1297: gensym */
t5=*((C_word*)lf[32]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3879 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_3881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3881,2,av);}
/* chicken-syntax.scm:1291: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3882 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_3883(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3883,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3887,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1295: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[25];
av2[3]=t2;
av2[4]=lf[33];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5121 in k5115 in a5077 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_5123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5123,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1120: ##sys#length */
t4=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5088(2,av2);}}}

/* k7856 in k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_7858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7858,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:515: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[200];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7853 in k7845 in a7842 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_7855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7855,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7858,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:514: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_3757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3757,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6490,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:884: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_3751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3751,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6617,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6619,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:841: ##sys#er-transformer */
t5=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* loop in k10145 in k10142 in k10139 in k10130 in a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10179(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_10179,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10190,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10200,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=t4,a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:257: c */
t7=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_3754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3754,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6613,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:862: ##sys#primitive-alias */
t4=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[140];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k10188 in loop in k10145 in k10142 in k10139 in k10130 in a10127 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_10190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10190,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* chicken-syntax.scm:261: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10179(t3,((C_word*)t0)[4],t2);}

/* k7351 in k7311 in k7308 in a7305 in k7375 in k7379 in k7383 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in ... */
static void C_ccall f_7353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7353,2,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=t2;
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7343,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t7,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:719: r */
t9=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[154];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* map-loop540 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_10090(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10090,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* map-loop1071 in k8574 in a8571 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_9011(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9011,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k7375 in k7379 in k7383 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_7377(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,5)))){
C_save_and_reclaim((void *)f_7377,2,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,lf[155],t1);
t3=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7304,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7306,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:712: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k7383 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in ... */
static void C_ccall f_7385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7385,2,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[173],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7381,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:710: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[154];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7379 in k7383 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_7381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7381,2,av);}
a=C_alloc(8);
t2=C_a_i_cons(&a,2,lf[154],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7377,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:711: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[155];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k11566 in map-loop25 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11568(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11568,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11543(t6,((C_word*)t0)[5],t5);}

/* k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_7399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7399,2,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7489,a[2]=((C_word*)t0)[3],a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7578,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t9,a[6]=((C_word*)t0)[4],a[7]=t10,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:664: ##sys#check-syntax */
t12=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[180];
av2[3]=t5;
av2[4]=lf[190];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_7395(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7395,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7399,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:625: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[180];
av2[3]=t2;
av2[4]=lf[191];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7391 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_7393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7393,2,av);}
/* chicken-syntax.scm:619: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[180];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7286 in k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_7288(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,5)))){
C_save_and_reclaim((void *)f_7288,2,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,lf[155],t1);
t3=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7132,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7134,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:740: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* map-loop25 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_fcall f_11543(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11543,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11568,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-syntax.scm:66: g31 */
t5=((C_word*)t0)[4];
f_11244(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* fold in k8528 in k8520 in a8517 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_fcall f_8535(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8535,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[30],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8560,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_cdr(t7);
/* chicken-syntax.scm:432: fold */
t10=t6;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k8528 in k8520 in a8517 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8530(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8530,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8535,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_8535(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9211(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_9211,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9219,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:282: r */
t8=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[52];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9219,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:283: r */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[241];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11537 in k11302 in k11238 in k11235 in k11232 in k11229 in k11221 in a11218 in k3673 in k3670 in k3666 */
static void C_ccall f_11539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11539,2,av);}
/* chicken-syntax.scm:80: string->symbol */
t2=*((C_word*)lf[181]+1);{
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

/* k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in ... */
static void C_ccall f_8284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8284,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[214]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8306,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8410,a[2]=t10,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_8410(t12,t8,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k9508 in map-loop887 in k9600 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_fcall f_9510(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_9510,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_a_i_list(&a,1,t2);
t5=C_a_i_list(&a,2,t3,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(((C_word*)t0)[2],C_fix(1));
t10=C_slot(((C_word*)t0)[5],C_fix(1));
t11=C_slot(((C_word*)t0)[3],C_fix(1));
t12=((C_word*)((C_word*)t0)[6])[1];
f_9503(t12,((C_word*)t0)[7],t9,t10,t11);}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_9318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_9318,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9810,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li119),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9810(t11,t7,((C_word*)t0)[9],((C_word*)t0)[9]);}

/* k4455 in a4440 in k4429 in k4419 in k4398 in k4381 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in ... */
static void C_ccall f_4457(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4457,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[2],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9222,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:284: r */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[240];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9225,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9234,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10090,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li126),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10090(t12,t8,((C_word*)t0)[2]);}

/* a4440 in k4429 in k4419 in k4398 in k4381 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in ... */
static void C_ccall f_4441(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4441,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4457,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1223: rename2392 */
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[52];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a11580 in k3670 in k3666 */
static void C_ccall f_11581(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11581,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11585,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:51: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[290];
av2[3]=t2;
av2[4]=lf[292];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in ... */
static void C_ccall f_9329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(48,c,5)))){
C_save_and_reclaim((void *)f_9329,2,av);}
a=C_alloc(48);
t2=t1;
t3=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9580,a[2]=((C_word*)t0)[4],a[3]=((C_word)li112),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_list_2(((C_word*)t0)[5],lf[28]);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9598,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9740,a[2]=t11,a[3]=t9,a[4]=t15,a[5]=t10,a[6]=((C_word)li118),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_9740(t17,t13,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[5]);}

/* k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9234,2,av);}
a=C_alloc(22);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9240,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10056,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li125),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10056(t11,t7,((C_word*)t0)[8]);}

/* k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
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
C_word t14;
C_word t15;
C_word t16;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8264,2,av);}
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
t11=C_i_check_list_2(t3,lf[28]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8278,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8480,a[2]=t9,a[3]=t14,a[4]=t10,a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_8480(t16,t12,t3);}

/* a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8260(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8260,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8264,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:439: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[213];
av2[3]=t2;
av2[4]=lf[217];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8520 in a8517 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8522(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_8522,2,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8530,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:427: r */
t8=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[219];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k4429 in k4419 in k4398 in k4381 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in ... */
static void C_ccall f_4431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4431,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4441,a[2]=((C_word*)t0)[4],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1223: ##sys#map-n */
t5=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4437 in k4429 in k4419 in k4398 in k4381 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in ... */
static void C_ccall f_4439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4439,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in ... */
static void C_ccall f_5644(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_5644,2,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[104],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5453,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5455,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1028: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_9240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_9240,2,av);}
a=C_alloc(28);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9244,a[2]=((C_word*)t0)[2],a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[28]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9258,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10022,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li124),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_10022(t13,t9,((C_word*)t0)[3]);}

/* g600 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_fcall f_9244(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9244,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9252,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t2))){
/* chicken-syntax.scm:277: gensym */
t4=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* chicken-syntax.scm:278: gensym */
t4=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[236];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 in ... */
static void C_ccall f_8278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8278,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8284,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8446,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8446(t11,t7,((C_word*)t0)[4]);}

/* k11583 in a11580 in k3670 in k3666 */
static void C_ccall f_11585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11585,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[291],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4419 in k4398 in k4381 in a4372 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_ccall f_4421(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4421,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4431,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1223: rename2392 */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5724 in k5685 in k5682 in loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_5726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5726,2,av);}
/* chicken-syntax.scm:1008: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k11577 in k3670 in k3666 */
static void C_ccall f_11579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11579,2,av);}
/* chicken-syntax.scm:46: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[290];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4014 in a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_4016(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4016,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_car(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4025,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1236: ##sys#globalize */
t7=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k5714 in k5698 in k5691 in k5685 in k5682 in loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_5716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_5716,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[101],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5618 in k5578 in k5552 in loop in k5466 in k5463 in k5460 in k5457 in a5454 in k5642 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_5620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5620,2,av);}
/* chicken-syntax.scm:1057: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* loop in genvars in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in ... */
static void C_fcall f_6704(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6704,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6718,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6730,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:784: gensym */
t5=*((C_word*)lf[32]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7416 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in ... */
static void C_ccall f_7418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7418,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7422,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:635: reverse */
t4=*((C_word*)lf[43]+1);{
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

/* k8256 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8258,2,av);}
/* chicken-syntax.scm:435: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[213];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8252 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in k3670 in k3666 */
static void C_ccall f_8254(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_8254,2,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[210],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8210,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8212,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:457: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k4002 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4004,2,av);}
/* chicken-syntax.scm:1227: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[34];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a4005 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_4006(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4006,5,av);}
a=C_alloc(5);
if(C_truep(C_i_memq(lf[13],*((C_word*)lf[14]+1)))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4016,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1233: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[34];
av2[3]=t2;
av2[4]=lf[49];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=lf[50];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k8304 in k8282 in k8276 in k8262 in a8259 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in k3679 in k3676 in k3673 in ... */
static void C_ccall f_8306(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8306,2,av);}
a=C_alloc(14);
t2=C_i_check_list_2(t1,lf[28]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8376,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8376(t7,t3,t1);}

/* k5747 in loop in k5665 in k5662 in k5659 in k5656 in a5653 in k5822 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_5749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_5749,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5752,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5769,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1015: gensym */
t4=*((C_word*)lf[32]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-syntax.scm:1017: c */
t5=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k7424 in k7420 in k7416 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_7426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_7426,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7428,a[2]=t3,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7428(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* recur in k7424 in k7420 in k7416 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_fcall f_7428(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7428,6,t0,t1,t2,t3,t4,t5);}
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
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7467,a[2]=t5,a[3]=t9,a[4]=t1,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:641: reverse */
t11=*((C_word*)lf[43]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t10;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}}

/* k6611 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in ... */
static void C_ccall f_6613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6613,2,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[140],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6609,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:863: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[141];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7420 in k7416 in k7646 in k7631 in k7628 in k7625 in k7619 in k7588 in k7579 in k7576 in k7397 in a7394 in k7831 in k7835 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_7422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7422,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:636: reverse */
t4=*((C_word*)lf[43]+1);{
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

/* k6615 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_6617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6617,2,av);}
/* chicken-syntax.scm:839: ##sys#extend-macro-environment */
t2=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[148];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6618 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in ... */
static void C_ccall f_6619(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6619,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6623,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:843: ##sys#check-syntax */
t6=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[148];
av2[3]=t2;
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* map-loop887 in k9600 in k9596 in k9327 in k9316 in k9299 in k9286 in k9271 in k9256 in k9238 in k9232 in k9223 in k9220 in k9217 in k9209 in a9191 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_fcall f_9503(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9503,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9510,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9510(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9510(t6,C_SCHEME_FALSE);}}

/* k6607 in k6611 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_6609(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,5)))){
C_save_and_reclaim((void *)f_6609,2,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,lf[141],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6498,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6500,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:864: ##sys#er-transformer */
t7=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in k3682 in ... */
static void C_ccall f_7296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7296,2,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[173],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7292,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:738: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[154];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7290 in k7294 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in k3691 in k3688 in k3685 in ... */
static void C_ccall f_7292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7292,2,av);}
a=C_alloc(8);
t2=C_a_i_cons(&a,2,lf[154],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7288,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:739: ##sys#primitive-alias */
t5=*((C_word*)lf[110]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[155];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6635 in k6621 in a6618 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in k3712 in k3709 in k3706 in k3703 in k3700 in k3697 in k3694 in ... */
static void C_ccall f_6637(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_6637,2,av);}
a=C_alloc(21);
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_a_i_list(&a,2,lf[20],t2);
t4=C_slot(((C_word*)t0)[2],C_fix(1));
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,lf[101],t5);
t7=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[149],t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k6743 in k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in ... */
static void C_ccall f_6745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6745,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6748,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:794: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[153];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6740 in k6737 in k6734 in k6731 in k6694 in a6691 in k7106 in k7110 in k7114 in k7118 in k7122 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3719 in k3716 in ... */
static void C_ccall f_6742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6742,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6745,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:793: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[167];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[674] = {
{"f_6748:chicken_2dsyntax_2escm",(void*)f_6748},
{"f_10742:chicken_2dsyntax_2escm",(void*)f_10742},
{"f_8212:chicken_2dsyntax_2escm",(void*)f_8212},
{"f_8210:chicken_2dsyntax_2escm",(void*)f_8210},
{"f_8216:chicken_2dsyntax_2escm",(void*)f_8216},
{"f_8219:chicken_2dsyntax_2escm",(void*)f_8219},
{"f_3924:chicken_2dsyntax_2escm",(void*)f_3924},
{"f_3920:chicken_2dsyntax_2escm",(void*)f_3920},
{"f_5030:chicken_2dsyntax_2escm",(void*)f_5030},
{"f_4025:chicken_2dsyntax_2escm",(void*)f_4025},
{"f_4029:chicken_2dsyntax_2escm",(void*)f_4029},
{"f_6718:chicken_2dsyntax_2escm",(void*)f_6718},
{"f_11304:chicken_2dsyntax_2escm",(void*)f_11304},
{"f_8357:chicken_2dsyntax_2escm",(void*)f_8357},
{"f_10776:chicken_2dsyntax_2escm",(void*)f_10776},
{"f_7789:chicken_2dsyntax_2escm",(void*)f_7789},
{"f_7780:chicken_2dsyntax_2escm",(void*)f_7780},
{"f_3931:chicken_2dsyntax_2escm",(void*)f_3931},
{"f_11329:chicken_2dsyntax_2escm",(void*)f_11329},
{"f_11327:chicken_2dsyntax_2escm",(void*)f_11327},
{"f_8376:chicken_2dsyntax_2escm",(void*)f_8376},
{"f_10688:chicken_2dsyntax_2escm",(void*)f_10688},
{"f_4371:chicken_2dsyntax_2escm",(void*)f_4371},
{"f_4467:chicken_2dsyntax_2escm",(void*)f_4467},
{"f_8582:chicken_2dsyntax_2escm",(void*)f_8582},
{"f_4383:chicken_2dsyntax_2escm",(void*)f_4383},
{"f_4056:chicken_2dsyntax_2escm",(void*)f_4056},
{"f_4059:chicken_2dsyntax_2escm",(void*)f_4059},
{"f_4373:chicken_2dsyntax_2escm",(void*)f_4373},
{"f_4046:chicken_2dsyntax_2escm",(void*)f_4046},
{"f_4035:chicken_2dsyntax_2escm",(void*)f_4035},
{"f_4032:chicken_2dsyntax_2escm",(void*)f_4032},
{"f_4038:chicken_2dsyntax_2escm",(void*)f_4038},
{"f_8572:chicken_2dsyntax_2escm",(void*)f_8572},
{"f_8576:chicken_2dsyntax_2escm",(void*)f_8576},
{"f_8570:chicken_2dsyntax_2escm",(void*)f_8570},
{"f_10694:chicken_2dsyntax_2escm",(void*)f_10694},
{"f_10674:chicken_2dsyntax_2escm",(void*)f_10674},
{"f_8560:chicken_2dsyntax_2escm",(void*)f_8560},
{"f_10606:chicken_2dsyntax_2escm",(void*)f_10606},
{"f_11244:chicken_2dsyntax_2escm",(void*)f_11244},
{"f_11240:chicken_2dsyntax_2escm",(void*)f_11240},
{"f_11234:chicken_2dsyntax_2escm",(void*)f_11234},
{"f_11231:chicken_2dsyntax_2escm",(void*)f_11231},
{"f_4065:chicken_2dsyntax_2escm",(void*)f_4065},
{"f_11237:chicken_2dsyntax_2escm",(void*)f_11237},
{"f_9634:chicken_2dsyntax_2escm",(void*)f_9634},
{"f_11223:chicken_2dsyntax_2escm",(void*)f_11223},
{"f_11217:chicken_2dsyntax_2escm",(void*)f_11217},
{"f_11219:chicken_2dsyntax_2escm",(void*)f_11219},
{"f_5334:chicken_2dsyntax_2escm",(void*)f_5334},
{"f_9622:chicken_2dsyntax_2escm",(void*)f_9622},
{"f_10613:chicken_2dsyntax_2escm",(void*)f_10613},
{"f_5321:chicken_2dsyntax_2escm",(void*)f_5321},
{"f_5327:chicken_2dsyntax_2escm",(void*)f_5327},
{"f_5323:chicken_2dsyntax_2escm",(void*)f_5323},
{"f_10624:chicken_2dsyntax_2escm",(void*)f_10624},
{"f_10622:chicken_2dsyntax_2escm",(void*)f_10622},
{"f_5359:chicken_2dsyntax_2escm",(void*)f_5359},
{"f_6825:chicken_2dsyntax_2escm",(void*)f_6825},
{"f_6821:chicken_2dsyntax_2escm",(void*)f_6821},
{"f_5342:chicken_2dsyntax_2escm",(void*)f_5342},
{"f_5348:chicken_2dsyntax_2escm",(void*)f_5348},
{"f_5344:chicken_2dsyntax_2escm",(void*)f_5344},
{"f_7603:chicken_2dsyntax_2escm",(void*)f_7603},
{"f_6847:chicken_2dsyntax_2escm",(void*)f_6847},
{"f_6849:chicken_2dsyntax_2escm",(void*)f_6849},
{"f_9407:chicken_2dsyntax_2escm",(void*)f_9407},
{"f_9405:chicken_2dsyntax_2escm",(void*)f_9405},
{"f_9301:chicken_2dsyntax_2escm",(void*)f_9301},
{"f_7124:chicken_2dsyntax_2escm",(void*)f_7124},
{"f_7120:chicken_2dsyntax_2escm",(void*)f_7120},
{"f_7607:chicken_2dsyntax_2escm",(void*)f_7607},
{"f_9102:chicken_2dsyntax_2escm",(void*)f_9102},
{"f_7621:chicken_2dsyntax_2escm",(void*)f_7621},
{"f_7615:chicken_2dsyntax_2escm",(void*)f_7615},
{"f_5973:chicken_2dsyntax_2escm",(void*)f_5973},
{"f_6486:chicken_2dsyntax_2escm",(void*)f_6486},
{"f_5769:chicken_2dsyntax_2escm",(void*)f_5769},
{"f_7116:chicken_2dsyntax_2escm",(void*)f_7116},
{"f_7112:chicken_2dsyntax_2escm",(void*)f_7112},
{"f_9262:chicken_2dsyntax_2escm",(void*)f_9262},
{"f_7134:chicken_2dsyntax_2escm",(void*)f_7134},
{"f_7138:chicken_2dsyntax_2escm",(void*)f_7138},
{"f_6498:chicken_2dsyntax_2escm",(void*)f_6498},
{"f_6490:chicken_2dsyntax_2escm",(void*)f_6490},
{"f_7132:chicken_2dsyntax_2escm",(void*)f_7132},
{"f_6165:chicken_2dsyntax_2escm",(void*)f_6165},
{"f_4400:chicken_2dsyntax_2escm",(void*)f_4400},
{"f_5485:chicken_2dsyntax_2escm",(void*)f_5485},
{"f_3708:chicken_2dsyntax_2escm",(void*)f_3708},
{"f_9252:chicken_2dsyntax_2escm",(void*)f_9252},
{"f_3705:chicken_2dsyntax_2escm",(void*)f_3705},
{"f_4314:chicken_2dsyntax_2escm",(void*)f_4314},
{"f_5488:chicken_2dsyntax_2escm",(void*)f_5488},
{"f_9455:chicken_2dsyntax_2escm",(void*)f_9455},
{"f_3702:chicken_2dsyntax_2escm",(void*)f_3702},
{"f_9258:chicken_2dsyntax_2escm",(void*)f_9258},
{"f_5076:chicken_2dsyntax_2escm",(void*)f_5076},
{"f_5078:chicken_2dsyntax_2escm",(void*)f_5078},
{"f_5494:chicken_2dsyntax_2escm",(void*)f_5494},
{"f_9285:chicken_2dsyntax_2escm",(void*)f_9285},
{"f_9288:chicken_2dsyntax_2escm",(void*)f_9288},
{"f_8238:chicken_2dsyntax_2escm",(void*)f_8238},
{"f_5088:chicken_2dsyntax_2escm",(void*)f_5088},
{"f_5462:chicken_2dsyntax_2escm",(void*)f_5462},
{"f_5465:chicken_2dsyntax_2escm",(void*)f_5465},
{"f_9273:chicken_2dsyntax_2escm",(void*)f_9273},
{"f_8326:chicken_2dsyntax_2escm",(void*)f_8326},
{"f_5994:chicken_2dsyntax_2escm",(void*)f_5994},
{"f_5775:chicken_2dsyntax_2escm",(void*)f_5775},
{"f_9270:chicken_2dsyntax_2escm",(void*)f_9270},
{"f_5468:chicken_2dsyntax_2escm",(void*)f_5468},
{"f_9277:chicken_2dsyntax_2escm",(void*)f_9277},
{"f_5752:chicken_2dsyntax_2escm",(void*)f_5752},
{"f_9580:chicken_2dsyntax_2escm",(void*)f_9580},
{"f_5475:chicken_2dsyntax_2escm",(void*)f_5475},
{"f_8328:chicken_2dsyntax_2escm",(void*)f_8328},
{"f_9598:chicken_2dsyntax_2escm",(void*)f_9598},
{"f_6402:chicken_2dsyntax_2escm",(void*)f_6402},
{"f_10229:chicken_2dsyntax_2escm",(void*)f_10229},
{"f_10227:chicken_2dsyntax_2escm",(void*)f_10227},
{"f_6422:chicken_2dsyntax_2escm",(void*)f_6422},
{"f_10233:chicken_2dsyntax_2escm",(void*)f_10233},
{"f_8518:chicken_2dsyntax_2escm",(void*)f_8518},
{"f_10247:chicken_2dsyntax_2escm",(void*)f_10247},
{"f_6897:chicken_2dsyntax_2escm",(void*)f_6897},
{"f_8516:chicken_2dsyntax_2escm",(void*)f_8516},
{"f_10259:chicken_2dsyntax_2escm",(void*)f_10259},
{"f_10251:chicken_2dsyntax_2escm",(void*)f_10251},
{"f_3960:chicken_2dsyntax_2escm",(void*)f_3960},
{"f_8312:chicken_2dsyntax_2escm",(void*)f_8312},
{"f_8316:chicken_2dsyntax_2escm",(void*)f_8316},
{"f_7948:chicken_2dsyntax_2escm",(void*)f_7948},
{"f_7941:chicken_2dsyntax_2escm",(void*)f_7941},
{"f_3958:chicken_2dsyntax_2escm",(void*)f_3958},
{"f_3985:chicken_2dsyntax_2escm",(void*)f_3985},
{"f_7961:chicken_2dsyntax_2escm",(void*)f_7961},
{"f_10207:chicken_2dsyntax_2escm",(void*)f_10207},
{"f_10200:chicken_2dsyntax_2escm",(void*)f_10200},
{"f_10214:chicken_2dsyntax_2escm",(void*)f_10214},
{"f_5027:chicken_2dsyntax_2escm",(void*)f_5027},
{"f_7905:chicken_2dsyntax_2escm",(void*)f_7905},
{"f_7908:chicken_2dsyntax_2escm",(void*)f_7908},
{"f_7959:chicken_2dsyntax_2escm",(void*)f_7959},
{"f_5001:chicken_2dsyntax_2escm",(void*)f_5001},
{"f_5004:chicken_2dsyntax_2escm",(void*)f_5004},
{"f_7926:chicken_2dsyntax_2escm",(void*)f_7926},
{"f_7922:chicken_2dsyntax_2escm",(void*)f_7922},
{"f_7721:chicken_2dsyntax_2escm",(void*)f_7721},
{"f_10266:chicken_2dsyntax_2escm",(void*)f_10266},
{"f_10262:chicken_2dsyntax_2escm",(void*)f_10262},
{"f_7919:chicken_2dsyntax_2escm",(void*)f_7919},
{"f_7209:chicken_2dsyntax_2escm",(void*)f_7209},
{"f_10274:chicken_2dsyntax_2escm",(void*)f_10274},
{"f_10277:chicken_2dsyntax_2escm",(void*)f_10277},
{"f_11351:chicken_2dsyntax_2escm",(void*)f_11351},
{"f_10284:chicken_2dsyntax_2escm",(void*)f_10284},
{"f_11365:chicken_2dsyntax_2escm",(void*)f_11365},
{"f_7535:chicken_2dsyntax_2escm",(void*)f_7535},
{"f_6447:chicken_2dsyntax_2escm",(void*)f_6447},
{"f_7159:chicken_2dsyntax_2escm",(void*)f_7159},
{"f_7156:chicken_2dsyntax_2escm",(void*)f_7156},
{"f_7153:chicken_2dsyntax_2escm",(void*)f_7153},
{"f_7150:chicken_2dsyntax_2escm",(void*)f_7150},
{"f_5918:chicken_2dsyntax_2escm",(void*)f_5918},
{"f_7559:chicken_2dsyntax_2escm",(void*)f_7559},
{"f_5212:chicken_2dsyntax_2escm",(void*)f_5212},
{"f_7172:chicken_2dsyntax_2escm",(void*)f_7172},
{"f_7170:chicken_2dsyntax_2escm",(void*)f_7170},
{"f_5931:chicken_2dsyntax_2escm",(void*)f_5931},
{"f_5935:chicken_2dsyntax_2escm",(void*)f_5935},
{"f_5939:chicken_2dsyntax_2escm",(void*)f_5939},
{"f_9117:chicken_2dsyntax_2escm",(void*)f_9117},
{"f_9084:chicken_2dsyntax_2escm",(void*)f_9084},
{"f_5505:chicken_2dsyntax_2escm",(void*)f_5505},
{"f_9119:chicken_2dsyntax_2escm",(void*)f_9119},
{"f_4554:chicken_2dsyntax_2escm",(void*)f_4554},
{"f_4551:chicken_2dsyntax_2escm",(void*)f_4551},
{"f_5924:chicken_2dsyntax_2escm",(void*)f_5924},
{"f_9123:chicken_2dsyntax_2escm",(void*)f_9123},
{"f_9077:chicken_2dsyntax_2escm",(void*)f_9077},
{"f_11381:chicken_2dsyntax_2escm",(void*)f_11381},
{"f_9071:chicken_2dsyntax_2escm",(void*)f_9071},
{"f_4545:chicken_2dsyntax_2escm",(void*)f_4545},
{"f_9138:chicken_2dsyntax_2escm",(void*)f_9138},
{"f_11272:chicken_2dsyntax_2escm",(void*)f_11272},
{"f_5943:chicken_2dsyntax_2escm",(void*)f_5943},
{"f_9140:chicken_2dsyntax_2escm",(void*)f_9140},
{"f_9144:chicken_2dsyntax_2escm",(void*)f_9144},
{"f_7304:chicken_2dsyntax_2escm",(void*)f_7304},
{"f_7306:chicken_2dsyntax_2escm",(void*)f_7306},
{"f_9092:chicken_2dsyntax_2escm",(void*)f_9092},
{"f_5246:chicken_2dsyntax_2escm",(void*)f_5246},
{"f_7313:chicken_2dsyntax_2escm",(void*)f_7313},
{"f_9810:chicken_2dsyntax_2escm",(void*)f_9810},
{"f_7310:chicken_2dsyntax_2escm",(void*)f_7310},
{"f_11348:chicken_2dsyntax_2escm",(void*)f_11348},
{"f_11345:chicken_2dsyntax_2escm",(void*)f_11345},
{"f_6811:chicken_2dsyntax_2escm",(void*)f_6811},
{"f_6819:chicken_2dsyntax_2escm",(void*)f_6819},
{"f_4887:chicken_2dsyntax_2escm",(void*)f_4887},
{"f_8108:chicken_2dsyntax_2escm",(void*)f_8108},
{"f_4882:chicken_2dsyntax_2escm",(void*)f_4882},
{"f_6116:chicken_2dsyntax_2escm",(void*)f_6116},
{"f_6073:chicken_2dsyntax_2escm",(void*)f_6073},
{"f_11377:chicken_2dsyntax_2escm",(void*)f_11377},
{"f_8106:chicken_2dsyntax_2escm",(void*)f_8106},
{"f_7687:chicken_2dsyntax_2escm",(void*)f_7687},
{"f_4102:chicken_2dsyntax_2escm",(void*)f_4102},
{"f_4100:chicken_2dsyntax_2escm",(void*)f_4100},
{"f_6131:chicken_2dsyntax_2escm",(void*)f_6131},
{"f_6129:chicken_2dsyntax_2escm",(void*)f_6129},
{"f_7198:chicken_2dsyntax_2escm",(void*)f_7198},
{"f_10452:chicken_2dsyntax_2escm",(void*)f_10452},
{"f_6805:chicken_2dsyntax_2escm",(void*)f_6805},
{"f_6809:chicken_2dsyntax_2escm",(void*)f_6809},
{"f_8155:chicken_2dsyntax_2escm",(void*)f_8155},
{"f_8151:chicken_2dsyntax_2escm",(void*)f_8151},
{"f_10467:chicken_2dsyntax_2escm",(void*)f_10467},
{"f_4894:chicken_2dsyntax_2escm",(void*)f_4894},
{"f_4897:chicken_2dsyntax_2escm",(void*)f_4897},
{"f_4590:chicken_2dsyntax_2escm",(void*)f_4590},
{"f_7661:chicken_2dsyntax_2escm",(void*)f_7661},
{"f_10493:chicken_2dsyntax_2escm",(void*)f_10493},
{"f_4686:chicken_2dsyntax_2escm",(void*)f_4686},
{"f_4682:chicken_2dsyntax_2escm",(void*)f_4682},
{"f_4680:chicken_2dsyntax_2escm",(void*)f_4680},
{"f_4576:chicken_2dsyntax_2escm",(void*)f_4576},
{"f_8198:chicken_2dsyntax_2escm",(void*)f_8198},
{"f_11519:chicken_2dsyntax_2escm",(void*)f_11519},
{"f_11513:chicken_2dsyntax_2escm",(void*)f_11513},
{"f_4569:chicken_2dsyntax_2escm",(void*)f_4569},
{"f_4560:chicken_2dsyntax_2escm",(void*)f_4560},
{"f_10471:chicken_2dsyntax_2escm",(void*)f_10471},
{"f_10483:chicken_2dsyntax_2escm",(void*)f_10483},
{"f_4164:chicken_2dsyntax_2escm",(void*)f_4164},
{"f_4160:chicken_2dsyntax_2escm",(void*)f_4160},
{"f_4199:chicken_2dsyntax_2escm",(void*)f_4199},
{"f_10597:chicken_2dsyntax_2escm",(void*)f_10597},
{"f_4197:chicken_2dsyntax_2escm",(void*)f_4197},
{"f_11130:chicken_2dsyntax_2escm",(void*)f_11130},
{"f_11124:chicken_2dsyntax_2escm",(void*)f_11124},
{"f_11050:chicken_2dsyntax_2escm",(void*)f_11050},
{"f_9954:chicken_2dsyntax_2escm",(void*)f_9954},
{"f_4626:chicken_2dsyntax_2escm",(void*)f_4626},
{"f_5236:chicken_2dsyntax_2escm",(void*)f_5236},
{"f_11044:chicken_2dsyntax_2escm",(void*)f_11044},
{"f_8895:chicken_2dsyntax_2escm",(void*)f_8895},
{"f_10541:chicken_2dsyntax_2escm",(void*)f_10541},
{"f_4610:chicken_2dsyntax_2escm",(void*)f_4610},
{"f_4619:chicken_2dsyntax_2escm",(void*)f_4619},
{"f_11126:chicken_2dsyntax_2escm",(void*)f_11126},
{"f_11046:chicken_2dsyntax_2escm",(void*)f_11046},
{"f_5226:chicken_2dsyntax_2escm",(void*)f_5226},
{"f_5224:chicken_2dsyntax_2escm",(void*)f_5224},
{"f_11034:chicken_2dsyntax_2escm",(void*)f_11034},
{"f_4604:chicken_2dsyntax_2escm",(void*)f_4604},
{"f_8861:chicken_2dsyntax_2escm",(void*)f_8861},
{"f_4601:chicken_2dsyntax_2escm",(void*)f_4601},
{"f_7449:chicken_2dsyntax_2escm",(void*)f_7449},
{"f_11027:chicken_2dsyntax_2escm",(void*)f_11027},
{"f_9190:chicken_2dsyntax_2escm",(void*)f_9190},
{"f_9192:chicken_2dsyntax_2escm",(void*)f_9192},
{"f_11017:chicken_2dsyntax_2escm",(void*)f_11017},
{"f_11152:chicken_2dsyntax_2escm",(void*)f_11152},
{"f_5700:chicken_2dsyntax_2escm",(void*)f_5700},
{"f_9172:chicken_2dsyntax_2escm",(void*)f_9172},
{"f_9168:chicken_2dsyntax_2escm",(void*)f_9168},
{"f_9166:chicken_2dsyntax_2escm",(void*)f_9166},
{"f_6205:chicken_2dsyntax_2escm",(void*)f_6205},
{"f_9047:chicken_2dsyntax_2escm",(void*)f_9047},
{"f_9049:chicken_2dsyntax_2escm",(void*)f_9049},
{"f_5874:chicken_2dsyntax_2escm",(void*)f_5874},
{"f_9063:chicken_2dsyntax_2escm",(void*)f_9063},
{"f_9906:chicken_2dsyntax_2escm",(void*)f_9906},
{"f_9056:chicken_2dsyntax_2escm",(void*)f_9056},
{"f_7509:chicken_2dsyntax_2escm",(void*)f_7509},
{"f_9053:chicken_2dsyntax_2escm",(void*)f_9053},
{"f_6537:chicken_2dsyntax_2escm",(void*)f_6537},
{"f_5853:chicken_2dsyntax_2escm",(void*)f_5853},
{"f_5856:chicken_2dsyntax_2escm",(void*)f_5856},
{"f_6521:chicken_2dsyntax_2escm",(void*)f_6521},
{"f_5654:chicken_2dsyntax_2escm",(void*)f_5654},
{"f_5652:chicken_2dsyntax_2escm",(void*)f_5652},
{"f_7052:chicken_2dsyntax_2escm",(void*)f_7052},
{"f_7050:chicken_2dsyntax_2escm",(void*)f_7050},
{"f_5658:chicken_2dsyntax_2escm",(void*)f_5658},
{"f_7847:chicken_2dsyntax_2escm",(void*)f_7847},
{"f_7843:chicken_2dsyntax_2escm",(void*)f_7843},
{"f_5664:chicken_2dsyntax_2escm",(void*)f_5664},
{"f_5661:chicken_2dsyntax_2escm",(void*)f_5661},
{"f_7841:chicken_2dsyntax_2escm",(void*)f_7841},
{"f_5667:chicken_2dsyntax_2escm",(void*)f_5667},
{"f_6287:chicken_2dsyntax_2escm",(void*)f_6287},
{"f_6285:chicken_2dsyntax_2escm",(void*)f_6285},
{"f_9381:chicken_2dsyntax_2escm",(void*)f_9381},
{"f_9377:chicken_2dsyntax_2escm",(void*)f_9377},
{"f_5693:chicken_2dsyntax_2escm",(void*)f_5693},
{"f_6271:chicken_2dsyntax_2escm",(void*)f_6271},
{"f_3808:chicken_2dsyntax_2escm",(void*)f_3808},
{"f_4501:chicken_2dsyntax_2escm",(void*)f_4501},
{"f_3805:chicken_2dsyntax_2escm",(void*)f_3805},
{"f_5380:chicken_2dsyntax_2escm",(void*)f_5380},
{"f_5390:chicken_2dsyntax_2escm",(void*)f_5390},
{"f_5674:chicken_2dsyntax_2escm",(void*)f_5674},
{"f_5394:chicken_2dsyntax_2escm",(void*)f_5394},
{"f_8110:chicken_2dsyntax_2escm",(void*)f_8110},
{"f_8114:chicken_2dsyntax_2escm",(void*)f_8114},
{"f_5388:chicken_2dsyntax_2escm",(void*)f_5388},
{"f_5361:chicken_2dsyntax_2escm",(void*)f_5361},
{"f_5365:chicken_2dsyntax_2escm",(void*)f_5365},
{"f_5684:chicken_2dsyntax_2escm",(void*)f_5684},
{"f_8123:chicken_2dsyntax_2escm",(void*)f_8123},
{"f_8126:chicken_2dsyntax_2escm",(void*)f_8126},
{"f_5687:chicken_2dsyntax_2escm",(void*)f_5687},
{"f_5372:chicken_2dsyntax_2escm",(void*)f_5372},
{"f_8135:chicken_2dsyntax_2escm",(void*)f_8135},
{"f_5862:chicken_2dsyntax_2escm",(void*)f_5862},
{"f_5865:chicken_2dsyntax_2escm",(void*)f_5865},
{"f_4649:chicken_2dsyntax_2escm",(void*)f_4649},
{"f_4832:chicken_2dsyntax_2escm",(void*)f_4832},
{"f_4835:chicken_2dsyntax_2escm",(void*)f_4835},
{"f_8833:chicken_2dsyntax_2escm",(void*)f_8833},
{"f_4638:chicken_2dsyntax_2escm",(void*)f_4638},
{"f_9393:chicken_2dsyntax_2escm",(void*)f_9393},
{"f_4826:chicken_2dsyntax_2escm",(void*)f_4826},
{"f_4828:chicken_2dsyntax_2escm",(void*)f_4828},
{"f_8009:chicken_2dsyntax_2escm",(void*)f_8009},
{"f_5897:chicken_2dsyntax_2escm",(void*)f_5897},
{"f_5899:chicken_2dsyntax_2escm",(void*)f_5899},
{"f_8015:chicken_2dsyntax_2escm",(void*)f_8015},
{"f_8011:chicken_2dsyntax_2escm",(void*)f_8011},
{"f_8025:chicken_2dsyntax_2escm",(void*)f_8025},
{"f_8086:chicken_2dsyntax_2escm",(void*)f_8086},
{"f_7108:chicken_2dsyntax_2escm",(void*)f_7108},
{"f_8067:chicken_2dsyntax_2escm",(void*)f_8067},
{"f_8926:chicken_2dsyntax_2escm",(void*)f_8926},
{"f_8939:chicken_2dsyntax_2escm",(void*)f_8939},
{"f_8933:chicken_2dsyntax_2escm",(void*)f_8933},
{"f_7630:chicken_2dsyntax_2escm",(void*)f_7630},
{"f_7467:chicken_2dsyntax_2escm",(void*)f_7467},
{"f_7627:chicken_2dsyntax_2escm",(void*)f_7627},
{"f_7479:chicken_2dsyntax_2escm",(void*)f_7479},
{"f_7475:chicken_2dsyntax_2escm",(void*)f_7475},
{"f_7637:chicken_2dsyntax_2escm",(void*)f_7637},
{"f_7633:chicken_2dsyntax_2escm",(void*)f_7633},
{"f_7651:chicken_2dsyntax_2escm",(void*)f_7651},
{"f_7489:chicken_2dsyntax_2escm",(void*)f_7489},
{"f_8964:chicken_2dsyntax_2escm",(void*)f_8964},
{"f_4224:chicken_2dsyntax_2escm",(void*)f_4224},
{"f_7077:chicken_2dsyntax_2escm",(void*)f_7077},
{"f_7648:chicken_2dsyntax_2escm",(void*)f_7648},
{"f_7645:chicken_2dsyntax_2escm",(void*)f_7645},
{"f_7040:chicken_2dsyntax_2escm",(void*)f_7040},
{"f_7495:chicken_2dsyntax_2escm",(void*)f_7495},
{"f_7654:chicken_2dsyntax_2escm",(void*)f_7654},
{"f_5824:chicken_2dsyntax_2escm",(void*)f_5824},
{"f_8745:chicken_2dsyntax_2escm",(void*)f_8745},
{"f_8739:chicken_2dsyntax_2escm",(void*)f_8739},
{"f_8747:chicken_2dsyntax_2escm",(void*)f_8747},
{"f_5832:chicken_2dsyntax_2escm",(void*)f_5832},
{"f_5834:chicken_2dsyntax_2escm",(void*)f_5834},
{"f_9602:chicken_2dsyntax_2escm",(void*)f_9602},
{"f_5838:chicken_2dsyntax_2escm",(void*)f_5838},
{"f_11167:chicken_2dsyntax_2escm",(void*)f_11167},
{"f_4906:chicken_2dsyntax_2escm",(void*)f_4906},
{"f_11081:chicken_2dsyntax_2escm",(void*)f_11081},
{"f_11075:chicken_2dsyntax_2escm",(void*)f_11075},
{"f_11077:chicken_2dsyntax_2escm",(void*)f_11077},
{"f_11474:chicken_2dsyntax_2escm",(void*)f_11474},
{"f_11478:chicken_2dsyntax_2escm",(void*)f_11478},
{"f_11061:chicken_2dsyntax_2escm",(void*)f_11061},
{"f_11063:chicken_2dsyntax_2escm",(void*)f_11063},
{"f_9644:chicken_2dsyntax_2escm",(void*)f_9644},
{"f_8658:chicken_2dsyntax_2escm",(void*)f_8658},
{"f_4978:chicken_2dsyntax_2escm",(void*)f_4978},
{"f_11493:chicken_2dsyntax_2escm",(void*)f_11493},
{"f_7567:chicken_2dsyntax_2escm",(void*)f_7567},
{"f_9618:chicken_2dsyntax_2escm",(void*)f_9618},
{"f_6510:chicken_2dsyntax_2escm",(void*)f_6510},
{"f_10346:chicken_2dsyntax_2escm",(void*)f_10346},
{"f_7578:chicken_2dsyntax_2escm",(void*)f_7578},
{"f_8633:chicken_2dsyntax_2escm",(void*)f_8633},
{"f_10972:chicken_2dsyntax_2escm",(void*)f_10972},
{"f_8637:chicken_2dsyntax_2escm",(void*)f_8637},
{"f_7575:chicken_2dsyntax_2escm",(void*)f_7575},
{"f_10975:chicken_2dsyntax_2escm",(void*)f_10975},
{"f_10898:chicken_2dsyntax_2escm",(void*)f_10898},
{"f_6222:chicken_2dsyntax_2escm",(void*)f_6222},
{"f_6225:chicken_2dsyntax_2escm",(void*)f_6225},
{"f_6228:chicken_2dsyntax_2escm",(void*)f_6228},
{"f_4951:chicken_2dsyntax_2escm",(void*)f_4951},
{"f_4953:chicken_2dsyntax_2escm",(void*)f_4953},
{"f_6500:chicken_2dsyntax_2escm",(void*)f_6500},
{"f_6507:chicken_2dsyntax_2escm",(void*)f_6507},
{"f_6504:chicken_2dsyntax_2escm",(void*)f_6504},
{"f_7581:chicken_2dsyntax_2escm",(void*)f_7581},
{"f_6213:chicken_2dsyntax_2escm",(void*)f_6213},
{"f_6215:chicken_2dsyntax_2escm",(void*)f_6215},
{"f_6219:chicken_2dsyntax_2escm",(void*)f_6219},
{"f_4989:chicken_2dsyntax_2escm",(void*)f_4989},
{"f_7599:chicken_2dsyntax_2escm",(void*)f_7599},
{"f_7590:chicken_2dsyntax_2escm",(void*)f_7590},
{"f_7591:chicken_2dsyntax_2escm",(void*)f_7591},
{"f_6243:chicken_2dsyntax_2escm",(void*)f_6243},
{"f_6240:chicken_2dsyntax_2escm",(void*)f_6240},
{"f_6246:chicken_2dsyntax_2escm",(void*)f_6246},
{"f_5148:chicken_2dsyntax_2escm",(void*)f_5148},
{"f_10336:chicken_2dsyntax_2escm",(void*)f_10336},
{"f_10886:chicken_2dsyntax_2escm",(void*)f_10886},
{"f_7874:chicken_2dsyntax_2escm",(void*)f_7874},
{"f_10882:chicken_2dsyntax_2escm",(void*)f_10882},
{"f_7872:chicken_2dsyntax_2escm",(void*)f_7872},
{"f_10880:chicken_2dsyntax_2escm",(void*)f_10880},
{"f_5141:chicken_2dsyntax_2escm",(void*)f_5141},
{"f_10998:chicken_2dsyntax_2escm",(void*)f_10998},
{"f_6231:chicken_2dsyntax_2escm",(void*)f_6231},
{"f_6236:chicken_2dsyntax_2escm",(void*)f_6236},
{"f_4751:chicken_2dsyntax_2escm",(void*)f_4751},
{"f_6234:chicken_2dsyntax_2escm",(void*)f_6234},
{"f_3823:chicken_2dsyntax_2escm",(void*)f_3823},
{"f_3821:chicken_2dsyntax_2escm",(void*)f_3821},
{"f_7899:chicken_2dsyntax_2escm",(void*)f_7899},
{"f_3836:chicken_2dsyntax_2escm",(void*)f_3836},
{"f_3839:chicken_2dsyntax_2escm",(void*)f_3839},
{"f_8973:chicken_2dsyntax_2escm",(void*)f_8973},
{"f_3714:chicken_2dsyntax_2escm",(void*)f_3714},
{"f_3811:chicken_2dsyntax_2escm",(void*)f_3811},
{"f_3718:chicken_2dsyntax_2escm",(void*)f_3718},
{"f_7861:chicken_2dsyntax_2escm",(void*)f_7861},
{"f_5132:chicken_2dsyntax_2escm",(void*)f_5132},
{"f_10955:chicken_2dsyntax_2escm",(void*)f_10955},
{"f_10957:chicken_2dsyntax_2escm",(void*)f_10957},
{"f_3711:chicken_2dsyntax_2escm",(void*)f_3711},
{"f_8480:chicken_2dsyntax_2escm",(void*)f_8480},
{"f_3827:chicken_2dsyntax_2escm",(void*)f_3827},
{"f_4780:chicken_2dsyntax_2escm",(void*)f_4780},
{"f_8986:chicken_2dsyntax_2escm",(void*)f_8986},
{"f_3802:chicken_2dsyntax_2escm",(void*)f_3802},
{"f_10961:chicken_2dsyntax_2escm",(void*)f_10961},
{"f_3817:chicken_2dsyntax_2escm",(void*)f_3817},
{"f_3814:chicken_2dsyntax_2escm",(void*)f_3814},
{"f_3736:chicken_2dsyntax_2escm",(void*)f_3736},
{"f_3739:chicken_2dsyntax_2escm",(void*)f_3739},
{"f_3733:chicken_2dsyntax_2escm",(void*)f_3733},
{"f_3730:chicken_2dsyntax_2escm",(void*)f_3730},
{"f_3724:chicken_2dsyntax_2escm",(void*)f_3724},
{"f_3727:chicken_2dsyntax_2escm",(void*)f_3727},
{"f_8683:chicken_2dsyntax_2escm",(void*)f_8683},
{"f_10394:chicken_2dsyntax_2escm",(void*)f_10394},
{"f_8684:chicken_2dsyntax_2escm",(void*)f_8684},
{"f_5162:chicken_2dsyntax_2escm",(void*)f_5162},
{"f_3721:chicken_2dsyntax_2escm",(void*)f_3721},
{"f_4776:chicken_2dsyntax_2escm",(void*)f_4776},
{"f_8070:chicken_2dsyntax_2escm",(void*)f_8070},
{"f_4261:chicken_2dsyntax_2escm",(void*)f_4261},
{"f_8695:chicken_2dsyntax_2escm",(void*)f_8695},
{"f_4297:chicken_2dsyntax_2escm",(void*)f_4297},
{"f_3745:chicken_2dsyntax_2escm",(void*)f_3745},
{"f_3842:chicken_2dsyntax_2escm",(void*)f_3842},
{"f_3748:chicken_2dsyntax_2escm",(void*)f_3748},
{"f_8665:chicken_2dsyntax_2escm",(void*)f_8665},
{"f_8661:chicken_2dsyntax_2escm",(void*)f_8661},
{"f_3742:chicken_2dsyntax_2escm",(void*)f_3742},
{"f_8052:chicken_2dsyntax_2escm",(void*)f_8052},
{"f_8673:chicken_2dsyntax_2escm",(void*)f_8673},
{"f_8677:chicken_2dsyntax_2escm",(void*)f_8677},
{"f_4995:chicken_2dsyntax_2escm",(void*)f_4995},
{"f_4998:chicken_2dsyntax_2escm",(void*)f_4998},
{"f_4991:chicken_2dsyntax_2escm",(void*)f_4991},
{"f_8772:chicken_2dsyntax_2escm",(void*)f_8772},
{"f_8785:chicken_2dsyntax_2escm",(void*)f_8785},
{"f_4702:chicken_2dsyntax_2escm",(void*)f_4702},
{"f_4718:chicken_2dsyntax_2escm",(void*)f_4718},
{"f_8796:chicken_2dsyntax_2escm",(void*)f_8796},
{"f_10844:chicken_2dsyntax_2escm",(void*)f_10844},
{"f_6950:chicken_2dsyntax_2escm",(void*)f_6950},
{"f_7343:chicken_2dsyntax_2escm",(void*)f_7343},
{"f_9858:chicken_2dsyntax_2escm",(void*)f_9858},
{"f_5459:chicken_2dsyntax_2escm",(void*)f_5459},
{"f_5455:chicken_2dsyntax_2escm",(void*)f_5455},
{"f_5453:chicken_2dsyntax_2escm",(void*)f_5453},
{"f_5531:chicken_2dsyntax_2escm",(void*)f_5531},
{"f_6961:chicken_2dsyntax_2escm",(void*)f_6961},
{"f_10308:chicken_2dsyntax_2escm",(void*)f_10308},
{"f_9740:chicken_2dsyntax_2escm",(void*)f_9740},
{"f_9747:chicken_2dsyntax_2escm",(void*)f_9747},
{"f_5521:chicken_2dsyntax_2escm",(void*)f_5521},
{"f_5557:chicken_2dsyntax_2escm",(void*)f_5557},
{"f_5554:chicken_2dsyntax_2escm",(void*)f_5554},
{"f_10324:chicken_2dsyntax_2escm",(void*)f_10324},
{"f_10320:chicken_2dsyntax_2escm",(void*)f_10320},
{"f_10835:chicken_2dsyntax_2escm",(void*)f_10835},
{"f_6736:chicken_2dsyntax_2escm",(void*)f_6736},
{"f_6733:chicken_2dsyntax_2escm",(void*)f_6733},
{"f_7712:chicken_2dsyntax_2escm",(void*)f_7712},
{"f_6730:chicken_2dsyntax_2escm",(void*)f_6730},
{"f_6739:chicken_2dsyntax_2escm",(void*)f_6739},
{"f_6722:chicken_2dsyntax_2escm",(void*)f_6722},
{"f_6754:chicken_2dsyntax_2escm",(void*)f_6754},
{"f_6751:chicken_2dsyntax_2escm",(void*)f_6751},
{"f_6757:chicken_2dsyntax_2escm",(void*)f_6757},
{"f_6366:chicken_2dsyntax_2escm",(void*)f_6366},
{"f_6623:chicken_2dsyntax_2escm",(void*)f_6623},
{"f_7755:chicken_2dsyntax_2escm",(void*)f_7755},
{"f_6998:chicken_2dsyntax_2escm",(void*)f_6998},
{"f_6398:chicken_2dsyntax_2escm",(void*)f_6398},
{"f_6391:chicken_2dsyntax_2escm",(void*)f_6391},
{"f_5182:chicken_2dsyntax_2escm",(void*)f_5182},
{"f_5580:chicken_2dsyntax_2escm",(void*)f_5580},
{"f_5597:chicken_2dsyntax_2escm",(void*)f_5597},
{"f_5198:chicken_2dsyntax_2escm",(void*)f_5198},
{"f_5191:chicken_2dsyntax_2escm",(void*)f_5191},
{"f_8603:chicken_2dsyntax_2escm",(void*)f_8603},
{"f_8436:chicken_2dsyntax_2escm",(void*)f_8436},
{"f_8434:chicken_2dsyntax_2escm",(void*)f_8434},
{"f_5176:chicken_2dsyntax_2escm",(void*)f_5176},
{"f_8610:chicken_2dsyntax_2escm",(void*)f_8610},
{"f_8440:chicken_2dsyntax_2escm",(void*)f_8440},
{"f_8446:chicken_2dsyntax_2escm",(void*)f_8446},
{"f_5173:chicken_2dsyntax_2escm",(void*)f_5173},
{"f_5273:chicken_2dsyntax_2escm",(void*)f_5273},
{"f_5574:chicken_2dsyntax_2escm",(void*)f_5574},
{"f_9988:chicken_2dsyntax_2escm",(void*)f_9988},
{"f_4741:chicken_2dsyntax_2escm",(void*)f_4741},
{"f_8410:chicken_2dsyntax_2escm",(void*)f_8410},
{"f_4243:chicken_2dsyntax_2escm",(void*)f_4243},
{"f_4241:chicken_2dsyntax_2escm",(void*)f_4241},
{"f_3778:chicken_2dsyntax_2escm",(void*)f_3778},
{"f_3775:chicken_2dsyntax_2escm",(void*)f_3775},
{"f_3772:chicken_2dsyntax_2escm",(void*)f_3772},
{"f_9979:chicken_2dsyntax_2escm",(void*)f_9979},
{"f_4733:chicken_2dsyntax_2escm",(void*)f_4733},
{"f_4749:chicken_2dsyntax_2escm",(void*)f_4749},
{"f_10022:chicken_2dsyntax_2escm",(void*)f_10022},
{"f_3769:chicken_2dsyntax_2escm",(void*)f_3769},
{"f_3766:chicken_2dsyntax_2escm",(void*)f_3766},
{"f_3763:chicken_2dsyntax_2escm",(void*)f_3763},
{"f_10126:chicken_2dsyntax_2escm",(void*)f_10126},
{"f_3760:chicken_2dsyntax_2escm",(void*)f_3760},
{"f_10128:chicken_2dsyntax_2escm",(void*)f_10128},
{"f_10921:chicken_2dsyntax_2escm",(void*)f_10921},
{"f_4720:chicken_2dsyntax_2escm",(void*)f_4720},
{"f_4724:chicken_2dsyntax_2escm",(void*)f_4724},
{"f_5260:chicken_2dsyntax_2escm",(void*)f_5260},
{"f_8712:chicken_2dsyntax_2escm",(void*)f_8712},
{"f_8710:chicken_2dsyntax_2escm",(void*)f_8710},
{"f_10132:chicken_2dsyntax_2escm",(void*)f_10132},
{"f_10150:chicken_2dsyntax_2escm",(void*)f_10150},
{"f_10047:chicken_2dsyntax_2escm",(void*)f_10047},
{"f_3787:chicken_2dsyntax_2escm",(void*)f_3787},
{"f_6667:chicken_2dsyntax_2escm",(void*)f_6667},
{"f_3784:chicken_2dsyntax_2escm",(void*)f_3784},
{"f_3781:chicken_2dsyntax_2escm",(void*)f_3781},
{"f_10147:chicken_2dsyntax_2escm",(void*)f_10147},
{"f_6781:chicken_2dsyntax_2escm",(void*)f_6781},
{"f_10144:chicken_2dsyntax_2escm",(void*)f_10144},
{"f_10141:chicken_2dsyntax_2escm",(void*)f_10141},
{"f_10056:chicken_2dsyntax_2escm",(void*)f_10056},
{"f_3687:chicken_2dsyntax_2escm",(void*)f_3687},
{"f_3684:chicken_2dsyntax_2escm",(void*)f_3684},
{"f_3681:chicken_2dsyntax_2escm",(void*)f_3681},
{"f_6692:chicken_2dsyntax_2escm",(void*)f_6692},
{"f_6698:chicken_2dsyntax_2escm",(void*)f_6698},
{"f_6696:chicken_2dsyntax_2escm",(void*)f_6696},
{"f_8731:chicken_2dsyntax_2escm",(void*)f_8731},
{"f_6690:chicken_2dsyntax_2escm",(void*)f_6690},
{"f_10810:chicken_2dsyntax_2escm",(void*)f_10810},
{"f_3678:chicken_2dsyntax_2escm",(void*)f_3678},
{"f_3675:chicken_2dsyntax_2escm",(void*)f_3675},
{"f_3672:chicken_2dsyntax_2escm",(void*)f_3672},
{"f_9692:chicken_2dsyntax_2escm",(void*)f_9692},
{"f_3668:chicken_2dsyntax_2escm",(void*)f_3668},
{"f_3865:chicken_2dsyntax_2escm",(void*)f_3865},
{"f_10013:chicken_2dsyntax_2escm",(void*)f_10013},
{"f_10801:chicken_2dsyntax_2escm",(void*)f_10801},
{"f_6779:chicken_2dsyntax_2escm",(void*)f_6779},
{"f_6767:chicken_2dsyntax_2escm",(void*)f_6767},
{"f_5117:chicken_2dsyntax_2escm",(void*)f_5117},
{"f_6760:chicken_2dsyntax_2escm",(void*)f_6760},
{"f_3796:chicken_2dsyntax_2escm",(void*)f_3796},
{"f_6795:chicken_2dsyntax_2escm",(void*)f_6795},
{"f_3799:chicken_2dsyntax_2escm",(void*)f_3799},
{"f_3790:chicken_2dsyntax_2escm",(void*)f_3790},
{"f_6791:chicken_2dsyntax_2escm",(void*)f_6791},
{"f_5101:chicken_2dsyntax_2escm",(void*)f_5101},
{"f_3793:chicken_2dsyntax_2escm",(void*)f_3793},
{"toplevel:chicken_2dsyntax_2escm",(void*)C_chicken_2dsyntax_toplevel},
{"f_3696:chicken_2dsyntax_2escm",(void*)f_3696},
{"f_3699:chicken_2dsyntax_2escm",(void*)f_3699},
{"f_3690:chicken_2dsyntax_2escm",(void*)f_3690},
{"f_3693:chicken_2dsyntax_2escm",(void*)f_3693},
{"f_3896:chicken_2dsyntax_2escm",(void*)f_3896},
{"f_3893:chicken_2dsyntax_2escm",(void*)f_3893},
{"f_7837:chicken_2dsyntax_2escm",(void*)f_7837},
{"f_7833:chicken_2dsyntax_2escm",(void*)f_7833},
{"f_5126:chicken_2dsyntax_2escm",(void*)f_5126},
{"f_3887:chicken_2dsyntax_2escm",(void*)f_3887},
{"f_3881:chicken_2dsyntax_2escm",(void*)f_3881},
{"f_3883:chicken_2dsyntax_2escm",(void*)f_3883},
{"f_5123:chicken_2dsyntax_2escm",(void*)f_5123},
{"f_7858:chicken_2dsyntax_2escm",(void*)f_7858},
{"f_7855:chicken_2dsyntax_2escm",(void*)f_7855},
{"f_3757:chicken_2dsyntax_2escm",(void*)f_3757},
{"f_3751:chicken_2dsyntax_2escm",(void*)f_3751},
{"f_10179:chicken_2dsyntax_2escm",(void*)f_10179},
{"f_3754:chicken_2dsyntax_2escm",(void*)f_3754},
{"f_10190:chicken_2dsyntax_2escm",(void*)f_10190},
{"f_7353:chicken_2dsyntax_2escm",(void*)f_7353},
{"f_10090:chicken_2dsyntax_2escm",(void*)f_10090},
{"f_9011:chicken_2dsyntax_2escm",(void*)f_9011},
{"f_7377:chicken_2dsyntax_2escm",(void*)f_7377},
{"f_7385:chicken_2dsyntax_2escm",(void*)f_7385},
{"f_7381:chicken_2dsyntax_2escm",(void*)f_7381},
{"f_11568:chicken_2dsyntax_2escm",(void*)f_11568},
{"f_7399:chicken_2dsyntax_2escm",(void*)f_7399},
{"f_7395:chicken_2dsyntax_2escm",(void*)f_7395},
{"f_7393:chicken_2dsyntax_2escm",(void*)f_7393},
{"f_7288:chicken_2dsyntax_2escm",(void*)f_7288},
{"f_11543:chicken_2dsyntax_2escm",(void*)f_11543},
{"f_8535:chicken_2dsyntax_2escm",(void*)f_8535},
{"f_8530:chicken_2dsyntax_2escm",(void*)f_8530},
{"f_9211:chicken_2dsyntax_2escm",(void*)f_9211},
{"f_9219:chicken_2dsyntax_2escm",(void*)f_9219},
{"f_11539:chicken_2dsyntax_2escm",(void*)f_11539},
{"f_8284:chicken_2dsyntax_2escm",(void*)f_8284},
{"f_9510:chicken_2dsyntax_2escm",(void*)f_9510},
{"f_9318:chicken_2dsyntax_2escm",(void*)f_9318},
{"f_4457:chicken_2dsyntax_2escm",(void*)f_4457},
{"f_9222:chicken_2dsyntax_2escm",(void*)f_9222},
{"f_9225:chicken_2dsyntax_2escm",(void*)f_9225},
{"f_4441:chicken_2dsyntax_2escm",(void*)f_4441},
{"f_11581:chicken_2dsyntax_2escm",(void*)f_11581},
{"f_9329:chicken_2dsyntax_2escm",(void*)f_9329},
{"f_9234:chicken_2dsyntax_2escm",(void*)f_9234},
{"f_8264:chicken_2dsyntax_2escm",(void*)f_8264},
{"f_8260:chicken_2dsyntax_2escm",(void*)f_8260},
{"f_8522:chicken_2dsyntax_2escm",(void*)f_8522},
{"f_4431:chicken_2dsyntax_2escm",(void*)f_4431},
{"f_4439:chicken_2dsyntax_2escm",(void*)f_4439},
{"f_5644:chicken_2dsyntax_2escm",(void*)f_5644},
{"f_9240:chicken_2dsyntax_2escm",(void*)f_9240},
{"f_9244:chicken_2dsyntax_2escm",(void*)f_9244},
{"f_8278:chicken_2dsyntax_2escm",(void*)f_8278},
{"f_11585:chicken_2dsyntax_2escm",(void*)f_11585},
{"f_4421:chicken_2dsyntax_2escm",(void*)f_4421},
{"f_5726:chicken_2dsyntax_2escm",(void*)f_5726},
{"f_11579:chicken_2dsyntax_2escm",(void*)f_11579},
{"f_4016:chicken_2dsyntax_2escm",(void*)f_4016},
{"f_5716:chicken_2dsyntax_2escm",(void*)f_5716},
{"f_5620:chicken_2dsyntax_2escm",(void*)f_5620},
{"f_6704:chicken_2dsyntax_2escm",(void*)f_6704},
{"f_7418:chicken_2dsyntax_2escm",(void*)f_7418},
{"f_8258:chicken_2dsyntax_2escm",(void*)f_8258},
{"f_8254:chicken_2dsyntax_2escm",(void*)f_8254},
{"f_4004:chicken_2dsyntax_2escm",(void*)f_4004},
{"f_4006:chicken_2dsyntax_2escm",(void*)f_4006},
{"f_8306:chicken_2dsyntax_2escm",(void*)f_8306},
{"f_5749:chicken_2dsyntax_2escm",(void*)f_5749},
{"f_7426:chicken_2dsyntax_2escm",(void*)f_7426},
{"f_7428:chicken_2dsyntax_2escm",(void*)f_7428},
{"f_6613:chicken_2dsyntax_2escm",(void*)f_6613},
{"f_7422:chicken_2dsyntax_2escm",(void*)f_7422},
{"f_6617:chicken_2dsyntax_2escm",(void*)f_6617},
{"f_6619:chicken_2dsyntax_2escm",(void*)f_6619},
{"f_9503:chicken_2dsyntax_2escm",(void*)f_9503},
{"f_6609:chicken_2dsyntax_2escm",(void*)f_6609},
{"f_7296:chicken_2dsyntax_2escm",(void*)f_7296},
{"f_7292:chicken_2dsyntax_2escm",(void*)f_7292},
{"f_6637:chicken_2dsyntax_2escm",(void*)f_6637},
{"f_6745:chicken_2dsyntax_2escm",(void*)f_6745},
{"f_6742:chicken_2dsyntax_2escm",(void*)f_6742},
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
S|  foldl		1
S|  for-each		1
S|  ##sys#map		11
S|  map		39
o|eliminated procedure checks: 714 
o|specializations:
o|  1 (caddr (pair * (pair * pair)))
o|  1 (= fixnum fixnum)
o|  3 (cadr (pair * pair))
o|  1 (zero? fixnum)
o|  3 (length list)
o|  36 (##sys#check-list (or pair list) *)
o|  6 (cdddr (pair * (pair * pair)))
o|  2 (string-append string string)
o|  49 (cdr pair)
o|  20 (car pair)
o|  17 (cddr (pair * pair))
(o e)|safe calls: 1126 
o|Removed `not' forms: 12 
o|contracted procedure: k3831 
o|inlining procedure: k3828 
o|inlining procedure: k3828 
o|inlining procedure: k3941 
o|inlining procedure: k3941 
o|inlining procedure: k3962 
o|inlining procedure: k3962 
o|contracted procedure: k4011 
o|inlining procedure: k4008 
o|inlining procedure: k4048 
o|inlining procedure: k4104 
o|contracted procedure: "(chicken-syntax.scm:1270) g25742584" 
o|inlining procedure: k4104 
o|inlining procedure: k4174 
o|inlining procedure: k4201 
o|contracted procedure: "(chicken-syntax.scm:1261) g25372546" 
o|propagated global variable: g25542555 ##compiler#check-and-validate-type 
o|inlining procedure: k4201 
o|inlining procedure: k4174 
o|inlining procedure: k4245 
o|inlining procedure: k4245 
o|inlining procedure: k4048 
o|inlining procedure: k4292 
o|inlining procedure: k4292 
o|inlining procedure: k4329 
o|inlining procedure: k4329 
o|inlining procedure: k4008 
o|inlining procedure: k4378 
o|inlining procedure: k4469 
o|contracted procedure: "(chicken-syntax.scm:1223) g24712480" 
o|inlining procedure: k4469 
o|inlining procedure: k4503 
o|contracted procedure: "(chicken-syntax.scm:1223) g24432452" 
o|inlining procedure: k4503 
o|inlining procedure: k4378 
o|inlining procedure: k4540 
o|inlining procedure: k4555 
o|inlining procedure: k4571 
o|inlining procedure: k4571 
o|inlining procedure: k4555 
o|inlining procedure: k4540 
o|inlining procedure: k4605 
o|inlining procedure: k4621 
o|inlining procedure: k4621 
o|inlining procedure: k4656 
o|inlining procedure: k4656 
o|inlining procedure: k4605 
o|contracted procedure: k4690 
o|inlining procedure: k4687 
o|inlining procedure: k4687 
o|contracted procedure: k4728 
o|inlining procedure: k4725 
o|contracted procedure: k4756 
o|inlining procedure: k4753 
o|inlining procedure: k4782 
o|inlining procedure: k4782 
o|inlining procedure: k4753 
o|inlining procedure: k4725 
o|inlining procedure: k4895 
o|inlining procedure: k4895 
o|inlining procedure: k4910 
o|inlining procedure: k4922 
o|inlining procedure: k4922 
o|substituted constant variable: a4939 
o|inlining procedure: k4910 
o|inlining procedure: k4955 
o|inlining procedure: k4955 
o|inlining procedure: k5028 
o|inlining procedure: k5028 
o|inlining procedure: k5043 
o|inlining procedure: k5043 
o|inlining procedure: k5083 
o|inlining procedure: k5083 
o|inlining procedure: k5112 
o|inlining procedure: k5127 
o|inlining procedure: k5143 
o|inlining procedure: k5143 
o|inlining procedure: k5127 
o|inlining procedure: k5112 
o|inlining procedure: k5177 
o|inlining procedure: k5193 
o|inlining procedure: k5193 
o|inlining procedure: k5177 
o|inlining procedure: k5231 
o|inlining procedure: k5231 
o|inlining procedure: k5295 
o|inlining procedure: k5295 
o|inlining procedure: k5398 
o|inlining procedure: k5398 
o|inlining procedure: k5477 
o|inlining procedure: k5477 
o|inlining procedure: k5575 
o|inlining procedure: k5575 
o|inlining procedure: k5676 
o|inlining procedure: k5676 
o|inlining procedure: k5770 
o|inlining procedure: k5770 
o|inlining procedure: k5901 
o|inlining procedure: k5901 
o|inlining procedure: k5950 
o|contracted procedure: k5956 
o|inlining procedure: k5950 
o|inlining procedure: k5989 
o|inlining procedure: k5989 
o|inlining procedure: k6062 
o|inlining procedure: k6062 
o|inlining procedure: k6118 
o|inlining procedure: k6118 
o|inlining procedure: k6133 
o|inlining procedure: k6133 
o|inlining procedure: k6167 
o|inlining procedure: k6167 
o|inlining procedure: k6247 
o|inlining procedure: k6247 
o|inlining procedure: k6289 
o|inlining procedure: k6289 
o|inlining procedure: k6404 
o|inlining procedure: k6404 
o|inlining procedure: k6424 
o|inlining procedure: k6424 
o|inlining procedure: k6629 
o|inlining procedure: k6629 
o|inlining procedure: k6706 
o|inlining procedure: k6706 
o|inlining procedure: k6826 
o|inlining procedure: k6826 
o|inlining procedure: k6851 
o|inlining procedure: k6851 
o|inlining procedure: k6899 
o|inlining procedure: k6927 
o|inlining procedure: k6927 
o|inlining procedure: k6899 
o|inlining procedure: k6959 
o|inlining procedure: k6959 
o|inlining procedure: k6999 
o|inlining procedure: k6999 
o|inlining procedure: k7054 
o|contracted procedure: "(chicken-syntax.scm:786) g17461755" 
o|inlining procedure: k7054 
o|inlining procedure: k7174 
o|inlining procedure: k7174 
o|removed unused formal parameters: (rename1541) 
o|inlining procedure: k7497 
o|inlining procedure: k7497 
o|removed unused parameter to known procedure: rename1541 "(chicken-syntax.scm:687) make-if-tree1521" 
o|contracted procedure: "(chicken-syntax.scm:685) make-default-procs1520" 
o|inlining procedure: k7430 
o|inlining procedure: k7430 
o|inlining procedure: k7689 
o|inlining procedure: k7689 
o|inlining procedure: k7723 
o|inlining procedure: k7723 
o|inlining procedure: k7757 
o|inlining procedure: k7757 
o|inlining procedure: k7791 
o|inlining procedure: k7791 
o|inlining procedure: k7876 
o|inlining procedure: k7876 
o|contracted procedure: k7885 
o|inlining procedure: k7900 
o|inlining procedure: k7900 
o|inlining procedure: k7963 
o|inlining procedure: k7963 
o|inlining procedure: k8027 
o|inlining procedure: k8027 
o|contracted procedure: k8043 
o|inlining procedure: k8053 
o|inlining procedure: k8053 
o|inlining procedure: k8124 
o|inlining procedure: k8124 
o|contracted procedure: k8142 
o|inlining procedure: k8139 
o|inlining procedure: k8139 
o|inlining procedure: k8330 
o|inlining procedure: k8330 
o|inlining procedure: k8378 
o|contracted procedure: "(chicken-syntax.scm:445) g13091318" 
o|inlining procedure: k8378 
o|inlining procedure: k8412 
o|contracted procedure: "(chicken-syntax.scm:446) g13331334" 
o|inlining procedure: k8412 
o|substituted constant variable: g13251328 
o|inlining procedure: k8448 
o|inlining procedure: k8448 
o|inlining procedure: k8482 
o|inlining procedure: k8482 
o|inlining procedure: k8537 
o|inlining procedure: k8537 
o|contracted procedure: k8587 
o|inlining procedure: k8584 
o|inlining procedure: k8584 
o|inlining procedure: k8612 
o|inlining procedure: k8612 
o|contracted procedure: k8621 
o|inlining procedure: k8714 
o|inlining procedure: k8749 
o|inlining procedure: k8749 
o|inlining procedure: k8714 
o|inlining procedure: k8863 
o|contracted procedure: "(chicken-syntax.scm:403) g12011210" 
o|inlining procedure: k8863 
o|inlining procedure: k8897 
o|inlining procedure: k8897 
o|contracted procedure: k8917 
o|inlining procedure: k8941 
o|inlining procedure: k8941 
o|inlining procedure: k8975 
o|inlining procedure: k8975 
o|inlining procedure: k8998 
o|inlining procedure: k8998 
o|inlining procedure: k9013 
o|inlining procedure: k9013 
o|inlining procedure: k9094 
o|contracted procedure: "(chicken-syntax.scm:359) g10281035" 
o|inlining procedure: k9094 
o|contracted procedure: "(chicken-syntax.scm:287) pname530" 
o|inlining procedure: k9197 
o|inlining procedure: k9197 
o|removed unused formal parameters: (z639) 
o|removed unused formal parameters: (z667) 
o|inlining procedure: k9409 
o|contracted procedure: "(chicken-syntax.scm:324) g971981" 
o|inlining procedure: k9409 
o|inlining procedure: k9457 
o|contracted procedure: "(chicken-syntax.scm:322) g935945" 
o|inlining procedure: k9457 
o|inlining procedure: k9505 
o|contracted procedure: "(chicken-syntax.scm:319) g893904" 
o|inlining procedure: k9505 
o|inlining procedure: k9555 
o|inlining procedure: k9555 
o|inlining procedure: k9646 
o|contracted procedure: "(chicken-syntax.scm:312) g857867" 
o|inlining procedure: k9646 
o|inlining procedure: k9694 
o|contracted procedure: "(chicken-syntax.scm:309) g821831" 
o|inlining procedure: k9694 
o|inlining procedure: k9742 
o|inlining procedure: k9742 
o|inlining procedure: k9792 
o|inlining procedure: k9792 
o|inlining procedure: k9812 
o|inlining procedure: k9812 
o|inlining procedure: k9860 
o|inlining procedure: k9860 
o|inlining procedure: k9908 
o|inlining procedure: k9908 
o|inlining procedure: k9956 
o|removed unused parameter to known procedure: z667 "(chicken-syntax.scm:289) g656665" 
o|inlining procedure: k9956 
o|inlining procedure: k9990 
o|removed unused parameter to known procedure: z639 "(chicken-syntax.scm:288) g628637" 
o|inlining procedure: k9990 
o|inlining procedure: k10024 
o|inlining procedure: k10024 
o|inlining procedure: k10058 
o|inlining procedure: k10058 
o|inlining procedure: k10092 
o|inlining procedure: k10092 
o|inlining procedure: k10151 
o|inlining procedure: k10166 
o|inlining procedure: k10166 
o|inlining procedure: k10151 
o|inlining procedure: k10181 
o|inlining procedure: k10202 
o|inlining procedure: k10202 
o|inlining procedure: k10181 
o|removed unused formal parameters: (x216) 
o|removed unused formal parameters: (x244) 
o|inlining procedure: k10348 
o|contracted procedure: "(chicken-syntax.scm:237) g462472" 
o|inlining procedure: k10348 
o|inlining procedure: k10396 
o|contracted procedure: "(chicken-syntax.scm:235) g426436" 
o|inlining procedure: k10396 
o|inlining procedure: k10495 
o|contracted procedure: "(chicken-syntax.scm:230) g390400" 
o|inlining procedure: k10495 
o|inlining procedure: k10543 
o|contracted procedure: "(chicken-syntax.scm:228) g354364" 
o|inlining procedure: k10543 
o|inlining procedure: k10626 
o|inlining procedure: k10626 
o|inlining procedure: k10676 
o|inlining procedure: k10676 
o|inlining procedure: k10696 
o|inlining procedure: k10696 
o|inlining procedure: k10744 
o|inlining procedure: k10744 
o|inlining procedure: k10778 
o|removed unused parameter to known procedure: x244 "(chicken-syntax.scm:218) g233242" 
o|inlining procedure: k10778 
o|inlining procedure: k10812 
o|removed unused parameter to known procedure: x216 "(chicken-syntax.scm:217) g205214" 
o|inlining procedure: k10812 
o|inlining procedure: k10846 
o|inlining procedure: k10846 
o|inlining procedure: k10923 
o|inlining procedure: k10923 
o|inlining procedure: k11000 
o|inlining procedure: k11000 
o|inlining procedure: k11028 
o|inlining procedure: k11028 
o|inlining procedure: k11131 
o|inlining procedure: k11131 
o|inlining procedure: k11246 
o|inlining procedure: k11246 
o|inlining procedure: k11267 
o|inlining procedure: k11279 
o|inlining procedure: k11279 
o|inlining procedure: k11267 
o|inlining procedure: k11331 
o|inlining procedure: k11331 
o|inlining procedure: k11391 
o|inlining procedure: k11391 
o|inlining procedure: k11480 
o|inlining procedure: k11480 
o|substituted constant variable: a11515 
o|substituted constant variable: a11540 
o|inlining procedure: k11545 
o|inlining procedure: k11545 
o|replaced variables: 1175 
o|removed binding forms: 434 
o|substituted constant variable: r382911594 
o|substituted constant variable: r424611609 
o|substituted constant variable: r433011615 
o|substituted constant variable: r400911616 
o|substituted constant variable: r455611627 
o|substituted constant variable: r454111628 
o|substituted constant variable: r465711633 
o|substituted constant variable: r460611634 
o|substituted constant variable: r478311641 
o|substituted constant variable: r478311641 
o|substituted constant variable: r472611644 
o|substituted constant variable: r492311657 
o|substituted constant variable: r491111658 
o|substituted constant variable: r502911661 
o|substituted constant variable: r502911661 
o|substituted constant variable: r512811673 
o|substituted constant variable: r511311674 
o|substituted constant variable: r517811678 
o|substituted constant variable: r529611682 
o|substituted constant variable: r590211693 
o|substituted constant variable: r606311702 
o|substituted constant variable: r611911704 
o|substituted constant variable: r640511713 
o|substituted constant variable: r640511713 
o|converted assignments to bindings: (parse-clause1897) 
o|substituted constant variable: r670711721 
o|substituted constant variable: r700011735 
o|converted assignments to bindings: (genvars1732) 
o|substituted constant variable: r743111743 
o|converted assignments to bindings: (make-if-tree1521) 
o|substituted constant variable: r787711753 
o|substituted constant variable: r814011773 
o|substituted constant variable: r861311789 
o|substituted constant variable: r955611818 
o|substituted constant variable: r979311826 
o|substituted constant variable: r1067711861 
o|substituted constant variable: r1102911882 
o|substituted constant variable: r1128011889 
o|substituted constant variable: r1126811890 
o|simplifications: ((let . 3)) 
o|replaced variables: 23 
o|removed binding forms: 1272 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:289) slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:288) slot" 
o|inlining procedure: k10188 
o|inlining procedure: k10188 
o|inlining procedure: k10188 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:218) slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:217) slot" 
o|replaced variables: 40 
o|removed binding forms: 62 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:319) slot" 
o|contracted procedure: k9981 
o|contracted procedure: k10015 
o|contracted procedure: k10803 
o|contracted procedure: k10837 
o|removed binding forms: 46 
o|contracted procedure: k9542 
o|removed binding forms: 5 
o|removed binding forms: 1 
o|simplifications: ((if . 31) (##core#call . 1243)) 
o|  call simplifications:
o|    string?
o|    cdar
o|    caar
o|    not	3
o|    apply
o|    fx-	2
o|    fx>=
o|    assq	2
o|    cddddr
o|    cddr	6
o|    add1
o|    ##sys#call-with-values	2
o|    ##sys#pair?	7
o|    ##sys#eq?	7
o|    ##sys#car	15
o|    ##sys#cdr	22
o|    cdddr	2
o|    cadddr	2
o|    list?	4
o|    fx=
o|    symbol?	11
o|    null?	30
o|    vector
o|    cdr	18
o|    fx+	3
o|    ##sys#check-list	36
o|    pair?	97
o|    cons	128
o|    ##sys#setslot	50
o|    ##sys#slot	198
o|    car	47
o|    eq?	8
o|    list	9
o|    ##sys#cons	143
o|    memq	7
o|    cadr	51
o|    caddr	17
o|    ##sys#list	307
o|contracted procedure: k3875 
o|contracted procedure: k3851 
o|contracted procedure: k3855 
o|contracted procedure: k3859 
o|contracted procedure: k3847 
o|contracted procedure: k3867 
o|contracted procedure: k3871 
o|contracted procedure: k3888 
o|contracted procedure: k3998 
o|contracted procedure: k3994 
o|contracted procedure: k3901 
o|contracted procedure: k3917 
o|contracted procedure: k3933 
o|contracted procedure: k3938 
o|contracted procedure: k3948 
o|contracted procedure: k3953 
o|contracted procedure: k3913 
o|contracted procedure: k3909 
o|contracted procedure: k3905 
o|contracted procedure: k3965 
o|contracted procedure: k3968 
o|contracted procedure: k3971 
o|contracted procedure: k3979 
o|contracted procedure: k3987 
o|contracted procedure: k4365 
o|contracted procedure: k4017 
o|contracted procedure: k4020 
o|contracted procedure: k4039 
o|contracted procedure: k4051 
o|contracted procedure: k4060 
o|contracted procedure: k4150 
o|contracted procedure: k4154 
o|contracted procedure: k4070 
o|contracted procedure: k4078 
o|contracted procedure: k4086 
o|contracted procedure: k4082 
o|contracted procedure: k4074 
o|contracted procedure: k4143 
o|contracted procedure: k4107 
o|contracted procedure: k4110 
o|contracted procedure: k4113 
o|contracted procedure: k4121 
o|contracted procedure: k4125 
o|contracted procedure: k4133 
o|contracted procedure: k4137 
o|contracted procedure: k4095 
o|contracted procedure: k4170 
o|contracted procedure: k4166 
o|contracted procedure: k4177 
o|contracted procedure: k4184 
o|contracted procedure: k4192 
o|contracted procedure: k4204 
o|contracted procedure: k4207 
o|contracted procedure: k4210 
o|contracted procedure: k4218 
o|contracted procedure: k4226 
o|contracted procedure: k4248 
o|contracted procedure: k4255 
o|contracted procedure: k4263 
o|contracted procedure: k4267 
o|contracted procedure: k4270 
o|contracted procedure: k4276 
o|contracted procedure: k4285 
o|contracted procedure: k4289 
o|contracted procedure: k4320 
o|contracted procedure: k4304 
o|contracted procedure: k4308 
o|contracted procedure: k4316 
o|contracted procedure: k4326 
o|contracted procedure: k4332 
o|contracted procedure: k4339 
o|contracted procedure: k4361 
o|contracted procedure: k4350 
o|contracted procedure: k4375 
o|contracted procedure: k4384 
o|contracted procedure: k4392 
o|contracted procedure: k4395 
o|contracted procedure: k4401 
o|contracted procedure: k4413 
o|contracted procedure: k4416 
o|contracted procedure: k4422 
o|contracted procedure: k4433 
o|contracted procedure: k4463 
o|contracted procedure: k4459 
o|contracted procedure: k4451 
o|contracted procedure: k4447 
o|contracted procedure: k4472 
o|contracted procedure: k4475 
o|contracted procedure: k4478 
o|contracted procedure: k4486 
o|contracted procedure: k4494 
o|contracted procedure: k4410 
o|contracted procedure: k4506 
o|contracted procedure: k4528 
o|contracted procedure: k4524 
o|contracted procedure: k4509 
o|contracted procedure: k4512 
o|contracted procedure: k4520 
o|contracted procedure: k4537 
o|contracted procedure: k4565 
o|contracted procedure: k4584 
o|contracted procedure: k4592 
o|contracted procedure: k4596 
o|contracted procedure: k4615 
o|contracted procedure: k4633 
o|contracted procedure: k4643 
o|contracted procedure: k4650 
o|contracted procedure: k4653 
o|contracted procedure: k4659 
o|contracted procedure: k4666 
o|contracted procedure: k4670 
o|contracted procedure: k4674 
o|contracted procedure: k4712 
o|contracted procedure: k4704 
o|contracted procedure: k4708 
o|contracted procedure: k4820 
o|contracted procedure: k4734 
o|contracted procedure: k4812 
o|contracted procedure: k4808 
o|contracted procedure: k4804 
o|contracted procedure: k4770 
o|contracted procedure: k4766 
o|contracted procedure: k4793 
o|contracted procedure: k4789 
o|contracted procedure: k4782 
o|contracted procedure: k4800 
o|contracted procedure: k4816 
o|contracted procedure: k4836 
o|contracted procedure: k4839 
o|contracted procedure: k4843 
o|contracted procedure: k4864 
o|contracted procedure: k4884 
o|contracted procedure: k4889 
o|contracted procedure: k4901 
o|contracted procedure: k4913 
o|contracted procedure: k4919 
o|contracted procedure: k4936 
o|contracted procedure: k4925 
o|contracted procedure: k4932 
o|contracted procedure: k4943 
o|contracted procedure: k4946 
o|contracted procedure: k4868 
o|contracted procedure: k4872 
o|contracted procedure: k4876 
o|contracted procedure: k4849 
o|contracted procedure: k4856 
o|contracted procedure: k4860 
o|contracted procedure: k4958 
o|contracted procedure: k4961 
o|contracted procedure: k4964 
o|contracted procedure: k4972 
o|contracted procedure: k4980 
o|contracted procedure: k5013 
o|contracted procedure: k5017 
o|contracted procedure: k5009 
o|contracted procedure: k5031 
o|contracted procedure: k5037 
o|inlining procedure: k5028 
o|contracted procedure: k5046 
o|contracted procedure: k5056 
o|contracted procedure: k5060 
o|contracted procedure: k5063 
o|contracted procedure: k5070 
o|contracted procedure: k5080 
o|contracted procedure: k5089 
o|contracted procedure: k5092 
o|contracted procedure: k5103 
o|contracted procedure: k5109 
o|contracted procedure: k5137 
o|contracted procedure: k5156 
o|contracted procedure: k5164 
o|contracted procedure: k5168 
o|contracted procedure: k5187 
o|contracted procedure: k5206 
o|contracted procedure: k5214 
o|contracted procedure: k5218 
o|contracted procedure: k5228 
o|contracted procedure: k5237 
o|contracted procedure: k5252 
o|contracted procedure: k5248 
o|contracted procedure: k5261 
o|contracted procedure: k5283 
o|contracted procedure: k5264 
o|contracted procedure: k5279 
o|contracted procedure: k5275 
o|contracted procedure: k5289 
o|contracted procedure: k5292 
o|contracted procedure: k5298 
o|contracted procedure: k5305 
o|contracted procedure: k5308 
o|contracted procedure: k5315 
o|contracted procedure: k5336 
o|contracted procedure: k5353 
o|contracted procedure: k5382 
o|contracted procedure: k5374 
o|contracted procedure: k5395 
o|contracted procedure: k5401 
o|contracted procedure: k5424 
o|contracted procedure: k5420 
o|contracted procedure: k5414 
o|contracted procedure: k5408 
o|contracted procedure: k5440 
o|contracted procedure: k5436 
o|contracted procedure: k5638 
o|contracted procedure: k5447 
o|contracted procedure: k5480 
o|contracted procedure: k5515 
o|contracted procedure: k5511 
o|contracted procedure: k5507 
o|contracted procedure: k5499 
o|contracted procedure: k5525 
o|contracted procedure: k5544 
o|contracted procedure: k5540 
o|contracted procedure: k5536 
o|contracted procedure: k5564 
o|contracted procedure: k5568 
o|contracted procedure: k5584 
o|contracted procedure: k5612 
o|contracted procedure: k5604 
o|contracted procedure: k5608 
o|contracted procedure: k5624 
o|contracted procedure: k5634 
o|contracted procedure: k5627 
o|contracted procedure: k5818 
o|contracted procedure: k5646 
o|contracted procedure: k5679 
o|contracted procedure: k5710 
o|contracted procedure: k5706 
o|contracted procedure: k5702 
o|contracted procedure: k5720 
o|contracted procedure: k5741 
o|contracted procedure: k5735 
o|contracted procedure: k5731 
o|contracted procedure: k5759 
o|contracted procedure: k5763 
o|contracted procedure: k5779 
o|contracted procedure: k5796 
o|contracted procedure: k5804 
o|contracted procedure: k5814 
o|contracted procedure: k5807 
o|contracted procedure: k6199 
o|contracted procedure: k5826 
o|contracted procedure: k5839 
o|contracted procedure: k5842 
o|contracted procedure: k5845 
o|contracted procedure: k5848 
o|contracted procedure: k5857 
o|contracted procedure: k5866 
o|contracted procedure: k5869 
o|contracted procedure: k6109 
o|contracted procedure: k6113 
o|contracted procedure: k6121 
o|contracted procedure: k6124 
o|contracted procedure: k6105 
o|contracted procedure: k6101 
o|contracted procedure: k5883 
o|contracted procedure: k6089 
o|contracted procedure: k6097 
o|contracted procedure: k6093 
o|contracted procedure: k5891 
o|contracted procedure: k5887 
o|contracted procedure: k5879 
o|contracted procedure: k5904 
o|contracted procedure: k5907 
o|contracted procedure: k6085 
o|contracted procedure: k5910 
o|contracted procedure: k5913 
o|contracted procedure: k6032 
o|contracted procedure: k6048 
o|contracted procedure: k6056 
o|contracted procedure: k6052 
o|contracted procedure: k6044 
o|contracted procedure: k6036 
o|contracted procedure: k6040 
o|contracted procedure: k5919 
o|contracted procedure: k5947 
o|contracted procedure: k5967 
o|contracted procedure: k5963 
o|contracted procedure: k5975 
o|contracted procedure: k5982 
o|contracted procedure: k5989 
o|contracted procedure: k6008 
o|contracted procedure: k6024 
o|contracted procedure: k6028 
o|contracted procedure: k6020 
o|contracted procedure: k6012 
o|contracted procedure: k6016 
o|contracted procedure: k6059 
o|contracted procedure: k6065 
o|contracted procedure: k6136 
o|contracted procedure: k6139 
o|contracted procedure: k6142 
o|contracted procedure: k6150 
o|contracted procedure: k6158 
o|contracted procedure: k6170 
o|contracted procedure: k6192 
o|contracted procedure: k6188 
o|contracted procedure: k6173 
o|contracted procedure: k6176 
o|contracted procedure: k6184 
o|contracted procedure: k6476 
o|contracted procedure: k6480 
o|contracted procedure: k6207 
o|contracted procedure: k6250 
o|contracted procedure: k6268 
o|contracted procedure: k6277 
o|contracted procedure: k6280 
o|contracted procedure: k6264 
o|contracted procedure: k6260 
o|contracted procedure: k6292 
o|contracted procedure: k6295 
o|contracted procedure: k6298 
o|contracted procedure: k6306 
o|contracted procedure: k6314 
o|contracted procedure: k6336 
o|contracted procedure: k6328 
o|contracted procedure: k6332 
o|contracted procedure: k6324 
o|contracted procedure: k6343 
o|contracted procedure: k6357 
o|contracted procedure: k6352 
o|contracted procedure: k6472 
o|contracted procedure: k6464 
o|contracted procedure: k6468 
o|contracted procedure: k6460 
o|contracted procedure: k6456 
o|contracted procedure: k6376 
o|contracted procedure: k6380 
o|contracted procedure: k6383 
o|contracted procedure: k6386 
o|contracted procedure: k6392 
o|contracted procedure: k6368 
o|contracted procedure: k6372 
o|contracted procedure: k6407 
o|contracted procedure: k6418 
o|contracted procedure: k6414 
o|contracted procedure: k6404 
o|contracted procedure: k6427 
o|contracted procedure: k6430 
o|contracted procedure: k6433 
o|contracted procedure: k6441 
o|contracted procedure: k6449 
o|contracted procedure: k6599 
o|contracted procedure: k6603 
o|contracted procedure: k6492 
o|contracted procedure: k6527 
o|contracted procedure: k6595 
o|contracted procedure: k6579 
o|contracted procedure: k6591 
o|contracted procedure: k6587 
o|contracted procedure: k6583 
o|contracted procedure: k6539 
o|contracted procedure: k6571 
o|contracted procedure: k6551 
o|contracted procedure: k6567 
o|contracted procedure: k6563 
o|contracted procedure: k6559 
o|contracted procedure: k6555 
o|contracted procedure: k6547 
o|contracted procedure: k6543 
o|contracted procedure: k6531 
o|contracted procedure: k6523 
o|contracted procedure: k6515 
o|contracted procedure: k6624 
o|contracted procedure: k6632 
o|contracted procedure: k6658 
o|contracted procedure: k6642 
o|contracted procedure: k6654 
o|contracted procedure: k6650 
o|contracted procedure: k6646 
o|contracted procedure: k6662 
o|contracted procedure: k6676 
o|contracted procedure: k6672 
o|contracted procedure: k6680 
o|contracted procedure: k7086 
o|contracted procedure: k7090 
o|contracted procedure: k7094 
o|contracted procedure: k7098 
o|contracted procedure: k7102 
o|contracted procedure: k6684 
o|contracted procedure: k6709 
o|contracted procedure: k6724 
o|contracted procedure: k7023 
o|contracted procedure: k7019 
o|contracted procedure: k6773 
o|contracted procedure: k6769 
o|contracted procedure: k6787 
o|contracted procedure: k6800 
o|contracted procedure: k6829 
o|contracted procedure: k6836 
o|contracted procedure: k6839 
o|contracted procedure: k6842 
o|contracted procedure: k6890 
o|contracted procedure: k6854 
o|contracted procedure: k6880 
o|contracted procedure: k6884 
o|contracted procedure: k6876 
o|contracted procedure: k6857 
o|contracted procedure: k6860 
o|contracted procedure: k6868 
o|contracted procedure: k6872 
o|contracted procedure: k6902 
o|contracted procedure: k6924 
o|contracted procedure: k6916 
o|contracted procedure: k6920 
o|contracted procedure: k6912 
o|contracted procedure: k6945 
o|contracted procedure: k6930 
o|contracted procedure: k6939 
o|contracted procedure: k6988 
o|contracted procedure: k6992 
o|contracted procedure: k6976 
o|contracted procedure: k6984 
o|contracted procedure: k6980 
o|contracted procedure: k6955 
o|contracted procedure: k6962 
o|contracted procedure: k7002 
o|contracted procedure: k7013 
o|contracted procedure: k7027 
o|contracted procedure: k7042 
o|contracted procedure: k7045 
o|contracted procedure: k7057 
o|contracted procedure: k7060 
o|contracted procedure: k7063 
o|contracted procedure: k7071 
o|contracted procedure: k7079 
o|contracted procedure: k7036 
o|contracted procedure: k7274 
o|contracted procedure: k7278 
o|contracted procedure: k7282 
o|contracted procedure: k7126 
o|contracted procedure: k7139 
o|contracted procedure: k7142 
o|contracted procedure: k7270 
o|contracted procedure: k7164 
o|contracted procedure: k7177 
o|contracted procedure: k7184 
o|contracted procedure: k7187 
o|contracted procedure: k7193 
o|contracted procedure: k7243 
o|contracted procedure: k7247 
o|contracted procedure: k7251 
o|contracted procedure: k7239 
o|contracted procedure: k7213 
o|contracted procedure: k7225 
o|contracted procedure: k7229 
o|contracted procedure: k7233 
o|contracted procedure: k7221 
o|contracted procedure: k7217 
o|contracted procedure: k7203 
o|contracted procedure: k7266 
o|contracted procedure: k7262 
o|contracted procedure: k7258 
o|contracted procedure: k7363 
o|contracted procedure: k7367 
o|contracted procedure: k7371 
o|contracted procedure: k7298 
o|contracted procedure: k7359 
o|contracted procedure: k7355 
o|contracted procedure: k7318 
o|contracted procedure: k7326 
o|contracted procedure: k7330 
o|contracted procedure: k7344 
o|contracted procedure: k7333 
o|contracted procedure: k7337 
o|contracted procedure: k7322 
o|contracted procedure: k7823 
o|contracted procedure: k7827 
o|contracted procedure: k7387 
o|contracted procedure: k7400 
o|contracted procedure: k7403 
o|contracted procedure: k7500 
o|contracted procedure: k7510 
o|contracted procedure: k7517 
o|contracted procedure: k7569 
o|contracted procedure: k7521 
o|contracted procedure: k7561 
o|contracted procedure: k7545 
o|contracted procedure: k7553 
o|contracted procedure: k7549 
o|contracted procedure: k7529 
o|contracted procedure: k7525 
o|contracted procedure: k7541 
o|contracted procedure: k7582 
o|contracted procedure: k7585 
o|contracted procedure: k7604 
o|contracted procedure: k7616 
o|contracted procedure: k7622 
o|contracted procedure: k7634 
o|contracted procedure: k7667 
o|contracted procedure: k7683 
o|contracted procedure: k7679 
o|contracted procedure: k7675 
o|contracted procedure: k7671 
o|contracted procedure: k7663 
o|contracted procedure: k7433 
o|contracted procedure: k7436 
o|contracted procedure: k7457 
o|contracted procedure: k7469 
o|contracted procedure: k7461 
o|contracted procedure: k7443 
o|contracted procedure: k7485 
o|contracted procedure: k7481 
o|contracted procedure: k7692 
o|contracted procedure: k7695 
o|contracted procedure: k7698 
o|contracted procedure: k7706 
o|contracted procedure: k7714 
o|contracted procedure: k7726 
o|contracted procedure: k7748 
o|contracted procedure: k7744 
o|contracted procedure: k7729 
o|contracted procedure: k7732 
o|contracted procedure: k7740 
o|contracted procedure: k7760 
o|contracted procedure: k7763 
o|contracted procedure: k7766 
o|contracted procedure: k7774 
o|contracted procedure: k7782 
o|contracted procedure: k7794 
o|contracted procedure: k7816 
o|contracted procedure: k7812 
o|contracted procedure: k7797 
o|contracted procedure: k7800 
o|contracted procedure: k7808 
o|contracted procedure: k7848 
o|contracted procedure: k8003 
o|contracted procedure: k7866 
o|contracted procedure: k7879 
o|contracted procedure: k7999 
o|contracted procedure: k7891 
o|contracted procedure: k7894 
o|contracted procedure: k7945 
o|contracted procedure: k7954 
o|contracted procedure: k7931 
o|contracted procedure: k7935 
o|contracted procedure: k7966 
o|contracted procedure: k7969 
o|contracted procedure: k7972 
o|contracted procedure: k7980 
o|contracted procedure: k7988 
o|contracted procedure: k7995 
o|contracted procedure: k8016 
o|contracted procedure: k8030 
o|contracted procedure: k8036 
o|contracted procedure: k8100 
o|contracted procedure: k8096 
o|contracted procedure: k8056 
o|contracted procedure: k8092 
o|contracted procedure: k8088 
o|contracted procedure: k8076 
o|contracted procedure: k8080 
o|contracted procedure: k8115 
o|contracted procedure: k8187 
o|contracted procedure: k8118 
o|contracted procedure: k8167 
o|contracted procedure: k8130 
o|contracted procedure: k8163 
o|contracted procedure: k8159 
o|contracted procedure: k8170 
o|contracted procedure: k8177 
o|contracted procedure: k8200 
o|contracted procedure: k8248 
o|contracted procedure: k8204 
o|contracted procedure: k8244 
o|contracted procedure: k8224 
o|contracted procedure: k8240 
o|contracted procedure: k8232 
o|contracted procedure: k8228 
o|contracted procedure: k8265 
o|contracted procedure: k8270 
o|contracted procedure: k8273 
o|contracted procedure: k8279 
o|contracted procedure: k8293 
o|contracted procedure: k8301 
o|contracted procedure: k8307 
o|contracted procedure: k8289 
o|contracted procedure: k8318 
o|contracted procedure: k8321 
o|contracted procedure: k8369 
o|contracted procedure: k8333 
o|contracted procedure: k8336 
o|contracted procedure: k8339 
o|contracted procedure: k8347 
o|contracted procedure: k8351 
o|contracted procedure: k8359 
o|contracted procedure: k8363 
o|contracted procedure: k8381 
o|contracted procedure: k8403 
o|contracted procedure: k8399 
o|contracted procedure: k8384 
o|contracted procedure: k8387 
o|contracted procedure: k8395 
o|contracted procedure: k8415 
o|contracted procedure: k8422 
o|contracted procedure: k8442 
o|contracted procedure: k8451 
o|contracted procedure: k8473 
o|contracted procedure: k8469 
o|contracted procedure: k8454 
o|contracted procedure: k8457 
o|contracted procedure: k8465 
o|contracted procedure: k8485 
o|contracted procedure: k8507 
o|contracted procedure: k8503 
o|contracted procedure: k8488 
o|contracted procedure: k8491 
o|contracted procedure: k8499 
o|contracted procedure: k8523 
o|contracted procedure: k8540 
o|contracted procedure: k8547 
o|contracted procedure: k8564 
o|contracted procedure: k8554 
o|contracted procedure: k8577 
o|contracted procedure: k8607 
o|contracted procedure: k8597 
o|contracted procedure: k8615 
o|contracted procedure: k8645 
o|contracted procedure: k8641 
o|contracted procedure: k8650 
o|contracted procedure: k8653 
o|contracted procedure: k8662 
o|contracted procedure: k8678 
o|contracted procedure: k8690 
o|contracted procedure: k8700 
o|contracted procedure: k8717 
o|contracted procedure: k8728 
o|contracted procedure: k8740 
o|contracted procedure: k8724 
o|contracted procedure: k8752 
o|contracted procedure: k8755 
o|contracted procedure: k8758 
o|contracted procedure: k8766 
o|contracted procedure: k8774 
o|contracted procedure: k8810 
o|contracted procedure: k8814 
o|contracted procedure: k8806 
o|contracted procedure: k8790 
o|contracted procedure: k8798 
o|contracted procedure: k8843 
o|contracted procedure: k8821 
o|contracted procedure: k8825 
o|contracted procedure: k8835 
o|contracted procedure: k8857 
o|contracted procedure: k8846 
o|contracted procedure: k8853 
o|contracted procedure: k8866 
o|contracted procedure: k8888 
o|contracted procedure: k8884 
o|contracted procedure: k8869 
o|contracted procedure: k8872 
o|contracted procedure: k8880 
o|contracted procedure: k8900 
o|contracted procedure: k8906 
o|contracted procedure: k8935 
o|inlining procedure: k8909 
o|inlining procedure: k8909 
o|contracted procedure: k8944 
o|contracted procedure: k8947 
o|contracted procedure: k8950 
o|contracted procedure: k8958 
o|contracted procedure: k8966 
o|contracted procedure: k8978 
o|contracted procedure: k8981 
o|contracted procedure: k8992 
o|contracted procedure: k9001 
o|inlining procedure: k8984 
o|contracted procedure: k9016 
o|contracted procedure: k9038 
o|contracted procedure: k9034 
o|contracted procedure: k9019 
o|contracted procedure: k9022 
o|contracted procedure: k9030 
o|contracted procedure: k9067 
o|contracted procedure: k9085 
o|contracted procedure: k9097 
o|contracted procedure: k9107 
o|contracted procedure: k9111 
o|contracted procedure: k9128 
o|contracted procedure: k9132 
o|contracted procedure: k9149 
o|contracted procedure: k9153 
o|contracted procedure: k9157 
o|contracted procedure: k9177 
o|contracted procedure: k9181 
o|contracted procedure: k9212 
o|contracted procedure: k9226 
o|contracted procedure: k9229 
o|contracted procedure: k9235 
o|contracted procedure: k9241 
o|contracted procedure: k9200 
o|contracted procedure: k9253 
o|contracted procedure: k9259 
o|contracted procedure: k9274 
o|contracted procedure: k9293 
o|contracted procedure: k9296 
o|contracted procedure: k9307 
o|contracted procedure: k9310 
o|contracted procedure: k9313 
o|contracted procedure: k9324 
o|contracted procedure: k9806 
o|contracted procedure: k9802 
o|contracted procedure: k9335 
o|contracted procedure: k9577 
o|contracted procedure: k9590 
o|contracted procedure: k9586 
o|contracted procedure: k9593 
o|contracted procedure: k9573 
o|contracted procedure: k9569 
o|contracted procedure: k9343 
o|contracted procedure: k9565 
o|contracted procedure: k9347 
o|contracted procedure: k9363 
o|contracted procedure: k9359 
o|contracted procedure: k9355 
o|contracted procedure: k9351 
o|contracted procedure: k9339 
o|contracted procedure: k9331 
o|contracted procedure: k9320 
o|contracted procedure: k9303 
o|contracted procedure: k9383 
o|contracted procedure: k9395 
o|contracted procedure: k9448 
o|contracted procedure: k9412 
o|contracted procedure: k9438 
o|contracted procedure: k9442 
o|contracted procedure: k9434 
o|contracted procedure: k9415 
o|contracted procedure: k9418 
o|contracted procedure: k9426 
o|contracted procedure: k9430 
o|contracted procedure: k9496 
o|contracted procedure: k9460 
o|contracted procedure: k9486 
o|contracted procedure: k9490 
o|contracted procedure: k9482 
o|contracted procedure: k9463 
o|contracted procedure: k9466 
o|contracted procedure: k9474 
o|contracted procedure: k9478 
o|contracted procedure: k9511 
o|contracted procedure: k9514 
o|contracted procedure: k9522 
o|contracted procedure: k9526 
o|contracted procedure: k9530 
o|contracted procedure: k9538 
o|contracted procedure: k9546 
o|contracted procedure: k9372 
o|contracted procedure: k9552 
o|contracted procedure: k9558 
o|contracted procedure: k9604 
o|contracted procedure: k9624 
o|contracted procedure: k9640 
o|contracted procedure: k9636 
o|contracted procedure: k9685 
o|contracted procedure: k9649 
o|contracted procedure: k9675 
o|contracted procedure: k9679 
o|contracted procedure: k9671 
o|contracted procedure: k9652 
o|contracted procedure: k9655 
o|contracted procedure: k9663 
o|contracted procedure: k9667 
o|contracted procedure: k9733 
o|contracted procedure: k9697 
o|contracted procedure: k9700 
o|contracted procedure: k9703 
o|contracted procedure: k9711 
o|contracted procedure: k9715 
o|contracted procedure: k9723 
o|contracted procedure: k9727 
o|contracted procedure: k9613 
o|contracted procedure: k9748 
o|contracted procedure: k9751 
o|contracted procedure: k9759 
o|contracted procedure: k9763 
o|contracted procedure: k9767 
o|contracted procedure: k9775 
o|contracted procedure: k9779 
o|contracted procedure: k9783 
o|contracted procedure: k9789 
o|contracted procedure: k9795 
o|contracted procedure: k9851 
o|contracted procedure: k9815 
o|contracted procedure: k9841 
o|contracted procedure: k9845 
o|contracted procedure: k9837 
o|contracted procedure: k9818 
o|contracted procedure: k9821 
o|contracted procedure: k9829 
o|contracted procedure: k9833 
o|contracted procedure: k9899 
o|contracted procedure: k9863 
o|contracted procedure: k9889 
o|contracted procedure: k9893 
o|contracted procedure: k9885 
o|contracted procedure: k9866 
o|contracted procedure: k9869 
o|contracted procedure: k9877 
o|contracted procedure: k9881 
o|contracted procedure: k9947 
o|contracted procedure: k9911 
o|contracted procedure: k9937 
o|contracted procedure: k9941 
o|contracted procedure: k9933 
o|contracted procedure: k9914 
o|contracted procedure: k9917 
o|contracted procedure: k9925 
o|contracted procedure: k9929 
o|contracted procedure: k9959 
o|contracted procedure: k9962 
o|contracted procedure: k9965 
o|contracted procedure: k9973 
o|contracted procedure: k9993 
o|contracted procedure: k9996 
o|contracted procedure: k9999 
o|contracted procedure: k10007 
o|contracted procedure: k10027 
o|contracted procedure: k10030 
o|contracted procedure: k10033 
o|contracted procedure: k10041 
o|contracted procedure: k10049 
o|contracted procedure: k10061 
o|contracted procedure: k10083 
o|contracted procedure: k10079 
o|contracted procedure: k10064 
o|contracted procedure: k10067 
o|contracted procedure: k10075 
o|contracted procedure: k10095 
o|contracted procedure: k10117 
o|contracted procedure: k10113 
o|contracted procedure: k10098 
o|contracted procedure: k10101 
o|contracted procedure: k10109 
o|contracted procedure: k10133 
o|contracted procedure: k10136 
o|contracted procedure: k10154 
o|contracted procedure: k10160 
o|contracted procedure: k10184 
o|contracted procedure: k10195 
o|contracted procedure: k1019512205 
o|contracted procedure: k1019512209 
o|contracted procedure: k1019512213 
o|contracted procedure: k10234 
o|contracted procedure: k10239 
o|contracted procedure: k10242 
o|contracted procedure: k10248 
o|contracted procedure: k10263 
o|contracted procedure: k10446 
o|contracted procedure: k10290 
o|contracted procedure: k10442 
o|contracted procedure: k10294 
o|contracted procedure: k10302 
o|contracted procedure: k10298 
o|contracted procedure: k10286 
o|contracted procedure: k10310 
o|contracted procedure: k10326 
o|contracted procedure: k10342 
o|contracted procedure: k10338 
o|contracted procedure: k10387 
o|contracted procedure: k10351 
o|contracted procedure: k10377 
o|contracted procedure: k10381 
o|contracted procedure: k10373 
o|contracted procedure: k10354 
o|contracted procedure: k10357 
o|contracted procedure: k10365 
o|contracted procedure: k10369 
o|contracted procedure: k10435 
o|contracted procedure: k10399 
o|contracted procedure: k10425 
o|contracted procedure: k10429 
o|contracted procedure: k10421 
o|contracted procedure: k10402 
o|contracted procedure: k10405 
o|contracted procedure: k10413 
o|contracted procedure: k10417 
o|contracted procedure: k10454 
o|contracted procedure: k10462 
o|contracted procedure: k10473 
o|contracted procedure: k10489 
o|contracted procedure: k10485 
o|contracted procedure: k10534 
o|contracted procedure: k10498 
o|contracted procedure: k10524 
o|contracted procedure: k10528 
o|contracted procedure: k10520 
o|contracted procedure: k10501 
o|contracted procedure: k10504 
o|contracted procedure: k10512 
o|contracted procedure: k10516 
o|contracted procedure: k10582 
o|contracted procedure: k10546 
o|contracted procedure: k10572 
o|contracted procedure: k10576 
o|contracted procedure: k10568 
o|contracted procedure: k10549 
o|contracted procedure: k10552 
o|contracted procedure: k10560 
o|contracted procedure: k10564 
o|contracted procedure: k10589 
o|contracted procedure: k10592 
o|contracted procedure: k10598 
o|contracted procedure: k10601 
o|contracted procedure: k10608 
o|contracted procedure: k10614 
o|contracted procedure: k10617 
o|contracted procedure: k10665 
o|contracted procedure: k10629 
o|contracted procedure: k10655 
o|contracted procedure: k10659 
o|contracted procedure: k10651 
o|contracted procedure: k10632 
o|contracted procedure: k10635 
o|contracted procedure: k10643 
o|contracted procedure: k10647 
o|contracted procedure: k10679 
o|contracted procedure: k10690 
o|contracted procedure: k10735 
o|contracted procedure: k10699 
o|contracted procedure: k10725 
o|contracted procedure: k10729 
o|contracted procedure: k10721 
o|contracted procedure: k10702 
o|contracted procedure: k10705 
o|contracted procedure: k10713 
o|contracted procedure: k10717 
o|contracted procedure: k10747 
o|contracted procedure: k10769 
o|contracted procedure: k10765 
o|contracted procedure: k10750 
o|contracted procedure: k10753 
o|contracted procedure: k10761 
o|contracted procedure: k10781 
o|contracted procedure: k10784 
o|contracted procedure: k10787 
o|contracted procedure: k10795 
o|contracted procedure: k10815 
o|contracted procedure: k10818 
o|contracted procedure: k10821 
o|contracted procedure: k10829 
o|contracted procedure: k10849 
o|contracted procedure: k10871 
o|contracted procedure: k10867 
o|contracted procedure: k10852 
o|contracted procedure: k10855 
o|contracted procedure: k10863 
o|contracted procedure: k10887 
o|contracted procedure: k10890 
o|contracted procedure: k10949 
o|contracted procedure: k10903 
o|contracted procedure: k10945 
o|contracted procedure: k10911 
o|contracted procedure: k10915 
o|contracted procedure: k10907 
o|contracted procedure: k10926 
o|contracted procedure: k10941 
o|contracted procedure: k10933 
o|contracted procedure: k10937 
o|contracted procedure: k10923 
o|contracted procedure: k10962 
o|contracted procedure: k11035 
o|contracted procedure: k10967 
o|contracted procedure: k11019 
o|contracted procedure: k10980 
o|contracted procedure: k10988 
o|contracted procedure: k10992 
o|contracted procedure: k10984 
o|contracted procedure: k11003 
o|contracted procedure: k11011 
o|contracted procedure: k11000 
o|contracted procedure: k11022 
o|contracted procedure: k11055 
o|contracted procedure: k11069 
o|contracted procedure: k11086 
o|contracted procedure: k11118 
o|contracted procedure: k11114 
o|contracted procedure: k11094 
o|contracted procedure: k11110 
o|contracted procedure: k11102 
o|contracted procedure: k11106 
o|contracted procedure: k11098 
o|contracted procedure: k11090 
o|contracted procedure: k11211 
o|contracted procedure: k11134 
o|contracted procedure: k11145 
o|contracted procedure: k11141 
o|contracted procedure: k11153 
o|contracted procedure: k11156 
o|contracted procedure: k11184 
o|contracted procedure: k11180 
o|contracted procedure: k11176 
o|contracted procedure: k11172 
o|contracted procedure: k11191 
o|contracted procedure: k11199 
o|contracted procedure: k11195 
o|contracted procedure: k11202 
o|contracted procedure: k11224 
o|contracted procedure: k11241 
o|contracted procedure: k11249 
o|contracted procedure: k11264 
o|contracted procedure: k11276 
o|contracted procedure: k11292 
o|contracted procedure: k11282 
o|inlining procedure: k11255 
o|inlining procedure: k11255 
o|inlining procedure: k11255 
o|inlining procedure: k11255 
o|inlining procedure: k11255 
o|contracted procedure: k11299 
o|contracted procedure: k11533 
o|contracted procedure: k11529 
o|contracted procedure: k11525 
o|contracted procedure: k11521 
o|contracted procedure: k11313 
o|contracted procedure: k11499 
o|contracted procedure: k11507 
o|contracted procedure: k11503 
o|contracted procedure: k11495 
o|contracted procedure: k11321 
o|contracted procedure: k11317 
o|contracted procedure: k11309 
o|contracted procedure: k11334 
o|contracted procedure: k11337 
o|contracted procedure: k11487 
o|contracted procedure: k11340 
o|contracted procedure: k11452 
o|contracted procedure: k11468 
o|contracted procedure: k11464 
o|contracted procedure: k11456 
o|contracted procedure: k11460 
o|contracted procedure: k11352 
o|contracted procedure: k11359 
o|contracted procedure: k11367 
o|contracted procedure: k11371 
o|contracted procedure: k11387 
o|contracted procedure: k11383 
o|contracted procedure: k11402 
o|contracted procedure: k11418 
o|contracted procedure: k11414 
o|contracted procedure: k11406 
o|contracted procedure: k11410 
o|contracted procedure: k11398 
o|contracted procedure: k11425 
o|contracted procedure: k11441 
o|contracted procedure: k11437 
o|contracted procedure: k11429 
o|contracted procedure: k11433 
o|contracted procedure: k11448 
o|contracted procedure: k11480 
o|contracted procedure: k11548 
o|contracted procedure: k11551 
o|contracted procedure: k11554 
o|contracted procedure: k11562 
o|contracted procedure: k11570 
o|contracted procedure: k11590 
o|simplifications: ((let . 109)) 
o|removed binding forms: 1047 
o|inlining procedure: k3929 
o|inlining procedure: k3929 
o|inlining procedure: k4174 
o|inlining procedure: k4174 
o|inlining procedure: k5021 
o|inlining procedure: k5021 
o|inlining procedure: k5021 
o|substituted constant variable: r1125613149 
o|substituted constant variable: r1125613150 
o|substituted constant variable: r1125613151 
o|substituted constant variable: r1125613152 
o|inlining procedure: k11391 
o|inlining procedure: k11391 
o|simplifications: ((let . 1)) 
o|replaced variables: 359 
o|removed binding forms: 2 
o|removed conditional forms: 4 
o|substituted constant variable: r393013157 
o|substituted constant variable: r393013157 
o|replaced variables: 1 
o|removed binding forms: 239 
o|contracted procedure: k4129 
o|contracted procedure: k4490 
o|contracted procedure: k9534 
o|contracted procedure: k9719 
o|replaced variables: 2 
o|removed binding forms: 7 
o|removed binding forms: 1 
o|direct leaf routine/allocation: g20362045 0 
o|direct leaf routine/allocation: g19231932 15 
o|direct leaf routine/allocation: g14861495 9 
o|direct leaf routine/allocation: g779790 30 
o|contracted procedure: "(chicken-syntax.scm:943) k6154" 
o|contracted procedure: "(chicken-syntax.scm:902) k6310" 
o|contracted procedure: "(chicken-syntax.scm:538) k7984" 
o|contracted procedure: "(chicken-syntax.scm:305) k9771" 
o|removed binding forms: 4 
o|customizable procedures: (g3140 map-loop2551 k11379 mapslots61 k11165 k10973 k10996 k10919 map-loop172189 g205214 map-loop199217 g233242 map-loop227245 map-loop278295 map-loop257302 loop333 map-loop314336 map-loop348372 map-loop384408 map-loop420444 map-loop456480 loop505 map-loop540557 map-loop567584 g600609 map-loop594612 g628637 map-loop622640 g656665 map-loop650668 map-loop680699 map-loop711730 map-loop742761 k9745 map-loop773800 map-loop815839 map-loop851875 k9508 map-loop887914 map-loop929953 map-loop965989 for-each-loop10271039 map-loop10711088 loop1096 g11151124 map-loop11091127 loop1137 map-loop11951213 k8783 fold1147 g11661175 map-loop11601178 fold1229 map-loop12481265 map-loop12741291 foldl13261330 map-loop13031342 map-loop13511370 quotify-proc13951397 k8121 k8133 fold1421 map-loop14801501 expand1456 map-loop15571574 g15931602 map-loop15871605 map-loop16151632 g16501659 map-loop16441662 recur1527 make-if-tree1521 prefix-sym1581 recur1542 loop1710 map-loop17401761 genvars1732 k6803 build1797 map-loop18201839 loop1734 map-loop19481965 k6238 k6241 k6244 map-loop19171938 map-loop20012018 map-loop20302048 k5916 k5922 k5929 k5937 loop2055 loop2099 loop2129 k5234 k5258 loop22282249 loop22282260 g23092318 map-loop23032330 k4904 k4778 k4636 loop23892410 loop23892426 map-loop24372455 map-loop24652483 k4295 loop2510 loop22524 map-loop25312556 map-loop25682592 g26292638 map-loop26232645) 
o|calls to known targets: 261 
o|identified direct recursive calls: f_4102 1 
o|identified direct recursive calls: f_4243 1 
o|identified direct recursive calls: f_4046 1 
o|identified direct recursive calls: f_4467 1 
o|identified direct recursive calls: f_4501 1 
o|identified direct recursive calls: f_6131 1 
o|identified direct recursive calls: f_6165 1 
o|identified direct recursive calls: f_6287 1 
o|identified direct recursive calls: f_6849 1 
o|identified direct recursive calls: f_7721 1 
o|identified direct recursive calls: f_7789 1 
o|identified direct recursive calls: f_7961 1 
o|identified direct recursive calls: f_8025 2 
o|identified direct recursive calls: f_8376 1 
o|identified direct recursive calls: f_8446 1 
o|identified direct recursive calls: f_8480 1 
o|identified direct recursive calls: f_8535 1 
o|identified direct recursive calls: f_8861 1 
o|identified direct recursive calls: f_8973 1 
o|identified direct recursive calls: f_9011 1 
o|identified direct recursive calls: f_9407 1 
o|identified direct recursive calls: f_9455 1 
o|identified direct recursive calls: f_9644 1 
o|identified direct recursive calls: f_9692 1 
o|identified direct recursive calls: f_9810 1 
o|identified direct recursive calls: f_9858 1 
o|identified direct recursive calls: f_9906 1 
o|identified direct recursive calls: f_10056 1 
o|identified direct recursive calls: f_10090 1 
o|identified direct recursive calls: f_10346 1 
o|identified direct recursive calls: f_10394 1 
o|identified direct recursive calls: f_10493 1 
o|identified direct recursive calls: f_10541 1 
o|identified direct recursive calls: f_10624 1 
o|identified direct recursive calls: f_10674 1 
o|identified direct recursive calls: f_10694 1 
o|identified direct recursive calls: f_10742 1 
o|identified direct recursive calls: f_10844 1 
o|fast box initializations: 77 
o|dropping unused closure argument: f_7591 
*/
/* end of file */

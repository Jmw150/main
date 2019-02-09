/* Generated from expand.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: expand.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file expand.c
   unit: expand
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[357];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,108,111,111,107,117,112,32,115,101,50,52,55,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,26),40,109,97,99,114,111,45,97,108,105,97,115,32,118,97,114,50,54,50,32,115,101,50,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,51,51,49,32,105,51,51,51,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,119,97,108,107,32,120,51,48,50,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,21),40,115,116,114,105,112,45,115,121,110,116,97,120,32,101,120,112,50,57,57,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,52,49,55,32,103,52,50,57,52,51,57,32,103,52,51,48,52,52,48,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,34),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,56,48,32,103,51,56,55,52,48,56,32,103,51,56,56,52,48,57,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,53,52,32,103,51,54,54,51,55,50,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,101,120,116,101,110,100,45,115,101,32,115,101,51,52,52,32,118,97,114,115,51,52,53,32,46,32,116,109,112,51,52,51,51,52,54,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,11),40,103,52,54,52,32,97,52,54,54,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,101,52,54,56,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,49,32,115,121,109,52,53,51,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,103,108,111,98,97,108,105,122,101,32,115,121,109,52,53,48,32,115,101,52,53,49,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,101,110,115,117,114,101,45,116,114,97,110,115,102,111,114,109,101,114,32,116,52,56,52,32,46,32,116,109,112,52,56,51,52,56,53,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,103,53,48,55,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,61),40,35,35,115,121,115,35,101,120,116,101,110,100,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,110,97,109,101,52,57,54,32,115,101,52,57,55,32,116,114,97,110,115,102,111,114,109,101,114,52,57,56,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,99,111,112,121,45,109,97,99,114,111,32,111,108,100,53,49,53,32,110,101,119,53,49,54,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,109,97,99,114,111,63,32,115,121,109,53,50,51,32,46,32,116,109,112,53,50,50,53,50,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,109,101,53,51,56,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,117,110,114,101,103,105,115,116,101,114,45,109,97,99,114,111,32,110,97,109,101,53,51,54,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,117,110,100,101,102,105,110,101,45,109,97,99,114,111,33,32,110,97,109,101,53,52,54,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,12),40,99,111,112,121,32,112,115,53,55,50,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,52,51,51,56,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,13),40,97,52,51,51,50,32,101,120,53,54,57,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,17),40,102,95,52,52,54,55,32,105,110,112,117,116,53,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,52,52,55,50,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,52,52,55,55,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,52,52,56,51,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,51,48,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,52,52,57,54,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,21),40,116,109,112,50,51,48,54,53,32,97,114,103,115,53,54,51,53,57,53,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,52,52,51,51,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,15),40,97,52,51,50,54,32,107,53,54,50,53,54,56,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,52),40,99,97,108,108,45,104,97,110,100,108,101,114,32,110,97,109,101,53,53,51,32,104,97,110,100,108,101,114,53,53,52,32,101,120,112,53,53,53,32,115,101,53,53,54,32,99,115,53,53,55,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,31),40,101,120,112,97,110,100,32,104,101,97,100,53,57,56,32,101,120,112,53,57,57,32,109,100,101,102,54,48,48,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,54,50,32,103,54,55,52,54,56,48,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,54,51,53,32,103,54,52,55,54,53,52,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,12),40,103,54,57,53,32,99,115,54,57,55,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,101,120,112,54,48,57,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,101,120,112,97,110,100,45,48,32,101,120,112,53,52,56,32,100,115,101,53,52,57,32,99,115,63,53,53,48,41,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,97,52,56,50,57,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,32),40,97,52,56,51,53,32,101,120,112,50,55,50,57,55,51,48,55,51,51,32,109,55,51,49,55,51,50,55,51,52,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,101,120,112,55,50,56,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,27),40,101,120,112,97,110,100,32,101,120,112,55,49,53,32,46,32,116,109,112,55,49,52,55,49,54,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,108,108,105,115,116,55,52,50,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,63,32,108,108,105,115,116,55,52,48,41,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,12),40,101,114,114,32,109,115,103,55,54,53,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,11),40,103,55,57,54,32,107,56,48,55,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,57,48,32,103,56,48,50,56,49,57,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,44),40,108,111,111,112,32,109,111,100,101,55,55,53,32,114,101,113,55,55,54,32,111,112,116,55,55,55,32,107,101,121,55,55,56,32,108,108,105,115,116,55,55,57,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,67),40,35,35,115,121,115,35,101,120,112,97,110,100,45,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,32,108,108,105,115,116,48,55,53,57,32,98,111,100,121,55,54,48,32,101,114,114,104,55,54,49,32,115,101,55,54,50,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,100,101,102,106,97,109,45,101,114,114,111,114,32,102,111,114,109,56,56,55,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,29),40,109,97,112,45,108,111,111,112,57,50,55,32,103,57,51,57,57,53,50,32,103,57,52,48,57,53,51,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,57,56,32,103,57,49,48,57,49,54,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,31),40,97,53,53,51,52,32,118,97,114,115,56,57,49,32,97,114,103,99,56,57,50,32,114,101,115,116,56,57,51,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,60),40,35,35,115,121,115,35,101,120,112,97,110,100,45,109,117,108,116,105,112,108,101,45,118,97,108,117,101,115,45,97,115,115,105,103,110,109,101,110,116,32,102,111,114,109,97,108,115,56,56,57,32,101,120,112,114,56,57,48,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,12),40,99,111,109,112,32,105,100,57,57,51,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,98,111,100,121,50,49,48,49,48,32,101,120,112,115,49,48,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,44),40,109,97,112,45,108,111,111,112,49,48,55,52,32,103,49,48,56,54,49,49,48,50,32,103,49,48,56,55,49,49,48,51,32,103,49,48,56,56,49,49,48,52,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,50,54,32,103,49,48,51,56,49,48,54,54,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,25),40,97,54,48,54,48,32,97,49,48,54,48,32,95,49,48,54,49,32,95,49,48,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,31),40,102,111,108,100,108,49,48,52,57,32,103,49,48,53,48,49,48,53,52,32,103,49,48,52,56,49,48,53,53,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,43),40,102,105,110,105,32,118,97,114,115,49,48,48,52,32,118,97,108,115,49,48,48,53,32,109,118,97,114,115,49,48,48,54,32,98,111,100,121,49,48,48,55,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,51,52,32,103,49,49,52,54,49,49,53,50,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,33),40,108,111,111,112,32,98,111,100,121,49,49,50,50,32,100,101,102,115,49,49,50,51,32,100,111,110,101,49,49,50,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,50),40,102,105,110,105,47,115,121,110,116,97,120,32,118,97,114,115,49,49,49,55,32,118,97,108,115,49,49,49,56,32,109,118,97,114,115,49,49,49,57,32,98,111,100,121,49,49,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,120,49,49,56,56,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,43),40,108,111,111,112,32,98,111,100,121,49,49,55,50,32,118,97,114,115,49,49,55,51,32,118,97,108,115,49,49,55,52,32,109,118,97,114,115,49,49,55,53,41,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,17),40,101,120,112,97,110,100,32,98,111,100,121,49,49,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,45),40,35,35,115,121,115,35,99,97,110,111,110,105,99,97,108,105,122,101,45,98,111,100,121,32,98,111,100,121,57,55,54,32,46,32,116,109,112,57,55,53,57,55,55,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,7),40,103,49,50,51,48,41,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,19),40,109,119,97,108,107,32,120,49,50,49,56,32,112,49,50,49,57,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,43),40,109,97,116,99,104,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,49,50,49,50,32,112,97,116,49,50,49,51,32,118,97,114,115,49,50,49,52,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,104,101,97,100,49,50,52,50,32,98,111,100,121,49,50,52,51,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,101,120,112,97,110,100,45,99,117,114,114,105,101,100,45,100,101,102,105,110,101,32,104,101,97,100,49,50,51,55,32,98,111,100,121,49,50,51,56,32,115,101,49,50,51,57,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,25),40,115,121,110,116,97,120,45,101,114,114,111,114,32,46,32,97,114,103,115,49,50,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,111,117,116,115,116,114,32,115,116,114,49,50,55,54,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,108,115,116,49,50,57,53,41,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,100,101,102,115,49,50,54,53,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,99,120,49,50,55,56,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,121,110,116,97,120,45,101,114,114,111,114,47,99,111,110,116,101,120,116,32,109,115,103,49,50,54,48,32,97,114,103,49,50,54,49,41,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,115,121,110,116,97,120,45,114,117,108,101,115,45,109,105,115,109,97,116,99,104,32,105,110,112,117,116,49,51,48,56,41,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,7),40,103,49,51,50,49,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,26),40,103,101,116,45,108,105,110,101,45,110,117,109,98,101,114,32,115,101,120,112,49,51,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,29),40,116,101,115,116,32,120,49,51,52,57,32,112,114,101,100,49,51,53,48,32,109,115,103,49,51,53,49,41,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,13),40,101,114,114,32,109,115,103,49,51,53,50,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,120,49,51,54,48,41,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,20),40,108,97,109,98,100,97,45,108,105,115,116,63,32,120,49,51,53,53,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,20),40,112,114,111,112,101,114,45,108,105,115,116,63,32,120,49,51,55,50,41,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,51,57,56,32,120,49,52,48,48,32,110,49,52,48,49,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,13),40,97,55,51,52,48,32,121,49,52,49,52,41,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,120,49,51,56,52,32,112,49,51,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,57),40,35,35,115,121,115,35,99,104,101,99,107,45,115,121,110,116,97,120,32,105,100,49,51,51,49,32,101,120,112,49,51,51,50,32,112,97,116,49,51,51,51,32,46,32,116,109,112,49,51,51,48,49,51,51,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,13),40,103,49,52,53,50,32,97,49,52,53,52,41,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,16),40,114,101,110,97,109,101,32,115,121,109,49,52,51,56,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,24),40,100,111,108,111,111,112,49,52,56,53,32,105,49,52,56,55,32,102,49,52,56,56,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,7),40,103,49,53,52,48,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,7),40,103,49,53,52,57,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,23),40,99,111,109,112,97,114,101,32,115,49,49,52,55,51,32,115,50,49,52,55,52,41,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,20),40,97,115,115,113,45,114,101,118,101,114,115,101,32,108,49,53,54,51,41,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,23),40,109,105,114,114,111,114,45,114,101,110,97,109,101,32,115,121,109,49,53,54,56,41,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,31),40,97,55,52,53,54,32,102,111,114,109,49,52,50,55,32,115,101,49,52,50,56,32,100,115,101,49,52,50,57,41,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,59),40,109,97,107,101,45,101,114,47,105,114,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,52,50,53,32,101,120,112,108,105,99,105,116,45,114,101,110,97,109,105,110,103,63,49,52,50,54,41,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,34),40,101,114,45,109,97,99,114,111,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,54,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,34),40,105,114,45,109,97,99,114,111,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,49,54,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,33),40,108,111,111,112,32,98,115,49,55,54,52,32,115,101,101,110,49,55,54,53,32,119,97,114,110,101,100,49,55,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,59),40,99,104,101,99,107,45,102,111,114,45,109,117,108,116,105,112,108,101,45,98,105,110,100,105,110,103,115,32,98,105,110,100,105,110,103,115,49,55,54,48,32,102,111,114,109,49,55,54,49,32,108,111,99,49,55,54,50,41,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,14),40,102,95,56,50,55,53,32,120,50,52,51,55,41,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,52,52,52,32,103,50,52,53,54,50,52,54,50,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,18),40,102,95,56,50,56,49,32,114,117,108,101,115,50,52,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,13),40,97,56,52,49,50,32,120,50,52,55,54,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,17),40,102,95,56,51,55,53,32,114,117,108,101,50,52,54,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,48),40,102,95,56,52,52,49,32,105,110,112,117,116,50,52,55,55,32,112,97,116,116,101,114,110,50,52,55,56,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,52,55,57,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,30),40,102,95,56,54,50,50,32,105,110,112,117,116,50,53,49,55,32,112,97,116,116,101,114,110,50,53,49,56,41,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,13),40,97,56,56,48,55,32,120,50,53,51,57,41,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,57),40,102,95,56,55,52,57,32,112,97,116,116,101,114,110,50,53,50,54,32,112,97,116,104,50,53,50,55,32,109,97,112,105,116,50,53,50,56,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,53,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,50,53,55,56,32,100,50,53,56,48,32,103,101,110,50,53,56,49,41,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,37),40,102,95,56,56,56,57,32,116,101,109,112,108,97,116,101,50,53,53,53,32,100,105,109,50,53,53,54,32,101,110,118,50,53,53,55,41,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,55),40,102,95,57,48,56,49,32,112,97,116,116,101,114,110,50,53,57,56,32,100,105,109,50,53,57,57,32,118,97,114,115,50,54,48,48,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,54,48,49,41,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,46),40,102,95,57,49,53,56,32,116,101,109,112,108,97,116,101,50,54,48,54,32,100,105,109,50,54,48,55,32,101,110,118,50,54,48,56,32,102,114,101,101,50,54,48,57,41,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,32),40,102,95,57,50,52,55,32,112,50,54,49,55,32,115,101,101,110,45,115,101,103,109,101,110,116,63,50,54,49,56,41};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,20),40,102,95,57,50,55,53,32,112,97,116,116,101,114,110,50,54,50,52,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,20),40,102,95,57,50,57,57,32,112,97,116,116,101,114,110,50,54,50,55,41,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,112,97,116,116,101,114,110,50,54,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,20),40,102,95,57,51,49,57,32,112,97,116,116,101,114,110,50,54,50,56,41,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,79),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,115,121,110,116,97,120,45,114,117,108,101,115,32,101,108,108,105,112,115,105,115,50,51,56,48,32,114,117,108,101,115,50,51,56,49,32,115,117,98,107,101,121,119,111,114,100,115,50,51,56,50,32,114,50,51,56,51,32,99,50,51,56,52,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,109,101,50,55,48,48,41,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,109,97,99,114,111,45,115,117,98,115,101,116,32,109,101,48,50,54,57,49,32,46,32,116,109,112,50,54,57,48,50,54,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,16),40,103,50,55,50,49,32,115,100,101,102,50,55,51,48,41};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,50,48,32,103,50,55,50,55,50,55,51,50,41,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,102,105,120,117,112,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,115,101,50,55,49,48,32,46,32,116,109,112,50,55,48,57,50,55,49,49,41,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,27),40,97,57,53,48,54,32,101,120,112,50,51,54,56,32,114,50,51,54,57,32,99,50,51,55,48,41,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,25),40,97,57,53,52,50,32,120,50,51,54,50,32,114,50,51,54,51,32,99,50,51,54,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,25),40,97,57,53,54,57,32,120,50,51,53,49,32,114,50,51,53,50,32,99,50,51,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,25),40,97,57,53,57,57,32,120,50,51,49,51,32,114,50,51,49,52,32,99,50,51,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,25),40,97,57,55,55,57,32,120,50,51,48,55,32,114,50,51,48,56,32,99,50,51,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,25),40,97,57,56,48,53,32,120,50,51,48,48,32,114,50,51,48,49,32,99,50,51,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,25),40,97,57,56,49,56,32,120,50,50,57,51,32,114,50,50,57,52,32,99,50,50,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,11),40,101,114,114,32,120,50,50,49,55,41,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,13),40,116,101,115,116,32,102,120,50,50,49,56,41,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,50,53,49,32,103,50,50,54,51,50,50,55,48,41};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,16),40,101,120,112,97,110,100,32,99,108,115,50,50,52,52,41};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,28),40,97,57,56,51,49,32,102,111,114,109,50,50,48,55,32,114,50,50,48,56,32,99,50,50,48,57,41,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,29),40,97,49,48,49,50,51,32,102,111,114,109,50,50,48,48,32,114,50,50,48,49,32,99,50,50,48,50,41,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,29),40,97,49,48,49,52,52,32,102,111,114,109,50,49,57,51,32,114,50,49,57,52,32,99,50,49,57,53,41,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,120,50,49,49,56,32,110,50,49,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,19),40,119,97,108,107,49,32,120,50,49,50,48,32,110,50,49,50,49,41,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,15),40,103,50,49,55,49,32,101,110,118,50,49,55,51,41,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,15),40,103,50,49,55,56,32,101,110,118,50,49,56,48,41,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,16),40,115,105,109,112,108,105,102,121,32,120,50,49,54,52,41};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,29),40,97,49,48,49,55,55,32,102,111,114,109,50,49,48,57,32,114,50,49,49,48,32,99,50,49,49,49,41,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,48,56,51,32,103,50,48,57,53,50,49,48,50,41};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,48,52,57,32,103,50,48,54,49,50,48,54,56,41};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,29),40,97,49,48,52,54,56,32,102,111,114,109,50,48,51,55,32,114,50,48,51,56,32,99,50,48,51,57,41,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,15),40,101,120,112,97,110,100,32,98,115,50,48,50,56,41,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,29),40,97,49,48,54,54,52,32,102,111,114,109,50,48,50,50,32,114,50,48,50,51,32,99,50,48,50,52,41,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,7),40,103,49,57,57,48,41,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,56,52,32,103,49,57,57,54,50,48,48,54,41};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,57,54,49,32,101,108,115,101,63,49,57,54,50,41,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,29),40,97,49,48,55,49,53,32,102,111,114,109,49,57,52,55,32,114,49,57,52,56,32,99,49,57,52,57,41,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,30),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,56,54,54,32,101,108,115,101,63,49,56,54,55,41,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,29),40,97,49,48,57,52,48,32,102,111,114,109,49,56,53,56,32,114,49,56,53,57,32,99,49,56,54,48,41,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,29),40,97,49,49,51,49,50,32,102,111,114,109,49,56,52,56,32,114,49,56,52,57,32,99,49,56,53,48,41,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,29),40,97,49,49,51,54,52,32,102,111,114,109,49,56,51,57,32,114,49,56,52,48,32,99,49,56,52,49,41,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,26),40,97,49,49,52,48,49,32,120,49,56,50,51,32,114,49,56,50,52,32,99,49,56,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,26),40,97,49,49,52,52,53,32,120,49,56,49,53,32,114,49,56,49,54,32,99,49,56,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,26),40,97,49,49,52,54,55,32,120,49,56,48,55,32,114,49,56,48,56,32,99,49,56,48,57,41,0,0,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,26),40,97,49,49,52,56,57,32,120,49,55,57,57,32,114,49,56,48,48,32,99,49,56,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,26),40,97,49,49,53,49,49,32,120,49,55,57,49,32,114,49,55,57,50,32,99,49,55,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,26),40,97,49,49,53,51,51,32,120,49,55,55,55,32,114,49,55,55,56,32,99,49,55,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,29),40,97,49,49,53,56,53,32,102,111,114,109,49,55,50,57,32,114,49,55,51,48,32,99,49,55,51,49,41,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,102,111,114,109,49,55,48,49,41,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,26),40,97,49,49,54,56,56,32,120,49,54,57,55,32,114,49,54,57,56,32,99,49,54,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,26),40,97,49,49,56,48,55,32,120,49,54,57,48,32,114,49,54,57,49,32,99,49,54,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,26),40,97,49,49,56,50,52,32,120,49,54,56,51,32,114,49,54,56,52,32,99,49,54,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,26),40,97,49,49,56,52,49,32,120,49,54,55,54,32,114,49,54,55,55,32,99,49,54,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,26),40,97,49,49,56,53,56,32,120,49,54,54,57,32,114,49,54,55,48,32,99,49,54,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,26),40,97,49,49,56,55,53,32,120,49,54,54,50,32,114,49,54,54,51,32,99,49,54,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,50),40,97,49,49,56,57,50,32,103,49,54,53,48,49,54,53,49,49,54,53,54,32,103,49,54,53,50,49,54,53,51,49,54,53,55,32,103,49,54,53,52,49,54,53,53,49,54,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,50),40,97,49,49,57,48,50,32,103,49,54,51,54,49,54,51,55,49,54,52,50,32,103,49,54,51,56,49,54,51,57,49,54,52,51,32,103,49,54,52,48,49,54,52,49,49,54,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,50),40,97,49,49,57,49,50,32,103,49,54,50,50,49,54,50,51,49,54,50,56,32,103,49,54,50,52,49,54,50,53,49,54,50,57,32,103,49,54,50,54,49,54,50,55,49,54,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_8231)
static void C_ccall f_8231(C_word c,C_word *av) C_noret;
C_noret_decl(f_8235)
static void C_ccall f_8235(C_word c,C_word *av) C_noret;
C_noret_decl(f_8239)
static void C_ccall f_8239(C_word c,C_word *av) C_noret;
C_noret_decl(f_4599)
static void C_ccall f_4599(C_word c,C_word *av) C_noret;
C_noret_decl(f_8244)
static void C_ccall f_8244(C_word c,C_word *av) C_noret;
C_noret_decl(f_7749)
static C_word C_fcall f_7749(C_word t0,C_word t1);
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word *av) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word *av) C_noret;
C_noret_decl(f_9996)
static void C_fcall f_9996(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4578)
static void C_fcall f_4578(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8808)
static void C_ccall f_8808(C_word c,C_word *av) C_noret;
C_noret_decl(f_9973)
static void C_ccall f_9973(C_word c,C_word *av) C_noret;
C_noret_decl(f_7701)
static void C_fcall f_7701(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8204)
static void C_ccall f_8204(C_word c,C_word *av) C_noret;
C_noret_decl(f_7709)
static void C_fcall f_7709(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8208)
static void C_ccall f_8208(C_word c,C_word *av) C_noret;
C_noret_decl(f_9550)
static void C_ccall f_9550(C_word c,C_word *av) C_noret;
C_noret_decl(f_9553)
static void C_ccall f_9553(C_word c,C_word *av) C_noret;
C_noret_decl(f_8749)
static void C_ccall f_8749(C_word c,C_word *av) C_noret;
C_noret_decl(f_9560)
static void C_ccall f_9560(C_word c,C_word *av) C_noret;
C_noret_decl(f_9568)
static void C_ccall f_9568(C_word c,C_word *av) C_noret;
C_noret_decl(f_9980)
static void C_ccall f_9980(C_word c,C_word *av) C_noret;
C_noret_decl(f_8511)
static void C_ccall f_8511(C_word c,C_word *av) C_noret;
C_noret_decl(f_8519)
static void C_ccall f_8519(C_word c,C_word *av) C_noret;
C_noret_decl(f_8515)
static void C_ccall f_8515(C_word c,C_word *av) C_noret;
C_noret_decl(f_8705)
static void C_ccall f_8705(C_word c,C_word *av) C_noret;
C_noret_decl(f_10178)
static void C_ccall f_10178(C_word c,C_word *av) C_noret;
C_noret_decl(f_10176)
static void C_ccall f_10176(C_word c,C_word *av) C_noret;
C_noret_decl(f_6711)
static void C_ccall f_6711(C_word c,C_word *av) C_noret;
C_noret_decl(f_6719)
static void C_ccall f_6719(C_word c,C_word *av) C_noret;
C_noret_decl(f_11689)
static void C_ccall f_11689(C_word c,C_word *av) C_noret;
C_noret_decl(f_11687)
static void C_ccall f_11687(C_word c,C_word *av) C_noret;
C_noret_decl(f_11693)
static void C_ccall f_11693(C_word c,C_word *av) C_noret;
C_noret_decl(f_11698)
static void C_fcall f_11698(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5430)
static void C_fcall f_5430(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6727)
static void C_ccall f_6727(C_word c,C_word *av) C_noret;
C_noret_decl(f_10102)
static void C_ccall f_10102(C_word c,C_word *av) C_noret;
C_noret_decl(f_6741)
static void C_ccall f_6741(C_word c,C_word *av) C_noret;
C_noret_decl(f_7535)
static void C_fcall f_7535(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6746)
static void C_fcall f_6746(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11132)
static void C_ccall f_11132(C_word c,C_word *av) C_noret;
C_noret_decl(f_7501)
static void C_ccall f_7501(C_word c,C_word *av) C_noret;
C_noret_decl(f_7505)
static void C_ccall f_7505(C_word c,C_word *av) C_noret;
C_noret_decl(f_3666)
static void C_fcall f_3666(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8779)
static void C_ccall f_8779(C_word c,C_word *av) C_noret;
C_noret_decl(f_8622)
static void C_ccall f_8622(C_word c,C_word *av) C_noret;
C_noret_decl(f_11186)
static void C_ccall f_11186(C_word c,C_word *av) C_noret;
C_noret_decl(f_8773)
static void C_ccall f_8773(C_word c,C_word *av) C_noret;
C_noret_decl(f_8626)
static void C_ccall f_8626(C_word c,C_word *av) C_noret;
C_noret_decl(f_7556)
static void C_ccall f_7556(C_word c,C_word *av) C_noret;
C_noret_decl(f_9230)
static void C_ccall f_9230(C_word c,C_word *av) C_noret;
C_noret_decl(f_10156)
static void C_ccall f_10156(C_word c,C_word *av) C_noret;
C_noret_decl(f_11396)
static void C_ccall f_11396(C_word c,C_word *av) C_noret;
C_noret_decl(f_11159)
static void C_ccall f_11159(C_word c,C_word *av) C_noret;
C_noret_decl(f_6730)
static void C_ccall f_6730(C_word c,C_word *av) C_noret;
C_noret_decl(f_5583)
static void C_ccall f_5583(C_word c,C_word *av) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word *av) C_noret;
C_noret_decl(f_6806)
static void C_ccall f_6806(C_word c,C_word *av) C_noret;
C_noret_decl(f_9245)
static void C_ccall f_9245(C_word c,C_word *av) C_noret;
C_noret_decl(f_9247)
static void C_ccall f_9247(C_word c,C_word *av) C_noret;
C_noret_decl(f_10149)
static void C_ccall f_10149(C_word c,C_word *av) C_noret;
C_noret_decl(f_8796)
static void C_ccall f_8796(C_word c,C_word *av) C_noret;
C_noret_decl(f_10143)
static void C_ccall f_10143(C_word c,C_word *av) C_noret;
C_noret_decl(f_10145)
static void C_ccall f_10145(C_word c,C_word *av) C_noret;
C_noret_decl(f_8792)
static void C_ccall f_8792(C_word c,C_word *av) C_noret;
C_noret_decl(f_11129)
static void C_ccall f_11129(C_word c,C_word *av) C_noret;
C_noret_decl(f_3676)
static void C_fcall f_3676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word *av) C_noret;
C_noret_decl(f_6813)
static void C_ccall f_6813(C_word c,C_word *av) C_noret;
C_noret_decl(f_6815)
static void C_fcall f_6815(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9254)
static void C_ccall f_9254(C_word c,C_word *av) C_noret;
C_noret_decl(f_11014)
static void C_ccall f_11014(C_word c,C_word *av) C_noret;
C_noret_decl(f_11011)
static void C_ccall f_11011(C_word c,C_word *av) C_noret;
C_noret_decl(f_11017)
static void C_ccall f_11017(C_word c,C_word *av) C_noret;
C_noret_decl(f_5565)
static void C_ccall f_5565(C_word c,C_word *av) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externexport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_10128)
static void C_ccall f_10128(C_word c,C_word *av) C_noret;
C_noret_decl(f_11005)
static void C_ccall f_11005(C_word c,C_word *av) C_noret;
C_noret_decl(f_11001)
static void C_ccall f_11001(C_word c,C_word *av) C_noret;
C_noret_decl(f_10124)
static void C_ccall f_10124(C_word c,C_word *av) C_noret;
C_noret_decl(f_10122)
static void C_ccall f_10122(C_word c,C_word *av) C_noret;
C_noret_decl(f_6831)
static void C_ccall f_6831(C_word c,C_word *av) C_noret;
C_noret_decl(f_6837)
static void C_ccall f_6837(C_word c,C_word *av) C_noret;
C_noret_decl(f_6834)
static void C_ccall f_6834(C_word c,C_word *av) C_noret;
C_noret_decl(f_10198)
static void C_ccall f_10198(C_word c,C_word *av) C_noret;
C_noret_decl(f_10190)
static void C_fcall f_10190(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word *av) C_noret;
C_noret_decl(f_9200)
static void C_ccall f_9200(C_word c,C_word *av) C_noret;
C_noret_decl(f_6844)
static void C_ccall f_6844(C_word c,C_word *av) C_noret;
C_noret_decl(f_10185)
static void C_ccall f_10185(C_word c,C_word *av) C_noret;
C_noret_decl(f_10188)
static void C_ccall f_10188(C_word c,C_word *av) C_noret;
C_noret_decl(f_10182)
static void C_ccall f_10182(C_word c,C_word *av) C_noret;
C_noret_decl(f_8681)
static void C_ccall f_8681(C_word c,C_word *av) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word *av) C_noret;
C_noret_decl(f_5723)
static C_word C_fcall f_5723(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_9211)
static void C_ccall f_9211(C_word c,C_word *av) C_noret;
C_noret_decl(f_6854)
static void C_ccall f_6854(C_word c,C_word *av) C_noret;
C_noret_decl(f_7398)
static void C_ccall f_7398(C_word c,C_word *av) C_noret;
C_noret_decl(f_6863)
static void C_ccall f_6863(C_word c,C_word *av) C_noret;
C_noret_decl(f_6878)
static void C_ccall f_6878(C_word c,C_word *av) C_noret;
C_noret_decl(f_5712)
static void C_ccall f_5712(C_word c,C_word *av) C_noret;
C_noret_decl(f_5708)
static void C_ccall f_5708(C_word c,C_word *av) C_noret;
C_noret_decl(f_6869)
static void C_ccall f_6869(C_word c,C_word *av) C_noret;
C_noret_decl(f_6866)
static void C_ccall f_6866(C_word c,C_word *av) C_noret;
C_noret_decl(f_10679)
static void C_fcall f_10679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7852)
static void C_fcall f_7852(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word *av) C_noret;
C_noret_decl(f_5174)
static void C_fcall f_5174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7827)
static C_word C_fcall f_7827(C_word t0,C_word t1);
C_noret_decl(f_5169)
static void C_ccall f_5169(C_word c,C_word *av) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166(C_word c,C_word *av) C_noret;
C_noret_decl(f_5162)
static void C_ccall f_5162(C_word c,C_word *av) C_noret;
C_noret_decl(f_11429)
static void C_ccall f_11429(C_word c,C_word *av) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word *av) C_noret;
C_noret_decl(f_4737)
static void C_fcall f_4737(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4733)
static void C_fcall f_4733(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6828)
static void C_ccall f_6828(C_word c,C_word *av) C_noret;
C_noret_decl(f_6825)
static void C_ccall f_6825(C_word c,C_word *av) C_noret;
C_noret_decl(f_6512)
static void C_ccall f_6512(C_word c,C_word *av) C_noret;
C_noret_decl(f_9141)
static void C_ccall f_9141(C_word c,C_word *av) C_noret;
C_noret_decl(f_6891)
static void C_ccall f_6891(C_word c,C_word *av) C_noret;
C_noret_decl(f_6895)
static void C_ccall f_6895(C_word c,C_word *av) C_noret;
C_noret_decl(f_9275)
static void C_ccall f_9275(C_word c,C_word *av) C_noret;
C_noret_decl(f_4626)
static void C_fcall f_4626(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7168)
static void C_fcall f_7168(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word *av) C_noret;
C_noret_decl(f_7163)
static void C_fcall f_7163(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10627)
static void C_fcall f_10627(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11468)
static void C_ccall f_11468(C_word c,C_word *av) C_noret;
C_noret_decl(f_11466)
static void C_ccall f_11466(C_word c,C_word *av) C_noret;
C_noret_decl(f_9122)
static void C_ccall f_9122(C_word c,C_word *av) C_noret;
C_noret_decl(f_6875)
static void C_ccall f_6875(C_word c,C_word *av) C_noret;
C_noret_decl(f_6872)
static void C_ccall f_6872(C_word c,C_word *av) C_noret;
C_noret_decl(f_11453)
static void C_ccall f_11453(C_word c,C_word *av) C_noret;
C_noret_decl(f_11450)
static void C_ccall f_11450(C_word c,C_word *av) C_noret;
C_noret_decl(f_9299)
static void C_ccall f_9299(C_word c,C_word *av) C_noret;
C_noret_decl(f_5199)
static void C_ccall f_5199(C_word c,C_word *av) C_noret;
C_noret_decl(f_4981)
static void C_fcall f_4981(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9839)
static void C_ccall f_9839(C_word c,C_word *av) C_noret;
C_noret_decl(f_11406)
static void C_ccall f_11406(C_word c,C_word *av) C_noret;
C_noret_decl(f_9832)
static void C_ccall f_9832(C_word c,C_word *av) C_noret;
C_noret_decl(f_10602)
static void C_fcall f_10602(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11402)
static void C_ccall f_11402(C_word c,C_word *av) C_noret;
C_noret_decl(f_9830)
static void C_ccall f_9830(C_word c,C_word *av) C_noret;
C_noret_decl(f_11400)
static void C_ccall f_11400(C_word c,C_word *av) C_noret;
C_noret_decl(f_5037)
static void C_ccall f_5037(C_word c,C_word *av) C_noret;
C_noret_decl(f_9107)
static void C_ccall f_9107(C_word c,C_word *av) C_noret;
C_noret_decl(f_9845)
static void C_ccall f_9845(C_word c,C_word *av) C_noret;
C_noret_decl(f_9848)
static void C_ccall f_9848(C_word c,C_word *av) C_noret;
C_noret_decl(f_9842)
static void C_ccall f_9842(C_word c,C_word *av) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word *av) C_noret;
C_noret_decl(f_10669)
static void C_ccall f_10669(C_word c,C_word *av) C_noret;
C_noret_decl(f_10663)
static void C_ccall f_10663(C_word c,C_word *av) C_noret;
C_noret_decl(f_9850)
static void C_fcall f_9850(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10665)
static void C_ccall f_10665(C_word c,C_word *av) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word *av) C_noret;
C_noret_decl(f_6585)
static void C_fcall f_6585(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6582)
static void C_fcall f_6582(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5012)
static void C_ccall f_5012(C_word c,C_word *av) C_noret;
C_noret_decl(f_6930)
static void C_ccall f_6930(C_word c,C_word *av) C_noret;
C_noret_decl(f_7887)
static void C_ccall f_7887(C_word c,C_word *av) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word *av) C_noret;
C_noret_decl(f_11444)
static void C_ccall f_11444(C_word c,C_word *av) C_noret;
C_noret_decl(f_11446)
static void C_ccall f_11446(C_word c,C_word *av) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word *av) C_noret;
C_noret_decl(f_7891)
static void C_ccall f_7891(C_word c,C_word *av) C_noret;
C_noret_decl(f_9806)
static void C_ccall f_9806(C_word c,C_word *av) C_noret;
C_noret_decl(f_9804)
static void C_ccall f_9804(C_word c,C_word *av) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word *av) C_noret;
C_noret_decl(f_9156)
static void C_ccall f_9156(C_word c,C_word *av) C_noret;
C_noret_decl(f_7866)
static void C_ccall f_7866(C_word c,C_word *av) C_noret;
C_noret_decl(f_9158)
static void C_ccall f_9158(C_word c,C_word *av) C_noret;
C_noret_decl(f_6599)
static C_word C_fcall f_6599(C_word t0,C_word t1);
C_noret_decl(f_9817)
static void C_ccall f_9817(C_word c,C_word *av) C_noret;
C_noret_decl(f_9819)
static void C_ccall f_9819(C_word c,C_word *av) C_noret;
C_noret_decl(f_4824)
static void C_fcall f_4824(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7870)
static void C_ccall f_7870(C_word c,C_word *av) C_noret;
C_noret_decl(f_7187)
static void C_ccall f_7187(C_word c,C_word *av) C_noret;
C_noret_decl(f_6667)
static void C_fcall f_6667(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8475)
static void C_ccall f_8475(C_word c,C_word *av) C_noret;
C_noret_decl(f_6662)
static void C_ccall f_6662(C_word c,C_word *av) C_noret;
C_noret_decl(f_6664)
static void C_ccall f_6664(C_word c,C_word *av) C_noret;
C_noret_decl(f_9860)
static void C_fcall f_9860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4695)
static void C_fcall f_4695(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word *av) C_noret;
C_noret_decl(f_9874)
static void C_ccall f_9874(C_word c,C_word *av) C_noret;
C_noret_decl(f_5362)
static void C_ccall f_5362(C_word c,C_word *av) C_noret;
C_noret_decl(f_9893)
static void C_ccall f_9893(C_word c,C_word *av) C_noret;
C_noret_decl(f_9313)
static void C_ccall f_9313(C_word c,C_word *av) C_noret;
C_noret_decl(f_9319)
static void C_ccall f_9319(C_word c,C_word *av) C_noret;
C_noret_decl(f_9329)
static void C_fcall f_9329(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6001)
static void C_fcall f_6001(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8141)
static void C_ccall f_8141(C_word c,C_word *av) C_noret;
C_noret_decl(f_10841)
static void C_ccall f_10841(C_word c,C_word *av) C_noret;
C_noret_decl(f_8147)
static void C_ccall f_8147(C_word c,C_word *av) C_noret;
C_noret_decl(f_8144)
static void C_ccall f_8144(C_word c,C_word *av) C_noret;
C_noret_decl(f_7980)
static void C_ccall f_7980(C_word c,C_word *av) C_noret;
C_noret_decl(f_7989)
static void C_ccall f_7989(C_word c,C_word *av) C_noret;
C_noret_decl(f_7984)
static void C_ccall f_7984(C_word c,C_word *av) C_noret;
C_noret_decl(f_9306)
static void C_ccall f_9306(C_word c,C_word *av) C_noret;
C_noret_decl(f_10838)
static void C_ccall f_10838(C_word c,C_word *av) C_noret;
C_noret_decl(f_8150)
static void C_ccall f_8150(C_word c,C_word *av) C_noret;
C_noret_decl(f_8159)
static void C_ccall f_8159(C_word c,C_word *av) C_noret;
C_noret_decl(f_10834)
static void C_fcall f_10834(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8156)
static void C_ccall f_8156(C_word c,C_word *av) C_noret;
C_noret_decl(f_8153)
static void C_ccall f_8153(C_word c,C_word *av) C_noret;
C_noret_decl(f_7995)
static void C_ccall f_7995(C_word c,C_word *av) C_noret;
C_noret_decl(f_9356)
static void C_ccall f_9356(C_word c,C_word *av) C_noret;
C_noret_decl(f_8162)
static void C_ccall f_8162(C_word c,C_word *av) C_noret;
C_noret_decl(f_8168)
static void C_ccall f_8168(C_word c,C_word *av) C_noret;
C_noret_decl(f_8165)
static void C_ccall f_8165(C_word c,C_word *av) C_noret;
C_noret_decl(f_9363)
static void C_ccall f_9363(C_word c,C_word *av) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word *av) C_noret;
C_noret_decl(f_3829)
static void C_fcall f_3829(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10891)
static void C_fcall f_10891(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9336)
static void C_ccall f_9336(C_word c,C_word *av) C_noret;
C_noret_decl(f_8182)
static void C_ccall f_8182(C_word c,C_word *av) C_noret;
C_noret_decl(f_7062)
static void C_fcall f_7062(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8189)
static void C_ccall f_8189(C_word c,C_word *av) C_noret;
C_noret_decl(f_8180)
static void C_ccall f_8180(C_word c,C_word *av) C_noret;
C_noret_decl(f_10397)
static void C_fcall f_10397(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10393)
static void C_ccall f_10393(C_word c,C_word *av) C_noret;
C_noret_decl(f_10889)
static void C_ccall f_10889(C_word c,C_word *av) C_noret;
C_noret_decl(f_10874)
static C_word C_fcall f_10874(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word *av) C_noret;
C_noret_decl(f_9393)
static void C_ccall f_9393(C_word c,C_word *av) C_noret;
C_noret_decl(f_7041)
static void C_ccall f_7041(C_word c,C_word *av) C_noret;
C_noret_decl(f_7048)
static void C_ccall f_7048(C_word c,C_word *av) C_noret;
C_noret_decl(f_10371)
static void C_fcall f_10371(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11752)
static void C_ccall f_11752(C_word c,C_word *av) C_noret;
C_noret_decl(f_7050)
static void C_ccall f_7050(C_word c,C_word *av) C_noret;
C_noret_decl(f_8132)
static void C_ccall f_8132(C_word c,C_word *av) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054(C_word c,C_word *av) C_noret;
C_noret_decl(f_8135)
static void C_ccall f_8135(C_word c,C_word *av) C_noret;
C_noret_decl(f_8138)
static void C_ccall f_8138(C_word c,C_word *av) C_noret;
C_noret_decl(f_4879)
static void C_fcall f_4879(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11748)
static void C_ccall f_11748(C_word c,C_word *av) C_noret;
C_noret_decl(f_11741)
static void C_ccall f_11741(C_word c,C_word *av) C_noret;
C_noret_decl(f_4873)
static void C_ccall f_4873(C_word c,C_word *av) C_noret;
C_noret_decl(f_9372)
static void C_fcall f_9372(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9370)
static void C_ccall f_9370(C_word c,C_word *av) C_noret;
C_noret_decl(f_4898)
static void C_fcall f_4898(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11724)
static void C_ccall f_11724(C_word c,C_word *av) C_noret;
C_noret_decl(f_11727)
static void C_ccall f_11727(C_word c,C_word *av) C_noret;
C_noret_decl(f_11713)
static void C_ccall f_11713(C_word c,C_word *av) C_noret;
C_noret_decl(f_6035)
static void C_fcall f_6035(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8171)
static void C_ccall f_8171(C_word c,C_word *av) C_noret;
C_noret_decl(f_8177)
static void C_ccall f_8177(C_word c,C_word *av) C_noret;
C_noret_decl(f_8174)
static void C_ccall f_8174(C_word c,C_word *av) C_noret;
C_noret_decl(f_10322)
static void C_ccall f_10322(C_word c,C_word *av) C_noret;
C_noret_decl(f_10311)
static void C_ccall f_10311(C_word c,C_word *av) C_noret;
C_noret_decl(f_8117)
static void C_ccall f_8117(C_word c,C_word *av) C_noret;
C_noret_decl(f_8114)
static void C_ccall f_8114(C_word c,C_word *av) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061(C_word c,C_word *av) C_noret;
C_noret_decl(f_10300)
static void C_ccall f_10300(C_word c,C_word *av) C_noret;
C_noret_decl(f_6077)
static void C_fcall f_6077(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8120)
static void C_ccall f_8120(C_word c,C_word *av) C_noret;
C_noret_decl(f_8123)
static void C_ccall f_8123(C_word c,C_word *av) C_noret;
C_noret_decl(f_8126)
static void C_ccall f_8126(C_word c,C_word *av) C_noret;
C_noret_decl(f_8129)
static void C_ccall f_8129(C_word c,C_word *av) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065(C_word c,C_word *av) C_noret;
C_noret_decl(f_10367)
static void C_ccall f_10367(C_word c,C_word *av) C_noret;
C_noret_decl(f_8382)
static void C_fcall f_8382(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10363)
static void C_fcall f_10363(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word *av) C_noret;
C_noret_decl(f_6059)
static void C_ccall f_6059(C_word c,C_word *av) C_noret;
C_noret_decl(f_8407)
static void C_ccall f_8407(C_word c,C_word *av) C_noret;
C_noret_decl(f_8403)
static void C_ccall f_8403(C_word c,C_word *av) C_noret;
C_noret_decl(f_10349)
static void C_ccall f_10349(C_word c,C_word *av) C_noret;
C_noret_decl(f_10345)
static void C_ccall f_10345(C_word c,C_word *av) C_noret;
C_noret_decl(f_8411)
static void C_ccall f_8411(C_word c,C_word *av) C_noret;
C_noret_decl(f_8418)
static void C_ccall f_8418(C_word c,C_word *av) C_noret;
C_noret_decl(f_8413)
static void C_ccall f_8413(C_word c,C_word *av) C_noret;
C_noret_decl(f_10330)
static void C_ccall f_10330(C_word c,C_word *av) C_noret;
C_noret_decl(f_11261)
static void C_ccall f_11261(C_word c,C_word *av) C_noret;
C_noret_decl(f_11771)
static void C_ccall f_11771(C_word c,C_word *av) C_noret;
C_noret_decl(f_8358)
static void C_ccall f_8358(C_word c,C_word *av) C_noret;
C_noret_decl(f_11277)
static void C_ccall f_11277(C_word c,C_word *av) C_noret;
C_noret_decl(f_8441)
static void C_ccall f_8441(C_word c,C_word *av) C_noret;
C_noret_decl(f_11768)
static void C_ccall f_11768(C_word c,C_word *av) C_noret;
C_noret_decl(f_11761)
static void C_ccall f_11761(C_word c,C_word *av) C_noret;
C_noret_decl(f_8375)
static void C_ccall f_8375(C_word c,C_word *av) C_noret;
C_noret_decl(f_6981)
static C_word C_fcall f_6981(C_word t0,C_word t1);
C_noret_decl(f_8309)
static void C_ccall f_8309(C_word c,C_word *av) C_noret;
C_noret_decl(f_6977)
static void C_ccall f_6977(C_word c,C_word *av) C_noret;
C_noret_decl(f_9076)
static void C_ccall f_9076(C_word c,C_word *av) C_noret;
C_noret_decl(f_9072)
static void C_ccall f_9072(C_word c,C_word *av) C_noret;
C_noret_decl(f_8319)
static void C_ccall f_8319(C_word c,C_word *av) C_noret;
C_noret_decl(f_11586)
static void C_ccall f_11586(C_word c,C_word *av) C_noret;
C_noret_decl(f_11584)
static void C_ccall f_11584(C_word c,C_word *av) C_noret;
C_noret_decl(f_7006)
static void C_ccall f_7006(C_word c,C_word *av) C_noret;
C_noret_decl(f_6996)
static void C_ccall f_6996(C_word c,C_word *av) C_noret;
C_noret_decl(f_7082)
static void C_ccall f_7082(C_word c,C_word *av) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word *av) C_noret;
C_noret_decl(f_7011)
static void C_fcall f_7011(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8333)
static void C_fcall f_8333(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6639)
static void C_ccall f_6639(C_word c,C_word *av) C_noret;
C_noret_decl(f_4004)
static void C_fcall f_4004(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word *av) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word *av) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word *av) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word *av) C_noret;
C_noret_decl(f_11604)
static void C_ccall f_11604(C_word c,C_word *av) C_noret;
C_noret_decl(f_11601)
static void C_ccall f_11601(C_word c,C_word *av) C_noret;
C_noret_decl(f_7649)
static void C_fcall f_7649(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7612)
static void C_ccall f_7612(C_word c,C_word *av) C_noret;
C_noret_decl(f_11628)
static void C_ccall f_11628(C_word c,C_word *av) C_noret;
C_noret_decl(f_9081)
static void C_ccall f_9081(C_word c,C_word *av) C_noret;
C_noret_decl(f_9756)
static void C_ccall f_9756(C_word c,C_word *av) C_noret;
C_noret_decl(f_11249)
static void C_ccall f_11249(C_word c,C_word *av) C_noret;
C_noret_decl(f_11615)
static void C_ccall f_11615(C_word c,C_word *av) C_noret;
C_noret_decl(f_11618)
static void C_ccall f_11618(C_word c,C_word *av) C_noret;
C_noret_decl(f_11645)
static void C_ccall f_11645(C_word c,C_word *av) C_noret;
C_noret_decl(f_11642)
static void C_ccall f_11642(C_word c,C_word *av) C_noret;
C_noret_decl(f_11648)
static void C_ccall f_11648(C_word c,C_word *av) C_noret;
C_noret_decl(f_11111)
static void C_ccall f_11111(C_word c,C_word *av) C_noret;
C_noret_decl(f_7764)
static void C_ccall f_7764(C_word c,C_word *av) C_noret;
C_noret_decl(f_11635)
static void C_ccall f_11635(C_word c,C_word *av) C_noret;
C_noret_decl(f_5931)
static void C_ccall f_5931(C_word c,C_word *av) C_noret;
C_noret_decl(f_11639)
static void C_ccall f_11639(C_word c,C_word *av) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word *av) C_noret;
C_noret_decl(f_5934)
static void C_ccall f_5934(C_word c,C_word *av) C_noret;
C_noret_decl(f_5946)
static void C_fcall f_5946(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word *av) C_noret;
C_noret_decl(f_5839)
static void C_ccall f_5839(C_word c,C_word *av) C_noret;
C_noret_decl(f_7777)
static C_word C_fcall f_7777(C_word t0,C_word t1);
C_noret_decl(f_8937)
static void C_ccall f_8937(C_word c,C_word *av) C_noret;
C_noret_decl(f_5939)
static void C_fcall f_5939(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8931)
static void C_ccall f_8931(C_word c,C_word *av) C_noret;
C_noret_decl(f_5937)
static void C_ccall f_5937(C_word c,C_word *av) C_noret;
C_noret_decl(f_5820)
static void C_fcall f_5820(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word *av) C_noret;
C_noret_decl(f_9055)
static void C_ccall f_9055(C_word c,C_word *av) C_noret;
C_noret_decl(f_8949)
static void C_ccall f_8949(C_word c,C_word *av) C_noret;
C_noret_decl(f_9051)
static void C_ccall f_9051(C_word c,C_word *av) C_noret;
C_noret_decl(f_6382)
static void C_ccall f_6382(C_word c,C_word *av) C_noret;
C_noret_decl(f_5928)
static void C_ccall f_5928(C_word c,C_word *av) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word *av) C_noret;
C_noret_decl(f_7792)
static void C_ccall f_7792(C_word c,C_word *av) C_noret;
C_noret_decl(f_10260)
static void C_ccall f_10260(C_word c,C_word *av) C_noret;
C_noret_decl(f_5902)
static void C_ccall f_5902(C_word c,C_word *av) C_noret;
C_noret_decl(f_7027)
static void C_ccall f_7027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3905)
static void C_ccall f_3905(C_word c,C_word *av) C_noret;
C_noret_decl(f_7023)
static void C_fcall f_7023(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6906)
static void C_ccall f_6906(C_word c,C_word *av) C_noret;
C_noret_decl(f_3907)
static void C_fcall f_3907(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8955)
static void C_ccall f_8955(C_word c,C_word *av) C_noret;
C_noret_decl(f_8952)
static void C_fcall f_8952(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5801)
static void C_fcall f_5801(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word *av) C_noret;
C_noret_decl(f_9778)
static void C_ccall f_9778(C_word c,C_word *av) C_noret;
C_noret_decl(f_9770)
static void C_ccall f_9770(C_word c,C_word *av) C_noret;
C_noret_decl(f_10291)
static void C_ccall f_10291(C_word c,C_word *av) C_noret;
C_noret_decl(f_7034)
static void C_ccall f_7034(C_word c,C_word *av) C_noret;
C_noret_decl(f_6912)
static void C_fcall f_6912(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6910)
static void C_ccall f_6910(C_word c,C_word *av) C_noret;
C_noret_decl(f_9788)
static void C_ccall f_9788(C_word c,C_word *av) C_noret;
C_noret_decl(f_9780)
static void C_ccall f_9780(C_word c,C_word *av) C_noret;
C_noret_decl(f_6926)
static void C_ccall f_6926(C_word c,C_word *av) C_noret;
C_noret_decl(f_5267)
static void C_fcall f_5267(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7670)
static void C_ccall f_7670(C_word c,C_word *av) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396(C_word c,C_word *av) C_noret;
C_noret_decl(f_10270)
static void C_ccall f_10270(C_word c,C_word *av) C_noret;
C_noret_decl(f_5254)
static void C_fcall f_5254(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6957)
static void C_ccall f_6957(C_word c,C_word *av) C_noret;
C_noret_decl(f_8928)
static void C_ccall f_8928(C_word c,C_word *av) C_noret;
C_noret_decl(f_6951)
static void C_ccall f_6951(C_word c,C_word *av) C_noret;
C_noret_decl(f_6087)
static void C_fcall f_6087(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word *av) C_noret;
C_noret_decl(f_10200)
static void C_fcall f_10200(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9722)
static void C_fcall f_9722(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word *av) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word *av) C_noret;
C_noret_decl(f_7341)
static void C_ccall f_7341(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_fcall f_4047(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10246)
static void C_ccall f_10246(C_word c,C_word *av) C_noret;
C_noret_decl(f_7573)
static void C_ccall f_7573(C_word c,C_word *av) C_noret;
C_noret_decl(f_4063)
static void C_fcall f_4063(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4097)
static void C_fcall f_4097(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7590)
static void C_ccall f_7590(C_word c,C_word *av) C_noret;
C_noret_decl(f_4081)
static void C_fcall f_4081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10281)
static void C_ccall f_10281(C_word c,C_word *av) C_noret;
C_noret_decl(f_4923)
static void C_fcall f_4923(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4920)
static void C_ccall f_4920(C_word c,C_word *av) C_noret;
C_noret_decl(f_9796)
static void C_ccall f_9796(C_word c,C_word *av) C_noret;
C_noret_decl(f_10237)
static void C_ccall f_10237(C_word c,C_word *av) C_noret;
C_noret_decl(f_11903)
static void C_ccall f_11903(C_word c,C_word *av) C_noret;
C_noret_decl(f_11901)
static void C_ccall f_11901(C_word c,C_word *av) C_noret;
C_noret_decl(f_4198)
static void C_ccall f_4198(C_word c,C_word *av) C_noret;
C_noret_decl(f_4180)
static C_word C_fcall f_4180(C_word t0,C_word t1);
C_noret_decl(f_4173)
static void C_ccall f_4173(C_word c,C_word *av) C_noret;
C_noret_decl(f_4170)
static void C_ccall f_4170(C_word c,C_word *av) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word *av) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word *av) C_noret;
C_noret_decl(f_3649)
static C_word C_fcall f_3649(C_word t0,C_word t1);
C_noret_decl(f_11913)
static void C_ccall f_11913(C_word c,C_word *av) C_noret;
C_noret_decl(f_11911)
static void C_ccall f_11911(C_word c,C_word *av) C_noret;
C_noret_decl(f_4965)
static void C_ccall f_4965(C_word c,C_word *av) C_noret;
C_noret_decl(f_8972)
static void C_ccall f_8972(C_word c,C_word *av) C_noret;
C_noret_decl(f_4969)
static void C_fcall f_4969(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8976)
static void C_ccall f_8976(C_word c,C_word *av) C_noret;
C_noret_decl(f_8978)
static void C_fcall f_8978(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4951)
static void C_fcall f_4951(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4943)
static void C_ccall f_4943(C_word c,C_word *av) C_noret;
C_noret_decl(f_4946)
static void C_ccall f_4946(C_word c,C_word *av) C_noret;
C_noret_decl(f_8999)
static void C_fcall f_8999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word *av) C_noret;
C_noret_decl(f_9489)
static void C_ccall f_9489(C_word c,C_word *av) C_noret;
C_noret_decl(f_11891)
static void C_ccall f_11891(C_word c,C_word *av) C_noret;
C_noret_decl(f_11893)
static void C_ccall f_11893(C_word c,C_word *av) C_noret;
C_noret_decl(f_9497)
static void C_ccall f_9497(C_word c,C_word *av) C_noret;
C_noret_decl(f_9493)
static void C_ccall f_9493(C_word c,C_word *av) C_noret;
C_noret_decl(f_8058)
static void C_fcall f_8058(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9430)
static void C_ccall f_9430(C_word c,C_word *av) C_noret;
C_noret_decl(f_11880)
static void C_ccall f_11880(C_word c,C_word *av) C_noret;
C_noret_decl(f_5789)
static void C_fcall f_5789(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8078)
static void C_ccall f_8078(C_word c,C_word *av) C_noret;
C_noret_decl(f_10218)
static void C_ccall f_10218(C_word c,C_word *av) C_noret;
C_noret_decl(f_10214)
static void C_ccall f_10214(C_word c,C_word *av) C_noret;
C_noret_decl(f_8968)
static void C_ccall f_8968(C_word c,C_word *av) C_noret;
C_noret_decl(f_8045)
static void C_fcall f_8045(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9453)
static void C_ccall f_9453(C_word c,C_word *av) C_noret;
C_noret_decl(f_9455)
static void C_fcall f_9455(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word *av) C_noret;
C_noret_decl(f_5060)
static void C_ccall f_5060(C_word c,C_word *av) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word *av) C_noret;
C_noret_decl(f_9406)
static void C_ccall f_9406(C_word c,C_word *av) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word *av) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word *av) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word *av) C_noret;
C_noret_decl(f_9414)
static void C_fcall f_9414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9413)
static void C_ccall f_9413(C_word c,C_word *av) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word *av) C_noret;
C_noret_decl(f_10485)
static void C_ccall f_10485(C_word c,C_word *av) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word *av) C_noret;
C_noret_decl(f_10473)
static void C_ccall f_10473(C_word c,C_word *av) C_noret;
C_noret_decl(f_8020)
static void C_ccall f_8020(C_word c,C_word *av) C_noret;
C_noret_decl(f_8023)
static void C_ccall f_8023(C_word c,C_word *av) C_noret;
C_noret_decl(f_8026)
static void C_ccall f_8026(C_word c,C_word *av) C_noret;
C_noret_decl(f_8029)
static void C_ccall f_8029(C_word c,C_word *av) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word *av) C_noret;
C_noret_decl(f_6316)
static void C_fcall f_6316(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word *av) C_noret;
C_noret_decl(f_6329)
static void C_ccall f_6329(C_word c,C_word *av) C_noret;
C_noret_decl(f_7139)
static void C_fcall f_7139(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word *av) C_noret;
C_noret_decl(f_6332)
static void C_ccall f_6332(C_word c,C_word *av) C_noret;
C_noret_decl(f_8010)
static void C_ccall f_8010(C_word c,C_word *av) C_noret;
C_noret_decl(f_7144)
static void C_fcall f_7144(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8017)
static void C_ccall f_8017(C_word c,C_word *av) C_noret;
C_noret_decl(f_8014)
static void C_ccall f_8014(C_word c,C_word *av) C_noret;
C_noret_decl(f_9465)
static void C_ccall f_9465(C_word c,C_word *av) C_noret;
C_noret_decl(f_11092)
static void C_ccall f_11092(C_word c,C_word *av) C_noret;
C_noret_decl(f_8061)
static void C_ccall f_8061(C_word c,C_word *av) C_noret;
C_noret_decl(f_11066)
static void C_ccall f_11066(C_word c,C_word *av) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word *av) C_noret;
C_noret_decl(f_8033)
static void C_ccall f_8033(C_word c,C_word *av) C_noret;
C_noret_decl(f_8037)
static void C_ccall f_8037(C_word c,C_word *av) C_noret;
C_noret_decl(f_8039)
static void C_fcall f_8039(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word *av) C_noret;
C_noret_decl(f_8007)
static void C_ccall f_8007(C_word c,C_word *av) C_noret;
C_noret_decl(f_8004)
static void C_ccall f_8004(C_word c,C_word *av) C_noret;
C_noret_decl(f_11089)
static void C_ccall f_11089(C_word c,C_word *av) C_noret;
C_noret_decl(f_11083)
static void C_ccall f_11083(C_word c,C_word *av) C_noret;
C_noret_decl(f_7110)
static void C_ccall f_7110(C_word c,C_word *av) C_noret;
C_noret_decl(f_7112)
static void C_ccall f_7112(C_word c,C_word *av) C_noret;
C_noret_decl(f_7118)
static C_word C_fcall f_7118(C_word t0);
C_noret_decl(f_10469)
static void C_ccall f_10469(C_word c,C_word *av) C_noret;
C_noret_decl(f_10467)
static void C_ccall f_10467(C_word c,C_word *av) C_noret;
C_noret_decl(f_10456)
static void C_ccall f_10456(C_word c,C_word *av) C_noret;
C_noret_decl(f_10438)
static void C_ccall f_10438(C_word c,C_word *av) C_noret;
C_noret_decl(f_6448)
static void C_ccall f_6448(C_word c,C_word *av) C_noret;
C_noret_decl(f_5343)
static void C_fcall f_5343(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6460)
static void C_ccall f_6460(C_word c,C_word *av) C_noret;
C_noret_decl(f_3955)
static void C_fcall f_3955(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5109)
static void C_fcall f_5109(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11023)
static void C_ccall f_11023(C_word c,C_word *av) C_noret;
C_noret_decl(f_11475)
static void C_ccall f_11475(C_word c,C_word *av) C_noret;
C_noret_decl(f_11472)
static void C_ccall f_11472(C_word c,C_word *av) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_11488)
static void C_ccall f_11488(C_word c,C_word *av) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word *av) C_noret;
C_noret_decl(f_5304)
static void C_fcall f_5304(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5301)
static void C_fcall f_5301(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word *av) C_noret;
C_noret_decl(f_11494)
static void C_ccall f_11494(C_word c,C_word *av) C_noret;
C_noret_decl(f_11490)
static void C_ccall f_11490(C_word c,C_word *av) C_noret;
C_noret_decl(f_11497)
static void C_ccall f_11497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4312)
static void C_fcall f_4312(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word *av) C_noret;
C_noret_decl(f_6112)
static void C_ccall f_6112(C_word c,C_word *av) C_noret;
C_noret_decl(f_6114)
static void C_fcall f_6114(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word *av) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word *av) C_noret;
C_noret_decl(f_10577)
static void C_fcall f_10577(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10575)
static void C_ccall f_10575(C_word c,C_word *av) C_noret;
C_noret_decl(f_4436)
static void C_fcall f_4436(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word *av) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word *av) C_noret;
C_noret_decl(f_11519)
static void C_ccall f_11519(C_word c,C_word *av) C_noret;
C_noret_decl(f_11516)
static void C_ccall f_11516(C_word c,C_word *av) C_noret;
C_noret_decl(f_11512)
static void C_ccall f_11512(C_word c,C_word *av) C_noret;
C_noret_decl(f_11510)
static void C_ccall f_11510(C_word c,C_word *av) C_noret;
C_noret_decl(f_6161)
static void C_fcall f_6161(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10939)
static void C_ccall f_10939(C_word c,C_word *av) C_noret;
C_noret_decl(f_10086)
static void C_ccall f_10086(C_word c,C_word *av) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word *av) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word *av) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_6109)
static void C_ccall f_6109(C_word c,C_word *av) C_noret;
C_noret_decl(f_7484)
static void C_ccall f_7484(C_word c,C_word *av) C_noret;
C_noret_decl(f_7480)
static void C_ccall f_7480(C_word c,C_word *av) C_noret;
C_noret_decl(f_6496)
static void C_ccall f_6496(C_word c,C_word *av) C_noret;
C_noret_decl(f_11559)
static void C_ccall f_11559(C_word c,C_word *av) C_noret;
C_noret_decl(f_10979)
static void C_ccall f_10979(C_word c,C_word *av) C_noret;
C_noret_decl(f_7457)
static void C_ccall f_7457(C_word c,C_word *av) C_noret;
C_noret_decl(f_8858)
static void C_ccall f_8858(C_word c,C_word *av) C_noret;
C_noret_decl(f_7451)
static void C_ccall f_7451(C_word c,C_word *av) C_noret;
C_noret_decl(f_10973)
static void C_ccall f_10973(C_word c,C_word *av) C_noret;
C_noret_decl(f_8854)
static void C_ccall f_8854(C_word c,C_word *av) C_noret;
C_noret_decl(f_4443)
static void C_ccall f_4443(C_word c,C_word *av) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word *av) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word *av) C_noret;
C_noret_decl(f_11549)
static void C_ccall f_11549(C_word c,C_word *av) C_noret;
C_noret_decl(f_10513)
static void C_ccall f_10513(C_word c,C_word *av) C_noret;
C_noret_decl(f_11546)
static void C_fcall f_11546(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11534)
static void C_ccall f_11534(C_word c,C_word *av) C_noret;
C_noret_decl(f_11532)
static void C_ccall f_11532(C_word c,C_word *av) C_noret;
C_noret_decl(f_11538)
static void C_ccall f_11538(C_word c,C_word *av) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word *av) C_noret;
C_noret_decl(f_10959)
static void C_fcall f_10959(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6267)
static void C_fcall f_6267(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10954)
static void C_ccall f_10954(C_word c,C_word *av) C_noret;
C_noret_decl(f_10951)
static void C_ccall f_10951(C_word c,C_word *av) C_noret;
C_noret_decl(f_4272)
static void C_fcall f_4272(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word *av) C_noret;
C_noret_decl(f_10021)
static void C_ccall f_10021(C_word c,C_word *av) C_noret;
C_noret_decl(f_10023)
static void C_fcall f_10023(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10948)
static void C_ccall f_10948(C_word c,C_word *av) C_noret;
C_noret_decl(f_10941)
static void C_ccall f_10941(C_word c,C_word *av) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word *av) C_noret;
C_noret_decl(f_4510)
static void C_fcall f_4510(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10992)
static void C_ccall f_10992(C_word c,C_word *av) C_noret;
C_noret_decl(f_10995)
static void C_ccall f_10995(C_word c,C_word *av) C_noret;
C_noret_decl(f_10998)
static void C_ccall f_10998(C_word c,C_word *av) C_noret;
C_noret_decl(f_9681)
static void C_ccall f_9681(C_word c,C_word *av) C_noret;
C_noret_decl(f_6185)
static void C_ccall f_6185(C_word c,C_word *av) C_noret;
C_noret_decl(f_10534)
static void C_fcall f_10534(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10982)
static void C_ccall f_10982(C_word c,C_word *av) C_noret;
C_noret_decl(f_10986)
static void C_ccall f_10986(C_word c,C_word *av) C_noret;
C_noret_decl(f_6175)
static void C_ccall f_6175(C_word c,C_word *av) C_noret;
C_noret_decl(f_11355)
static void C_ccall f_11355(C_word c,C_word *av) C_noret;
C_noret_decl(f_6293)
static void C_fcall f_6293(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4554)
static void C_fcall f_4554(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7466)
static void C_ccall f_7466(C_word c,C_word *av) C_noret;
C_noret_decl(f_7464)
static void C_ccall f_7464(C_word c,C_word *av) C_noret;
C_noret_decl(f_4367)
static void C_fcall f_4367(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word *av) C_noret;
C_noret_decl(f_9675)
static void C_ccall f_9675(C_word c,C_word *av) C_noret;
C_noret_decl(f_9678)
static void C_ccall f_9678(C_word c,C_word *av) C_noret;
C_noret_decl(f_9671)
static void C_ccall f_9671(C_word c,C_word *av) C_noret;
C_noret_decl(f_11336)
static void C_ccall f_11336(C_word c,C_word *av) C_noret;
C_noret_decl(f_4350)
static void C_fcall f_4350(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word *av) C_noret;
C_noret_decl(f_6766)
static void C_ccall f_6766(C_word c,C_word *av) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word *av) C_noret;
C_noret_decl(f_8576)
static void C_ccall f_8576(C_word c,C_word *av) C_noret;
C_noret_decl(f_9693)
static void C_ccall f_9693(C_word c,C_word *av) C_noret;
C_noret_decl(f_11313)
static void C_ccall f_11313(C_word c,C_word *av) C_noret;
C_noret_decl(f_11311)
static void C_ccall f_11311(C_word c,C_word *av) C_noret;
C_noret_decl(f_6797)
static void C_ccall f_6797(C_word c,C_word *av) C_noret;
C_noret_decl(f_6799)
static void C_fcall f_6799(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8589)
static void C_fcall f_8589(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word *av) C_noret;
C_noret_decl(f_6785)
static void C_ccall f_6785(C_word c,C_word *av) C_noret;
C_noret_decl(f_5671)
static void C_fcall f_5671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10704)
static void C_ccall f_10704(C_word c,C_word *av) C_noret;
C_noret_decl(f_9637)
static void C_ccall f_9637(C_word c,C_word *av) C_noret;
C_noret_decl(f_10737)
static void C_ccall f_10737(C_word c,C_word *av) C_noret;
C_noret_decl(f_10731)
static void C_ccall f_10731(C_word c,C_word *av) C_noret;
C_noret_decl(f_10734)
static void C_ccall f_10734(C_word c,C_word *av) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word *av) C_noret;
C_noret_decl(f_9600)
static void C_ccall f_9600(C_word c,C_word *av) C_noret;
C_noret_decl(f_9607)
static void C_ccall f_9607(C_word c,C_word *av) C_noret;
C_noret_decl(f_11365)
static void C_ccall f_11365(C_word c,C_word *av) C_noret;
C_noret_decl(f_11363)
static void C_ccall f_11363(C_word c,C_word *av) C_noret;
C_noret_decl(f_10716)
static void C_ccall f_10716(C_word c,C_word *av) C_noret;
C_noret_decl(f_9598)
static void C_ccall f_9598(C_word c,C_word *av) C_noret;
C_noret_decl(f_10714)
static void C_ccall f_10714(C_word c,C_word *av) C_noret;
C_noret_decl(f_11812)
static void C_ccall f_11812(C_word c,C_word *av) C_noret;
C_noret_decl(f_10740)
static void C_ccall f_10740(C_word c,C_word *av) C_noret;
C_noret_decl(f_11806)
static void C_ccall f_11806(C_word c,C_word *av) C_noret;
C_noret_decl(f_11808)
static void C_ccall f_11808(C_word c,C_word *av) C_noret;
C_noret_decl(f_6770)
static void C_ccall f_6770(C_word c,C_word *av) C_noret;
C_noret_decl(f_9577)
static void C_ccall f_9577(C_word c,C_word *av) C_noret;
C_noret_decl(f_10776)
static void C_ccall f_10776(C_word c,C_word *av) C_noret;
C_noret_decl(f_9574)
static void C_ccall f_9574(C_word c,C_word *av) C_noret;
C_noret_decl(f_10773)
static void C_ccall f_10773(C_word c,C_word *av) C_noret;
C_noret_decl(f_9570)
static void C_ccall f_9570(C_word c,C_word *av) C_noret;
C_noret_decl(f_6273)
static void C_fcall f_6273(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_10728)
static void C_ccall f_10728(C_word c,C_word *av) C_noret;
C_noret_decl(f_10720)
static void C_ccall f_10720(C_word c,C_word *av) C_noret;
C_noret_decl(f_11825)
static void C_ccall f_11825(C_word c,C_word *av) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word *av) C_noret;
C_noret_decl(f_11823)
static void C_ccall f_11823(C_word c,C_word *av) C_noret;
C_noret_decl(f_11829)
static void C_ccall f_11829(C_word c,C_word *av) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word *av) C_noret;
C_noret_decl(f_9616)
static void C_ccall f_9616(C_word c,C_word *av) C_noret;
C_noret_decl(f_9613)
static void C_ccall f_9613(C_word c,C_word *av) C_noret;
C_noret_decl(f_5972)
static void C_ccall f_5972(C_word c,C_word *av) C_noret;
C_noret_decl(f_10751)
static void C_ccall f_10751(C_word c,C_word *av) C_noret;
C_noret_decl(f_10753)
static void C_fcall f_10753(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3730)
static void C_fcall f_3730(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word *av) C_noret;
C_noret_decl(f_11857)
static void C_ccall f_11857(C_word c,C_word *av) C_noret;
C_noret_decl(f_9931)
static void C_ccall f_9931(C_word c,C_word *av) C_noret;
C_noret_decl(f_10780)
static void C_ccall f_10780(C_word c,C_word *av) C_noret;
C_noret_decl(f_10786)
static void C_ccall f_10786(C_word c,C_word *av) C_noret;
C_noret_decl(f_10789)
static void C_ccall f_10789(C_word c,C_word *av) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word *av) C_noret;
C_noret_decl(f_11859)
static void C_ccall f_11859(C_word c,C_word *av) C_noret;
C_noret_decl(f_11846)
static void C_ccall f_11846(C_word c,C_word *av) C_noret;
C_noret_decl(f_11842)
static void C_ccall f_11842(C_word c,C_word *av) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word *av) C_noret;
C_noret_decl(f_11840)
static void C_ccall f_11840(C_word c,C_word *av) C_noret;
C_noret_decl(f_8251)
static void C_ccall f_8251(C_word c,C_word *av) C_noret;
C_noret_decl(f_8256)
static void C_ccall f_8256(C_word c,C_word *av) C_noret;
C_noret_decl(f_11876)
static void C_ccall f_11876(C_word c,C_word *av) C_noret;
C_noret_decl(f_11874)
static void C_ccall f_11874(C_word c,C_word *av) C_noret;
C_noret_decl(f_9911)
static void C_ccall f_9911(C_word c,C_word *av) C_noret;
C_noret_decl(f_9543)
static void C_ccall f_9543(C_word c,C_word *av) C_noret;
C_noret_decl(f_9541)
static void C_ccall f_9541(C_word c,C_word *av) C_noret;
C_noret_decl(f_9547)
static void C_ccall f_9547(C_word c,C_word *av) C_noret;
C_noret_decl(f_10767)
static void C_ccall f_10767(C_word c,C_word *av) C_noret;
C_noret_decl(f_8260)
static void C_ccall f_8260(C_word c,C_word *av) C_noret;
C_noret_decl(f_8268)
static void C_ccall f_8268(C_word c,C_word *av) C_noret;
C_noret_decl(f_8264)
static void C_ccall f_8264(C_word c,C_word *av) C_noret;
C_noret_decl(f_11863)
static void C_ccall f_11863(C_word c,C_word *av) C_noret;
C_noret_decl(f_4384)
static void C_fcall f_4384(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8883)
static void C_ccall f_8883(C_word c,C_word *av) C_noret;
C_noret_decl(f_8889)
static void C_ccall f_8889(C_word c,C_word *av) C_noret;
C_noret_decl(f_10795)
static void C_ccall f_10795(C_word c,C_word *av) C_noret;
C_noret_decl(f_9511)
static void C_ccall f_9511(C_word c,C_word *av) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word *av) C_noret;
C_noret_decl(f_8275)
static void C_ccall f_8275(C_word c,C_word *av) C_noret;
C_noret_decl(f_8273)
static void C_ccall f_8273(C_word c,C_word *av) C_noret;
C_noret_decl(f_4491)
static void C_fcall f_4491(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9528)
static void C_ccall f_9528(C_word c,C_word *av) C_noret;
C_noret_decl(f_8281)
static void C_ccall f_8281(C_word c,C_word *av) C_noret;
C_noret_decl(f_9946)
static void C_ccall f_9946(C_word c,C_word *av) C_noret;
C_noret_decl(f_5213)
static void C_ccall f_5213(C_word c,C_word *av) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word *av) C_noret;
C_noret_decl(f_8213)
static void C_ccall f_8213(C_word c,C_word *av) C_noret;
C_noret_decl(f_8219)
static void C_ccall f_8219(C_word c,C_word *av) C_noret;
C_noret_decl(f_5893)
static void C_ccall f_5893(C_word c,C_word *av) C_noret;
C_noret_decl(f_5605)
static void C_fcall f_5605(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5896)
static void C_ccall f_5896(C_word c,C_word *av) C_noret;
C_noret_decl(f_9640)
static void C_ccall f_9640(C_word c,C_word *av) C_noret;
C_noret_decl(f_9505)
static void C_ccall f_9505(C_word c,C_word *av) C_noret;
C_noret_decl(f_8568)
static void C_ccall f_8568(C_word c,C_word *av) C_noret;
C_noret_decl(f_9501)
static void C_ccall f_9501(C_word c,C_word *av) C_noret;
C_noret_decl(f_8223)
static void C_ccall f_8223(C_word c,C_word *av) C_noret;
C_noret_decl(f_9507)
static void C_ccall f_9507(C_word c,C_word *av) C_noret;
C_noret_decl(f_8227)
static void C_ccall f_8227(C_word c,C_word *av) C_noret;

C_noret_decl(trf_9996)
static void C_ccall trf_9996(C_word c,C_word *av) C_noret;
static void C_ccall trf_9996(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9996(t0,t1,t2);}

C_noret_decl(trf_4578)
static void C_ccall trf_4578(C_word c,C_word *av) C_noret;
static void C_ccall trf_4578(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4578(t0,t1);}

C_noret_decl(trf_7701)
static void C_ccall trf_7701(C_word c,C_word *av) C_noret;
static void C_ccall trf_7701(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7701(t0,t1);}

C_noret_decl(trf_7709)
static void C_ccall trf_7709(C_word c,C_word *av) C_noret;
static void C_ccall trf_7709(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7709(t0,t1);}

C_noret_decl(trf_11698)
static void C_ccall trf_11698(C_word c,C_word *av) C_noret;
static void C_ccall trf_11698(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11698(t0,t1,t2);}

C_noret_decl(trf_5430)
static void C_ccall trf_5430(C_word c,C_word *av) C_noret;
static void C_ccall trf_5430(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5430(t0,t1);}

C_noret_decl(trf_7535)
static void C_ccall trf_7535(C_word c,C_word *av) C_noret;
static void C_ccall trf_7535(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7535(t0,t1,t2);}

C_noret_decl(trf_6746)
static void C_ccall trf_6746(C_word c,C_word *av) C_noret;
static void C_ccall trf_6746(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6746(t0,t1,t2);}

C_noret_decl(trf_3666)
static void C_ccall trf_3666(C_word c,C_word *av) C_noret;
static void C_ccall trf_3666(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3666(t0,t1,t2);}

C_noret_decl(trf_3676)
static void C_ccall trf_3676(C_word c,C_word *av) C_noret;
static void C_ccall trf_3676(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3676(t0,t1);}

C_noret_decl(trf_6815)
static void C_ccall trf_6815(C_word c,C_word *av) C_noret;
static void C_ccall trf_6815(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6815(t0,t1,t2);}

C_noret_decl(trf_10190)
static void C_ccall trf_10190(C_word c,C_word *av) C_noret;
static void C_ccall trf_10190(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10190(t0,t1,t2,t3);}

C_noret_decl(trf_10679)
static void C_ccall trf_10679(C_word c,C_word *av) C_noret;
static void C_ccall trf_10679(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10679(t0,t1,t2);}

C_noret_decl(trf_7852)
static void C_ccall trf_7852(C_word c,C_word *av) C_noret;
static void C_ccall trf_7852(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7852(t0,t1,t2);}

C_noret_decl(trf_5174)
static void C_ccall trf_5174(C_word c,C_word *av) C_noret;
static void C_ccall trf_5174(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5174(t0,t1,t2);}

C_noret_decl(trf_4737)
static void C_ccall trf_4737(C_word c,C_word *av) C_noret;
static void C_ccall trf_4737(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4737(t0,t1,t2);}

C_noret_decl(trf_4733)
static void C_ccall trf_4733(C_word c,C_word *av) C_noret;
static void C_ccall trf_4733(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4733(t0,t1);}

C_noret_decl(trf_4626)
static void C_ccall trf_4626(C_word c,C_word *av) C_noret;
static void C_ccall trf_4626(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4626(t0,t1,t2);}

C_noret_decl(trf_7168)
static void C_ccall trf_7168(C_word c,C_word *av) C_noret;
static void C_ccall trf_7168(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7168(t0,t1,t2,t3);}

C_noret_decl(trf_7163)
static void C_ccall trf_7163(C_word c,C_word *av) C_noret;
static void C_ccall trf_7163(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7163(t0,t1);}

C_noret_decl(trf_10627)
static void C_ccall trf_10627(C_word c,C_word *av) C_noret;
static void C_ccall trf_10627(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10627(t0,t1,t2);}

C_noret_decl(trf_4981)
static void C_ccall trf_4981(C_word c,C_word *av) C_noret;
static void C_ccall trf_4981(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4981(t0,t1);}

C_noret_decl(trf_10602)
static void C_ccall trf_10602(C_word c,C_word *av) C_noret;
static void C_ccall trf_10602(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10602(t0,t1);}

C_noret_decl(trf_9850)
static void C_ccall trf_9850(C_word c,C_word *av) C_noret;
static void C_ccall trf_9850(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9850(t0,t1,t2);}

C_noret_decl(trf_6585)
static void C_ccall trf_6585(C_word c,C_word *av) C_noret;
static void C_ccall trf_6585(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6585(t0,t1,t2,t3);}

C_noret_decl(trf_6582)
static void C_ccall trf_6582(C_word c,C_word *av) C_noret;
static void C_ccall trf_6582(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6582(t0,t1,t2,t3);}

C_noret_decl(trf_4824)
static void C_ccall trf_4824(C_word c,C_word *av) C_noret;
static void C_ccall trf_4824(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4824(t0,t1,t2);}

C_noret_decl(trf_6667)
static void C_ccall trf_6667(C_word c,C_word *av) C_noret;
static void C_ccall trf_6667(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6667(t0,t1,t2,t3);}

C_noret_decl(trf_9860)
static void C_ccall trf_9860(C_word c,C_word *av) C_noret;
static void C_ccall trf_9860(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9860(t0,t1,t2);}

C_noret_decl(trf_4695)
static void C_ccall trf_4695(C_word c,C_word *av) C_noret;
static void C_ccall trf_4695(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4695(t0,t1,t2);}

C_noret_decl(trf_9329)
static void C_ccall trf_9329(C_word c,C_word *av) C_noret;
static void C_ccall trf_9329(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9329(t0,t1,t2);}

C_noret_decl(trf_6001)
static void C_ccall trf_6001(C_word c,C_word *av) C_noret;
static void C_ccall trf_6001(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6001(t0,t1,t2);}

C_noret_decl(trf_10834)
static void C_ccall trf_10834(C_word c,C_word *av) C_noret;
static void C_ccall trf_10834(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10834(t0,t1);}

C_noret_decl(trf_3829)
static void C_ccall trf_3829(C_word c,C_word *av) C_noret;
static void C_ccall trf_3829(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3829(t0,t1,t2);}

C_noret_decl(trf_10891)
static void C_ccall trf_10891(C_word c,C_word *av) C_noret;
static void C_ccall trf_10891(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10891(t0,t1,t2);}

C_noret_decl(trf_7062)
static void C_ccall trf_7062(C_word c,C_word *av) C_noret;
static void C_ccall trf_7062(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7062(t0,t1,t2);}

C_noret_decl(trf_10397)
static void C_ccall trf_10397(C_word c,C_word *av) C_noret;
static void C_ccall trf_10397(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10397(t0,t1,t2);}

C_noret_decl(trf_10371)
static void C_ccall trf_10371(C_word c,C_word *av) C_noret;
static void C_ccall trf_10371(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10371(t0,t1,t2);}

C_noret_decl(trf_4879)
static void C_ccall trf_4879(C_word c,C_word *av) C_noret;
static void C_ccall trf_4879(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4879(t0,t1,t2);}

C_noret_decl(trf_9372)
static void C_ccall trf_9372(C_word c,C_word *av) C_noret;
static void C_ccall trf_9372(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9372(t0,t1,t2);}

C_noret_decl(trf_4898)
static void C_ccall trf_4898(C_word c,C_word *av) C_noret;
static void C_ccall trf_4898(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4898(t0,t1);}

C_noret_decl(trf_6035)
static void C_ccall trf_6035(C_word c,C_word *av) C_noret;
static void C_ccall trf_6035(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6035(t0,t1,t2,t3);}

C_noret_decl(trf_6077)
static void C_ccall trf_6077(C_word c,C_word *av) C_noret;
static void C_ccall trf_6077(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6077(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8382)
static void C_ccall trf_8382(C_word c,C_word *av) C_noret;
static void C_ccall trf_8382(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8382(t0,t1);}

C_noret_decl(trf_10363)
static void C_ccall trf_10363(C_word c,C_word *av) C_noret;
static void C_ccall trf_10363(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10363(t0,t1,t2);}

C_noret_decl(trf_7011)
static void C_ccall trf_7011(C_word c,C_word *av) C_noret;
static void C_ccall trf_7011(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7011(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8333)
static void C_ccall trf_8333(C_word c,C_word *av) C_noret;
static void C_ccall trf_8333(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8333(t0,t1,t2);}

C_noret_decl(trf_4004)
static void C_ccall trf_4004(C_word c,C_word *av) C_noret;
static void C_ccall trf_4004(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4004(t0,t1,t2);}

C_noret_decl(trf_7649)
static void C_ccall trf_7649(C_word c,C_word *av) C_noret;
static void C_ccall trf_7649(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7649(t0,t1,t2,t3);}

C_noret_decl(trf_5946)
static void C_ccall trf_5946(C_word c,C_word *av) C_noret;
static void C_ccall trf_5946(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5946(t0,t1);}

C_noret_decl(trf_5939)
static void C_ccall trf_5939(C_word c,C_word *av) C_noret;
static void C_ccall trf_5939(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5939(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5820)
static void C_ccall trf_5820(C_word c,C_word *av) C_noret;
static void C_ccall trf_5820(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5820(t0,t1);}

C_noret_decl(trf_7023)
static void C_ccall trf_7023(C_word c,C_word *av) C_noret;
static void C_ccall trf_7023(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7023(t0,t1,t2);}

C_noret_decl(trf_3907)
static void C_ccall trf_3907(C_word c,C_word *av) C_noret;
static void C_ccall trf_3907(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3907(t0,t1,t2,t3);}

C_noret_decl(trf_8952)
static void C_ccall trf_8952(C_word c,C_word *av) C_noret;
static void C_ccall trf_8952(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8952(t0,t1);}

C_noret_decl(trf_5801)
static void C_ccall trf_5801(C_word c,C_word *av) C_noret;
static void C_ccall trf_5801(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5801(t0,t1,t2,t3);}

C_noret_decl(trf_6912)
static void C_ccall trf_6912(C_word c,C_word *av) C_noret;
static void C_ccall trf_6912(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6912(t0,t1,t2);}

C_noret_decl(trf_5267)
static void C_ccall trf_5267(C_word c,C_word *av) C_noret;
static void C_ccall trf_5267(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5267(t0,t1);}

C_noret_decl(trf_5254)
static void C_ccall trf_5254(C_word c,C_word *av) C_noret;
static void C_ccall trf_5254(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5254(t0,t1);}

C_noret_decl(trf_6087)
static void C_ccall trf_6087(C_word c,C_word *av) C_noret;
static void C_ccall trf_6087(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6087(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10200)
static void C_ccall trf_10200(C_word c,C_word *av) C_noret;
static void C_ccall trf_10200(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10200(t0,t1,t2,t3);}

C_noret_decl(trf_9722)
static void C_ccall trf_9722(C_word c,C_word *av) C_noret;
static void C_ccall trf_9722(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9722(t0,t1);}

C_noret_decl(trf_4047)
static void C_ccall trf_4047(C_word c,C_word *av) C_noret;
static void C_ccall trf_4047(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4047(t0,t1,t2);}

C_noret_decl(trf_4063)
static void C_ccall trf_4063(C_word c,C_word *av) C_noret;
static void C_ccall trf_4063(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4063(t0,t1,t2);}

C_noret_decl(trf_4097)
static void C_ccall trf_4097(C_word c,C_word *av) C_noret;
static void C_ccall trf_4097(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4097(t0,t1);}

C_noret_decl(trf_4081)
static void C_ccall trf_4081(C_word c,C_word *av) C_noret;
static void C_ccall trf_4081(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4081(t0,t1,t2);}

C_noret_decl(trf_4923)
static void C_ccall trf_4923(C_word c,C_word *av) C_noret;
static void C_ccall trf_4923(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4923(t0,t1,t2);}

C_noret_decl(trf_4969)
static void C_ccall trf_4969(C_word c,C_word *av) C_noret;
static void C_ccall trf_4969(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4969(t0,t1);}

C_noret_decl(trf_8978)
static void C_ccall trf_8978(C_word c,C_word *av) C_noret;
static void C_ccall trf_8978(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8978(t0,t1,t2,t3);}

C_noret_decl(trf_4951)
static void C_ccall trf_4951(C_word c,C_word *av) C_noret;
static void C_ccall trf_4951(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_4951(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8999)
static void C_ccall trf_8999(C_word c,C_word *av) C_noret;
static void C_ccall trf_8999(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8999(t0,t1);}

C_noret_decl(trf_8058)
static void C_ccall trf_8058(C_word c,C_word *av) C_noret;
static void C_ccall trf_8058(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8058(t0,t1);}

C_noret_decl(trf_5789)
static void C_ccall trf_5789(C_word c,C_word *av) C_noret;
static void C_ccall trf_5789(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_5789(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8045)
static void C_ccall trf_8045(C_word c,C_word *av) C_noret;
static void C_ccall trf_8045(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8045(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9455)
static void C_ccall trf_9455(C_word c,C_word *av) C_noret;
static void C_ccall trf_9455(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9455(t0,t1,t2);}

C_noret_decl(trf_9414)
static void C_ccall trf_9414(C_word c,C_word *av) C_noret;
static void C_ccall trf_9414(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9414(t0,t1,t2);}

C_noret_decl(trf_6316)
static void C_ccall trf_6316(C_word c,C_word *av) C_noret;
static void C_ccall trf_6316(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6316(t0,t1,t2);}

C_noret_decl(trf_7139)
static void C_ccall trf_7139(C_word c,C_word *av) C_noret;
static void C_ccall trf_7139(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7139(t0,t1);}

C_noret_decl(trf_7144)
static void C_ccall trf_7144(C_word c,C_word *av) C_noret;
static void C_ccall trf_7144(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7144(t0,t1,t2,t3);}

C_noret_decl(trf_8039)
static void C_ccall trf_8039(C_word c,C_word *av) C_noret;
static void C_ccall trf_8039(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8039(t0,t1,t2,t3);}

C_noret_decl(trf_5343)
static void C_ccall trf_5343(C_word c,C_word *av) C_noret;
static void C_ccall trf_5343(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5343(t0,t1);}

C_noret_decl(trf_3955)
static void C_ccall trf_3955(C_word c,C_word *av) C_noret;
static void C_ccall trf_3955(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3955(t0,t1,t2,t3);}

C_noret_decl(trf_5109)
static void C_ccall trf_5109(C_word c,C_word *av) C_noret;
static void C_ccall trf_5109(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5109(t0,t1,t2);}

C_noret_decl(trf_5304)
static void C_ccall trf_5304(C_word c,C_word *av) C_noret;
static void C_ccall trf_5304(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5304(t0,t1);}

C_noret_decl(trf_5301)
static void C_ccall trf_5301(C_word c,C_word *av) C_noret;
static void C_ccall trf_5301(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5301(t0,t1);}

C_noret_decl(trf_4312)
static void C_ccall trf_4312(C_word c,C_word *av) C_noret;
static void C_ccall trf_4312(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_4312(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6114)
static void C_ccall trf_6114(C_word c,C_word *av) C_noret;
static void C_ccall trf_6114(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6114(t0,t1,t2);}

C_noret_decl(trf_10577)
static void C_ccall trf_10577(C_word c,C_word *av) C_noret;
static void C_ccall trf_10577(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10577(t0,t1,t2);}

C_noret_decl(trf_4436)
static void C_ccall trf_4436(C_word c,C_word *av) C_noret;
static void C_ccall trf_4436(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4436(t0,t1);}

C_noret_decl(trf_6161)
static void C_ccall trf_6161(C_word c,C_word *av) C_noret;
static void C_ccall trf_6161(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6161(t0,t1);}

C_noret_decl(trf_11546)
static void C_ccall trf_11546(C_word c,C_word *av) C_noret;
static void C_ccall trf_11546(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11546(t0,t1);}

C_noret_decl(trf_10959)
static void C_ccall trf_10959(C_word c,C_word *av) C_noret;
static void C_ccall trf_10959(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10959(t0,t1,t2,t3);}

C_noret_decl(trf_6267)
static void C_ccall trf_6267(C_word c,C_word *av) C_noret;
static void C_ccall trf_6267(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6267(t0,t1,t2);}

C_noret_decl(trf_4272)
static void C_ccall trf_4272(C_word c,C_word *av) C_noret;
static void C_ccall trf_4272(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4272(t0,t1,t2);}

C_noret_decl(trf_10023)
static void C_ccall trf_10023(C_word c,C_word *av) C_noret;
static void C_ccall trf_10023(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10023(t0,t1,t2);}

C_noret_decl(trf_4510)
static void C_ccall trf_4510(C_word c,C_word *av) C_noret;
static void C_ccall trf_4510(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4510(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10534)
static void C_ccall trf_10534(C_word c,C_word *av) C_noret;
static void C_ccall trf_10534(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10534(t0,t1);}

C_noret_decl(trf_6293)
static void C_ccall trf_6293(C_word c,C_word *av) C_noret;
static void C_ccall trf_6293(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6293(t0,t1);}

C_noret_decl(trf_4554)
static void C_ccall trf_4554(C_word c,C_word *av) C_noret;
static void C_ccall trf_4554(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4554(t0,t1,t2);}

C_noret_decl(trf_4367)
static void C_ccall trf_4367(C_word c,C_word *av) C_noret;
static void C_ccall trf_4367(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4367(t0,t1,t2);}

C_noret_decl(trf_4350)
static void C_ccall trf_4350(C_word c,C_word *av) C_noret;
static void C_ccall trf_4350(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4350(t0,t1);}

C_noret_decl(trf_6799)
static void C_ccall trf_6799(C_word c,C_word *av) C_noret;
static void C_ccall trf_6799(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6799(t0,t1,t2);}

C_noret_decl(trf_8589)
static void C_ccall trf_8589(C_word c,C_word *av) C_noret;
static void C_ccall trf_8589(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8589(t0,t1);}

C_noret_decl(trf_5671)
static void C_ccall trf_5671(C_word c,C_word *av) C_noret;
static void C_ccall trf_5671(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5671(t0,t1,t2);}

C_noret_decl(trf_6273)
static void C_ccall trf_6273(C_word c,C_word *av) C_noret;
static void C_ccall trf_6273(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6273(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_10753)
static void C_ccall trf_10753(C_word c,C_word *av) C_noret;
static void C_ccall trf_10753(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10753(t0,t1,t2,t3);}

C_noret_decl(trf_3730)
static void C_ccall trf_3730(C_word c,C_word *av) C_noret;
static void C_ccall trf_3730(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3730(t0,t1,t2);}

C_noret_decl(trf_4384)
static void C_ccall trf_4384(C_word c,C_word *av) C_noret;
static void C_ccall trf_4384(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4384(t0,t1);}

C_noret_decl(trf_4491)
static void C_ccall trf_4491(C_word c,C_word *av) C_noret;
static void C_ccall trf_4491(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4491(t0,t1,t2);}

C_noret_decl(trf_5605)
static void C_ccall trf_5605(C_word c,C_word *av) C_noret;
static void C_ccall trf_5605(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5605(t0,t1,t2,t3);}

/* k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_8231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8231,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8235,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[2],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:87: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[55];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_8235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8235,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8239,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[2],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:88: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[88];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in ... */
static void C_ccall f_8239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8239,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[203]);
t4=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8244,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[2],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:90: r */
t5=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[221];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4597 in k4585 in k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_4599,2,av);}
a=C_alloc(19);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(t3,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4695,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4695(t13,t9,t3);}

/* k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in ... */
static void C_ccall f_8244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8244,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[204]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,lf[205]);
t5=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8251,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[28],a[26]=((C_word*)t0)[29],a[27]=((C_word*)t0)[30],a[28]=((C_word*)t0)[31],a[29]=((C_word*)t0)[32],a[30]=((C_word*)t0)[33],a[31]=((C_word*)t0)[34],a[32]=((C_word*)t0)[35],a[33]=((C_word*)t0)[36],a[34]=((C_word*)t0)[37],a[35]=((C_word*)t0)[38],a[36]=((C_word*)t0)[39],a[37]=((C_word*)t0)[40],a[38]=((C_word*)t0)[41],a[39]=((C_word*)t0)[2],a[40]=((C_word*)t0)[42],a[41]=((C_word*)t0)[3],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[4],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:94: r */
t6=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[220];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* g1540 in k7762 in k7707 in k7699 in compare in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static C_word C_fcall f_7749(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
return(C_eqp(t2,((C_word*)t0)[2]));}

/* a4477 in tmp13064 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4478,2,av);}
/* expand.scm:238: handler */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* a4472 in tmp13064 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4473,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate2((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* expand in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_fcall f_9996(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9996,3,t0,t1,t2);}
a=C_alloc(16);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10021,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10023,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li141),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_10023(t13,t9,((C_word*)t0)[2]);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
if(C_truep(C_i_pairp(t5))){
t8=C_i_car(t5);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10086,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=t9,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1406: c */
t11=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t11;
av2[1]=t10;
av2[2]=t9;
av2[3]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t11))(4,av2);}}
else{
/* expand.scm:1404: err */
t8=((C_word*)((C_word*)t0)[7])[1];
f_9850(t8,t1,t5);}}
else{
/* expand.scm:1399: err */
t4=((C_word*)((C_word*)t0)[7])[1];
f_9850(t4,t1,t2);}}}

/* k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4578(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,6)))){
C_save_and_reclaim_args((void *)trf_4578,2,t0,t1);}
a=C_alloc(9);
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[50]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4587,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:275: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);{
C_word av2[7];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[55];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[57];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4733,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[11])){
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t4=((C_word*)((C_word*)t0)[2])[1];
t5=t3;
f_4733(t5,C_i_getprop(t4,lf[59],C_SCHEME_FALSE));}
else{
t4=t3;
f_4733(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4733(t4,C_SCHEME_FALSE);}}}

/* a8807 in k8777 */
static void C_ccall f_8808(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8808,3,av);}
a=C_alloc(21);
t3=C_eqp(((C_word*)((C_word*)t0)[2])[1],t2);
if(C_truep(t3)){
/* synrules.scm:184: mapit */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t4=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],t4,t2);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],t5,((C_word*)t0)[4]);
/* synrules.scm:184: mapit */
t7=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}

/* k9971 in k9929 in k9891 in test in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9973,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9980,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* expand.scm:1392: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9860(t4,t2,t3);}
else{
/* expand.scm:1393: err */
t2=((C_word*)((C_word*)t0)[5])[1];
f_9850(t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k7699 in compare in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7701(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_7701,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_i_getprop(t3,lf[5],C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7709,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_7709(t6,t4);}
else{
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[4];
t8=(
  /* expand.scm:868: lookup */
  f_3649(t6,t7)
);
if(C_truep(t8)){
t9=t5;
f_7709(t9,t8);}
else{
t9=((C_word*)t0)[2];
t10=t5;
f_7709(t10,t9);}}}

/* k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in ... */
static void C_ccall f_8204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8204,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8208,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:78: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[227];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k7707 in k7699 in compare in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7709(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7709,2,t0,t1);}
a=C_alloc(5);
t2=t1;
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
if(C_truep(C_i_symbolp(t2))){
t3=C_i_getprop(((C_word*)t0)[2],lf[180],C_SCHEME_FALSE);
t4=(C_truep(t3)?t3:((C_word*)t0)[2]);
t5=C_i_getprop(t2,lf[180],C_SCHEME_FALSE);
t6=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(t5)?C_eqp(t4,t5):C_eqp(t4,t2));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7764,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:856: ##sys#macro-environment */
t4=*((C_word*)lf[19]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7792,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:860: ##sys#macro-environment */
t4=*((C_word*)lf[19]+1);{
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

/* k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in ... */
static void C_ccall f_8208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8208,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[200]);
t4=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8213,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[25],a[24]=((C_word*)t0)[26],a[25]=((C_word*)t0)[27],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[3],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:80: r */
t5=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[226];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k9548 in k9545 in a9542 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9550,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9553,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* expand.scm:1518: ##sys#add-to-export-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[240]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[240]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[239];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9551 in k9548 in k9545 in a9542 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in ... */
static void C_ccall f_9553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9553,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[239];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_8749 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_8749(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_8749,6,av);}
a=C_alloc(13);
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8773,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* synrules.scm:174: mapit */
t7=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8779,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* synrules.scm:175: segment-pattern? */
t7=((C_word*)((C_word*)t0)[10])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k9558 in a9542 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_9560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9560,2,av);}
/* expand.scm:1513: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[242]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[242]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[238];
tp(4,av2);}}

/* k9566 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_ccall f_9568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9568,2,av);}
/* expand.scm:1498: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
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

/* k9978 in k9971 in k9929 in k9891 in test in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in ... */
static void C_ccall f_9980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9980,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_not(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8509 in k8473 */
static void C_ccall f_8511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_8511,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8517 in k8513 in k8473 */
static void C_ccall f_8519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8519,2,av);}
/* expand.scm:1524: ##sys#append */
t2=*((C_word*)lf[70]+1);{
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

/* k8513 in k8473 */
static void C_ccall f_8515(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8515,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8519,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* synrules.scm:142: process-match */
t7=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t6;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t7))(5,av2);}}

/* k8703 in k8624 */
static void C_ccall f_8705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8705,2,av);}
a=C_alloc(43);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8681,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[14])[1]);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[15])[1],((C_word*)((C_word*)t0)[16])[1],C_fix(-1));
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],t5,t6);
t8=C_a_i_list(&a,1,t7);
/* synrules.scm:61: ##sys#append */
t9=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t4;
av2[2]=((C_word*)t0)[17];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in ... */
static void C_ccall f_10178(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10178,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10182,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1295: r */
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[276];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k10174 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in ... */
static void C_ccall f_10176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10176,2,av);}
/* expand.scm:1290: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
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

/* k6709 in expand-curried-define in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6711,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,lf[101],((C_word*)((C_word*)t0)[3])[1],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* syntax-error in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_6719,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6727,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:649: ##sys#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11689(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11689,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11693,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:992: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[345];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11685 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11687,2,av);}
/* expand.scm:987: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[101];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_11693,2,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11698,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li172),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_11698(t5,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* loop in k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_11698(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_11698,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_cadr(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
if(C_truep(C_i_pairp(t4))){
t8=C_i_car(t4);
if(C_truep(C_i_pairp(t8))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11761,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1006: ##sys#check-syntax */
t10=*((C_word*)lf[54]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[341];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11771,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1009: ##sys#check-syntax */
t10=*((C_word*)lf[54]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[342];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}
else{
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11713,a[2]=t4,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:997: ##sys#check-syntax */
t9=*((C_word*)lf[54]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[344];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}

/* k5428 in k5252 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5430(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_5430,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
switch(t2){
case C_fix(0):
/* expand.scm:426: err */
t3=((C_word*)t0)[3];
f_4923(t3,((C_word*)t0)[4],lf[82]);
case C_fix(1):
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
/* expand.scm:427: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4951(t4,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[8],t3,C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);
case C_fix(2):
/* expand.scm:428: err */
t3=((C_word*)t0)[3];
f_4923(t3,((C_word*)t0)[4],lf[83]);
default:
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[10]);
/* expand.scm:429: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4951(t4,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[8],((C_word*)t0)[6],t3,((C_word*)t0)[9]);}}
else{
/* expand.scm:430: err */
t2=((C_word*)t0)[3];
f_4923(t2,((C_word*)t0)[4],lf[84]);}}

/* k6725 in syntax-error in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6727,2,av);}{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[121]+1);
av2[3]=lf[122];
av2[4]=t1;
C_apply(5,av2);}}

/* k10100 in k10084 in expand in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_10102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10102,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[104],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* expand.scm:1412: expand */
t2=((C_word*)((C_word*)t0)[4])[1];
f_9996(t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k6739 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6741(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6741,2,av);}
a=C_alloc(6);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6746,a[2]=t4,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6746(t6,((C_word*)t0)[2],t2);}

/* g1452 in rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7535(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7535,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_symbolp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=t2;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:823: macro-alias */
f_3666(t3,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* loop in k6739 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6746(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6746,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
t4=C_eqp(lf[138],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6766,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:659: cadar */
t6=*((C_word*)lf[68]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* expand.scm:660: loop */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* k11130 in k11127 in k11087 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_11132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_11132,2,av);}
a=C_alloc(34);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,t3);
t5=t4;
t6=C_i_cadr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,3,lf[214],t6,t2);
t8=t7;
t9=C_i_cadddr(((C_word*)t0)[2]);
t10=C_a_i_list(&a,3,lf[214],t9,t2);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11159,a[2]=t8,a[3]=t11,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1201: expand */
t13=((C_word*)((C_word*)t0)[4])[1];
f_10959(t13,t12,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k7499 in rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7501,2,av);}
/* expand.scm:810: list->vector */
t2=*((C_word*)lf[178]+1);{
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

/* k7503 in rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7505,2,av);}
/* expand.scm:810: rename */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_7466(3,av2);}}

/* macro-alias in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_3666(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3666,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3673,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:85: ##sys#qualified-symbol? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k8777 */
static void C_ccall f_8779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_8779,2,av);}
a=C_alloc(25);
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_i_length(t2);
t4=t3;
t5=C_eqp(t4,C_fix(0));
t6=(C_truep(t5)?((C_word*)t0)[3]:C_a_i_list(&a,3,lf[210],((C_word*)t0)[3],t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8792,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t9=((C_word*)t0)[2];
t10=C_u_i_car(t9);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8808,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=t7,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word)li115),tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:181: process-pattern */
t12=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t12;
av2[1]=t8;
av2[2]=t10;
av2[3]=((C_word*)((C_word*)t0)[7])[1];
av2[4]=t11;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t12))(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8854,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[11])[1],((C_word*)t0)[3]);
/* synrules.scm:192: process-pattern */
t6=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=t4;
av2[3]=t5;
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t6))(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8883,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:195: vector->list */
t3=*((C_word*)lf[179]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* f_8622 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_8622(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8622,4,av);}
a=C_alloc(25);
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_8626,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=t1,a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[15],tmp=(C_word)a,a+=19,tmp);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[16])[1],((C_word*)((C_word*)t0)[6])[1]);
t6=C_i_car(t3);
/* synrules.scm:154: process-match */
t7=((C_word*)((C_word*)t0)[15])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t7))(5,av2);}}

/* k11184 in k11127 in k11087 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_11186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11186,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[292],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8771 */
static void C_ccall f_8773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8773,2,av);}
a=C_alloc(9);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list1(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8624 */
static void C_ccall f_8626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_8626,2,av);}
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
t23=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_8705,a[2]=t22,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=t16,a[9]=t12,a[10]=t8,a[11]=t4,a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[5],a[17]=t2,tmp=(C_word)a,a+=18,tmp);
t24=((C_word*)t0)[6];
t25=C_u_i_cdr(t24);
t26=C_u_i_cdr(t25);
/* synrules.scm:162: process-match */
t27=((C_word*)((C_word*)t0)[18])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t27;
av2[1]=t23;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
av2[3]=t26;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t27))(5,av2);}}

/* k7554 in g1452 in rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7556,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9228 in k9198 */
static void C_ccall f_9230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9230,2,av);}
/* synrules.scm:276: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k10154 in k10147 in a10144 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_10156(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10156,2,av);}
a=C_alloc(30);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_list(&a,3,lf[93],t3,lf[274]);
t5=C_a_i_list(&a,2,lf[271],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,2,t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k11394 in a11364 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in ... */
static void C_ccall f_11396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_11396,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[292],((C_word*)t0)[4],t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11157 in k11130 in k11127 in k11087 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_11159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_11159,2,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,4,lf[309],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,3,lf[72],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[93],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6730(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6730,4,av);}
a=C_alloc(5);
if(C_truep(C_i_nullp(*((C_word*)lf[119]+1)))){
/* expand.scm:662: ##sys#syntax-error-hook */
t4=*((C_word*)lf[41]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6797,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:663: open-output-string */
t5=*((C_word*)lf[141]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5581 in k5559 in k5540 in k5537 in a5534 in expand-multiple-values-assignment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5583,2,av);}
a=C_alloc(12);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
/* expand.scm:450: ##sys#append */
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=lf[94];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
/* expand.scm:450: ##sys#append */
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_a_i_list(&a,3,lf[95],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
/* expand.scm:450: ##sys#append */
t4=*((C_word*)lf[70]+1);{
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
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* k5559 in k5540 in k5537 in a5534 in expand-multiple-values-assignment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_5561,2,av);}
a=C_alloc(24);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5565,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=((C_word*)t0)[4];
t9=C_i_check_list_2(t8,lf[16]);
t10=C_i_check_list_2(((C_word*)t0)[5],lf[16]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5583,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5605,a[2]=t6,a[3]=t13,a[4]=t7,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_5605(t15,t11,t8,((C_word*)t0)[5]);}

/* k6804 in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6806,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:700: get-output-string */
t3=*((C_word*)lf[125]+1);{
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

/* k9243 in k9198 */
static void C_ccall f_9245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9245,2,av);}
/* synrules.scm:281: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* f_9247 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_9247(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9247,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9254,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:285: segment-template? */
t5=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k10147 in a10144 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_ccall f_10149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10149,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1348: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[270];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k8794 in k8790 in k8777 */
static void C_ccall f_8796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8796,2,av);}
/* synrules.scm:180: append */
t2=*((C_word*)lf[15]+1);{
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

/* k10141 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in ... */
static void C_ccall f_10143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10143,2,av);}
/* expand.scm:1342: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[273];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10144 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in ... */
static void C_ccall f_10145(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10145,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10149,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1347: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[273];
av2[3]=t2;
av2[4]=lf[275];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8790 in k8777 */
static void C_ccall f_8792(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8792,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8796,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cddr(((C_word*)t0)[3]);
t5=C_a_i_list(&a,3,lf[211],((C_word*)t0)[4],((C_word*)t0)[5]);
/* synrules.scm:189: process-pattern */
t6=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=((C_word*)t0)[7];
av2[5]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t6))(6,av2);}}

/* k11127 in k11087 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11129,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1194: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[77];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[104],t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11186,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1204: expand */
t8=((C_word*)((C_word*)t0)[4])[1];
f_10959(t8,t7,((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* k3674 in k3671 in macro-alias in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_3676(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3676,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:91: gensym */
t3=*((C_word*)lf[8]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k3671 in macro-alias in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3673,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_3676(t3,t1);}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_block_size(t3);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t5=C_subchar(t3,C_fix(0));
t6=t2;
f_3676(t6,C_i_char_equalp(C_make_character(35),t5));}
else{
t5=t2;
f_3676(t5,C_SCHEME_FALSE);}}}

/* k6811 in k6804 in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6813,2,av);}
/* expand.scm:700: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);{
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

/* loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6815(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6815,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6825,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:668: outstr */
t4=((C_word*)t0)[2];
f_6799(t4,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6851,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(t2);
/* expand.scm:675: ##sys#strip-syntax */
t5=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k9252 */
static void C_ccall f_9254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9254,2,av);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
/* synrules.scm:288: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[215];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* synrules.scm:290: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[216];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_11014(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11014,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11066,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1176: strip-syntax */
t5=*((C_word*)lf[10]+1);{
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
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11083,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1184: expand */
t5=((C_word*)((C_word*)t0)[6])[1];
f_10959(t5,t4,((C_word*)t0)[7],C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=C_i_length(((C_word*)t0)[2]);
t5=C_eqp(t4,C_fix(3));
if(C_truep(t5)){
t6=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1186: c */
t7=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_11089(2,av2);}}}}}

/* k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_ccall f_11011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_11011,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
f_11014(2,av2);}}
else{
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_eqp(C_SCHEME_TRUE,t3);
if(C_truep(t4)){
t5=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
f_11014(2,av2);}}
else{
t5=C_u_i_car(((C_word*)t0)[2]);
t6=C_i_numberp(t5);
if(C_truep(t6)){
t7=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
f_11014(2,av2);}}
else{
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_charp(t7);
if(C_truep(t8)){
t9=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
f_11014(2,av2);}}
else{
t9=C_u_i_car(((C_word*)t0)[2]);
t10=C_i_stringp(t9);
if(C_truep(t10)){
t11=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t10;
f_11014(2,av2);}}
else{
t11=C_u_i_car(((C_word*)t0)[2]);
t12=C_eofp(t11);
if(C_truep(t12)){
t13=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t12;
f_11014(2,av2);}}
else{
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11249,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t14=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1171: blob? */
t15=*((C_word*)lf[311]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}}}}}}}

/* k11015 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_11017(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11017,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
t5=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1178: c */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t5=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_11023(2,av2);}}}

/* k5563 in k5559 in k5540 in k5537 in a5534 in expand-multiple-values-assignment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_5565,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[72],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[93],((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3677 in k3674 in k3671 in macro-alias in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_3679,2,av);}
a=C_alloc(16);
t2=(
  /* expand.scm:92: lookup */
  f_3649(((C_word*)t0)[2],((C_word*)t0)[3])
);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_i_getprop(t4,lf[7],C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_a_i_putprop(&a,3,t1,lf[5],t3);
t7=C_a_i_putprop(&a,3,t1,lf[7],t5);
t8=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=((C_word*)t0)[2];
t7=C_a_i_putprop(&a,3,t1,lf[5],t3);
t8=C_a_i_putprop(&a,3,t1,lf[7],t6);
t9=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

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
else C_toplevel_entry(C_text("expand_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,3));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void*)C_expand_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(3225))){
C_save(t1);
C_rereclaim2(3225*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,357);
lf[0]=C_h_intern(&lf[0],12,"\003sysfeatures");
lf[1]=C_h_intern(&lf[1],23,"\003syscurrent-environment");
lf[2]=C_h_intern(&lf[2],28,"\003syscurrent-meta-environment");
lf[3]=C_h_intern(&lf[3],27,"\003sysactive-eval-environment");
lf[5]=C_h_intern(&lf[5],16,"\004coremacro-alias");
lf[7]=C_h_intern(&lf[7],14,"\004corereal-name");
lf[8]=C_h_intern(&lf[8],6,"gensym");
lf[9]=C_h_intern(&lf[9],21,"\003sysqualified-symbol\077");
lf[10]=C_h_intern(&lf[10],12,"strip-syntax");
lf[11]=C_h_intern(&lf[11],11,"make-vector");
lf[12]=C_h_intern(&lf[12],16,"\003sysstrip-syntax");
lf[13]=C_h_intern(&lf[13],13,"\003sysextend-se");
lf[14]=C_h_intern(&lf[14],8,"for-each");
lf[15]=C_h_intern(&lf[15],6,"append");
lf[16]=C_h_intern(&lf[16],3,"map");
lf[17]=C_h_intern(&lf[17],13,"\003sysglobalize");
lf[18]=C_h_intern(&lf[18],21,"\003sysalias-global-hook");
lf[19]=C_h_intern(&lf[19],21,"\003sysmacro-environment");
lf[20]=C_h_intern(&lf[20],29,"\003syschicken-macro-environment");
lf[21]=C_h_intern(&lf[21],33,"\003syschicken-ffi-macro-environment");
lf[22]=C_h_intern(&lf[22],22,"\003sysensure-transformer");
lf[23]=C_h_intern(&lf[23],18,"\003syser-transformer");
lf[24]=C_h_intern(&lf[24],11,"transformer");
lf[25]=C_h_intern(&lf[25],9,"\003syserror");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000$expected syntax-transformer, but got");
lf[27]=C_h_intern(&lf[27],28,"\003sysextend-macro-environment");
lf[28]=C_h_intern(&lf[28],14,"\003syscopy-macro");
lf[29]=C_h_intern(&lf[29],10,"\003sysmacro\077");
lf[30]=C_h_intern(&lf[30],20,"\003sysunregister-macro");
lf[31]=C_h_intern(&lf[31],19,"\003sysundefine-macro!");
lf[32]=C_h_intern(&lf[32],12,"\003sysexpand-0");
lf[33]=C_h_intern(&lf[33],9,"condition");
lf[34]=C_h_intern(&lf[34],9,"\003sysabort");
lf[35]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\007message");
lf[36]=C_h_intern(&lf[36],13,"string-append");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\025during expansion of (");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\010 ...) - ");
lf[39]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\001\000\000\007message");
lf[40]=C_h_intern(&lf[40],3,"exn");
lf[41]=C_h_intern(&lf[41],21,"\003syssyntax-error-hook");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\030syntax transformer for `");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000@\047 returns original form, which would result in endless expansion");
lf[44]=C_h_intern(&lf[44],14,"symbol->string");
lf[45]=C_h_intern(&lf[45],25,"\003syssyntax-rules-mismatch");
lf[46]=C_h_intern(&lf[46],16,"\003sysdynamic-wind");
lf[47]=C_h_intern(&lf[47],22,"with-exception-handler");
lf[48]=C_h_intern(&lf[48],30,"call-with-current-continuation");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid syntax in macro form");
lf[50]=C_h_intern(&lf[50],8,"\004corelet");
lf[51]=C_h_intern(&lf[51],16,"\004coreloop-lambda");
lf[52]=C_h_intern(&lf[52],12,"\004coreletrec\052");
lf[53]=C_h_intern(&lf[53],8,"\004coreapp");
lf[54]=C_h_intern(&lf[54],16,"\003syscheck-syntax");
lf[55]=C_h_intern(&lf[55],3,"let");
lf[56]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[57]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[58]=C_h_intern(&lf[58],24,"\003syscompiler-syntax-hook");
lf[59]=C_h_intern(&lf[59],24,"\010compilercompiler-syntax");
lf[60]=C_h_intern(&lf[60],25,"\003sysenable-runtime-macros");
lf[61]=C_h_intern(&lf[61],6,"expand");
lf[62]=C_h_intern(&lf[62],10,"\003sysexpand");
lf[63]=C_h_intern(&lf[63],25,"\003sysextended-lambda-list\077");
lf[64]=C_h_intern(&lf[64],6,"#!rest");
lf[65]=C_h_intern(&lf[65],10,"#!optional");
lf[66]=C_h_intern(&lf[66],5,"#!key");
lf[67]=C_h_intern(&lf[67],31,"\003sysexpand-extended-lambda-list");
lf[68]=C_h_intern(&lf[68],5,"cadar");
lf[69]=C_h_intern(&lf[69],7,"reverse");
lf[70]=C_h_intern(&lf[70],10,"\003sysappend");
lf[71]=C_h_intern(&lf[71],10,"\004corequote");
lf[72]=C_h_intern(&lf[72],11,"\004corelambda");
lf[73]=C_h_intern(&lf[73],15,"\003sysget-keyword");
lf[74]=C_h_intern(&lf[74],15,"string->keyword");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000+rest argument list specified more than once");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000-`#!optional\047 argument marker in wrong context");
lf[77]=C_h_intern(&lf[77],3,"tmp");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000#invalid syntax of `#!rest\047 argument");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000)`#!rest\047 argument marker in wrong context");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000(`#!key\047 argument marker in wrong context");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\0000invalid lambda list syntax after `#!rest\047 marker");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000 invalid required argument syntax");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\0000invalid lambda list syntax after `#!rest\047 marker");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid lambda list syntax");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid lambda list syntax");
lf[86]=C_h_intern(&lf[86],14,"let-optionals\052");
lf[87]=C_h_intern(&lf[87],8,"optional");
lf[88]=C_h_intern(&lf[88],4,"let\052");
lf[89]=C_h_intern(&lf[89],29,"\003sysdefault-macro-environment");
lf[90]=C_h_intern(&lf[90],16,"\003sysdefjam-error");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000,redefinition of currently used defining form");
lf[92]=C_h_intern(&lf[92],37,"\003sysexpand-multiple-values-assignment");
lf[93]=C_h_intern(&lf[93],20,"\003syscall-with-values");
lf[94]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[95]=C_h_intern(&lf[95],9,"\004coreset!");
lf[96]=C_h_intern(&lf[96],25,"\003sysdecompose-lambda-list");
lf[97]=C_h_intern(&lf[97],21,"\003sysdefine-definition");
lf[98]=C_h_intern(&lf[98],28,"\003sysdefine-syntax-definition");
lf[99]=C_h_intern(&lf[99],28,"\003sysdefine-values-definition");
lf[100]=C_h_intern(&lf[100],21,"\003syscanonicalize-body");
lf[101]=C_h_intern(&lf[101],6,"define");
lf[102]=C_h_intern(&lf[102],13,"define-syntax");
lf[103]=C_h_intern(&lf[103],13,"define-values");
lf[104]=C_h_intern(&lf[104],10,"\004corebegin");
lf[105]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[106]=C_h_intern(&lf[106],18,"\004coreletrec-syntax");
lf[107]=C_h_intern(&lf[107],5,"caadr");
lf[108]=C_h_intern(&lf[108],25,"\003sysexpand-curried-define");
lf[109]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[110]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[111]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[112]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[113]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[114]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[115]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[117]=C_h_intern(&lf[117],24,"\003sysline-number-database");
lf[118]=C_h_intern(&lf[118],24,"\003syssyntax-error-culprit");
lf[119]=C_h_intern(&lf[119],18,"\003syssyntax-context");
lf[120]=C_h_intern(&lf[120],12,"syntax-error");
lf[121]=C_h_intern(&lf[121],15,"\003syssignal-hook");
lf[122]=C_h_intern(&lf[122],13,"\000syntax-error");
lf[123]=C_h_intern(&lf[123],24,"\003syssyntax-error/context");
lf[124]=C_h_intern(&lf[124],9,"\003sysprint");
lf[125]=C_h_intern(&lf[125],17,"get-output-string");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\006 ...)\047");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\025\012inside expression `(");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\027  Suggesting: `(import ");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\025  Suggesting one of:\012");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\017\012      (import ");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000# ...)\047 without importing it first.\012");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000-\012\012  Perhaps you intended to use the syntax `(");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[138]=C_h_intern(&lf[138],6,"syntax");
lf[139]=C_h_intern(&lf[139],7,"\003sysget");
lf[140]=C_h_intern(&lf[140],7,"\004coredb");
lf[141]=C_h_intern(&lf[141],18,"open-output-string");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\024no rule matches form");
lf[143]=C_h_intern(&lf[143],15,"get-line-number");
lf[144]=C_h_intern(&lf[144],18,"\003syshash-table-ref");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\006) in `");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\004\047 - ");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\004in `");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\004\047 - ");
lf[150]=C_h_intern(&lf[150],8,"keyword\077");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\024not enough arguments");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\022too many arguments");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\021not a proper list");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\021unexpected object");
lf[155]=C_h_intern(&lf[155],1,"_");
lf[156]=C_h_intern(&lf[156],4,"pair");
lf[157]=C_h_intern(&lf[157],5,"pair\077");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\015pair expected");
lf[159]=C_h_intern(&lf[159],8,"variable");
lf[160]=C_h_intern(&lf[160],7,"symbol\077");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\023identifier expected");
lf[162]=C_h_intern(&lf[162],6,"symbol");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\017symbol expected");
lf[164]=C_h_intern(&lf[164],4,"list");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\024proper list expected");
lf[166]=C_h_intern(&lf[166],6,"number");
lf[167]=C_h_intern(&lf[167],7,"number\077");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\017number expected");
lf[169]=C_h_intern(&lf[169],6,"string");
lf[170]=C_h_intern(&lf[170],7,"string\077");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\017string expected");
lf[172]=C_h_intern(&lf[172],11,"lambda-list");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\024lambda-list expected");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\017missing keyword");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\015pair expected");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\017incomplete form");
lf[177]=C_h_intern(&lf[177],22,"make-er/ir-transformer");
lf[178]=C_h_intern(&lf[178],12,"list->vector");
lf[179]=C_h_intern(&lf[179],12,"vector->list");
lf[180]=C_h_intern(&lf[180],14,"\004coreprimitive");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\033(expand.scm:805) not a list");
lf[182]=C_h_intern(&lf[182],20,"er-macro-transformer");
lf[183]=C_h_intern(&lf[183],20,"ir-macro-transformer");
lf[184]=C_h_intern(&lf[184],18,"\003sysir-transformer");
lf[185]=C_h_intern(&lf[185],29,"\003sysinitial-macro-environment");
lf[187]=C_h_intern(&lf[187],8,"\003syswarn");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000!variable bound multiple times in ");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\012 construct");
lf[190]=C_h_intern(&lf[190],24,"\003sysprocess-syntax-rules");
lf[191]=C_h_intern(&lf[191],7,"\003syscar");
lf[192]=C_h_intern(&lf[192],7,"\003syscdr");
lf[193]=C_h_intern(&lf[193],10,"\003syslength");
lf[194]=C_h_intern(&lf[194],11,"\003sysvector\077");
lf[195]=C_h_intern(&lf[195],16,"\003sysvector->list");
lf[196]=C_h_intern(&lf[196],16,"\003syslist->vector");
lf[197]=C_h_intern(&lf[197],6,"\003sys>=");
lf[198]=C_h_intern(&lf[198],5,"\003sys=");
lf[199]=C_h_intern(&lf[199],5,"\003sys+");
lf[200]=C_h_intern(&lf[200],8,"\003syscons");
lf[201]=C_h_intern(&lf[201],7,"\003syseq\077");
lf[202]=C_h_intern(&lf[202],10,"\003sysequal\077");
lf[203]=C_h_intern(&lf[203],9,"\003syslist\077");
lf[204]=C_h_intern(&lf[204],7,"\003sysmap");
lf[205]=C_h_intern(&lf[205],9,"\003sysmap-n");
lf[206]=C_h_intern(&lf[206],9,"\003syspair\077");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\026ill-formed syntax rule");
lf[208]=C_h_intern(&lf[208],11,"\004coresyntax");
lf[209]=C_h_intern(&lf[209],5,"quote");
lf[210]=C_h_intern(&lf[210],14,"\003sysdrop-right");
lf[211]=C_h_intern(&lf[211],14,"\003systake-right");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000,template dimension error (too few ellipses\077)");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\021too many ellipses");
lf[214]=C_h_intern(&lf[214],9,"\003sysapply");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000%Only one segment per level is allowed");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\047Cannot combine dotted tail and ellipsis");
lf[217]=C_h_intern(&lf[217],4,"temp");
lf[218]=C_h_intern(&lf[218],4,"tail");
lf[219]=C_h_intern(&lf[219],6,"rename");
lf[220]=C_h_intern(&lf[220],2,"or");
lf[221]=C_h_intern(&lf[221],4,"loop");
lf[222]=C_h_intern(&lf[222],6,"lambda");
lf[223]=C_h_intern(&lf[223],3,"len");
lf[224]=C_h_intern(&lf[224],1,"l");
lf[225]=C_h_intern(&lf[225],5,"input");
lf[226]=C_h_intern(&lf[226],4,"else");
lf[227]=C_h_intern(&lf[227],4,"cond");
lf[228]=C_h_intern(&lf[228],7,"compare");
lf[229]=C_h_intern(&lf[229],3,"and");
lf[230]=C_h_intern(&lf[230],16,"\003sysmacro-subset");
lf[231]=C_h_intern(&lf[231],27,"\003sysfixup-macro-environment");
lf[232]=C_h_intern(&lf[232],26,"\003sysmeta-macro-environment");
lf[233]=C_h_intern(&lf[233],14,"make-parameter");
lf[234]=C_h_intern(&lf[234],12,"syntax-rules");
lf[235]=C_h_intern(&lf[235],3,"...");
lf[236]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[237]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[238]=C_h_intern(&lf[238],6,"export");
lf[239]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[240]=C_h_intern(&lf[240],22,"\003sysadd-to-export-list");
lf[241]=C_h_intern(&lf[241],18,"\003syscurrent-module");
lf[242]=C_h_intern(&lf[242],20,"\003sysvalidate-exports");
lf[243]=C_h_intern(&lf[243],16,"begin-for-syntax");
lf[244]=C_h_intern(&lf[244],24,"\004coreelaborationtimeonly");
lf[245]=C_h_intern(&lf[245],28,"\003sysregister-meta-expression");
lf[246]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[247]=C_h_intern(&lf[247],6,"module");
lf[248]=C_h_intern(&lf[248],1,"\052");
lf[249]=C_h_intern(&lf[249],1,"=");
lf[250]=C_h_intern(&lf[250],14,"string->symbol");
lf[251]=C_h_intern(&lf[251],17,"\003sysstring-append");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\001_");
lf[253]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[254]=C_h_intern(&lf[254],25,"\003sysregister-module-alias");
lf[255]=C_h_intern(&lf[255],23,"\003sysinstantiate-functor");
lf[256]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\016"
);
lf[257]=C_h_intern(&lf[257],12,"\004coreinclude");
lf[258]=C_h_intern(&lf[258],11,"\004coremodule");
lf[259]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[260]=C_h_intern(&lf[260],28,"require-extension-for-syntax");
lf[261]=C_h_intern(&lf[261],17,"require-extension");
lf[262]=C_h_intern(&lf[262],22,"\004corerequire-extension");
lf[263]=C_h_intern(&lf[263],15,"require-library");
lf[264]=C_h_intern(&lf[264],11,"cond-expand");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\042syntax error in `cond-expand\047 form");
lf[266]=C_h_intern(&lf[266],12,"\003sysfeature\077");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000(no matching clause in `cond-expand\047 form");
lf[268]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[269]=C_h_intern(&lf[269],3,"not");
lf[270]=C_h_intern(&lf[270],11,"delay-force");
lf[271]=C_h_intern(&lf[271],16,"\003sysmake-promise");
lf[272]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[273]=C_h_intern(&lf[273],5,"delay");
lf[274]=C_h_intern(&lf[274],8,"\003syslist");
lf[275]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[276]=C_h_intern(&lf[276],10,"quasiquote");
lf[277]=C_h_intern(&lf[277],7,"unquote");
lf[278]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[279]=C_h_intern(&lf[279],16,"unquote-splicing");
lf[280]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[281]=C_h_intern(&lf[281],1,"a");
lf[282]=C_h_intern(&lf[282],1,"b");
lf[283]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\003sysappend\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376\377\016\376\377\016\376\377\016");
lf[284]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\377\016");
lf[285]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\003syslist\376\001\000\000\001b\376\377\016");
lf[286]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\001\000\000\001b\376\377\016");
lf[287]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\004corequote\376\003\000\000\002\376\377\016\376\377\016\376\377\016");
lf[288]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001a\376\377\016");
lf[289]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[290]=C_h_intern(&lf[290],2,"do");
lf[291]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[292]=C_h_intern(&lf[292],7,"\004coreif");
lf[293]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[294]=C_h_intern(&lf[294],6,"doloop");
lf[295]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\001\376\001\000\000\001_\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001"
"\000\000\000\001");
lf[296]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[297]=C_h_intern(&lf[297],4,"case");
lf[298]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000(clause following `else\047 clause in `case\047");
lf[300]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[301]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[302]=C_h_intern(&lf[302],4,"eqv\077");
lf[303]=C_h_intern(&lf[303],2,"=>");
lf[304]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[305]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corebegin\376\377\016");
lf[306]=C_h_intern(&lf[306],7,"sprintf");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\022\047 clause in `cond\047");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\022clause following `");
lf[309]=C_h_intern(&lf[309],2,"if");
lf[310]=C_h_intern(&lf[310],18,"\003syssrfi-4-vector\077");
lf[311]=C_h_intern(&lf[311],5,"blob\077");
lf[312]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[313]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[314]=C_h_intern(&lf[314],4,"set!");
lf[315]=C_h_intern(&lf[315],10,"\003syssetter");
lf[316]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[317]=C_h_intern(&lf[317],13,"letrec-syntax");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\015letrec-syntax");
lf[319]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[320]=C_h_intern(&lf[320],10,"let-syntax");
lf[321]=C_h_intern(&lf[321],15,"\004corelet-syntax");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\012let-syntax");
lf[323]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[324]=C_h_intern(&lf[324],6,"letrec");
lf[325]=C_h_intern(&lf[325],11,"\004coreletrec");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\006letrec");
lf[327]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[328]=C_h_intern(&lf[328],7,"letrec\052");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\007letrec\052");
lf[330]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\003let");
lf[332]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\003let");
lf[334]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[335]=C_h_intern(&lf[335],18,"\004coredefine-syntax");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000@redefinition of `define-syntax\047 not allowed in syntax-definition");
lf[337]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[338]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list");
lf[339]=C_h_intern(&lf[339],19,"\003sysregister-export");
lf[340]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[341]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[342]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[343]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[344]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[345]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[346]=C_h_intern(&lf[346],5,"begin");
lf[347]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[348]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\001\376\001\000\000\001_");
lf[349]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[350]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[351]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[352]=C_h_intern(&lf[352],8,"reexport");
lf[353]=C_h_intern(&lf[353],17,"\003sysexpand-import");
lf[354]=C_h_intern(&lf[354],17,"import-for-syntax");
lf[355]=C_h_intern(&lf[355],6,"import");
lf[356]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\020\000hygienic-macros\376\003\000\000\002\376\001\000\000\015\000syntax-rules\376\003\000\000\002\376\001\000\000\007\000srfi-0\376\003\000\000\002\376\001\000\000\007\000srf"
"i-2\376\003\000\000\002\376\001\000\000\007\000srfi-6\376\003\000\000\002\376\001\000\000\007\000srfi-9\376\003\000\000\002\376\001\000\000\010\000srfi-46\376\003\000\000\002\376\001\000\000\010\000srfi-55\376\003\000\000\002\376\001"
"\000\000\010\000srfi-61\376\377\016");
C_register_lf2(lf,357,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3635,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:55: append */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[356];
av2[3]=*((C_word*)lf[0]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k10126 in a10123 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_10128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_10128,2,av);}
a=C_alloc(15);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[271],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11003 in k10999 in k10996 in k10993 in k10990 in k10984 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_11005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11005,2,av);}
/* expand.scm:1159: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[187]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[187]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k10999 in k10996 in k10993 in k10990 in k10984 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_11001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11001,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11005,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1161: ##sys#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a10123 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_ccall f_10124(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10124,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10128,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1357: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[270];
av2[3]=t2;
av2[4]=lf[272];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10120 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_ccall f_10122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10122,2,av);}
/* expand.scm:1352: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
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

/* k6829 in k6826 in k6823 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6831,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:671: outstr */
t3=((C_word*)t0)[2];
f_6799(t3,t2,lf[127]);}

/* k6835 in k6832 in k6829 in k6826 in k6823 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6837,2,av);}
/* expand.scm:673: outstr */
t2=((C_word*)t0)[2];
f_6799(t2,((C_word*)t0)[3],lf[126]);}

/* k6832 in k6829 in k6826 in k6823 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6834,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6844,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(*((C_word*)lf[119]+1));
/* expand.scm:672: ##sys#strip-syntax */
t5=*((C_word*)lf[12]+1);{
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

/* k10196 in walk in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_10198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10198,2,av);}
/* expand.scm:1298: simplify */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10363(t2,((C_word*)t0)[3],t1);}

/* walk in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_fcall f_10190(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10190,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10198,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1298: walk1 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_10200(t5,t4,t2,t3);}

/* k3800 in walk in strip-syntax in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3802(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3802,2,av);}
a=C_alloc(5);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(0),t1);
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3795,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* expand.scm:117: walk */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3730(t7,t4,t6);}

/* k9198 */
static void C_ccall f_9200(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9200,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9211,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_i_cddr(((C_word*)t0)[2]);
/* synrules.scm:273: free-meta-variables */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9230,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* synrules.scm:278: free-meta-variables */
t7=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9245,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:281: vector->list */
t3=*((C_word*)lf[179]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* k6842 in k6832 in k6829 in k6826 in k6823 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6844,2,av);}
/* expand.scm:672: ##sys#print */
t2=*((C_word*)lf[124]+1);{
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

/* k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_ccall f_10185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_10185,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10188,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1297: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[279];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_10188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_10188,2,av);}
a=C_alloc(28);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10190,a[2]=t8,a[3]=t6,a[4]=((C_word)li146),tmp=(C_word)a,a+=5,tmp));
t10=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10200,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word)li147),tmp=(C_word)a,a+=8,tmp));
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10363,a[2]=t8,a[3]=((C_word)li150),tmp=(C_word)a,a+=4,tmp));
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10456,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1339: ##sys#check-syntax */
t13=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[276];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[289];
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in ... */
static void C_ccall f_10182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_10182,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10185,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1296: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[277];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8679 in k8703 in k8624 */
static void C_ccall f_8681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8681,2,av);}
a=C_alloc(60);
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=C_a_i_list(&a,4,((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[8],t4);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[9],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[10],t6);
t8=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[11],t7);
t9=((C_word*)t0)[12];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_a_i_list(&a,1,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6851(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6851,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6854,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6741,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6785,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:656: ##sys#strip-syntax */
t7=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* comp in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static C_word C_fcall f_5723(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;{}
t3=(
  /* expand.scm:474: lookup */
  f_3649(t2,((C_word*)t0)[2])
);
t4=C_eqp(t1,t3);
if(C_truep(t4)){
return(t4);}
else{
t5=t1;
t6=C_eqp(t5,lf[101]);
if(C_truep(t6)){
return((C_truep(t3)?C_eqp(t3,*((C_word*)lf[97]+1)):C_eqp(t1,t2)));}
else{
t7=C_eqp(t5,lf[102]);
if(C_truep(t7)){
return((C_truep(t3)?C_eqp(t3,*((C_word*)lf[98]+1)):C_eqp(t1,t2)));}
else{
t8=C_eqp(t5,lf[103]);
return((C_truep(t8)?(C_truep(t3)?C_eqp(t3,*((C_word*)lf[99]+1)):C_eqp(t1,t2)):C_eqp(t1,t2)));}}}}

/* k9209 in k9198 */
static void C_ccall f_9211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9211,2,av);}
/* synrules.scm:271: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6854,2,av);}
a=C_alloc(8);
t2=t1;
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6863,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:678: outstr */
t4=((C_word*)t0)[2];
f_6799(t4,t3,((C_word*)t0)[7]);}
else{
t3=((C_word*)t0)[8];
t4=C_u_i_cdr(t3);
/* expand.scm:699: loop */
t5=((C_word*)((C_word*)t0)[9])[1];
f_6815(t5,((C_word*)t0)[3],t4);}}

/* k7396 in walk in k7137 in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7398(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7398,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:795: walk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7144(t6,((C_word*)t0)[5],t3,t5);}

/* k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6863,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:679: outstr */
t3=((C_word*)t0)[3];
f_6799(t3,t2,lf[137]);}

/* k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_6878,2,av);}
a=C_alloc(13);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6891,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6895,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(((C_word*)t0)[2]);
/* expand.scm:688: symbol->string */
t7=*((C_word*)lf[44]+1);{
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
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6906,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6910,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6912,a[2]=t7,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6912(t9,t5,((C_word*)t0)[2]);}}

/* k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,6)))){
C_save_and_reclaim((void *)f_5712,2,av);}
a=C_alloc(30);
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
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5723,a[2]=t2,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5789,a[2]=t17,a[3]=t11,a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6077,a[2]=t13,a[3]=t11,a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp));
t21=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6267,a[2]=t11,a[3]=t2,a[4]=t15,a[5]=t13,a[6]=t7,a[7]=((C_word)li68),tmp=(C_word)a,a+=8,tmp));
/* expand.scm:605: expand */
t22=((C_word*)t17)[1];
f_6267(t22,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* ##sys#canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_5708,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5712,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* expand.scm:472: ##sys#current-environment */
t6=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_car(t4);
f_5712(2,av2);}}}

/* k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6869,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:681: outstr */
t3=((C_word*)t0)[3];
f_6799(t3,t2,lf[136]);}

/* k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6866,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:680: ##sys#print */
t3=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* expand in k10667 in a10664 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in ... */
static void C_fcall f_10679(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10679,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[50],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10704,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* expand.scm:1259: expand */
t11=t7;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* mirror-rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7852(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7852,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7866,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* expand.scm:882: mirror-rename */
t9=t3;
t10=t5;
t1=t9;
t2=t10;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7887,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7891,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:884: vector->list */
t5=*((C_word*)lf[179]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
t3=(
  /* expand.scm:887: lookup */
  f_3649(t2,((C_word*)t0)[3])
);
t4=(
  /* expand.scm:888: assq-reverse */
  f_7827(t2,((C_word*)((C_word*)t0)[5])[1])
);
if(C_truep(t4)){
t5=t1;
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(t3)){
if(C_truep(C_i_pairp(t3))){
/* expand.scm:894: rename */
t5=((C_word*)((C_word*)t0)[6])[1];{
C_word av2[3];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
f_7466(3,av2);}}
else{
t5=t2;
t6=C_i_getprop(t5,lf[7],C_SCHEME_FALSE);
if(C_truep(t6)){
t7=t1;
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
/* expand.scm:901: rename */
t7=((C_word*)((C_word*)t0)[6])[1];{
C_word av2[3];
av2[0]=t7;
av2[1]=t1;
av2[2]=t2;
f_7466(3,av2);}}}}
else{
/* expand.scm:892: rename */
t5=((C_word*)((C_word*)t0)[6])[1];{
C_word av2[3];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
f_7466(3,av2);}}}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}

/* k5170 in k5167 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_5172,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
f_4969(t4,C_a_i_list(&a,1,t3));}

/* map-loop790 in k5167 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5174,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5199,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:363: g796 */
t5=((C_word*)t0)[4];
f_5109(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* assq-reverse in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static C_word C_fcall f_7827(C_word t1,C_word t2){
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

/* k5167 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5169(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5169,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5174(t6,t2,t1);}

/* k5164 in g796 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5166,2,av);}
t2=C_slot(t1,C_fix(1));
/* expand.scm:342: string->keyword */
t3=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5160 in g796 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_5162,2,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,2,lf[71],t1);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_truep(t3)?t3:((C_word*)((C_word*)t0)[3])[1]);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
if(C_truep(C_i_pairp(t6))){
t7=((C_word*)t0)[4];
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=C_a_i_cons(&a,2,lf[72],t9);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t4,t11);
t13=C_a_i_cons(&a,2,t2,t12);
t14=C_a_i_cons(&a,2,lf[73],t13);
t15=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[6],t14);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t7=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_a_i_cons(&a,2,lf[73],t8);
t10=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[6],t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k11427 in k11404 in a11401 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in ... */
static void C_ccall f_11429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11429,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4739 in g695 in k4731 in k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4741,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
/* expand.scm:293: expand */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4510(t4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)((C_word*)t0)[6])[1]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4753,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[58]+1))){
/* expand.scm:296: ##sys#compiler-syntax-hook */
t5=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* expand.scm:297: loop */
t5=((C_word*)((C_word*)t0)[7])[1];
f_4554(t5,((C_word*)t0)[4],t2);}}}

/* g695 in k4731 in k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4737(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,6)))){
C_save_and_reclaim_args((void *)trf_4737,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
/* expand.scm:292: call-handler */
t7=((C_word*)((C_word*)t0)[7])[1];
f_4312(t7,t3,((C_word*)t0)[4],t4,((C_word*)t0)[2],t6,C_SCHEME_TRUE);}

/* k4731 in k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4733(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4733,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li37),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:274: g695 */
t3=t2;
f_4737(t3,((C_word*)t0)[8],t1);}
else{
/* expand.scm:298: expand */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4510(t2,((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}}

/* k6826 in k6823 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6828,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:670: ##sys#print */
t3=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6823 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6825,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:669: outstr */
t3=((C_word*)t0)[2];
f_6799(t3,t2,lf[128]);}

/* k6510 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6512,2,av);}
a=C_alloc(3);
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* expand.scm:602: fini */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5789(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[9]);
/* expand.scm:603: loop */
t4=((C_word*)((C_word*)t0)[10])[1];
f_6273(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* k9139 in k9105 */
static void C_ccall f_9141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9141,2,av);}
/* synrules.scm:255: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k6889 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6891,2,av);}
/* expand.scm:685: outstr */
t2=((C_word*)t0)[2];
f_6799(t2,((C_word*)t0)[3],t1);}

/* k6893 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6895,2,av);}
/* expand.scm:686: string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[129];
av2[3]=t1;
av2[4]=lf[130];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f_9275 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_9275(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9275,3,av);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(t2);
/* synrules.scm:296: ellipsis? */
t6=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop662 in k4687 in k4597 in k4585 in k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4626(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4626,3,t0,t1,t2);}
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

/* doloop1398 in k7161 in walk in k7137 in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7168(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7168,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
/* expand.scm:765: err */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7023(t5,t1,lf[151]);}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7187,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
/* expand.scm:767: err */
t6=((C_word*)((C_word*)t0)[3])[1];
f_7023(t6,t5,lf[152]);}
else{
if(C_truep(C_i_pairp(t2))){
t6=C_i_car(t2);
/* expand.scm:770: walk */
t7=((C_word*)((C_word*)t0)[6])[1];
f_7144(t7,t5,t6,((C_word*)t0)[7]);}
else{
/* expand.scm:769: err */
t6=((C_word*)((C_word*)t0)[3])[1];
f_7023(t6,t5,lf[153]);}}}}

/* k4622 in k4687 in k4597 in k4585 in k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4624,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[53],t2);
/* expand.scm:280: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}

/* k7161 in walk in k7137 in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7163(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_7163,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li90),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_7168(t6,((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}

/* map-loop2049 in k10483 in k10471 in a10468 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_fcall f_10627(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10627,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_u_i_cdr(t3);
t6=C_i_car(t5);
t7=C_a_i_list2(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t8);
t10=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t8);
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

/* a11467 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11468(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11468,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11472,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1088: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[320];
av2[3]=t2;
av2[4]=lf[323];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11464 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11466,2,av);}
/* expand.scm:1083: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[320];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9120 in k9105 */
static void C_ccall f_9122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9122,2,av);}
/* synrules.scm:252: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k6873 in k6870 in k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6875,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:683: outstr */
t3=((C_word*)t0)[3];
f_6799(t3,t2,lf[135]);}

/* k6870 in k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6872,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:682: ##sys#print */
t3=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11451 in k11448 in a11445 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in ... */
static void C_ccall f_11453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11453,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[106],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11448 in a11445 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 in ... */
static void C_ccall f_11450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11450,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1098: check-for-multiple-bindings */
f_8039(t2,t3,((C_word*)t0)[2],lf[318]);}

/* f_9299 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_9299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9299,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9306,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:301: segment-template? */
t4=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k5197 in map-loop790 in k5167 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5199(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5199,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5174(t6,((C_word*)t0)[5],t5);}

/* k4979 in k4967 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4981(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4981,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5012,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:375: cadar */
t5=*((C_word*)lf[68]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)((C_word*)t0)[8])[1];
t3=(C_truep(t2)?C_SCHEME_FALSE:C_i_nullp(((C_word*)t0)[9]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5037,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:379: reverse */
t5=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5056,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5060,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:382: reverse */
t6=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_9839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9839,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9842,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1367: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[269];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k11404 in a11401 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in ... */
static void C_ccall f_11406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_save_and_reclaim((void *)f_11406,2,av);}
a=C_alloc(13);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_a_i_list(&a,2,lf[315],t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11429,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_u_i_cdr(t2);
t9=C_a_i_list(&a,1,t3);
/* expand.scm:1101: ##sys#append */
t10=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[95],t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_9832(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9832,5,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9839,a[2]=t6,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1366: r */
t8=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[220];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}

/* k10600 in map-loop2083 in k10532 in k10511 in k10483 in k10471 in a10468 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_fcall f_10602(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10602,2,t0,t1);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10577(t6,((C_word*)t0)[5],t5);}

/* a11401 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 in ... */
static void C_ccall f_11402(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11402,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11406,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1106: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[314];
av2[3]=t2;
av2[4]=lf[316];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9828 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_9830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9830,2,av);}
/* expand.scm:1360: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[264];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11398 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 in ... */
static void C_ccall f_11400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11400,2,av);}
/* expand.scm:1101: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[314];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5035 in k4979 in k4967 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5037(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5037,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:357: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t5;
C_values(4,av2);}}

/* k9105 */
static void C_ccall f_9107(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_9107,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9122,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cddr(((C_word*)t0)[2]);
/* synrules.scm:253: meta-variables */
t8=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9141,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* synrules.scm:256: meta-variables */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9156,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:258: vector->list */
t3=*((C_word*)lf[179]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_9845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9845,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1369: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[229];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_9848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_9848,2,av);}
a=C_alloc(28);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9850,a[2]=((C_word*)t0)[2],a[3]=((C_word)li139),tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9860,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li140),tmp=(C_word)a,a+=9,tmp));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9996,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word)li142),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_9996(t12,((C_word*)t0)[7],((C_word*)t0)[2]);}

/* k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_9842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9842,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9845,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1368: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[226];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4808 in expand in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_4810,2,av);}
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
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4824,a[2]=t2,a[3]=t7,a[4]=t11,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4824(t13,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10667 in a10664 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in ... */
static void C_ccall f_10669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10669,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10679,a[2]=t5,a[3]=t7,a[4]=((C_word)li155),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_10679(t9,((C_word*)t0)[3],t2);}

/* k10661 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in ... */
static void C_ccall f_10663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10663,2,av);}
/* expand.scm:1248: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
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

/* err in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_fcall f_9850(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_9850,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_a_i_cons(&a,2,lf[264],((C_word*)t0)[2]);
/* expand.scm:1371: ##sys#error */
t4=*((C_word*)lf[25]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[265];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a10664 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in ... */
static void C_ccall f_10665(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10665,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10669,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1253: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[88];
av2[3]=t2;
av2[4]=lf[296];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4751 in k4739 in g695 in k4731 in k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4753,2,av);}
/* expand.scm:297: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4554(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* mwalk in match-expression in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6585(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6585,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6639,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=C_i_car(t3);
/* expand.scm:621: mwalk */
t9=t4;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_i_assq(t3,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6599,a[2]=t2,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:615: g1230 */
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  /* expand.scm:615: g1230 */
  f_6599(t5,t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(t3,((C_word*)t0)[4]))){
t5=C_a_i_cons(&a,2,t3,t2);
t6=C_a_i_cons(&a,2,t5,((C_word*)((C_word*)t0)[3])[1]);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_eqp(t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}}

/* match-expression in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6582(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_6582,4,t1,t2,t3,t4);}
a=C_alloc(14);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6585,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6662,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:624: mwalk */
t11=((C_word*)t8)[1];
f_6585(t11,t10,t2,t3);}

/* k5010 in k4979 in k4967 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5012(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5012,2,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,lf[50],t5);
t7=C_a_i_list(&a,1,t6);
/* expand.scm:357: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=t7;
C_values(4,av2);}}

/* k6928 in k6924 in loop in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6930,2,av);}
/* expand.scm:696: string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[133];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[134];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k7885 in mirror-rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7887,2,av);}
/* expand.scm:884: list->vector */
t2=*((C_word*)lf[178]+1);{
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

/* a4829 in loop in k4808 in expand in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4830,2,av);}
/* expand.scm:311: ##sys#expand-0 */
t2=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11442 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11444,2,av);}
/* expand.scm:1092: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[317];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11445 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11446(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11446,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11450,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1097: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[317];
av2[3]=t2;
av2[4]=lf[319];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* expand in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4806,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4810,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
/* expand.scm:309: ##sys#current-environment */
t6=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_car(t4);
f_4810(2,av2);}}}

/* k7889 in mirror-rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7891,2,av);}
/* expand.scm:884: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7852(t2,((C_word*)t0)[3],t1);}

/* a9805 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_9806(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9806,5,av);}
a=C_alloc(9);
t5=C_i_cdr(t2);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[262],t5,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k9802 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_9804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9804,2,av);}
/* expand.scm:1422: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[261];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a4835 in loop in k4808 in expand in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4836(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4836,4,av);}
if(C_truep(t3)){
/* expand.scm:313: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4824(t4,t1,t2);}
else{
t4=t2;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k9154 in k9105 */
static void C_ccall f_9156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9156,2,av);}
/* synrules.scm:258: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k7864 in mirror-rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7866(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7866,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7870,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:882: mirror-rename */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7852(t6,t3,t5);}

/* f_9158 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_9158(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9158,6,av);}
a=C_alloc(8);
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,t5))){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_assq(t2,t4);
if(C_truep(t6)){
t7=C_i_cdr(t6);
t8=t3;
t9=C_fixnum_greater_or_equal_p(t7,t8);
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=(C_truep(t9)?C_a_i_cons(&a,2,t2,t5):t5);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9200,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:270: segment-template? */
t7=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}

/* g1230 in mwalk in match-expression in k4123 in k3645 in k3641 in k3637 in k3633 */
static C_word C_fcall f_6599(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
return(C_i_equalp(((C_word*)t0)[2],t2));}

/* k9815 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_9817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9817,2,av);}
/* expand.scm:1414: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[263];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9818 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_9819(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9819,5,av);}
a=C_alloc(9);
t5=C_i_cdr(t2);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[262],t5,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k4808 in expand in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4824(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_4824,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4830,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4836,a[2]=((C_word*)t0)[4],a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:309: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k7868 in k7864 in mirror-rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7870,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7185 in doloop1398 in k7161 in walk in k7137 in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7187,2,av);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_7168(t4,((C_word*)t0)[5],t2,t3);}

/* loop in expand-curried-define in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6667(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_6667,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=t2;
t6=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_u_i_car(t5));
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t8,t3);
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_a_i_cons(&a,2,lf[72],t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t5=t2;
t6=C_u_i_car(t5);
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t8,t3);
t10=C_a_i_cons(&a,2,lf[72],t9);
t11=C_a_i_list(&a,1,t10);
/* expand.scm:636: loop */
t13=t1;
t14=t6;
t15=t11;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}

/* k8473 */
static void C_ccall f_8475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
C_save_and_reclaim((void *)f_8475,2,av);}
a=C_alloc(35);
if(C_truep(t1)){
/* synrules.scm:137: process-segment-match */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8511,a[2]=t6,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t4,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8515,a[2]=t7,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
t9=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[12])[1],((C_word*)((C_word*)t0)[6])[1]);
t10=((C_word*)t0)[5];
t11=C_u_i_car(t10);
/* synrules.scm:141: process-match */
t12=((C_word*)((C_word*)t0)[11])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8568,a[2]=t6,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t4,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t8=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)((C_word*)t0)[6])[1]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8576,a[2]=((C_word*)t0)[11],a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:147: vector->list */
t11=*((C_word*)lf[179]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t2=C_i_nullp(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8589,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[16],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_8589(t4,t2);}
else{
t4=C_booleanp(((C_word*)t0)[5]);
t5=t3;
f_8589(t5,(C_truep(t4)?t4:C_charp(((C_word*)t0)[5])));}}}}}

/* k6660 in match-expression in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6662,2,av);}
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* ##sys#expand-curried-define in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6664(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6664,5,av);}
a=C_alloc(13);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6667,a[2]=t6,a[3]=t8,a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6711,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:637: loop */
t11=((C_word*)t8)[1];
f_6667(t11,t10,t2,t3);}

/* test in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_fcall f_9860(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_9860,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9874,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1375: ##sys#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=t3;
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9893,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1380: c */
t8=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}
else{
/* expand.scm:1376: err */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9850(t3,t1,t2);}}}

/* map-loop635 in k4597 in k4585 in k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4695(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4695,3,t0,t1,t2);}
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

/* k4687 in k4597 in k4585 in k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_4689,2,av);}
a=C_alloc(41);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,lf[51],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,3,lf[52],t6,((C_word*)t0)[3]);
t8=t7;
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4624,a[2]=t8,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4626,a[2]=t11,a[3]=t15,a[4]=t12,a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_4626(t17,t13,((C_word*)t0)[5]);}

/* k9872 in test in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_9874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9874,2,av);}
/* expand.scm:1375: ##sys#feature? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[266]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[266]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k5360 in k5252 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5362,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5343(t3,t2);}

/* k9891 in test in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_9893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_9893,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1383: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_9860(t5,t3,t4);}
else{
/* expand.scm:1385: err */
t3=((C_word*)((C_word*)t0)[6])[1];
f_9850(t3,((C_word*)t0)[3],((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:1386: c */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[11];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9311 in k9304 */
static void C_ccall f_9313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9313,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fixnum_plus(C_fix(1),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_9319 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_9319(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9319,3,av);}
a=C_alloc(7);
t3=C_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9329,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li124),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_9329(t7,t1,t3);}

/* loop */
static void C_fcall f_9329(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9329,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9336,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
/* synrules.scm:310: ellipsis? */
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
f_9336(2,av2);}}}

/* map-loop1026 in k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6001(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6001,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[105]);
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

/* k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in ... */
static void C_ccall f_8141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8141,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10663,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10665,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1251: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k10839 in k10887 in k10784 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_ccall f_10841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_10841,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_10834(t3,C_a_i_list(&a,2,t2,((C_word*)t0)[4]));}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_10834(t3,C_a_i_cons(&a,2,lf[104],t2));}}

/* k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in ... */
static void C_ccall f_8147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8147,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10176,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10178,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1293: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in ... */
static void C_ccall f_8144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8144,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8147,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10467,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10469,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1264: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k7978 in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7980,2,av);}
/* expand.scm:913: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7852(t2,((C_word*)t0)[3],t1);}

/* er-macro-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7989,3,av);}
/* expand.scm:915: make-er/ir-transformer */
t3=*((C_word*)lf[177]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7982 in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7984,2,av);}
/* expand.scm:913: handler */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k9304 */
static void C_ccall f_9306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9306,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* synrules.scm:302: segment-depth */
t4=((C_word*)((C_word*)t0)[4])[1];{
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
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k10836 in k10832 in k10887 in k10784 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_10838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_10838,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[292],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in ... */
static void C_ccall f_8150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8150,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10143,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10145,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1345: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_8159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8159,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9817,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9819,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1417: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k10832 in k10887 in k10784 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_fcall f_10834(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_10834,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1246: expand */
t4=((C_word*)((C_word*)t0)[4])[1];
f_10753(t4,t3,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_ccall f_8156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8156,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8159,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9830,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9832,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1363: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in ... */
static void C_ccall f_8153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8153,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10122,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10124,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1355: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* ir-macro-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7995,3,av);}
/* expand.scm:916: make-er/ir-transformer */
t3=*((C_word*)lf[177]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* ##sys#macro-subset in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_9356,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9363,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9370,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1530: ##sys#macro-environment */
t9=*((C_word*)lf[19]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_8162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8162,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8165,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9804,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9806,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1425: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_8168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8168,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9598,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9600,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1440: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_8165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8165,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8168,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9778,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9780,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1433: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k9361 in macro-subset in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in ... */
static void C_ccall f_9363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9363,2,av);}
/* expand.scm:1534: ##sys#fixup-macro-environment */
t2=*((C_word*)lf[231]+1);{
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

/* k3818 in walk in strip-syntax in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_3820,2,av);}
a=C_alloc(16);
t2=t1;
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3829,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li2),tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_3829(t9,((C_word*)t0)[6],C_fix(0));}

/* doloop331 in k3818 in walk in strip-syntax in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_3829(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3829,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3850,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[5],t2);
/* expand.scm:125: walk */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3730(t5,t3,t4);}}

/* map-loop1984 in k10784 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_fcall f_10891(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10891,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* expand.scm:1239: g1990 */
  f_10874(C_a_i(&a,15),((C_word*)t0)[2],t3)
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

/* k9334 in loop */
static void C_ccall f_9336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9336,2,av);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
/* synrules.scm:311: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9329(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_8182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
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
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
if(C_unlikely(!C_demand(C_calculate_demand(143,c,2)))){
C_save_and_reclaim((void *)f_8182,7,av);}
a=C_alloc(143);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
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
t41=C_SCHEME_UNDEFINED;
t42=(*a=C_VECTOR_TYPE|1,a[1]=t41,tmp=(C_word)a,a+=2,tmp);
t43=C_SCHEME_UNDEFINED;
t44=(*a=C_VECTOR_TYPE|1,a[1]=t43,tmp=(C_word)a,a+=2,tmp);
t45=C_SCHEME_UNDEFINED;
t46=(*a=C_VECTOR_TYPE|1,a[1]=t45,tmp=(C_word)a,a+=2,tmp);
t47=C_SCHEME_UNDEFINED;
t48=(*a=C_VECTOR_TYPE|1,a[1]=t47,tmp=(C_word)a,a+=2,tmp);
t49=C_SCHEME_UNDEFINED;
t50=(*a=C_VECTOR_TYPE|1,a[1]=t49,tmp=(C_word)a,a+=2,tmp);
t51=C_SCHEME_UNDEFINED;
t52=(*a=C_VECTOR_TYPE|1,a[1]=t51,tmp=(C_word)a,a+=2,tmp);
t53=C_SCHEME_UNDEFINED;
t54=(*a=C_VECTOR_TYPE|1,a[1]=t53,tmp=(C_word)a,a+=2,tmp);
t55=C_SCHEME_UNDEFINED;
t56=(*a=C_VECTOR_TYPE|1,a[1]=t55,tmp=(C_word)a,a+=2,tmp);
t57=C_SCHEME_UNDEFINED;
t58=(*a=C_VECTOR_TYPE|1,a[1]=t57,tmp=(C_word)a,a+=2,tmp);
t59=C_SCHEME_UNDEFINED;
t60=(*a=C_VECTOR_TYPE|1,a[1]=t59,tmp=(C_word)a,a+=2,tmp);
t61=C_SCHEME_UNDEFINED;
t62=(*a=C_VECTOR_TYPE|1,a[1]=t61,tmp=(C_word)a,a+=2,tmp);
t63=C_SCHEME_UNDEFINED;
t64=(*a=C_VECTOR_TYPE|1,a[1]=t63,tmp=(C_word)a,a+=2,tmp);
t65=C_SCHEME_UNDEFINED;
t66=(*a=C_VECTOR_TYPE|1,a[1]=t65,tmp=(C_word)a,a+=2,tmp);
t67=C_SCHEME_UNDEFINED;
t68=(*a=C_VECTOR_TYPE|1,a[1]=t67,tmp=(C_word)a,a+=2,tmp);
t69=C_SCHEME_UNDEFINED;
t70=(*a=C_VECTOR_TYPE|1,a[1]=t69,tmp=(C_word)a,a+=2,tmp);
t71=C_SCHEME_UNDEFINED;
t72=(*a=C_VECTOR_TYPE|1,a[1]=t71,tmp=(C_word)a,a+=2,tmp);
t73=C_SCHEME_UNDEFINED;
t74=(*a=C_VECTOR_TYPE|1,a[1]=t73,tmp=(C_word)a,a+=2,tmp);
t75=C_SCHEME_UNDEFINED;
t76=(*a=C_VECTOR_TYPE|1,a[1]=t75,tmp=(C_word)a,a+=2,tmp);
t77=C_SCHEME_UNDEFINED;
t78=(*a=C_VECTOR_TYPE|1,a[1]=t77,tmp=(C_word)a,a+=2,tmp);
t79=C_SCHEME_UNDEFINED;
t80=(*a=C_VECTOR_TYPE|1,a[1]=t79,tmp=(C_word)a,a+=2,tmp);
t81=C_SCHEME_UNDEFINED;
t82=(*a=C_VECTOR_TYPE|1,a[1]=t81,tmp=(C_word)a,a+=2,tmp);
t83=C_SCHEME_UNDEFINED;
t84=(*a=C_VECTOR_TYPE|1,a[1]=t83,tmp=(C_word)a,a+=2,tmp);
t85=C_SCHEME_UNDEFINED;
t86=(*a=C_VECTOR_TYPE|1,a[1]=t85,tmp=(C_word)a,a+=2,tmp);
t87=C_SCHEME_UNDEFINED;
t88=(*a=C_VECTOR_TYPE|1,a[1]=t87,tmp=(C_word)a,a+=2,tmp);
t89=C_SCHEME_UNDEFINED;
t90=(*a=C_VECTOR_TYPE|1,a[1]=t89,tmp=(C_word)a,a+=2,tmp);
t91=C_SCHEME_UNDEFINED;
t92=(*a=C_VECTOR_TYPE|1,a[1]=t91,tmp=(C_word)a,a+=2,tmp);
t93=C_SCHEME_UNDEFINED;
t94=(*a=C_VECTOR_TYPE|1,a[1]=t93,tmp=(C_word)a,a+=2,tmp);
t95=C_SCHEME_UNDEFINED;
t96=(*a=C_VECTOR_TYPE|1,a[1]=t95,tmp=(C_word)a,a+=2,tmp);
t97=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8189,a[2]=t8,a[3]=t10,a[4]=t12,a[5]=t14,a[6]=t16,a[7]=t18,a[8]=t20,a[9]=t22,a[10]=t24,a[11]=t26,a[12]=t28,a[13]=t30,a[14]=t32,a[15]=t34,a[16]=t36,a[17]=t38,a[18]=t40,a[19]=t42,a[20]=t44,a[21]=t46,a[22]=t48,a[23]=t50,a[24]=t52,a[25]=t54,a[26]=t56,a[27]=t58,a[28]=t60,a[29]=t62,a[30]=t64,a[31]=t66,a[32]=t68,a[33]=t70,a[34]=t72,a[35]=t6,a[36]=t74,a[37]=t76,a[38]=t84,a[39]=t86,a[40]=t82,a[41]=t78,a[42]=t4,a[43]=t80,a[44]=t90,a[45]=t96,a[46]=t88,a[47]=t94,a[48]=t92,a[49]=t1,a[50]=t3,a[51]=t5,a[52]=t2,tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:65: r */
t98=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t98;
av2[1]=t97;
av2[2]=lf[229];
((C_proc)C_fast_retrieve_proc(t98))(3,av2);}}

/* loop in k7052 in lambda-list? in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7062(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7062,3,t0,t1,t2);}
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
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7082,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:737: keyword? */
t5=*((C_word*)lf[150]+1);{
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
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7110,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:740: keyword? */
t7=*((C_word*)lf[150]+1);{
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

/* k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in ... */
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8189,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[191]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,lf[192]);
t5=C_mutate2(((C_word *)((C_word*)t0)[5])+1,lf[193]);
t6=C_mutate2(((C_word *)((C_word*)t0)[6])+1,lf[194]);
t7=C_mutate2(((C_word *)((C_word*)t0)[7])+1,lf[195]);
t8=C_mutate2(((C_word *)((C_word*)t0)[8])+1,lf[196]);
t9=C_mutate2(((C_word *)((C_word*)t0)[9])+1,lf[197]);
t10=C_mutate2(((C_word *)((C_word*)t0)[10])+1,lf[198]);
t11=C_mutate2(((C_word *)((C_word*)t0)[11])+1,lf[199]);
t12=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8204,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[18],a[9]=((C_word*)t0)[19],a[10]=((C_word*)t0)[20],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[22],a[13]=((C_word*)t0)[23],a[14]=((C_word*)t0)[24],a[15]=((C_word*)t0)[25],a[16]=((C_word*)t0)[26],a[17]=((C_word*)t0)[27],a[18]=((C_word*)t0)[28],a[19]=((C_word*)t0)[29],a[20]=((C_word*)t0)[30],a[21]=((C_word*)t0)[31],a[22]=((C_word*)t0)[32],a[23]=((C_word*)t0)[33],a[24]=((C_word*)t0)[34],a[25]=((C_word*)t0)[35],a[26]=((C_word*)t0)[36],a[27]=((C_word*)t0)[4],a[28]=((C_word*)t0)[37],a[29]=((C_word*)t0)[2],a[30]=((C_word*)t0)[38],a[31]=((C_word*)t0)[39],a[32]=((C_word*)t0)[40],a[33]=((C_word*)t0)[41],a[34]=((C_word*)t0)[42],a[35]=((C_word*)t0)[43],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[6],a[38]=((C_word*)t0)[7],a[39]=((C_word*)t0)[44],a[40]=((C_word*)t0)[5],a[41]=((C_word*)t0)[9],a[42]=((C_word*)t0)[10],a[43]=((C_word*)t0)[11],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[8],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:77: r */
t13=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[228];
((C_proc)C_fast_retrieve_proc(t13))(3,av2);}}

/* k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_8180(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,7)))){
C_save_and_reclaim((void *)f_8180,2,av);}
a=C_alloc(15);
t2=C_mutate2((C_word*)lf[190]+1 /* (set! ##sys#process-syntax-rules ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8182,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[230]+1 /* (set! ##sys#macro-subset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9356,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[231]+1 /* (set! ##sys#fixup-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9406,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9501,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1550: ##sys#macro-environment */
t7=*((C_word*)lf[19]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* g2178 in k10391 in k10365 in simplify in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_fcall f_10397(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10397,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_assq(lf[282],t2);
t4=C_i_length(t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(32)))){
t5=C_i_assq(lf[281],t2);
t6=C_i_cdr(t5);
t7=C_u_i_cdr(t3);
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,lf[274],t8);
/* expand.scm:1333: simplify */
t10=((C_word*)((C_word*)t0)[2])[1];
f_10363(t10,t1,t9);}
else{
t5=((C_word*)t0)[3];
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k10391 in k10365 in simplify in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_10393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10393,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li149),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1294: g2178 */
t3=t2;
f_10397(t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10438,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1336: match-expression */
f_6582(t2,((C_word*)t0)[3],lf[283],lf[284]);}}

/* k10887 in k10784 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_10889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_10889,2,av);}
a=C_alloc(14);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10834,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10841,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t6=C_i_length(((C_word*)t0)[6]);
t7=C_eqp(t6,C_fix(3));
if(C_truep(t7)){
t8=C_i_cadr(((C_word*)t0)[6]);
/* expand.scm:1243: c */
t9=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_10841(2,av2);}}}

/* g1990 in k10784 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static C_word C_fcall f_10874(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[209],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2));}

/* k4794 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4796,2,av);}
t2=(
  /* expand.scm:273: lookup */
  f_3649(((C_word*)((C_word*)t0)[2])[1],t1)
);
if(C_truep(t2)){
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_4578(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=((C_word*)t0)[3];
f_4578(t5,t4);}}

/* k9391 in loop in k9368 in macro-subset in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in ... */
static void C_ccall f_9393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9393,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7039 in k7025 in err in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7041,2,av);}
/* expand.scm:729: string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[145];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[146];
av2[5]=t1;
av2[6]=lf[147];
av2[7]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k7046 in k7025 in err in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7048,2,av);}
/* expand.scm:730: string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[148];
av2[3]=t1;
av2[4]=lf[149];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* g2171 in k10365 in simplify in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_fcall f_10371(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10371,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_assq(lf[281],t2);
t4=C_i_cdr(t3);
t5=C_a_i_list(&a,2,lf[274],t4);
/* expand.scm:1328: simplify */
t6=((C_word*)((C_word*)t0)[2])[1];
f_10363(t6,t1,t5);}

/* k11750 in k11711 in loop in k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11752,2,av);}
/* expand.scm:999: ##sys#register-export */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[339]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[339]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* lambda-list? in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7050,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7054,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:734: ##sys#extended-lambda-list? */
t4=*((C_word*)lf[63]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in ... */
static void C_ccall f_8132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8132,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11311,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11313,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1130: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k7052 in lambda-list? in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7054,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7062,a[2]=t3,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7062(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in ... */
static void C_ccall f_8135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8135,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10939,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10941,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1146: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in ... */
static void C_ccall f_8138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8138,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10714,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10716,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1209: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* loop in extended-lambda-list? in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4879(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4879,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_eqp(t3,lf[64]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4898,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4898(t6,t4);}
else{
t6=C_eqp(t3,lf[65]);
t7=t5;
f_4898(t7,(C_truep(t6)?t6:C_eqp(t3,lf[66])));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11746 in k11722 in k11711 in loop in k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11748,2,av);}
/* expand.scm:1000: c */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k11739 in k11722 in k11711 in loop in k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11741,2,av);}
if(C_truep(t1)){
/* expand.scm:1001: ##sys#defjam-error */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_11727(2,av2);}}}

/* ##sys#extended-lambda-list? in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4873(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4873,3,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4879,a[2]=t4,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4879(t6,t1,t2);}

/* loop in k9368 in macro-subset in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in ... */
static void C_fcall f_9372(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9372,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?t3:C_eqp(t2,((C_word*)t0)[2]));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9393,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* expand.scm:1533: loop */
t11=t7;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* k9368 in macro-subset in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in ... */
static void C_ccall f_9370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_9370,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9372,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li127),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_9372(t5,((C_word*)t0)[3],t1);}

/* k4896 in loop in extended-lambda-list? in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4898(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_4898,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* expand.scm:336: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4879(t4,((C_word*)t0)[2],t3);}}

/* k11722 in k11711 in loop in k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_11724,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11741,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11748,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1000: r */
t5=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[101];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k11725 in k11722 in k11711 in loop in k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11727,2,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[95],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[95],((C_word*)t0)[4],lf[343]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11711 in loop in k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_11713,2,av);}
a=C_alloc(12);
t2=C_i_getprop(((C_word*)t0)[2],lf[5],C_SCHEME_FALSE);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11724,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11752,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:999: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t6;
tp(2,av2);}}

/* foldl1049 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6035(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_6035,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6065,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(0));
t8=t6;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6059,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6061,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:504: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[96]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[96]+1);
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

/* k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_8171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8171,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9568,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9570,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1501: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_8177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8177,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8180,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9505,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9507,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:47: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_ccall f_8174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8174,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9541,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9543,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1510: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k10320 in k10328 in k10289 in k10268 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_10322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10322,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[200],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10309 in k10298 in k10289 in k10268 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_10311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10311,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[70],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8117,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11488,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11490,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1077: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
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
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11510,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11512,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1068: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* a6060 in foldl1049 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6061(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6061,5,av);}
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10298 in k10289 in k10268 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_ccall f_10300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10300,2,av);}
a=C_alloc(4);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10311,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1318: walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_10190(t5,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* fini/syntax in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6077(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_6077,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(14);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6085,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6087,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=((C_word)li64),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_6087(t10,t6,t5,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8120,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11466,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11468,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1086: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8123,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11444,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11446,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1095: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8126,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11400,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11402,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1104: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 in ... */
static void C_ccall f_8129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8129,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8132,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11363,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11365,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1116: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k6063 in foldl1049 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6065,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6035(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k10365 in simplify in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_10367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10367,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10371,a[2]=((C_word*)t0)[2],a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1294: g2171 */
t3=t2;
f_10371(t3,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1329: match-expression */
f_6582(t2,((C_word*)t0)[4],lf[285],lf[286]);}}

/* k8380 */
static void C_fcall f_8382(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_8382,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_cdar(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8418,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:120: process-match */
t7=((C_word*)((C_word*)t0)[10])[1];{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)((C_word*)t0)[9])[1];
av2[3]=t3;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t7))(5,av2);}}
else{
/* synrules.scm:127: ##sys#syntax-error-hook */
t2=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[207];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* simplify in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_fcall f_10363(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_10363,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10367,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1327: match-expression */
f_6582(t3,t2,lf[287],lf[288]);}

/* k4027 in map-loop354 in extend-se in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4029(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4029,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4004(t6,((C_word*)t0)[5],t5);}

/* k6057 in foldl1049 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6059,2,av);}
/* expand.scm:504: ##sys#append */
t2=*((C_word*)lf[70]+1);{
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

/* k8405 in k8401 in k8416 in k8380 */
static void C_ccall f_8407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_8407,2,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8401 in k8416 in k8380 */
static void C_ccall f_8403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_8403,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8407,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8411,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:126: meta-variables */
t5=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k10347 in k10343 in k10289 in k10268 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_10349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10349,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[200],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10343 in k10289 in k10268 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_ccall f_10345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10345,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10349,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1325: walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_10190(t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k8409 in k8401 in k8416 in k8380 */
static void C_ccall f_8411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8411,2,av);}
/* synrules.scm:124: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k8416 in k8380 */
static void C_ccall f_8418(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8418,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8403,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8413,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:121: process-pattern */
t6=((C_word*)((C_word*)t0)[9])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* a8412 in k8416 in k8380 */
static void C_ccall f_8413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8413,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10328 in k10289 in k10268 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_ccall f_10330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_10330,2,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,3,lf[200],((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10322,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1323: walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_10190(t5,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k11259 in k11247 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_11261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11261,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
f_11014(2,av2);}}
else{
t2=C_u_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1175: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[209];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_11014(2,av2);}}}}

/* k11769 in loop in k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11771(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_11771,2,av);}
a=C_alloc(15);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,lf[72],t5);
t7=C_a_i_list3(&a,3,t2,t3,t6);
/* expand.scm:1010: loop */
t8=((C_word*)((C_word*)t0)[5])[1];
f_11698(t8,((C_word*)t0)[6],t7);}

/* k8356 in map-loop2444 */
static void C_ccall f_8358(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8358,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8333(t6,((C_word*)t0)[5],t5);}

/* k11275 in k11259 in k11247 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_11277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11277,2,av);}
t2=C_i_caar(((C_word*)t0)[2]);
/* expand.scm:1175: c */
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
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* f_8441 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_8441(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8441,5,av);}
a=C_alloc(24);
if(C_truep(C_i_symbolp(t3))){
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
t5=C_a_i_list(&a,2,lf[208],t3);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],t2,t6);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_list(&a,1,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_8475,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* synrules.scm:136: segment-pattern? */
t6=((C_word*)((C_word*)t0)[17])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k11766 in k11759 in loop in k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11768,2,av);}
/* expand.scm:1007: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11698(t2,((C_word*)t0)[3],t1);}

/* k11759 in loop in k11691 in a11688 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11761,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1007: ##sys#expand-curried-define */
t3=*((C_word*)lf[108]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* f_8375 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_8375(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8375,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8382,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_cddr(t2);
t7=t3;
f_8382(t7,C_i_nullp(t6));}
else{
t6=t3;
f_8382(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_8382(t4,C_SCHEME_FALSE);}}

/* g1321 in k6975 in get-line-number in k4123 in k3645 in k3641 in k3637 in k3633 */
static C_word C_fcall f_6981(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_assq(((C_word*)t0)[2],t1);
return((C_truep(t2)?C_i_cdr(t2):C_SCHEME_FALSE));}

/* k8307 */
static void C_ccall f_8309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8309,2,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],t3);
t5=((C_word*)t0)[7];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[23],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6975 in get-line-number in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6977,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6981,a[2]=((C_word*)t0)[2],a[3]=((C_word)li82),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:705: g1321 */
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(
  /* expand.scm:705: g1321 */
  f_6981(t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k9074 in k8926 */
static void C_ccall f_9076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9076,2,av);}
/* synrules.scm:240: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k9070 in k8926 */
static void C_ccall f_9072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9072,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8317 */
static void C_ccall f_8319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_8319,2,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,2,lf[45],((C_word*)((C_word*)t0)[2])[1]);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,1,t3);
/* synrules.scm:61: ##sys#append */
t5=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11586(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11586,5,av);}
a=C_alloc(8);
t5=C_i_cadr(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
if(C_truep(C_i_pairp(t6))){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11642,a[2]=t6,a[3]=t9,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1029: ##sys#check-syntax */
t11=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[102];
av2[3]=t6;
av2[4]=lf[338];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11601,a[2]=t6,a[3]=t9,a[4]=t1,a[5]=t2,a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1021: ##sys#check-syntax */
t11=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[102];
av2[3]=t6;
av2[4]=lf[162];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}}

/* k11582 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11584,2,av);}
/* expand.scm:1013: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[102];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_7006,2,av);}
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
t13=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7011,a[2]=t8,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7023,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7050,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7112,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7139,a[2]=t8,a[3]=t6,a[4]=t12,a[5]=t10,a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t18=C_mutate2((C_word*)lf[118]+1 /* (set! ##sys#syntax-error-culprit ...) */,((C_word*)t0)[7]);
t19=t17;
f_7139(t19,t18);}
else{
t18=t17;
f_7139(t18,C_SCHEME_UNDEFINED);}}

/* ##sys#check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6996(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_6996,c,av);}
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
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7006,a[2]=t11,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t4,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t11))){
/* expand.scm:719: ##sys#current-environment */
t13=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=t12;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_i_car(t11);
f_7006(2,av2);}}}

/* k7080 in loop in k7052 in lambda-list? in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7082,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_not(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7016 in test in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7018,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* expand.scm:722: err */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7023(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* test in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7011(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7011,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7018,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:722: pred */
t6=t3;{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* map-loop2444 */
static void C_fcall f_8333(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8333,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8358,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* synrules.scm:110: g2450 */
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

/* k6637 in mwalk in match-expression in k4123 in k3645 in k3641 in k3637 in k3633 */
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6639,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:622: mwalk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6585(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* map-loop354 in extend-se in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4004(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4004,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4029,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:130: g360 */
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

/* k3633 */
static void C_ccall f_3635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3635,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#features ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:73: make-parameter */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3637 in k3633 */
static void C_ccall f_3639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3639,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#current-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:74: make-parameter */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(78,c,6)))){
C_save_and_reclaim((void *)f_4125,2,av);}
a=C_alloc(78);
t2=C_mutate2((C_word*)lf[19]+1 /* (set! ##sys#macro-environment ...) */,t1);
t3=C_set_block_item(lf[20] /* ##sys#chicken-macro-environment */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[21] /* ##sys#chicken-ffi-macro-environment */,0,C_SCHEME_END_OF_LIST);
t5=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#ensure-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4129,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[27]+1 /* (set! ##sys#extend-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4166,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[28]+1 /* (set! ##sys#copy-macro ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4208,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[29]+1 /* (set! ##sys#macro? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4221,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[30]+1 /* (set! ##sys#unregister-macro ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4258,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[31]+1 /* (set! ##sys#undefine-macro! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4303,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[32]+1 /* (set! ##sys#expand-0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4309,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(lf[58] /* ##sys#compiler-syntax-hook */,0,C_SCHEME_FALSE);
t13=C_set_block_item(lf[60] /* ##sys#enable-runtime-macros */,0,C_SCHEME_FALSE);
t14=C_mutate2((C_word*)lf[61]+1 /* (set! expand ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4806,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[62]+1 /* (set! ##sys#expand ...) */,*((C_word*)lf[61]+1));
t16=C_mutate2((C_word*)lf[63]+1 /* (set! ##sys#extended-lambda-list? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4873,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[67]+1 /* (set! ##sys#expand-extended-lambda-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4920,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[90]+1 /* (set! ##sys#defjam-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5523,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[92]+1 /* (set! ##sys#expand-multiple-values-assignment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5529,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t20=C_set_block_item(lf[97] /* ##sys#define-definition */,0,C_SCHEME_UNDEFINED);
t21=C_set_block_item(lf[98] /* ##sys#define-syntax-definition */,0,C_SCHEME_UNDEFINED);
t22=C_set_block_item(lf[99] /* ##sys#define-values-definition */,0,C_SCHEME_UNDEFINED);
t23=C_mutate2((C_word*)lf[100]+1 /* (set! ##sys#canonicalize-body ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5708,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2(&lf[116] /* (set! match-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6582,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2((C_word*)lf[108]+1 /* (set! ##sys#expand-curried-define ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6664,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t26=C_set_block_item(lf[117] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t27=C_set_block_item(lf[118] /* ##sys#syntax-error-culprit */,0,C_SCHEME_FALSE);
t28=C_set_block_item(lf[119] /* ##sys#syntax-context */,0,C_SCHEME_END_OF_LIST);
t29=C_mutate2((C_word*)lf[120]+1 /* (set! syntax-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6719,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate2((C_word*)lf[41]+1 /* (set! ##sys#syntax-error-hook ...) */,*((C_word*)lf[120]+1));
t31=C_mutate2((C_word*)lf[123]+1 /* (set! ##sys#syntax-error/context ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6730,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate2((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6951,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[143]+1 /* (set! get-line-number ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6957,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2((C_word*)lf[54]+1 /* (set! ##sys#check-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6996,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[177]+1 /* (set! make-er/ir-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7451,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[182]+1 /* (set! er-macro-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7989,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[183]+1 /* (set! ir-macro-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7995,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[23]+1 /* (set! ##sys#er-transformer ...) */,*((C_word*)lf[182]+1));
t39=C_mutate2((C_word*)lf[184]+1 /* (set! ##sys#ir-transformer ...) */,*((C_word*)lf[183]+1));
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8004,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11911,a[2]=t40,tmp=(C_word)a,a+=3,tmp);
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11913,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:926: ##sys#er-transformer */
t43=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t43;
av2[1]=t41;
av2[2]=t42;
((C_proc)(void*)(*((C_word*)t43+1)))(3,av2);}}

/* ##sys#ensure-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,4)))){
C_save_and_reclaim((void*)f_4129,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(C_i_closurep(t2))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4146,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:161: ##sys#er-transformer */
t7=*((C_word*)lf[23]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
if(C_truep(C_i_structurep(t2,lf[24]))){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* expand.scm:163: ##sys#error */
t6=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
av2[3]=lf[26];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}}

/* k11602 in k11599 in a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11604(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11604,2,av);}
a=C_alloc(12);
t2=C_i_getprop(((C_word*)t0)[2],lf[5],C_SCHEME_FALSE);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11615,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11639,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1024: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t6;
tp(2,av2);}}

/* k11599 in a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11601,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1022: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[102];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[340];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* doloop1485 in compare in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7649(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_7649,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7670,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=C_i_vector_ref(((C_word*)t0)[4],t2);
t10=C_i_vector_ref(((C_word*)t0)[5],t2);
/* expand.scm:843: compare */
t11=((C_word*)((C_word*)t0)[6])[1];{
C_word av2[4];
av2[0]=t11;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
f_7590(4,av2);}}}

/* k7610 in compare in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7612,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:837: compare */
t6=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[5];
av2[2]=t3;
av2[3]=t5;
f_7590(4,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11626 in k11613 in k11602 in k11599 in a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11628,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
/* expand.scm:1026: ##sys#defjam-error */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_i_car(((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[335],((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_9081 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_9081(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9081,6,av);}
a=C_alloc(7);
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_a_i_cons(&a,2,t2,t3);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,t6,t4);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9107,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:251: segment-pattern? */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k9754 in k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_9756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9756,2,av);}
/* expand.scm:1484: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[242]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[242]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[247];
tp(4,av2);}}

/* k11247 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_11249(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11249,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
f_11014(2,av2);}}
else{
t2=C_u_i_car(((C_word*)t0)[3]);
t3=C_i_vectorp(t2);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
f_11014(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_u_i_car(((C_word*)t0)[3]);
/* expand.scm:1173: ##sys#srfi-4-vector? */
t6=*((C_word*)lf[310]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k11613 in k11602 in k11599 in a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_11615,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11628,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11635,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1025: r */
t5=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[102];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k11616 in k11613 in k11602 in k11599 in a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11618,2,av);}
a=C_alloc(9);
t2=C_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[335],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11643 in k11640 in a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11645(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11645,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=C_u_i_car(t3);
t5=C_i_car(((C_word*)t0)[2]);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
/* expand.scm:1032: ##sys#syntax-error-hook */
t7=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=lf[336];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_11648(2,av2);}}}

/* k11640 in a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11642,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1030: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[102];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[337];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11646 in k11643 in k11640 in a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11648(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11648,2,av);}
a=C_alloc(21);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[72],t4);
t6=C_a_i_list(&a,2,lf[23],t5);
t7=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[335],t2,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k11109 in k11090 in k11087 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_11111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_11111,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[292],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[50],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7762 in k7707 in k7699 in compare in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7764,2,av);}
a=C_alloc(4);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7749,a[2]=((C_word*)t0)[3],a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:853: g1540 */
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  /* expand.scm:853: g1540 */
  f_7749(t3,t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11633 in k11613 in k11602 in k11599 in a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11635,2,av);}
/* expand.scm:1025: c */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k5929 in k5926 in k5900 in k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5931,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:517: reverse */
t4=*((C_word*)lf[69]+1);{
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

/* k11637 in k11602 in k11599 in a11585 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11639,2,av);}
/* expand.scm:1024: ##sys#register-export */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[339]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[339]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k4144 in ensure-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4146,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5932 in k5929 in k5926 in k5900 in k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5934(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5934,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5939,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5939(t6,t2,((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k5944 in map-loop1074 in k5932 in k5929 in k5926 in k5900 in k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5946(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_5946,2,t0,t1);}
a=C_alloc(17);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_slot(((C_word*)t0)[4],C_fix(0));
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(0)))){
/* expand.scm:513: ##sys#expand-multiple-values-assignment */
t5=*((C_word*)lf[92]+1);{
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
av2[1]=C_a_i_list(&a,3,lf[95],t5,t4);
f_5972(2,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5829 in k5818 in loop in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5831,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5839,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:496: expand */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6267(t4,t3,((C_word*)t0)[4]);}

/* k5837 in k5829 in k5818 in loop in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5839,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* expand.scm:496: ##sys#append */
t3=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* g1549 in k7790 in k7707 in k7699 in compare in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static C_word C_fcall f_7777(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
return(C_eqp(((C_word*)t0)[2],t2));}

/* k8935 in k8929 in k8926 */
static void C_ccall f_8937(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8937,2,av);}
a=C_alloc(12);
t2=t1;
if(C_truep(C_i_nullp(t2))){
/* synrules.scm:216: ##sys#syntax-error-hook */
t3=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[213];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* synrules.scm:217: process-template */
t6=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=((C_word*)t0)[11];
av2[4]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t6))(5,av2);}}}

/* map-loop1074 in k5932 in k5929 in k5926 in k5900 in k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5939(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5939,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5946,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_5946(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_5946(t6,C_SCHEME_FALSE);}}

/* k8929 in k8926 */
static void C_ccall f_8931(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_8931,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_fixnum_plus(((C_word*)t0)[2],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8937,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t6=C_i_car(((C_word*)t0)[4]);
/* synrules.scm:214: free-meta-variables */
t7=((C_word*)((C_word*)t0)[10])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k5935 in k5932 in k5929 in k5926 in k5900 in k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5937,2,av);}
/* expand.scm:471: ##sys#append */
t2=*((C_word*)lf[70]+1);{
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

/* k5818 in loop in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5820(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5820,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5827,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5831,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:496: reverse */
t4=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* expand.scm:497: loop */
t5=((C_word*)((C_word*)t0)[7])[1];
f_5801(t5,((C_word*)t0)[2],t3,t4);}}

/* k5825 in k5818 in loop in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5827,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[104],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9053 in k9049 in k8926 */
static void C_ccall f_9055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9055,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8947 in k8935 in k8929 in k8926 */
static void C_ccall f_8949(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8949,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8999,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[10]))){
t5=C_u_i_cdr(((C_word*)t0)[10]);
if(C_truep(C_i_nullp(t5))){
if(C_truep(C_i_symbolp(t2))){
t6=C_u_i_car(((C_word*)t0)[10]);
t7=t4;
f_8999(t7,C_eqp(t2,t6));}
else{
t6=t4;
f_8999(t6,C_SCHEME_FALSE);}}
else{
t6=t4;
f_8999(t6,C_SCHEME_FALSE);}}
else{
t5=t4;
f_8999(t5,C_SCHEME_FALSE);}}

/* k9049 in k8926 */
static void C_ccall f_9051(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9051,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* synrules.scm:237: process-template */
t6=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t6))(5,av2);}}

/* k6380 in loop2 in k6309 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6382,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[4]);
/* expand.scm:579: ##sys#expand-curried-define */
t4=*((C_word*)lf[108]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5926 in k5900 in k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5928,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:516: reverse */
t4=*((C_word*)lf[69]+1);{
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

/* k6387 in k6380 in loop2 in k6309 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6389,2,av);}
/* expand.scm:578: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6316(t2,((C_word*)t0)[3],t1);}

/* k7790 in k7707 in k7699 in compare in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7792,2,av);}
a=C_alloc(4);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7777,a[2]=((C_word*)t0)[3],a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:860: g1549 */
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  /* expand.scm:860: g1549 */
  f_7777(t3,t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10258 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_10260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10260,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,lf[200],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5900 in k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_5902,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5906,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5928,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:515: reverse */
t9=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k7025 in err in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7027,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7041,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:729: symbol->string */
t5=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7048,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:730: symbol->string */
t5=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k3903 in k3888 in k3863 in extend-se in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3905,2,av);}
/* expand.scm:136: append */
t2=*((C_word*)lf[15]+1);{
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

/* err in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7023(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7023,3,t0,t1,t2);}
a=C_alloc(6);
t3=*((C_word*)lf[118]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7027,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:726: get-line-number */
t5=*((C_word*)lf[143]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[118]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6904 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6906,2,av);}
/* expand.scm:690: outstr */
t2=((C_word*)t0)[2];
f_6799(t2,((C_word*)t0)[3],t1);}

/* map-loop417 in k3888 in k3863 in extend-se in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_3907(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_3907,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
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

/* k8953 in k8950 in k8947 in k8935 in k8929 in k8926 */
static void C_ccall f_8955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8955,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8976,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* synrules.scm:231: segment-tail */
t4=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8950 in k8947 in k8935 in k8929 in k8926 */
static void C_fcall f_8952(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_8952,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8978,a[2]=t4,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_8978(t6,t2,((C_word*)t0)[8],t1);}

/* loop in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5801(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5801,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5820,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_car(t5);
if(C_truep(C_i_symbolp(t7))){
t8=(
  /* expand.scm:492: comp */
  f_5723(((C_word*)((C_word*)t0)[4])[1],lf[101],t7)
);
t9=t6;
f_5820(t9,(C_truep(t8)?t8:(
  /* expand.scm:493: comp */
  f_5723(((C_word*)((C_word*)t0)[4])[1],lf[103],t7)
)));}
else{
t8=t6;
f_5820(t8,C_SCHEME_FALSE);}}
else{
t7=t6;
f_5820(t7,C_SCHEME_FALSE);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[104],((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5281 in k5252 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5283,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5267(t3,t2);}

/* k9776 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_9778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9778,2,av);}
/* expand.scm:1430: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[260];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9768 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_9770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9770,2,av);}
t2=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1444: c */
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
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k10289 in k10268 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_10291(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_10291,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10300,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1317: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[279];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[280];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=C_a_i_list(&a,2,lf[71],((C_word*)t0)[7]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10330,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* expand.scm:1322: walk */
t8=((C_word*)((C_word*)t0)[5])[1];
f_10190(t8,t5,t6,t7);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10345,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1325: walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_10190(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k7032 in k7025 in err in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7034,2,av);}
/* expand.scm:727: ##sys#syntax-error-hook */
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

/* loop in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6912(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6912,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[132];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6926,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* expand.scm:697: symbol->string */
t5=*((C_word*)lf[44]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k6908 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6910,2,av);}
/* expand.scm:691: string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[131];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k9786 in a9779 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_9788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9788,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1435: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[261];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a9779 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_9780(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9780,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9788,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1435: r */
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[243];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k6924 in loop in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6852 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6926(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6926,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6930,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:698: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6912(t6,t3,t5);}

/* k5265 in k5252 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5267(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_5267,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
/* expand.scm:401: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4951(t3,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[5],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);}
else{
/* expand.scm:402: err */
t3=((C_word*)t0)[7];
f_4923(t3,((C_word*)t0)[4],lf[76]);}}

/* k7668 in doloop1485 in compare in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7670,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7649(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6394 in loop2 in k6309 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
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
C_save_and_reclaim((void *)f_6396,2,av);}
a=C_alloc(18);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_i_cddr(((C_word*)t0)[4]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,lf[72],t7);
t9=C_a_i_cons(&a,2,t8,((C_word*)t0)[5]);
t10=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
/* expand.scm:584: loop */
t11=((C_word*)((C_word*)t0)[7])[1];
f_6273(t11,((C_word*)t0)[8],((C_word*)t0)[9],t4,t9,t10);}

/* k10268 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_10270(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10270,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[71],((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10281,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* expand.scm:1314: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_10190(t6,t4,((C_word*)t0)[6],t5);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10291,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t3=C_u_i_car(((C_word*)t0)[7]);
/* expand.scm:1315: c */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10291(2,av2);}}}}

/* k5252 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5254(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5254,2,t0,t1);}
a=C_alloc(13);
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_eqp(t2,lf[65]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5267,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t4,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
t7=t6;
f_5267(t7,C_SCHEME_UNDEFINED);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5283,a[2]=((C_word*)t0)[9],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:399: macro-alias */
f_3666(t7,lf[77],((C_word*)t0)[10]);}}
else{
t6=C_eqp(t2,lf[64]);
if(C_truep(t6)){
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[4],C_fix(1)))){
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5301,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t4))){
t8=C_u_i_car(t4);
t9=t7;
f_5301(t9,C_i_symbolp(t8));}
else{
t8=t7;
f_5301(t8,C_SCHEME_FALSE);}}
else{
/* expand.scm:411: err */
t7=((C_word*)t0)[8];
f_4923(t7,((C_word*)t0)[6],lf[79]);}}
else{
t7=C_eqp(t2,lf[66]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5343,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[12],a[7]=t4,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=((C_word*)((C_word*)t0)[9])[1];
if(C_truep(t9)){
t10=t8;
f_5343(t10,C_SCHEME_UNDEFINED);}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5362,a[2]=((C_word*)t0)[9],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:413: macro-alias */
f_3666(t10,lf[77],((C_word*)t0)[10]);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t8=((C_word*)t0)[4];
switch(t8){
case C_fix(0):
t9=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[7]);
/* expand.scm:420: loop */
t10=((C_word*)((C_word*)t0)[5])[1];
f_4951(t10,((C_word*)t0)[6],C_fix(0),t9,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4);
case C_fix(1):
t9=C_a_i_list2(&a,2,((C_word*)t0)[2],C_SCHEME_FALSE);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[12]);
/* expand.scm:421: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4951(t11,((C_word*)t0)[6],C_fix(1),((C_word*)t0)[7],t10,C_SCHEME_END_OF_LIST,t4);
case C_fix(2):
/* expand.scm:422: err */
t9=((C_word*)t0)[8];
f_4923(t9,((C_word*)t0)[6],lf[81]);
default:
t9=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t10=C_a_i_cons(&a,2,t9,((C_word*)t0)[13]);
/* expand.scm:423: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_4951(t11,((C_word*)t0)[6],C_fix(3),((C_word*)t0)[7],((C_word*)t0)[12],t10,t4);}}
else{
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5430,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=t4,a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t9=C_u_i_length(((C_word*)t0)[2]);
t10=C_eqp(C_fix(2),t9);
if(C_truep(t10)){
t11=C_i_car(((C_word*)t0)[2]);
t12=t8;
f_5430(t12,C_i_symbolp(t11));}
else{
t11=t8;
f_5430(t11,C_SCHEME_FALSE);}}
else{
t9=t8;
f_5430(t9,C_SCHEME_FALSE);}}}}}}

/* get-line-number in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6957(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6957,3,av);}
a=C_alloc(4);
if(C_truep(*((C_word*)lf[117]+1))){
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6977,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:710: ##sys#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[144]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[144]+1);
av2[1]=t5;
av2[2]=*((C_word*)lf[117]+1);
av2[3]=t4;
tp(4,av2);}}
else{
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
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

/* k8926 */
static void C_ccall f_8928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_8928,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:211: segment-depth */
t3=((C_word*)((C_word*)t0)[11])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9051,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
/* synrules.scm:236: process-template */
t5=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9072,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9076,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:240: vector->list */
t4=*((C_word*)lf[179]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* ##sys#syntax-rules-mismatch in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6951,3,av);}
/* expand.scm:703: ##sys#syntax-error-hook */
t3=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[142];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* loop in fini/syntax in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6087(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_6087,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6109,a[2]=t2,a[3]=t1,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:526: reverse */
t10=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6161,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
if(C_truep(C_i_listp(t6))){
t7=t2;
t8=C_u_i_car(t7);
t9=C_i_length(t8);
if(C_truep(C_fixnum_greater_or_equal_p(C_fix(3),t9))){
t10=C_i_caar(t2);
if(C_truep(C_i_symbolp(t10))){
t11=t2;
t12=C_u_i_car(t11);
t13=C_u_i_car(t12);
/* expand.scm:531: comp */
t14=t5;
f_6161(t14,(
  /* expand.scm:531: comp */
  f_5723(((C_word*)((C_word*)t0)[3])[1],lf[102],t13)
));}
else{
t11=t5;
f_6161(t11,C_SCHEME_FALSE);}}
else{
t10=t5;
f_6161(t10,C_SCHEME_FALSE);}}
else{
t7=t5;
f_6161(t7,C_SCHEME_FALSE);}}
else{
/* expand.scm:527: loop */
t15=t1;
t16=t2;
t17=t3;
t18=C_SCHEME_TRUE;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}}}

/* k6083 in fini/syntax in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6085,2,av);}
/* expand.scm:522: fini */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5789(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_fcall f_10200(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10200,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10214,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10218,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1301: vector->list */
t6=*((C_word*)lf[179]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10237,a[2]=t3,a[3]=t1,a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[4],a[9]=t5,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1306: c */
t9=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[71],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k9720 in k9691 in k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_fcall f_9722(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,1)))){
C_save_and_reclaim_args((void *)trf_9722,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[257],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,lf[258],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[258],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5904 in k5900 in k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_5906,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[50],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#globalize in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4041(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4041,4,av);}
a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4047,a[2]=t5,a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4047(t7,t1,t2);}

/* a7340 in walk in k7137 in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7341(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7341,3,av);}
t3=(C_truep(C_i_symbolp(t2))?(
  /* expand.scm:787: lookup */
  f_3649(t2,((C_word*)t0)[2])
):C_SCHEME_FALSE);
if(C_truep(C_i_symbolp(t3))){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_eqp(t3,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t2;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_eqp(t4,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* loop1 in globalize in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4047(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4047,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=C_i_getprop(t3,lf[5],C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4063,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:141: g464 */
t6=t5;
f_4063(t6,t1,t4);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4081,a[2]=t2,a[3]=t6,a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4081(t8,t1,((C_word*)t0)[3]);}}
else{
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10244 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_10246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10246,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7571 in rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7573,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* g464 in loop1 in globalize in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4063(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_4063,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* expand.scm:145: loop1 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4047(t3,t1,t2);}
else{
t3=((C_word*)t0)[3];
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4095 in loop in loop1 in globalize in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4097(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_4097,2,t0,t1);}
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
/* expand.scm:151: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4081(t4,((C_word*)t0)[3],t3);}}

/* compare in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7590(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7590,4,av);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7612,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=C_u_i_car(t5);
t7=t3;
t8=C_u_i_car(t7);
/* expand.scm:836: compare */
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
C_word *av2=av; /* Re-use our own argvector */
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
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7649,a[2]=t6,a[3]=t11,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word)li96),tmp=(C_word)a,a+=8,tmp));
t13=((C_word*)t11)[1];
f_7649(t13,t1,C_fix(0),C_SCHEME_TRUE);}
else{
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}
else{
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_i_symbolp(t2);
t5=(C_truep(t4)?C_i_symbolp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t2;
t7=C_i_getprop(t6,lf[5],C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7701,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t7)){
t9=t8;
f_7701(t9,t7);}
else{
t9=t2;
t10=((C_word*)t0)[3];
t11=(
  /* expand.scm:868: lookup */
  f_3649(t9,t10)
);
if(C_truep(t11)){
t12=t8;
f_7701(t12,t11);}
else{
t12=t2;
t13=t8;
f_7701(t13,t12);}}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_eqp(t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}

/* loop in loop1 in globalize in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4081(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4081,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
/* expand.scm:149: ##sys#alias-global-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4097,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
t8=C_u_i_cdr(t7);
t9=t3;
f_4097(t9,C_i_symbolp(t8));}
else{
t6=t3;
f_4097(t6,C_SCHEME_FALSE);}}}

/* k10279 in k10268 in k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_10281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10281,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,lf[200],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* err in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4923(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4923,3,t0,t1,t2);}
/* expand.scm:341: errh */
t3=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* ##sys#expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4920(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4920,6,av);}
a=C_alloc(18);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4923,a[2]=t4,a[3]=t2,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4940,a[2]=t8,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=t5,a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:346: macro-alias */
f_3666(t11,lf[88],*((C_word*)lf[89]+1));}

/* k9794 in k9786 in a9779 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_ccall f_9796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9796,2,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10235 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_10237(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10237,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10246,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1308: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[277];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[278];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=C_a_i_list(&a,2,lf[71],((C_word*)t0)[6]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10260,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* expand.scm:1311: walk */
t7=((C_word*)((C_word*)t0)[7])[1];
f_10190(t7,t5,((C_word*)t0)[4],t6);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10270,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1312: c */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* a11902 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11903(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11903,5,av);}
t5=*((C_word*)lf[353]+1);
/* expand.scm:933: g1645 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[353]+1));
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[353]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=*((C_word*)lf[2]+1);
av2[6]=*((C_word*)lf[232]+1);
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_FALSE;
av2[9]=lf[354];
tp(10,av2);}}

/* k11899 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11901,2,av);}
/* expand.scm:930: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[354];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4196 in k4171 in k4168 in extend-macro-environment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4198,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g507 in k4171 in k4168 in extend-macro-environment in k4123 in k3645 in k3641 in k3637 in k3633 */
static C_word C_fcall f_4180(C_word t0,C_word t1){
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

/* k4171 in k4168 in extend-macro-environment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_4173,2,av);}
a=C_alloc(16);
t2=t1;
t3=(
  /* expand.scm:168: lookup */
  f_3649(((C_word*)t0)[2],((C_word*)t0)[3])
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4180,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:165: g507 */
t5=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(
  /* expand.scm:165: g507 */
  f_4180(t4,t3)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_a_i_list2(&a,2,((C_word*)t0)[4],t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4198,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],t5);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
/* expand.scm:175: ##sys#macro-environment */
t9=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t6;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k4168 in extend-macro-environment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4170,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4173,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:167: ##sys#ensure-transformer */
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3641 in k3637 in k3633 */
static void C_ccall f_3643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3643,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[2]+1 /* (set! ##sys#current-meta-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:77: make-parameter */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[1]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_3647,2,av);}
a=C_alloc(18);
t2=C_mutate2((C_word*)lf[3]+1 /* (set! ##sys#active-eval-environment ...) */,t1);
t3=C_mutate2(&lf[4] /* (set! lookup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3649,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2(&lf[6] /* (set! macro-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3666,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[10]+1 /* (set! strip-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3724,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[12]+1 /* (set! ##sys#strip-syntax ...) */,*((C_word*)lf[10]+1));
t7=C_mutate2((C_word*)lf[13]+1 /* (set! ##sys#extend-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3861,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[17]+1 /* (set! ##sys#globalize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4041,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4125,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:156: make-parameter */
t10=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* lookup in k3645 in k3641 in k3637 in k3633 */
static C_word C_fcall f_3649(C_word t1,C_word t2){
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
t5=C_i_getprop(t4,lf[5],C_SCHEME_FALSE);
return((C_truep(t5)?t5:C_SCHEME_FALSE));}}

/* a11912 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11913(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11913,5,av);}
t5=*((C_word*)lf[353]+1);
/* expand.scm:927: g1631 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[353]+1));
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[353]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=*((C_word*)lf[1]+1);
av2[6]=*((C_word*)lf[19]+1);
av2[7]=C_SCHEME_FALSE;
av2[8]=C_SCHEME_FALSE;
av2[9]=lf[355];
tp(10,av2);}}

/* k11909 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11911,2,av);}
/* expand.scm:924: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[355];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_save_and_reclaim((void *)f_4965,2,av);}
a=C_alloc(28);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[7]))){
t4=t3;
f_4969(t4,((C_word*)t0)[9]);}
else{
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5109,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5169,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=t6,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:370: reverse */
t10=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}

/* k8970 in k8974 in k8953 in k8950 in k8947 in k8935 in k8929 in k8926 */
static void C_ccall f_8972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8972,2,av);}
/* synrules.scm:233: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k4967 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4969(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_4969,2,t0,t1);}
a=C_alloc(11);
t2=t1;
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
/* expand.scm:357: values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
C_values(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=((C_word*)((C_word*)t0)[7])[1];
if(C_truep(t4)){
t5=t3;
f_4981(t5,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[8]))){
t5=C_i_cdr(((C_word*)t0)[2]);
t6=t3;
f_4981(t6,C_i_nullp(t5));}
else{
t5=t3;
f_4981(t5,C_SCHEME_FALSE);}}}}

/* k8974 in k8953 in k8950 in k8947 in k8935 in k8929 in k8926 */
static void C_ccall f_8976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8976,2,av);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8972,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:233: segment-tail */
t4=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* doloop2578 in k8950 in k8947 in k8935 in k8929 in k8926 */
static void C_fcall f_8978(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_8978,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=t2;
t5=C_eqp(t4,C_fix(1));
if(C_truep(t5)){
t6=t3;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_fixnum_difference(t2,C_fix(1));
t7=C_a_i_list(&a,3,lf[214],lf[70],t3);
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4951(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(15,0,6)))){
C_save_and_reclaim_args((void *)trf_4951,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t6))){
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4965,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5213,a[2]=t7,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:358: reverse */
t9=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* expand.scm:358: reverse */
t8=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
if(C_truep(C_i_symbolp(t6))){
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
/* expand.scm:386: err */
t7=((C_word*)t0)[8];
f_4923(t7,t1,lf[75]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t7=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t6);
/* expand.scm:390: loop */
t12=t1;
t13=C_fix(4);
t14=t3;
t15=t4;
t16=C_SCHEME_END_OF_LIST;
t17=C_SCHEME_END_OF_LIST;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
t5=t16;
t6=t17;
goto loop;}
else{
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t6);
/* expand.scm:390: loop */
t12=t1;
t13=C_fix(4);
t14=t3;
t15=t4;
t16=C_SCHEME_END_OF_LIST;
t17=C_SCHEME_END_OF_LIST;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
t5=t16;
t6=t17;
goto loop;}}}
else{
if(C_truep(C_i_pairp(t6))){
t7=C_i_car(t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5254,a[2]=t8,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[4],a[12]=t4,a[13]=t5,tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_symbolp(t8))){
t10=C_eqp(C_fix(3),t2);
t11=t9;
f_5254(t11,(C_truep(t10)?C_SCHEME_FALSE:(
  /* expand.scm:395: lookup */
  f_3649(t8,((C_word*)t0)[10])
)));}
else{
t10=t9;
f_5254(t10,C_SCHEME_FALSE);}}
else{
/* expand.scm:392: err */
t7=((C_word*)t0)[8];
f_4923(t7,t1,lf[85]);}}}}

/* k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4943,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4946,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:349: macro-alias */
f_3666(t3,lf[86],*((C_word*)lf[20]+1));}

/* k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4946(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4946,2,av);}
a=C_alloc(14);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t4,a[10]=((C_word*)t0)[8],a[11]=((C_word)li49),tmp=(C_word)a,a+=12,tmp));
t6=((C_word*)t4)[1];
f_4951(t6,((C_word*)t0)[9],C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[10]);}

/* k8997 in k8947 in k8935 in k8929 in k8926 */
static void C_fcall f_8999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,1)))){
C_save_and_reclaim_args((void *)trf_8999,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_8952(t2,((C_word*)t0)[3]);}
else{
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[2];
f_8952(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t3));}}

/* k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4940,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4943,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:348: macro-alias */
f_3666(t3,lf[87],*((C_word*)lf[20]+1));}

/* k9487 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9489,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[89]+1 /* (set! ##sys#default-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9493,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9497,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1552: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11889 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11891,2,av);}
/* expand.scm:937: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[352];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11892 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11893(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11893,5,av);}
t5=*((C_word*)lf[353]+1);
/* expand.scm:940: g1659 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[353]+1));
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[353]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=*((C_word*)lf[1]+1);
av2[6]=*((C_word*)lf[19]+1);
av2[7]=C_SCHEME_FALSE;
av2[8]=C_SCHEME_TRUE;
av2[9]=lf[352];
tp(10,av2);}}

/* k9495 in k9487 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in ... */
static void C_ccall f_9497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9497,2,av);}
/* expand.scm:1552: make-parameter */
t2=*((C_word*)lf[233]+1);{
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

/* k9491 in k9487 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in ... */
static void C_ccall f_9493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9493,2,av);}
t2=C_mutate2((C_word*)lf[232]+1 /* (set! ##sys#meta-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8056 in loop in check-for-multiple-bindings in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_8058(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_8058,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8078,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1046: string-append */
t4=*((C_word*)lf[36]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[188];
av2[3]=((C_word*)t0)[8];
av2[4]=lf[189];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_caar(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[6]);
/* expand.scm:1050: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8045(t6,((C_word*)t0)[5],t3,t5,((C_word*)t0)[3]);}}

/* k9428 in g2721 in k9411 in fixup-macro-environment in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in ... */
static void C_ccall f_9430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9430,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11878 in a11875 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11880,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[72],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5789(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_save_and_reclaim_args((void *)trf_5789,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(14);
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_i_nullp(t4):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5801,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word)li57),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_5801(t11,t1,t5,C_SCHEME_END_OF_LIST);}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5893,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t10,a[8]=t11,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:507: reverse */
t13=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t13;
av2[1]=t12;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}}

/* k8076 in k8056 in loop in check-for-multiple-bindings in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8078,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
/* expand.scm:1045: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[187]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[187]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t4;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* k10216 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_10218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10218,2,av);}
/* expand.scm:1301: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10190(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k10212 in walk1 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_10214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_10214,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[196],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8966 in k8974 in k8953 in k8950 in k8947 in k8935 in k8929 in k8926 */
static void C_ccall f_8968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8968,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[70],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in check-for-multiple-bindings in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_8045(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_8045,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_i_nullp(t2);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8058,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t7=C_i_caar(t2);
if(C_truep(C_i_memq(t7,t3))){
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_car(t9);
t11=C_i_memq(t10,t4);
t12=t6;
f_8058(t12,C_i_not(t11));}
else{
t8=t6;
f_8058(t8,C_SCHEME_FALSE);}}}

/* k9451 in k9411 in fixup-macro-environment in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in ... */
static void C_ccall f_9453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9453,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop2720 in k9411 in fixup-macro-environment in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in ... */
static void C_fcall f_9455(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9455,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9465,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:1536: g2721 */
t5=((C_word*)t0)[3];
f_9414(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#extend-macro-environment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4166(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4166,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4170,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:166: ##sys#macro-environment */
t6=*((C_word*)lf[19]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5540 in k5537 in a5534 in expand-multiple-values-assignment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5542(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5542,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_list(&a,3,lf[72],C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5561,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:456: append */
t6=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k5058 in k4979 in k4967 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5060,2,av);}
a=C_alloc(3);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,t2);
/* expand.scm:382: ##sys#append */
t4=*((C_word*)lf[70]+1);{
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
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_a_i_list1(&a,1,t3);
/* expand.scm:382: ##sys#append */
t5=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* a5534 in expand-multiple-values-assignment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5535(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_5535,5,av);}
a=C_alloc(21);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5539,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
f_5539(2,av2);}}
else{
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=*((C_word*)lf[8]+1);
t11=((C_word*)t0)[3];
t12=C_i_check_list_2(t11,lf[16]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5671,a[2]=t8,a[3]=t14,a[4]=t10,a[5]=t9,a[6]=((C_word)li53),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_5671(t16,t5,t11);}}

/* ##sys#fixup-macro-environment in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_9406,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9413,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
/* expand.scm:1537: ##sys#append */
t7=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t2;
f_9413(2,av2);}}}

/* k5054 in k4979 in k4967 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5056(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5056,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:357: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t5;
C_values(4,av2);}}

/* ##sys#defjam-error in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5523,3,av);}
/* expand.scm:438: ##sys#syntax-error-hook */
t3=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[91];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5537 in a5534 in expand-multiple-values-assignment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5539,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[6];
if(C_truep(t4)){
/* expand.scm:452: gensym */
t5=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
f_5542(2,av2);}}}

/* g2721 in k9411 in fixup-macro-environment in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in ... */
static void C_fcall f_9414(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_9414,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9430,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
if(C_truep(C_i_nullp(t7))){
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_i_set_car(t5,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_u_i_car(t9);
/* expand.scm:1545: ##sys#append */
t11=*((C_word*)lf[70]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=t6;
av2[2]=t10;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k9411 in fixup-macro-environment in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_9413,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9414,a[2]=t2,a[3]=((C_word)li129),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=C_i_check_list_2(t4,lf[14]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9453,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9455,a[2]=t8,a[3]=t3,a[4]=((C_word)li130),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_9455(t10,t6,t4);}

/* k4245 in k4223 in macro? in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4247,2,av);}
t2=(
  /* expand.scm:186: lookup */
  f_3649(((C_word*)t0)[2],t1)
);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(t2)?C_i_pairp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10483 in k10471 in a10468 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in ... */
static void C_ccall f_10485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
C_save_and_reclaim((void *)f_10485,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10513,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10627,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li153),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10627(t12,t8,((C_word*)t0)[2]);}

/* ##sys#expand-multiple-values-assignment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5529(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5529,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5535,a[2]=t3,a[3]=t2,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:448: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[96]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[96]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k10471 in a10468 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in ... */
static void C_ccall f_10473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
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
C_save_and_reclaim((void *)f_10473,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t4;
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_cdr(t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10485,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1270: r */
t11=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[294];
((C_proc)C_fast_retrieve_proc(t11))(3,av2);}}

/* k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8020,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11840,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11842,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:965: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8023,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8026,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11823,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11825,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:973: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8026,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8029,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11806,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11808,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:981: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8029,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11687,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11689,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:990: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k6309 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6311,2,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6316,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li66),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_6316(t5,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* loop2 in k6309 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6316(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,6)))){
C_save_and_reclaim_args((void *)trf_6316,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cadr(t2);
t4=t3;
if(C_truep(C_i_pairp(t4))){
t5=C_i_car(t4);
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6382,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:576: ##sys#check-syntax */
t7=*((C_word*)lf[54]+1);{
C_word av2[7];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[109];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6396,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:581: ##sys#check-syntax */
t7=*((C_word*)lf[54]+1);{
C_word av2[7];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[110];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6329,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:566: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word av2[7];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[112];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(7,av2);}}}

/* k4217 in copy-macro in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4219,2,av);}
t2=(
  /* expand.scm:180: lookup */
  f_3649(((C_word*)t0)[2],t1)
);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[27]+1);
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
C_apply(5,av2);}}

/* k6327 in loop2 in k6309 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6329(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6329,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
t5=C_eqp(t4,((C_word*)t0)[2]);
if(C_truep(t5)){
/* expand.scm:568: ##sys#defjam-error */
t6=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_6332(2,av2);}}}

/* k7137 in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7139(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_7139,2,t0,t1);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7144,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li92),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_7144(t5,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}

/* ##sys#copy-macro in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4208(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4208,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4219,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:180: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6330 in k6327 in loop2 in k6309 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6332(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_6332,2,av);}
a=C_alloc(12);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_cddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t4))){
t5=C_i_caddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[5]);
t7=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
/* expand.scm:569: loop */
t8=((C_word*)((C_word*)t0)[7])[1];
f_6273(t8,((C_word*)t0)[8],((C_word*)t0)[9],t3,t6,t7);}
else{
t5=C_a_i_cons(&a,2,lf[111],((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
/* expand.scm:569: loop */
t7=((C_word*)((C_word*)t0)[7])[1];
f_6273(t7,((C_word*)t0)[8],((C_word*)t0)[9],t3,t5,t6);}}

/* k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8010,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:944: ##sys#macro-environment */
t3=*((C_word*)lf[19]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* walk in k7137 in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_7144(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_7144,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_vectorp(t3))){
t4=C_i_vector_ref(t3,C_fix(0));
t5=t4;
t6=C_block_size(t3);
t7=C_fixnum_greaterp(t6,C_fix(1));
t8=(C_truep(t7)?C_i_vector_ref(t3,C_fix(1)):C_fix(0));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7163,a[2]=t9,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t11=C_eqp(t6,C_fix(1));
if(C_truep(t11)){
t12=t10;
f_7163(t12,C_fix(1));}
else{
t12=C_fixnum_greaterp(t6,C_fix(2));
t13=t10;
f_7163(t13,(C_truep(t12)?C_i_vector_ref(t3,C_fix(2)):C_fix(99999)));}}
else{
if(C_truep(C_immp(t3))){
t4=C_eqp(t3,t2);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* expand.scm:772: err */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7023(t5,t1,lf[154]);}}
else{
if(C_truep(C_i_symbolp(t3))){
t4=t3;
t5=C_eqp(t4,lf[155]);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t4,lf[156]);
if(C_truep(t6)){
/* expand.scm:776: test */
t7=((C_word*)((C_word*)t0)[4])[1];
f_7011(t7,t1,t2,*((C_word*)lf[157]+1),lf[158]);}
else{
t7=C_eqp(t4,lf[159]);
if(C_truep(t7)){
/* expand.scm:777: test */
t8=((C_word*)((C_word*)t0)[4])[1];
f_7011(t8,t1,t2,*((C_word*)lf[160]+1),lf[161]);}
else{
t8=C_eqp(t4,lf[162]);
if(C_truep(t8)){
/* expand.scm:778: test */
t9=((C_word*)((C_word*)t0)[4])[1];
f_7011(t9,t1,t2,*((C_word*)lf[160]+1),lf[163]);}
else{
t9=C_eqp(t4,lf[164]);
if(C_truep(t9)){
/* expand.scm:779: test */
t10=((C_word*)((C_word*)t0)[4])[1];
f_7011(t10,t1,t2,((C_word*)((C_word*)t0)[5])[1],lf[165]);}
else{
t10=C_eqp(t4,lf[166]);
if(C_truep(t10)){
/* expand.scm:780: test */
t11=((C_word*)((C_word*)t0)[4])[1];
f_7011(t11,t1,t2,*((C_word*)lf[167]+1),lf[168]);}
else{
t11=C_eqp(t4,lf[169]);
if(C_truep(t11)){
/* expand.scm:781: test */
t12=((C_word*)((C_word*)t0)[4])[1];
f_7011(t12,t1,t2,*((C_word*)lf[170]+1),lf[171]);}
else{
t12=C_eqp(t4,lf[172]);
if(C_truep(t12)){
/* expand.scm:782: test */
t13=((C_word*)((C_word*)t0)[4])[1];
f_7011(t13,t1,t2,((C_word*)((C_word*)t0)[6])[1],lf[173]);}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7341,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:784: test */
t14=((C_word*)((C_word*)t0)[4])[1];
f_7011(t14,t1,t2,t13,lf[174]);}}}}}}}}}
else{
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7398,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* expand.scm:794: walk */
t15=t4;
t16=t5;
t17=t6;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
/* expand.scm:792: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7023(t4,t1,lf[175]);}}
else{
/* expand.scm:791: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7023(t4,t1,lf[176]);}}}}}

/* k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8017,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11857,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11859,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:957: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8014(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8014,2,av);}
a=C_alloc(9);
t2=C_mutate2((C_word*)lf[185]+1 /* (set! ##sys#initial-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8017,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11874,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11876,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:949: ##sys#er-transformer */
t6=*((C_word*)lf[23]+1);{
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

/* k9463 in for-each-loop2720 in k9411 in fixup-macro-environment in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in ... */
static void C_ccall f_9465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9465,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9455(t3,((C_word*)t0)[4],t2);}

/* k11090 in k11087 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_11092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
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
C_save_and_reclaim((void *)f_11092,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=t5;
t7=C_i_caddr(((C_word*)t0)[2]);
t8=C_a_i_list(&a,2,t7,t2);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11111,a[2]=t2,a[3]=t9,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1191: expand */
t11=((C_word*)((C_word*)t0)[4])[1];
f_10959(t11,t10,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k8059 in k8056 in loop in check-for-multiple-bindings in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8061(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8061,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_caar(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
/* expand.scm:1049: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8045(t6,((C_word*)t0)[5],t3,((C_word*)t0)[6],t5);}

/* k11064 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_11066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11066,2,av);}
/* expand.scm:1176: expand */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10959(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k4223 in macro? in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4225,2,av);}
a=C_alloc(4);
t2=(
  /* expand.scm:184: lookup */
  f_3649(((C_word*)t0)[2],t1)
);
t3=C_i_pairp(t2);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:186: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8033(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8033,2,av);}
a=C_alloc(9);
t2=C_mutate2((C_word*)lf[97]+1 /* (set! ##sys#define-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8037,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11584,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11586,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1016: ##sys#er-transformer */
t6=*((C_word*)lf[23]+1);{
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

/* k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8037(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_8037,2,av);}
a=C_alloc(12);
t2=C_mutate2((C_word*)lf[98]+1 /* (set! ##sys#define-syntax-definition ...) */,t1);
t3=C_mutate2(&lf[186] /* (set! check-for-multiple-bindings ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8039,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8114,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11532,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11534,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1055: ##sys#er-transformer */
t7=*((C_word*)lf[23]+1);{
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

/* check-for-multiple-bindings in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_8039(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_8039,4,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8045,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8045(t8,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* ##sys#macro? in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4221,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4225,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:183: ##sys#current-environment */
t5=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_car(t3);
f_4225(2,av2);}}}

/* k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8007,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11891,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11893,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:939: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_8004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8004,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8007,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11901,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11903,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:932: ##sys#er-transformer */
t5=*((C_word*)lf[23]+1);{
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

/* k11087 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_11089(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11089,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1187: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[77];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_u_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(4));
if(C_truep(t4)){
t5=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1193: c */
t6=((C_word*)t0)[7];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_11129(2,av2);}}}}

/* k11081 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_11083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11083,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7108 in loop in k7052 in lambda-list? in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7110,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* expand.scm:741: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7062(t4,((C_word*)t0)[2],t3);}}

/* proper-list? in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7112,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7118,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  f_7118(t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in proper-list? in k7004 in check-syntax in k4123 in k3645 in k3641 in k3637 in k3633 */
static C_word C_fcall f_7118(C_word t1){
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

/* a10468 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in ... */
static void C_ccall f_10469(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10469,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10473,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1266: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[290];
av2[3]=t2;
av2[4]=lf[295];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10465 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in ... */
static void C_ccall f_10467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10467,2,av);}
/* expand.scm:1261: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
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

/* k10454 in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_10456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10456,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1340: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10190(t3,((C_word*)t0)[4],t2,C_fix(0));}

/* k10436 in k10391 in k10365 in simplify in k10186 in k10183 in k10180 in a10177 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_10438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10438,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_assq(lf[281],t3);
t5=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6446 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6448,2,av);}
/* expand.scm:590: fini/syntax */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6077(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k5341 in k5252 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5343(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_5343,2,t0,t1);}
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[2],C_fix(2)))){
/* expand.scm:415: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4951(t2,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}
else{
/* expand.scm:416: err */
t2=((C_word*)t0)[8];
f_4923(t2,((C_word*)t0)[4],lf[80]);}}

/* k6458 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6460(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6460,2,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[5]);
/* expand.scm:594: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_6273(t7,((C_word*)t0)[7],((C_word*)t0)[8],t3,t5,t6);}

/* for-each-loop380 in k3863 in extend-se in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_3955(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_3955,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_i_getprop(t7,lf[7],C_SCHEME_FALSE);
t9=(C_truep(t8)?C_a_i_putprop(&a,3,t6,lf[7],t8):C_a_i_putprop(&a,3,t6,lf[7],t7));
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

/* g796 in k4963 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5109(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_5109,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5166,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:366: ##sys#strip-syntax */
t7=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k11021 in k11015 in k11012 in k11009 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_11023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11023,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[104],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k11473 in k11470 in a11467 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 in ... */
static void C_ccall f_11475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11475,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[321],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11470 in a11467 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11472,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1089: check-for-multiple-bindings */
f_8039(t2,t3,((C_word*)t0)[2],lf[322]);}

/* a4338 in a4332 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4339,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4350,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[33]))){
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=t2;
f_4350(t4,C_i_memq(lf[40],t3));}
else{
t3=t2;
f_4350(t3,C_SCHEME_FALSE);}}

/* a4332 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4333,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4339,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li22),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:207: k562 */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k11486 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11488,2,av);}
/* expand.scm:1074: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[324];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4327(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4327,3,av);}
a=C_alloc(15);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4434,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li31),tmp=(C_word)a,a+=10,tmp);
/* expand.scm:207: with-exception-handler */
t5=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k5302 in k5299 in k5252 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5304(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_5304,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
/* expand.scm:409: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4951(t5,((C_word*)t0)[5],C_fix(2),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_END_OF_LIST,t4);}

/* k5299 in k5252 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5301(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5301,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t3)){
t4=t2;
f_5304(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_mutate2(((C_word *)((C_word*)t0)[8])+1,t4);
t6=t2;
f_5304(t6,t5);}}
else{
/* expand.scm:410: err */
t2=((C_word*)t0)[9];
f_4923(t2,((C_word*)t0)[5],lf[78]);}}

/* k4320 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4322,2,av);}
/* expand.scm:207: g566 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k11492 in a11489 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11494,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1080: check-for-multiple-bindings */
f_8039(t2,t3,((C_word*)t0)[2],lf[326]);}

/* a11489 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11490(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11490,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11494,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1079: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[324];
av2[3]=t2;
av2[4]=lf[327];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11495 in k11492 in a11489 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11497,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[325],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4312(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_4312,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4322,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4327,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[2],a[8]=((C_word)li32),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:207: call-with-current-continuation */
t9=*((C_word*)lf[48]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3888 in k3863 in extend-se in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
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
C_save_and_reclaim((void *)f_3890,2,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)t0)[2];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3905,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3907,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3907(t11,t7,t6,((C_word*)t0)[5]);}

/* k6110 in k6107 in loop in fini/syntax in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6112,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[106],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop1134 in k6107 in loop in fini/syntax in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6114(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6114,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* k3863 in extend-se in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_save_and_reclaim((void *)f_3865,2,av);}
a=C_alloc(12);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t2,lf[14]);
t5=C_i_check_list_2(t3,lf[14]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3955,a[2]=t8,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3955(t10,t6,t2,t3);}

/* ##sys#extend-se in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +19,c,3)))){
C_save_and_reclaim((void*)f_3861,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+19);
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3865,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=*((C_word*)lf[8]+1);
t11=t3;
t12=C_i_check_list_2(t11,lf[16]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4004,a[2]=t8,a[3]=t14,a[4]=t10,a[5]=t9,a[6]=((C_word)li7),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_4004(t16,t5,t11);}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_car(t4);
f_3865(2,av2);}}}

/* map-loop2083 in k10532 in k10511 in k10483 in k10471 in a10468 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_fcall f_10577(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10577,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10602,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
t6=C_i_cdr(t5);
t7=C_eqp(t6,C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=C_u_i_car(t4);
t9=t3;
f_10602(t9,t8);}
else{
t8=C_u_i_cdr(t4);
t9=C_i_cdr(t8);
t10=t3;
f_10602(t10,C_i_car(t9));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10573 in k10532 in k10511 in k10483 in k10471 in a10468 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_10575(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10575,2,av);}
a=C_alloc(39);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[53],t2);
t4=C_a_i_list(&a,3,lf[104],((C_word*)t0)[3],t3);
t5=C_a_i_list(&a,4,lf[292],((C_word*)t0)[4],((C_word*)t0)[5],t4);
t6=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[50],((C_word*)t0)[2],((C_word*)t0)[7],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* tmp13064 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4436(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,0,4)))){
C_save_and_reclaim_args((void *)trf_4436,2,t0,t1);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4440,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4467,a[2]=((C_word*)t0)[3],a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4473,a[2]=t6,a[3]=t4,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4478,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4484,a[2]=t4,a[3]=t6,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:237: ##sys#dynamic-wind */
t10=*((C_word*)lf[46]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t2;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
/* expand.scm:239: handler */
t3=((C_word*)t0)[5];{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}}

/* a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_4434,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li28),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4491,a[2]=((C_word*)t0)[8],a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4508,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp13064 */
t5=t2;
f_4436(t5,t4);}

/* k3848 in doloop331 in k3818 in walk in strip-syntax in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3850,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3829(t4,((C_word*)t0)[5],t3);}

/* k11517 in k11514 in a11511 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11519,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[52],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11514 in a11511 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11516,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1071: check-for-multiple-bindings */
f_8039(t2,t3,((C_word*)t0)[2],lf[329]);}

/* a11511 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11512(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11512,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11516,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1070: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[328];
av2[3]=t2;
av2[4]=lf[330];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11508 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11510,2,av);}
/* expand.scm:1065: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[328];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6159 in loop in fini/syntax in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6161(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,4)))){
C_save_and_reclaim_args((void *)trf_6161,2,t0,t1);}
a=C_alloc(13);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6175,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_i_cadr(t3);
if(C_truep(C_i_pairp(t7))){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6185,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:537: caadr */
t9=*((C_word*)lf[107]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=C_u_i_car(t3);
t9=C_u_i_cdr(t3);
t10=C_u_i_car(t9);
t11=C_eqp(t8,t10);
if(C_truep(t11)){
/* expand.scm:543: ##sys#defjam-error */
t12=*((C_word*)lf[90]+1);{
C_word av2[3];
av2[0]=t12;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t12=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* expand.scm:533: loop */
t13=((C_word*)((C_word*)t0)[4])[1];
f_6087(t13,((C_word*)t0)[5],t5,t12,C_SCHEME_FALSE);}}}
else{
/* expand.scm:547: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_6087(t2,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}}

/* k10937 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in ... */
static void C_ccall f_10939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10939,2,av);}
/* expand.scm:1143: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[227];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k10084 in expand in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_10086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10086,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?lf[268]:C_a_i_cons(&a,2,lf[104],t2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1411: test */
t3=((C_word*)((C_word*)t0)[6])[1];
f_9860(t3,t2,((C_word*)t0)[7]);}}

/* ##sys#expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4309(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4309,5,av);}
a=C_alloc(22);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4312,a[2]=t3,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4510,a[2]=t6,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4554,a[2]=t3,a[3]=t8,a[4]=t12,a[5]=t6,a[6]=t4,a[7]=((C_word)li38),tmp=(C_word)a,a+=8,tmp));
t14=((C_word*)t12)[1];
f_4554(t14,t1,t2);}

/* ##sys#undefine-macro! in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4303,3,av);}
/* expand.scm:198: ##sys#unregister-macro */
t3=*((C_word*)lf[30]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3793 in k3800 in walk in strip-syntax in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3795,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6107 in loop in fini/syntax in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6109(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6109,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6114,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6114(t6,t2,t1);}

/* k7482 in k7478 in rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7484,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7478 in rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7480(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7480,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7484,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:808: rename */
t6=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
f_7466(3,av2);}}

/* k6494 in k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6496,2,av);}
/* expand.scm:596: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6273(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k11557 in k11544 in a11533 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11559,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1062: check-for-multiple-bindings */
f_8039(((C_word*)t0)[3],t2,((C_word*)t0)[2],lf[333]);}

/* k10977 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_ccall f_10979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10979,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1162: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10959(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7457(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7457,5,av);}
a=C_alloc(11);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_listp(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7464,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t7)){
t9=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t7;
f_7464(2,av2);}}
else{
/* expand.scm:803: ##sys#error */
t9=*((C_word*)lf[25]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[181];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}

/* k8856 in k8852 in k8777 */
static void C_ccall f_8858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8858,2,av);}
/* synrules.scm:192: append */
t2=*((C_word*)lf[15]+1);{
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

/* make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_7451,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7457,a[2]=t3,a[3]=t2,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_record2(&a,2,lf[24],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in ... */
static void C_ccall f_10973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_10973,2,av);}
a=C_alloc(11);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10979,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10986,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1160: open-output-string */
t4=*((C_word*)lf[141]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11011,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* expand.scm:1164: c */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k8852 in k8777 */
static void C_ccall f_8854(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8854,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8858,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5]);
/* synrules.scm:193: process-pattern */
t7=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k4441 in k4438 in tmp13064 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4443,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4438 in tmp13064 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4440,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4443,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=(C_truep(t4)?C_SCHEME_FALSE:C_eqp(((C_word*)t0)[4],t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4456,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4460,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:243: symbol->string */
t8=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* ##sys#unregister-macro in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4258(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4258,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4266,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4270,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:192: ##sys#macro-environment */
t5=*((C_word*)lf[19]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11547 in k11544 in a11533 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11549,2,av);}
t2=C_i_caddr(((C_word*)t0)[2]);
/* expand.scm:1059: check-for-multiple-bindings */
f_8039(((C_word*)t0)[3],t2,((C_word*)t0)[2],lf[331]);}

/* k10511 in k10483 in k10471 in a10468 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_ccall f_10513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
C_save_and_reclaim((void *)f_10513,2,av);}
a=C_alloc(17);
t2=t1;
t3=C_i_car(((C_word*)t0)[2]);
t4=t3;
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_eqp(t5,C_SCHEME_END_OF_LIST);
t7=(C_truep(t6)?lf[291]:C_a_i_cons(&a,2,lf[104],t5));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10534,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t8,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t10=C_eqp(((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
if(C_truep(t10)){
t11=t9;
f_10534(t11,lf[293]);}
else{
t11=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);
t12=t9;
f_10534(t12,C_a_i_cons(&a,2,lf[50],t11));}}

/* k11544 in a11533 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_11546(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_11546,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1058: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[55];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[332];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1061: ##sys#check-syntax */
t3=*((C_word*)lf[54]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[55];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[334];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* a11533 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11534(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11534,5,av);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11538,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11546,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cdr(t2);
if(C_truep(C_i_pairp(t7))){
t8=C_i_cadr(t2);
t9=t6;
f_11546(t9,C_i_symbolp(t8));}
else{
t8=t6;
f_11546(t8,C_SCHEME_FALSE);}}

/* k11530 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11532,2,av);}
/* expand.scm:1052: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[55];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11536 in a11533 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11538,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[50],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4506 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4508,2,av);}
a=C_alloc(3);
/* tmp23065 */
t2=((C_word*)t0)[2];
f_4491(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in ... */
static void C_fcall f_10959(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_10959,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10973,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t5,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1157: ##sys#check-syntax */
t9=*((C_word*)lf[54]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[227];
av2[3]=t5;
av2[4]=lf[312];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[313];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6267(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,6)))){
C_save_and_reclaim_args((void *)trf_6267,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li67),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_6273(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in ... */
static void C_ccall f_10954(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10954,2,av);}
a=C_alloc(11);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10959,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word)li161),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_10959(t6,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in ... */
static void C_ccall f_10951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10951,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1151: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[226];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* loop in k4268 in unregister-macro in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4272(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4272,3,t0,t1,t2);}
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
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4295,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* expand.scm:195: loop */
t11=t7;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}}

/* k4268 in unregister-macro in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4270,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4272,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4272(t5,((C_word*)t0)[3],t1);}

/* k10019 in expand in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_10021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10021,2,av);}{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[25]+1);
av2[3]=lf[267];
av2[4]=t1;
C_apply(5,av2);}}

/* map-loop2251 in expand in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_fcall f_10023(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10023,3,t0,t1,t2);}
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

/* k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in ... */
static void C_ccall f_10948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_10948,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10951,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1150: r */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[220];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in ... */
static void C_ccall f_10941(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10941,5,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10948,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1149: r */
t8=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[303];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}

/* k4264 in unregister-macro in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4266,2,av);}
/* expand.scm:190: ##sys#macro-environment */
t2=*((C_word*)lf[19]+1);{
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

/* expand in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4510(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_4510,5,t0,t1,t2,t3,t4);}
a=C_alloc(3);
if(C_truep(C_i_listp(t3))){
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4536,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cadr(t4);
t7=t4;
t8=C_u_i_car(t7);
/* expand.scm:263: call-handler */
t9=((C_word*)((C_word*)t0)[2])[1];
f_4312(t9,t5,t2,t6,t3,t8,C_SCHEME_FALSE);}
else{
/* expand.scm:265: values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
/* expand.scm:259: ##sys#syntax-error-hook */
t5=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[49];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k10990 in k10984 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_10992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_10992,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1160: ##sys#print */
t3=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10993 in k10990 in k10984 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_10995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10995,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1160: ##sys#print */
t3=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[307];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10996 in k10993 in k10990 in k10984 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_10998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10998,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1160: get-output-string */
t3=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9679 in k9614 in k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9681,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
/* expand.scm:1477: ##sys#instantiate-functor */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[255]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[255]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* k6183 in k6159 in loop in fini/syntax in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
C_save_and_reclaim((void *)f_6185,2,av);}
a=C_alloc(24);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,lf[72],t7);
t9=C_a_i_list(&a,2,lf[23],t8);
t10=C_a_i_list(&a,3,lf[102],t1,t9);
t11=C_a_i_cons(&a,2,t10,((C_word*)t0)[3]);
/* expand.scm:533: loop */
t12=((C_word*)((C_word*)t0)[4])[1];
f_6087(t12,((C_word*)t0)[5],((C_word*)t0)[6],t11,C_SCHEME_FALSE);}

/* k10532 in k10511 in k10483 in k10471 in a10468 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_fcall f_10534(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_10534,2,t0,t1);}
a=C_alloc(21);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10575,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10577,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li152),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10577(t11,t7,((C_word*)t0)[7]);}

/* k10980 in k10977 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_10982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10982,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[305];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10984 in k10971 in expand in k10952 in k10949 in k10946 in a10940 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_ccall f_10986(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10986,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[306]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1160: ##sys#print */
t6=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[308];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6173 in k6159 in loop in fini/syntax in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6175,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* expand.scm:533: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6087(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,C_SCHEME_FALSE);}

/* k11353 in k11334 in a11312 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in ... */
static void C_ccall f_11355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11355,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[292],((C_word*)t0)[3],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[50],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6291 in loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6293(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,6)))){
C_save_and_reclaim_args((void *)trf_6293,2,t0,t1);}
a=C_alloc(14);
if(C_truep(C_i_symbolp(t1))){
t2=(
  /* expand.scm:561: comp */
  f_5723(((C_word*)((C_word*)t0)[2])[1],lf[101],t1)
);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:562: ##sys#check-syntax */
t4=*((C_word*)lf[54]+1);{
C_word av2[7];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[101];
av2[3]=((C_word*)t0)[10];
av2[4]=lf[113];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
t3=(
  /* expand.scm:588: comp */
  f_5723(((C_word*)((C_word*)t0)[2])[1],lf[102],t1)
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6448,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:589: ##sys#check-syntax */
t5=*((C_word*)lf[54]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[102];
av2[3]=((C_word*)t0)[10];
av2[4]=lf[114];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t4=(
  /* expand.scm:591: comp */
  f_5723(((C_word*)((C_word*)t0)[2])[1],lf[103],t1)
);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6460,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:593: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word av2[7];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[103];
av2[3]=((C_word*)t0)[10];
av2[4]=lf[115];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(7,av2);}}
else{
t5=(
  /* expand.scm:595: comp */
  f_5723(((C_word*)((C_word*)t0)[2])[1],lf[104],t1)
);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6496,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t7=C_i_cdr(((C_word*)t0)[10]);
/* expand.scm:596: ##sys#append */
t8=*((C_word*)lf[70]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t6=C_a_i_list1(&a,1,t1);
if(C_truep(C_i_member(t6,((C_word*)t0)[4]))){
/* expand.scm:599: fini */
t7=((C_word*)((C_word*)t0)[13])[1];
f_5789(t7,((C_word*)t0)[9],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[12]);}
else{
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6512,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:600: ##sys#expand-0 */
t8=*((C_word*)lf[32]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[10];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[14];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}}}}}
else{
/* expand.scm:559: fini */
t2=((C_word*)((C_word*)t0)[13])[1];
f_5789(t2,((C_word*)t0)[9],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[12]);}}

/* loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4554(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4554,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_i_symbolp(t4))){
t7=(
  /* expand.scm:271: lookup */
  f_3649(t4,((C_word*)t0)[2])
);
t8=(C_truep(t7)?t7:t4);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4578,a[2]=t10,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=t4,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_pairp(((C_word*)t10)[1]))){
t12=t11;
f_4578(t12,C_SCHEME_UNDEFINED);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4796,a[2]=t10,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:273: ##sys#macro-environment */
t13=*((C_word*)lf[19]+1);{
C_word av2[2];
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}
else{
/* expand.scm:299: values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
/* expand.scm:300: values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* rename in k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7466(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7466,3,av);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7480,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* expand.scm:808: rename */
t7=t3;
t8=t5;
t1=t7;
t2=t8;
c=3;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7501,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7505,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:810: vector->list */
t5=*((C_word*)lf[179]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t3)){
t4=t1;
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_assq(t2,((C_word*)t0)[4]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7535,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp);
/* expand.scm:803: g1452 */
t6=t5;
f_7535(t6,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7573,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:828: macro-alias */
f_3666(t5,t2,((C_word*)t0)[4]);}}}
else{
t3=t2;
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}

/* k7462 in a7456 in make-er/ir-transformer in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_7464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_7464,2,av);}
a=C_alloc(40);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7466,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7590,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7827,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7852,a[2]=t9,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=((C_word)li101),tmp=(C_word)a,a+=8,tmp));
if(C_truep(((C_word*)t0)[5])){
/* expand.scm:907: handler */
t14=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7980,a[2]=t9,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7984,a[2]=((C_word*)t0)[6],a[3]=t14,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:913: rename */
t16=((C_word*)t3)[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t16;
av2[1]=t15;
av2[2]=((C_word*)t0)[8];
f_7466(3,av2);}}}

/* copy in k4348 in a4338 in a4332 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4367(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4367,3,t0,t1,t2);}
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
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4384,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_equalp(lf[39],t3))){
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_car(t5);
t8=t6;
f_4384(t8,C_i_stringp(t7));}
else{
t7=t6;
f_4384(t7,C_SCHEME_FALSE);}}
else{
t7=t6;
f_4384(t7,C_SCHEME_FALSE);}}}

/* k4359 in k4348 in a4338 in a4332 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4361,2,av);}
a=C_alloc(4);
t2=C_a_i_record3(&a,3,lf[33],((C_word*)t0)[2],t1);
/* expand.scm:210: ##sys#abort */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9673 in k9614 in k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9675,2,av);}
/* expand.scm:1464: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[251]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[251]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[252];
av2[3]=t1;
tp(4,av2);}}

/* k9676 in k9614 in k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9678,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[253];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9669 in k9614 in k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9671,2,av);}
/* expand.scm:1463: string->symbol */
t2=*((C_word*)lf[250]+1);{
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

/* k11334 in a11312 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in ... */
static void C_ccall f_11336(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11336,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_a_i_list(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11355,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1141: r */
t7=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[220];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k4348 in a4338 in a4332 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4350(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_4350,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4361,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_slot(((C_word*)t0)[2],C_fix(2));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4367,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4367(t9,t4,t5);}
else{
t2=((C_word*)t0)[2];
/* expand.scm:210: ##sys#abort */
t3=*((C_word*)lf[34]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5694 in map-loop898 in a5534 in expand-multiple-values-assignment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5696(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5696,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5671(t6,((C_word*)t0)[5],t5);}

/* k6764 in loop in k6739 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6766(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6766,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6770,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* expand.scm:659: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6746(t6,t3,t5);}

/* k4534 in expand in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4536,2,av);}
/* expand.scm:261: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}

/* k8574 in k8473 */
static void C_ccall f_8576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8576,2,av);}
/* synrules.scm:146: process-match */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k9691 in k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_9693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
C_save_and_reclaim((void *)f_9693,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=C_eqp(lf[248],t1);
t5=(C_truep(t4)?C_SCHEME_TRUE:t1);
t6=t5;
t7=C_i_cdddr(((C_word*)t0)[2]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9722,a[2]=t8,a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t8))){
t10=C_u_i_cdr(t8);
if(C_truep(C_i_nullp(t10))){
t11=C_u_i_car(t8);
t12=t9;
f_9722(t12,C_i_stringp(t11));}
else{
t11=t9;
f_9722(t11,C_SCHEME_FALSE);}}
else{
t10=t9;
f_9722(t10,C_SCHEME_FALSE);}}

/* a11312 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in ... */
static void C_ccall f_11313(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11313,5,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t5);
t7=t6;
t8=C_u_i_car(t5);
if(C_truep(C_i_nullp(t7))){
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11336,a[2]=t8,a[3]=t7,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1139: r */
t10=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[77];
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}}}

/* k11309 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in ... */
static void C_ccall f_11311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11311,2,av);}
/* expand.scm:1127: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[220];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6797(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_6797,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6799,a[2]=t2,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6806,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6815,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word)li79),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_6815(t8,t4,*((C_word*)lf[119]+1));}

/* outstr in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6799(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6799,3,t0,t1,t2);}
/* expand.scm:665: ##sys#print */
t3=*((C_word*)lf[124]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8587 in k8473 */
static void C_fcall f_8589(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,1)))){
C_save_and_reclaim_args((void *)trf_8589,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[209],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,2,lf[209],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4293 in loop in k4268 in unregister-macro in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4295,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6783 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6785,2,av);}
/* expand.scm:656: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[139]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[139]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[140];
tp(4,av2);}}

/* map-loop898 in a5534 in expand-multiple-values-assignment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5671(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5671,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* expand.scm:451: g904 */
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

/* k10702 in expand in k10667 in a10664 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in ... */
static void C_ccall f_10704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10704,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[50],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9635 in k9614 in k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9637,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9640,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1467: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[247];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in ... */
static void C_ccall f_10737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10737,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1218: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[226];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in ... */
static void C_ccall f_10731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_10731,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:1216: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[303];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in ... */
static void C_ccall f_10734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10734,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1217: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[302];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4393 in k4382 in copy in k4348 in a4338 in a4332 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4395,2,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[35],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_9600(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_9600,5,av);}
a=C_alloc(7);
t5=C_i_length(t2);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9607,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1443: ##sys#check-syntax */
t8=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[247];
av2[3]=t2;
av2[4]=lf[259];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_ccall f_9607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9607,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(4)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9770,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1444: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[249];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_9613(2,av2);}}}

/* a11364 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in ... */
static void C_ccall f_11365(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11365,5,av);}
a=C_alloc(5);
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t5);
t7=t6;
t8=C_u_i_car(t5);
if(C_truep(C_i_nullp(t7))){
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11396,a[2]=t7,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1125: r */
t10=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[229];
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}}}

/* k11361 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in ... */
static void C_ccall f_11363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11363,2,av);}
/* expand.scm:1113: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[229];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in ... */
static void C_ccall f_10716(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10716,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10720,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1211: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[297];
av2[3]=t2;
av2[4]=lf[304];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9596 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_9598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9598,2,av);}
/* expand.scm:1437: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[247];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k10712 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in ... */
static void C_ccall f_10714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10714,2,av);}
/* expand.scm:1206: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[297];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11810 in a11807 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11812,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[104],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in ... */
static void C_ccall f_10740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
C_save_and_reclaim((void *)f_10740,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10751,a[2]=((C_word*)t0)[4],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10753,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word)li159),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_10753(t10,t6,((C_word*)t0)[9],C_SCHEME_FALSE);}

/* k11804 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11806,2,av);}
/* expand.scm:978: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[346];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11807 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11808(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11808,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11812,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:983: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[346];
av2[3]=t2;
av2[4]=lf[347];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6768 in k6764 in loop in k6739 in k6849 in loop in k6795 in syntax-error/context in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_6770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6770,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9575 in k9572 in a9569 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_9577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9577,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,lf[104],t3);
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[244],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10774 in k10771 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_10776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10776,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[298];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9572 in a9569 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_9574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9574,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[104],t3);
/* expand.scm:1504: ##sys#register-meta-expression */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[245]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[245]+1);
av2[1]=t2;
av2[2]=t4;
tp(3,av2);}}

/* k10771 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_10773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10773,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10776,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1230: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10753(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* a9569 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_ccall f_9570(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9570,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9574,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1503: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[243];
av2[3]=t2;
av2[4]=lf[246];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* loop in expand in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_6273(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,5)))){
C_save_and_reclaim_args((void *)trf_6273,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t6=C_i_car(t2);
t7=t6;
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_i_pairp(t7);
t11=(C_truep(t10)?C_u_i_car(t7):C_SCHEME_FALSE);
t12=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t4,a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=t9,a[9]=t1,a[10]=t7,a[11]=((C_word*)t0)[5],a[12]=t2,a[13]=((C_word*)t0)[6],a[14]=((C_word*)t0)[7],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t11)){
t13=C_i_symbolp(t11);
t14=t12;
f_6293(t14,(C_truep(t13)?t11:C_SCHEME_FALSE));}
else{
t13=t12;
f_6293(t13,C_SCHEME_FALSE);}}
else{
/* expand.scm:553: fini */
t6=((C_word*)((C_word*)t0)[6])[1];
f_5789(t6,t1,t3,t4,t5,t2);}}

/* k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in ... */
static void C_ccall f_10728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10728,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10731,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1215: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[220];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in ... */
static void C_ccall f_10720(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_10720,2,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10728,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1214: r */
t8=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[77];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}

/* a11824 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11825(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11825,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11829,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:975: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[309];
av2[3]=t2;
av2[4]=lf[348];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* f_4467 in tmp13064 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4467,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11821 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11823,2,av);}
/* expand.scm:970: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[309];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11827 in a11824 in k8021 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11829,2,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[292],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4458 in k4438 in tmp13064 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4460,2,av);}
/* expand.scm:242: string-append */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[42];
av2[3]=t1;
av2[4]=lf[43];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9614 in k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_9616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_9616,2,av);}
a=C_alloc(13);
t2=t1;
t3=C_i_cadr(t2);
t4=t3;
t5=C_i_cadddr(t2);
t6=t5;
if(C_truep(C_i_symbolp(t6))){
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],C_fix(4)))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9637,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9671,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9675,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1466: symbol->string */
t10=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9678,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1472: ##sys#register-module-alias */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[254]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[254]+1);
av2[1]=t7;
av2[2]=t4;
av2[3]=t6;
tp(4,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9681,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1475: ##sys#check-syntax */
t8=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[247];
av2[3]=t2;
av2[4]=lf[256];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_9613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9613,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1445: ##sys#strip-syntax */
t3=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9693,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9756,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_caddr(((C_word*)t0)[5]);
/* expand.scm:1485: ##sys#strip-syntax */
t5=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5970 in k5944 in map-loop1074 in k5932 in k5929 in k5926 in k5900 in k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5972(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5972,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
t7=C_slot(((C_word*)t0)[5],C_fix(1));
t8=((C_word*)((C_word*)t0)[6])[1];
f_5939(t8,((C_word*)t0)[7],t5,t6,t7);}

/* k10749 in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_ccall f_10751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10751,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[55],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in k8021 in ... */
static void C_fcall f_10753(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,4)))){
C_save_and_reclaim_args((void *)trf_10753,4,t0,t1,t2,t3);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10767,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t5,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* expand.scm:1225: ##sys#check-syntax */
t9=*((C_word*)lf[54]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[297];
av2[3]=t5;
av2[4]=lf[300];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[301];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* walk in strip-syntax in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_3730(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3730,3,t0,t1,t2);}
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
t5=C_i_getprop(t4,lf[5],C_SCHEME_FALSE);
t6=t2;
t7=C_i_getprop(t6,lf[7],C_SCHEME_FALSE);
if(C_truep(t7)){
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(t5)){
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
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t5=t4;
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)((C_word*)t0)[2])[1]);
t8=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t7);
t9=t5;
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3802,a[2]=t9,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t11=t2;
t12=C_u_i_car(t11);
/* expand.scm:116: walk */
t14=t10;
t15=t12;
t1=t14;
t2=t15;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t4=C_block_size(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3820,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:121: make-vector */
t7=*((C_word*)lf[11]+1);{
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

/* k4454 in k4438 in tmp13064 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4456,2,av);}
/* expand.scm:241: ##sys#syntax-error-hook */
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

/* k11855 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11857,2,av);}
/* expand.scm:954: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[209];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9929 in k9891 in test in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_9931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_9931,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9946,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* expand.scm:1389: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_9860(t5,t3,t4);}
else{
/* expand.scm:1391: err */
t3=((C_word*)((C_word*)t0)[6])[1];
f_9850(t3,((C_word*)t0)[3],((C_word*)t0)[7]);}}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9973,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1392: c */
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
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k10778 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_10780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10780,2,av);}
/* expand.scm:1227: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[187]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[187]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[299];
av2[3]=t1;
tp(4,av2);}}

/* k10784 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in ... */
static void C_ccall f_10786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_save_and_reclaim((void *)f_10786,2,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1233: expand */
t3=((C_word*)((C_word*)t0)[7])[1];
f_10753(t3,t2,((C_word*)t0)[8],C_SCHEME_TRUE);}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10874,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[4],a[4]=((C_word)li157),tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10889,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10891,a[2]=t6,a[3]=t4,a[4]=t11,a[5]=t5,a[6]=((C_word)li158),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_10891(t13,t9,t7);}}

/* k10787 in k10784 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in ... */
static void C_ccall f_10789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10789,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
t5=C_i_cadr(((C_word*)t0)[2]);
/* expand.scm:1235: c */
t6=((C_word*)t0)[5];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_10795(2,av2);}}}

/* strip-syntax in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_3724(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3724,3,av);}
a=C_alloc(9);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3730,a[2]=t4,a[3]=t6,a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3730(t8,t1,t2);}

/* a11858 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11859(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11859,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11863,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:959: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[209];
av2[3]=t2;
av2[4]=lf[350];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11844 in a11841 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11846,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[208],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a11841 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11842(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11842,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11846,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:967: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[138];
av2[3]=t2;
av2[4]=lf[349];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a4483 in tmp13064 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
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
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate2((C_word*)lf[45]+1 /* (set! ##sys#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11838 in k8018 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11840,2,av);}
/* expand.scm:962: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[138];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in ... */
static void C_ccall f_8251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8251,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,lf[206]);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8256,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:96: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[209];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in ... */
static void C_ccall f_8256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8256,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8260,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[2],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:97: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[219];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a11875 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11876(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11876,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11880,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:951: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[222];
av2[3]=t2;
av2[4]=lf[351];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11872 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11874,2,av);}
/* expand.scm:946: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
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

/* k9909 in k9891 in test in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_9911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9911,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
/* expand.scm:1384: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9860(t4,((C_word*)t0)[5],t3);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a9542 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_9543(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9543,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9547,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9560,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_cdr(t2);
/* expand.scm:1514: ##sys#strip-syntax */
t8=*((C_word*)lf[12]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k9539 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in ... */
static void C_ccall f_9541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9541,2,av);}
/* expand.scm:1507: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[238];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9545 in a9542 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_9547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9547,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9550,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1516: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t3;
tp(2,av2);}}

/* k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in k8031 in k8027 in k8024 in ... */
static void C_ccall f_10767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_10767,2,av);}
a=C_alloc(11);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10773,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10780,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1229: ##sys#strip-syntax */
t4=*((C_word*)lf[12]+1);{
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
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10786,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* expand.scm:1232: c */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[12];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in ... */
static void C_ccall f_8260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8260,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8264,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:98: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[218];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in ... */
static void C_ccall f_8268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(51,c,2)))){
C_save_and_reclaim((void *)f_8268,2,av);}
a=C_alloc(51);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|50,a[1]=(C_word)f_8273,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[2],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],tmp=(C_word)a,a+=51,tmp);
/* synrules.scm:101: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[52];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in ... */
static void C_ccall f_8264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8264,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8268,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:99: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[217];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k11861 in a11858 in k8015 in k8012 in k8008 in k8005 in k8002 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_11863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11863,2,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[71],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4382 in copy in k4348 in a4338 in a4332 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4384(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_4384,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_i_car(((C_word*)t0)[2]);
/* expand.scm:226: string-append */
t5=*((C_word*)lf[36]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[37];
av2[3]=t3;
av2[4]=lf[38];
av2[5]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* expand.scm:232: copy */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4367(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k8881 in k8777 */
static void C_ccall f_8883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_8883,2,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
/* synrules.scm:195: process-pattern */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* f_8889 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_8889(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8889,5,av);}
a=C_alloc(15);
if(C_truep(C_i_symbolp(t2))){
t5=C_i_assq(t2,t4);
if(C_truep(t5)){
t6=C_i_cdr(t5);
t7=t3;
if(C_truep(C_fixnum_less_or_equal_p(t6,t7))){
t8=t2;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* synrules.scm:207: ##sys#syntax-error-hook */
t8=*((C_word*)lf[41]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[212];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t6=C_a_i_list(&a,2,lf[208],t2);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8928,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],tmp=(C_word)a,a+=15,tmp);
/* synrules.scm:210: segment-template? */
t6=((C_word*)((C_word*)t0)[12])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}}

/* k10793 in k10787 in k10784 in k10765 in expand in k10738 in k10735 in k10732 in k10729 in k10726 in k10718 in a10715 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in k8112 in k8035 in ... */
static void C_ccall f_10795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_10795,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,t2,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[104],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9509 in a9506 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,6)))){
C_save_and_reclaim((void *)f_9511,2,av);}
a=C_alloc(14);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=lf[235];
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_symbolp(((C_word*)t4)[1]))){
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9528,a[2]=t10,a[3]=t4,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:54: ##sys#check-syntax */
t12=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[234];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[236];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}
else{
/* synrules.scm:58: ##sys#process-syntax-rules */
t11=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t11;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t10)[1];
av2[3]=((C_word*)t8)[1];
av2[4]=((C_word*)t4)[1];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t11+1)))(7,av2);}}}

/* a4496 in tmp23065 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4497,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* f_8275 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_8275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8275,3,av);}
/* synrules.scm:104: c */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in ... */
static void C_ccall f_8273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
if(C_unlikely(!C_demand(C_calculate_demand(119,c,6)))){
C_save_and_reclaim((void *)f_8273,2,av);}
a=C_alloc(119);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8275,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp));
t4=C_mutate2(((C_word *)((C_word*)t0)[5])+1,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8281,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word)li110),tmp=(C_word)a,a+=13,tmp));
t5=C_mutate2(((C_word *)((C_word*)t0)[14])+1,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8375,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[18],a[5]=((C_word*)t0)[19],a[6]=((C_word*)t0)[20],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[21],a[9]=((C_word)li112),tmp=(C_word)a,a+=10,tmp));
t6=C_mutate2(((C_word *)((C_word*)t0)[21])+1,(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_8441,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[23],a[6]=((C_word*)t0)[24],a[7]=((C_word*)t0)[25],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[26],a[13]=((C_word*)t0)[27],a[14]=((C_word*)t0)[28],a[15]=((C_word*)t0)[29],a[16]=((C_word*)t0)[30],a[17]=((C_word*)t0)[31],a[18]=((C_word)li113),tmp=(C_word)a,a+=19,tmp));
t7=C_mutate2(((C_word *)((C_word*)t0)[23])+1,(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_8622,a[2]=((C_word*)t0)[32],a[3]=((C_word*)t0)[33],a[4]=((C_word*)t0)[34],a[5]=((C_word*)t0)[35],a[6]=((C_word*)t0)[36],a[7]=((C_word*)t0)[37],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[38],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[39],a[15]=((C_word*)t0)[21],a[16]=((C_word*)t0)[26],a[17]=((C_word)li114),tmp=(C_word)a,a+=18,tmp));
t8=C_mutate2(((C_word *)((C_word*)t0)[20])+1,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8749,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[24],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[40],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[26],a[9]=((C_word*)t0)[28],a[10]=((C_word*)t0)[31],a[11]=((C_word)li116),tmp=(C_word)a,a+=12,tmp));
t9=C_mutate2(((C_word *)((C_word*)t0)[18])+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8889,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[18],a[4]=((C_word*)t0)[41],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[42],a[7]=((C_word*)t0)[43],a[8]=((C_word*)t0)[44],a[9]=((C_word*)t0)[45],a[10]=((C_word*)t0)[46],a[11]=((C_word*)t0)[47],a[12]=((C_word*)t0)[48],a[13]=((C_word)li118),tmp=(C_word)a,a+=14,tmp));
t10=C_mutate2(((C_word *)((C_word*)t0)[19])+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9081,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[19],a[4]=((C_word*)t0)[31],a[5]=((C_word)li119),tmp=(C_word)a,a+=6,tmp));
t11=C_mutate2(((C_word *)((C_word*)t0)[43])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9158,a[2]=((C_word*)t0)[43],a[3]=((C_word*)t0)[48],a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate2(((C_word *)((C_word*)t0)[31])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9247,a[2]=((C_word*)t0)[48],a[3]=((C_word)li121),tmp=(C_word)a,a+=4,tmp));
t13=C_mutate2(((C_word *)((C_word*)t0)[48])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9275,a[2]=((C_word*)t0)[3],a[3]=((C_word)li122),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate2(((C_word *)((C_word*)t0)[44])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9299,a[2]=((C_word*)t0)[44],a[3]=((C_word*)t0)[48],a[4]=((C_word)li123),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate2(((C_word *)((C_word*)t0)[41])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9319,a[2]=((C_word*)t0)[3],a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp));
/* synrules.scm:314: make-transformer */
t16=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t16;
av2[1]=((C_word*)t0)[49];
av2[2]=((C_word*)t0)[50];
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}

/* tmp23065 in a4433 in a4326 in call-handler in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_4491(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4491,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4497,a[2]=t2,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:207: k562 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k9526 in k9509 in a9506 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in ... */
static void C_ccall f_9528(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_9528,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t6=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t5);
/* synrules.scm:58: ##sys#process-syntax-rules */
t7=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}

/* f_8281 in k8271 in k8266 in k8262 in k8258 in k8254 in k8249 in k8242 in k8237 in k8233 in k8229 in k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in ... */
static void C_ccall f_8281(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(51,c,3)))){
C_save_and_reclaim((void *)f_8281,3,av);}
a=C_alloc(51);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t4=t3;
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[2])[1]);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],t5);
t7=C_a_i_list(&a,1,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8309,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t8,a[5]=((C_word*)t0)[9],a[6]=t4,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t10=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t12)[1];
t14=((C_word*)((C_word*)t0)[10])[1];
t15=C_i_check_list_2(t2,lf[16]);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[11],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8333,a[2]=t12,a[3]=t18,a[4]=t14,a[5]=t13,a[6]=((C_word)li109),tmp=(C_word)a,a+=7,tmp));
t20=((C_word*)t18)[1];
f_8333(t20,t16,t2);}

/* k9944 in k9929 in k9891 in test in k9846 in k9843 in k9840 in k9837 in a9831 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9946,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* expand.scm:1390: test */
t4=((C_word*)((C_word*)t0)[5])[1];
f_9860(t4,((C_word*)t0)[2],t3);}}

/* k5211 in loop in k4944 in k4941 in k4938 in expand-extended-lambda-list in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5213,2,av);}
/* expand.scm:358: ##sys#append */
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4585 in k4576 in loop in expand-0 in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_4587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4587,2,av);}
a=C_alloc(5);
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4599,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:278: ##sys#check-syntax */
t5=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[55];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[56];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}
else{
/* expand.scm:289: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in ... */
static void C_ccall f_8213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8213,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[201]);
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,lf[202]);
t5=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8219,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[2],a[26]=((C_word*)t0)[28],a[27]=((C_word*)t0)[29],a[28]=((C_word*)t0)[30],a[29]=((C_word*)t0)[31],a[30]=((C_word*)t0)[32],a[31]=((C_word*)t0)[33],a[32]=((C_word*)t0)[34],a[33]=((C_word*)t0)[35],a[34]=((C_word*)t0)[36],a[35]=((C_word*)t0)[37],a[36]=((C_word*)t0)[3],a[37]=((C_word*)t0)[4],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:83: r */
t6=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[225];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in ... */
static void C_ccall f_8219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8219,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8223,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[2],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:84: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[224];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5893(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5893,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6035,a[2]=t4,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6035(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* map-loop927 in k5559 in k5540 in k5537 in a5534 in expand-multiple-values-assignment in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_fcall f_5605(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_5605,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[95],t6,t7);
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

/* k5894 in k5891 in fini in k5710 in canonicalize-body in k4123 in k3645 in k3641 in k3637 in k3633 */
static void C_ccall f_5896(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5896,2,av);}
a=C_alloc(15);
t2=C_i_check_list_2(t1,lf[16]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6001,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6001(t7,t3,t1);}

/* k9638 in k9635 in k9614 in k9611 in k9605 in a9599 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in ... */
static void C_ccall f_9640(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_9640,2,av);}
a=C_alloc(36);
t2=C_i_cddddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[248],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t7=C_a_i_list(&a,4,t1,((C_word*)t0)[5],lf[249],t6);
t8=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[104],t5,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k9503 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_9505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9505,2,av);}
/* synrules.scm:44: ##sys#extend-macro-environment */
t2=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[234];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8566 in k8473 */
static void C_ccall f_8568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_8568,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9499 in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in ... */
static void C_ccall f_9501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9501,2,av);}
/* expand.scm:1550: ##sys#fixup-macro-environment */
t2=*((C_word*)lf[231]+1);{
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

/* k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in ... */
static void C_ccall f_8223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8223,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8227,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[2],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:85: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[223];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a9506 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in k8136 in k8133 in k8130 in k8127 in k8124 in k8121 in k8118 in k8115 in ... */
static void C_ccall f_9507(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9507,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9511,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:49: ##sys#check-syntax */
t6=*((C_word*)lf[54]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[234];
av2[3]=t2;
av2[4]=lf[237];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8225 in k8221 in k8217 in k8211 in k8206 in k8202 in k8187 in process-syntax-rules in k8178 in k8175 in k8172 in k8169 in k8166 in k8163 in k8160 in k8157 in k8154 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_8227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_8227,2,av);}
a=C_alloc(53);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|52,a[1]=(C_word)f_8231,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[2],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],tmp=(C_word)a,a+=53,tmp);
/* synrules.scm:86: r */
t4=((C_word*)t0)[51];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[222];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[668] = {
{"f_8231:expand_2escm",(void*)f_8231},
{"f_8235:expand_2escm",(void*)f_8235},
{"f_8239:expand_2escm",(void*)f_8239},
{"f_4599:expand_2escm",(void*)f_4599},
{"f_8244:expand_2escm",(void*)f_8244},
{"f_7749:expand_2escm",(void*)f_7749},
{"f_4478:expand_2escm",(void*)f_4478},
{"f_4473:expand_2escm",(void*)f_4473},
{"f_9996:expand_2escm",(void*)f_9996},
{"f_4578:expand_2escm",(void*)f_4578},
{"f_8808:expand_2escm",(void*)f_8808},
{"f_9973:expand_2escm",(void*)f_9973},
{"f_7701:expand_2escm",(void*)f_7701},
{"f_8204:expand_2escm",(void*)f_8204},
{"f_7709:expand_2escm",(void*)f_7709},
{"f_8208:expand_2escm",(void*)f_8208},
{"f_9550:expand_2escm",(void*)f_9550},
{"f_9553:expand_2escm",(void*)f_9553},
{"f_8749:expand_2escm",(void*)f_8749},
{"f_9560:expand_2escm",(void*)f_9560},
{"f_9568:expand_2escm",(void*)f_9568},
{"f_9980:expand_2escm",(void*)f_9980},
{"f_8511:expand_2escm",(void*)f_8511},
{"f_8519:expand_2escm",(void*)f_8519},
{"f_8515:expand_2escm",(void*)f_8515},
{"f_8705:expand_2escm",(void*)f_8705},
{"f_10178:expand_2escm",(void*)f_10178},
{"f_10176:expand_2escm",(void*)f_10176},
{"f_6711:expand_2escm",(void*)f_6711},
{"f_6719:expand_2escm",(void*)f_6719},
{"f_11689:expand_2escm",(void*)f_11689},
{"f_11687:expand_2escm",(void*)f_11687},
{"f_11693:expand_2escm",(void*)f_11693},
{"f_11698:expand_2escm",(void*)f_11698},
{"f_5430:expand_2escm",(void*)f_5430},
{"f_6727:expand_2escm",(void*)f_6727},
{"f_10102:expand_2escm",(void*)f_10102},
{"f_6741:expand_2escm",(void*)f_6741},
{"f_7535:expand_2escm",(void*)f_7535},
{"f_6746:expand_2escm",(void*)f_6746},
{"f_11132:expand_2escm",(void*)f_11132},
{"f_7501:expand_2escm",(void*)f_7501},
{"f_7505:expand_2escm",(void*)f_7505},
{"f_3666:expand_2escm",(void*)f_3666},
{"f_8779:expand_2escm",(void*)f_8779},
{"f_8622:expand_2escm",(void*)f_8622},
{"f_11186:expand_2escm",(void*)f_11186},
{"f_8773:expand_2escm",(void*)f_8773},
{"f_8626:expand_2escm",(void*)f_8626},
{"f_7556:expand_2escm",(void*)f_7556},
{"f_9230:expand_2escm",(void*)f_9230},
{"f_10156:expand_2escm",(void*)f_10156},
{"f_11396:expand_2escm",(void*)f_11396},
{"f_11159:expand_2escm",(void*)f_11159},
{"f_6730:expand_2escm",(void*)f_6730},
{"f_5583:expand_2escm",(void*)f_5583},
{"f_5561:expand_2escm",(void*)f_5561},
{"f_6806:expand_2escm",(void*)f_6806},
{"f_9245:expand_2escm",(void*)f_9245},
{"f_9247:expand_2escm",(void*)f_9247},
{"f_10149:expand_2escm",(void*)f_10149},
{"f_8796:expand_2escm",(void*)f_8796},
{"f_10143:expand_2escm",(void*)f_10143},
{"f_10145:expand_2escm",(void*)f_10145},
{"f_8792:expand_2escm",(void*)f_8792},
{"f_11129:expand_2escm",(void*)f_11129},
{"f_3676:expand_2escm",(void*)f_3676},
{"f_3673:expand_2escm",(void*)f_3673},
{"f_6813:expand_2escm",(void*)f_6813},
{"f_6815:expand_2escm",(void*)f_6815},
{"f_9254:expand_2escm",(void*)f_9254},
{"f_11014:expand_2escm",(void*)f_11014},
{"f_11011:expand_2escm",(void*)f_11011},
{"f_11017:expand_2escm",(void*)f_11017},
{"f_5565:expand_2escm",(void*)f_5565},
{"f_3679:expand_2escm",(void*)f_3679},
{"toplevel:expand_2escm",(void*)C_expand_toplevel},
{"f_10128:expand_2escm",(void*)f_10128},
{"f_11005:expand_2escm",(void*)f_11005},
{"f_11001:expand_2escm",(void*)f_11001},
{"f_10124:expand_2escm",(void*)f_10124},
{"f_10122:expand_2escm",(void*)f_10122},
{"f_6831:expand_2escm",(void*)f_6831},
{"f_6837:expand_2escm",(void*)f_6837},
{"f_6834:expand_2escm",(void*)f_6834},
{"f_10198:expand_2escm",(void*)f_10198},
{"f_10190:expand_2escm",(void*)f_10190},
{"f_3802:expand_2escm",(void*)f_3802},
{"f_9200:expand_2escm",(void*)f_9200},
{"f_6844:expand_2escm",(void*)f_6844},
{"f_10185:expand_2escm",(void*)f_10185},
{"f_10188:expand_2escm",(void*)f_10188},
{"f_10182:expand_2escm",(void*)f_10182},
{"f_8681:expand_2escm",(void*)f_8681},
{"f_6851:expand_2escm",(void*)f_6851},
{"f_5723:expand_2escm",(void*)f_5723},
{"f_9211:expand_2escm",(void*)f_9211},
{"f_6854:expand_2escm",(void*)f_6854},
{"f_7398:expand_2escm",(void*)f_7398},
{"f_6863:expand_2escm",(void*)f_6863},
{"f_6878:expand_2escm",(void*)f_6878},
{"f_5712:expand_2escm",(void*)f_5712},
{"f_5708:expand_2escm",(void*)f_5708},
{"f_6869:expand_2escm",(void*)f_6869},
{"f_6866:expand_2escm",(void*)f_6866},
{"f_10679:expand_2escm",(void*)f_10679},
{"f_7852:expand_2escm",(void*)f_7852},
{"f_5172:expand_2escm",(void*)f_5172},
{"f_5174:expand_2escm",(void*)f_5174},
{"f_7827:expand_2escm",(void*)f_7827},
{"f_5169:expand_2escm",(void*)f_5169},
{"f_5166:expand_2escm",(void*)f_5166},
{"f_5162:expand_2escm",(void*)f_5162},
{"f_11429:expand_2escm",(void*)f_11429},
{"f_4741:expand_2escm",(void*)f_4741},
{"f_4737:expand_2escm",(void*)f_4737},
{"f_4733:expand_2escm",(void*)f_4733},
{"f_6828:expand_2escm",(void*)f_6828},
{"f_6825:expand_2escm",(void*)f_6825},
{"f_6512:expand_2escm",(void*)f_6512},
{"f_9141:expand_2escm",(void*)f_9141},
{"f_6891:expand_2escm",(void*)f_6891},
{"f_6895:expand_2escm",(void*)f_6895},
{"f_9275:expand_2escm",(void*)f_9275},
{"f_4626:expand_2escm",(void*)f_4626},
{"f_7168:expand_2escm",(void*)f_7168},
{"f_4624:expand_2escm",(void*)f_4624},
{"f_7163:expand_2escm",(void*)f_7163},
{"f_10627:expand_2escm",(void*)f_10627},
{"f_11468:expand_2escm",(void*)f_11468},
{"f_11466:expand_2escm",(void*)f_11466},
{"f_9122:expand_2escm",(void*)f_9122},
{"f_6875:expand_2escm",(void*)f_6875},
{"f_6872:expand_2escm",(void*)f_6872},
{"f_11453:expand_2escm",(void*)f_11453},
{"f_11450:expand_2escm",(void*)f_11450},
{"f_9299:expand_2escm",(void*)f_9299},
{"f_5199:expand_2escm",(void*)f_5199},
{"f_4981:expand_2escm",(void*)f_4981},
{"f_9839:expand_2escm",(void*)f_9839},
{"f_11406:expand_2escm",(void*)f_11406},
{"f_9832:expand_2escm",(void*)f_9832},
{"f_10602:expand_2escm",(void*)f_10602},
{"f_11402:expand_2escm",(void*)f_11402},
{"f_9830:expand_2escm",(void*)f_9830},
{"f_11400:expand_2escm",(void*)f_11400},
{"f_5037:expand_2escm",(void*)f_5037},
{"f_9107:expand_2escm",(void*)f_9107},
{"f_9845:expand_2escm",(void*)f_9845},
{"f_9848:expand_2escm",(void*)f_9848},
{"f_9842:expand_2escm",(void*)f_9842},
{"f_4810:expand_2escm",(void*)f_4810},
{"f_10669:expand_2escm",(void*)f_10669},
{"f_10663:expand_2escm",(void*)f_10663},
{"f_9850:expand_2escm",(void*)f_9850},
{"f_10665:expand_2escm",(void*)f_10665},
{"f_4753:expand_2escm",(void*)f_4753},
{"f_6585:expand_2escm",(void*)f_6585},
{"f_6582:expand_2escm",(void*)f_6582},
{"f_5012:expand_2escm",(void*)f_5012},
{"f_6930:expand_2escm",(void*)f_6930},
{"f_7887:expand_2escm",(void*)f_7887},
{"f_4830:expand_2escm",(void*)f_4830},
{"f_11444:expand_2escm",(void*)f_11444},
{"f_11446:expand_2escm",(void*)f_11446},
{"f_4806:expand_2escm",(void*)f_4806},
{"f_7891:expand_2escm",(void*)f_7891},
{"f_9806:expand_2escm",(void*)f_9806},
{"f_9804:expand_2escm",(void*)f_9804},
{"f_4836:expand_2escm",(void*)f_4836},
{"f_9156:expand_2escm",(void*)f_9156},
{"f_7866:expand_2escm",(void*)f_7866},
{"f_9158:expand_2escm",(void*)f_9158},
{"f_6599:expand_2escm",(void*)f_6599},
{"f_9817:expand_2escm",(void*)f_9817},
{"f_9819:expand_2escm",(void*)f_9819},
{"f_4824:expand_2escm",(void*)f_4824},
{"f_7870:expand_2escm",(void*)f_7870},
{"f_7187:expand_2escm",(void*)f_7187},
{"f_6667:expand_2escm",(void*)f_6667},
{"f_8475:expand_2escm",(void*)f_8475},
{"f_6662:expand_2escm",(void*)f_6662},
{"f_6664:expand_2escm",(void*)f_6664},
{"f_9860:expand_2escm",(void*)f_9860},
{"f_4695:expand_2escm",(void*)f_4695},
{"f_4689:expand_2escm",(void*)f_4689},
{"f_9874:expand_2escm",(void*)f_9874},
{"f_5362:expand_2escm",(void*)f_5362},
{"f_9893:expand_2escm",(void*)f_9893},
{"f_9313:expand_2escm",(void*)f_9313},
{"f_9319:expand_2escm",(void*)f_9319},
{"f_9329:expand_2escm",(void*)f_9329},
{"f_6001:expand_2escm",(void*)f_6001},
{"f_8141:expand_2escm",(void*)f_8141},
{"f_10841:expand_2escm",(void*)f_10841},
{"f_8147:expand_2escm",(void*)f_8147},
{"f_8144:expand_2escm",(void*)f_8144},
{"f_7980:expand_2escm",(void*)f_7980},
{"f_7989:expand_2escm",(void*)f_7989},
{"f_7984:expand_2escm",(void*)f_7984},
{"f_9306:expand_2escm",(void*)f_9306},
{"f_10838:expand_2escm",(void*)f_10838},
{"f_8150:expand_2escm",(void*)f_8150},
{"f_8159:expand_2escm",(void*)f_8159},
{"f_10834:expand_2escm",(void*)f_10834},
{"f_8156:expand_2escm",(void*)f_8156},
{"f_8153:expand_2escm",(void*)f_8153},
{"f_7995:expand_2escm",(void*)f_7995},
{"f_9356:expand_2escm",(void*)f_9356},
{"f_8162:expand_2escm",(void*)f_8162},
{"f_8168:expand_2escm",(void*)f_8168},
{"f_8165:expand_2escm",(void*)f_8165},
{"f_9363:expand_2escm",(void*)f_9363},
{"f_3820:expand_2escm",(void*)f_3820},
{"f_3829:expand_2escm",(void*)f_3829},
{"f_10891:expand_2escm",(void*)f_10891},
{"f_9336:expand_2escm",(void*)f_9336},
{"f_8182:expand_2escm",(void*)f_8182},
{"f_7062:expand_2escm",(void*)f_7062},
{"f_8189:expand_2escm",(void*)f_8189},
{"f_8180:expand_2escm",(void*)f_8180},
{"f_10397:expand_2escm",(void*)f_10397},
{"f_10393:expand_2escm",(void*)f_10393},
{"f_10889:expand_2escm",(void*)f_10889},
{"f_10874:expand_2escm",(void*)f_10874},
{"f_4796:expand_2escm",(void*)f_4796},
{"f_9393:expand_2escm",(void*)f_9393},
{"f_7041:expand_2escm",(void*)f_7041},
{"f_7048:expand_2escm",(void*)f_7048},
{"f_10371:expand_2escm",(void*)f_10371},
{"f_11752:expand_2escm",(void*)f_11752},
{"f_7050:expand_2escm",(void*)f_7050},
{"f_8132:expand_2escm",(void*)f_8132},
{"f_7054:expand_2escm",(void*)f_7054},
{"f_8135:expand_2escm",(void*)f_8135},
{"f_8138:expand_2escm",(void*)f_8138},
{"f_4879:expand_2escm",(void*)f_4879},
{"f_11748:expand_2escm",(void*)f_11748},
{"f_11741:expand_2escm",(void*)f_11741},
{"f_4873:expand_2escm",(void*)f_4873},
{"f_9372:expand_2escm",(void*)f_9372},
{"f_9370:expand_2escm",(void*)f_9370},
{"f_4898:expand_2escm",(void*)f_4898},
{"f_11724:expand_2escm",(void*)f_11724},
{"f_11727:expand_2escm",(void*)f_11727},
{"f_11713:expand_2escm",(void*)f_11713},
{"f_6035:expand_2escm",(void*)f_6035},
{"f_8171:expand_2escm",(void*)f_8171},
{"f_8177:expand_2escm",(void*)f_8177},
{"f_8174:expand_2escm",(void*)f_8174},
{"f_10322:expand_2escm",(void*)f_10322},
{"f_10311:expand_2escm",(void*)f_10311},
{"f_8117:expand_2escm",(void*)f_8117},
{"f_8114:expand_2escm",(void*)f_8114},
{"f_6061:expand_2escm",(void*)f_6061},
{"f_10300:expand_2escm",(void*)f_10300},
{"f_6077:expand_2escm",(void*)f_6077},
{"f_8120:expand_2escm",(void*)f_8120},
{"f_8123:expand_2escm",(void*)f_8123},
{"f_8126:expand_2escm",(void*)f_8126},
{"f_8129:expand_2escm",(void*)f_8129},
{"f_6065:expand_2escm",(void*)f_6065},
{"f_10367:expand_2escm",(void*)f_10367},
{"f_8382:expand_2escm",(void*)f_8382},
{"f_10363:expand_2escm",(void*)f_10363},
{"f_4029:expand_2escm",(void*)f_4029},
{"f_6059:expand_2escm",(void*)f_6059},
{"f_8407:expand_2escm",(void*)f_8407},
{"f_8403:expand_2escm",(void*)f_8403},
{"f_10349:expand_2escm",(void*)f_10349},
{"f_10345:expand_2escm",(void*)f_10345},
{"f_8411:expand_2escm",(void*)f_8411},
{"f_8418:expand_2escm",(void*)f_8418},
{"f_8413:expand_2escm",(void*)f_8413},
{"f_10330:expand_2escm",(void*)f_10330},
{"f_11261:expand_2escm",(void*)f_11261},
{"f_11771:expand_2escm",(void*)f_11771},
{"f_8358:expand_2escm",(void*)f_8358},
{"f_11277:expand_2escm",(void*)f_11277},
{"f_8441:expand_2escm",(void*)f_8441},
{"f_11768:expand_2escm",(void*)f_11768},
{"f_11761:expand_2escm",(void*)f_11761},
{"f_8375:expand_2escm",(void*)f_8375},
{"f_6981:expand_2escm",(void*)f_6981},
{"f_8309:expand_2escm",(void*)f_8309},
{"f_6977:expand_2escm",(void*)f_6977},
{"f_9076:expand_2escm",(void*)f_9076},
{"f_9072:expand_2escm",(void*)f_9072},
{"f_8319:expand_2escm",(void*)f_8319},
{"f_11586:expand_2escm",(void*)f_11586},
{"f_11584:expand_2escm",(void*)f_11584},
{"f_7006:expand_2escm",(void*)f_7006},
{"f_6996:expand_2escm",(void*)f_6996},
{"f_7082:expand_2escm",(void*)f_7082},
{"f_7018:expand_2escm",(void*)f_7018},
{"f_7011:expand_2escm",(void*)f_7011},
{"f_8333:expand_2escm",(void*)f_8333},
{"f_6639:expand_2escm",(void*)f_6639},
{"f_4004:expand_2escm",(void*)f_4004},
{"f_3635:expand_2escm",(void*)f_3635},
{"f_3639:expand_2escm",(void*)f_3639},
{"f_4125:expand_2escm",(void*)f_4125},
{"f_4129:expand_2escm",(void*)f_4129},
{"f_11604:expand_2escm",(void*)f_11604},
{"f_11601:expand_2escm",(void*)f_11601},
{"f_7649:expand_2escm",(void*)f_7649},
{"f_7612:expand_2escm",(void*)f_7612},
{"f_11628:expand_2escm",(void*)f_11628},
{"f_9081:expand_2escm",(void*)f_9081},
{"f_9756:expand_2escm",(void*)f_9756},
{"f_11249:expand_2escm",(void*)f_11249},
{"f_11615:expand_2escm",(void*)f_11615},
{"f_11618:expand_2escm",(void*)f_11618},
{"f_11645:expand_2escm",(void*)f_11645},
{"f_11642:expand_2escm",(void*)f_11642},
{"f_11648:expand_2escm",(void*)f_11648},
{"f_11111:expand_2escm",(void*)f_11111},
{"f_7764:expand_2escm",(void*)f_7764},
{"f_11635:expand_2escm",(void*)f_11635},
{"f_5931:expand_2escm",(void*)f_5931},
{"f_11639:expand_2escm",(void*)f_11639},
{"f_4146:expand_2escm",(void*)f_4146},
{"f_5934:expand_2escm",(void*)f_5934},
{"f_5946:expand_2escm",(void*)f_5946},
{"f_5831:expand_2escm",(void*)f_5831},
{"f_5839:expand_2escm",(void*)f_5839},
{"f_7777:expand_2escm",(void*)f_7777},
{"f_8937:expand_2escm",(void*)f_8937},
{"f_5939:expand_2escm",(void*)f_5939},
{"f_8931:expand_2escm",(void*)f_8931},
{"f_5937:expand_2escm",(void*)f_5937},
{"f_5820:expand_2escm",(void*)f_5820},
{"f_5827:expand_2escm",(void*)f_5827},
{"f_9055:expand_2escm",(void*)f_9055},
{"f_8949:expand_2escm",(void*)f_8949},
{"f_9051:expand_2escm",(void*)f_9051},
{"f_6382:expand_2escm",(void*)f_6382},
{"f_5928:expand_2escm",(void*)f_5928},
{"f_6389:expand_2escm",(void*)f_6389},
{"f_7792:expand_2escm",(void*)f_7792},
{"f_10260:expand_2escm",(void*)f_10260},
{"f_5902:expand_2escm",(void*)f_5902},
{"f_7027:expand_2escm",(void*)f_7027},
{"f_3905:expand_2escm",(void*)f_3905},
{"f_7023:expand_2escm",(void*)f_7023},
{"f_6906:expand_2escm",(void*)f_6906},
{"f_3907:expand_2escm",(void*)f_3907},
{"f_8955:expand_2escm",(void*)f_8955},
{"f_8952:expand_2escm",(void*)f_8952},
{"f_5801:expand_2escm",(void*)f_5801},
{"f_5283:expand_2escm",(void*)f_5283},
{"f_9778:expand_2escm",(void*)f_9778},
{"f_9770:expand_2escm",(void*)f_9770},
{"f_10291:expand_2escm",(void*)f_10291},
{"f_7034:expand_2escm",(void*)f_7034},
{"f_6912:expand_2escm",(void*)f_6912},
{"f_6910:expand_2escm",(void*)f_6910},
{"f_9788:expand_2escm",(void*)f_9788},
{"f_9780:expand_2escm",(void*)f_9780},
{"f_6926:expand_2escm",(void*)f_6926},
{"f_5267:expand_2escm",(void*)f_5267},
{"f_7670:expand_2escm",(void*)f_7670},
{"f_6396:expand_2escm",(void*)f_6396},
{"f_10270:expand_2escm",(void*)f_10270},
{"f_5254:expand_2escm",(void*)f_5254},
{"f_6957:expand_2escm",(void*)f_6957},
{"f_8928:expand_2escm",(void*)f_8928},
{"f_6951:expand_2escm",(void*)f_6951},
{"f_6087:expand_2escm",(void*)f_6087},
{"f_6085:expand_2escm",(void*)f_6085},
{"f_10200:expand_2escm",(void*)f_10200},
{"f_9722:expand_2escm",(void*)f_9722},
{"f_5906:expand_2escm",(void*)f_5906},
{"f_4041:expand_2escm",(void*)f_4041},
{"f_7341:expand_2escm",(void*)f_7341},
{"f_4047:expand_2escm",(void*)f_4047},
{"f_10246:expand_2escm",(void*)f_10246},
{"f_7573:expand_2escm",(void*)f_7573},
{"f_4063:expand_2escm",(void*)f_4063},
{"f_4097:expand_2escm",(void*)f_4097},
{"f_7590:expand_2escm",(void*)f_7590},
{"f_4081:expand_2escm",(void*)f_4081},
{"f_10281:expand_2escm",(void*)f_10281},
{"f_4923:expand_2escm",(void*)f_4923},
{"f_4920:expand_2escm",(void*)f_4920},
{"f_9796:expand_2escm",(void*)f_9796},
{"f_10237:expand_2escm",(void*)f_10237},
{"f_11903:expand_2escm",(void*)f_11903},
{"f_11901:expand_2escm",(void*)f_11901},
{"f_4198:expand_2escm",(void*)f_4198},
{"f_4180:expand_2escm",(void*)f_4180},
{"f_4173:expand_2escm",(void*)f_4173},
{"f_4170:expand_2escm",(void*)f_4170},
{"f_3643:expand_2escm",(void*)f_3643},
{"f_3647:expand_2escm",(void*)f_3647},
{"f_3649:expand_2escm",(void*)f_3649},
{"f_11913:expand_2escm",(void*)f_11913},
{"f_11911:expand_2escm",(void*)f_11911},
{"f_4965:expand_2escm",(void*)f_4965},
{"f_8972:expand_2escm",(void*)f_8972},
{"f_4969:expand_2escm",(void*)f_4969},
{"f_8976:expand_2escm",(void*)f_8976},
{"f_8978:expand_2escm",(void*)f_8978},
{"f_4951:expand_2escm",(void*)f_4951},
{"f_4943:expand_2escm",(void*)f_4943},
{"f_4946:expand_2escm",(void*)f_4946},
{"f_8999:expand_2escm",(void*)f_8999},
{"f_4940:expand_2escm",(void*)f_4940},
{"f_9489:expand_2escm",(void*)f_9489},
{"f_11891:expand_2escm",(void*)f_11891},
{"f_11893:expand_2escm",(void*)f_11893},
{"f_9497:expand_2escm",(void*)f_9497},
{"f_9493:expand_2escm",(void*)f_9493},
{"f_8058:expand_2escm",(void*)f_8058},
{"f_9430:expand_2escm",(void*)f_9430},
{"f_11880:expand_2escm",(void*)f_11880},
{"f_5789:expand_2escm",(void*)f_5789},
{"f_8078:expand_2escm",(void*)f_8078},
{"f_10218:expand_2escm",(void*)f_10218},
{"f_10214:expand_2escm",(void*)f_10214},
{"f_8968:expand_2escm",(void*)f_8968},
{"f_8045:expand_2escm",(void*)f_8045},
{"f_9453:expand_2escm",(void*)f_9453},
{"f_9455:expand_2escm",(void*)f_9455},
{"f_4166:expand_2escm",(void*)f_4166},
{"f_5542:expand_2escm",(void*)f_5542},
{"f_5060:expand_2escm",(void*)f_5060},
{"f_5535:expand_2escm",(void*)f_5535},
{"f_9406:expand_2escm",(void*)f_9406},
{"f_5056:expand_2escm",(void*)f_5056},
{"f_5523:expand_2escm",(void*)f_5523},
{"f_5539:expand_2escm",(void*)f_5539},
{"f_9414:expand_2escm",(void*)f_9414},
{"f_9413:expand_2escm",(void*)f_9413},
{"f_4247:expand_2escm",(void*)f_4247},
{"f_10485:expand_2escm",(void*)f_10485},
{"f_5529:expand_2escm",(void*)f_5529},
{"f_10473:expand_2escm",(void*)f_10473},
{"f_8020:expand_2escm",(void*)f_8020},
{"f_8023:expand_2escm",(void*)f_8023},
{"f_8026:expand_2escm",(void*)f_8026},
{"f_8029:expand_2escm",(void*)f_8029},
{"f_6311:expand_2escm",(void*)f_6311},
{"f_6316:expand_2escm",(void*)f_6316},
{"f_4219:expand_2escm",(void*)f_4219},
{"f_6329:expand_2escm",(void*)f_6329},
{"f_7139:expand_2escm",(void*)f_7139},
{"f_4208:expand_2escm",(void*)f_4208},
{"f_6332:expand_2escm",(void*)f_6332},
{"f_8010:expand_2escm",(void*)f_8010},
{"f_7144:expand_2escm",(void*)f_7144},
{"f_8017:expand_2escm",(void*)f_8017},
{"f_8014:expand_2escm",(void*)f_8014},
{"f_9465:expand_2escm",(void*)f_9465},
{"f_11092:expand_2escm",(void*)f_11092},
{"f_8061:expand_2escm",(void*)f_8061},
{"f_11066:expand_2escm",(void*)f_11066},
{"f_4225:expand_2escm",(void*)f_4225},
{"f_8033:expand_2escm",(void*)f_8033},
{"f_8037:expand_2escm",(void*)f_8037},
{"f_8039:expand_2escm",(void*)f_8039},
{"f_4221:expand_2escm",(void*)f_4221},
{"f_8007:expand_2escm",(void*)f_8007},
{"f_8004:expand_2escm",(void*)f_8004},
{"f_11089:expand_2escm",(void*)f_11089},
{"f_11083:expand_2escm",(void*)f_11083},
{"f_7110:expand_2escm",(void*)f_7110},
{"f_7112:expand_2escm",(void*)f_7112},
{"f_7118:expand_2escm",(void*)f_7118},
{"f_10469:expand_2escm",(void*)f_10469},
{"f_10467:expand_2escm",(void*)f_10467},
{"f_10456:expand_2escm",(void*)f_10456},
{"f_10438:expand_2escm",(void*)f_10438},
{"f_6448:expand_2escm",(void*)f_6448},
{"f_5343:expand_2escm",(void*)f_5343},
{"f_6460:expand_2escm",(void*)f_6460},
{"f_3955:expand_2escm",(void*)f_3955},
{"f_5109:expand_2escm",(void*)f_5109},
{"f_11023:expand_2escm",(void*)f_11023},
{"f_11475:expand_2escm",(void*)f_11475},
{"f_11472:expand_2escm",(void*)f_11472},
{"f_4339:expand_2escm",(void*)f_4339},
{"f_4333:expand_2escm",(void*)f_4333},
{"f_11488:expand_2escm",(void*)f_11488},
{"f_4327:expand_2escm",(void*)f_4327},
{"f_5304:expand_2escm",(void*)f_5304},
{"f_5301:expand_2escm",(void*)f_5301},
{"f_4322:expand_2escm",(void*)f_4322},
{"f_11494:expand_2escm",(void*)f_11494},
{"f_11490:expand_2escm",(void*)f_11490},
{"f_11497:expand_2escm",(void*)f_11497},
{"f_4312:expand_2escm",(void*)f_4312},
{"f_3890:expand_2escm",(void*)f_3890},
{"f_6112:expand_2escm",(void*)f_6112},
{"f_6114:expand_2escm",(void*)f_6114},
{"f_3865:expand_2escm",(void*)f_3865},
{"f_3861:expand_2escm",(void*)f_3861},
{"f_10577:expand_2escm",(void*)f_10577},
{"f_10575:expand_2escm",(void*)f_10575},
{"f_4436:expand_2escm",(void*)f_4436},
{"f_4434:expand_2escm",(void*)f_4434},
{"f_3850:expand_2escm",(void*)f_3850},
{"f_11519:expand_2escm",(void*)f_11519},
{"f_11516:expand_2escm",(void*)f_11516},
{"f_11512:expand_2escm",(void*)f_11512},
{"f_11510:expand_2escm",(void*)f_11510},
{"f_6161:expand_2escm",(void*)f_6161},
{"f_10939:expand_2escm",(void*)f_10939},
{"f_10086:expand_2escm",(void*)f_10086},
{"f_4309:expand_2escm",(void*)f_4309},
{"f_4303:expand_2escm",(void*)f_4303},
{"f_3795:expand_2escm",(void*)f_3795},
{"f_6109:expand_2escm",(void*)f_6109},
{"f_7484:expand_2escm",(void*)f_7484},
{"f_7480:expand_2escm",(void*)f_7480},
{"f_6496:expand_2escm",(void*)f_6496},
{"f_11559:expand_2escm",(void*)f_11559},
{"f_10979:expand_2escm",(void*)f_10979},
{"f_7457:expand_2escm",(void*)f_7457},
{"f_8858:expand_2escm",(void*)f_8858},
{"f_7451:expand_2escm",(void*)f_7451},
{"f_10973:expand_2escm",(void*)f_10973},
{"f_8854:expand_2escm",(void*)f_8854},
{"f_4443:expand_2escm",(void*)f_4443},
{"f_4440:expand_2escm",(void*)f_4440},
{"f_4258:expand_2escm",(void*)f_4258},
{"f_11549:expand_2escm",(void*)f_11549},
{"f_10513:expand_2escm",(void*)f_10513},
{"f_11546:expand_2escm",(void*)f_11546},
{"f_11534:expand_2escm",(void*)f_11534},
{"f_11532:expand_2escm",(void*)f_11532},
{"f_11538:expand_2escm",(void*)f_11538},
{"f_4508:expand_2escm",(void*)f_4508},
{"f_10959:expand_2escm",(void*)f_10959},
{"f_6267:expand_2escm",(void*)f_6267},
{"f_10954:expand_2escm",(void*)f_10954},
{"f_10951:expand_2escm",(void*)f_10951},
{"f_4272:expand_2escm",(void*)f_4272},
{"f_4270:expand_2escm",(void*)f_4270},
{"f_10021:expand_2escm",(void*)f_10021},
{"f_10023:expand_2escm",(void*)f_10023},
{"f_10948:expand_2escm",(void*)f_10948},
{"f_10941:expand_2escm",(void*)f_10941},
{"f_4266:expand_2escm",(void*)f_4266},
{"f_4510:expand_2escm",(void*)f_4510},
{"f_10992:expand_2escm",(void*)f_10992},
{"f_10995:expand_2escm",(void*)f_10995},
{"f_10998:expand_2escm",(void*)f_10998},
{"f_9681:expand_2escm",(void*)f_9681},
{"f_6185:expand_2escm",(void*)f_6185},
{"f_10534:expand_2escm",(void*)f_10534},
{"f_10982:expand_2escm",(void*)f_10982},
{"f_10986:expand_2escm",(void*)f_10986},
{"f_6175:expand_2escm",(void*)f_6175},
{"f_11355:expand_2escm",(void*)f_11355},
{"f_6293:expand_2escm",(void*)f_6293},
{"f_4554:expand_2escm",(void*)f_4554},
{"f_7466:expand_2escm",(void*)f_7466},
{"f_7464:expand_2escm",(void*)f_7464},
{"f_4367:expand_2escm",(void*)f_4367},
{"f_4361:expand_2escm",(void*)f_4361},
{"f_9675:expand_2escm",(void*)f_9675},
{"f_9678:expand_2escm",(void*)f_9678},
{"f_9671:expand_2escm",(void*)f_9671},
{"f_11336:expand_2escm",(void*)f_11336},
{"f_4350:expand_2escm",(void*)f_4350},
{"f_5696:expand_2escm",(void*)f_5696},
{"f_6766:expand_2escm",(void*)f_6766},
{"f_4536:expand_2escm",(void*)f_4536},
{"f_8576:expand_2escm",(void*)f_8576},
{"f_9693:expand_2escm",(void*)f_9693},
{"f_11313:expand_2escm",(void*)f_11313},
{"f_11311:expand_2escm",(void*)f_11311},
{"f_6797:expand_2escm",(void*)f_6797},
{"f_6799:expand_2escm",(void*)f_6799},
{"f_8589:expand_2escm",(void*)f_8589},
{"f_4295:expand_2escm",(void*)f_4295},
{"f_6785:expand_2escm",(void*)f_6785},
{"f_5671:expand_2escm",(void*)f_5671},
{"f_10704:expand_2escm",(void*)f_10704},
{"f_9637:expand_2escm",(void*)f_9637},
{"f_10737:expand_2escm",(void*)f_10737},
{"f_10731:expand_2escm",(void*)f_10731},
{"f_10734:expand_2escm",(void*)f_10734},
{"f_4395:expand_2escm",(void*)f_4395},
{"f_9600:expand_2escm",(void*)f_9600},
{"f_9607:expand_2escm",(void*)f_9607},
{"f_11365:expand_2escm",(void*)f_11365},
{"f_11363:expand_2escm",(void*)f_11363},
{"f_10716:expand_2escm",(void*)f_10716},
{"f_9598:expand_2escm",(void*)f_9598},
{"f_10714:expand_2escm",(void*)f_10714},
{"f_11812:expand_2escm",(void*)f_11812},
{"f_10740:expand_2escm",(void*)f_10740},
{"f_11806:expand_2escm",(void*)f_11806},
{"f_11808:expand_2escm",(void*)f_11808},
{"f_6770:expand_2escm",(void*)f_6770},
{"f_9577:expand_2escm",(void*)f_9577},
{"f_10776:expand_2escm",(void*)f_10776},
{"f_9574:expand_2escm",(void*)f_9574},
{"f_10773:expand_2escm",(void*)f_10773},
{"f_9570:expand_2escm",(void*)f_9570},
{"f_6273:expand_2escm",(void*)f_6273},
{"f_10728:expand_2escm",(void*)f_10728},
{"f_10720:expand_2escm",(void*)f_10720},
{"f_11825:expand_2escm",(void*)f_11825},
{"f_4467:expand_2escm",(void*)f_4467},
{"f_11823:expand_2escm",(void*)f_11823},
{"f_11829:expand_2escm",(void*)f_11829},
{"f_4460:expand_2escm",(void*)f_4460},
{"f_9616:expand_2escm",(void*)f_9616},
{"f_9613:expand_2escm",(void*)f_9613},
{"f_5972:expand_2escm",(void*)f_5972},
{"f_10751:expand_2escm",(void*)f_10751},
{"f_10753:expand_2escm",(void*)f_10753},
{"f_3730:expand_2escm",(void*)f_3730},
{"f_4456:expand_2escm",(void*)f_4456},
{"f_11857:expand_2escm",(void*)f_11857},
{"f_9931:expand_2escm",(void*)f_9931},
{"f_10780:expand_2escm",(void*)f_10780},
{"f_10786:expand_2escm",(void*)f_10786},
{"f_10789:expand_2escm",(void*)f_10789},
{"f_3724:expand_2escm",(void*)f_3724},
{"f_11859:expand_2escm",(void*)f_11859},
{"f_11846:expand_2escm",(void*)f_11846},
{"f_11842:expand_2escm",(void*)f_11842},
{"f_4484:expand_2escm",(void*)f_4484},
{"f_11840:expand_2escm",(void*)f_11840},
{"f_8251:expand_2escm",(void*)f_8251},
{"f_8256:expand_2escm",(void*)f_8256},
{"f_11876:expand_2escm",(void*)f_11876},
{"f_11874:expand_2escm",(void*)f_11874},
{"f_9911:expand_2escm",(void*)f_9911},
{"f_9543:expand_2escm",(void*)f_9543},
{"f_9541:expand_2escm",(void*)f_9541},
{"f_9547:expand_2escm",(void*)f_9547},
{"f_10767:expand_2escm",(void*)f_10767},
{"f_8260:expand_2escm",(void*)f_8260},
{"f_8268:expand_2escm",(void*)f_8268},
{"f_8264:expand_2escm",(void*)f_8264},
{"f_11863:expand_2escm",(void*)f_11863},
{"f_4384:expand_2escm",(void*)f_4384},
{"f_8883:expand_2escm",(void*)f_8883},
{"f_8889:expand_2escm",(void*)f_8889},
{"f_10795:expand_2escm",(void*)f_10795},
{"f_9511:expand_2escm",(void*)f_9511},
{"f_4497:expand_2escm",(void*)f_4497},
{"f_8275:expand_2escm",(void*)f_8275},
{"f_8273:expand_2escm",(void*)f_8273},
{"f_4491:expand_2escm",(void*)f_4491},
{"f_9528:expand_2escm",(void*)f_9528},
{"f_8281:expand_2escm",(void*)f_8281},
{"f_9946:expand_2escm",(void*)f_9946},
{"f_5213:expand_2escm",(void*)f_5213},
{"f_4587:expand_2escm",(void*)f_4587},
{"f_8213:expand_2escm",(void*)f_8213},
{"f_8219:expand_2escm",(void*)f_8219},
{"f_5893:expand_2escm",(void*)f_5893},
{"f_5605:expand_2escm",(void*)f_5605},
{"f_5896:expand_2escm",(void*)f_5896},
{"f_9640:expand_2escm",(void*)f_9640},
{"f_9505:expand_2escm",(void*)f_9505},
{"f_8568:expand_2escm",(void*)f_8568},
{"f_9501:expand_2escm",(void*)f_9501},
{"f_8223:expand_2escm",(void*)f_8223},
{"f_9507:expand_2escm",(void*)f_9507},
{"f_8227:expand_2escm",(void*)f_8227},
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
S|  sprintf		1
S|  foldl		1
S|  ##sys#map		5
S|  for-each		2
S|  map		10
o|eliminated procedure checks: 562 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (zero? fixnum)
o|  1 (cdddr (pair * (pair * pair)))
o|  1 (##sys#check-output-port * * *)
o|  2 (vector-length vector)
o|  8 (eqv? (not float) *)
o|  2 (cadr (pair * pair))
o|  8 (cddr (pair * pair))
o|  1 (cdadr (pair * (pair pair *)))
o|  3 (caar (pair pair *))
o|  1 (>= fixnum fixnum)
o|  2 (length list)
o|  15 (eqv? * (not float))
o|  1 (##sys#call-with-values (procedure () *) *)
o|  2 (cdar (pair pair *))
o|  10 (##sys#check-list (or pair list) *)
o|  1 (set-cdr! pair *)
o|  75 (cdr pair)
o|  1 (set-car! pair *)
o|  58 (car pair)
(o e)|safe calls: 1148 
(o e)|assignments to immediate values: 3 
o|Removed `not' forms: 36 
o|inlining procedure: k3651 
o|inlining procedure: k3651 
o|contracted procedure: "(expand.scm:81) g257258" 
o|inlining procedure: k3668 
o|inlining procedure: k3668 
o|contracted procedure: "(expand.scm:95) g288289" 
o|contracted procedure: "(expand.scm:94) g283284" 
o|contracted procedure: "(expand.scm:93) g279280" 
o|inlining procedure: k3713 
o|inlining procedure: k3713 
o|inlining procedure: k3735 
o|inlining procedure: k3735 
o|inlining procedure: k3757 
o|inlining procedure: k3757 
o|contracted procedure: k3763 
o|inlining procedure: k3766 
o|inlining procedure: k3766 
o|contracted procedure: "(expand.scm:109) g321322" 
o|contracted procedure: "(expand.scm:108) g310311" 
o|inlining procedure: k3772 
o|inlining procedure: k3772 
o|inlining procedure: k3831 
o|inlining procedure: k3831 
o|inlining procedure: k3909 
o|contracted procedure: "(expand.scm:136) g423433" 
o|inlining procedure: k3909 
o|inlining procedure: k3957 
o|contracted procedure: "(expand.scm:130) g381389" 
o|contracted procedure: "(expand.scm:134) g399400" 
o|contracted procedure: "(expand.scm:133) g395396" 
o|inlining procedure: k3957 
o|inlining procedure: k4006 
o|inlining procedure: k4006 
o|contracted procedure: k4052 
o|inlining procedure: k4049 
o|inlining procedure: k4065 
o|inlining procedure: k4065 
o|inlining procedure: k4083 
o|inlining procedure: k4083 
o|contracted procedure: "(expand.scm:144) g460461" 
o|inlining procedure: k4049 
o|inlining procedure: k4134 
o|inlining procedure: k4134 
o|inlining procedure: k4177 
o|inlining procedure: k4177 
o|inlining procedure: k4232 
o|inlining procedure: k4232 
o|removed unused formal parameters: (me2539) 
o|inlining procedure: k4274 
o|inlining procedure: k4274 
o|removed unused parameter to known procedure: me2539 loop537 
o|inlining procedure: k4345 
o|inlining procedure: k4369 
o|inlining procedure: k4369 
o|inlining procedure: k4412 
o|inlining procedure: k4412 
o|inlining procedure: k4345 
o|inlining procedure: k4441 
o|inlining procedure: k4441 
o|contracted procedure: k4461 
o|merged explicitly consed rest parameter: args563595 
o|consed rest parameter at call site: tmp23065 1 
o|contracted procedure: k4518 
o|inlining procedure: k4515 
o|inlining procedure: k4515 
o|inlining procedure: k4556 
o|inlining procedure: k4579 
o|inlining procedure: k4628 
o|inlining procedure: k4628 
o|inlining procedure: k4697 
o|contracted procedure: "(expand.scm:285) g641650" 
o|inlining procedure: k4697 
o|inlining procedure: k4579 
o|inlining procedure: k4742 
o|inlining procedure: k4742 
o|inlining procedure: k4772 
o|contracted procedure: "(expand.scm:290) g691692" 
o|inlining procedure: k4772 
o|inlining procedure: k4790 
o|inlining procedure: k4790 
o|inlining procedure: k4556 
o|inlining procedure: k4838 
o|inlining procedure: k4838 
o|inlining procedure: k4881 
o|inlining procedure: k4907 
o|inlining procedure: k4907 
o|substituted constant variable: a4914 
o|substituted constant variable: a4916 
o|substituted constant variable: a4918 
o|inlining procedure: k4881 
o|inlining procedure: k4953 
o|inlining procedure: k4970 
o|inlining procedure: k4970 
o|substituted constant variable: %let773 
o|inlining procedure: k5013 
o|inlining procedure: k5013 
o|inlining procedure: k5066 
o|inlining procedure: k5066 
o|contracted procedure: k5069 
o|contracted procedure: k5075 
o|inlining procedure: k5078 
o|inlining procedure: k5078 
o|inlining procedure: k5138 
o|substituted constant variable: %lambda770 
o|inlining procedure: k5138 
o|contracted procedure: "(expand.scm:366) ->keyword764" 
o|inlining procedure: k5176 
o|inlining procedure: k5176 
o|inlining procedure: k4953 
o|inlining procedure: k5223 
o|inlining procedure: k5223 
o|contracted procedure: k5243 
o|inlining procedure: k5240 
o|inlining procedure: k5268 
o|inlining procedure: k5268 
o|inlining procedure: k5284 
o|inlining procedure: k5296 
o|contracted procedure: k5314 
o|inlining procedure: k5296 
o|inlining procedure: k5284 
o|inlining procedure: k5344 
o|inlining procedure: k5344 
o|contracted procedure: k5356 
o|inlining procedure: k5363 
o|inlining procedure: k5382 
o|inlining procedure: k5382 
o|substituted constant variable: a5420 
o|substituted constant variable: a5422 
o|substituted constant variable: a5424 
o|inlining procedure: k5363 
o|inlining procedure: k5431 
o|inlining procedure: k5431 
o|inlining procedure: k5453 
o|inlining procedure: k5453 
o|substituted constant variable: a5470 
o|substituted constant variable: a5472 
o|substituted constant variable: a5474 
o|inlining procedure: k5481 
o|inlining procedure: k5481 
o|substituted constant variable: a5497 
o|substituted constant variable: a5499 
o|substituted constant variable: a5501 
o|contracted procedure: k5508 
o|inlining procedure: k5505 
o|inlining procedure: k5505 
o|inlining procedure: k5240 
o|inlining procedure: k5585 
o|inlining procedure: k5585 
o|inlining procedure: k5607 
o|contracted procedure: "(expand.scm:457) g933943" 
o|inlining procedure: k5607 
o|contracted procedure: k5652 
o|inlining procedure: k5673 
o|inlining procedure: k5673 
o|inlining procedure: k5731 
o|inlining procedure: k5731 
o|inlining procedure: k5740 
o|inlining procedure: k5740 
o|inlining procedure: k5749 
o|inlining procedure: k5749 
o|inlining procedure: k5770 
o|inlining procedure: k5770 
o|substituted constant variable: a5783 
o|substituted constant variable: a5785 
o|substituted constant variable: a5787 
o|inlining procedure: k5791 
o|contracted procedure: k5806 
o|inlining procedure: k5803 
o|inlining procedure: k5853 
o|inlining procedure: k5853 
o|inlining procedure: k5803 
o|inlining procedure: k5791 
o|inlining procedure: k5941 
o|contracted procedure: "(expand.scm:508) g10801091" 
o|inlining procedure: k5913 
o|inlining procedure: k5913 
o|inlining procedure: k5941 
o|inlining procedure: k5991 
o|inlining procedure: k5991 
o|inlining procedure: k6003 
o|contracted procedure: "(expand.scm:500) g10321041" 
o|inlining procedure: k6003 
o|inlining procedure: k6037 
o|contracted procedure: "(expand.scm:503) g10561057" 
o|inlining procedure: k6037 
o|substituted constant variable: g10481051 
o|inlining procedure: k6089 
o|inlining procedure: k6116 
o|inlining procedure: k6116 
o|inlining procedure: k6089 
o|contracted procedure: k6150 
o|inlining procedure: k6156 
o|inlining procedure: k6173 
o|inlining procedure: k6173 
o|inlining procedure: k6156 
o|inlining procedure: k6229 
o|inlining procedure: k6229 
o|substituted constant variable: a6251 
o|contracted procedure: k6278 
o|inlining procedure: k6275 
o|contracted procedure: k6297 
o|inlining procedure: k6303 
o|contracted procedure: k6324 
o|inlining procedure: k6321 
o|inlining procedure: k6321 
o|inlining procedure: k6349 
o|inlining procedure: k6349 
o|inlining procedure: k6303 
o|inlining procedure: k6452 
o|inlining procedure: k6452 
o|inlining procedure: k6501 
o|inlining procedure: k6501 
o|inlining procedure: k6537 
o|inlining procedure: k6537 
o|inlining procedure: k6275 
o|contracted procedure: k6590 
o|inlining procedure: k6587 
o|inlining procedure: k6634 
o|inlining procedure: k6634 
o|inlining procedure: k6587 
o|inlining procedure: k6611 
o|inlining procedure: k6611 
o|inlining procedure: k6657 
o|inlining procedure: k6657 
o|inlining procedure: k6669 
o|inlining procedure: k6669 
o|inlining procedure: k6786 
o|inlining procedure: k6786 
o|inlining procedure: k6817 
o|inlining procedure: k6817 
o|inlining procedure: k6879 
o|inlining procedure: k6879 
o|inlining procedure: k6914 
o|inlining procedure: k6914 
o|contracted procedure: "(expand.scm:676) syntax-imports1262" 
o|inlining procedure: k6748 
o|inlining procedure: k6748 
o|inlining procedure: k6959 
o|inlining procedure: k6969 
o|inlining procedure: k6986 
o|inlining procedure: k6986 
o|inlining procedure: k6969 
o|inlining procedure: k6959 
o|inlining procedure: k7013 
o|inlining procedure: k7013 
o|inlining procedure: k7032 
o|inlining procedure: k7032 
o|propagated global variable: sexp1353 ##sys#syntax-error-culprit 
o|inlining procedure: k7055 
o|inlining procedure: k7055 
o|inlining procedure: k7067 
o|inlining procedure: k7067 
o|inlining procedure: k7083 
o|contracted procedure: k7099 
o|inlining procedure: k7096 
o|inlining procedure: k7096 
o|inlining procedure: k7083 
o|inlining procedure: k7123 
o|inlining procedure: k7123 
o|inlining procedure: k7146 
o|inlining procedure: k7170 
o|inlining procedure: k7170 
o|contracted procedure: k7208 
o|inlining procedure: k7205 
o|inlining procedure: k7205 
o|inlining procedure: k7228 
o|inlining procedure: k7228 
o|inlining procedure: k7146 
o|contracted procedure: k7252 
o|inlining procedure: k7249 
o|inlining procedure: k7249 
o|inlining procedure: k7262 
o|inlining procedure: k7274 
o|inlining procedure: k7274 
o|inlining procedure: k7292 
o|inlining procedure: k7292 
o|inlining procedure: k7310 
o|inlining procedure: k7310 
o|inlining procedure: k7328 
o|inlining procedure: k7328 
o|inlining procedure: k7350 
o|inlining procedure: k7350 
o|substituted constant variable: a7363 
o|substituted constant variable: a7365 
o|substituted constant variable: a7367 
o|substituted constant variable: a7369 
o|substituted constant variable: a7371 
o|substituted constant variable: a7373 
o|substituted constant variable: a7375 
o|substituted constant variable: a7377 
o|inlining procedure: k7262 
o|contracted procedure: k7381 
o|contracted procedure: k7390 
o|inlining procedure: k7387 
o|inlining procedure: k7387 
o|inlining procedure: k7468 
o|inlining procedure: k7468 
o|contracted procedure: k7509 
o|inlining procedure: k7506 
o|contracted procedure: "(expand.scm:803) g14451446" 
o|inlining procedure: k7537 
o|inlining procedure: k7537 
o|inlining procedure: k7532 
o|inlining procedure: k7532 
o|inlining procedure: k7506 
o|inlining procedure: k7592 
o|inlining procedure: k7607 
o|inlining procedure: k7607 
o|inlining procedure: k7592 
o|inlining procedure: k7630 
o|inlining procedure: k7651 
o|inlining procedure: k7651 
o|inlining procedure: k7630 
o|inlining procedure: k7688 
o|inlining procedure: k7716 
o|inlining procedure: k7740 
o|inlining procedure: k7740 
o|contracted procedure: "(expand.scm:855) g15351536" 
o|contracted procedure: "(expand.scm:854) g15281529" 
o|inlining procedure: k7716 
o|inlining procedure: k7765 
o|inlining procedure: k7765 
o|inlining procedure: k7799 
o|inlining procedure: k7799 
o|removed unused parameter to known procedure: n1555 "(expand.scm:850) lookup21435" 
o|contracted procedure: "(expand.scm:849) g15091510" 
o|inlining procedure: k7805 
o|inlining procedure: k7805 
o|removed unused parameter to known procedure: n1555 "(expand.scm:847) lookup21435" 
o|contracted procedure: "(expand.scm:846) g14991500" 
o|inlining procedure: k7688 
o|removed unused formal parameters: (n1555) 
o|inlining procedure: k7829 
o|inlining procedure: k7829 
o|inlining procedure: k7854 
o|inlining procedure: k7854 
o|contracted procedure: k7895 
o|inlining procedure: k7892 
o|contracted procedure: "(expand.scm:887) g15801581" 
o|contracted procedure: k7921 
o|inlining procedure: k7918 
o|inlining procedure: k7947 
o|contracted procedure: "(expand.scm:887) g15971598" 
o|inlining procedure: k7947 
o|contracted procedure: "(expand.scm:895) g15931594" 
o|inlining procedure: k7918 
o|inlining procedure: k7892 
o|inlining procedure: k7968 
o|inlining procedure: k7968 
o|inlining procedure: k8050 
o|inlining procedure: k8050 
o|removed side-effect free assignment to unused variable: %vector-length2392 
o|removed side-effect free assignment to unused variable: %vector-ref2393 
o|removed side-effect free assignment to unused variable: %null?2415 
o|removed side-effect free assignment to unused variable: %or2416 
o|removed side-effect free assignment to unused variable: %syntax-error2422 
o|inlining procedure: k8335 
o|inlining procedure: k8335 
o|inlining procedure: k8377 
o|inlining procedure: k8377 
o|inlining procedure: k8425 
o|inlining procedure: k8425 
o|inlining procedure: k8443 
o|inlining procedure: k8443 
o|inlining procedure: k8479 
o|inlining procedure: k8479 
o|inlining procedure: k8581 
o|inlining procedure: k8581 
o|inlining procedure: k8615 
o|inlining procedure: k8615 
o|inlining procedure: k8751 
o|inlining procedure: k8751 
o|inlining procedure: k8814 
o|inlining procedure: k8814 
o|inlining procedure: k8842 
o|inlining procedure: k8842 
o|inlining procedure: k8891 
o|inlining procedure: k8903 
o|inlining procedure: k8903 
o|inlining procedure: k8891 
o|inlining procedure: k8938 
o|inlining procedure: k8938 
o|substituted constant variable: %append2385 
o|inlining procedure: k8980 
o|inlining procedure: k8980 
o|substituted constant variable: %apply2386 
o|substituted constant variable: %append2385 
o|inlining procedure: k9014 
o|inlining procedure: k9014 
o|inlining procedure: k9039 
o|inlining procedure: k9039 
o|inlining procedure: k9083 
o|inlining procedure: k9083 
o|inlining procedure: k9127 
o|inlining procedure: k9127 
o|inlining procedure: k9160 
o|contracted procedure: k9175 
o|inlining procedure: k9181 
o|inlining procedure: k9181 
o|inlining procedure: k9160 
o|inlining procedure: k9216 
o|inlining procedure: k9216 
o|inlining procedure: k9249 
o|contracted procedure: k9264 
o|inlining procedure: k9261 
o|inlining procedure: k9261 
o|inlining procedure: k9249 
o|inlining procedure: k9277 
o|inlining procedure: k9277 
o|inlining procedure: k9301 
o|inlining procedure: k9301 
o|inlining procedure: k9331 
o|inlining procedure: k9331 
o|inlining procedure: k9374 
o|inlining procedure: k9374 
o|inlining procedure: k9416 
o|inlining procedure: k9428 
o|inlining procedure: k9428 
o|inlining procedure: k9416 
o|inlining procedure: k9457 
o|inlining procedure: k9457 
o|inlining procedure: k9551 
o|inlining procedure: k9551 
o|inlining procedure: k9608 
o|inlining procedure: k9629 
o|inlining procedure: k9629 
o|inlining procedure: k9608 
o|inlining procedure: k9717 
o|inlining procedure: k9717 
o|inlining procedure: k9737 
o|inlining procedure: k9737 
o|inlining procedure: k9862 
o|inlining procedure: k9862 
o|contracted procedure: k9878 
o|inlining procedure: k9888 
o|inlining procedure: k9900 
o|inlining procedure: k9900 
o|inlining procedure: k9888 
o|contracted procedure: k9935 
o|inlining procedure: k9932 
o|inlining procedure: k9932 
o|inlining procedure: k9947 
o|inlining procedure: k9947 
o|inlining procedure: k9968 
o|inlining procedure: k9968 
o|inlining procedure: k9998 
o|inlining procedure: k10025 
o|contracted procedure: "(expand.scm:1398) g22572266" 
o|inlining procedure: k10025 
o|inlining procedure: k9998 
o|contracted procedure: k10059 
o|contracted procedure: k10072 
o|inlining procedure: k10069 
o|inlining procedure: k10088 
o|inlining procedure: k10088 
o|inlining procedure: k10097 
o|inlining procedure: k10097 
o|inlining procedure: k10069 
o|inlining procedure: k10202 
o|inlining procedure: k10202 
o|contracted procedure: k10222 
o|inlining procedure: k10232 
o|inlining procedure: k10232 
o|inlining procedure: k10286 
o|inlining procedure: k10286 
o|inlining procedure: k10368 
o|inlining procedure: k10368 
o|inlining procedure: k10402 
o|inlining procedure: k10402 
o|inlining procedure: k10439 
o|contracted procedure: "(expand.scm:1294) g21862187" 
o|inlining procedure: k10439 
o|inlining procedure: k10579 
o|contracted procedure: "(expand.scm:1284) g20892098" 
o|inlining procedure: k10549 
o|inlining procedure: k10549 
o|inlining procedure: k10579 
o|inlining procedure: k10629 
o|contracted procedure: "(expand.scm:1273) g20552064" 
o|inlining procedure: k10629 
o|inlining procedure: k10681 
o|inlining procedure: k10681 
o|contracted procedure: k10758 
o|inlining procedure: k10755 
o|inlining procedure: k10781 
o|inlining procedure: k10781 
o|inlining procedure: k10893 
o|inlining procedure: k10893 
o|inlining procedure: k10755 
o|contracted procedure: k10964 
o|inlining procedure: k10961 
o|substituted constant variable: a10988 
o|substituted constant variable: a10989 
o|inlining procedure: k11006 
o|inlining procedure: k11033 
o|inlining procedure: k11033 
o|inlining procedure: k11006 
o|inlining procedure: k11084 
o|inlining procedure: k11084 
o|inlining procedure: k11220 
o|inlining procedure: k11220 
o|inlining procedure: k11232 
o|inlining procedure: k11232 
o|inlining procedure: k11244 
o|inlining procedure: k11244 
o|inlining procedure: k11256 
o|inlining procedure: k11256 
o|inlining procedure: k11265 
o|inlining procedure: k11265 
o|inlining procedure: k10961 
o|inlining procedure: k11318 
o|inlining procedure: k11318 
o|inlining procedure: k11370 
o|inlining procedure: k11370 
o|inlining procedure: k11413 
o|inlining procedure: k11413 
o|contracted procedure: k11596 
o|inlining procedure: k11593 
o|inlining procedure: k11593 
o|contracted procedure: "(expand.scm:1023) g17421743" 
o|contracted procedure: k11708 
o|inlining procedure: k11705 
o|inlining procedure: k11705 
o|inlining procedure: k11732 
o|inlining procedure: k11732 
o|contracted procedure: "(expand.scm:998) g17121713" 
o|propagated global variable: g16591660 ##sys#expand-import 
o|propagated global variable: g16451646 ##sys#expand-import 
o|propagated global variable: g16311632 ##sys#expand-import 
o|replaced variables: 1617 
o|removed binding forms: 485 
o|substituted constant variable: prop260 
o|removed call to pure procedure with unused result: "(expand.scm:96) void" 
o|substituted constant variable: prop291 
o|substituted constant variable: prop286 
o|substituted constant variable: prop282 
o|substituted constant variable: r371411923 
o|substituted constant variable: prop324 
o|substituted constant variable: prop313 
o|substituted constant variable: prop402 
o|inlining procedure: k3879 
o|inlining procedure: k3879 
o|substituted constant variable: prop398 
o|substituted constant variable: prop463 
o|substituted constant variable: r427511952 
o|substituted constant variable: r437011956 
o|substituted constant variable: r441311959 
o|removed call to pure procedure with unused result: "(expand.scm:246) void" 
o|removed call to pure procedure with unused result: "(expand.scm:206) void" 
o|removed call to pure procedure with unused result: "(expand.scm:203) void" 
o|removed call to pure procedure with unused result: "(expand.scm:203) void" 
o|inlining procedure: k4751 
o|substituted constant variable: prop694 
o|substituted constant variable: r477311986 
o|substituted constant variable: r488211997 
o|substituted constant variable: r507912010 
o|substituted constant variable: r513912013 
o|substituted constant variable: r513912013 
o|substituted constant variable: r548212038 
o|substituted constant variable: r550612039 
o|converted assignments to bindings: (err763) 
o|substituted constant variable: r558612042 
o|substituted constant variable: r558612042 
o|inlining procedure: k5585 
o|substituted constant variable: r585412061 
o|removed call to pure procedure with unused result: "(expand.scm:498) void" 
o|substituted constant variable: r599212069 
o|inlining procedure: k6173 
o|substituted constant variable: r623012085 
o|substituted constant variable: r635012092 
o|substituted constant variable: r635012092 
o|substituted constant variable: r653812100 
o|substituted constant variable: r663512104 
o|substituted constant variable: r661212106 
o|substituted constant variable: r665812109 
o|substituted constant variable: r691512118 
o|substituted constant variable: r674912120 
o|converted assignments to bindings: (outstr1275) 
o|substituted constant variable: r698712125 
o|substituted constant variable: r697012126 
o|substituted constant variable: r696012127 
o|substituted constant variable: r709712139 
o|substituted constant variable: r708412141 
o|substituted constant variable: r722912150 
o|removed call to pure procedure with unused result: "(expand.scm:813) void" 
o|removed call to pure procedure with unused result: "(expand.scm:819) void" 
o|removed call to pure procedure with unused result: "(expand.scm:823) void" 
o|removed call to pure procedure with unused result: "(expand.scm:828) void" 
o|removed call to pure procedure with unused result: "(expand.scm:803) void" 
o|inlining procedure: k7592 
o|substituted constant variable: r760812185 
o|inlining procedure: k7592 
o|inlining procedure: k7592 
o|inlining procedure: k7592 
o|substituted constant variable: r763112195 
o|substituted constant variable: prop1538 
o|substituted constant variable: prop1531 
o|inlining procedure: k7592 
o|inlining procedure: k7592 
o|substituted constant variable: prop1512 
o|substituted constant variable: prop1502 
o|removed call to pure procedure with unused result: "(expand.scm:803) void" 
o|substituted constant variable: r783012210 
o|removed call to pure procedure with unused result: "(expand.scm:889) void" 
o|removed call to pure procedure with unused result: "(expand.scm:894) void" 
o|removed call to pure procedure with unused result: "(expand.scm:896) void" 
o|removed call to pure procedure with unused result: "(expand.scm:901) void" 
o|substituted constant variable: prop1596 
o|removed call to pure procedure with unused result: "(expand.scm:892) void" 
o|removed side-effect free assignment to unused variable: %append2385 
o|removed side-effect free assignment to unused variable: %apply2386 
o|substituted constant variable: r842612229 
o|substituted constant variable: r901512255 
o|substituted constant variable: r918212264 
o|substituted constant variable: r926212269 
o|substituted constant variable: r925012271 
o|substituted constant variable: r927812273 
o|substituted constant variable: r930212275 
o|substituted constant variable: r937512278 
o|substituted constant variable: r963012294 
o|substituted constant variable: r973812301 
o|substituted constant variable: r993312308 
o|substituted constant variable: r1008912319 
o|substituted constant variable: r1075612349 
o|substituted constant variable: r1126612366 
o|substituted constant variable: r1096212367 
o|substituted constant variable: r1131912368 
o|substituted constant variable: r1137112370 
o|substituted constant variable: prop1745 
o|substituted constant variable: r1173312380 
o|substituted constant variable: r1173312380 
o|substituted constant variable: prop1715 
o|simplifications: ((let . 2)) 
o|replaced variables: 66 
o|removed binding forms: 1512 
o|inlining procedure: k3659 
o|contracted procedure: k3704 
o|substituted constant variable: prop40212396 
o|substituted constant variable: prop40212402 
o|contracted procedure: k4314 
o|contracted procedure: k4317 
o|contracted procedure: k4444 
o|removed call to pure procedure with unused result: "(expand.scm:246) void" 
o|contracted procedure: k4512 
o|inlining procedure: k5232 
o|inlining procedure: k5232 
o|contracted procedure: k5875 
o|contracted procedure: k7520 
o|contracted procedure: k7543 
o|contracted procedure: k7557 
o|contracted procedure: k7574 
o|contracted procedure: k7595 
o|substituted constant variable: r759312517 
o|removed call to pure procedure with unused result: "(expand.scm:803) void" 
o|substituted constant variable: r759312522 
o|removed call to pure procedure with unused result: "(expand.scm:803) void" 
o|substituted constant variable: r759312531 
o|removed call to pure procedure with unused result: "(expand.scm:803) void" 
o|substituted constant variable: r759312536 
o|removed call to pure procedure with unused result: "(expand.scm:803) void" 
o|substituted constant variable: r759312541 
o|removed call to pure procedure with unused result: "(expand.scm:803) void" 
o|substituted constant variable: r759312546 
o|removed call to pure procedure with unused result: "(expand.scm:803) void" 
o|contracted procedure: k7823 
o|contracted procedure: k7909 
o|contracted procedure: k7936 
o|contracted procedure: k7952 
o|contracted procedure: k7961 
o|contracted procedure: k7924 
o|inlining procedure: k9169 
o|inlining procedure: k9169 
o|inlining procedure: k9517 
o|inlining procedure: k9517 
o|replaced variables: 49 
o|removed binding forms: 161 
o|contracted procedure: k3688 
o|contracted procedure: k3696 
o|contracted procedure: k3701 
o|contracted procedure: k3749 
o|contracted procedure: k3754 
o|contracted procedure: k3870 
o|contracted procedure: k4057 
o|contracted procedure: k444411973 
o|substituted constant variable: r558612456 
o|contracted procedure: k759512521 
o|substituted constant variable: result147512518 
o|contracted procedure: k759512526 
o|substituted constant variable: result147512523 
o|contracted procedure: k759512535 
o|substituted constant variable: result147512532 
o|contracted procedure: k759512540 
o|substituted constant variable: result147512537 
o|contracted procedure: k7696 
o|contracted procedure: k7704 
o|contracted procedure: k7728 
o|contracted procedure: k7737 
o|contracted procedure: k759512545 
o|substituted constant variable: result147512542 
o|contracted procedure: k759512550 
o|substituted constant variable: result147512547 
o|inlining procedure: "(expand.scm:850) lookup21435" 
o|inlining procedure: "(expand.scm:847) lookup21435" 
o|contracted procedure: k7944 
o|substituted constant variable: r917012678 
o|substituted constant variable: r917012679 
o|contracted procedure: k11607 
o|contracted procedure: k11716 
o|replaced variables: 4 
o|removed binding forms: 102 
o|removed conditional forms: 2 
o|removed side-effect free assignment to unused variable: lookup21435 
o|replaced variables: 15 
o|removed binding forms: 21 
o|replaced variables: 10 
o|removed binding forms: 13 
o|inlining procedure: k3691 
o|inlining procedure: k3691 
o|replaced variables: 2 
o|removed binding forms: 3 
o|replaced variables: 1 
o|removed binding forms: 3 
o|replaced variables: 4 
o|removed binding forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 48) (##core#call . 1023)) 
o|  call simplifications:
o|    number?
o|    eof-object?
o|    fx-	2
o|    cdddr
o|    cadddr	2
o|    cddddr
o|    >=
o|    +	3
o|    =
o|    -
o|    <=
o|    boolean?
o|    char?	2
o|    cdar	2
o|    ##sys#immediate?
o|    vector-ref	5
o|    fx<	2
o|    not	4
o|    fx=	7
o|    memq	7
o|    member
o|    caddr	12
o|    length	11
o|    fx<=	2
o|    ##sys#call-with-values
o|    cddr	10
o|    ##sys#list	163
o|    ##sys#cons	87
o|    list?	5
o|    cadr	36
o|    values	8
o|    ##sys#apply	2
o|    memv
o|    equal?	2
o|    string?	3
o|    ##sys#make-structure	2
o|    apply	2
o|    list	16
o|    set-car!	4
o|    procedure?
o|    ##sys#structure?	2
o|    caar	9
o|    eq?	74
o|    null?	51
o|    car	66
o|    ##sys#check-list	13
o|    assq	13
o|    symbol?	42
o|    vector?	13
o|    fx>=	5
o|    fx+	4
o|    cons	80
o|    ##sys#setslot	18
o|    pair?	87
o|    ##sys#slot	71
o|    ##sys#size	5
o|    fx>	5
o|    char=?
o|    cdr	49
o|contracted procedure: k3683 
o|contracted procedure: k3707 
o|contracted procedure: k3710 
o|contracted procedure: k3716 
o|contracted procedure: k3732 
o|contracted procedure: k3744 
o|contracted procedure: k3769 
o|contracted procedure: k3775 
o|contracted procedure: k3778 
o|contracted procedure: k3806 
o|contracted procedure: k3782 
o|contracted procedure: k3785 
o|contracted procedure: k3788 
o|contracted procedure: k3812 
o|contracted procedure: k3815 
o|contracted procedure: k3856 
o|contracted procedure: k3822 
o|contracted procedure: k3834 
o|contracted procedure: k3837 
o|contracted procedure: k3844 
o|contracted procedure: k3852 
o|contracted procedure: k3882 
o|contracted procedure: k3885 
o|contracted procedure: k3895 
o|contracted procedure: k3948 
o|contracted procedure: k3912 
o|contracted procedure: k3938 
o|contracted procedure: k3942 
o|contracted procedure: k3934 
o|contracted procedure: k3915 
o|contracted procedure: k3918 
o|contracted procedure: k3926 
o|contracted procedure: k3930 
o|contracted procedure: k3985 
o|contracted procedure: k3960 
o|contracted procedure: k3978 
o|contracted procedure: k3982 
o|contracted procedure: k3963 
o|contracted procedure: k3970 
o|contracted procedure: k3974 
o|contracted procedure: k3991 
o|contracted procedure: k3994 
o|contracted procedure: k3997 
o|contracted procedure: k4009 
o|contracted procedure: k4012 
o|contracted procedure: k4015 
o|contracted procedure: k4023 
o|contracted procedure: k4031 
o|contracted procedure: k4119 
o|contracted procedure: k4068 
o|contracted procedure: k4086 
o|contracted procedure: k4115 
o|contracted procedure: k4105 
o|contracted procedure: k4159 
o|contracted procedure: k4131 
o|contracted procedure: k4137 
o|contracted procedure: k4150 
o|contracted procedure: k4182 
o|contracted procedure: k4185 
o|contracted procedure: k4193 
o|contracted procedure: k4204 
o|contracted procedure: k4200 
o|contracted procedure: k4229 
o|contracted procedure: k4248 
o|contracted procedure: k4277 
o|contracted procedure: k4299 
o|contracted procedure: k4283 
o|contracted procedure: k4355 
o|contracted procedure: k4345 
o|contracted procedure: k4363 
o|contracted procedure: k4372 
o|contracted procedure: k4375 
o|contracted procedure: k4389 
o|contracted procedure: k4399 
o|contracted procedure: k4403 
o|contracted procedure: k4409 
o|contracted procedure: k4415 
o|contracted procedure: k4423 
o|contracted procedure: k4430 
o|contracted procedure: k4447 
o|contracted procedure: k4547 
o|contracted procedure: k4527 
o|contracted procedure: k4538 
o|contracted procedure: k4559 
o|contracted procedure: k4567 
o|contracted procedure: k4573 
o|contracted procedure: k4582 
o|contracted procedure: k4588 
o|contracted procedure: k4594 
o|contracted procedure: k4600 
o|contracted procedure: k4676 
o|contracted procedure: k4684 
o|contracted procedure: k4691 
o|contracted procedure: k4672 
o|contracted procedure: k4668 
o|contracted procedure: k4664 
o|contracted procedure: k4660 
o|contracted procedure: k4615 
o|contracted procedure: k4619 
o|contracted procedure: k4611 
o|contracted procedure: k4607 
o|contracted procedure: k4631 
o|contracted procedure: k4653 
o|contracted procedure: k4649 
o|contracted procedure: k4634 
o|contracted procedure: k4637 
o|contracted procedure: k4645 
o|contracted procedure: k4700 
o|contracted procedure: k4722 
o|contracted procedure: k4718 
o|contracted procedure: k4703 
o|contracted procedure: k4706 
o|contracted procedure: k4714 
o|contracted procedure: k4745 
o|contracted procedure: k4761 
o|contracted procedure: k4775 
o|contracted procedure: k4783 
o|contracted procedure: k4856 
o|contracted procedure: k4811 
o|contracted procedure: k4850 
o|contracted procedure: k4814 
o|contracted procedure: k4844 
o|contracted procedure: k4817 
o|contracted procedure: k4862 
o|contracted procedure: k4884 
o|contracted procedure: k4887 
o|contracted procedure: k4893 
o|contracted procedure: k4904 
o|contracted procedure: k4956 
o|contracted procedure: k4973 
o|contracted procedure: k5002 
o|contracted procedure: k5006 
o|contracted procedure: k4998 
o|contracted procedure: k4994 
o|contracted procedure: k4990 
o|contracted procedure: k4986 
o|inlining procedure: k4970 
o|contracted procedure: k5016 
o|contracted procedure: k5031 
o|contracted procedure: k5027 
o|contracted procedure: k5023 
o|inlining procedure: k4970 
o|contracted procedure: k5050 
o|contracted procedure: k5046 
o|contracted procedure: k5042 
o|inlining procedure: k4970 
o|inlining procedure: k5062 
o|inlining procedure: k5062 
o|contracted procedure: k5081 
o|contracted procedure: k5088 
o|contracted procedure: k5091 
o|contracted procedure: k5106 
o|contracted procedure: k5111 
o|contracted procedure: k5126 
o|contracted procedure: k5122 
o|contracted procedure: k5118 
o|contracted procedure: k5134 
o|contracted procedure: k5141 
o|contracted procedure: k5152 
o|contracted procedure: k5148 
o|contracted procedure: k5138 
o|contracted procedure: k4935 
o|contracted procedure: k5102 
o|contracted procedure: k5098 
o|contracted procedure: k5179 
o|contracted procedure: k5182 
o|contracted procedure: k5185 
o|contracted procedure: k5193 
o|contracted procedure: k5201 
o|contracted procedure: k5220 
o|contracted procedure: k5226 
o|contracted procedure: k5519 
o|contracted procedure: k5249 
o|contracted procedure: k5255 
o|contracted procedure: k5262 
o|contracted procedure: k5271 
o|contracted procedure: k5287 
o|contracted procedure: k5293 
o|contracted procedure: k5306 
o|contracted procedure: k5318 
o|contracted procedure: k5324 
o|contracted procedure: k5338 
o|contracted procedure: k5347 
o|contracted procedure: k5366 
o|contracted procedure: k5372 
o|contracted procedure: k5379 
o|contracted procedure: k5385 
o|contracted procedure: k5396 
o|contracted procedure: k5392 
o|contracted procedure: k5402 
o|contracted procedure: k5416 
o|contracted procedure: k5412 
o|contracted procedure: k5434 
o|contracted procedure: k5443 
o|contracted procedure: k5450 
o|contracted procedure: k5456 
o|contracted procedure: k5466 
o|contracted procedure: k5478 
o|contracted procedure: k5484 
o|contracted procedure: k5491 
o|contracted procedure: k5502 
o|contracted procedure: k5515 
o|contracted procedure: k5547 
o|contracted procedure: k5555 
o|contracted procedure: k5551 
o|contracted procedure: k5567 
o|contracted procedure: k5575 
o|contracted procedure: k5578 
o|contracted procedure: k5588 
o|contracted procedure: k5594 
o|contracted procedure: k5601 
o|contracted procedure: k5585 
o|contracted procedure: k5646 
o|contracted procedure: k5610 
o|contracted procedure: k5636 
o|contracted procedure: k5640 
o|contracted procedure: k5632 
o|contracted procedure: k5613 
o|contracted procedure: k5616 
o|contracted procedure: k5624 
o|contracted procedure: k5628 
o|contracted procedure: k5658 
o|contracted procedure: k5661 
o|contracted procedure: k5664 
o|contracted procedure: k5676 
o|contracted procedure: k5679 
o|contracted procedure: k5682 
o|contracted procedure: k5690 
o|contracted procedure: k5698 
o|contracted procedure: k6566 
o|contracted procedure: k5713 
o|contracted procedure: k6560 
o|contracted procedure: k5716 
o|contracted procedure: k6554 
o|contracted procedure: k5719 
o|contracted procedure: k5728 
o|contracted procedure: k5737 
o|contracted procedure: k5752 
o|contracted procedure: k5767 
o|contracted procedure: k6070 
o|contracted procedure: k5794 
o|contracted procedure: k5869 
o|contracted procedure: k5812 
o|contracted procedure: k5833 
o|contracted procedure: k5846 
o|contracted procedure: k5849 
o|contracted procedure: k5856 
o|contracted procedure: k5883 
o|contracted procedure: k5897 
o|contracted procedure: k5879 
o|contracted procedure: k5908 
o|contracted procedure: k5947 
o|contracted procedure: k5950 
o|contracted procedure: k5958 
o|contracted procedure: k5962 
o|contracted procedure: k5966 
o|contracted procedure: k5974 
o|contracted procedure: k5978 
o|contracted procedure: k5982 
o|contracted procedure: k5923 
o|contracted procedure: k5988 
o|contracted procedure: k5994 
o|contracted procedure: k6006 
o|contracted procedure: k6028 
o|contracted procedure: k6024 
o|contracted procedure: k6009 
o|contracted procedure: k6012 
o|contracted procedure: k6020 
o|contracted procedure: k6040 
o|contracted procedure: k6047 
o|contracted procedure: k6067 
o|contracted procedure: k6104 
o|contracted procedure: k6100 
o|contracted procedure: k6096 
o|contracted procedure: k6119 
o|contracted procedure: k6141 
o|contracted procedure: k6137 
o|contracted procedure: k6122 
o|contracted procedure: k6125 
o|contracted procedure: k6133 
o|contracted procedure: k6263 
o|inlining procedure: k6169 
o|contracted procedure: k6220 
o|contracted procedure: k6176 
o|contracted procedure: k6195 
o|contracted procedure: k6191 
o|contracted procedure: k6187 
o|contracted procedure: k6208 
o|inlining procedure: k6169 
o|contracted procedure: k6259 
o|contracted procedure: k6226 
o|contracted procedure: k6253 
o|contracted procedure: k6232 
o|contracted procedure: k6248 
o|contracted procedure: k6238 
o|contracted procedure: k6548 
o|contracted procedure: k6284 
o|contracted procedure: k6543 
o|contracted procedure: k6288 
o|contracted procedure: k6534 
o|contracted procedure: k6318 
o|contracted procedure: k6437 
o|contracted procedure: k6433 
o|contracted procedure: k6377 
o|contracted procedure: k6391 
o|contracted procedure: k6427 
o|contracted procedure: k6401 
o|contracted procedure: k6423 
o|contracted procedure: k6417 
o|contracted procedure: k6413 
o|contracted procedure: k6405 
o|contracted procedure: k6409 
o|contracted procedure: k6363 
o|contracted procedure: k6337 
o|contracted procedure: k6345 
o|contracted procedure: k6359 
o|contracted procedure: k6352 
o|contracted procedure: k6349 
o|contracted procedure: k6366 
o|contracted procedure: k6481 
o|contracted procedure: k6465 
o|contracted procedure: k6477 
o|contracted procedure: k6469 
o|contracted procedure: k6473 
o|contracted procedure: k6498 
o|contracted procedure: k6530 
o|contracted procedure: k6504 
o|contracted procedure: k6516 
o|contracted procedure: k6526 
o|contracted procedure: k6540 
o|contracted procedure: k6572 
o|contracted procedure: k6654 
o|contracted procedure: k6631 
o|contracted procedure: k6650 
o|contracted procedure: k6593 
o|contracted procedure: k6605 
o|contracted procedure: k6614 
o|contracted procedure: k6622 
o|contracted procedure: k6618 
o|contracted procedure: k6706 
o|contracted procedure: k6672 
o|contracted procedure: k6681 
o|contracted procedure: k6700 
o|contracted procedure: k6696 
o|contracted procedure: k6692 
o|contracted procedure: k6789 
o|contracted procedure: k6820 
o|contracted procedure: k6846 
o|contracted procedure: k6858 
o|contracted procedure: k6938 
o|contracted procedure: k6882 
o|contracted procedure: k6897 
o|contracted procedure: k6917 
o|contracted procedure: k6934 
o|contracted procedure: k6742 
o|contracted procedure: k6751 
o|contracted procedure: k6779 
o|contracted procedure: k6757 
o|contracted procedure: k6947 
o|contracted procedure: k6965 
o|contracted procedure: k6972 
o|contracted procedure: k6983 
o|contracted procedure: k7444 
o|contracted procedure: k6998 
o|contracted procedure: k7438 
o|contracted procedure: k7001 
o|contracted procedure: k7423 
o|contracted procedure: k7007 
o|contracted procedure: k7064 
o|contracted procedure: k7073 
o|contracted procedure: k7086 
o|contracted procedure: k7093 
o|contracted procedure: k7120 
o|contracted procedure: k7129 
o|contracted procedure: k7149 
o|contracted procedure: k7152 
o|contracted procedure: k7155 
o|contracted procedure: k7237 
o|contracted procedure: k7158 
o|contracted procedure: k7173 
o|contracted procedure: k7179 
o|contracted procedure: k7192 
o|contracted procedure: k7196 
o|contracted procedure: k7199 
o|contracted procedure: k7222 
o|contracted procedure: k7218 
o|contracted procedure: k7225 
o|contracted procedure: k7231 
o|contracted procedure: k7246 
o|contracted procedure: k7259 
o|contracted procedure: k7265 
o|contracted procedure: k7271 
o|contracted procedure: k7277 
o|contracted procedure: k7286 
o|contracted procedure: k7295 
o|contracted procedure: k7304 
o|contracted procedure: k7313 
o|contracted procedure: k7322 
o|contracted procedure: k7331 
o|contracted procedure: k7353 
o|contracted procedure: k7356 
o|contracted procedure: k7419 
o|contracted procedure: k7415 
o|contracted procedure: k7407 
o|contracted procedure: k7411 
o|contracted procedure: k7429 
o|contracted procedure: k7459 
o|contracted procedure: k7471 
o|contracted procedure: k7492 
o|contracted procedure: k7586 
o|contracted procedure: k7512 
o|contracted procedure: k7529 
o|contracted procedure: k7540 
o|contracted procedure: k7551 
o|contracted procedure: k7547 
o|contracted procedure: k7565 
o|contracted procedure: k7561 
o|contracted procedure: k7582 
o|contracted procedure: k7578 
o|contracted procedure: k7598 
o|contracted procedure: k7604 
o|contracted procedure: k7627 
o|contracted procedure: k7633 
o|contracted procedure: k7636 
o|contracted procedure: k7683 
o|contracted procedure: k7642 
o|contracted procedure: k7654 
o|contracted procedure: k7657 
o|contracted procedure: k7664 
o|contracted procedure: k7672 
o|contracted procedure: k7676 
o|contracted procedure: k7811 
o|contracted procedure: k7691 
o|contracted procedure: k7713 
o|contracted procedure: k7719 
o|contracted procedure: k7731 
o|contracted procedure: k7743 
o|contracted procedure: k7755 
o|contracted procedure: k7768 
o|contracted procedure: k7771 
o|contracted procedure: k7783 
o|contracted procedure: k7832 
o|contracted procedure: k7848 
o|contracted procedure: k7838 
o|contracted procedure: k7857 
o|contracted procedure: k7878 
o|contracted procedure: k7965 
o|contracted procedure: k7933 
o|contracted procedure: k8047 
o|contracted procedure: k8072 
o|contracted procedure: k8068 
o|contracted procedure: k8092 
o|contracted procedure: k8088 
o|contracted procedure: k8109 
o|contracted procedure: k8095 
o|contracted procedure: k8102 
o|contracted procedure: k8291 
o|contracted procedure: k8371 
o|contracted procedure: k8367 
o|contracted procedure: k8299 
o|contracted procedure: k8303 
o|contracted procedure: k8295 
o|contracted procedure: k8287 
o|contracted procedure: k8311 
o|contracted procedure: k8314 
o|contracted procedure: k8329 
o|contracted procedure: k8325 
o|contracted procedure: k8321 
o|contracted procedure: k8338 
o|contracted procedure: k8341 
o|contracted procedure: k8344 
o|contracted procedure: k8352 
o|contracted procedure: k8360 
o|contracted procedure: k8383 
o|contracted procedure: k8386 
o|contracted procedure: k8393 
o|contracted procedure: k8397 
o|contracted procedure: k8422 
o|contracted procedure: k8428 
o|contracted procedure: k8435 
o|contracted procedure: k8446 
o|contracted procedure: k8452 
o|contracted procedure: k8467 
o|contracted procedure: k8463 
o|contracted procedure: k8459 
o|contracted procedure: k8482 
o|contracted procedure: k8533 
o|contracted procedure: k8493 
o|contracted procedure: k8505 
o|contracted procedure: k8501 
o|contracted procedure: k8497 
o|contracted procedure: k8489 
o|contracted procedure: k8521 
o|contracted procedure: k8527 
o|contracted procedure: k8539 
o|contracted procedure: k8578 
o|contracted procedure: k8550 
o|contracted procedure: k8562 
o|contracted procedure: k8558 
o|contracted procedure: k8554 
o|contracted procedure: k8546 
o|contracted procedure: k8570 
o|contracted procedure: k8584 
o|contracted procedure: k8598 
o|contracted procedure: k8594 
o|contracted procedure: k8609 
o|contracted procedure: k8605 
o|contracted procedure: k8612 
o|contracted procedure: k8635 
o|contracted procedure: k8737 
o|contracted procedure: k8733 
o|contracted procedure: k8643 
o|contracted procedure: k8729 
o|contracted procedure: k8725 
o|contracted procedure: k8651 
o|contracted procedure: k8717 
o|contracted procedure: k8721 
o|contracted procedure: k8659 
o|contracted procedure: k8710 
o|contracted procedure: k8699 
o|contracted procedure: k8667 
o|contracted procedure: k8675 
o|contracted procedure: k8671 
o|contracted procedure: k8663 
o|contracted procedure: k8655 
o|contracted procedure: k8647 
o|contracted procedure: k8639 
o|contracted procedure: k8631 
o|contracted procedure: k8691 
o|contracted procedure: k8695 
o|contracted procedure: k8687 
o|contracted procedure: k8683 
o|contracted procedure: k8741 
o|contracted procedure: k8745 
o|contracted procedure: k8754 
o|contracted procedure: k8760 
o|contracted procedure: k8767 
o|contracted procedure: k8839 
o|contracted procedure: k8780 
o|contracted procedure: k8831 
o|contracted procedure: k8783 
o|contracted procedure: k8798 
o|contracted procedure: k8802 
o|contracted procedure: k8817 
o|contracted procedure: k8828 
o|contracted procedure: k8824 
o|contracted procedure: k8814 
o|contracted procedure: k8845 
o|contracted procedure: k8862 
o|contracted procedure: k8868 
o|contracted procedure: k8874 
o|contracted procedure: k8885 
o|contracted procedure: k8894 
o|contracted procedure: k8897 
o|contracted procedure: k8913 
o|contracted procedure: k8906 
o|contracted procedure: k8920 
o|contracted procedure: k8932 
o|contracted procedure: k8941 
o|contracted procedure: k8959 
o|contracted procedure: k8983 
o|substituted constant variable: g13623 
o|contracted procedure: k8990 
o|contracted procedure: k8994 
o|contracted procedure: k9008 
o|contracted procedure: k9004 
o|contracted procedure: k9011 
o|contracted procedure: k9017 
o|contracted procedure: k9023 
o|contracted procedure: k9036 
o|contracted procedure: k9042 
o|contracted procedure: k9063 
o|contracted procedure: k9086 
o|contracted procedure: k9092 
o|contracted procedure: k9099 
o|contracted procedure: k9112 
o|contracted procedure: k9116 
o|contracted procedure: k9124 
o|contracted procedure: k9130 
o|contracted procedure: k9147 
o|contracted procedure: k9163 
o|contracted procedure: k9192 
o|contracted procedure: k9178 
o|contracted procedure: k9188 
o|contracted procedure: k9169 
o|contracted procedure: k9205 
o|contracted procedure: k9213 
o|contracted procedure: k9219 
o|contracted procedure: k9236 
o|contracted procedure: k9271 
o|contracted procedure: k9280 
o|contracted procedure: k9286 
o|contracted procedure: k9293 
o|contracted procedure: k9315 
o|contracted procedure: k9325 
o|contracted procedure: k9341 
o|contracted procedure: k9344 
o|contracted procedure: k9399 
o|contracted procedure: k9358 
o|contracted procedure: k9377 
o|contracted procedure: k9380 
o|contracted procedure: k9387 
o|contracted procedure: k9480 
o|contracted procedure: k9408 
o|contracted procedure: k9445 
o|contracted procedure: k9419 
o|contracted procedure: k9441 
o|contracted procedure: k9431 
o|contracted procedure: k9448 
o|contracted procedure: k9460 
o|contracted procedure: k9470 
o|contracted procedure: k9474 
o|contracted procedure: k9512 
o|contracted procedure: k9523 
o|contracted procedure: k9531 
o|contracted procedure: k9535 
o|contracted procedure: k9562 
o|contracted procedure: k9582 
o|contracted procedure: k9592 
o|contracted procedure: k9588 
o|contracted procedure: k9602 
o|contracted procedure: k9617 
o|contracted procedure: k9620 
o|contracted procedure: k9626 
o|contracted procedure: k9632 
o|contracted procedure: k9665 
o|contracted procedure: k9661 
o|contracted procedure: k9657 
o|contracted procedure: k9645 
o|contracted procedure: k9653 
o|contracted procedure: k9649 
o|contracted procedure: k9686 
o|contracted procedure: k9702 
o|contracted procedure: k9698 
o|contracted procedure: k9750 
o|contracted procedure: k9710 
o|contracted procedure: k9714 
o|contracted procedure: k9731 
o|contracted procedure: k9727 
o|contracted procedure: k9717 
o|contracted procedure: k9734 
o|contracted procedure: k9740 
o|contracted procedure: k9758 
o|contracted procedure: k9761 
o|contracted procedure: k9772 
o|contracted procedure: k9798 
o|contracted procedure: k9790 
o|contracted procedure: k9808 
o|contracted procedure: k9821 
o|contracted procedure: k9834 
o|contracted procedure: k9856 
o|contracted procedure: k9865 
o|contracted procedure: k9989 
o|contracted procedure: k9884 
o|contracted procedure: k9894 
o|contracted procedure: k9903 
o|contracted procedure: k9916 
o|contracted procedure: k9965 
o|contracted procedure: k9941 
o|contracted procedure: k9954 
o|contracted procedure: k9982 
o|contracted procedure: k10001 
o|contracted procedure: k10008 
o|contracted procedure: k10016 
o|contracted procedure: k10028 
o|contracted procedure: k10050 
o|contracted procedure: k10046 
o|contracted procedure: k10031 
o|contracted procedure: k10034 
o|contracted procedure: k10042 
o|contracted procedure: k10116 
o|contracted procedure: k10065 
o|contracted procedure: k10112 
o|contracted procedure: k10078 
o|contracted procedure: k10091 
o|contracted procedure: k10137 
o|contracted procedure: k10133 
o|contracted procedure: k10170 
o|contracted procedure: k10166 
o|contracted procedure: k10162 
o|contracted procedure: k10158 
o|contracted procedure: k10205 
o|contracted procedure: k10359 
o|contracted procedure: k10228 
o|contracted procedure: k10241 
o|contracted procedure: k10254 
o|contracted procedure: k10262 
o|contracted procedure: k10275 
o|contracted procedure: k10283 
o|contracted procedure: k10295 
o|contracted procedure: k10305 
o|contracted procedure: k10324 
o|contracted procedure: k10316 
o|contracted procedure: k10332 
o|contracted procedure: k10336 
o|contracted procedure: k10350 
o|contracted procedure: k10385 
o|contracted procedure: k10381 
o|contracted procedure: k10377 
o|contracted procedure: k10399 
o|contracted procedure: k10430 
o|contracted procedure: k10405 
o|contracted procedure: k10426 
o|contracted procedure: k10420 
o|contracted procedure: k10416 
o|contracted procedure: k10412 
o|contracted procedure: k10448 
o|contracted procedure: k10461 
o|contracted procedure: k10474 
o|contracted procedure: k10477 
o|contracted procedure: k10490 
o|contracted procedure: k10508 
o|contracted procedure: k10519 
o|contracted procedure: k10620 
o|contracted procedure: k10524 
o|contracted procedure: k10544 
o|contracted procedure: k10540 
o|contracted procedure: k10536 
o|contracted procedure: k10528 
o|contracted procedure: k10515 
o|contracted procedure: k10582 
o|contracted procedure: k10585 
o|contracted procedure: k10588 
o|contracted procedure: k10596 
o|contracted procedure: k10604 
o|contracted procedure: k10570 
o|contracted procedure: k10566 
o|contracted procedure: k10552 
o|contracted procedure: k10560 
o|contracted procedure: k10610 
o|contracted procedure: k10617 
o|contracted procedure: k10632 
o|contracted procedure: k10635 
o|contracted procedure: k10638 
o|contracted procedure: k10646 
o|contracted procedure: k10654 
o|contracted procedure: k10499 
o|contracted procedure: k10503 
o|contracted procedure: k10670 
o|contracted procedure: k10684 
o|contracted procedure: k10691 
o|contracted procedure: k10708 
o|contracted procedure: k10698 
o|contracted procedure: k10721 
o|contracted procedure: k10933 
o|contracted procedure: k10745 
o|contracted procedure: k10929 
o|contracted procedure: k10761 
o|contracted procedure: k10800 
o|contracted procedure: k10807 
o|contracted procedure: k10821 
o|contracted procedure: k10810 
o|contracted procedure: k10817 
o|contracted procedure: k10871 
o|contracted procedure: k10880 
o|contracted procedure: k10884 
o|contracted procedure: k10828 
o|contracted procedure: k10846 
o|contracted procedure: k10853 
o|contracted procedure: k10867 
o|contracted procedure: k10856 
o|contracted procedure: k10863 
o|contracted procedure: k10896 
o|contracted procedure: k10899 
o|contracted procedure: k10902 
o|contracted procedure: k10910 
o|contracted procedure: k10918 
o|contracted procedure: k10925 
o|contracted procedure: k10943 
o|contracted procedure: k11305 
o|contracted procedure: k10967 
o|contracted procedure: k11028 
o|contracted procedure: k11046 
o|contracted procedure: k11036 
o|contracted procedure: k11060 
o|contracted procedure: k11049 
o|contracted procedure: k11056 
o|contracted procedure: k11072 
o|contracted procedure: k11121 
o|contracted procedure: k11117 
o|contracted procedure: k11097 
o|contracted procedure: k11113 
o|contracted procedure: k11105 
o|contracted procedure: k11101 
o|contracted procedure: k11169 
o|contracted procedure: k11137 
o|contracted procedure: k11165 
o|contracted procedure: k11149 
o|contracted procedure: k11161 
o|contracted procedure: k11153 
o|contracted procedure: k11145 
o|contracted procedure: k11141 
o|contracted procedure: k11176 
o|contracted procedure: k11180 
o|contracted procedure: k11189 
o|contracted procedure: k11196 
o|contracted procedure: k11212 
o|contracted procedure: k11201 
o|contracted procedure: k11208 
o|contracted procedure: k11217 
o|contracted procedure: k11223 
o|contracted procedure: k11229 
o|contracted procedure: k11235 
o|contracted procedure: k11241 
o|contracted procedure: k11253 
o|contracted procedure: k11268 
o|contracted procedure: k11279 
o|contracted procedure: k11301 
o|contracted procedure: k11315 
o|contracted procedure: k11321 
o|contracted procedure: k11324 
o|contracted procedure: k11331 
o|contracted procedure: k11357 
o|contracted procedure: k11341 
o|contracted procedure: k11349 
o|contracted procedure: k11345 
o|contracted procedure: k11367 
o|contracted procedure: k11373 
o|contracted procedure: k11376 
o|contracted procedure: k11383 
o|contracted procedure: k11390 
o|contracted procedure: k11407 
o|contracted procedure: k11410 
o|contracted procedure: k11416 
o|contracted procedure: k11423 
o|contracted procedure: k11433 
o|contracted procedure: k11460 
o|contracted procedure: k11482 
o|contracted procedure: k11504 
o|contracted procedure: k11526 
o|contracted procedure: k11554 
o|contracted procedure: k11564 
o|contracted procedure: k11578 
o|contracted procedure: k11567 
o|contracted procedure: k11574 
o|contracted procedure: k11588 
o|contracted procedure: k11681 
o|contracted procedure: k11663 
o|contracted procedure: k11659 
o|contracted procedure: k11655 
o|contracted procedure: k11677 
o|contracted procedure: k11668 
o|contracted procedure: k11610 
o|contracted procedure: k11623 
o|contracted procedure: k11700 
o|contracted procedure: k11800 
o|contracted procedure: k11796 
o|contracted procedure: k11756 
o|contracted procedure: k11780 
o|contracted procedure: k11790 
o|contracted procedure: k11786 
o|contracted procedure: k11776 
o|contracted procedure: k11719 
o|contracted procedure: k11735 
o|contracted procedure: k11817 
o|contracted procedure: k11834 
o|contracted procedure: k11851 
o|contracted procedure: k11868 
o|contracted procedure: k11885 
o|simplifications: ((let . 185)) 
o|replaced variables: 2 
o|removed binding forms: 851 
o|inlining procedure: k5130 
o|inlining procedure: k5130 
o|inlining procedure: k6173 
o|inlining procedure: k6341 
o|inlining procedure: k6341 
o|inlining procedure: k9706 
o|inlining procedure: k9706 
o|inlining procedure: k11616 
o|replaced variables: 185 
o|removed binding forms: 6 
o|simplifications: ((let . 1) (if . 2)) 
o|replaced variables: 4 
o|removed binding forms: 109 
o|contracted procedure: k10650 
o|replaced variables: 4 
o|removed binding forms: 4 
o|removed binding forms: 2 
o|direct leaf routine/allocation: lookup 0 
o|direct leaf routine/allocation: g507508 0 
o|direct leaf routine/allocation: g12301231 0 
o|direct leaf routine/allocation: g13211322 0 
o|direct leaf routine/allocation: loop1373 0 
o|direct leaf routine/allocation: g15401541 0 
o|direct leaf routine/allocation: g15491550 0 
o|direct leaf routine/allocation: assq-reverse1436 0 
o|direct leaf routine/allocation: g19901999 15 
o|contracted procedure: "(expand.scm:92) k3680" 
o|contracted procedure: "(expand.scm:168) k4174" 
o|contracted procedure: "(expand.scm:180) k4210" 
o|contracted procedure: "(expand.scm:184) k4226" 
o|contracted procedure: "(expand.scm:186) k4235" 
o|contracted procedure: "(expand.scm:271) k4570" 
o|contracted procedure: "(expand.scm:273) k4787" 
o|contracted procedure: "(expand.scm:474) k5725" 
o|converted assignments to bindings: (loop1373) 
o|contracted procedure: "(expand.scm:868) k7796" 
o|contracted procedure: "(expand.scm:868) k7802" 
o|contracted procedure: "(expand.scm:887) k7898" 
o|contracted procedure: "(expand.scm:888) k7901" 
o|contracted procedure: "(expand.scm:1239) k10914" 
o|simplifications: ((let . 1) (if . 2)) 
o|removed binding forms: 13 
o|contracted procedure: "(expand.scm:787) k7343" 
o|replaced variables: 12 
o|removed binding forms: 1 
o|removed binding forms: 6 
o|direct leaf routine/allocation: comp988 0 
o|contracted procedure: "(expand.scm:492) k5859" 
o|contracted procedure: "(expand.scm:561) k6306" 
o|contracted procedure: "(expand.scm:588) k6443" 
o|contracted procedure: "(expand.scm:591) k6455" 
o|contracted procedure: "(expand.scm:595) k6487" 
o|simplifications: ((if . 1)) 
o|removed binding forms: 5 
o|replaced variables: 6 
o|removed binding forms: 1 
o|customizable procedures: (loop1700 k11544 check-for-multiple-bindings expand1865 map-loop19842005 k10832 expand1960 expand2027 map-loop20492067 k10532 k10600 map-loop20832101 match-expression g21782179 g21712172 walk2115 walk12116 simplify2117 expand2243 map-loop22512269 err2215 test2216 k9720 g27212728 for-each-loop27202731 loop2699 loop2629 k8997 k8950 doloop25782579 k8587 k8380 map-loop24442461 k8056 loop1763 mirror-rename1437 k7699 k7707 doloop14851486 g14521453 k7137 test1345 k7161 walk1383 doloop13981399 loop1359 err1346 loop1264 loop1277 loop1294 outstr1275 loop1241 mwalk1217 k6291 fini/syntax990 loop1171 loop21187 k6159 loop1121 map-loop11341151 fini989 foldl10491053 map-loop10261065 k5944 map-loop10741101 k5818 loop1009 expand991 map-loop898915 map-loop927951 k5252 k5428 k5341 k5299 k5302 macro-alias k5265 loop774 err763 g796805 map-loop790818 k4967 k4979 k4896 loop741 loop727 k4576 k4731 g695696 loop608 expand552 map-loop635653 map-loop662679 call-handler551 tmp13064 tmp23065 k4348 k4382 copy571 loop537 k4095 loop467 g464465 loop1452 map-loop354371 for-each-loop380407 map-loop417438 doloop331332 walk301 k3674) 
o|calls to known targets: 357 
o|identified direct recursive calls: f_3730 1 
o|identified direct recursive calls: f_3907 1 
o|identified direct recursive calls: f_3955 1 
o|identified direct recursive calls: f_4272 1 
o|identified direct recursive calls: f_4626 1 
o|identified direct recursive calls: f_4695 1 
o|identified direct recursive calls: f_4951 2 
o|identified direct recursive calls: f_5605 1 
o|identified direct recursive calls: f_6001 1 
o|identified direct recursive calls: f_6114 1 
o|identified direct recursive calls: f_6087 1 
o|identified direct recursive calls: f_6585 1 
o|identified direct recursive calls: f_6667 1 
o|identified direct recursive calls: f_6746 1 
o|identified direct recursive calls: f_7118 1 
o|identified direct recursive calls: f_7144 1 
o|identified direct recursive calls: f_7466 1 
o|identified direct recursive calls: f_7590 1 
o|identified direct recursive calls: f_7827 1 
o|identified direct recursive calls: f_7852 1 
o|identified direct recursive calls: f_8978 1 
o|identified direct recursive calls: f_9372 1 
o|identified direct recursive calls: f_10023 1 
o|identified direct recursive calls: f_10627 1 
o|identified direct recursive calls: f_10679 1 
o|identified direct recursive calls: f_10891 1 
o|fast box initializations: 69 
o|fast global references: 29 
o|fast global assignments: 4 
o|dropping unused closure argument: f_3666 
o|dropping unused closure argument: f_7827 
o|dropping unused closure argument: f_6582 
o|dropping unused closure argument: f_3649 
o|dropping unused closure argument: f_8039 
o|dropping unused closure argument: f_7118 
*/
/* end of file */

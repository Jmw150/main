/* Generated from data-structures.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: data-structures.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file data-structures.c
   unit: data_2dstructures
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[121];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,105,100,101,110,116,105,116,121,32,120,54,52,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,54,57,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,102,95,49,51,57,57,32,120,54,55,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,19),40,99,111,110,106,111,105,110,32,46,32,112,114,101,100,115,54,54,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,56,49,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,102,95,49,52,51,50,32,120,55,57,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,19),40,100,105,115,106,111,105,110,32,46,32,112,114,101,100,115,55,56,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,14),40,102,95,49,52,55,56,32,46,32,95,57,50,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,102,95,49,52,56,48,32,46,32,95,57,51,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,99,111,110,115,116,97,110,116,108,121,32,46,32,120,115,57,48,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,102,95,49,52,57,48,32,120,57,54,32,121,57,55,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,102,108,105,112,32,112,114,111,99,57,53,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,18),40,102,95,49,52,57,56,32,46,32,97,114,103,115,49,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,99,111,109,112,108,101,109,101,110,116,32,112,57,57,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,53,50,52,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,18),40,102,95,49,53,49,57,32,46,32,97,114,103,115,49,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,102,48,49,48,52,32,46,32,102,110,115,49,48,53,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,18),40,99,111,109,112,111,115,101,32,46,32,102,110,115,49,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,13),40,102,95,49,53,55,48,32,120,49,49,52,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,49,49,49,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,12),40,111,32,46,32,102,110,115,49,48,57,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,50,50,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,15),40,102,95,49,53,56,53,32,108,115,116,49,50,48,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,18),40,108,105,115,116,45,111,102,63,32,112,114,101,100,49,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,15),40,102,95,49,54,51,49,32,46,32,95,49,51,52,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,112,114,111,99,115,49,51,55,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,18),40,102,95,49,54,52,53,32,46,32,97,114,103,115,49,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,17),40,101,97,99,104,32,46,32,112,114,111,99,115,49,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,11),40,97,110,121,63,32,120,49,52,51,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,12),40,97,116,111,109,63,32,120,49,52,53,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,17),40,116,97,105,108,63,32,120,49,52,55,32,121,49,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,110,115,49,54,52,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,25),40,105,110,116,101,114,115,112,101,114,115,101,32,108,115,116,49,54,49,32,120,49,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,55,48,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,16),40,98,117,116,108,97,115,116,32,108,115,116,49,54,56,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,105,115,116,115,49,55,56,32,114,101,115,116,49,55,57,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,21),40,102,108,97,116,116,101,110,32,46,32,108,105,115,116,115,48,49,55,54,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,28),40,100,111,108,111,111,112,49,57,56,32,104,100,50,48,48,32,116,108,50,48,49,32,99,50,48,50,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,115,116,49,57,50,32,105,49,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,18),40,99,104,111,112,32,108,115,116,49,56,56,32,110,49,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,108,115,116,115,50,49,50,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,23),40,106,111,105,110,32,108,115,116,115,50,48,56,32,46,32,108,115,116,50,48,57,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,108,115,116,50,50,54,32,108,115,116,50,50,55,41,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,25),40,99,111,109,112,114,101,115,115,32,98,108,115,116,50,50,50,32,108,115,116,50,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,50,53,54,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,20),40,102,95,50,48,56,48,32,120,50,53,51,32,108,115,116,50,53,52,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,44),40,97,108,105,115,116,45,117,112,100,97,116,101,33,32,120,50,51,57,32,121,50,52,48,32,108,115,116,50,52,49,32,46,32,116,109,112,50,51,56,50,52,50,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,50,55,56,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,43),40,97,108,105,115,116,45,117,112,100,97,116,101,32,107,50,54,56,32,118,50,54,57,32,108,115,116,50,55,48,32,46,32,116,109,112,50,54,55,50,55,49,41,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,49,53,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,20),40,102,95,50,50,55,50,32,120,51,49,50,32,108,115,116,51,49,51,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,35),40,97,108,105,115,116,45,114,101,102,32,120,50,57,52,32,108,115,116,50,57,53,32,46,32,116,109,112,50,57,51,50,57,54,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,51,51,48,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,29),40,114,97,115,115,111,99,32,120,51,50,53,32,108,115,116,51,50,54,32,46,32,116,115,116,51,50,55,41,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,107,51,52,54,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,29),40,114,101,118,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,51,51,57,32,105,51,52,48,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,28),40,114,101,118,101,114,115,101,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,51,51,55,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,15),40,45,62,115,116,114,105,110,103,32,120,51,53,49,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,54,50,32,103,51,55,52,51,56,48,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,16),40,99,111,110,99,32,46,32,97,114,103,115,51,53,57,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,105,115,116,97,114,116,51,57,56,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,52),40,116,114,97,118,101,114,115,101,32,119,104,105,99,104,51,56,55,32,119,104,101,114,101,51,56,56,32,115,116,97,114,116,51,56,57,32,116,101,115,116,51,57,48,32,108,111,99,51,57,49,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,17),40,97,50,54,51,53,32,105,52,49,49,32,108,52,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,52,48,56,32,119,104,101,114,101,52,48,57,32,115,116,97,114,116,52,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,17),40,97,50,54,52,52,32,105,52,49,54,32,108,52,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,52,49,51,32,119,104,101,114,101,52,49,52,32,115,116,97,114,116,52,49,53,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,47),40,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,52,50,53,32,119,104,101,114,101,52,50,54,32,46,32,116,109,112,52,50,52,52,50,55,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,50),40,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,52,51,56,32,119,104,101,114,101,52,51,57,32,46,32,116,109,112,52,51,55,52,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,29),40,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,32,115,49,52,52,55,32,115,50,52,52,56,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,32),40,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,45,99,105,32,115,49,52,53,54,32,115,50,52,53,55,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,56),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,52,54,53,32,115,50,52,54,54,32,115,116,97,114,116,49,52,54,55,32,115,116,97,114,116,50,52,54,56,32,110,52,54,57,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,37),40,115,117,98,115,116,114,105,110,103,61,63,32,115,49,52,56,51,32,115,50,52,56,52,32,46,32,116,109,112,52,56,50,52,56,53,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,59),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,52,57,57,32,115,50,53,48,48,32,115,116,97,114,116,49,53,48,49,32,115,116,97,114,116,50,53,48,50,32,110,53,48,51,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,40),40,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,53,49,55,32,115,50,53,49,56,32,46,32,116,109,112,53,49,54,53,49,57,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,27),40,97,100,100,32,102,114,111,109,53,52,49,32,116,111,53,52,50,32,108,97,115,116,53,52,51,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,53,54,51,41,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,105,53,52,55,32,108,97,115,116,53,52,56,32,102,114,111,109,53,52,57,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,42),40,115,116,114,105,110,103,45,115,112,108,105,116,32,115,116,114,53,51,51,32,46,32,100,101,108,115,116,114,45,97,110,100,45,102,108,97,103,53,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,110,50,54,48,48,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,49,32,115,115,53,57,49,32,110,53,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,40),40,115,116,114,105,110,103,45,105,110,116,101,114,115,112,101,114,115,101,32,115,116,114,115,53,56,50,32,46,32,116,109,112,53,56,49,53,56,51,41};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,55,56,32,99,54,50,49,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,15),40,105,110,115,116,114,105,110,103,32,115,54,49,57,41,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,105,54,52,57,32,106,54,53,48,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,13),40,102,95,51,51,53,48,32,99,54,51,52,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,41),40,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,32,115,116,114,54,49,53,32,102,114,111,109,54,49,54,32,46,32,116,111,54,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,109,97,112,54,55,51,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,37),40,99,111,108,108,101,99,116,32,105,54,54,56,32,102,114,111,109,54,54,57,32,116,111,116,97,108,54,55,48,32,102,115,54,55,49,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,34),40,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,42,32,115,116,114,54,54,52,32,115,109,97,112,54,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,116,111,116,97,108,54,57,48,32,112,111,115,54,57,49,41,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,27),40,115,116,114,105,110,103,45,99,104,111,112,32,115,116,114,54,56,54,32,108,101,110,54,56,55,41,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,33),40,115,116,114,105,110,103,45,99,104,111,109,112,32,115,116,114,55,48,52,32,46,32,116,109,112,55,48,51,55,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,50,53,32,105,55,50,55,41};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,108,97,115,116,55,51,51,32,110,101,120,116,55,51,52,41,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,25),40,115,111,114,116,101,100,63,32,115,101,113,55,49,56,32,108,101,115,115,63,55,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,120,55,52,57,32,97,55,53,48,32,121,55,53,49,32,98,55,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,26),40,109,101,114,103,101,32,97,55,52,49,32,98,55,52,50,32,108,101,115,115,63,55,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,114,55,54,51,32,97,55,54,52,32,98,55,54,53,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,27),40,109,101,114,103,101,33,32,97,55,53,53,32,98,55,53,54,32,108,101,115,115,63,55,53,55,41,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,11),40,115,116,101,112,32,110,55,55,53,41,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,55,57,54,32,112,55,57,56,32,105,55,57,57,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,23),40,115,111,114,116,33,32,115,101,113,55,55,50,32,108,101,115,115,63,55,55,51,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,22),40,115,111,114,116,32,115,101,113,56,48,53,32,108,101,115,115,63,56,48,54,41,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,24),40,119,97,108,107,32,101,100,103,101,115,56,50,54,32,115,116,97,116,101,56,50,55,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,48),40,118,105,115,105,116,32,100,97,103,56,49,49,32,110,111,100,101,56,49,50,32,101,100,103,101,115,56,49,51,32,112,97,116,104,56,49,52,32,115,116,97,116,101,56,49,53,41};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,100,97,103,56,51,52,32,115,116,97,116,101,56,51,53,41,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,33),40,116,111,112,111,108,111,103,105,99,97,108,45,115,111,114,116,32,100,97,103,56,48,56,32,112,114,101,100,56,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,112,115,56,52,52,32,112,101,56,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,30),40,98,105,110,97,114,121,45,115,101,97,114,99,104,32,118,101,99,56,51,57,32,112,114,111,99,56,52,48,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,12),40,109,97,107,101,45,113,117,101,117,101,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,13),40,113,117,101,117,101,63,32,120,56,53,57,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,19),40,113,117,101,117,101,45,108,101,110,103,116,104,32,113,56,54,49,41,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,19),40,113,117,101,117,101,45,101,109,112,116,121,63,32,113,56,54,52,41,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,18),40,113,117,101,117,101,45,102,105,114,115,116,32,113,56,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,113,117,101,117,101,45,108,97,115,116,32,113,56,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,26),40,113,117,101,117,101,45,97,100,100,33,32,113,56,55,55,32,100,97,116,117,109,56,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,20),40,113,117,101,117,101,45,114,101,109,111,118,101,33,32,113,56,56,57,41,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,108,115,116,57,48,48,32,108,115,116,50,57,48,49,41,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,18),40,113,117,101,117,101,45,62,108,105,115,116,32,113,56,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,57,48,54,32,108,115,116,57,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,21),40,108,105,115,116,45,62,113,117,101,117,101,32,108,115,116,48,57,48,53,41,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,31),40,113,117,101,117,101,45,112,117,115,104,45,98,97,99,107,33,32,113,57,49,54,32,105,116,101,109,57,49,55,41,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,57,51,48,41,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,40),40,113,117,101,117,101,45,112,117,115,104,45,98,97,99,107,45,108,105,115,116,33,32,113,57,50,51,32,105,116,101,109,108,105,115,116,57,50,52,41};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_4436)
static void C_fcall f_4436(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word *av) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word *av) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_fcall f_3086(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2522)
static void C_fcall f_2522(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word *av) C_noret;
C_noret_decl(f_4667)
static void C_fcall f_4667(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word *av) C_noret;
C_noret_decl(f_3930)
static void C_fcall f_3930(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word *av) C_noret;
C_noret_decl(f_4394)
static void C_ccall f_4394(C_word c,C_word *av) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word *av) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word *av) C_noret;
C_noret_decl(f_3940)
static void C_ccall f_3940(C_word c,C_word *av) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word *av) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word *av) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word *av) C_noret;
C_noret_decl(f_2556)
static void C_fcall f_2556(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word *av) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word *av) C_noret;
C_noret_decl(f_3927)
static void C_ccall f_3927(C_word c,C_word *av) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word *av) C_noret;
C_noret_decl(f_3367)
static void C_ccall f_3367(C_word c,C_word *av) C_noret;
C_noret_decl(f_3173)
static void C_fcall f_3173(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word *av) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word *av) C_noret;
C_noret_decl(f_3682)
static void C_fcall f_3682(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word *av) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word *av) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word *av) C_noret;
C_noret_decl(f_2847)
static void C_fcall f_2847(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2086)
static void C_fcall f_2086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word *av) C_noret;
C_noret_decl(f_3184)
static C_word C_fcall f_3184(C_word t0,C_word t1);
C_noret_decl(f_1438)
static void C_fcall f_1438(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1430)
static void C_ccall f_1430(C_word c,C_word *av) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word *av) C_noret;
C_noret_decl(f_4567)
static void C_ccall f_4567(C_word c,C_word *av) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word *av) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word *av) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word *av) C_noret;
C_noret_decl(f_1397)
static void C_ccall f_1397(C_word c,C_word *av) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word *av) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word *av) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word *av) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word *av) C_noret;
C_noret_decl(f_2048)
static void C_fcall f_2048(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4157)
static void C_fcall f_4157(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2041)
static void C_ccall f_2041(C_word c,C_word *av) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word *av) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word *av) C_noret;
C_noret_decl(f_4600)
static void C_fcall f_4600(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1405)
static void C_fcall f_1405(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word *av) C_noret;
C_noret_decl(f_3633)
static void C_fcall f_3633(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word *av) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word *av) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word *av) C_noret;
C_noret_decl(f_2598)
static void C_fcall f_2598(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4556)
static void C_ccall f_4556(C_word c,C_word *av) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word *av) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word *av) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word *av) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word *av) C_noret;
C_noret_decl(f_2350)
static void C_fcall f_2350(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2355)
static void C_fcall f_2355(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word *av) C_noret;
C_noret_decl(f_1556)
static void C_fcall f_1556(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word *av) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word *av) C_noret;
C_noret_decl(f_1533)
static void C_ccall f_1533(C_word c,C_word *av) C_noret;
C_noret_decl(f_1478)
static void C_ccall f_1478(C_word c,C_word *av) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word *av) C_noret;
C_noret_decl(f_4529)
static void C_fcall f_4529(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word *av) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word *av) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word *av) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word *av) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word *av) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word *av) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word *av) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word *av) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word *av) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word *av) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word *av) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word *av) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word *av) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word *av) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word *av) C_noret;
C_noret_decl(f_1581)
static void C_ccall f_1581(C_word c,C_word *av) C_noret;
C_noret_decl(f_1583)
static void C_ccall f_1583(C_word c,C_word *av) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externexport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_fcall f_3742(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word *av) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word *av) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word *av) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word *av) C_noret;
C_noret_decl(f_3460)
static void C_fcall f_3460(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word *av) C_noret;
C_noret_decl(f_4695)
static C_word C_fcall f_4695(C_word t0);
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word *av) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706(C_word c,C_word *av) C_noret;
C_noret_decl(f_2394)
static void C_fcall f_2394(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2127)
static void C_ccall f_2127(C_word c,C_word *av) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word *av) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word *av) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word *av) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word *av) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word *av) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word *av) C_noret;
C_noret_decl(f_3420)
static void C_fcall f_3420(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2102)
static void C_ccall f_2102(C_word c,C_word *av) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word *av) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_fcall f_2975(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word *av) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word *av) C_noret;
C_noret_decl(f_4023)
static void C_fcall f_4023(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3518)
static void C_fcall f_3518(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word *av) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word *av) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word *av) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word *av) C_noret;
C_noret_decl(f_4229)
static void C_fcall f_4229(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word *av) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word *av) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_4577)
static void C_fcall f_4577(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word *av) C_noret;
C_noret_decl(f_1591)
static void C_fcall f_1591(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1651)
static void C_fcall f_1651(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word *av) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word *av) C_noret;
C_noret_decl(f_1784)
static void C_fcall f_1784(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2136)
static void C_fcall f_2136(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word *av) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3002)
static void C_fcall f_3002(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word *av) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word *av) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_1755)
static void C_fcall f_1755(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4285)
static void C_fcall f_4285(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2464)
static void C_ccall f_2464(C_word c,C_word *av) C_noret;
C_noret_decl(f_3553)
static void C_ccall f_3553(C_word c,C_word *av) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word *av) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word *av) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word *av) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word *av) C_noret;
C_noret_decl(f_1719)
static void C_fcall f_1719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word *av) C_noret;
C_noret_decl(f_4271)
static void C_fcall f_4271(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word *av) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word *av) C_noret;
C_noret_decl(f_1697)
static C_word C_fcall f_1697(C_word t0,C_word t1);
C_noret_decl(f_2417)
static C_word C_fcall f_2417(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1855)
static void C_fcall f_1855(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2247)
static void C_fcall f_2247(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word *av) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word *av) C_noret;
C_noret_decl(f_1908)
static void C_fcall f_1908(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_fcall f_2955(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word *av) C_noret;
C_noret_decl(f_3228)
static void C_fcall f_3228(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word *av) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word *av) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word *av) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word *av) C_noret;
C_noret_decl(f_2750)
static void C_fcall f_2750(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word *av) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word *av) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word *av) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word *av) C_noret;
C_noret_decl(f_3208)
static void C_ccall f_3208(C_word c,C_word *av) C_noret;
C_noret_decl(f_4069)
static void C_ccall f_4069(C_word c,C_word *av) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word *av) C_noret;
C_noret_decl(f_1826)
static void C_ccall f_1826(C_word c,C_word *av) C_noret;
C_noret_decl(f_3101)
static C_word C_fcall f_3101(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word *av) C_noret;
C_noret_decl(f_4479)
static void C_ccall f_4479(C_word c,C_word *av) C_noret;
C_noret_decl(f_2278)
static void C_fcall f_2278(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1916)
static void C_fcall f_1916(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1834)
static void C_fcall f_1834(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word *av) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word *av) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word *av) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word *av) C_noret;
C_noret_decl(f_3387)
static void C_fcall f_3387(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778(C_word c,C_word *av) C_noret;
C_noret_decl(f_1970)
static void C_fcall f_1970(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word *av) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word *av) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word *av) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word *av) C_noret;
C_noret_decl(f_4085)
static void C_fcall f_4085(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word *av) C_noret;
C_noret_decl(f_4356)
static void C_ccall f_4356(C_word c,C_word *av) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word *av) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word *av) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word *av) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word *av) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word *av) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word *av) C_noret;
C_noret_decl(f_2504)
static void C_ccall f_2504(C_word c,C_word *av) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word *av) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word *av) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word *av) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word *av) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word *av) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void C_fcall f_3806(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word *av) C_noret;

C_noret_decl(trf_4436)
static void C_ccall trf_4436(C_word c,C_word *av) C_noret;
static void C_ccall trf_4436(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4436(t0,t1);}

C_noret_decl(trf_3086)
static void C_ccall trf_3086(C_word c,C_word *av) C_noret;
static void C_ccall trf_3086(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3086(t0,t1,t2,t3);}

C_noret_decl(trf_2522)
static void C_ccall trf_2522(C_word c,C_word *av) C_noret;
static void C_ccall trf_2522(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2522(t0,t1,t2);}

C_noret_decl(trf_4667)
static void C_ccall trf_4667(C_word c,C_word *av) C_noret;
static void C_ccall trf_4667(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4667(t0,t1);}

C_noret_decl(trf_3930)
static void C_ccall trf_3930(C_word c,C_word *av) C_noret;
static void C_ccall trf_3930(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3930(t0,t1,t2);}

C_noret_decl(trf_2556)
static void C_ccall trf_2556(C_word c,C_word *av) C_noret;
static void C_ccall trf_2556(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2556(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3173)
static void C_ccall trf_3173(C_word c,C_word *av) C_noret;
static void C_ccall trf_3173(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3173(t0,t1);}

C_noret_decl(trf_3682)
static void C_ccall trf_3682(C_word c,C_word *av) C_noret;
static void C_ccall trf_3682(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3682(t0,t1,t2,t3);}

C_noret_decl(trf_2847)
static void C_ccall trf_2847(C_word c,C_word *av) C_noret;
static void C_ccall trf_2847(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2847(t0,t1);}

C_noret_decl(trf_2086)
static void C_ccall trf_2086(C_word c,C_word *av) C_noret;
static void C_ccall trf_2086(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2086(t0,t1,t2);}

C_noret_decl(trf_1438)
static void C_ccall trf_1438(C_word c,C_word *av) C_noret;
static void C_ccall trf_1438(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1438(t0,t1,t2);}

C_noret_decl(trf_2048)
static void C_ccall trf_2048(C_word c,C_word *av) C_noret;
static void C_ccall trf_2048(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2048(t0,t1);}

C_noret_decl(trf_4157)
static void C_ccall trf_4157(C_word c,C_word *av) C_noret;
static void C_ccall trf_4157(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4157(t0,t1,t2,t3);}

C_noret_decl(trf_4600)
static void C_ccall trf_4600(C_word c,C_word *av) C_noret;
static void C_ccall trf_4600(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4600(t0,t1);}

C_noret_decl(trf_1405)
static void C_ccall trf_1405(C_word c,C_word *av) C_noret;
static void C_ccall trf_1405(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1405(t0,t1,t2);}

C_noret_decl(trf_3633)
static void C_ccall trf_3633(C_word c,C_word *av) C_noret;
static void C_ccall trf_3633(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3633(t0,t1,t2);}

C_noret_decl(trf_2598)
static void C_ccall trf_2598(C_word c,C_word *av) C_noret;
static void C_ccall trf_2598(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2598(t0,t1,t2);}

C_noret_decl(trf_2350)
static void C_ccall trf_2350(C_word c,C_word *av) C_noret;
static void C_ccall trf_2350(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2350(t0,t1);}

C_noret_decl(trf_2355)
static void C_ccall trf_2355(C_word c,C_word *av) C_noret;
static void C_ccall trf_2355(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2355(t0,t1,t2);}

C_noret_decl(trf_1556)
static void C_ccall trf_1556(C_word c,C_word *av) C_noret;
static void C_ccall trf_1556(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1556(t0,t1,t2);}

C_noret_decl(trf_4529)
static void C_ccall trf_4529(C_word c,C_word *av) C_noret;
static void C_ccall trf_4529(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4529(t0,t1,t2,t3);}

C_noret_decl(trf_3742)
static void C_ccall trf_3742(C_word c,C_word *av) C_noret;
static void C_ccall trf_3742(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3742(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3460)
static void C_ccall trf_3460(C_word c,C_word *av) C_noret;
static void C_ccall trf_3460(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3460(t0,t1);}

C_noret_decl(trf_2394)
static void C_ccall trf_2394(C_word c,C_word *av) C_noret;
static void C_ccall trf_2394(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2394(t0,t1,t2,t3);}

C_noret_decl(trf_3420)
static void C_ccall trf_3420(C_word c,C_word *av) C_noret;
static void C_ccall trf_3420(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3420(t0,t1,t2);}

C_noret_decl(trf_2975)
static void C_ccall trf_2975(C_word c,C_word *av) C_noret;
static void C_ccall trf_2975(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2975(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4023)
static void C_ccall trf_4023(C_word c,C_word *av) C_noret;
static void C_ccall trf_4023(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4023(t0,t1,t2,t3);}

C_noret_decl(trf_3518)
static void C_ccall trf_3518(C_word c,C_word *av) C_noret;
static void C_ccall trf_3518(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3518(t0,t1,t2,t3);}

C_noret_decl(trf_4229)
static void C_ccall trf_4229(C_word c,C_word *av) C_noret;
static void C_ccall trf_4229(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4229(t0,t1,t2,t3);}

C_noret_decl(trf_4577)
static void C_ccall trf_4577(C_word c,C_word *av) C_noret;
static void C_ccall trf_4577(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4577(t0,t1,t2);}

C_noret_decl(trf_1591)
static void C_ccall trf_1591(C_word c,C_word *av) C_noret;
static void C_ccall trf_1591(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1591(t0,t1,t2);}

C_noret_decl(trf_1651)
static void C_ccall trf_1651(C_word c,C_word *av) C_noret;
static void C_ccall trf_1651(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1651(t0,t1,t2);}

C_noret_decl(trf_1784)
static void C_ccall trf_1784(C_word c,C_word *av) C_noret;
static void C_ccall trf_1784(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1784(t0,t1,t2,t3);}

C_noret_decl(trf_2136)
static void C_ccall trf_2136(C_word c,C_word *av) C_noret;
static void C_ccall trf_2136(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2136(t0,t1,t2);}

C_noret_decl(trf_3002)
static void C_ccall trf_3002(C_word c,C_word *av) C_noret;
static void C_ccall trf_3002(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3002(t0,t1,t2);}

C_noret_decl(trf_1755)
static void C_ccall trf_1755(C_word c,C_word *av) C_noret;
static void C_ccall trf_1755(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1755(t0,t1,t2);}

C_noret_decl(trf_4285)
static void C_ccall trf_4285(C_word c,C_word *av) C_noret;
static void C_ccall trf_4285(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4285(t0,t1,t2,t3);}

C_noret_decl(trf_1719)
static void C_ccall trf_1719(C_word c,C_word *av) C_noret;
static void C_ccall trf_1719(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1719(t0,t1,t2);}

C_noret_decl(trf_4271)
static void C_ccall trf_4271(C_word c,C_word *av) C_noret;
static void C_ccall trf_4271(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4271(t0,t1);}

C_noret_decl(trf_1855)
static void C_ccall trf_1855(C_word c,C_word *av) C_noret;
static void C_ccall trf_1855(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1855(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2247)
static void C_ccall trf_2247(C_word c,C_word *av) C_noret;
static void C_ccall trf_2247(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2247(t0,t1);}

C_noret_decl(trf_1908)
static void C_ccall trf_1908(C_word c,C_word *av) C_noret;
static void C_ccall trf_1908(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1908(t0,t1);}

C_noret_decl(trf_2955)
static void C_ccall trf_2955(C_word c,C_word *av) C_noret;
static void C_ccall trf_2955(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2955(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3228)
static void C_ccall trf_3228(C_word c,C_word *av) C_noret;
static void C_ccall trf_3228(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3228(t0,t1,t2,t3);}

C_noret_decl(trf_2750)
static void C_ccall trf_2750(C_word c,C_word *av) C_noret;
static void C_ccall trf_2750(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2750(t0,t1);}

C_noret_decl(trf_2278)
static void C_ccall trf_2278(C_word c,C_word *av) C_noret;
static void C_ccall trf_2278(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2278(t0,t1,t2);}

C_noret_decl(trf_1916)
static void C_ccall trf_1916(C_word c,C_word *av) C_noret;
static void C_ccall trf_1916(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1916(t0,t1,t2);}

C_noret_decl(trf_1834)
static void C_ccall trf_1834(C_word c,C_word *av) C_noret;
static void C_ccall trf_1834(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1834(t0,t1,t2,t3);}

C_noret_decl(trf_3387)
static void C_ccall trf_3387(C_word c,C_word *av) C_noret;
static void C_ccall trf_3387(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3387(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1970)
static void C_ccall trf_1970(C_word c,C_word *av) C_noret;
static void C_ccall trf_1970(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1970(t0,t1,t2,t3);}

C_noret_decl(trf_4085)
static void C_ccall trf_4085(C_word c,C_word *av) C_noret;
static void C_ccall trf_4085(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_4085(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3806)
static void C_ccall trf_3806(C_word c,C_word *av) C_noret;
static void C_ccall trf_3806(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3806(t0,t1,t2,t3,t4);}

/* k4434 in queue-add! in k1390 */
static void C_fcall f_4436(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_4436,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[2],C_fix(3));
t4=C_fixnum_plus(t3,C_fix(1));
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(3),t4);
t6=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3094 in loop1 in string-intersperse in k1390 */
static void C_ccall f_3096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3096,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3101,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  f_3101(t3,((C_word*)t0)[5],C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* substring=? in k1390 */
static void C_ccall f_2777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,6)))){
C_save_and_reclaim((void*)f_2777,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
if(C_truep(C_i_nullp(t12))){
/* data-structures.scm:386: ##sys#substring=? */
t15=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t15;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t6;
av2[5]=t10;
av2[6]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(7,av2);}}
else{
t15=C_i_cdr(t12);
/* data-structures.scm:386: ##sys#substring=? */
t16=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t16;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t6;
av2[5]=t10;
av2[6]=t14;
((C_proc)(void*)(*((C_word*)t16+1)))(7,av2);}}}

/* k1871 in k1867 in doloop198 in loop in k1824 in chop in k1390 */
static void C_ccall f_1873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1873,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop1 in string-intersperse in k1390 */
static void C_fcall f_3086(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_3086,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep(C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[69];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3096,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_fixnum_difference(t3,((C_word*)t0)[4]);
/* data-structures.scm:446: ##sys#allocate-vector */
t6=*((C_word*)lf[70]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_make_character(32);
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}}
else{
t4=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=C_i_check_string_2(t5,lf[67]);
t7=C_slot(t2,C_fix(1));
t8=C_block_size(t5);
t9=C_fixnum_plus(((C_word*)t0)[4],t3);
t10=C_fixnum_plus(t8,t9);
/* data-structures.scm:461: loop1 */
t12=t1;
t13=t7;
t14=t10;
t1=t12;
t2=t13;
t3=t14;
goto loop;}
else{
/* data-structures.scm:463: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* map-loop362 in conc in k1390 */
static void C_fcall f_2522(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2522,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:301: g368 */
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

/* k2518 in conc in k1390 */
static void C_ccall f_2520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2520,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[52]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* k4665 in k4662 in queue-push-back-list! in k1390 */
static void C_fcall f_4667(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_4667,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t4=C_slot(((C_word*)t0)[2],C_fix(3));
t5=C_i_length(((C_word*)t0)[4]);
t6=C_fixnum_plus(t4,t5);
t7=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_set_i_slot(((C_word*)t0)[2],C_fix(3),t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k4662 in queue-push-back-list! in k1390 */
static void C_ccall f_4664(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4664,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4667,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t3;
f_4667(t5,C_SCHEME_END_OF_LIST);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4695,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
t6=t3;
f_4667(t6,(
  f_4695(t2)
));}}

/* step in sort! in k1390 */
static void C_fcall f_3930(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3930,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3940,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);{
C_word av2[4];
av2[0]=0;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(2);
C_quotient(4,av2);}}
else{
if(C_truep(C_i_nequalp(t2,C_fix(2)))){
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=t3;
t5=C_i_cadr(((C_word*)((C_word*)t0)[4])[1]);
t6=t5;
t7=((C_word*)((C_word*)t0)[4])[1];
t8=((C_word*)((C_word*)t0)[4])[1];
t9=C_u_i_cdr(t8);
t10=C_mutate2(((C_word *)((C_word*)t0)[4])+1,C_u_i_cdr(t9));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3978,a[2]=t7,a[3]=t6,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:691: less? */
t12=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t12;
av2[1]=t11;
av2[2]=t6;
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t12))(4,av2);}}
else{
if(C_truep(C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t4);
t6=C_i_set_cdr(t3,C_SCHEME_END_OF_LIST);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}}

/* string-intersperse in k1390 */
static void C_ccall f_3068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,4)))){
C_save_and_reclaim((void*)f_3068,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[68]:C_i_car(t3));
t6=t5;
t7=C_i_check_list_2(t2,lf[67]);
t8=C_i_check_string_2(t6,lf[67]);
t9=C_block_size(t6);
t10=t9;
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3086,a[2]=t2,a[3]=t6,a[4]=t10,a[5]=t12,a[6]=((C_word)li80),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_3086(t14,t1,t2,C_fix(0));}

/* queue-first in k1390 */
static void C_ccall f_4384(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4384,3,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,lf[104],lf[108]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4394,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_SCHEME_END_OF_LIST,t5);
if(C_truep(t7)){
/* data-structures.scm:822: ##sys#error */
t8=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[108];
av2[3]=lf[109];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_slot(t5,C_fix(0));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k4392 in queue-first in k1390 */
static void C_ccall f_4394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4394,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* queue-length in k1390 */
static void C_ccall f_4362(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4362,3,av);}
t3=C_i_check_structure_2(t2,lf[104],lf[106]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* queue-push-back-list! in k1390 */
static void C_ccall f_4654(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4654,4,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[104],lf[118]);
t5=C_i_check_list_2(t3,lf[118]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4664,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(1));
/* data-structures.scm:898: append */
t8=*((C_word*)lf[88]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t6;
av2[2]=t3;
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k3938 in step in sort! in k1390 */
static void C_ccall f_3940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3940,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3943,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:682: step */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3930(t4,t3,t2);}

/* k3941 in k3938 in step in sort! in k1390 */
static void C_ccall f_3943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3943,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_a_i_minus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3949,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:684: step */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3930(t5,t4,t3);}

/* k3947 in k3941 in k3938 in step in sort! in k1390 */
static void C_ccall f_3949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3949,2,av);}
/* data-structures.scm:685: merge! */
t2=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* queue-empty? in k1390 */
static void C_ccall f_4371(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4371,3,av);}
t3=C_i_check_structure_2(t2,lf[104],lf[107]);
t4=C_slot(t2,C_fix(1));
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_eqp(C_SCHEME_END_OF_LIST,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* traverse in k1390 */
static void C_fcall f_2556(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word t19;
C_word t20;
C_word t21;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_2556,6,t1,t2,t3,t4,t5,t6);}
a=C_alloc(9);
t7=C_i_check_string_2(t2,t6);
t8=C_i_check_string_2(t3,t6);
t9=C_block_size(t3);
t10=C_block_size(t2);
t11=t10;
t12=C_fixnum_difference(t9,t11);
t13=t12;
t14=C_i_check_exact_2(t4,t6);
t15=C_fixnum_greater_or_equal_p(t4,C_fix(0));
t16=(C_truep(t15)?C_fixnum_greater_or_equal_p(t9,t4):C_SCHEME_FALSE);
if(C_truep(t16)){
t17=C_eqp(t11,C_fix(0));
if(C_truep(t17)){
t18=t1;{
C_word av2[2];
av2[0]=t18;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t13,C_fix(0)))){
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2598,a[2]=t13,a[3]=t19,a[4]=t5,a[5]=t11,a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_2598(t21,t1,t4);}
else{
t18=t1;{
C_word av2[2];
av2[0]=t18;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}}}
else{
t17=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* data-structures.scm:323: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[53]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[53]+1);
av2[1]=t1;
av2[2]=t17;
av2[3]=t6;
av2[4]=t4;
av2[5]=t9;
tp(6,av2);}}}

/* string-translate* in k1390 */
static void C_ccall f_3375(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,6)))){
C_save_and_reclaim((void *)f_3375,4,av);}
a=C_alloc(9);
t4=C_i_check_string_2(t2,lf[75]);
t5=C_i_check_list_2(t3,lf[75]);
t6=C_block_size(t2);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3387,a[2]=t7,a[3]=t2,a[4]=t9,a[5]=t3,a[6]=((C_word)li89),tmp=(C_word)a,a+=7,tmp));
/* data-structures.scm:546: collect */
t11=((C_word*)t9)[1];
f_3387(t11,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* k2545 in map-loop362 in conc in k1390 */
static void C_ccall f_2547(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2547,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2522(t6,((C_word*)t0)[5],t5);}

/* sort! in k1390 */
static void C_ccall f_3927(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_3927,4,av);}
a=C_alloc(17);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3930,a[2]=t3,a[3]=t6,a[4]=t4,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
if(C_truep(C_i_vectorp(((C_word*)t4)[1]))){
t8=C_i_vector_length(((C_word*)t4)[1]);
t9=t8;
t10=((C_word*)t4)[1];
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4014,a[2]=t4,a[3]=t10,a[4]=t1,a[5]=t6,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:706: vector->list */
t12=*((C_word*)lf[85]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t4)[1];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t8=C_i_length(((C_word*)t4)[1]);
/* data-structures.scm:712: step */
t9=((C_word*)t6)[1];
f_3930(t9,t1,t8);}}

/* k1949 in loop in k1906 in join in k1390 */
static void C_ccall f_1951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1951,2,av);}
/* data-structures.scm:181: ##sys#append */
t2=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3365 in string-translate in k1390 */
static void C_ccall f_3367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3367,2,av);}
/* data-structures.scm:481: instring */
f_3173(((C_word*)t0)[3],t1);}

/* instring in string-translate in k1390 */
static void C_fcall f_3173(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3173,2,t1,t2);}
a=C_alloc(5);
t3=C_block_size(t2);
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3178,a[2]=t4,a[3]=t2,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_3178 in instring in string-translate in k1390 */
static void C_ccall f_3178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3178,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  f_3184(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* string-translate in k1390 */
static void C_ccall f_3170(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_3170,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+12);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3173,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3208,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_charp(t3))){
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3350,a[2]=t3,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
f_3208(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3367,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* list->string */
t8=*((C_word*)lf[74]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=C_i_check_string_2(t3,lf[71]);
/* data-structures.scm:484: instring */
f_3173(t6,t3);}}}

/* loop in sorted? in k1390 */
static void C_fcall f_3682(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3682,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3706,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=C_i_car(t3);
/* data-structures.scm:610: less? */
t7=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* compress in k1390 */
static void C_ccall f_1961(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1961,4,av);}
a=C_alloc(7);
t4=lf[26];
t5=C_i_check_list_2(t3,lf[25]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1970,a[2]=t7,a[3]=t4,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1970(t9,t1,t2,t3);}

/* queue-push-back! in k1390 */
static void C_ccall f_4614(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4614,4,av);}
a=C_alloc(3);
t4=C_i_check_structure_2(t2,lf[104],lf[117]);
t5=C_slot(t2,C_fix(1));
t6=C_a_i_cons(&a,2,t3,t5);
t7=C_i_setslot(t2,C_fix(1),t6);
t8=C_slot(t2,C_fix(2));
t9=C_eqp(C_SCHEME_END_OF_LIST,t8);
t10=(C_truep(t9)?C_i_setslot(t2,C_fix(2),t6):C_SCHEME_UNDEFINED);
t11=C_slot(t2,C_fix(3));
t12=C_fixnum_plus(t11,C_fix(1));
t13=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_i_set_i_slot(t2,C_fix(3),t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* k3900 in k3879 in merge! in k1390 */
static void C_ccall f_3902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3902,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2845 in substring-ci=? in k1390 */
static void C_fcall f_2847(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_2847,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[63]);
t3=C_i_check_exact_2(((C_word*)t0)[3],lf[63]);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_substring_compare_case_insensitive(((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop */
static void C_fcall f_2086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2086,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2102,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t4))){
t6=C_slot(t4,C_fix(0));
/* data-structures.scm:209: cmp */
t7=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_2102(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_2080 in alist-update! in k1390 */
static void C_ccall f_2080(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2080,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2086,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2086(t7,t1,t3);}

/* loop */
static C_word C_fcall f_3184(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(C_SCHEME_FALSE);}
else{
t2=C_subchar(((C_word*)t0)[3],t1);
t3=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
return(t1);}
else{
t4=C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}}

/* loop */
static void C_fcall f_1438(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1438,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1451,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:48: g86 */
t5=t3;{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* disjoin in k1390 */
static void C_ccall f_1430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_1430,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1432,a[2]=t2,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_1432 in disjoin in k1390 */
static void C_ccall f_1432(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1432,3,av);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1438,a[2]=t4,a[3]=t2,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1438(t6,t1,((C_word*)t0)[2]);}

/* k4565 in list->queue in k1390 */
static void C_ccall f_4567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_4567,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_u_i_length(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_record4(&a,4,lf[104],((C_word*)t0)[2],t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3641 in doloop725 in sorted? in k1390 */
static void C_ccall f_3643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3643,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_nequalp(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t3=((C_word*)((C_word*)t0)[5])[1];
f_3633(t3,((C_word*)t0)[2],t2);}}

/* k1390 */
static void C_ccall f_1392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(188,c,7)))){
C_save_and_reclaim((void *)f_1392,2,av);}
a=C_alloc(188);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! identity ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1394,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[1]+1 /* (set! conjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1397,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[2]+1 /* (set! disjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1430,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[3]+1 /* (set! constantly ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1467,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[4]+1 /* (set! flip ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1488,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[5]+1 /* (set! complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1496,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[6]+1 /* (set! compose ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1508,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[8]+1 /* (set! o ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1544,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[9]+1 /* (set! list-of? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1583,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[10]+1 /* (set! each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1623,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[12]+1 /* (set! any? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1679,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[13]+1 /* (set! atom? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1682,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[14]+1 /* (set! tail? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1685,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[15]+1 /* (set! intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1713,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[16]+1 /* (set! butlast ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1746,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[17]+1 /* (set! flatten ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1778,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[18]+1 /* (set! chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1819,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[22]+1 /* (set! join ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1904,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[25]+1 /* (set! compress ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1961,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[29]+1 /* (set! alist-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2041,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[36]+1 /* (set! alist-update ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2127,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[40]+1 /* (set! alist-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2231,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2((C_word*)lf[42]+1 /* (set! rassoc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2343,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2((C_word*)lf[43]+1 /* (set! reverse-string-append ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2391,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate2((C_word*)lf[45]+1 /* (set! ->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2464,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate2((C_word*)lf[51]+1 /* (set! conc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2509,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2556,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp);
t29=C_mutate2((C_word*)lf[54]+1 /* (set! ##sys#substring-index ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2630,a[2]=t28,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp));
t30=C_mutate2((C_word*)lf[56]+1 /* (set! ##sys#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2639,a[2]=t28,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp));
t31=C_mutate2((C_word*)lf[55]+1 /* (set! substring-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2648,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate2((C_word*)lf[57]+1 /* (set! substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2663,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[58]+1 /* (set! string-compare3 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2678,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2((C_word*)lf[59]+1 /* (set! string-compare3-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2709,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[60]+1 /* (set! ##sys#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2740,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[61]+1 /* (set! substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2777,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[62]+1 /* (set! ##sys#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2837,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[63]+1 /* (set! substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2874,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[64]+1 /* (set! string-split ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2934,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[67]+1 /* (set! string-intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3068,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[71]+1 /* (set! string-translate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3170,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[75]+1 /* (set! string-translate* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3375,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2((C_word*)lf[78]+1 /* (set! string-chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3503,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[79]+1 /* (set! string-chomp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3567,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[81]+1 /* (set! sorted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3606,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2((C_word*)lf[82]+1 /* (set! merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3712,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[83]+1 /* (set! merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3803,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2((C_word*)lf[84]+1 /* (set! sort! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3927,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[86]+1 /* (set! sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4055,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2((C_word*)lf[89]+1 /* (set! topological-sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4082,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate2((C_word*)lf[102]+1 /* (set! binary-search ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4267,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate2((C_word*)lf[103]+1 /* (set! make-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4350,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate2((C_word*)lf[105]+1 /* (set! queue? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4356,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[106]+1 /* (set! queue-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4362,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate2((C_word*)lf[107]+1 /* (set! queue-empty? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4371,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate2((C_word*)lf[108]+1 /* (set! queue-first ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4384,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate2((C_word*)lf[110]+1 /* (set! queue-last ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4405,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate2((C_word*)lf[112]+1 /* (set! queue-add! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4426,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate2((C_word*)lf[113]+1 /* (set! queue-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4469,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate2((C_word*)lf[115]+1 /* (set! queue->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4516,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate2((C_word*)lf[116]+1 /* (set! list->queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4556,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate2((C_word*)lf[117]+1 /* (set! queue-push-back! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4614,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate2((C_word*)lf[118]+1 /* (set! queue-push-back-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4654,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t64=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t64;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t64+1)))(2,av2);}}

/* identity in k1390 */
static void C_ccall f_1394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1394,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* conjoin in k1390 */
static void C_ccall f_1397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_1397,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1399,a[2]=t2,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_1399 in conjoin in k1390 */
static void C_ccall f_1399(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1399,3,av);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1405,a[2]=t4,a[3]=t2,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1405(t6,t1,((C_word*)t0)[2]);}

/* rassoc in k1390 */
static void C_ccall f_2343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_2343,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=C_i_check_list_2(t3,lf[42]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2350,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t7=t4;
t8=t6;
f_2350(t8,C_u_i_car(t7));}
else{
t7=t6;
f_2350(t7,*((C_word*)lf[30]+1));}}

/* k4149 in k4087 in visit in topological-sort in k1390 */
static void C_ccall f_4151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
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
C_save_and_reclaim((void *)f_4151,2,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[90]);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[3];
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t5,t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t10,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li105),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_4157(t12,((C_word*)t0)[8],t1,t8);}

/* ##sys#substring-ci=? in k1390 */
static void C_ccall f_2837(C_word c,C_word *av){
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
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2837,7,av);}
a=C_alloc(7);
t7=C_i_check_string_2(t2,lf[63]);
t8=C_i_check_string_2(t3,lf[63]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2847,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2847(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=C_fixnum_difference(t12,t5);
t14=t9;
f_2847(t14,C_i_fixnum_min(t11,t13));}}

/* k2046 in alist-update! in k1390 */
static void C_fcall f_2048(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2048,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:212: aq */
t3=t1;{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* walk in k4149 in k4087 in visit in topological-sort in k1390 */
static void C_fcall f_4157(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,6)))){
C_save_and_reclaim_args((void *)trf_4157,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4171,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t3);
/* data-structures.scm:751: alist-update! */
t6=*((C_word*)lf[29]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[101];
av2[4]=t5;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4193,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
/* data-structures.scm:755: visit */
t9=((C_word*)((C_word*)t0)[6])[1];
f_4085(t9,t7,((C_word*)t0)[7],t4,C_SCHEME_FALSE,t8,t3);}}

/* alist-update! in k1390 */
static void C_ccall f_2041(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +10,c,4)))){
C_save_and_reclaim((void*)f_2041,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+10);
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
t7=(C_truep(t6)?*((C_word*)lf[30]+1):C_i_car(t5));
t8=t7;
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2048,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_eqp(*((C_word*)lf[31]+1),t8);
if(C_truep(t10)){
t11=t9;
f_2048(t11,*((C_word*)lf[32]+1));}
else{
t11=C_eqp(*((C_word*)lf[30]+1),t8);
if(C_truep(t11)){
t12=t9;
f_2048(t12,*((C_word*)lf[33]+1));}
else{
t12=C_eqp(*((C_word*)lf[34]+1),t8);
t13=t9;
f_2048(t13,(C_truep(t12)?*((C_word*)lf[35]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2080,a[2]=t8,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp)));}}}

/* queue->list in k1390 */
static void C_ccall f_4516(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4516,3,av);}
a=C_alloc(6);
t3=C_i_check_structure_2(t2,lf[104],lf[115]);
t4=C_slot(t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4529,a[2]=t6,a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4529(t8,t1,t4,C_SCHEME_END_OF_LIST);}

/* sorted? in k1390 */
static void C_ccall f_3606(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3606,4,av);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_vectorp(t2))){
t4=t2;
t5=C_block_size(t4);
t6=t5;
if(C_truep(C_fixnum_less_or_equal_p(t6,C_fix(1)))){
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3633,a[2]=t6,a[3]=t8,a[4]=t2,a[5]=t3,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_3633(t10,t1,C_fix(1));}}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3682,a[2]=t8,a[3]=t3,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3682(t10,t1,t4,t6);}}}

/* k4598 in doloop906 in list->queue in k1390 */
static void C_fcall f_4600(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4600,2,t0,t1);}
if(C_truep(t1)){
/* data-structures.scm:872: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[24]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[116];
tp(4,av2);}}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[5])[1];
f_4577(t3,((C_word*)t0)[6],t2);}}

/* loop */
static void C_fcall f_1405(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1405,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1421,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:41: g74 */
t6=t4;{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}}

/* k4136 in k4087 in visit in topological-sort in k1390 */
static void C_ccall f_4138(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_4138,2,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
t4=t3;
t5=C_a_i_cons(&a,2,lf[91],lf[94]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:742: ##sys#get-call-chain */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[100]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[100]+1);
av2[1]=t7;
tp(2,av2);}}

/* doloop725 in sorted? in k1390 */
static void C_fcall f_3633(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_3633,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_nequalp(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3643,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
f_3643(2,av2);}}
else{
t5=C_i_vector_ref(((C_word*)t0)[4],t2);
t6=C_a_i_minus(&a,2,t2,C_fix(1));
t7=C_i_vector_ref(((C_word*)t0)[4],t6);
/* data-structures.scm:604: less? */
t8=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t8;
av2[1]=t4;
av2[2]=t5;
av2[3]=t7;
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}}

/* k2301 in loop */
static void C_ccall f_2303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2303,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:249: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2278(t3,((C_word*)t0)[2],t2);}}

/* k4191 in walk in k4149 in k4087 in visit in topological-sort in k1390 */
static void C_ccall f_4193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4193,2,av);}
/* data-structures.scm:754: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4157(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* queue-remove! in k1390 */
static void C_ccall f_4469(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4469,3,av);}
a=C_alloc(5);
t3=C_i_check_structure_2(t2,lf[104],lf[113]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4479,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(C_SCHEME_END_OF_LIST,t5);
if(C_truep(t7)){
/* data-structures.scm:847: ##sys#error */
t8=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[113];
av2[3]=lf[114];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t8=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_4479(2,av2);}}}

/* loop in traverse in k1390 */
static void C_fcall f_2598(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2598,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greaterp(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2611,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:321: test */
t4=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* list->queue in k1390 */
static void C_ccall f_4556(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4556,3,av);}
a=C_alloc(11);
t3=C_i_check_list_2(t2,lf[116]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4567,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_length(t6);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_record4(&a,4,lf[104],t2,C_SCHEME_END_OF_LIST,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4577,a[2]=t7,a[3]=t2,a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4577(t9,t4,t2);}}

/* k3767 in k3747 in loop in merge in k1390 */
static void C_ccall f_3769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3769,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4169 in walk in k4149 in k4087 in visit in topological-sort in k1390 */
static void C_ccall f_4171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4171,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,t1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1504 */
static void C_ccall f_1506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1506,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_not(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* compose in k1390 */
static void C_ccall f_1508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_1508,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1511,a[2]=t4,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
if(C_truep(C_i_nullp(t2))){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=*((C_word*)lf[7]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t4)[1];
av2[3]=t2;
C_apply(4,av2);}}}

/* k2348 in rassoc in k1390 */
static void C_fcall f_2350(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2350,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2355,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2355(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* loop in k2348 in rassoc in k1390 */
static void C_fcall f_2355(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2355,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_i_check_pair_2(t4,lf[42]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2374,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t4,C_fix(1));
/* data-structures.scm:263: tst */
t8=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
av2[3]=t7;
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1449 in loop */
static void C_ccall f_1451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1451,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:53: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1438(t3,((C_word*)t0)[2],t2);}}

/* loop in o in k1390 */
static void C_fcall f_1556(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1556,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_slot(t2,C_fix(1));
t6=t5;
if(C_truep(C_i_nullp(t6))){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1570,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2049 in k2046 in alist-update! in k1390 */
static void C_ccall f_2051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2051,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_setslot(t1,C_fix(1),((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[2]);
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* constantly in k1390 */
static void C_ccall f_1467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_1467,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t3=t2;
t4=C_u_i_length(t3);
t5=C_eqp(C_fix(1),t4);
if(C_truep(t5)){
t6=C_i_car(t2);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1478,a[2]=t7,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1480,a[2]=t2,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k1531 in a1524 */
static void C_ccall f_1533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1533,2,av);}{
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
C_apply(4,av2);}}

/* f_1478 in constantly in k1390 */
static void C_ccall f_1478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1478,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* merge in k1390 */
static void C_ccall f_3712(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_3712,5,av);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t5=t3;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_i_car(t3);
t9=t3;
t10=C_u_i_cdr(t9);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3742,a[2]=t12,a[3]=t4,a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_3742(t14,t1,t5,t7,t8,t10);}}}

/* loop in queue->list in k1390 */
static void C_fcall f_4529(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4529,4,t0,t1,t2,t3);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t2))){
/* data-structures.scm:859: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_a_i_cons(&a,2,t5,t3);
/* data-structures.scm:860: loop */
t8=t1;
t9=t4;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* f_1480 in constantly in k1390 */
static void C_ccall f_1480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1480,2,av);}{
C_word av2[3];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* o in k1390 */
static void C_ccall f_1544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_1544,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=*((C_word*)lf[0]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1556,a[2]=t4,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1556(t6,t1,t2);}}

/* flip in k1390 */
static void C_ccall f_1488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1488,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1490,a[2]=t2,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2010 in loop in compress in k1390 */
static void C_ccall f_2012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2012,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1524 */
static void C_ccall f_1525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1525,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1533,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k1419 in loop */
static void C_ccall f_1421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1421,2,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* data-structures.scm:46: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1405(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* substring-ci=? in k1390 */
static void C_ccall f_2874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,6)))){
C_save_and_reclaim((void*)f_2874,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_fix(0):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
if(C_truep(C_i_nullp(t12))){
/* data-structures.scm:400: ##sys#substring-ci=? */
t15=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t15;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t6;
av2[5]=t10;
av2[6]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(7,av2);}}
else{
t15=C_i_cdr(t12);
/* data-structures.scm:400: ##sys#substring-ci=? */
t16=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t16;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t6;
av2[5]=t10;
av2[6]=t14;
((C_proc)(void*)(*((C_word*)t16+1)))(7,av2);}}}

/* a2644 in substring-index-ci in k1390 */
static void C_ccall f_2645(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2645,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_substring_compare_case_insensitive(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* substring-index in k1390 */
static void C_ccall f_2648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_2648,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* data-structures.scm:342: ##sys#substring-index */
t5=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=C_i_car(t4);
/* data-structures.scm:342: ##sys#substring-index */
t6=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k2372 in loop in k2348 in rassoc in k1390 */
static void C_ccall f_2374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2374,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:265: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2355(t3,((C_word*)t0)[2],t2);}}

/* f_1570 in loop in o in k1390 */
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1570,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1578,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:87: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1556(t4,t3,((C_word*)t0)[4]);}

/* k1576 */
static void C_ccall f_1578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1578,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:87: g115 */
t3=t1;{
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

/* k3413 in collect in string-translate* in k1390 */
static void C_ccall f_3415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3415,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
/* data-structures.scm:525: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}

/* a2635 in substring-index in k1390 */
static void C_ccall f_2636(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2636,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_substring_compare(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#substring-index in k1390 */
static void C_ccall f_2630(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_2630,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2636,a[2]=t2,a[3]=t3,a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:330: traverse */
f_2556(t1,t2,t3,t4,t5,lf[55]);}

/* k1579 in k1576 */
static void C_ccall f_1581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1581,2,av);}
/* data-structures.scm:87: h */
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

/* list-of? in k1390 */
static void C_ccall f_1583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1583,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1585,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_1585 in list-of? in k1390 */
static void C_ccall f_1585(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1585,3,av);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1591,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1591(t6,t1,t2);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("data_2dstructures_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_data_2dstructures_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(772))){
C_save(t1);
C_rereclaim2(772*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,121);
lf[0]=C_h_intern(&lf[0],8,"identity");
lf[1]=C_h_intern(&lf[1],7,"conjoin");
lf[2]=C_h_intern(&lf[2],7,"disjoin");
lf[3]=C_h_intern(&lf[3],10,"constantly");
lf[4]=C_h_intern(&lf[4],4,"flip");
lf[5]=C_h_intern(&lf[5],10,"complement");
lf[6]=C_h_intern(&lf[6],7,"compose");
lf[7]=C_h_intern(&lf[7],6,"values");
lf[8]=C_h_intern(&lf[8],1,"o");
lf[9]=C_h_intern(&lf[9],8,"list-of\077");
lf[10]=C_h_intern(&lf[10],4,"each");
lf[11]=C_h_intern(&lf[11],19,"\003sysundefined-value");
lf[12]=C_h_intern(&lf[12],4,"any\077");
lf[13]=C_h_intern(&lf[13],5,"atom\077");
lf[14]=C_h_intern(&lf[14],5,"tail\077");
lf[15]=C_h_intern(&lf[15],11,"intersperse");
lf[16]=C_h_intern(&lf[16],7,"butlast");
lf[17]=C_h_intern(&lf[17],7,"flatten");
lf[18]=C_h_intern(&lf[18],4,"chop");
lf[19]=C_h_intern(&lf[19],7,"reverse");
lf[20]=C_h_intern(&lf[20],9,"\003syserror");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid numeric argument");
lf[22]=C_h_intern(&lf[22],4,"join");
lf[23]=C_h_intern(&lf[23],10,"\003sysappend");
lf[24]=C_h_intern(&lf[24],27,"\003syserror-not-a-proper-list");
lf[25]=C_h_intern(&lf[25],8,"compress");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000%bad argument type - not a proper list");
lf[27]=C_h_intern(&lf[27],15,"\003syssignal-hook");
lf[28]=C_h_intern(&lf[28],11,"\000type-error");
lf[29]=C_h_intern(&lf[29],13,"alist-update!");
lf[30]=C_h_intern(&lf[30],4,"eqv\077");
lf[31]=C_h_intern(&lf[31],3,"eq\077");
lf[32]=C_h_intern(&lf[32],4,"assq");
lf[33]=C_h_intern(&lf[33],4,"assv");
lf[34]=C_h_intern(&lf[34],6,"equal\077");
lf[35]=C_h_intern(&lf[35],5,"assoc");
lf[36]=C_h_intern(&lf[36],12,"alist-update");
lf[37]=C_h_intern(&lf[37],5,"error");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\021bad argument type");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\021bad argument type");
lf[40]=C_h_intern(&lf[40],9,"alist-ref");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\021bad argument type");
lf[42]=C_h_intern(&lf[42],6,"rassoc");
lf[43]=C_h_intern(&lf[43],21,"reverse-string-append");
lf[44]=C_h_intern(&lf[44],11,"make-string");
lf[45]=C_h_intern(&lf[45],8,"->string");
lf[46]=C_h_intern(&lf[46],14,"symbol->string");
lf[47]=C_h_intern(&lf[47],18,"\003sysnumber->string");
lf[48]=C_h_intern(&lf[48],17,"get-output-string");
lf[49]=C_h_intern(&lf[49],7,"display");
lf[50]=C_h_intern(&lf[50],18,"open-output-string");
lf[51]=C_h_intern(&lf[51],4,"conc");
lf[52]=C_h_intern(&lf[52],13,"string-append");
lf[53]=C_h_intern(&lf[53],14,"\003syserror-hook");
lf[54]=C_h_intern(&lf[54],19,"\003syssubstring-index");
lf[55]=C_h_intern(&lf[55],15,"substring-index");
lf[56]=C_h_intern(&lf[56],22,"\003syssubstring-index-ci");
lf[57]=C_h_intern(&lf[57],18,"substring-index-ci");
lf[58]=C_h_intern(&lf[58],15,"string-compare3");
lf[59]=C_h_intern(&lf[59],18,"string-compare3-ci");
lf[60]=C_h_intern(&lf[60],15,"\003syssubstring=\077");
lf[61]=C_h_intern(&lf[61],11,"substring=\077");
lf[62]=C_h_intern(&lf[62],18,"\003syssubstring-ci=\077");
lf[63]=C_h_intern(&lf[63],14,"substring-ci=\077");
lf[64]=C_h_intern(&lf[64],12,"string-split");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\003\011\012 ");
lf[66]=C_h_intern(&lf[66],13,"\003syssubstring");
lf[67]=C_h_intern(&lf[67],18,"string-intersperse");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[70]=C_h_intern(&lf[70],19,"\003sysallocate-vector");
lf[71]=C_h_intern(&lf[71],16,"string-translate");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid translation destination");
lf[73]=C_h_intern(&lf[73],15,"\003sysmake-string");
lf[74]=C_h_intern(&lf[74],16,"\003syslist->string");
lf[75]=C_h_intern(&lf[75],17,"string-translate\052");
lf[76]=C_h_intern(&lf[76],21,"\003sysfragments->string");
lf[77]=C_h_intern(&lf[77],16,"\003sysfast-reverse");
lf[78]=C_h_intern(&lf[78],11,"string-chop");
lf[79]=C_h_intern(&lf[79],12,"string-chomp");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[81]=C_h_intern(&lf[81],7,"sorted\077");
lf[82]=C_h_intern(&lf[82],5,"merge");
lf[83]=C_h_intern(&lf[83],6,"merge!");
lf[84]=C_h_intern(&lf[84],5,"sort!");
lf[85]=C_h_intern(&lf[85],12,"vector->list");
lf[86]=C_h_intern(&lf[86],4,"sort");
lf[87]=C_h_intern(&lf[87],12,"list->vector");
lf[88]=C_h_intern(&lf[88],6,"append");
lf[89]=C_h_intern(&lf[89],16,"topological-sort");
lf[90]=C_h_intern(&lf[90],4,"grey");
lf[91]=C_h_intern(&lf[91],3,"exn");
lf[92]=C_h_intern(&lf[92],7,"message");
lf[93]=C_h_intern(&lf[93],9,"arguments");
lf[94]=C_h_intern(&lf[94],10,"call-chain");
lf[95]=C_h_intern(&lf[95],8,"location");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\016cycle detected");
lf[97]=C_h_intern(&lf[97],9,"condition");
lf[98]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003exn\376\003\000\000\002\376\001\000\000\007runtime\376\003\000\000\002\376\001\000\000\005cycle\376\377\016");
lf[99]=C_h_intern(&lf[99],9,"\003sysabort");
lf[100]=C_h_intern(&lf[100],18,"\003sysget-call-chain");
lf[101]=C_h_intern(&lf[101],5,"black");
lf[102]=C_h_intern(&lf[102],13,"binary-search");
lf[103]=C_h_intern(&lf[103],10,"make-queue");
lf[104]=C_h_intern(&lf[104],5,"queue");
lf[105]=C_h_intern(&lf[105],6,"queue\077");
lf[106]=C_h_intern(&lf[106],12,"queue-length");
lf[107]=C_h_intern(&lf[107],12,"queue-empty\077");
lf[108]=C_h_intern(&lf[108],11,"queue-first");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[110]=C_h_intern(&lf[110],10,"queue-last");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[112]=C_h_intern(&lf[112],10,"queue-add!");
lf[113]=C_h_intern(&lf[113],13,"queue-remove!");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[115]=C_h_intern(&lf[115],11,"queue->list");
lf[116]=C_h_intern(&lf[116],11,"list->queue");
lf[117]=C_h_intern(&lf[117],16,"queue-push-back!");
lf[118]=C_h_intern(&lf[118],21,"queue-push-back-list!");
lf[119]=C_h_intern(&lf[119],17,"register-feature!");
lf[120]=C_h_intern(&lf[120],15,"data-structures");
C_register_lf2(lf,121,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1392,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm:33: register-feature! */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[120];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3399 in collect in string-translate* in k1390 */
static void C_ccall f_3401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3401,2,av);}
/* data-structures.scm:523: ##sys#fragments->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[76]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[76]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* loop in merge in k1390 */
static void C_fcall f_3742(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3742,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3749,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:627: less? */
t7=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}

/* ##sys#substring-index-ci in k1390 */
static void C_ccall f_2639(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_2639,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2645,a[2]=t2,a[3]=t3,a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:336: traverse */
f_2556(t1,t2,t3,t4,t5,lf[57]);}

/* k3747 in loop in merge in k1390 */
static void C_ccall f_3749(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_3749,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3769,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* data-structures.scm:630: loop */
t6=((C_word*)((C_word*)t0)[7])[1];
f_3742(t6,t2,((C_word*)t0)[3],((C_word*)t0)[4],t3,t5);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3795,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* data-structures.scm:634: loop */
t6=((C_word*)((C_word*)t0)[7])[1];
f_3742(t6,t2,t3,t5,((C_word*)t0)[6],((C_word*)t0)[2]);}}}

/* substring-index-ci in k1390 */
static void C_ccall f_2663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_2663,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* data-structures.scm:345: ##sys#substring-index-ci */
t5=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=C_i_car(t4);
/* data-structures.scm:345: ##sys#substring-index-ci */
t6=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k1608 in loop */
static void C_ccall f_1610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1610,2,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
/* data-structures.scm:94: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1591(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3458 in loop in collect in string-translate* in k1390 */
static void C_fcall f_3460(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_3460,2,t0,t1);}
a=C_alloc(3);
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* data-structures.scm:541: collect */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3387(t5,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[7],t3,t4);}

/* string-compare3 in k1390 */
static void C_ccall f_2678(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2678,4,av);}
t4=C_i_check_string_2(t2,lf[58]);
t5=C_i_check_string_2(t3,lf[58]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=(C_truep(t12)?t8:t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* doloop930 in k4662 in queue-push-back-list! in k1390 */
static C_word C_fcall f_4695(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_slot(t1,C_fix(1));
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
return(t4);}
else{
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}

/* reverse-string-append in k1390 */
static void C_ccall f_2391(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2391,3,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2394,a[2]=t4,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
/* data-structures.scm:284: rev-string-append */
t6=((C_word*)t4)[1];
f_2394(t6,t1,t2,C_fix(0));}

/* k3704 in loop in sorted? in k1390 */
static void C_ccall f_3706(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3706,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* data-structures.scm:611: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3682(t6,((C_word*)t0)[2],t3,t5);}}

/* rev-string-append in reverse-string-append in k1390 */
static void C_fcall f_2394(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2394,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_string_length(t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2408,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_fixnum_plus(t3,t7);
/* data-structures.scm:276: rev-string-append */
t13=t8;
t14=t10;
t15=t11;
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
/* data-structures.scm:283: make-string */
t4=*((C_word*)lf[44]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* alist-update in k1390 */
static void C_ccall f_2127(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_2127,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+9);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
t6=C_i_nullp(t5);
t7=(C_truep(t6)?*((C_word*)lf[30]+1):C_i_car(t5));
t8=t7;
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2136,a[2]=t2,a[3]=t3,a[4]=t10,a[5]=t8,a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2136(t12,t1,t4);}

/* f_1490 in flip in k1390 */
static void C_ccall f_1490(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1490,4,av);}
/* data-structures.scm:61: proc */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}

/* f_1519 in rec in compose in k1390 */
static void C_ccall f_1519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_1519,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1525,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:72: call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[4];
C_call_with_values(4,av2);}}

/* complement in k1390 */
static void C_ccall f_1496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1496,3,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1498,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_1498 in complement in k1390 */
static void C_ccall f_1498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,3)))){
C_save_and_reclaim((void*)f_1498,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1506,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
C_apply(4,av2);}}

/* rec in compose in k1390 */
static void C_ccall f_1511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_1511,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1519,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2609 in loop in traverse in k1390 */
static void C_ccall f_2611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2611,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:322: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2598(t3,((C_word*)t0)[2],t2);}}

/* loop in collect in string-translate* in k1390 */
static void C_fcall f_3420(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_3420,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:531: collect */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3387(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
t5=C_i_string_length(t4);
t6=C_u_i_cdr(t3);
t7=C_fixnum_plus(((C_word*)t0)[2],t5);
t8=C_fixnum_less_or_equal_p(t7,((C_word*)t0)[7]);
t9=(C_truep(t8)?C_substring_compare(((C_word*)t0)[8],t4,((C_word*)t0)[2],C_fix(0),t5):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_fixnum_plus(((C_word*)t0)[2],t5);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3460,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t11,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],((C_word*)t0)[5]))){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3486,a[2]=((C_word*)t0)[6],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:540: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[66]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[66]+1);
av2[1]=t13;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t13=t12;
f_3460(t13,C_SCHEME_UNDEFINED);}}
else{
t10=t2;
t11=C_u_i_cdr(t10);
/* data-structures.scm:545: loop */
t15=t1;
t16=t11;
t1=t15;
t2=t16;
goto loop;}}}

/* k2100 in loop */
static void C_ccall f_2102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2102,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:211: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2086(t3,((C_word*)t0)[2],t2);}}

/* k1668 in loop */
static void C_ccall f_1670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1670,2,av);}
/* data-structures.scm:109: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1651(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* any? in k1390 */
static void C_ccall f_1679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1679,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in string-split in k1390 */
static void C_fcall f_2975(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_2975,5,t0,t1,t2,t3,t4);}
a=C_alloc(15);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[4]);
if(C_truep(t7)){
/* data-structures.scm:422: add */
t8=((C_word*)t0)[5];
f_2955(t8,t5,t4,t2,t3);}
else{
t8=((C_word*)((C_word*)t0)[3])[1];
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=(C_truep(t8)?t8:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t5=C_subchar(((C_word*)t0)[6],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3002,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[9],a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t7,a[12]=((C_word)li76),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_3002(t9,t1,C_fix(0));}}

/* k2968 in add in string-split in k1390 */
static void C_ccall f_2970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2970,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4019 in k4012 in sort! in k1390 */
static void C_ccall f_4021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4021,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4023,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4023(t5,((C_word*)t0)[3],t1,C_fix(0));}

/* doloop796 in k4019 in k4012 in sort! in k1390 */
static void C_fcall f_4023(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_4023,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_vector_set(((C_word*)t0)[2],t3,t4);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_a_i_plus(&a,2,t3,C_fix(1));
t10=t1;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* loop in string-chop in k1390 */
static void C_fcall f_3518(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3518,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3538,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(t3,t2);
/* data-structures.scm:557: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[66]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[66]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3549,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_fixnum_plus(t3,((C_word*)t0)[2]);
/* data-structures.scm:558: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[66]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[66]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}}}

/* k4248 in loop in topological-sort in k1390 */
static void C_ccall f_4250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4250,2,av);}
/* data-structures.scm:764: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4229(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2197 in k2175 in loop in alist-update in k1390 */
static void C_ccall f_2199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2199,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* each in k1390 */
static void C_ccall f_1623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_1623,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1631,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(1));
t4=C_i_nullp(t3);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(C_truep(t4)?C_slot(t2,C_fix(0)):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1645,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* string-chop in k1390 */
static void C_ccall f_3503(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3503,4,av);}
a=C_alloc(8);
t4=C_i_check_string_2(t2,lf[78]);
t5=C_i_check_exact_2(t3,lf[78]);
t6=C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3518,a[2]=t3,a[3]=t2,a[4]=t8,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3518(t10,t1,t6,C_fix(0));}

/* loop in topological-sort in k1390 */
static void C_fcall f_4229(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,6)))){
C_save_and_reclaim_args((void *)trf_4229,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_cdr(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4250,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_i_caar(t2);
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_cdr(t9);
/* data-structures.scm:765: visit */
t11=((C_word*)((C_word*)t0)[3])[1];
f_4085(t11,t6,t2,t7,t10,C_SCHEME_END_OF_LIST,t3);}}

/* f_1631 in each in k1390 */
static void C_ccall f_1631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1631,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2175 in loop in alist-update in k1390 */
static void C_ccall f_2177(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2177,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)t0)[6],C_fix(0));
t3=C_slot(((C_word*)t0)[6],C_fix(1));
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2199,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:233: loop */
t8=((C_word*)((C_word*)t0)[7])[1];
f_2136(t8,t6,t7);}}

/* f_1645 in each in k1390 */
static void C_ccall f_1645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_1645,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1651,a[2]=t2,a[3]=t4,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1651(t6,t1,((C_word*)t0)[2]);}

/* k2983 in loop in string-split in k1390 */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2985,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(t2)?t2:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop906 in list->queue in k1390 */
static void C_fcall f_4577(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4577,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_slot(t2,C_fix(1));
t4=C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4587,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_blockp(t2);
t7=C_i_not(t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4600,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_4600(t9,t7);}
else{
t9=C_pairp(t2);
t10=t8;
f_4600(t10,C_i_not(t9));}}}

/* string-chomp in k1390 */
static void C_ccall f_3567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_3567,c,av);}
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[80]:C_i_car(t3));
t6=C_i_check_string_2(t2,lf[79]);
t7=C_i_check_string_2(t5,lf[79]);
t8=C_block_size(t2);
t9=C_block_size(t5);
t10=C_fixnum_difference(t8,t9);
t11=C_fixnum_greater_or_equal_p(t8,t9);
t12=(C_truep(t11)?C_substring_compare(t2,t5,t10,C_fix(0),t9):C_SCHEME_FALSE);
if(C_truep(t12)){
/* data-structures.scm:571: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[66]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[66]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t10;
tp(5,av2);}}
else{
t13=t2;
t14=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}

/* loop */
static void C_fcall f_1591(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1591,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_not_pair_p(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1610,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* data-structures.scm:94: pred */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}}

/* loop */
static void C_fcall f_1651(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1651,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
t5=t4;
if(C_truep(C_i_nullp(t5))){{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
C_apply(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);{
C_word av2[4];
av2[0]=0;
av2[1]=t6;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
C_apply(4,av2);}}}

/* k4585 in doloop906 in list->queue in k1390 */
static void C_ccall f_4587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4587,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4577(t3,((C_word*)t0)[4],t2);}

/* k2406 in rev-string-append in reverse-string-append in k1390 */
static void C_ccall f_2408(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2408,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_i_string_length(t2);
t4=C_fixnum_difference(t3,((C_word*)t0)[2]);
t5=C_fixnum_difference(t4,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2417,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=(
  f_2417(t6,C_fix(0),t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* loop in flatten in k1390 */
static void C_fcall f_1784(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1784,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=C_slot(t2,C_fix(1));
if(C_truep(C_i_listp(t5))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1810,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:151: loop */
t9=t7;
t10=t6;
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1817,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:152: loop */
t9=t7;
t10=t6;
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* loop in alist-update in k1390 */
static void C_fcall f_2136(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2136,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list1(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t6=C_slot(t4,C_fix(0));
/* data-structures.scm:229: cmp */
t7=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
/* data-structures.scm:228: error */
t5=*((C_word*)lf[37]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[36];
av2[3]=lf[38];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
/* data-structures.scm:224: error */
t3=*((C_word*)lf[37]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[36];
av2[3]=lf[39];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* k3536 in loop in string-chop in k1390 */
static void C_ccall f_3538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3538,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list1(&a,1,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4012 in sort! in k1390 */
static void C_ccall f_4014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4014,2,av);}
a=C_alloc(4);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4021,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:707: step */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3930(t4,t3,((C_word*)t0)[6]);}

/* scan in loop in string-split in k1390 */
static void C_fcall f_3002(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_3002,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm:427: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2975(t4,t1,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t3=C_subchar(((C_word*)t0)[7],t2);
t4=C_eqp(((C_word*)t0)[8],t3);
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t6=t5;
t7=C_fixnum_greaterp(((C_word*)t0)[3],((C_word*)t0)[6]);
t8=(C_truep(t7)?t7:((C_word*)t0)[9]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3041,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:431: add */
t10=((C_word*)t0)[10];
f_2955(t10,t9,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
/* data-structures.scm:432: loop */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2975(t9,t1,t6,((C_word*)t0)[5],t6);}}
else{
t5=C_fixnum_plus(t2,C_fix(1));
/* data-structures.scm:433: scan */
t11=t1;
t12=t5;
t1=t11;
t2=t12;
goto loop;}}}

/* butlast in k1390 */
static void C_ccall f_1746(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1746,3,av);}
a=C_alloc(6);
t3=C_i_check_pair_2(t2,lf[16]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1755,a[2]=t5,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1755(t7,t1,t2);}

/* k1742 in loop in intersperse in k1390 */
static void C_ccall f_1744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_1744,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3793 in k3747 in loop in merge in k1390 */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3795,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in butlast in k1390 */
static void C_fcall f_1755(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1755,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(1));
t4=(C_truep(C_blockp(t3))?C_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1776,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:141: loop */
t9=t7;
t10=t3;
t1=t9;
t2=t10;
goto loop;}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* loop in k4269 in binary-search in k1390 */
static void C_fcall f_4285(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4285,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_fixnum_difference(t3,t2);
t5=C_fixnum_shift_right(t4,C_fix(1));
t6=C_fixnum_plus(t2,t5);
t7=t6;
t8=C_slot(((C_word*)((C_word*)t0)[2])[1],t7);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4295,a[2]=t1,a[3]=t7,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:785: proc */
t10=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t8;
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}

/* ->string in k1390 */
static void C_ccall f_2464(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2464,3,av);}
a=C_alloc(4);
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* data-structures.scm:291: symbol->string */
t3=*((C_word*)lf[46]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_charp(t2))){
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_numberp(t2))){
/* data-structures.scm:293: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[47]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[47]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2501,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:295: open-output-string */
t4=*((C_word*)lf[50]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}}

/* k3551 in k3547 in loop in string-chop in k1390 */
static void C_ccall f_3553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3553,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4293 in loop in k4269 in binary-search in k1390 */
static void C_ccall f_4295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4295,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t3=C_eqp(((C_word*)t0)[4],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* data-structures.scm:787: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4285(t4,((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[3]);}}
else{
t3=C_eqp(((C_word*)t0)[6],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* data-structures.scm:788: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4285(t4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}}}}

/* binary-search in k1390 */
static void C_ccall f_4267(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4267,4,av);}
a=C_alloc(11);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4271,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4345,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:777: list->vector */
t7=*((C_word*)lf[87]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t4)[1];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t5;
f_4271(t6,C_i_check_vector_2(((C_word*)t4)[1],lf[102]));}}

/* k3547 in loop in string-chop in k1390 */
static void C_ccall f_3549(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3549,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3553,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_difference(((C_word*)t0)[3],((C_word*)t0)[4]);
t5=C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* data-structures.scm:558: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3518(t6,t3,t4,t5);}

/* atom? in k1390 */
static void C_ccall f_1682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1682,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_not_pair_p(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in intersperse in k1390 */
static void C_fcall f_1719(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1719,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_cdr(t2);
if(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1744,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:134: loop */
t8=t6;
t9=t3;
t1=t8;
t2=t9;
goto loop;}}}

/* tail? in k1390 */
static void C_ccall f_1685(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1685,4,av);}
a=C_alloc(4);
t4=C_i_check_list_2(t3,lf[14]);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1697,a[2]=t2,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=(
  f_1697(t6,t3)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4269 in binary-search in k1390 */
static void C_fcall f_4271(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_4271,2,t0,t1);}
a=C_alloc(8);
t2=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4285,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4285(t6,((C_word*)t0)[4],C_fix(0),t2);}
else{
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* intersperse in k1390 */
static void C_ccall f_1713(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1713,4,av);}
a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1719,a[2]=t3,a[3]=t5,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1719(t7,t1,t2);}

/* k3484 in loop in collect in string-translate* in k1390 */
static void C_ccall f_3486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3486,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_3460(t4,t3);}

/* loop in tail? in k1390 */
static C_word C_fcall f_1697(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_eqp(t1,C_SCHEME_END_OF_LIST))){
return(C_SCHEME_FALSE);}
else{
if(C_truep(C_eqp(((C_word*)t0)[2],t1))){
return(C_SCHEME_TRUE);}
else{
t2=C_slot(t1,C_fix(1));
t4=t2;
t1=t4;
goto loop;}}}

/* loop in k2406 in rev-string-append in reverse-string-append in k1390 */
static C_word C_fcall f_2417(C_word t0,C_word t1,C_word t2){
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
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[2]))){
t3=C_i_string_ref(((C_word*)t0)[3],t1);
t4=C_i_string_set(((C_word*)t0)[4],t2,t3);
t5=C_fixnum_plus(t1,C_fix(1));
t6=C_fixnum_plus(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}
else{
return(((C_word*)t0)[4]);}}

/* doloop198 in loop in k1824 in chop in k1390 */
static void C_fcall f_1855(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_1855,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1869,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:167: reverse */
t7=*((C_word*)lf[19]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=C_slot(t3,C_fix(0));
t7=C_a_i_cons(&a,2,t6,t2);
t8=C_slot(t3,C_fix(1));
t9=C_fixnum_difference(t4,C_fix(1));
t11=t1;
t12=t7;
t13=t8;
t14=t9;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}

/* k2245 in alist-ref in k1390 */
static void C_fcall f_2247(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2247,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:251: aq */
t3=t1;{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3245 in loop in k3221 in k3209 in k3206 in string-translate in k1390 */
static void C_ccall f_3247(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3247,2,av);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_charp(((C_word*)t0)[2]))){
t2=C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:510: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3228(t5,((C_word*)t0)[7],t3,t4);}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[8]))){
/* data-structures.scm:512: ##sys#error */
t2=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
av2[2]=lf[71];
av2[3]=lf[72];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_subchar(((C_word*)t0)[2],t1);
t3=C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:515: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3228(t6,((C_word*)t0)[7],t4,t5);}}}
else{
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* data-structures.scm:507: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3228(t3,((C_word*)t0)[7],t2,((C_word*)t0)[4]);}}
else{
t2=C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[9]);
t3=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm:506: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3228(t5,((C_word*)t0)[7],t3,t4);}}

/* join in k1390 */
static void C_ccall f_1904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_1904,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1908,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_1908(t6,C_u_i_car(t5));}
else{
t5=t4;
f_1908(t5,C_SCHEME_END_OF_LIST);}}

/* k1906 in join in k1390 */
static void C_fcall f_1908(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1908,2,t0,t1);}
a=C_alloc(7);
t2=t1;
t3=C_i_check_list_2(t2,lf[22]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1916,a[2]=t2,a[3]=t5,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1916(t7,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* add in string-split in k1390 */
static void C_fcall f_2955(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_2955,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:415: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[66]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[66]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* alist-ref in k1390 */
static void C_ccall f_2231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +10,c,4)))){
C_save_and_reclaim((void*)f_2231,c,av);}
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?*((C_word*)lf[30]+1):C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2247,a[2]=t1,a[3]=t12,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t16=C_eqp(*((C_word*)lf[31]+1),t7);
if(C_truep(t16)){
t17=t15;
f_2247(t17,*((C_word*)lf[32]+1));}
else{
t17=C_eqp(*((C_word*)lf[30]+1),t7);
if(C_truep(t17)){
t18=t15;
f_2247(t18,*((C_word*)lf[33]+1));}
else{
t18=C_eqp(*((C_word*)lf[34]+1),t7);
t19=t15;
f_2247(t19,(C_truep(t18)?*((C_word*)lf[35]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2272,a[2]=t7,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp)));}}}

/* loop in k3221 in k3209 in k3206 in string-translate in k1390 */
static void C_fcall f_3228(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_3228,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
if(C_truep(C_fixnum_lessp(t3,t2))){
/* data-structures.scm:500: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[66]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[66]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_subchar(((C_word*)t0)[4],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3247,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:503: from */
t6=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* string-split in k1390 */
static void C_ccall f_2934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +20,c,5)))){
C_save_and_reclaim((void*)f_2934,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+20);
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
t4=C_i_check_string_2(t2,lf[64]);
t5=C_i_nullp(t3);
t6=(C_truep(t5)?lf[65]:C_i_car(t3));
t7=t6;
t8=t3;
t9=C_u_i_length(t8);
t10=C_eqp(t9,C_fix(2));
t11=(C_truep(t10)?C_i_cadr(t3):C_SCHEME_FALSE);
t12=t11;
t13=C_block_size(t2);
t14=t13;
t15=C_i_check_string_2(t7,lf[64]);
t16=C_block_size(t7);
t17=t16;
t18=C_SCHEME_FALSE;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2955,a[2]=t19,a[3]=t2,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2975,a[2]=t14,a[3]=t19,a[4]=t12,a[5]=t20,a[6]=t2,a[7]=t17,a[8]=t22,a[9]=t7,a[10]=((C_word)li77),tmp=(C_word)a,a+=11,tmp));
t24=((C_word*)t22)[1];
f_2975(t24,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* k3221 in k3209 in k3206 in string-translate in k1390 */
static void C_ccall f_3223(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3223,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3228,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word)li85),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_3228(t6,((C_word*)t0)[7],C_fix(0),C_fix(0));}

/* k2248 in k2245 in alist-ref in k1390 */
static void C_ccall f_2250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2250,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(C_truep(t1)?C_slot(t1,C_fix(1)):((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* sort in k1390 */
static void C_ccall f_4055(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4055,4,av);}
a=C_alloc(7);
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4069,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4073,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:723: vector->list */
t6=*((C_word*)lf[85]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4080,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:724: append */
t5=*((C_word*)lf[88]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2748 in substring=? in k1390 */
static void C_fcall f_2750(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_2750,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[61]);
t3=C_i_check_exact_2(((C_word*)t0)[3],lf[61]);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_substring_compare(((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chop in k1390 */
static void C_ccall f_1819(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1819,4,av);}
a=C_alloc(5);
t4=C_i_check_exact_2(t3,lf[18]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1826,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
/* data-structures.scm:157: ##sys#error */
t6=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[18];
av2[3]=lf[21];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_1826(2,av2);}}}

/* k1815 in loop in flatten in k1390 */
static void C_ccall f_1817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1817,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1808 in loop in flatten in k1390 */
static void C_ccall f_1810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1810,2,av);}
/* data-structures.scm:151: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1784(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3209 in k3206 in string-translate in k1390 */
static void C_ccall f_3211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3211,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_i_stringp(t2);
t4=(C_truep(t3)?C_block_size(t2):C_SCHEME_FALSE);
t5=t4;
t6=C_i_check_string_2(((C_word*)t0)[2],lf[71]);
t7=C_block_size(((C_word*)t0)[2]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3223,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[73]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t9;
av2[2]=t8;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k3206 in string-translate in k1390 */
static void C_ccall f_3208(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3208,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3211,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=C_slot(((C_word*)t0)[4],C_fix(0));
if(C_truep(C_charp(t4))){
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
f_3211(2,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* list->string */
t5=*((C_word*)lf[74]+1);{
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
t5=C_i_check_string_2(t4,lf[71]);
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t4;
f_3211(2,av2);}}}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3211(2,av2);}}}

/* k4067 in sort in k1390 */
static void C_ccall f_4069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4069,2,av);}
/* data-structures.scm:723: list->vector */
t2=*((C_word*)lf[87]+1);{
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

/* ##sys#substring=? in k1390 */
static void C_ccall f_2740(C_word c,C_word *av){
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
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2740,7,av);}
a=C_alloc(7);
t7=C_i_check_string_2(t2,lf[61]);
t8=C_i_check_string_2(t3,lf[61]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2750,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2750(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=C_fixnum_difference(t12,t5);
t14=t9;
f_2750(t14,C_i_fixnum_min(t11,t13));}}

/* k1824 in chop in k1390 */
static void C_ccall f_1826(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1826,2,av);}
a=C_alloc(7);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1834,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1834(t6,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* loop2 in k3094 in loop1 in string-intersperse in k1390 */
static C_word C_fcall f_3101(C_word t0,C_word t1,C_word t2){
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
C_stack_overflow_check;
loop:{}
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_block_size(t3);
t6=C_substring_copy(t3,((C_word*)t0)[2],C_fix(0),t5,t2);
t7=C_fixnum_plus(t2,t5);
if(C_truep(C_eqp(t4,C_SCHEME_END_OF_LIST))){
return(((C_word*)t0)[2]);}
else{
t8=C_substring_copy(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4],t7);
t9=C_fixnum_plus(t7,((C_word*)t0)[4]);
t11=t4;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* f_2272 in alist-ref in k1390 */
static void C_ccall f_2272(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2272,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2278,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2278(t7,t1,t3);}

/* k4477 in queue-remove! in k1390 */
static void C_ccall f_4479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4479,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=C_eqp(C_SCHEME_END_OF_LIST,t2);
t5=(C_truep(t4)?C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST):C_SCHEME_UNDEFINED);
t6=C_slot(((C_word*)t0)[3],C_fix(3));
t7=C_fixnum_difference(t6,C_fix(1));
t8=C_i_set_i_slot(((C_word*)t0)[3],C_fix(3),t7);
t9=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* loop */
static void C_fcall f_2278(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2278,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_i_check_pair_2(t4,lf[40]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2303,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t4,C_fix(0));
/* data-structures.scm:247: cmp */
t8=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
av2[3]=t7;
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}
else{
/* data-structures.scm:250: error */
t3=*((C_word*)lf[37]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[40];
av2[3]=lf[41];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* loop in k1906 in join in k1390 */
static void C_fcall f_1916(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1916,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t3;
t5=C_slot(t2,C_fix(1));
if(C_truep(C_i_nullp(t5))){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1951,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:181: loop */
t8=t6;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}
else{
/* data-structures.scm:175: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}}}

/* loop in k1824 in chop in k1390 */
static void C_fcall f_1834(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1834,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list1(&a,1,t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1855,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word)li38),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1855(t7,t1,C_SCHEME_END_OF_LIST,t2,((C_word*)t0)[2]);}}}

/* k3039 in scan in loop in string-split in k1390 */
static void C_ccall f_3041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3041,2,av);}
/* data-structures.scm:431: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2975(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[4]);}

/* k3882 in k3879 in merge! in k1390 */
static void C_ccall f_3884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3884,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3879 in merge! in k1390 */
static void C_ccall f_3881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3881,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[4];
t7=C_i_setslot(t5,C_fix(1),t6);
t8=((C_word*)t0)[2];
t9=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* data-structures.scm:662: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3806(t7,t2,((C_word*)t0)[2],((C_word*)t0)[4],t6);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3902,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[2];
t7=C_i_setslot(t5,C_fix(1),t6);
t8=((C_word*)t0)[4];
t9=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* data-structures.scm:667: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3806(t7,t2,((C_word*)t0)[4],t6,((C_word*)t0)[2]);}}}

/* k1774 in loop in butlast in k1390 */
static void C_ccall f_1776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1776,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* collect in string-translate* in k1390 */
static void C_fcall f_3387(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_3387,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(15);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3401,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3415,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:527: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[66]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[66]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=t2;
tp(5,av2);}}
else{
t8=((C_word*)t6)[1];
/* data-structures.scm:525: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3420,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t6,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=t8,a[10]=((C_word)li88),tmp=(C_word)a,a+=11,tmp));
t10=((C_word*)t8)[1];
f_3420(t10,t1,((C_word*)t0)[5]);}}

/* flatten in k1390 */
static void C_ccall f_1778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,4)))){
C_save_and_reclaim((void*)f_1778,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1784,a[2]=t4,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1784(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in compress in k1390 */
static void C_fcall f_1970(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_1970,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_slot(t2,C_fix(0)))){
t4=C_slot(t3,C_fix(0));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2012,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t2,C_fix(1));
t8=C_slot(t3,C_fix(1));
/* data-structures.scm:194: loop */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t4=C_slot(t2,C_fix(1));
t5=C_slot(t3,C_fix(1));
/* data-structures.scm:195: loop */
t10=t1;
t11=t4;
t12=t5;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}
else{
/* data-structures.scm:192: ##sys#signal-hook */
t4=*((C_word*)lf[27]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[28];
av2[3]=lf[25];
av2[4]=((C_word*)t0)[3];
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}
else{
/* data-structures.scm:190: ##sys#signal-hook */
t4=*((C_word*)lf[27]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[28];
av2[3]=lf[25];
av2[4]=((C_word*)t0)[3];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}}

/* k4071 in sort in k1390 */
static void C_ccall f_4073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4073,2,av);}
/* data-structures.scm:723: sort! */
t2=*((C_word*)lf[84]+1);{
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

/* string-compare3-ci in k1390 */
static void C_ccall f_2709(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2709,4,av);}
t4=C_i_check_string_2(t2,lf[59]);
t5=C_i_check_string_2(t3,lf[59]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare_case_insensitive(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=(C_truep(t12)?t8:t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* k4343 in binary-search in k1390 */
static void C_ccall f_4345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4345,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4271(t3,t2);}

/* k4078 in sort in k1390 */
static void C_ccall f_4080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4080,2,av);}
/* data-structures.scm:724: sort! */
t2=*((C_word*)lf[84]+1);{
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

/* visit in topological-sort in k1390 */
static void C_fcall f_4085(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_4085,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(10);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4089,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t6,a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t8=C_i_car(t6);
/* data-structures.scm:734: alist-ref */
t9=*((C_word*)lf[40]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t7;
av2[2]=t3;
av2[3]=t8;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* topological-sort in k1390 */
static void C_ccall f_4082(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,7)))){
C_save_and_reclaim((void *)f_4082,4,av);}
a=C_alloc(17);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4085,a[2]=t3,a[3]=t5,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t7=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4229,a[2]=t9,a[3]=t5,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4229(t11,t1,t2,t7);}

/* queue? in k1390 */
static void C_ccall f_4356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4356,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[104]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* make-queue in k1390 */
static void C_ccall f_4350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_4350,2,av);}
a=C_alloc(5);
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_record4(&a,4,lf[104],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* queue-last in k1390 */
static void C_ccall f_4405(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4405,3,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,lf[104],lf[110]);
t4=C_slot(t2,C_fix(2));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4415,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_SCHEME_END_OF_LIST,t5);
if(C_truep(t7)){
/* data-structures.scm:830: ##sys#error */
t8=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[110];
av2[3]=lf[111];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_slot(t5,C_fix(0));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k4087 in visit in topological-sort in k1390 */
static void C_ccall f_4089(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_4089,2,av);}
a=C_alloc(12);
t2=C_eqp(t1,lf[90]);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,lf[91],lf[92]);
t4=t3;
t5=C_a_i_cons(&a,2,lf[91],lf[93]);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4138,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t6,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:741: reverse */
t8=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=C_eqp(t1,lf[101]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=((C_word*)t0)[6];
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4151,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t4;
f_4151(2,av2);}}
else{
/* data-structures.scm:747: alist-ref */
t6=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[9];
av2[4]=((C_word*)t0)[7];
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}}}}

/* f_3350 in string-translate in k1390 */
static void C_ccall f_3350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3350,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_eqp(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4413 in queue-last in k1390 */
static void C_ccall f_4415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4415,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4124 in k4136 in k4087 in visit in topological-sort in k1390 */
static void C_ccall f_4126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_4126,2,av);}
a=C_alloc(31);
t2=C_a_i_cons(&a,2,lf[91],lf[95]);
t3=C_a_i_list(&a,8,((C_word*)t0)[2],lf[96],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,lf[89]);
t4=C_a_i_record3(&a,3,lf[97],lf[98],t3);
/* data-structures.scm:736: ##sys#abort */
t5=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[6];
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2502 in k2499 in ->string in k1390 */
static void C_ccall f_2504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2504,2,av);}
/* data-structures.scm:297: get-output-string */
t2=*((C_word*)lf[48]+1);{
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

/* conc in k1390 */
static void C_ccall f_2509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +17,c,3)))){
C_save_and_reclaim((void*)f_2509,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+17);
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
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[45]+1);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2520,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2522,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li59),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2522(t12,t8,t2);}

/* k2499 in ->string in k1390 */
static void C_ccall f_2501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2501,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2504,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:296: display */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3811 in loop in merge! in k1390 */
static void C_ccall f_3813(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3813,2,av);}
if(C_truep(t1)){
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
t7=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_setslot(t5,C_fix(1),t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* data-structures.scm:649: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3806(t7,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[4],t6);}}
else{
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[4]);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_setslot(t5,C_fix(1),t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* data-structures.scm:655: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3806(t7,((C_word*)t0)[5],((C_word*)t0)[4],t6,((C_word*)t0)[3]);}}}

/* merge! in k1390 */
static void C_ccall f_3803(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_3803,5,av);}
a=C_alloc(13);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3806,a[2]=t6,a[3]=t4,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_nullp(t2))){
t8=t3;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3881,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t9=C_i_car(t3);
t10=C_i_car(t2);
/* data-structures.scm:659: less? */
t11=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
((C_proc)C_fast_retrieve_proc(t11))(4,av2);}}}}

/* queue-add! in k1390 */
static void C_ccall f_4426(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4426,4,av);}
a=C_alloc(8);
t4=C_i_check_structure_2(t2,lf[104],lf[112]);
t5=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4436,a[2]=t2,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_slot(t2,C_fix(1));
t9=C_eqp(C_SCHEME_END_OF_LIST,t8);
if(C_truep(t9)){
t10=t7;
f_4436(t10,C_i_setslot(t2,C_fix(1),t6));}
else{
t10=C_slot(t2,C_fix(2));
t11=t7;
f_4436(t11,C_i_setslot(t10,C_fix(1),t6));}}

/* k3976 in step in sort! in k1390 */
static void C_ccall f_3978(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3978,2,av);}
if(C_truep(t1)){
t2=C_i_setslot(((C_word*)t0)[2],C_fix(0),((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_i_set_car(t3,((C_word*)t0)[4]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_i_set_cdr(t5,C_SCHEME_END_OF_LIST);
t7=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in merge! in k1390 */
static void C_fcall f_3806(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3806,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3813,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t4);
t7=C_i_car(t3);
/* data-structures.scm:644: less? */
t8=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}

/* k1867 in doloop198 in loop in k1824 in chop in k1390 */
static void C_ccall f_1869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1869,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1873,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_difference(((C_word*)t0)[3],((C_word*)t0)[4]);
/* data-structures.scm:167: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1834(t5,t3,((C_word*)t0)[6],t4);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[218] = {
{"f_4436:data_2dstructures_2escm",(void*)f_4436},
{"f_3096:data_2dstructures_2escm",(void*)f_3096},
{"f_2777:data_2dstructures_2escm",(void*)f_2777},
{"f_1873:data_2dstructures_2escm",(void*)f_1873},
{"f_3086:data_2dstructures_2escm",(void*)f_3086},
{"f_2522:data_2dstructures_2escm",(void*)f_2522},
{"f_2520:data_2dstructures_2escm",(void*)f_2520},
{"f_4667:data_2dstructures_2escm",(void*)f_4667},
{"f_4664:data_2dstructures_2escm",(void*)f_4664},
{"f_3930:data_2dstructures_2escm",(void*)f_3930},
{"f_3068:data_2dstructures_2escm",(void*)f_3068},
{"f_4384:data_2dstructures_2escm",(void*)f_4384},
{"f_4394:data_2dstructures_2escm",(void*)f_4394},
{"f_4362:data_2dstructures_2escm",(void*)f_4362},
{"f_4654:data_2dstructures_2escm",(void*)f_4654},
{"f_3940:data_2dstructures_2escm",(void*)f_3940},
{"f_3943:data_2dstructures_2escm",(void*)f_3943},
{"f_3949:data_2dstructures_2escm",(void*)f_3949},
{"f_4371:data_2dstructures_2escm",(void*)f_4371},
{"f_2556:data_2dstructures_2escm",(void*)f_2556},
{"f_3375:data_2dstructures_2escm",(void*)f_3375},
{"f_2547:data_2dstructures_2escm",(void*)f_2547},
{"f_3927:data_2dstructures_2escm",(void*)f_3927},
{"f_1951:data_2dstructures_2escm",(void*)f_1951},
{"f_3367:data_2dstructures_2escm",(void*)f_3367},
{"f_3173:data_2dstructures_2escm",(void*)f_3173},
{"f_3178:data_2dstructures_2escm",(void*)f_3178},
{"f_3170:data_2dstructures_2escm",(void*)f_3170},
{"f_3682:data_2dstructures_2escm",(void*)f_3682},
{"f_1961:data_2dstructures_2escm",(void*)f_1961},
{"f_4614:data_2dstructures_2escm",(void*)f_4614},
{"f_3902:data_2dstructures_2escm",(void*)f_3902},
{"f_2847:data_2dstructures_2escm",(void*)f_2847},
{"f_2086:data_2dstructures_2escm",(void*)f_2086},
{"f_2080:data_2dstructures_2escm",(void*)f_2080},
{"f_3184:data_2dstructures_2escm",(void*)f_3184},
{"f_1438:data_2dstructures_2escm",(void*)f_1438},
{"f_1430:data_2dstructures_2escm",(void*)f_1430},
{"f_1432:data_2dstructures_2escm",(void*)f_1432},
{"f_4567:data_2dstructures_2escm",(void*)f_4567},
{"f_3643:data_2dstructures_2escm",(void*)f_3643},
{"f_1392:data_2dstructures_2escm",(void*)f_1392},
{"f_1394:data_2dstructures_2escm",(void*)f_1394},
{"f_1397:data_2dstructures_2escm",(void*)f_1397},
{"f_1399:data_2dstructures_2escm",(void*)f_1399},
{"f_2343:data_2dstructures_2escm",(void*)f_2343},
{"f_4151:data_2dstructures_2escm",(void*)f_4151},
{"f_2837:data_2dstructures_2escm",(void*)f_2837},
{"f_2048:data_2dstructures_2escm",(void*)f_2048},
{"f_4157:data_2dstructures_2escm",(void*)f_4157},
{"f_2041:data_2dstructures_2escm",(void*)f_2041},
{"f_4516:data_2dstructures_2escm",(void*)f_4516},
{"f_3606:data_2dstructures_2escm",(void*)f_3606},
{"f_4600:data_2dstructures_2escm",(void*)f_4600},
{"f_1405:data_2dstructures_2escm",(void*)f_1405},
{"f_4138:data_2dstructures_2escm",(void*)f_4138},
{"f_3633:data_2dstructures_2escm",(void*)f_3633},
{"f_2303:data_2dstructures_2escm",(void*)f_2303},
{"f_4193:data_2dstructures_2escm",(void*)f_4193},
{"f_4469:data_2dstructures_2escm",(void*)f_4469},
{"f_2598:data_2dstructures_2escm",(void*)f_2598},
{"f_4556:data_2dstructures_2escm",(void*)f_4556},
{"f_3769:data_2dstructures_2escm",(void*)f_3769},
{"f_4171:data_2dstructures_2escm",(void*)f_4171},
{"f_1506:data_2dstructures_2escm",(void*)f_1506},
{"f_1508:data_2dstructures_2escm",(void*)f_1508},
{"f_2350:data_2dstructures_2escm",(void*)f_2350},
{"f_2355:data_2dstructures_2escm",(void*)f_2355},
{"f_1451:data_2dstructures_2escm",(void*)f_1451},
{"f_1556:data_2dstructures_2escm",(void*)f_1556},
{"f_2051:data_2dstructures_2escm",(void*)f_2051},
{"f_1467:data_2dstructures_2escm",(void*)f_1467},
{"f_1533:data_2dstructures_2escm",(void*)f_1533},
{"f_1478:data_2dstructures_2escm",(void*)f_1478},
{"f_3712:data_2dstructures_2escm",(void*)f_3712},
{"f_4529:data_2dstructures_2escm",(void*)f_4529},
{"f_1480:data_2dstructures_2escm",(void*)f_1480},
{"f_1544:data_2dstructures_2escm",(void*)f_1544},
{"f_1488:data_2dstructures_2escm",(void*)f_1488},
{"f_2012:data_2dstructures_2escm",(void*)f_2012},
{"f_1525:data_2dstructures_2escm",(void*)f_1525},
{"f_1421:data_2dstructures_2escm",(void*)f_1421},
{"f_2874:data_2dstructures_2escm",(void*)f_2874},
{"f_2645:data_2dstructures_2escm",(void*)f_2645},
{"f_2648:data_2dstructures_2escm",(void*)f_2648},
{"f_2374:data_2dstructures_2escm",(void*)f_2374},
{"f_1570:data_2dstructures_2escm",(void*)f_1570},
{"f_1578:data_2dstructures_2escm",(void*)f_1578},
{"f_3415:data_2dstructures_2escm",(void*)f_3415},
{"f_2636:data_2dstructures_2escm",(void*)f_2636},
{"f_2630:data_2dstructures_2escm",(void*)f_2630},
{"f_1581:data_2dstructures_2escm",(void*)f_1581},
{"f_1583:data_2dstructures_2escm",(void*)f_1583},
{"f_1585:data_2dstructures_2escm",(void*)f_1585},
{"toplevel:data_2dstructures_2escm",(void*)C_data_2dstructures_toplevel},
{"f_3401:data_2dstructures_2escm",(void*)f_3401},
{"f_3742:data_2dstructures_2escm",(void*)f_3742},
{"f_2639:data_2dstructures_2escm",(void*)f_2639},
{"f_3749:data_2dstructures_2escm",(void*)f_3749},
{"f_2663:data_2dstructures_2escm",(void*)f_2663},
{"f_1610:data_2dstructures_2escm",(void*)f_1610},
{"f_3460:data_2dstructures_2escm",(void*)f_3460},
{"f_2678:data_2dstructures_2escm",(void*)f_2678},
{"f_4695:data_2dstructures_2escm",(void*)f_4695},
{"f_2391:data_2dstructures_2escm",(void*)f_2391},
{"f_3706:data_2dstructures_2escm",(void*)f_3706},
{"f_2394:data_2dstructures_2escm",(void*)f_2394},
{"f_2127:data_2dstructures_2escm",(void*)f_2127},
{"f_1490:data_2dstructures_2escm",(void*)f_1490},
{"f_1519:data_2dstructures_2escm",(void*)f_1519},
{"f_1496:data_2dstructures_2escm",(void*)f_1496},
{"f_1498:data_2dstructures_2escm",(void*)f_1498},
{"f_1511:data_2dstructures_2escm",(void*)f_1511},
{"f_2611:data_2dstructures_2escm",(void*)f_2611},
{"f_3420:data_2dstructures_2escm",(void*)f_3420},
{"f_2102:data_2dstructures_2escm",(void*)f_2102},
{"f_1670:data_2dstructures_2escm",(void*)f_1670},
{"f_1679:data_2dstructures_2escm",(void*)f_1679},
{"f_2975:data_2dstructures_2escm",(void*)f_2975},
{"f_2970:data_2dstructures_2escm",(void*)f_2970},
{"f_4021:data_2dstructures_2escm",(void*)f_4021},
{"f_4023:data_2dstructures_2escm",(void*)f_4023},
{"f_3518:data_2dstructures_2escm",(void*)f_3518},
{"f_4250:data_2dstructures_2escm",(void*)f_4250},
{"f_2199:data_2dstructures_2escm",(void*)f_2199},
{"f_1623:data_2dstructures_2escm",(void*)f_1623},
{"f_3503:data_2dstructures_2escm",(void*)f_3503},
{"f_4229:data_2dstructures_2escm",(void*)f_4229},
{"f_1631:data_2dstructures_2escm",(void*)f_1631},
{"f_2177:data_2dstructures_2escm",(void*)f_2177},
{"f_1645:data_2dstructures_2escm",(void*)f_1645},
{"f_2985:data_2dstructures_2escm",(void*)f_2985},
{"f_4577:data_2dstructures_2escm",(void*)f_4577},
{"f_3567:data_2dstructures_2escm",(void*)f_3567},
{"f_1591:data_2dstructures_2escm",(void*)f_1591},
{"f_1651:data_2dstructures_2escm",(void*)f_1651},
{"f_4587:data_2dstructures_2escm",(void*)f_4587},
{"f_2408:data_2dstructures_2escm",(void*)f_2408},
{"f_1784:data_2dstructures_2escm",(void*)f_1784},
{"f_2136:data_2dstructures_2escm",(void*)f_2136},
{"f_3538:data_2dstructures_2escm",(void*)f_3538},
{"f_4014:data_2dstructures_2escm",(void*)f_4014},
{"f_3002:data_2dstructures_2escm",(void*)f_3002},
{"f_1746:data_2dstructures_2escm",(void*)f_1746},
{"f_1744:data_2dstructures_2escm",(void*)f_1744},
{"f_3795:data_2dstructures_2escm",(void*)f_3795},
{"f_1755:data_2dstructures_2escm",(void*)f_1755},
{"f_4285:data_2dstructures_2escm",(void*)f_4285},
{"f_2464:data_2dstructures_2escm",(void*)f_2464},
{"f_3553:data_2dstructures_2escm",(void*)f_3553},
{"f_4295:data_2dstructures_2escm",(void*)f_4295},
{"f_4267:data_2dstructures_2escm",(void*)f_4267},
{"f_3549:data_2dstructures_2escm",(void*)f_3549},
{"f_1682:data_2dstructures_2escm",(void*)f_1682},
{"f_1719:data_2dstructures_2escm",(void*)f_1719},
{"f_1685:data_2dstructures_2escm",(void*)f_1685},
{"f_4271:data_2dstructures_2escm",(void*)f_4271},
{"f_1713:data_2dstructures_2escm",(void*)f_1713},
{"f_3486:data_2dstructures_2escm",(void*)f_3486},
{"f_1697:data_2dstructures_2escm",(void*)f_1697},
{"f_2417:data_2dstructures_2escm",(void*)f_2417},
{"f_1855:data_2dstructures_2escm",(void*)f_1855},
{"f_2247:data_2dstructures_2escm",(void*)f_2247},
{"f_3247:data_2dstructures_2escm",(void*)f_3247},
{"f_1904:data_2dstructures_2escm",(void*)f_1904},
{"f_1908:data_2dstructures_2escm",(void*)f_1908},
{"f_2955:data_2dstructures_2escm",(void*)f_2955},
{"f_2231:data_2dstructures_2escm",(void*)f_2231},
{"f_3228:data_2dstructures_2escm",(void*)f_3228},
{"f_2934:data_2dstructures_2escm",(void*)f_2934},
{"f_3223:data_2dstructures_2escm",(void*)f_3223},
{"f_2250:data_2dstructures_2escm",(void*)f_2250},
{"f_4055:data_2dstructures_2escm",(void*)f_4055},
{"f_2750:data_2dstructures_2escm",(void*)f_2750},
{"f_1819:data_2dstructures_2escm",(void*)f_1819},
{"f_1817:data_2dstructures_2escm",(void*)f_1817},
{"f_1810:data_2dstructures_2escm",(void*)f_1810},
{"f_3211:data_2dstructures_2escm",(void*)f_3211},
{"f_3208:data_2dstructures_2escm",(void*)f_3208},
{"f_4069:data_2dstructures_2escm",(void*)f_4069},
{"f_2740:data_2dstructures_2escm",(void*)f_2740},
{"f_1826:data_2dstructures_2escm",(void*)f_1826},
{"f_3101:data_2dstructures_2escm",(void*)f_3101},
{"f_2272:data_2dstructures_2escm",(void*)f_2272},
{"f_4479:data_2dstructures_2escm",(void*)f_4479},
{"f_2278:data_2dstructures_2escm",(void*)f_2278},
{"f_1916:data_2dstructures_2escm",(void*)f_1916},
{"f_1834:data_2dstructures_2escm",(void*)f_1834},
{"f_3041:data_2dstructures_2escm",(void*)f_3041},
{"f_3884:data_2dstructures_2escm",(void*)f_3884},
{"f_3881:data_2dstructures_2escm",(void*)f_3881},
{"f_1776:data_2dstructures_2escm",(void*)f_1776},
{"f_3387:data_2dstructures_2escm",(void*)f_3387},
{"f_1778:data_2dstructures_2escm",(void*)f_1778},
{"f_1970:data_2dstructures_2escm",(void*)f_1970},
{"f_4073:data_2dstructures_2escm",(void*)f_4073},
{"f_2709:data_2dstructures_2escm",(void*)f_2709},
{"f_4345:data_2dstructures_2escm",(void*)f_4345},
{"f_4080:data_2dstructures_2escm",(void*)f_4080},
{"f_4085:data_2dstructures_2escm",(void*)f_4085},
{"f_4082:data_2dstructures_2escm",(void*)f_4082},
{"f_4356:data_2dstructures_2escm",(void*)f_4356},
{"f_4350:data_2dstructures_2escm",(void*)f_4350},
{"f_4405:data_2dstructures_2escm",(void*)f_4405},
{"f_4089:data_2dstructures_2escm",(void*)f_4089},
{"f_3350:data_2dstructures_2escm",(void*)f_3350},
{"f_4415:data_2dstructures_2escm",(void*)f_4415},
{"f_4126:data_2dstructures_2escm",(void*)f_4126},
{"f_2504:data_2dstructures_2escm",(void*)f_2504},
{"f_2509:data_2dstructures_2escm",(void*)f_2509},
{"f_2501:data_2dstructures_2escm",(void*)f_2501},
{"f_3813:data_2dstructures_2escm",(void*)f_3813},
{"f_3803:data_2dstructures_2escm",(void*)f_3803},
{"f_4426:data_2dstructures_2escm",(void*)f_4426},
{"f_3978:data_2dstructures_2escm",(void*)f_3978},
{"f_3806:data_2dstructures_2escm",(void*)f_3806},
{"f_1869:data_2dstructures_2escm",(void*)f_1869},
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
S|  map		1
o|eliminated procedure checks: 113 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (##sys#length list)
o|  1 (cdar (pair pair *))
o|  2 (eqv? * (not float))
o|  1 (set-car! pair *)
o|  1 (cddr (pair * pair))
o|  4 (set-cdr! pair *)
o|  1 (<= fixnum fixnum)
o|  1 (vector-length vector)
o|  1 (make-string fixnum)
o|  1 (##sys#check-list (or pair list) *)
o|  23 (cdr pair)
o|  5 (car pair)
o|  2 (length list)
(o e)|safe calls: 465 
o|Removed `not' forms: 11 
o|inlining procedure: k1410 
o|inlining procedure: k1410 
o|contracted procedure: k1443 
o|inlining procedure: k1440 
o|inlining procedure: k1440 
o|inlining procedure: k1469 
o|inlining procedure: k1469 
o|inlining procedure: k1513 
o|inlining procedure: k1513 
o|inlining procedure: k1534 
o|propagated global variable: r15354729 values 
o|inlining procedure: k1534 
o|inlining procedure: k1546 
o|propagated global variable: r15474731 identity 
o|inlining procedure: k1546 
o|inlining procedure: k1564 
o|inlining procedure: k1564 
o|inlining procedure: k1593 
o|inlining procedure: k1593 
o|inlining procedure: k1605 
o|inlining procedure: k1605 
o|inlining procedure: k1625 
o|inlining procedure: k1625 
o|inlining procedure: k1659 
o|inlining procedure: k1659 
o|inlining procedure: k1690 
o|inlining procedure: k1690 
o|inlining procedure: k1699 
o|inlining procedure: k1699 
o|inlining procedure: k1721 
o|inlining procedure: k1721 
o|inlining procedure: k1760 
o|inlining procedure: k1760 
o|inlining procedure: k1786 
o|inlining procedure: k1786 
o|inlining procedure: k1836 
o|inlining procedure: k1836 
o|inlining procedure: k1857 
o|inlining procedure: k1857 
o|inlining procedure: k1918 
o|inlining procedure: k1918 
o|contracted procedure: k1927 
o|inlining procedure: k1939 
o|inlining procedure: k1939 
o|inlining procedure: k1972 
o|inlining procedure: k1972 
o|contracted procedure: k1981 
o|contracted procedure: k1990 
o|inlining procedure: k1987 
o|inlining procedure: k1987 
o|inlining procedure: k2052 
o|inlining procedure: k2052 
o|inlining procedure: k2068 
o|propagated global variable: r20694767 assv 
o|inlining procedure: k2068 
o|inlining procedure: k2088 
o|inlining procedure: k2088 
o|inlining procedure: k2138 
o|inlining procedure: k2138 
o|contracted procedure: k2154 
o|contracted procedure: k2166 
o|inlining procedure: k2163 
o|inlining procedure: k2163 
o|inlining procedure: k2251 
o|inlining procedure: k2251 
o|inlining procedure: k2260 
o|propagated global variable: r22614777 assv 
o|inlining procedure: k2260 
o|inlining procedure: k2280 
o|inlining procedure: k2280 
o|inlining procedure: k2298 
o|inlining procedure: k2298 
o|inlining procedure: k2357 
o|inlining procedure: k2357 
o|inlining procedure: k2396 
o|inlining procedure: k2419 
o|inlining procedure: k2419 
o|inlining procedure: k2396 
o|inlining procedure: k2466 
o|inlining procedure: k2466 
o|inlining procedure: k2481 
o|inlining procedure: k2481 
o|inlining procedure: k2524 
o|inlining procedure: k2524 
o|inlining procedure: k2576 
o|inlining procedure: k2588 
o|inlining procedure: k2600 
o|inlining procedure: k2600 
o|inlining procedure: k2588 
o|inlining procedure: k2576 
o|inlining procedure: k2699 
o|inlining procedure: k2699 
o|inlining procedure: k2730 
o|inlining procedure: k2730 
o|inlining procedure: k2960 
o|inlining procedure: k2960 
o|inlining procedure: k2977 
o|inlining procedure: k2977 
o|inlining procedure: k3004 
o|inlining procedure: k3004 
o|inlining procedure: k3026 
o|inlining procedure: k3026 
o|inlining procedure: k3088 
o|inlining procedure: k3115 
o|inlining procedure: k3115 
o|inlining procedure: k3088 
o|inlining procedure: k3186 
o|inlining procedure: k3186 
o|inlining procedure: k3230 
o|inlining procedure: k3230 
o|contracted procedure: k3251 
o|contracted procedure: k3268 
o|inlining procedure: k3265 
o|inlining procedure: k3295 
o|inlining procedure: k3295 
o|inlining procedure: k3265 
o|inlining procedure: k3329 
o|inlining procedure: k3329 
o|inlining procedure: k3355 
o|inlining procedure: k3355 
o|inlining procedure: k3389 
o|inlining procedure: k3403 
o|inlining procedure: k3403 
o|inlining procedure: k3389 
o|inlining procedure: k3422 
o|inlining procedure: k3422 
o|inlining procedure: k3520 
o|inlining procedure: k3520 
o|inlining procedure: k3587 
o|inlining procedure: k3587 
o|inlining procedure: k3608 
o|inlining procedure: k3608 
o|inlining procedure: k3623 
o|inlining procedure: k3623 
o|inlining procedure: k3635 
o|inlining procedure: k3635 
o|substituted constant variable: a3670 
o|inlining procedure: k3687 
o|inlining procedure: k3687 
o|contracted procedure: k3693 
o|inlining procedure: k3714 
o|inlining procedure: k3714 
o|inlining procedure: k3744 
o|inlining procedure: k3744 
o|inlining procedure: k3808 
o|inlining procedure: k3808 
o|inlining procedure: k3864 
o|inlining procedure: k3864 
o|inlining procedure: k3876 
o|inlining procedure: k3876 
o|inlining procedure: k3932 
o|inlining procedure: k3932 
o|inlining procedure: k3989 
o|inlining procedure: k3989 
o|inlining procedure: k4002 
o|inlining procedure: k4025 
o|inlining procedure: k4025 
o|inlining procedure: k4002 
o|inlining procedure: k4057 
o|inlining procedure: k4057 
o|inlining procedure: k4090 
o|inlining procedure: k4090 
o|inlining procedure: k4159 
o|inlining procedure: k4159 
o|substituted constant variable: a4214 
o|substituted constant variable: a4216 
o|inlining procedure: k4231 
o|inlining procedure: k4231 
o|inlining procedure: k4275 
o|inlining procedure: k4296 
o|inlining procedure: k4296 
o|contracted procedure: k4311 
o|inlining procedure: k4308 
o|inlining procedure: k4308 
o|contracted procedure: k4324 
o|inlining procedure: k4321 
o|inlining procedure: k4321 
o|inlining procedure: k4275 
o|inlining procedure: k4392 
o|inlining procedure: k4392 
o|inlining procedure: k4413 
o|inlining procedure: k4413 
o|inlining procedure: k4531 
o|inlining procedure: k4531 
o|inlining procedure: k4565 
o|inlining procedure: k4565 
o|inlining procedure: k4579 
o|inlining procedure: k4579 
o|contracted procedure: "(data-structures.scm:901) g927928" 
o|inlining procedure: k4697 
o|inlining procedure: k4697 
o|replaced variables: 522 
o|removed binding forms: 211 
o|substituted constant variable: r14414723 
o|substituted constant variable: r15944735 
o|substituted constant variable: r16064738 
o|substituted constant variable: r17004745 
o|substituted constant variable: r17614750 
o|substituted constant variable: r18374753 
o|substituted constant variable: r19194757 
o|substituted constant variable: r19734761 
o|substituted constant variable: r20894770 
o|substituted constant variable: r22814779 
o|substituted constant variable: r23584784 
o|substituted constant variable: r26014797 
o|substituted constant variable: r25894799 
o|converted assignments to bindings: (add540) 
o|substituted constant variable: r31874819 
o|converted assignments to bindings: (instring618) 
o|substituted constant variable: r35214839 
o|substituted constant variable: r36094843 
o|substituted constant variable: r36244845 
o|substituted constant variable: r39904864 
o|substituted constant variable: r43094880 
o|substituted constant variable: r43224882 
o|substituted constant variable: r42764884 
o|substituted constant variable: r45664907 
o|substituted constant variable: r45664907 
o|converted assignments to bindings: (traverse386) 
o|simplifications: ((let . 3)) 
o|replaced variables: 21 
o|removed binding forms: 526 
o|inlining procedure: k2650 
o|inlining procedure: k2665 
o|inlining procedure: k2794 
o|inlining procedure: k2891 
o|inlining procedure: k2983 
o|inlining procedure: k4585 
o|replaced variables: 10 
o|removed binding forms: 47 
o|substituted constant variable: r26515128 
o|substituted constant variable: r26665129 
o|removed binding forms: 14 
o|removed binding forms: 2 
o|simplifications: ((if . 40) (##core#call . 514)) 
o|  call simplifications:
o|    ##sys#setislot	4
o|    ##sys#check-structure	9
o|    ##sys#structure?
o|    ##sys#check-vector
o|    caar
o|    ##sys#cons	4
o|    ##sys#list
o|    ##sys#make-structure	4
o|    vector-length
o|    vector-set!
o|    >
o|    set-car!
o|    quotient
o|    set-cdr!	4
o|    vector?	3
o|    -	2
o|    vector-ref	2
o|    +	2
o|    =	4
o|    list->string	2
o|    cadr	2
o|    fxmin	2
o|    ##sys#check-string	21
o|    ##sys#size	24
o|    fx>=	10
o|    fx>	6
o|    string?	2
o|    symbol?
o|    char?	4
o|    number?
o|    string
o|    string-length	4
o|    string-ref
o|    string-set!
o|    fx+	31
o|    ##sys#setslot	17
o|    pair?	17
o|    ##sys#check-exact	7
o|    fx<=	5
o|    length	2
o|    fx<	6
o|    fx=	8
o|    fx-	16
o|    list	6
o|    list?
o|    ##sys#check-pair	3
o|    cdr	12
o|    cons	38
o|    ##sys#check-list	8
o|    void
o|    not-pair?
o|    call-with-values
o|    not	3
o|    eq?	23
o|    apply	8
o|    car	33
o|    null?	57
o|    ##sys#slot	81
o|contracted procedure: k1407 
o|contracted procedure: k1416 
o|contracted procedure: k1426 
o|contracted procedure: k1463 
o|contracted procedure: k1446 
o|contracted procedure: k1459 
o|contracted procedure: k1472 
o|contracted procedure: k1475 
o|contracted procedure: k1516 
o|contracted procedure: k1537 
o|contracted procedure: k1549 
o|contracted procedure: k1558 
o|contracted procedure: k1561 
o|contracted procedure: k1567 
o|contracted procedure: k1596 
o|contracted procedure: k1602 
o|contracted procedure: k1615 
o|contracted procedure: k1619 
o|contracted procedure: k1628 
o|contracted procedure: k1675 
o|contracted procedure: k1639 
o|contracted procedure: k1653 
o|contracted procedure: k1656 
o|contracted procedure: k1662 
o|contracted procedure: k1687 
o|contracted procedure: k1709 
o|contracted procedure: k1724 
o|contracted procedure: k1734 
o|contracted procedure: k1738 
o|contracted procedure: k1748 
o|contracted procedure: k1757 
o|contracted procedure: k1763 
o|contracted procedure: k1770 
o|contracted procedure: k1789 
o|contracted procedure: k1792 
o|contracted procedure: k1795 
o|contracted procedure: k1801 
o|contracted procedure: k1821 
o|contracted procedure: k1827 
o|contracted procedure: k1839 
o|contracted procedure: k1845 
o|contracted procedure: k1860 
o|contracted procedure: k1875 
o|contracted procedure: k1894 
o|contracted procedure: k1882 
o|contracted procedure: k1886 
o|contracted procedure: k1890 
o|contracted procedure: k1897 
o|contracted procedure: k1909 
o|contracted procedure: k1921 
o|contracted procedure: k1953 
o|contracted procedure: k1933 
o|contracted procedure: k1936 
o|contracted procedure: k1942 
o|contracted procedure: k1956 
o|contracted procedure: k1963 
o|contracted procedure: k1975 
o|contracted procedure: k2037 
o|contracted procedure: k2033 
o|contracted procedure: k1999 
o|contracted procedure: k2006 
o|contracted procedure: k2014 
o|contracted procedure: k2018 
o|contracted procedure: k2025 
o|contracted procedure: k2029 
o|contracted procedure: k2120 
o|contracted procedure: k2043 
o|contracted procedure: k2055 
o|contracted procedure: k2062 
o|contracted procedure: k2065 
o|contracted procedure: k2071 
o|contracted procedure: k2077 
o|contracted procedure: k2091 
o|contracted procedure: k2094 
o|contracted procedure: k2107 
o|contracted procedure: k2110 
o|contracted procedure: k2117 
o|contracted procedure: k2224 
o|contracted procedure: k2129 
o|contracted procedure: k2141 
o|contracted procedure: k2148 
o|contracted procedure: k2221 
o|contracted procedure: k2160 
o|contracted procedure: k2217 
o|contracted procedure: k2182 
o|contracted procedure: k2186 
o|contracted procedure: k2205 
o|contracted procedure: k2209 
o|contracted procedure: k2193 
o|contracted procedure: k2201 
o|contracted procedure: k2213 
o|contracted procedure: k2336 
o|contracted procedure: k2233 
o|contracted procedure: k2330 
o|contracted procedure: k2236 
o|contracted procedure: k2324 
o|contracted procedure: k2239 
o|contracted procedure: k2318 
o|contracted procedure: k2242 
o|contracted procedure: k2257 
o|contracted procedure: k2263 
o|contracted procedure: k2269 
o|contracted procedure: k2283 
o|contracted procedure: k2289 
o|contracted procedure: k2292 
o|contracted procedure: k2295 
o|contracted procedure: k2308 
o|contracted procedure: k2312 
o|contracted procedure: k2345 
o|contracted procedure: k2360 
o|contracted procedure: k2363 
o|contracted procedure: k2366 
o|contracted procedure: k2379 
o|contracted procedure: k2383 
o|contracted procedure: k2386 
o|contracted procedure: k2399 
o|contracted procedure: k2403 
o|contracted procedure: k2448 
o|contracted procedure: k2444 
o|contracted procedure: k2413 
o|contracted procedure: k2422 
o|contracted procedure: k2440 
o|contracted procedure: k2425 
o|contracted procedure: k2432 
o|contracted procedure: k2436 
o|contracted procedure: k2454 
o|contracted procedure: k2469 
o|contracted procedure: k2475 
o|contracted procedure: k2484 
o|contracted procedure: k2493 
o|contracted procedure: k2515 
o|contracted procedure: k2527 
o|contracted procedure: k2530 
o|contracted procedure: k2533 
o|contracted procedure: k2541 
o|contracted procedure: k2549 
o|contracted procedure: k2558 
o|contracted procedure: k2561 
o|contracted procedure: k2564 
o|contracted procedure: k2567 
o|contracted procedure: k2570 
o|contracted procedure: k2573 
o|contracted procedure: k2623 
o|contracted procedure: k2579 
o|contracted procedure: k2585 
o|contracted procedure: k2591 
o|contracted procedure: k2603 
o|contracted procedure: k2616 
o|contracted procedure: k2656 
o|contracted procedure: k2650 
o|contracted procedure: k2671 
o|contracted procedure: k2665 
o|contracted procedure: k2680 
o|contracted procedure: k2683 
o|contracted procedure: k2686 
o|contracted procedure: k2689 
o|contracted procedure: k2692 
o|contracted procedure: k2705 
o|contracted procedure: k2696 
o|contracted procedure: k2702 
o|contracted procedure: k2711 
o|contracted procedure: k2714 
o|contracted procedure: k2717 
o|contracted procedure: k2720 
o|contracted procedure: k2723 
o|contracted procedure: k2736 
o|contracted procedure: k2727 
o|contracted procedure: k2733 
o|contracted procedure: k2742 
o|contracted procedure: k2745 
o|contracted procedure: k2751 
o|contracted procedure: k2754 
o|contracted procedure: k2773 
o|contracted procedure: k2761 
o|contracted procedure: k2769 
o|contracted procedure: k2765 
o|contracted procedure: k2830 
o|contracted procedure: k2779 
o|contracted procedure: k2824 
o|contracted procedure: k2782 
o|contracted procedure: k2818 
o|contracted procedure: k2785 
o|contracted procedure: k2812 
o|contracted procedure: k2788 
o|contracted procedure: k2806 
o|contracted procedure: k2791 
o|contracted procedure: k2800 
o|contracted procedure: k2794 
o|contracted procedure: k2839 
o|contracted procedure: k2842 
o|contracted procedure: k2848 
o|contracted procedure: k2851 
o|contracted procedure: k2870 
o|contracted procedure: k2858 
o|contracted procedure: k2866 
o|contracted procedure: k2862 
o|contracted procedure: k2927 
o|contracted procedure: k2876 
o|contracted procedure: k2921 
o|contracted procedure: k2879 
o|contracted procedure: k2915 
o|contracted procedure: k2882 
o|contracted procedure: k2909 
o|contracted procedure: k2885 
o|contracted procedure: k2903 
o|contracted procedure: k2888 
o|contracted procedure: k2897 
o|contracted procedure: k2891 
o|contracted procedure: k2936 
o|contracted procedure: k3061 
o|contracted procedure: k2939 
o|contracted procedure: k3053 
o|contracted procedure: k2942 
o|contracted procedure: k2945 
o|contracted procedure: k2948 
o|contracted procedure: k2951 
o|contracted procedure: k2957 
o|contracted procedure: k2960 
o|contracted procedure: k2980 
o|contracted procedure: k2989 
o|contracted procedure: k2992 
o|contracted procedure: k3007 
o|contracted procedure: k3014 
o|contracted procedure: k3020 
o|contracted procedure: k3023 
o|contracted procedure: k3029 
o|contracted procedure: k3032 
o|contracted procedure: k3049 
o|contracted procedure: k3163 
o|contracted procedure: k3070 
o|contracted procedure: k3073 
o|contracted procedure: k3076 
o|contracted procedure: k3079 
o|contracted procedure: k3103 
o|contracted procedure: k3106 
o|contracted procedure: k3109 
o|contracted procedure: k3112 
o|contracted procedure: k3122 
o|contracted procedure: k3126 
o|contracted procedure: k3132 
o|contracted procedure: k3135 
o|contracted procedure: k3138 
o|contracted procedure: k3145 
o|contracted procedure: k3153 
o|contracted procedure: k3157 
o|contracted procedure: k3149 
o|contracted procedure: k3175 
o|contracted procedure: k3189 
o|contracted procedure: k3195 
o|contracted procedure: k3202 
o|contracted procedure: k3317 
o|contracted procedure: k3212 
o|contracted procedure: k3215 
o|contracted procedure: k3218 
o|contracted procedure: k3233 
o|contracted procedure: k3239 
o|contracted procedure: k3281 
o|contracted procedure: k3288 
o|contracted procedure: k3292 
o|contracted procedure: k3298 
o|contracted procedure: k3309 
o|contracted procedure: k3313 
o|contracted procedure: k3275 
o|contracted procedure: k3258 
o|contracted procedure: k3262 
o|contracted procedure: k3323 
o|contracted procedure: k3326 
o|contracted procedure: k3332 
o|contracted procedure: k3338 
o|contracted procedure: k3344 
o|contracted procedure: k3347 
o|contracted procedure: k3358 
o|contracted procedure: k3368 
o|contracted procedure: k3377 
o|contracted procedure: k3380 
o|contracted procedure: k3383 
o|contracted procedure: k3392 
o|contracted procedure: k3406 
o|contracted procedure: k3403 
o|contracted procedure: k3425 
o|contracted procedure: k3432 
o|contracted procedure: k3436 
o|contracted procedure: k3439 
o|contracted procedure: k3442 
o|contracted procedure: k3445 
o|contracted procedure: k3496 
o|contracted procedure: k3492 
o|contracted procedure: k3452 
o|contracted procedure: k3455 
o|contracted procedure: k3473 
o|contracted procedure: k3465 
o|contracted procedure: k3469 
o|contracted procedure: k3476 
o|contracted procedure: k3480 
o|contracted procedure: k3505 
o|contracted procedure: k3508 
o|contracted procedure: k3511 
o|contracted procedure: k3523 
o|contracted procedure: k3529 
o|contracted procedure: k3540 
o|contracted procedure: k3555 
o|contracted procedure: k3559 
o|contracted procedure: k3563 
o|contracted procedure: k3599 
o|contracted procedure: k3569 
o|contracted procedure: k3572 
o|contracted procedure: k3575 
o|contracted procedure: k3578 
o|contracted procedure: k3581 
o|contracted procedure: k3584 
o|contracted procedure: k3596 
o|contracted procedure: k3590 
o|contracted procedure: k3611 
o|contracted procedure: k3617 
o|contracted procedure: k3620 
o|contracted procedure: k3626 
o|contracted procedure: k3638 
o|contracted procedure: k3651 
o|contracted procedure: k3658 
o|contracted procedure: k3666 
o|contracted procedure: k3662 
o|contracted procedure: k3676 
o|contracted procedure: k3684 
o|contracted procedure: k3708 
o|contracted procedure: k3717 
o|contracted procedure: k3723 
o|contracted procedure: k3730 
o|contracted procedure: k3736 
o|contracted procedure: k3753 
o|contracted procedure: k3760 
o|contracted procedure: k3771 
o|contracted procedure: k3779 
o|contracted procedure: k3786 
o|contracted procedure: k3797 
o|contracted procedure: k3814 
o|contracted procedure: k3820 
o|contracted procedure: k3835 
o|contracted procedure: k3841 
o|contracted procedure: k3857 
o|contracted procedure: k3861 
o|contracted procedure: k3867 
o|contracted procedure: k3873 
o|contracted procedure: k3885 
o|inlining procedure: k3882 
o|contracted procedure: k3903 
o|inlining procedure: k3900 
o|contracted procedure: k3919 
o|contracted procedure: k3923 
o|contracted procedure: k3935 
o|contracted procedure: k3944 
o|contracted procedure: k3956 
o|contracted procedure: k3959 
o|contracted procedure: k3962 
o|contracted procedure: k3971 
o|contracted procedure: k3979 
o|contracted procedure: k3992 
o|contracted procedure: k3996 
o|contracted procedure: k3999 
o|contracted procedure: k4005 
o|contracted procedure: k4008 
o|contracted procedure: k4028 
o|contracted procedure: k4044 
o|contracted procedure: k4031 
o|contracted procedure: k4040 
o|contracted procedure: k4051 
o|contracted procedure: k4060 
o|contracted procedure: k4093 
o|contracted procedure: k4108 
o|contracted procedure: k4112 
o|contracted procedure: k4132 
o|contracted procedure: k4116 
o|contracted procedure: k4120 
o|contracted procedure: k4128 
o|contracted procedure: k4104 
o|contracted procedure: k4100 
o|contracted procedure: k4142 
o|contracted procedure: k4205 
o|contracted procedure: k4199 
o|contracted procedure: k4153 
o|contracted procedure: k4162 
o|contracted procedure: k4173 
o|contracted procedure: k4179 
o|contracted procedure: k4182 
o|contracted procedure: k4195 
o|contracted procedure: k4218 
o|contracted procedure: k4259 
o|contracted procedure: k4263 
o|contracted procedure: k4225 
o|contracted procedure: k4234 
o|contracted procedure: k4244 
o|contracted procedure: k4252 
o|contracted procedure: k4272 
o|contracted procedure: k4278 
o|contracted procedure: k4336 
o|contracted procedure: k4287 
o|contracted procedure: k4290 
o|contracted procedure: k4299 
o|contracted procedure: k4305 
o|contracted procedure: k4318 
o|contracted procedure: k4331 
o|contracted procedure: k4339 
o|contracted procedure: k4364 
o|contracted procedure: k4373 
o|contracted procedure: k4380 
o|contracted procedure: k4386 
o|contracted procedure: k4389 
o|contracted procedure: k4398 
o|contracted procedure: k4407 
o|contracted procedure: k4410 
o|contracted procedure: k4419 
o|contracted procedure: k4428 
o|contracted procedure: k4431 
o|contracted procedure: k4437 
o|contracted procedure: k4448 
o|contracted procedure: k4444 
o|contracted procedure: k4440 
o|contracted procedure: k4465 
o|contracted procedure: k4451 
o|contracted procedure: k4461 
o|contracted procedure: k4471 
o|contracted procedure: k4474 
o|contracted procedure: k4480 
o|contracted procedure: k4483 
o|contracted procedure: k4503 
o|contracted procedure: k4486 
o|contracted procedure: k4500 
o|contracted procedure: k4496 
o|contracted procedure: k4489 
o|contracted procedure: k4509 
o|contracted procedure: k4518 
o|contracted procedure: k4525 
o|contracted procedure: k4534 
o|contracted procedure: k4544 
o|contracted procedure: k4552 
o|contracted procedure: k4548 
o|contracted procedure: k4558 
o|contracted procedure: k4570 
o|contracted procedure: k4610 
o|contracted procedure: k4582 
o|contracted procedure: k4592 
o|contracted procedure: k4595 
o|contracted procedure: k45925177 
o|contracted procedure: k4616 
o|contracted procedure: k4650 
o|contracted procedure: k4619 
o|contracted procedure: k4622 
o|contracted procedure: k4646 
o|contracted procedure: k4639 
o|contracted procedure: k4625 
o|contracted procedure: k4636 
o|contracted procedure: k4632 
o|contracted procedure: k4656 
o|contracted procedure: k4659 
o|contracted procedure: k4668 
o|contracted procedure: k4671 
o|contracted procedure: k4682 
o|contracted procedure: k4678 
o|contracted procedure: k4686 
o|contracted procedure: k4711 
o|contracted procedure: k4700 
o|contracted procedure: k4707 
o|contracted procedure: k4718 
o|simplifications: ((let . 87)) 
o|removed binding forms: 460 
o|inlining procedure: k3968 
o|inlining procedure: k3968 
o|substituted constant variable: r4260 
o|substituted constant variable: r4260 
o|substituted constant variable: r4264 
o|replaced variables: 167 
o|removed binding forms: 90 
o|direct leaf routine/allocation: loop152 0 
o|direct leaf routine/allocation: loop344 0 
o|direct leaf routine/allocation: loop2598 0 
o|direct leaf routine/allocation: loop622 0 
o|direct leaf routine/allocation: doloop930931 0 
o|converted assignments to bindings: (loop152) 
o|converted assignments to bindings: (loop344) 
o|converted assignments to bindings: (loop2598) 
o|converted assignments to bindings: (loop622) 
o|converted assignments to bindings: (doloop930931) 
o|simplifications: ((let . 5)) 
o|customizable procedures: (k4665 k4598 doloop906907 loop899 k4434 k4269 loop843 loop833 visit810 walk825 doloop796797 step774 loop762 loop748 loop732 doloop725726 loop689 loop672 k3458 collect667 instring618 loop648 loop1590 scan562 loop546 add540 k2845 k2748 traverse386 loop397 map-loop362379 rev-string-append338 k2348 loop329 loop314 k2245 loop277 loop255 k2046 loop225 k1906 loop211 doloop198199 loop191 loop177 loop169 loop163 loop136 loop121 loop110 loop80 loop68) 
o|calls to known targets: 131 
o|unused rest argument: _92 f_1478 
o|unused rest argument: _93 f_1480 
o|unused rest argument: _134 f_1631 
o|identified direct recursive calls: f_1697 1 
o|identified direct recursive calls: f_1719 1 
o|identified direct recursive calls: f_1755 1 
o|identified direct recursive calls: f_1784 2 
o|identified direct recursive calls: f_1855 1 
o|identified direct recursive calls: f_1916 1 
o|identified direct recursive calls: f_1970 2 
o|identified direct recursive calls: f_2417 1 
o|identified direct recursive calls: f_2394 1 
o|identified direct recursive calls: f_3002 1 
o|identified direct recursive calls: f_3101 1 
o|identified direct recursive calls: f_3086 1 
o|identified direct recursive calls: f_3184 1 
o|identified direct recursive calls: f_3420 1 
o|identified direct recursive calls: f_4023 1 
o|identified direct recursive calls: f_4529 1 
o|identified direct recursive calls: f_4695 1 
o|fast box initializations: 39 
o|dropping unused closure argument: f_2556 
o|dropping unused closure argument: f_3173 
o|dropping unused closure argument: f_4695 
*/
/* end of file */

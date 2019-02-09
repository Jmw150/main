/* Generated from modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file modules.c
   unit: modules
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[183];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,110,97,109,101,32,120,50,52,49,50,54,48,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,31),40,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,32,120,50,52,49,50,57,49,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,44),40,115,101,116,45,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,33,32,120,50,52,49,50,57,52,32,121,50,52,50,50,57,53,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,109,111,100,117,108,101,45,101,120,112,111,114,116,115,32,109,51,55,52,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,45,97,108,105,97,115,32,97,108,105,97,115,51,56,50,32,110,97,109,101,51,56,51,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,7),40,97,51,50,54,52,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,7),40,97,51,50,56,49,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,97,51,50,56,55,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,48,48,32,103,52,49,50,52,49,57,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,119,105,116,104,45,109,111,100,117,108,101,45,97,108,105,97,115,101,115,32,98,105,110,100,105,110,103,115,51,56,53,32,116,104,117,110,107,51,56,54,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,11),40,103,52,52,52,32,97,52,52,54,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,110,52,51,54,32,100,111,110,101,52,51,55,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,109,111,100,117,108,101,45,110,97,109,101,32,110,97,109,101,52,51,51,32,108,111,99,52,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,32,110,97,109,101,52,53,52,32,46,32,116,109,112,52,53,51,52,53,53,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,11),40,103,52,56,50,32,109,52,56,52,41,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,115,119,105,116,99,104,45,109,111,100,117,108,101,32,109,111,100,52,55,52,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,103,53,49,53,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,103,52,57,57,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,57,56,32,103,53,48,53,53,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,97,100,100,45,116,111,45,101,120,112,111,114,116,45,108,105,115,116,32,109,111,100,52,57,48,32,101,120,112,115,52,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,60),40,35,35,115,121,115,35,116,111,112,108,101,118,101,108,45,100,101,102,105,110,105,116,105,111,110,45,104,111,111,107,32,115,121,109,53,50,54,32,109,111,100,53,50,55,32,101,120,112,53,50,56,32,118,97,108,53,50,57,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,53,51,49,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,39),40,99,104,101,99,107,45,102,111,114,45,114,101,100,101,102,32,115,121,109,53,51,52,32,101,110,118,53,51,53,32,115,101,110,118,53,51,54,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,101,120,112,111,114,116,32,115,121,109,53,52,49,32,109,111,100,53,52,50,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,51),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,53,53,55,32,109,111,100,53,53,56,32,118,97,108,53,53,57,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,11),40,103,53,56,51,32,97,53,56,53,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,49),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,117,110,100,101,102,105,110,101,100,32,115,121,109,53,55,51,32,109,111,100,53,55,52,32,119,104,101,114,101,53,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,32,110,97,109,101,53,57,50,32,101,120,112,108,105,115,116,53,57,51,32,46,32,116,109,112,53,57,49,53,57,52,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,49,49,32,103,54,49,56,54,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,109,97,114,107,45,105,109,112,111,114,116,101,100,45,115,121,109,98,111,108,115,32,115,101,54,48,56,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,101,54,57,54,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,17),40,109,101,114,103,101,45,115,101,32,115,101,115,54,57,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,17),40,103,55,56,57,32,115,101,120,112,111,114,116,56,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,100,56,50,52,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,56,51,32,103,55,57,53,56,49,55,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,53,48,32,103,55,54,50,55,55,53,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,50,52,32,103,55,51,54,55,52,50,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,45,114,101,103,105,115,116,114,97,116,105,111,110,32,109,111,100,55,48,55,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,14),40,103,57,52,50,32,115,101,120,112,57,53,49,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,14),40,103,57,54,51,32,105,101,120,112,57,55,50,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,14),40,103,57,56,52,32,110,101,120,112,57,57,51,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,56,51,32,103,57,57,48,57,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,54,50,32,103,57,54,57,57,55,55,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,52,49,32,103,57,52,56,57,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,49,50,32,103,57,50,52,57,51,49,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,56,52,32,103,56,57,54,57,48,51,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,53,54,32,103,56,54,56,56,55,53,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,88),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,32,110,97,109,101,56,51,57,32,105,101,120,112,111,114,116,115,56,52,48,32,118,101,120,112,111,114,116,115,56,52,49,32,115,101,120,112,111,114,116,115,56,52,50,32,46,32,116,109,112,56,51,56,56,52,51,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,112,114,105,109,105,116,105,118,101,45,97,108,105,97,115,32,115,121,109,49,48,49,48,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,14),40,103,49,48,54,56,32,115,101,49,48,55,57,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,54,50,32,103,49,48,55,52,49,48,56,52,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,51,53,32,103,49,48,52,55,49,48,53,52,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,69),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,105,109,105,116,105,118,101,45,109,111,100,117,108,101,32,110,97,109,101,49,48,50,51,32,118,101,120,112,111,114,116,115,49,48,50,52,32,46,32,116,109,112,49,48,50,50,49,48,50,53,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,120,108,49,48,57,56,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,102,105,110,100,45,101,120,112,111,114,116,32,115,121,109,49,48,57,51,32,109,111,100,49,48,57,52,32,105,110,100,105,114,101,99,116,49,48,57,53,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,13),40,103,49,50,50,56,32,97,49,50,51,55,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,50,55,32,103,49,50,51,52,49,50,52,49,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,15),40,103,49,49,57,55,32,115,121,109,49,50,48,54,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,57,54,32,103,49,50,48,51,49,50,48,57,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,13),40,103,49,49,56,49,32,117,49,49,57,48,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,13),40,103,49,50,57,54,32,109,49,51,48,53,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,57,53,32,103,49,51,48,50,49,51,49,49,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,54,48,32,103,49,50,55,50,49,50,56,54,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,19),40,119,97,114,110,32,109,115,103,54,53,50,32,105,100,54,53,51,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,103,54,54,57,32,97,54,55,49,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,11),40,103,54,55,54,32,97,54,55,56,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,50,32,105,101,120,112,111,114,116,115,54,54,49,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,101,120,112,111,114,116,115,54,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,56,48,32,103,49,49,56,55,49,50,53,51,41,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,120,108,49,49,54,49,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,109,101,49,49,53,51,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,49,50,54,32,103,49,49,51,56,49,49,52,53,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,110,97,108,105,122,101,45,109,111,100,117,108,101,32,109,111,100,49,49,49,55,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,7),40,97,54,48,53,53,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,7),40,97,54,49,49,55,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,97,54,49,50,50,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,97,54,49,50,56,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,7),40,97,54,49,49,49,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,54,49,51,51,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,47,105,109,112,111,114,116,45,108,105,98,114,97,114,121,32,109,110,97,109,101,49,51,50,55,32,108,111,99,49,51,50,56,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,17),40,114,101,115,111,108,118,101,32,115,121,109,49,52,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,13),40,116,111,115,116,114,32,120,49,52,51,55,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,22),40,105,109,112,111,114,116,45,110,97,109,101,32,115,112,101,99,49,52,52,50,41,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,97,54,51,51,55,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,14),40,103,49,53,50,52,32,105,100,49,53,51,51,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,50,51,32,103,49,53,51,48,49,53,51,53,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,13),40,103,49,53,52,52,32,97,49,53,52,54,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,13),40,103,49,53,52,56,32,97,49,53,53,48,41,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,38),40,108,111,111,112,32,105,100,115,49,53,49,50,32,118,49,53,49,51,32,115,49,53,49,52,32,109,105,115,115,105,110,103,49,53,49,53,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,52,56,55,32,103,49,52,57,57,49,53,48,53,41};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,14),40,103,49,54,48,49,32,105,100,49,54,49,48,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,48,48,32,103,49,54,48,55,49,54,49,50,41,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,14),40,103,49,54,50,49,32,105,100,49,54,50,51,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,29),40,108,111,111,112,32,105,109,112,115,49,53,57,48,32,115,49,53,57,49,32,105,100,115,49,53,57,50,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,14),40,103,49,54,50,54,32,105,100,49,54,50,56,41,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,29),40,108,111,111,112,32,105,109,112,118,49,53,56,49,32,118,49,53,56,50,32,105,100,115,49,53,56,51,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,53,53,54,32,103,49,53,54,56,49,53,55,52,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,14),40,103,49,54,53,50,32,105,100,49,54,54,49,41,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,53,49,32,103,49,54,53,56,49,54,56,57,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,54,54,52,32,103,49,54,55,54,49,54,56,50,41};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,13),40,103,49,54,57,56,32,97,49,55,48,48,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,29),40,108,111,111,112,32,105,109,112,115,49,54,52,49,32,115,49,54,52,50,32,105,100,115,49,54,52,51,41,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,13),40,103,49,55,48,51,32,97,49,55,48,53,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,29),40,108,111,111,112,32,105,109,112,118,49,54,51,50,32,118,49,54,51,51,32,105,100,115,49,54,51,52,41,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,13),40,114,101,110,32,105,109,112,49,55,49,48,41,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,52,50,32,103,49,55,53,52,49,55,54,48,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,55,49,54,32,103,49,55,50,56,49,55,51,52,41};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,92),40,97,54,51,52,55,32,110,97,109,101,49,52,54,48,49,52,54,49,49,52,55,48,32,102,111,114,109,49,52,54,50,49,52,54,51,49,52,55,49,32,105,109,112,118,49,52,54,52,49,52,54,53,49,52,55,50,32,105,109,112,115,49,52,54,54,49,52,54,55,49,52,55,51,32,105,109,112,105,49,52,54,56,49,52,54,57,49,52,55,52,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,22),40,105,109,112,111,114,116,45,115,112,101,99,32,115,112,101,99,49,52,52,56,41,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,7),40,97,55,49,51,52,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,15),40,103,49,56,49,49,32,105,109,112,49,56,50,48,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,15),40,103,49,56,51,50,32,105,109,112,49,56,52,49,41,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,56,49,32,103,49,56,57,51,49,56,57,57,41};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,56,53,53,32,103,49,56,54,55,49,56,55,51,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,51,53,32,103,49,57,52,55,49,57,53,51,41};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,57,48,57,32,103,49,57,50,49,49,57,50,55,41};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,51,49,32,103,49,56,51,56,49,56,52,52,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,49,48,32,103,49,56,49,55,49,56,50,53,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,89),40,97,55,49,52,48,32,110,97,109,101,49,55,56,50,49,55,56,51,49,55,57,50,32,102,111,114,109,49,55,56,52,49,55,56,53,49,55,57,51,32,118,115,118,49,55,56,54,49,55,56,55,49,55,57,52,32,118,115,115,49,55,56,56,49,55,56,57,49,55,57,53,32,118,115,105,49,55,57,48,49,55,57,49,49,55,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,16),40,103,49,55,55,50,32,115,112,101,99,49,55,56,49,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,55,49,32,103,49,55,55,56,49,57,55,52,41,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,97),40,35,35,115,121,115,35,101,120,112,97,110,100,45,105,109,112,111,114,116,32,120,49,52,49,49,32,114,49,52,49,50,32,99,49,52,49,51,32,105,109,112,111,114,116,45,101,110,118,49,52,49,52,32,109,97,99,114,111,45,101,110,118,49,52,49,53,32,109,101,116,97,63,49,52,49,54,32,114,101,101,120,112,63,49,52,49,55,32,108,111,99,49,52,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,109,111,100,117,108,101,45,114,101,110,97,109,101,32,115,121,109,49,57,56,54,32,112,114,101,102,105,120,49,57,56,55,41};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,15),40,103,50,48,48,53,32,109,111,100,50,48,48,55,41,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,17),40,109,114,101,110,97,109,101,32,115,121,109,49,57,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,13),40,103,50,48,51,51,32,97,50,48,51,53,41,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,97,108,105,97,115,45,103,108,111,98,97,108,45,104,111,111,107,32,115,121,109,49,57,56,57,32,97,115,115,105,103,110,49,57,57,48,32,119,104,101,114,101,49,57,57,49,41,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,105,110,116,101,114,102,97,99,101,32,110,97,109,101,50,48,52,57,32,101,120,112,115,50,48,53,48,41,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,14),40,101,114,114,32,97,114,103,115,50,48,54,53,41,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,16),40,105,102,97,99,101,32,110,97,109,101,50,48,54,54,41};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,50,32,108,115,116,50,48,56,55,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,120,112,115,50,48,55,53,41,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,118,97,108,105,100,97,116,101,45,101,120,112,111,114,116,115,32,101,120,112,115,50,48,53,55,32,108,111,99,50,48,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,62),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,102,117,110,99,116,111,114,32,110,97,109,101,50,48,57,55,32,102,97,114,103,115,50,48,57,56,32,102,101,120,112,115,50,48,57,57,32,98,111,100,121,50,49,48,48,41,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,14),40,101,114,114,32,97,114,103,115,50,49,49,54,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,49,50,54,32,103,50,49,51,56,50,49,52,52,41};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,6),40,109,101,114,114,41,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,50,32,102,97,115,50,49,53,56,41,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,97,115,50,49,53,49,32,102,97,115,50,49,53,50,41,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,55),40,35,35,115,121,115,35,105,110,115,116,97,110,116,105,97,116,101,45,102,117,110,99,116,111,114,32,110,97,109,101,50,49,48,55,32,102,110,97,109,101,50,49,48,56,32,97,114,103,115,50,49,48,57,41,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,15),40,103,50,49,56,55,32,101,120,112,50,49,57,54,41,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,50,50,48,56,32,103,50,50,50,48,50,50,50,55,41};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,56,54,32,103,50,49,57,51,50,50,48,50,41,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,78),40,35,35,115,121,115,35,109,97,116,99,104,45,102,117,110,99,116,111,114,45,97,114,103,117,109,101,110,116,32,97,108,105,97,115,50,49,55,55,32,110,97,109,101,50,49,55,56,32,109,110,97,109,101,50,49,55,57,32,101,120,112,115,50,49,56,48,32,102,110,97,109,101,50,49,56,49,41,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,44),40,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,109,110,97,109,101,50,50,52,52,32,46,32,116,109,112,50,50,52,51,50,50,52,53,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word *av) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word *av) C_noret;
C_noret_decl(f_6056)
static void C_ccall f_6056(C_word c,C_word *av) C_noret;
C_noret_decl(f_6050)
static void C_ccall f_6050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3741)
static void C_ccall f_3741(C_word c,C_word *av) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word *av) C_noret;
C_noret_decl(f_6044)
static void C_ccall f_6044(C_word c,C_word *av) C_noret;
C_noret_decl(f_5125)
static void C_ccall f_5125(C_word c,C_word *av) C_noret;
C_noret_decl(f_6047)
static void C_ccall f_6047(C_word c,C_word *av) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word *av) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word *av) C_noret;
C_noret_decl(f_3750)
static void C_ccall f_3750(C_word c,C_word *av) C_noret;
C_noret_decl(f_5373)
static void C_fcall f_5373(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6073)
static void C_ccall f_6073(C_word c,C_word *av) C_noret;
C_noret_decl(f_5153)
static void C_ccall f_5153(C_word c,C_word *av) C_noret;
C_noret_decl(f_6077)
static void C_ccall f_6077(C_word c,C_word *av) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word *av) C_noret;
C_noret_decl(f_5159)
static void C_ccall f_5159(C_word c,C_word *av) C_noret;
C_noret_decl(f_5738)
static void C_ccall f_5738(C_word c,C_word *av) C_noret;
C_noret_decl(f_6063)
static void C_ccall f_6063(C_word c,C_word *av) C_noret;
C_noret_decl(f_5140)
static void C_ccall f_5140(C_word c,C_word *av) C_noret;
C_noret_decl(f_6066)
static void C_ccall f_6066(C_word c,C_word *av) C_noret;
C_noret_decl(f_6069)
static void C_ccall f_6069(C_word c,C_word *av) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word *av) C_noret;
C_noret_decl(f_6060)
static void C_ccall f_6060(C_word c,C_word *av) C_noret;
C_noret_decl(f_8119)
static void C_ccall f_8119(C_word c,C_word *av) C_noret;
C_noret_decl(f_4841)
static void C_fcall f_4841(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word *av) C_noret;
C_noret_decl(f_8115)
static void C_ccall f_8115(C_word c,C_word *av) C_noret;
C_noret_decl(f_6015)
static void C_ccall f_6015(C_word c,C_word *av) C_noret;
C_noret_decl(f_4837)
static void C_ccall f_4837(C_word c,C_word *av) C_noret;
C_noret_decl(f_4831)
static void C_ccall f_4831(C_word c,C_word *av) C_noret;
C_noret_decl(f_3534)
static C_word C_fcall f_3534(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word *av) C_noret;
C_noret_decl(f_4867)
static void C_fcall f_4867(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3793)
static void C_ccall f_3793(C_word c,C_word *av) C_noret;
C_noret_decl(f_6038)
static void C_ccall f_6038(C_word c,C_word *av) C_noret;
C_noret_decl(f_5332)
static void C_ccall f_5332(C_word c,C_word *av) C_noret;
C_noret_decl(f_6035)
static void C_ccall f_6035(C_word c,C_word *av) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797(C_word c,C_word *av) C_noret;
C_noret_decl(f_4075)
static void C_fcall f_4075(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6032)
static void C_ccall f_6032(C_word c,C_word *av) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word *av) C_noret;
C_noret_decl(f_4853)
static void C_ccall f_4853(C_word c,C_word *av) C_noret;
C_noret_decl(f_7972)
static void C_ccall f_7972(C_word c,C_word *av) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word *av) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word *av) C_noret;
C_noret_decl(f_6025)
static void C_ccall f_6025(C_word c,C_word *av) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word *av) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3562)
static void C_ccall f_3562(C_word c,C_word *av) C_noret;
C_noret_decl(f_8313)
static void C_ccall f_8313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3568)
static void C_fcall f_3568(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7704)
static void C_fcall f_7704(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8322)
static void C_fcall f_8322(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7997)
static void C_fcall f_7997(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6690)
static void C_fcall f_6690(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7900)
static void C_fcall f_7900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8374)
static void C_ccall f_8374(C_word c,C_word *av) C_noret;
C_noret_decl(f_4630)
static void C_fcall f_4630(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word *av) C_noret;
C_noret_decl(f_8194)
static void C_ccall f_8194(C_word c,C_word *av) C_noret;
C_noret_decl(f_8190)
static void C_ccall f_8190(C_word c,C_word *av) C_noret;
C_noret_decl(f_8353)
static void C_ccall f_8353(C_word c,C_word *av) C_noret;
C_noret_decl(f_8359)
static void C_ccall f_8359(C_word c,C_word *av) C_noret;
C_noret_decl(f_8356)
static void C_ccall f_8356(C_word c,C_word *av) C_noret;
C_noret_decl(f_4655)
static void C_ccall f_4655(C_word c,C_word *av) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word *av) C_noret;
C_noret_decl(f_8350)
static void C_ccall f_8350(C_word c,C_word *av) C_noret;
C_noret_decl(f_6955)
static void C_ccall f_6955(C_word c,C_word *av) C_noret;
C_noret_decl(f_6958)
static void C_ccall f_6958(C_word c,C_word *av) C_noret;
C_noret_decl(f_8167)
static void C_ccall f_8167(C_word c,C_word *av) C_noret;
C_noret_decl(f_8362)
static void C_ccall f_8362(C_word c,C_word *av) C_noret;
C_noret_decl(f_8365)
static void C_ccall f_8365(C_word c,C_word *av) C_noret;
C_noret_decl(f_8367)
static void C_ccall f_8367(C_word c,C_word *av) C_noret;
C_noret_decl(f_7537)
static void C_ccall f_7537(C_word c,C_word *av) C_noret;
C_noret_decl(f_8178)
static void C_ccall f_8178(C_word c,C_word *av) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word *av) C_noret;
C_noret_decl(f_8347)
static void C_ccall f_8347(C_word c,C_word *av) C_noret;
C_noret_decl(f_7558)
static void C_ccall f_7558(C_word c,C_word *av) C_noret;
C_noret_decl(f_6453)
static void C_fcall f_6453(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word *av) C_noret;
C_noret_decl(f_4698)
static void C_ccall f_4698(C_word c,C_word *av) C_noret;
C_noret_decl(f_7306)
static void C_ccall f_7306(C_word c,C_word *av) C_noret;
C_noret_decl(f_6625)
static void C_ccall f_6625(C_word c,C_word *av) C_noret;
C_noret_decl(f_6487)
static void C_fcall f_6487(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5710)
static void C_ccall f_5710(C_word c,C_word *av) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714(C_word c,C_word *av) C_noret;
C_noret_decl(f_5718)
static void C_ccall f_5718(C_word c,C_word *av) C_noret;
C_noret_decl(f_6613)
static void C_fcall f_6613(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8130)
static void C_ccall f_8130(C_word c,C_word *av) C_noret;
C_noret_decl(f_4821)
static void C_ccall f_4821(C_word c,C_word *av) C_noret;
C_noret_decl(f_7980)
static void C_fcall f_7980(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7987)
static void C_ccall f_7987(C_word c,C_word *av) C_noret;
C_noret_decl(f_7326)
static void C_fcall f_7326(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7324)
static void C_ccall f_7324(C_word c,C_word *av) C_noret;
C_noret_decl(f_7317)
static void C_ccall f_7317(C_word c,C_word *av) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5728)
static void C_fcall f_5728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6413)
static void C_ccall f_6413(C_word c,C_word *av) C_noret;
C_noret_decl(f_7956)
static void C_ccall f_7956(C_word c,C_word *av) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word *av) C_noret;
C_noret_decl(f_7360)
static void C_fcall f_7360(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8332)
static void C_ccall f_8332(C_word c,C_word *av) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word *av) C_noret;
C_noret_decl(f_3325)
static void C_fcall f_3325(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word *av) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word *av) C_noret;
C_noret_decl(f_4490)
static void C_fcall f_4490(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6403)
static void C_fcall f_6403(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5343)
static void C_fcall f_5343(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5345)
static void C_fcall f_5345(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4448)
static void C_fcall f_4448(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5091)
static void C_ccall f_5091(C_word c,C_word *av) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word *av) C_noret;
C_noret_decl(f_7396)
static void C_ccall f_7396(C_word c,C_word *av) C_noret;
C_noret_decl(f_4604)
static void C_fcall f_4604(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word *av) C_noret;
C_noret_decl(f8886)
static void C_ccall f8886(C_word c,C_word *av) C_noret;
C_noret_decl(f8899)
static void C_ccall f8899(C_word c,C_word *av) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word *av) C_noret;
C_noret_decl(f_7135)
static void C_ccall f_7135(C_word c,C_word *av) C_noret;
C_noret_decl(f_7873)
static void C_fcall f_7873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7741)
static void C_ccall f_7741(C_word c,C_word *av) C_noret;
C_noret_decl(f_7743)
static void C_ccall f_7743(C_word c,C_word *av) C_noret;
C_noret_decl(f_7125)
static void C_ccall f_7125(C_word c,C_word *av) C_noret;
C_noret_decl(f_7128)
static void C_ccall f_7128(C_word c,C_word *av) C_noret;
C_noret_decl(f_7129)
static void C_fcall f_7129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7738)
static void C_ccall f_7738(C_word c,C_word *av) C_noret;
C_noret_decl(f_6666)
static void C_ccall f_6666(C_word c,C_word *av) C_noret;
C_noret_decl(f_7760)
static void C_fcall f_7760(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7141)
static void C_ccall f_7141(C_word c,C_word *av) C_noret;
C_noret_decl(f_7145)
static void C_ccall f_7145(C_word c,C_word *av) C_noret;
C_noret_decl(f_7754)
static void C_fcall f_7754(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7751)
static void C_ccall f_7751(C_word c,C_word *av) C_noret;
C_noret_decl(f_6654)
static void C_fcall f_6654(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6431)
static void C_fcall f_6431(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7914)
static void C_ccall f_7914(C_word c,C_word *av) C_noret;
C_noret_decl(f_7801)
static void C_fcall f_7801(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5617)
static void C_ccall f_5617(C_word c,C_word *av) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word *av) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word *av) C_noret;
C_noret_decl(f_7158)
static void C_fcall f_7158(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7157)
static void C_ccall f_7157(C_word c,C_word *av) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word *av) C_noret;
C_noret_decl(f_5823)
static void C_fcall f_5823(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6214)
static void C_fcall f_6214(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word *av) C_noret;
C_noret_decl(f_5902)
static void C_ccall f_5902(C_word c,C_word *av) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word *av) C_noret;
C_noret_decl(f_6234)
static void C_ccall f_6234(C_word c,C_word *av) C_noret;
C_noret_decl(f_4102)
static void C_fcall f_4102(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6866)
static void C_ccall f_6866(C_word c,C_word *av) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word *av) C_noret;
C_noret_decl(f_6261)
static void C_ccall f_6261(C_word c,C_word *av) C_noret;
C_noret_decl(f_3826)
static void C_fcall f_3826(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6257)
static void C_fcall f_6257(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word *av) C_noret;
C_noret_decl(f_6282)
static void C_fcall f_6282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word *av) C_noret;
C_noret_decl(f_5520)
static void C_fcall f_5520(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word *av) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524(C_word c,C_word *av) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word *av) C_noret;
C_noret_decl(f_4147)
static void C_fcall f_4147(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7196)
static void C_ccall f_7196(C_word c,C_word *av) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word *av) C_noret;
C_noret_decl(f_5519)
static void C_ccall f_5519(C_word c,C_word *av) C_noret;
C_noret_decl(f_4139)
static void C_fcall f_4139(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f8860)
static void C_ccall f8860(C_word c,C_word *av) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word *av) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word *av) C_noret;
C_noret_decl(f_5258)
static void C_fcall f_5258(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word *av) C_noret;
C_noret_decl(f_3601)
static void C_ccall f_3601(C_word c,C_word *av) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word *av) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word *av) C_noret;
C_noret_decl(f_5482)
static void C_ccall f_5482(C_word c,C_word *av) C_noret;
C_noret_decl(f_4179)
static void C_fcall f_4179(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_5506)
static void C_ccall f_5506(C_word c,C_word *av) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word *av) C_noret;
C_noret_decl(f_6811)
static void C_fcall f_6811(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5439)
static void C_ccall f_5439(C_word c,C_word *av) C_noret;
C_noret_decl(f_5292)
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5469)
static void C_ccall f_5469(C_word c,C_word *av) C_noret;
C_noret_decl(f_4197)
static void C_ccall f_4197(C_word c,C_word *av) C_noret;
C_noret_decl(f_3463)
static void C_ccall f_3463(C_word c,C_word *av) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word *av) C_noret;
C_noret_decl(f_5490)
static void C_ccall f_5490(C_word c,C_word *av) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word *av) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word *av) C_noret;
C_noret_decl(f_5665)
static void C_fcall f_5665(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5664)
static void C_ccall f_5664(C_word c,C_word *av) C_noret;
C_noret_decl(f_5661)
static void C_ccall f_5661(C_word c,C_word *av) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word *av) C_noret;
C_noret_decl(f_3469)
static void C_fcall f_3469(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5658)
static void C_ccall f_5658(C_word c,C_word *av) C_noret;
C_noret_decl(f_5652)
static void C_ccall f_5652(C_word c,C_word *av) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word *av) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word *av) C_noret;
C_noret_decl(f_5473)
static void C_ccall f_5473(C_word c,C_word *av) C_noret;
C_noret_decl(f_5479)
static void C_ccall f_5479(C_word c,C_word *av) C_noret;
C_noret_decl(f_5645)
static void C_ccall f_5645(C_word c,C_word *av) C_noret;
C_noret_decl(f_3491)
static void C_fcall f_3491(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7859)
static void C_ccall f_7859(C_word c,C_word *av) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word *av) C_noret;
C_noret_decl(f_7833)
static void C_ccall f_7833(C_word c,C_word *av) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word *av) C_noret;
C_noret_decl(f_5953)
static void C_ccall f_5953(C_word c,C_word *av) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word *av) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word *av) C_noret;
C_noret_decl(f_5955)
static void C_fcall f_5955(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word *av) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3295)
static void C_ccall f_3295(C_word c,C_word *av) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word *av) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word *av) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word *av) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word *av) C_noret;
C_noret_decl(f_5858)
static void C_ccall f_5858(C_word c,C_word *av) C_noret;
C_noret_decl(f_5854)
static void C_fcall f_5854(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word *av) C_noret;
C_noret_decl(f_3260)
static void C_ccall f_3260(C_word c,C_word *av) C_noret;
C_noret_decl(f_3238)
static void C_ccall f_3238(C_word c,C_word *av) C_noret;
C_noret_decl(f_5977)
static void C_ccall f_5977(C_word c,C_word *av) C_noret;
C_noret_decl(f_3937)
static void C_fcall f_3937(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3288)
static void C_ccall f_3288(C_word c,C_word *av) C_noret;
C_noret_decl(f_5410)
static void C_ccall f_5410(C_word c,C_word *av) C_noret;
C_noret_decl(f_5968)
static void C_ccall f_5968(C_word c,C_word *av) C_noret;
C_noret_decl(f_5026)
static void C_ccall f_5026(C_word c,C_word *av) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word *av) C_noret;
C_noret_decl(f_6153)
static void C_ccall f_6153(C_word c,C_word *av) C_noret;
C_noret_decl(f_6159)
static void C_ccall f_6159(C_word c,C_word *av) C_noret;
C_noret_decl(f_6156)
static void C_ccall f_6156(C_word c,C_word *av) C_noret;
C_noret_decl(f_6150)
static void C_ccall f_6150(C_word c,C_word *av) C_noret;
C_noret_decl(f_7464)
static void C_fcall f_7464(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5011)
static void C_ccall f_5011(C_word c,C_word *av) C_noret;
C_noret_decl(f_5990)
static void C_fcall f_5990(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3402)
static void C_ccall f_3402(C_word c,C_word *av) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word *av) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word *av) C_noret;
C_noret_decl(f_6147)
static void C_ccall f_6147(C_word c,C_word *av) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word *av) C_noret;
C_noret_decl(f_5001)
static void C_fcall f_5001(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5539)
static void C_fcall f_5539(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5898)
static void C_ccall f_5898(C_word c,C_word *av) C_noret;
C_noret_decl(f_6174)
static void C_ccall f_6174(C_word c,C_word *av) C_noret;
C_noret_decl(f_6177)
static void C_ccall f_6177(C_word c,C_word *av) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word *av) C_noret;
C_noret_decl(C_modules_toplevel)
C_externexport void C_ccall C_modules_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word *av) C_noret;
C_noret_decl(f_5882)
static void C_fcall f_5882(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word *av) C_noret;
C_noret_decl(f_5066)
static void C_fcall f_5066(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7670)
static void C_ccall f_7670(C_word c,C_word *av) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word *av) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word *av) C_noret;
C_noret_decl(f_5870)
static void C_fcall f_5870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6118)
static void C_ccall f_6118(C_word c,C_word *av) C_noret;
C_noret_decl(f_6112)
static void C_ccall f_6112(C_word c,C_word *av) C_noret;
C_noret_decl(f_7421)
static void C_ccall f_7421(C_word c,C_word *av) C_noret;
C_noret_decl(f_5057)
static void C_ccall f_5057(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word *av) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word *av) C_noret;
C_noret_decl(f_7428)
static void C_ccall f_7428(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word *av) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word *av) C_noret;
C_noret_decl(f_5571)
static void C_ccall f_5571(C_word c,C_word *av) C_noret;
C_noret_decl(f_6138)
static void C_ccall f_6138(C_word c,C_word *av) C_noret;
C_noret_decl(f_5572)
static void C_fcall f_5572(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6134)
static void C_ccall f_6134(C_word c,C_word *av) C_noret;
C_noret_decl(f_7077)
static void C_ccall f_7077(C_word c,C_word *av) C_noret;
C_noret_decl(f_3833)
static void C_fcall f_3833(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word *av) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word *av) C_noret;
C_noret_decl(f_6788)
static void C_fcall f_6788(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f8914)
static void C_ccall f8914(C_word c,C_word *av) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word *av) C_noret;
C_noret_decl(f_7407)
static void C_ccall f_7407(C_word c,C_word *av) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word *av) C_noret;
C_noret_decl(f_5032)
static void C_fcall f_5032(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7052)
static void C_fcall f_7052(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word *av) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word *av) C_noret;
C_noret_decl(f_6129)
static void C_ccall f_6129(C_word c,C_word *av) C_noret;
C_noret_decl(f_6850)
static void C_fcall f_6850(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6123)
static void C_ccall f_6123(C_word c,C_word *av) C_noret;
C_noret_decl(f_6775)
static void C_ccall f_6775(C_word c,C_word *av) C_noret;
C_noret_decl(f_4755)
static void C_ccall f_4755(C_word c,C_word *av) C_noret;
C_noret_decl(f_3652)
static void C_ccall f_3652(C_word c,C_word *av) C_noret;
C_noret_decl(f_7651)
static void C_ccall f_7651(C_word c,C_word *av) C_noret;
C_noret_decl(f_7043)
static void C_ccall f_7043(C_word c,C_word *av) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word *av) C_noret;
C_noret_decl(f_5594)
static void C_ccall f_5594(C_word c,C_word *av) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word *av) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word *av) C_noret;
C_noret_decl(f_7623)
static void C_ccall f_7623(C_word c,C_word *av) C_noret;
C_noret_decl(f_5549)
static void C_ccall f_5549(C_word c,C_word *av) C_noret;
C_noret_decl(f_7644)
static void C_fcall f_7644(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7640)
static void C_ccall f_7640(C_word c,C_word *av) C_noret;
C_noret_decl(f_7636)
static void C_fcall f_7636(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6798)
static void C_ccall f_6798(C_word c,C_word *av) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word *av) C_noret;
C_noret_decl(f_7615)
static void C_ccall f_7615(C_word c,C_word *av) C_noret;
C_noret_decl(f_7633)
static void C_ccall f_7633(C_word c,C_word *av) C_noret;
C_noret_decl(f_7602)
static void C_ccall f_7602(C_word c,C_word *av) C_noret;
C_noret_decl(f_7016)
static void C_ccall f_7016(C_word c,C_word *av) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word *av) C_noret;
C_noret_decl(f_7006)
static void C_ccall f_7006(C_word c,C_word *av) C_noret;
C_noret_decl(f_8241)
static void C_ccall f_8241(C_word c,C_word *av) C_noret;
C_noret_decl(f_5234)
static void C_fcall f_5234(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7018)
static void C_fcall f_7018(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8254)
static void C_ccall f_8254(C_word c,C_word *av) C_noret;
C_noret_decl(f_8258)
static void C_ccall f_8258(C_word c,C_word *av) C_noret;
C_noret_decl(f_5584)
static void C_fcall f_5584(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word *av) C_noret;
C_noret_decl(f_5229)
static void C_ccall f_5229(C_word c,C_word *av) C_noret;
C_noret_decl(f_8262)
static void C_ccall f_8262(C_word c,C_word *av) C_noret;
C_noret_decl(f_7430)
static void C_fcall f_7430(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8266)
static void C_ccall f_8266(C_word c,C_word *av) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word *av) C_noret;
C_noret_decl(f_4579)
static void C_fcall f_4579(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word *av) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word *av) C_noret;
C_noret_decl(f_8201)
static void C_fcall f_8201(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7203)
static void C_fcall f_7203(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7202)
static void C_ccall f_7202(C_word c,C_word *av) C_noret;
C_noret_decl(f_6728)
static void C_ccall f_6728(C_word c,C_word *av) C_noret;
C_noret_decl(f_7239)
static void C_ccall f_7239(C_word c,C_word *av) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word *av) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word *av) C_noret;
C_noret_decl(f_6562)
static void C_fcall f_6562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8214)
static void C_fcall f_8214(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6715)
static void C_ccall f_6715(C_word c,C_word *av) C_noret;
C_noret_decl(f_6595)
static void C_ccall f_6595(C_word c,C_word *av) C_noret;
C_noret_decl(f_6585)
static void C_fcall f_6585(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3973)
static void C_fcall f_3973(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5451)
static void C_ccall f_5451(C_word c,C_word *av) C_noret;
C_noret_decl(f_5455)
static void C_fcall f_5455(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5454)
static void C_ccall f_5454(C_word c,C_word *av) C_noret;
C_noret_decl(f_7248)
static void C_fcall f_7248(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7245)
static void C_ccall f_7245(C_word c,C_word *av) C_noret;
C_noret_decl(f_7279)
static void C_ccall f_7279(C_word c,C_word *av) C_noret;
C_noret_decl(f_6525)
static void C_ccall f_6525(C_word c,C_word *av) C_noret;
C_noret_decl(f_6528)
static void C_ccall f_6528(C_word c,C_word *av) C_noret;
C_noret_decl(f_7270)
static void C_ccall f_7270(C_word c,C_word *av) C_noret;
C_noret_decl(f_7273)
static void C_ccall f_7273(C_word c,C_word *av) C_noret;
C_noret_decl(f_8019)
static void C_ccall f_8019(C_word c,C_word *av) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word *av) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word *av) C_noret;
C_noret_decl(f_8021)
static void C_fcall f_8021(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7258)
static void C_ccall f_7258(C_word c,C_word *av) C_noret;
C_noret_decl(f_7251)
static void C_ccall f_7251(C_word c,C_word *av) C_noret;
C_noret_decl(f_7289)
static void C_ccall f_7289(C_word c,C_word *av) C_noret;
C_noret_decl(f_8288)
static void C_fcall f_8288(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8286)
static void C_ccall f_8286(C_word c,C_word *av) C_noret;
C_noret_decl(f_8280)
static void C_ccall f_8280(C_word c,C_word *av) C_noret;
C_noret_decl(f_7282)
static void C_ccall f_7282(C_word c,C_word *av) C_noret;
C_noret_decl(f_4515)
static void C_ccall f_4515(C_word c,C_word *av) C_noret;
C_noret_decl(f_4331)
static void C_fcall f_4331(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4335)
static void C_ccall f_4335(C_word c,C_word *av) C_noret;
C_noret_decl(f_4339)
static void C_fcall f_4339(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word *av) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word *av) C_noret;
C_noret_decl(f_7266)
static void C_ccall f_7266(C_word c,C_word *av) C_noret;
C_noret_decl(f_6512)
static void C_ccall f_6512(C_word c,C_word *av) C_noret;
C_noret_decl(f_7262)
static void C_ccall f_7262(C_word c,C_word *av) C_noret;
C_noret_decl(f_7299)
static void C_ccall f_7299(C_word c,C_word *av) C_noret;
C_noret_decl(f_6195)
static void C_ccall f_6195(C_word c,C_word *av) C_noret;
C_noret_decl(f_6193)
static void C_ccall f_6193(C_word c,C_word *av) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word *av) C_noret;
C_noret_decl(f_8081)
static void C_fcall f_8081(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word *av) C_noret;
C_noret_decl(f_4375)
static void C_fcall f_4375(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6187)
static void C_ccall f_6187(C_word c,C_word *av) C_noret;
C_noret_decl(f_6184)
static void C_ccall f_6184(C_word c,C_word *av) C_noret;
C_noret_decl(f_7090)
static void C_ccall f_7090(C_word c,C_word *av) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181(C_word c,C_word *av) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word *av) C_noret;
C_noret_decl(f_8093)
static void C_fcall f_8093(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4391)
static void C_fcall f_4391(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6748)
static void C_fcall f_6748(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8060)
static void C_ccall f_8060(C_word c,C_word *av) C_noret;
C_noret_decl(f_6736)
static void C_fcall f_6736(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6731)
static void C_ccall f_6731(C_word c,C_word *av) C_noret;
C_noret_decl(f_6537)
static void C_ccall f_6537(C_word c,C_word *av) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word *av) C_noret;
C_noret_decl(f_4347)
static void C_ccall f_4347(C_word c,C_word *av) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word *av) C_noret;
C_noret_decl(f_6769)
static void C_ccall f_6769(C_word c,C_word *av) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166(C_word c,C_word *av) C_noret;
C_noret_decl(f_6756)
static void C_fcall f_6756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6554)
static void C_fcall f_6554(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5196)
static void C_ccall f_5196(C_word c,C_word *av) C_noret;
C_noret_decl(f_5192)
static void C_ccall f_5192(C_word c,C_word *av) C_noret;
C_noret_decl(f_6542)
static void C_fcall f_6542(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word *av) C_noret;
C_noret_decl(f_7573)
static void C_ccall f_7573(C_word c,C_word *av) C_noret;
C_noret_decl(f_6310)
static void C_fcall f_6310(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8394)
static void C_ccall f_8394(C_word c,C_word *av) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word *av) C_noret;
C_noret_decl(f_6301)
static void C_fcall f_6301(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word *av) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word *av) C_noret;
C_noret_decl(f_7590)
static void C_ccall f_7590(C_word c,C_word *av) C_noret;
C_noret_decl(f_7592)
static void C_fcall f_7592(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6317)
static void C_ccall f_6317(C_word c,C_word *av) C_noret;
C_noret_decl(f_3714)
static void C_ccall f_3714(C_word c,C_word *av) C_noret;
C_noret_decl(f_3718)
static void C_ccall f_3718(C_word c,C_word *av) C_noret;
C_noret_decl(f_6321)
static void C_ccall f_6321(C_word c,C_word *av) C_noret;
C_noret_decl(f_5100)
static void C_fcall f_5100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6338)
static void C_ccall f_6338(C_word c,C_word *av) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word *av) C_noret;
C_noret_decl(f_4256)
static void C_fcall f_4256(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6325)
static void C_ccall f_6325(C_word c,C_word *av) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word *av) C_noret;
C_noret_decl(f_6977)
static void C_ccall f_6977(C_word c,C_word *av) C_noret;
C_noret_decl(f_6971)
static void C_ccall f_6971(C_word c,C_word *av) C_noret;
C_noret_decl(f_6355)
static void C_ccall f_6355(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word *av) C_noret;
C_noret_decl(f_4271)
static void C_fcall f_4271(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word *av) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word *av) C_noret;
C_noret_decl(f_6963)
static void C_ccall f_6963(C_word c,C_word *av) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word *av) C_noret;
C_noret_decl(f_7504)
static void C_fcall f_7504(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6348)
static void C_ccall f_6348(C_word c,C_word *av) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word *av) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word *av) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word *av) C_noret;
C_noret_decl(f_6372)
static void C_fcall f_6372(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6390)
static void C_ccall f_6390(C_word c,C_word *av) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word *av) C_noret;
C_noret_decl(f_4052)
static void C_fcall f_4052(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word *av) C_noret;
C_noret_decl(f_3526)
static C_word C_fcall f_3526(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6985)
static void C_ccall f_6985(C_word c,C_word *av) C_noret;
C_noret_decl(f_7527)
static void C_fcall f_7527(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6981)
static void C_ccall f_6981(C_word c,C_word *av) C_noret;
C_noret_decl(f_6367)
static void C_ccall f_6367(C_word c,C_word *av) C_noret;
C_noret_decl(f_6380)
static void C_fcall f_6380(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4900)
static void C_ccall f_4900(C_word c,C_word *av) C_noret;
C_noret_decl(f_4901)
static void C_fcall f_4901(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7514)
static void C_ccall f_7514(C_word c,C_word *av) C_noret;
C_noret_decl(f_6097)
static void C_ccall f_6097(C_word c,C_word *av) C_noret;
C_noret_decl(f_6094)
static void C_ccall f_6094(C_word c,C_word *av) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word *av) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word *av) C_noret;
C_noret_decl(f_3373)
static void C_fcall f_3373(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926(C_word c,C_word *av) C_noret;
C_noret_decl(f_6088)
static void C_ccall f_6088(C_word c,C_word *av) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word *av) C_noret;
C_noret_decl(f_6081)
static void C_ccall f_6081(C_word c,C_word *av) C_noret;
C_noret_decl(f_4913)
static void C_ccall f_4913(C_word c,C_word *av) C_noret;
C_noret_decl(f_5796)
static void C_fcall f_5796(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word *av) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word *av) C_noret;
C_noret_decl(f_5784)
static void C_ccall f_5784(C_word c,C_word *av) C_noret;
C_noret_decl(f_3365)
static void C_fcall f_3365(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4965)
static void C_ccall f_4965(C_word c,C_word *av) C_noret;
C_noret_decl(f_6919)
static void C_ccall f_6919(C_word c,C_word *av) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word *av) C_noret;
C_noret_decl(f_4955)
static void C_fcall f_4955(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6903)
static void C_fcall f_6903(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5759)
static void C_fcall f_5759(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word *av) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word *av) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word *av) C_noret;
C_noret_decl(f_4978)
static void C_fcall f_4978(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word *av) C_noret;

C_noret_decl(trf_5373)
static void C_ccall trf_5373(C_word c,C_word *av) C_noret;
static void C_ccall trf_5373(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5373(t0,t1);}

C_noret_decl(trf_4841)
static void C_ccall trf_4841(C_word c,C_word *av) C_noret;
static void C_ccall trf_4841(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4841(t0,t1,t2);}

C_noret_decl(trf_4867)
static void C_ccall trf_4867(C_word c,C_word *av) C_noret;
static void C_ccall trf_4867(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4867(t0,t1,t2);}

C_noret_decl(trf_4075)
static void C_ccall trf_4075(C_word c,C_word *av) C_noret;
static void C_ccall trf_4075(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4075(t0,t1,t2);}

C_noret_decl(trf_3568)
static void C_ccall trf_3568(C_word c,C_word *av) C_noret;
static void C_ccall trf_3568(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3568(t0,t1,t2);}

C_noret_decl(trf_7704)
static void C_ccall trf_7704(C_word c,C_word *av) C_noret;
static void C_ccall trf_7704(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7704(t0,t1,t2);}

C_noret_decl(trf_8322)
static void C_ccall trf_8322(C_word c,C_word *av) C_noret;
static void C_ccall trf_8322(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8322(t0,t1,t2);}

C_noret_decl(trf_7997)
static void C_ccall trf_7997(C_word c,C_word *av) C_noret;
static void C_ccall trf_7997(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7997(t0,t1);}

C_noret_decl(trf_6690)
static void C_ccall trf_6690(C_word c,C_word *av) C_noret;
static void C_ccall trf_6690(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6690(t0,t1,t2);}

C_noret_decl(trf_7900)
static void C_ccall trf_7900(C_word c,C_word *av) C_noret;
static void C_ccall trf_7900(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7900(t0,t1,t2);}

C_noret_decl(trf_4630)
static void C_ccall trf_4630(C_word c,C_word *av) C_noret;
static void C_ccall trf_4630(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4630(t0,t1,t2);}

C_noret_decl(trf_6453)
static void C_ccall trf_6453(C_word c,C_word *av) C_noret;
static void C_ccall trf_6453(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6453(t0,t1,t2);}

C_noret_decl(trf_6487)
static void C_ccall trf_6487(C_word c,C_word *av) C_noret;
static void C_ccall trf_6487(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6487(t0,t1,t2);}

C_noret_decl(trf_6613)
static void C_ccall trf_6613(C_word c,C_word *av) C_noret;
static void C_ccall trf_6613(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6613(t0,t1,t2);}

C_noret_decl(trf_7980)
static void C_ccall trf_7980(C_word c,C_word *av) C_noret;
static void C_ccall trf_7980(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7980(t0,t1,t2);}

C_noret_decl(trf_7326)
static void C_ccall trf_7326(C_word c,C_word *av) C_noret;
static void C_ccall trf_7326(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7326(t0,t1,t2);}

C_noret_decl(trf_5728)
static void C_ccall trf_5728(C_word c,C_word *av) C_noret;
static void C_ccall trf_5728(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5728(t0,t1,t2);}

C_noret_decl(trf_7360)
static void C_ccall trf_7360(C_word c,C_word *av) C_noret;
static void C_ccall trf_7360(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7360(t0,t1,t2);}

C_noret_decl(trf_3325)
static void C_ccall trf_3325(C_word c,C_word *av) C_noret;
static void C_ccall trf_3325(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3325(t0,t1,t2);}

C_noret_decl(trf_4490)
static void C_ccall trf_4490(C_word c,C_word *av) C_noret;
static void C_ccall trf_4490(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4490(t0,t1,t2);}

C_noret_decl(trf_6403)
static void C_ccall trf_6403(C_word c,C_word *av) C_noret;
static void C_ccall trf_6403(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6403(t0,t1,t2);}

C_noret_decl(trf_5343)
static void C_ccall trf_5343(C_word c,C_word *av) C_noret;
static void C_ccall trf_5343(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5343(t0,t1);}

C_noret_decl(trf_5345)
static void C_ccall trf_5345(C_word c,C_word *av) C_noret;
static void C_ccall trf_5345(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5345(t0,t1,t2);}

C_noret_decl(trf_4448)
static void C_ccall trf_4448(C_word c,C_word *av) C_noret;
static void C_ccall trf_4448(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4448(t0,t1,t2);}

C_noret_decl(trf_4604)
static void C_ccall trf_4604(C_word c,C_word *av) C_noret;
static void C_ccall trf_4604(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4604(t0,t1);}

C_noret_decl(trf_7873)
static void C_ccall trf_7873(C_word c,C_word *av) C_noret;
static void C_ccall trf_7873(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7873(t0,t1);}

C_noret_decl(trf_7129)
static void C_ccall trf_7129(C_word c,C_word *av) C_noret;
static void C_ccall trf_7129(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7129(t0,t1,t2);}

C_noret_decl(trf_7760)
static void C_ccall trf_7760(C_word c,C_word *av) C_noret;
static void C_ccall trf_7760(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7760(t0,t1,t2);}

C_noret_decl(trf_7754)
static void C_ccall trf_7754(C_word c,C_word *av) C_noret;
static void C_ccall trf_7754(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7754(t0,t1,t2);}

C_noret_decl(trf_6654)
static void C_ccall trf_6654(C_word c,C_word *av) C_noret;
static void C_ccall trf_6654(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6654(t0,t1,t2);}

C_noret_decl(trf_6431)
static void C_ccall trf_6431(C_word c,C_word *av) C_noret;
static void C_ccall trf_6431(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6431(t0,t1,t2);}

C_noret_decl(trf_7801)
static void C_ccall trf_7801(C_word c,C_word *av) C_noret;
static void C_ccall trf_7801(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7801(t0,t1,t2);}

C_noret_decl(trf_7158)
static void C_ccall trf_7158(C_word c,C_word *av) C_noret;
static void C_ccall trf_7158(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7158(t0,t1,t2);}

C_noret_decl(trf_5823)
static void C_ccall trf_5823(C_word c,C_word *av) C_noret;
static void C_ccall trf_5823(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5823(t0,t1,t2);}

C_noret_decl(trf_6214)
static void C_ccall trf_6214(C_word c,C_word *av) C_noret;
static void C_ccall trf_6214(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6214(t0,t1,t2);}

C_noret_decl(trf_4102)
static void C_ccall trf_4102(C_word c,C_word *av) C_noret;
static void C_ccall trf_4102(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4102(t0,t1,t2);}

C_noret_decl(trf_3826)
static void C_ccall trf_3826(C_word c,C_word *av) C_noret;
static void C_ccall trf_3826(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3826(t0,t1,t2);}

C_noret_decl(trf_6257)
static void C_ccall trf_6257(C_word c,C_word *av) C_noret;
static void C_ccall trf_6257(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6257(t0,t1);}

C_noret_decl(trf_6282)
static void C_ccall trf_6282(C_word c,C_word *av) C_noret;
static void C_ccall trf_6282(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6282(t0,t1,t2);}

C_noret_decl(trf_5520)
static void C_ccall trf_5520(C_word c,C_word *av) C_noret;
static void C_ccall trf_5520(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5520(t0,t1,t2);}

C_noret_decl(trf_4147)
static void C_ccall trf_4147(C_word c,C_word *av) C_noret;
static void C_ccall trf_4147(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4147(t0,t1);}

C_noret_decl(trf_4139)
static void C_ccall trf_4139(C_word c,C_word *av) C_noret;
static void C_ccall trf_4139(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4139(t0,t1,t2);}

C_noret_decl(trf_5258)
static void C_ccall trf_5258(C_word c,C_word *av) C_noret;
static void C_ccall trf_5258(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5258(t0,t1,t2);}

C_noret_decl(trf_4179)
static void C_ccall trf_4179(C_word c,C_word *av) C_noret;
static void C_ccall trf_4179(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4179(t0,t1,t2);}

C_noret_decl(trf_6811)
static void C_ccall trf_6811(C_word c,C_word *av) C_noret;
static void C_ccall trf_6811(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6811(t0,t1,t2);}

C_noret_decl(trf_5292)
static void C_ccall trf_5292(C_word c,C_word *av) C_noret;
static void C_ccall trf_5292(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5292(t0,t1,t2);}

C_noret_decl(trf_5665)
static void C_ccall trf_5665(C_word c,C_word *av) C_noret;
static void C_ccall trf_5665(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5665(t0,t1,t2);}

C_noret_decl(trf_3469)
static void C_ccall trf_3469(C_word c,C_word *av) C_noret;
static void C_ccall trf_3469(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3469(t0,t1);}

C_noret_decl(trf_3491)
static void C_ccall trf_3491(C_word c,C_word *av) C_noret;
static void C_ccall trf_3491(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3491(t0,t1,t2);}

C_noret_decl(trf_5955)
static void C_ccall trf_5955(C_word c,C_word *av) C_noret;
static void C_ccall trf_5955(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5955(t0,t1,t2);}

C_noret_decl(trf_5854)
static void C_ccall trf_5854(C_word c,C_word *av) C_noret;
static void C_ccall trf_5854(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5854(t0,t1);}

C_noret_decl(trf_3937)
static void C_ccall trf_3937(C_word c,C_word *av) C_noret;
static void C_ccall trf_3937(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3937(t0,t1);}

C_noret_decl(trf_7464)
static void C_ccall trf_7464(C_word c,C_word *av) C_noret;
static void C_ccall trf_7464(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7464(t0,t1,t2);}

C_noret_decl(trf_5990)
static void C_ccall trf_5990(C_word c,C_word *av) C_noret;
static void C_ccall trf_5990(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5990(t0,t1,t2);}

C_noret_decl(trf_5001)
static void C_ccall trf_5001(C_word c,C_word *av) C_noret;
static void C_ccall trf_5001(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5001(t0,t1,t2);}

C_noret_decl(trf_5539)
static void C_ccall trf_5539(C_word c,C_word *av) C_noret;
static void C_ccall trf_5539(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5539(t0,t1,t2);}

C_noret_decl(trf_5882)
static void C_ccall trf_5882(C_word c,C_word *av) C_noret;
static void C_ccall trf_5882(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5882(t0,t1);}

C_noret_decl(trf_5066)
static void C_ccall trf_5066(C_word c,C_word *av) C_noret;
static void C_ccall trf_5066(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5066(t0,t1,t2);}

C_noret_decl(trf_5870)
static void C_ccall trf_5870(C_word c,C_word *av) C_noret;
static void C_ccall trf_5870(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5870(t0,t1);}

C_noret_decl(trf_5572)
static void C_ccall trf_5572(C_word c,C_word *av) C_noret;
static void C_ccall trf_5572(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5572(t0,t1,t2);}

C_noret_decl(trf_3833)
static void C_ccall trf_3833(C_word c,C_word *av) C_noret;
static void C_ccall trf_3833(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3833(t0,t1);}

C_noret_decl(trf_6788)
static void C_ccall trf_6788(C_word c,C_word *av) C_noret;
static void C_ccall trf_6788(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6788(t0,t1,t2);}

C_noret_decl(trf_5032)
static void C_ccall trf_5032(C_word c,C_word *av) C_noret;
static void C_ccall trf_5032(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5032(t0,t1,t2);}

C_noret_decl(trf_7052)
static void C_ccall trf_7052(C_word c,C_word *av) C_noret;
static void C_ccall trf_7052(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7052(t0,t1,t2);}

C_noret_decl(trf_6850)
static void C_ccall trf_6850(C_word c,C_word *av) C_noret;
static void C_ccall trf_6850(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6850(t0,t1,t2);}

C_noret_decl(trf_7644)
static void C_ccall trf_7644(C_word c,C_word *av) C_noret;
static void C_ccall trf_7644(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7644(t0,t1,t2);}

C_noret_decl(trf_7636)
static void C_ccall trf_7636(C_word c,C_word *av) C_noret;
static void C_ccall trf_7636(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7636(t0,t1,t2);}

C_noret_decl(trf_5234)
static void C_ccall trf_5234(C_word c,C_word *av) C_noret;
static void C_ccall trf_5234(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5234(t0,t1,t2);}

C_noret_decl(trf_7018)
static void C_ccall trf_7018(C_word c,C_word *av) C_noret;
static void C_ccall trf_7018(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7018(t0,t1,t2);}

C_noret_decl(trf_5584)
static void C_ccall trf_5584(C_word c,C_word *av) C_noret;
static void C_ccall trf_5584(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5584(t0,t1,t2);}

C_noret_decl(trf_7430)
static void C_ccall trf_7430(C_word c,C_word *av) C_noret;
static void C_ccall trf_7430(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7430(t0,t1,t2);}

C_noret_decl(trf_4579)
static void C_ccall trf_4579(C_word c,C_word *av) C_noret;
static void C_ccall trf_4579(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4579(t0,t1,t2);}

C_noret_decl(trf_8201)
static void C_ccall trf_8201(C_word c,C_word *av) C_noret;
static void C_ccall trf_8201(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8201(t0,t1,t2);}

C_noret_decl(trf_7203)
static void C_ccall trf_7203(C_word c,C_word *av) C_noret;
static void C_ccall trf_7203(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7203(t0,t1,t2);}

C_noret_decl(trf_6562)
static void C_ccall trf_6562(C_word c,C_word *av) C_noret;
static void C_ccall trf_6562(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6562(t0,t1,t2);}

C_noret_decl(trf_8214)
static void C_ccall trf_8214(C_word c,C_word *av) C_noret;
static void C_ccall trf_8214(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8214(t0,t1);}

C_noret_decl(trf_6585)
static void C_ccall trf_6585(C_word c,C_word *av) C_noret;
static void C_ccall trf_6585(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6585(t0,t1,t2);}

C_noret_decl(trf_3973)
static void C_ccall trf_3973(C_word c,C_word *av) C_noret;
static void C_ccall trf_3973(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3973(t0,t1,t2);}

C_noret_decl(trf_5455)
static void C_ccall trf_5455(C_word c,C_word *av) C_noret;
static void C_ccall trf_5455(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5455(t0,t1,t2);}

C_noret_decl(trf_7248)
static void C_ccall trf_7248(C_word c,C_word *av) C_noret;
static void C_ccall trf_7248(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7248(t0,t1);}

C_noret_decl(trf_8021)
static void C_ccall trf_8021(C_word c,C_word *av) C_noret;
static void C_ccall trf_8021(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8021(t0,t1,t2);}

C_noret_decl(trf_8288)
static void C_ccall trf_8288(C_word c,C_word *av) C_noret;
static void C_ccall trf_8288(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8288(t0,t1,t2);}

C_noret_decl(trf_4331)
static void C_ccall trf_4331(C_word c,C_word *av) C_noret;
static void C_ccall trf_4331(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4331(t0,t1);}

C_noret_decl(trf_4339)
static void C_ccall trf_4339(C_word c,C_word *av) C_noret;
static void C_ccall trf_4339(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4339(t0,t1);}

C_noret_decl(trf_8081)
static void C_ccall trf_8081(C_word c,C_word *av) C_noret;
static void C_ccall trf_8081(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8081(t0,t1,t2,t3);}

C_noret_decl(trf_4375)
static void C_ccall trf_4375(C_word c,C_word *av) C_noret;
static void C_ccall trf_4375(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4375(t0,t1);}

C_noret_decl(trf_8093)
static void C_ccall trf_8093(C_word c,C_word *av) C_noret;
static void C_ccall trf_8093(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8093(t0,t1,t2);}

C_noret_decl(trf_4391)
static void C_ccall trf_4391(C_word c,C_word *av) C_noret;
static void C_ccall trf_4391(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4391(t0,t1,t2);}

C_noret_decl(trf_6748)
static void C_ccall trf_6748(C_word c,C_word *av) C_noret;
static void C_ccall trf_6748(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6748(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6736)
static void C_ccall trf_6736(C_word c,C_word *av) C_noret;
static void C_ccall trf_6736(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6736(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6756)
static void C_ccall trf_6756(C_word c,C_word *av) C_noret;
static void C_ccall trf_6756(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6756(t0,t1,t2);}

C_noret_decl(trf_6554)
static void C_ccall trf_6554(C_word c,C_word *av) C_noret;
static void C_ccall trf_6554(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6554(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6542)
static void C_ccall trf_6542(C_word c,C_word *av) C_noret;
static void C_ccall trf_6542(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6542(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6310)
static void C_ccall trf_6310(C_word c,C_word *av) C_noret;
static void C_ccall trf_6310(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6310(t0,t1);}

C_noret_decl(trf_6301)
static void C_ccall trf_6301(C_word c,C_word *av) C_noret;
static void C_ccall trf_6301(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6301(t0,t1);}

C_noret_decl(trf_7592)
static void C_ccall trf_7592(C_word c,C_word *av) C_noret;
static void C_ccall trf_7592(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7592(t0,t1,t2);}

C_noret_decl(trf_5100)
static void C_ccall trf_5100(C_word c,C_word *av) C_noret;
static void C_ccall trf_5100(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5100(t0,t1,t2);}

C_noret_decl(trf_4256)
static void C_ccall trf_4256(C_word c,C_word *av) C_noret;
static void C_ccall trf_4256(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4256(t0,t1);}

C_noret_decl(trf_4271)
static void C_ccall trf_4271(C_word c,C_word *av) C_noret;
static void C_ccall trf_4271(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4271(t0,t1,t2);}

C_noret_decl(trf_7504)
static void C_ccall trf_7504(C_word c,C_word *av) C_noret;
static void C_ccall trf_7504(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7504(t0,t1,t2);}

C_noret_decl(trf_6372)
static void C_ccall trf_6372(C_word c,C_word *av) C_noret;
static void C_ccall trf_6372(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6372(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4052)
static void C_ccall trf_4052(C_word c,C_word *av) C_noret;
static void C_ccall trf_4052(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4052(t0,t1,t2,t3);}

C_noret_decl(trf_7527)
static void C_ccall trf_7527(C_word c,C_word *av) C_noret;
static void C_ccall trf_7527(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7527(t0,t1,t2);}

C_noret_decl(trf_6380)
static void C_ccall trf_6380(C_word c,C_word *av) C_noret;
static void C_ccall trf_6380(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6380(t0,t1,t2);}

C_noret_decl(trf_4901)
static void C_ccall trf_4901(C_word c,C_word *av) C_noret;
static void C_ccall trf_4901(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4901(t0,t1,t2);}

C_noret_decl(trf_3373)
static void C_ccall trf_3373(C_word c,C_word *av) C_noret;
static void C_ccall trf_3373(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3373(t0,t1,t2);}

C_noret_decl(trf_5796)
static void C_ccall trf_5796(C_word c,C_word *av) C_noret;
static void C_ccall trf_5796(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5796(t0,t1,t2);}

C_noret_decl(trf_3365)
static void C_ccall trf_3365(C_word c,C_word *av) C_noret;
static void C_ccall trf_3365(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3365(t0,t1,t2,t3);}

C_noret_decl(trf_4955)
static void C_ccall trf_4955(C_word c,C_word *av) C_noret;
static void C_ccall trf_4955(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4955(t0,t1,t2);}

C_noret_decl(trf_6903)
static void C_ccall trf_6903(C_word c,C_word *av) C_noret;
static void C_ccall trf_6903(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6903(t0,t1,t2);}

C_noret_decl(trf_5759)
static void C_ccall trf_5759(C_word c,C_word *av) C_noret;
static void C_ccall trf_5759(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5759(t0,t1,t2);}

C_noret_decl(trf_4978)
static void C_ccall trf_4978(C_word c,C_word *av) C_noret;
static void C_ccall trf_4978(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4978(t0,t1,t2);}

/* ##sys#register-syntax-export in k2972 in k2968 */
static void C_ccall f_3731(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3731,5,av);}
a=C_alloc(6);
if(C_truep(t3)){
t5=t3;
t6=C_i_check_structure_2(t5,lf[3],lf[10]);
t7=C_i_block_ref(t5,C_fix(2));
t8=C_eqp(C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3741,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t8;
f_3741(2,av2);}}
else{
/* modules.scm:211: ##sys#find-export */
t10=*((C_word*)lf[42]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6052 in k6048 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6054,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6056,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:569: current-module13381339 */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_6060(2,av2);}}}

/* k6048 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6050,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:577: ##sys#find-module */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[62];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3739 in register-syntax-export in k2972 in k2968 */
static void C_ccall f_3741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3741,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:212: module-undefined-list */
t4=*((C_word*)lf[5]+1);{
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

/* k3742 in k3739 in register-syntax-export in k2972 in k2968 */
static void C_ccall f_3744(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3744,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=C_i_block_ref(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3750,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[3],t1))){
/* modules.scm:215: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t5;
av2[2]=lf[45];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_3750(2,av2);}}}

/* k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6044,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6047,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:574: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5123 in map-loop856 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_5125(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5125,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5100(t6,((C_word*)t0)[5],t5);}

/* k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,4)))){
C_save_and_reclaim((void *)f_6047,2,av);}
a=C_alloc(42);
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
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6050,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6056,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word)li73),tmp=(C_word)a,a+=12,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[10],a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6134,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li78),tmp=(C_word)a,a+=11,tmp);
/* modules.scm:569: ##sys#dynamic-wind */
t16=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t16;
av2[1]=t12;
av2[2]=t13;
av2[3]=t14;
av2[4]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}

/* k3317 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3319,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3323,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:128: ##sys#module-alias-environment */
t4=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3751 in k3748 in k3742 in k3739 in register-syntax-export in k2972 in k2968 */
static void C_ccall f_3753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_3753,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],lf[39]);
t6=C_i_block_ref(t4,C_fix(3));
t7=C_a_i_cons(&a,2,t3,t6);
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t2;
av2[2]=t8;
av2[3]=C_fix(3);
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_3759(2,av2);}}}

/* k3748 in k3742 in k3739 in register-syntax-export in k2972 in k2968 */
static void C_ccall f_3750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3750,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3793,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:216: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5371 in loop in k5341 in find-export in k2972 in k2968 */
static void C_fcall f_5373(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_5373,2,t0,t1);}
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
/* modules.scm:438: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5345(t4,((C_word*)t0)[2],t3);}}

/* k6071 in k6067 in k6064 in k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6073,2,av);}
a=C_alloc(15);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6077,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* modules.scm:569: current-environment13401341 */
t4=((C_word*)t0)[12];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k5151 in primitive-alias in k2972 in k2968 */
static void C_ccall f_5153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5153,2,av);}
/* modules.scm:398: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6075 in k6071 in k6067 in k6064 in k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6077,2,av);}
a=C_alloc(14);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6081,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:569: current-meta-environment13421343 */
t4=((C_word*)t0)[9];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k3757 in k3751 in k3748 in k3742 in k3739 in register-syntax-export in k2972 in k2968 */
static void C_ccall f_3759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_3759,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[44]);
t5=C_i_block_ref(t3,C_fix(5));
t6=C_a_i_cons(&a,2,t2,t5);
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_fix(5);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* ##sys#register-primitive-module in k2972 in k2968 */
static void C_ccall f_5159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_5159,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5166,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:404: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t8;
tp(2,av2);}}

/* k5736 in for-each-loop1295 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5738,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5728(t3,((C_word*)t0)[4],t2);}

/* k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6063,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:569: current-meta-environment13421343 */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[4])[1];
f_6066(2,av2);}}}

/* ##sys#primitive-alias in k2972 in k2968 */
static void C_ccall f_5140(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5140,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5144,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5153,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(1));
/* modules.scm:399: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t4;
av2[2]=lf[71];
av2[3]=t5;
tp(4,av2);}}

/* k6064 in k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6066,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:569: macro-environment13441345 */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[5])[1];
f_6069(2,av2);}}}

/* k6067 in k6064 in k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_6069,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* modules.scm:569: current-module13381339 */
t4=((C_word*)t0)[13];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k5142 in primitive-alias in k2972 in k2968 */
static void C_ccall f_5144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_5144,2,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_a_i_putprop(&a,3,t1,lf[68],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6060,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:569: current-environment13401341 */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_6063(2,av2);}}}

/* k8117 in k8113 in loop2 in loop in k7985 in instantiate-functor in k2972 in k2968 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8119,2,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8130,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* modules.scm:850: loop2 */
t7=((C_word*)((C_word*)t0)[6])[1];
f_8093(t7,t4,t6);}

/* g942 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_fcall f_4841(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4841,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4853,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(t6)){
/* modules.scm:378: merge-se */
f_4256(t5,C_a_i_list(&a,2,t6,((C_word*)t0)[2]));}
else{
/* modules.scm:378: merge-se */
f_4256(t5,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4840(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_4840,2,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4841,a[2]=((C_word*)t0)[2],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5001,a[2]=t6,a[3]=t2,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5001(t8,t4,((C_word*)t0)[3]);}

/* k8113 in loop2 in loop in k7985 in instantiate-functor in k2972 in k2968 */
static void C_ccall f_8115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_8115,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8119,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:849: ##sys#match-functor-argument */
t5=*((C_word*)lf[162]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[7];
av2[4]=t2;
av2[5]=t3;
av2[6]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}

/* k6013 in map-loop1126 in finalize-module in k2972 in k2968 */
static void C_ccall f_6015(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6015,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5990(t6,((C_word*)t0)[5],t5);}

/* k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4837,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4840,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:375: ##sys#mark-imported-symbols */
t4=*((C_word*)lf[48]+1);{
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

/* k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_4831,2,av);}
a=C_alloc(31);
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=C_a_i_record(&a,14,lf[3],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4837,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5026,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:372: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t8;
tp(2,av2);}}

/* g515 in k3523 in add-to-export-list in k2972 in k2968 */
static C_word C_fcall f_3534(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4866(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_4866,2,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4867,a[2]=((C_word*)t0)[2],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4978,a[2]=t6,a[3]=t2,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4978(t8,t4,((C_word*)t0)[3]);}

/* g963 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_fcall f_4867(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4867,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4883,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
if(C_truep(t7)){
/* modules.scm:383: merge-se */
f_4256(t6,C_a_i_list(&a,2,t7,((C_word*)t0)[2]));}
else{
/* modules.scm:383: merge-se */
f_4256(t6,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3791 in k3748 in k3742 in k3739 in register-syntax-export in k2972 in k2968 */
static void C_ccall f_3793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3793,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:216: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6038(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6038,2,av);}
a=C_alloc(10);
t2=t1;
if(C_truep(t2)){
t3=*((C_word*)lf[0]+1);
t4=*((C_word*)lf[26]+1);
t5=*((C_word*)lf[100]+1);
t6=*((C_word*)lf[25]+1);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=t5,a[7]=t4,a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* modules.scm:572: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[100]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[100]+1);
av2[1]=t7;
tp(2,av2);}}
else{
/* modules.scm:579: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=lf[105];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}}

/* ##sys#find-export in k2972 in k2968 */
static void C_ccall f_5332(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5332,5,av);}
a=C_alloc(5);
t5=t3;
t6=C_i_check_structure_2(t5,lf[3],lf[10]);
t7=C_i_block_ref(t5,C_fix(2));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5343,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_eqp(C_SCHEME_TRUE,t7);
if(C_truep(t9)){
t10=t3;
t11=C_i_check_structure_2(t10,lf[3],lf[29]);
t12=t8;
f_5343(t12,C_i_block_ref(t10,C_fix(4)));}
else{
t10=t8;
f_5343(t10,t7);}}

/* k6033 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6035,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3795 in k3791 in k3748 in k3742 in k3739 in register-syntax-export in k2972 in k2968 */
static void C_ccall f_3797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3797,2,av);}
/* modules.scm:216: check-for-redef */
t2=*((C_word*)lf[34]+1);{
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

/* loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_4075(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4075,3,t0,t1,t2);}
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
/* modules.scm:270: loop */
t9=t1;
t10=t5;
t1=t9;
t2=t10;
goto loop;}
else{
t4=C_i_cdar(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4102,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li66),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_4102(t8,t1,t4);}}}

/* k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6032(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_6032,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6035,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t3)[1])){
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=((C_word*)t3)[1];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6038,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6170,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6174,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:567: symbol->string */
t8=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k3546 in k3523 in add-to-export-list in k2972 in k2968 */
static void C_ccall f_3548(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3548,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3562,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_structure_2(t4,lf[3],lf[12]);
t6=C_i_block_ref(t4,C_fix(11));
/* modules.scm:173: append */
t7=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k4851 in g942 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4853,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#instantiate-functor in k2972 in k2968 */
static void C_ccall f_7972(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7972,5,av);}
a=C_alloc(18);
t5=t3;
t6=C_i_getprop(t5,lf[157],C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7980,a[2]=t2,a[3]=((C_word)li134),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7987,a[2]=t7,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t8,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t10=t9;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_7987(2,av2);}}
else{
/* modules.scm:830: err */
t10=t8;
f_7980(t10,t9,C_a_i_list(&a,2,lf[163],t3));}}

/* k3549 in k3546 in k3523 in add-to-export-list in k2972 in k2968 */
static void C_ccall f_3551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3551,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:174: append */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6029,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6032,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:564: ##sys#find-module */
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* ##sys#find-module/import-library in k2972 in k2968 */
static void C_ccall f_6025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6025,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6029,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:563: ##sys#resolve-module-name */
t5=*((C_word*)lf[18]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3556 in k3549 in k3546 in k3523 in add-to-export-list in k2972 in k2968 */
static void C_ccall f_3558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3558,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(4);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4881 in g963 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4883,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3560 in k3546 in k3523 in add-to-export-list in k2972 in k2968 */
static void C_ccall f_3562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3562,2,av);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_fix(11);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8311 in map-loop2208 in k8264 in k8260 in k8256 in k8239 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8313(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8313,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8288(t6,((C_word*)t0)[5],t5);}

/* for-each-loop498 in k3523 in add-to-export-list in k2972 in k2968 */
static void C_fcall f_3568(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3568,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* modules.scm:164: g499 */
  f_3526(C_a_i(&a,3),((C_word*)t0)[2],t3)
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

/* g2033 in k7739 in k7736 in k7668 in alias-global-hook in k2972 in k2968 */
static void C_fcall f_7704(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7704,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* modules.scm:782: mrename */
t4=((C_word*)t0)[2];
f_7636(t4,t1,((C_word*)t0)[3]);}
else{
t4=C_i_getprop(t3,lf[68],C_SCHEME_FALSE);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(C_truep(t4)?t4:t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* for-each-loop2186 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_fcall f_8322(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8322,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8332,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:874: g2187 */
t5=((C_word*)t0)[3];
f_8201(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* merr in k7985 in instantiate-functor in k2972 in k2968 */
static void C_fcall f_7997(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_7997,2,t0,t1);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8019,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8021,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li135),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8021(t13,t9,((C_word*)t0)[4]);}

/* map-loop1556 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6690(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6690,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6715,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:639: g1562 */
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

/* loop2 in loop in validate-exports in k2972 in k2968 */
static void C_fcall f_7900(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7900,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7914,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* modules.scm:819: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7801(t5,t3,t4);}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
/* modules.scm:820: loop2 */
t7=t1;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
/* modules.scm:821: err */
t4=((C_word*)((C_word*)t0)[6])[1];
f_7754(t4,t1,C_a_i_list(&a,3,lf[152],((C_word*)t0)[2],((C_word*)t0)[7]));}}}

/* k8372 in module-environment in k8363 in k8360 in k8357 in k8354 in k8351 in k8348 in k2972 in k2968 */
static void C_ccall f_8374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_8374,2,av);}
a=C_alloc(5);
t2=C_i_check_structure_2(t1,lf[3],lf[27]);
t3=C_i_block_ref(t1,C_fix(13));
t4=C_i_car(t3);
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[173],((C_word*)t0)[3],t4,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop724 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_fcall f_4630(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4630,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4655,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:314: g730 */
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

/* k3594 in add-to-export-list in k2972 in k2968 */
static void C_ccall f_3596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3596,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(2);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* ##sys#toplevel-definition-hook in k2972 in k2968 */
static void C_ccall f_3598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3598,6,av);}
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k8192 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8194,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_eqp(((C_word*)t0)[2],lf[148]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8201,a[2]=t2,a[3]=t5,a[4]=((C_word)li140),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[30]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8241,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8322,a[2]=t11,a[3]=t6,a[4]=((C_word)li142),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_8322(t13,t9,t7);}}

/* ##sys#match-functor-argument in k2972 in k2968 */
static void C_ccall f_8190(C_word c,C_word *av){
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
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_8190,7,av);}
a=C_alloc(10);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8194,a[2]=t5,a[3]=t1,a[4]=t6,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8347,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:872: ##sys#resolve-module-name */
t9=*((C_word*)lf[18]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
av2[3]=lf[3];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k8351 in k8348 in k2972 in k2968 */
static void C_ccall f_8353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8353,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:936: ##sys#register-primitive-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[179];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8357 in k8354 in k8351 in k8348 in k2972 in k2968 */
static void C_ccall f_8359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8359,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:939: ##sys#register-module-alias */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[176];
av2[3]=lf[177];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8354 in k8351 in k8348 in k2972 in k2968 */
static void C_ccall f_8356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8356,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:937: ##sys#register-primitive-module */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[178];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4653 in map-loop724 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4655(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4655,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4630(t6,((C_word*)t0)[5],t5);}

/* k5315 in map-loop1035 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_ccall f_5317(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5317,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5292(t6,((C_word*)t0)[5],t5);}

/* k8348 in k2972 in k2968 */
static void C_ccall f_8350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_8350,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8394,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:934: append */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[180];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_6955,2,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:685: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[126];
tp(5,av2);}}
else{
/* modules.scm:693: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=((C_word*)t0)[11];
av2[3]=lf[127];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_6958,2,av);}
a=C_alloc(36);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6963,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[5],t3);
t6=t5;
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=t4;
t12=C_i_check_list_2(((C_word*)t0)[6],lf[16]);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7006,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t6,a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7052,a[2]=t9,a[3]=t15,a[4]=t11,a[5]=t10,a[6]=((C_word)li106),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_7052(t17,t13,((C_word*)t0)[6]);}

/* k8165 in loop in k7985 in instantiate-functor in k2972 in k2968 */
static void C_ccall f_8167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8167,2,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8178,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
t7=((C_word*)t0)[6];
t8=C_u_i_cdr(t7);
/* modules.scm:865: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_8081(t9,t4,t6,t8);}

/* k8360 in k8357 in k8354 in k8351 in k8348 in k2972 in k2968 */
static void C_ccall f_8362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8362,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:941: register-feature! */
t3=*((C_word*)lf[174]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[175];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8363 in k8360 in k8357 in k8354 in k8351 in k8348 in k2972 in k2968 */
static void C_ccall f_8365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8365,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[172]+1 /* (set! module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8367,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* module-environment in k8363 in k8360 in k8357 in k8354 in k8351 in k8348 in k2972 in k2968 */
static void C_ccall f_8367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_8367,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?t2:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8374,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:944: ##sys#find-module/import-library */
t8=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[172];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k7535 in for-each-loop1810 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7537,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7527(t3,((C_word*)t0)[4],t2);}

/* k8176 in k8165 in loop in k7985 in instantiate-functor in k2972 in k2968 */
static void C_ccall f_8178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8178,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4674 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4676,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[62],t1);
t3=((C_word*)t0)[2];
f_4339(t3,C_a_i_list(&a,1,t2));}

/* k8345 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8347,2,av);}
/* modules.scm:872: ##sys#find-module */
t2=*((C_word*)lf[21]+1);{
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
av2[4]=lf[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7556 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7558,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(8);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* g1548 in loop in k6365 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6453(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_6453,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:634: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6372(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)t0)[6]);}

/* k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_4805,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[16]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4831,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5032,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5032(t12,t8,((C_word*)t0)[2]);}

/* k4696 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_4698,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,lf[62],t1);
t3=C_a_i_list(&a,2,lf[55],t2);
t4=C_a_i_list(&a,2,lf[63],t3);
t5=((C_word*)t0)[2];
f_4331(t5,C_a_i_list(&a,1,t4));}

/* k7304 in k7297 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7306,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(4);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6623 in g1621 in loop in loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6625,2,av);}
/* modules.scm:651: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6554(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* map-loop1487 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6487(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6487,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6512,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:621: g1493 */
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

/* k5708 in k5697 in k5694 in k5691 in k5685 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5710,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5714,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:555: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5712 in k5708 in k5697 in k5694 in k5691 in k5685 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5714(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5714,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_i_check_structure_2(t4,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t6=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_fix(13);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5716 in k5697 in k5694 in k5691 in k5685 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5718,2,av);}
a=C_alloc(9);
/* modules.scm:554: merge-se */
f_4256(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* g1621 in loop in loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6613(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6613,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6625,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
/* modules.scm:651: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=t6;
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k8128 in k8117 in k8113 in loop2 in loop in k7985 in instantiate-functor in k2972 in k2968 */
static void C_ccall f_8130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8130,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4819 in map-loop912 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_4821,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* err in instantiate-functor in k2972 in k2968 */
static void C_fcall f_7980(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7980,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[104]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* k7985 in instantiate-functor in k2972 in k2968 */
static void C_ccall f_7987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7987,2,av);}
a=C_alloc(23);
t2=C_i_car(((C_word*)t0)[2]);
t3=t2;
t4=C_i_cadr(((C_word*)t0)[2]);
t5=t4;
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7997,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li136),tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8060,a[2]=t5,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8081,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t8,a[5]=t11,a[6]=((C_word)li138),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8081(t13,t9,((C_word*)t0)[4],t3);}

/* map-loop1881 in k7315 in k7297 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7326(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7326,3,t0,t1,t2);}
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

/* k7322 in k7315 in k7297 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7324,2,av);}
/* modules.scm:733: append */
t2=*((C_word*)lf[17]+1);{
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

/* k7315 in k7297 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7317,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7326,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7326(t11,t7,((C_word*)t0)[4]);}

/* k5720 in k5694 in k5691 in k5685 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5722,2,av);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_fix(12);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* for-each-loop1295 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5728(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5728,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5738,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:534: g1296 */
t5=((C_word*)t0)[3];
f_5665(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6411 in for-each-loop1523 in loop in k6365 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6413,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6403(t3,((C_word*)t0)[4],t2);}

/* ##sys#register-functor in k2972 in k2968 */
static void C_ccall f_7956(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7956,6,av);}
a=C_alloc(14);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_putprop(&a,3,t2,lf[157],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* ##sys#resolve-module-name in k2972 in k2968 */
static void C_ccall f_3359(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3359,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3365,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3365(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* map-loop1855 in k7297 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7360(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7360,3,t0,t1,t2);}
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

/* k8330 in for-each-loop2186 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8332,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8322(t3,((C_word*)t0)[4],t2);}

/* k3321 in k3317 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3323,2,av);}
/* modules.scm:126: append */
t2=*((C_word*)lf[17]+1);{
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

/* map-loop400 in with-module-aliases in k2972 in k2968 */
static void C_fcall f_3325(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3325,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t7);
t9=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t7);
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

/* k4626 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4628,2,av);}
/* modules.scm:314: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[61]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[61]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k4421 in k4431 in loop in k4486 in k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4423,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop783 in k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_fcall f_4490(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4490,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4515,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:325: g789 */
t5=((C_word*)t0)[4];
f_4448(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* for-each-loop1523 in loop in k6365 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6403(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6403,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6413,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:624: g1524 */
t5=((C_word*)t0)[3];
f_6380(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5341 in find-export in k2972 in k2968 */
static void C_fcall f_5343(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5343,2,t0,t1);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5345,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5345(t5,((C_word*)t0)[4],t1);}

/* loop in k5341 in find-export in k2972 in k2968 */
static void C_fcall f_5345(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5345,3,t0,t1,t2);}
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
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5373,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t10=t2;
t11=C_u_i_car(t10);
t12=C_u_i_cdr(t11);
t13=t9;
f_5373(t13,C_i_memq(((C_word*)t0)[2],t12));}
else{
t10=t9;
f_5373(t10,C_SCHEME_FALSE);}}}
else{
t7=t2;
t8=C_u_i_cdr(t7);
/* modules.scm:439: loop */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}}}

/* g789 in k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_fcall f_4448(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4448,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=t2;
t6=C_u_i_car(t5);
t7=C_a_i_list(&a,2,lf[55],t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4472,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_u_i_cdr(t4);
/* modules.scm:329: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[59]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[59]+1);
av2[1]=t9;
av2[2]=t10;
tp(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[55],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5089 in map-loop884 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_5091(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5091,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5066(t6,((C_word*)t0)[5],t5);}

/* k4431 in loop in k4486 in k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4433(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4433,2,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,3,lf[58],((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4423,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* modules.scm:343: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4391(t7,t4,t6);}

/* k7394 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7396,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(11);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4602 in map-loop750 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_fcall f_4604(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4604,2,t0,t1);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4579(t6,((C_word*)t0)[5],t5);}

/* k4486 in k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_4488,2,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,lf[57],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4379,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[7]))){
t6=t4;
f_4375(t6,C_a_i_cons(&a,2,lf[57],C_SCHEME_END_OF_LIST));}
else{
t6=((C_word*)t0)[8];
t7=C_i_check_structure_2(t6,lf[3],lf[44]);
t8=C_i_block_ref(t6,C_fix(5));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4391,a[2]=((C_word*)t0)[7],a[3]=t10,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_4391(t12,t5,t8);}}

/* f8886 in g1524 in loop in k6365 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f8886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8886,2,av);}
/* modules.scm:593: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* f8899 in g1601 in loop in loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f8899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8899,2,av);}
/* modules.scm:593: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k4470 in g789 in k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_4472,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[58],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7134 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7135,2,av);}
/* modules.scm:698: import-spec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6282(t2,t1,((C_word*)t0)[3]);}

/* k7871 in loop in validate-exports in k2972 in k2968 */
static void C_fcall f_7873(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7873,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:815: iface */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7760(t3,((C_word*)t0)[4],t2);}
else{
/* modules.scm:816: err */
t2=((C_word*)((C_word*)t0)[5])[1];
f_7754(t2,((C_word*)t0)[4],C_a_i_list(&a,3,lf[151],((C_word*)t0)[2],((C_word*)t0)[6]));}}

/* k7739 in k7736 in k7668 in alias-global-hook in k2972 in k2968 */
static void C_ccall f_7741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7741,2,av);}
a=C_alloc(5);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7704,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li125),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:760: g2033 */
t4=t3;
f_7704(t4,((C_word*)t0)[4],t2);}
else{
/* modules.scm:784: mrename */
t3=((C_word*)t0)[3];
f_7636(t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* ##sys#register-interface in k2972 in k2968 */
static void C_ccall f_7743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_7743,4,av);}
a=C_alloc(8);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_putprop(&a,3,t2,lf[144],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7125,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:695: ##sys#current-module */
t3=*((C_word*)lf[0]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_7128,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li119),tmp=(C_word)a,a+=10,tmp);
t4=C_i_cdr(((C_word*)t0)[8]);
t5=C_i_check_list_2(t4,lf[30]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7590,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7592,a[2]=t8,a[3]=t3,a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_7592(t10,t6,t4);}

/* g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7129(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,7)))){
C_save_and_reclaim_args((void *)trf_7129,3,t0,t1,t2);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7135,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li109),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7141,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li118),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:697: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k7736 in k7668 in alias-global-hook in k2972 in k2968 */
static void C_ccall f_7738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7738,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:777: g2031 */
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6664 in g1626 in loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6666,2,av);}
/* modules.scm:656: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6542(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* iface in validate-exports in k2972 in k2968 */
static void C_fcall f_7760(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7760,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_i_getprop(t2,lf[144],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:796: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7754(t4,t1,C_a_i_list(&a,3,lf[146],*((C_word*)lf[147]+1),((C_word*)t0)[3]));}}

/* a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7141(C_word c,C_word *av){
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
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7141,7,av);}
a=C_alloc(18);
t7=t4;
t8=t5;
t9=t6;
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7145,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=t8,a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t9,a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[7])){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7558,a[2]=((C_word*)t0)[5],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_structure_2(((C_word*)t0)[5],lf[3],lf[53]);
t13=C_i_block_ref(((C_word*)t0)[5],C_fix(8));
t14=C_a_i_list1(&a,1,t3);
/* modules.scm:703: append */
t15=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t11;
av2[2]=t13;
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7573,a[2]=((C_word*)t0)[5],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_structure_2(((C_word*)t0)[5],lf[3],lf[52]);
t13=C_i_block_ref(((C_word*)t0)[5],C_fix(7));
t14=C_a_i_list1(&a,1,t3);
/* modules.scm:706: append */
t15=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t11;
av2[2]=t13;
av2[3]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}}
else{
t11=t10;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_7145(2,av2);}}}

/* k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7145,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:710: ##sys#mark-imported-symbols */
t3=*((C_word*)lf[48]+1);{
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

/* err in validate-exports in k2972 in k2968 */
static void C_fcall f_7754(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7754,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[104]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* ##sys#validate-exports in k2972 in k2968 */
static void C_ccall f_7751(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7751,4,av);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7754,a[2]=t3,a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7760,a[2]=t5,a[3]=t2,a[4]=((C_word)li129),tmp=(C_word)a,a+=5,tmp));
t10=C_eqp(lf[148],t2);
if(C_truep(t10)){
t11=t2;
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:798: iface */
t11=((C_word*)t7)[1];
f_7760(t11,t1,t2);}
else{
if(C_truep(C_i_listp(t2))){
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7801,a[2]=t12,a[3]=t7,a[4]=t5,a[5]=t2,a[6]=((C_word)li131),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_7801(t14,t1,t2);}
else{
/* modules.scm:800: err */
t11=((C_word*)t5)[1];
f_7754(t11,t1,C_a_i_list(&a,2,lf[155],t2));}}}}

/* g1626 in loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6654(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6654,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6666,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
/* modules.scm:656: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=t6;
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* g1544 in loop in k6365 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6431(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_6431,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:631: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6372(t5,t1,t3,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k7912 in loop2 in loop in validate-exports in k2972 in k2968 */
static void C_ccall f_7914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7914,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in validate-exports in k2972 in k2968 */
static void C_fcall f_7801(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_7801,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=t3;
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7833,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* modules.scm:808: loop */
t13=t5;
t14=t7;
t1=t13;
t2=t14;
goto loop;}
else{
if(C_truep(C_i_listp(t4))){
t5=C_i_car(t4);
t6=C_eqp(lf[149],t5);
if(C_truep(t6)){
t7=C_u_i_cdr(t4);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7859,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
/* modules.scm:812: loop */
t13=t8;
t14=t10;
t1=t13;
t2=t14;
goto loop;}
else{
t7=C_u_i_car(t4);
t8=C_eqp(lf[150],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7873,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t10=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t10))){
t11=C_i_cadr(t4);
t12=t9;
f_7873(t12,C_i_symbolp(t11));}
else{
t11=t9;
f_7873(t11,C_SCHEME_FALSE);}}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7900,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t10,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li130),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_7900(t12,t1,t4);}}}
else{
/* modules.scm:810: err */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7754(t5,t1,C_a_i_list(&a,3,lf[153],t4,((C_word*)t0)[5]));}}}
else{
/* modules.scm:805: err */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7754(t3,t1,C_a_i_list(&a,2,lf[154],((C_word*)t0)[5]));}}}

/* k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_5617,2,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
t7=((C_word*)t0)[4];
t8=C_i_check_structure_2(t7,lf[3],lf[10]);
t9=C_i_block_ref(t7,C_fix(2));
t10=C_i_check_structure_2(t7,lf[3],lf[4]);
t11=C_i_block_ref(t7,C_fix(1));
t12=t11;
t13=C_i_check_structure_2(t7,lf[3],lf[39]);
t14=C_i_block_ref(t7,C_fix(3));
t15=t14;
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4052,a[2]=t12,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t17=C_eqp(C_SCHEME_TRUE,t9);
if(C_truep(t17)){
t18=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=C_SCHEME_END_OF_LIST;
f_5652(2,av2);}}
else{
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4075,a[2]=t19,a[3]=t16,a[4]=t15,a[5]=t12,a[6]=((C_word)li67),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_4075(t21,t6,t9);}}

/* k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5614,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
/* modules.scm:522: ##sys#error */
t3=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[96];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5617(2,av2);}}}

/* k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5608(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5608,2,av);}
a=C_alloc(16);
t2=C_i_check_list_2(t1,lf[30]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5796,a[2]=t5,a[3]=((C_word*)t0)[9],a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_5796(t7,t3,t1);}

/* g1811 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7158(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7158,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_car(t2);
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7196,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:714: import-env */
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

/* k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7157(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7157,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7158,a[2]=((C_word*)t0)[2],a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7202,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7527,a[2]=t6,a[3]=t2,a[4]=((C_word)li117),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7527(t8,t4,((C_word*)t0)[3]);}

/* k6225 in tostr in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6227,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6234,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:596: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[111]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[111]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* modules.scm:597: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[111]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[111]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* modules.scm:598: number->string */
t2=*((C_word*)lf[112]+1);{
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
/* modules.scm:599: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[113];
tp(4,av2);}}}}}

/* loop in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5823(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5823,3,t0,t1,t2);}
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
/* modules.scm:467: loop */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5854,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=C_i_assq(t6,((C_word*)t0)[4]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5867,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5870,a[2]=t9,a[3]=t7,a[4]=t6,a[5]=t10,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t9)){
t12=C_i_cdr(t9);
t13=t11;
f_5870(t13,C_i_symbolp(t12));}
else{
t12=t11;
f_5870(t12,C_SCHEME_FALSE);}}}}

/* tostr in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6214(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6214,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6227,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:596: keyword? */
t4=*((C_word*)lf[114]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5904 in k5880 in k5918 in k5868 in loop in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5906,2,av);}
/* modules.scm:481: string-append */
t2=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[97];
av2[3]=t1;
av2[4]=lf[98];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5900 in k5880 in k5918 in k5868 in loop in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5902,2,av);}
/* modules.scm:480: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k5804 in for-each-loop1180 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5806,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5796(t3,((C_word*)t0)[4],t2);}

/* k6232 in k6225 in tostr in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6234,2,av);}
/* modules.scm:596: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[110];
tp(4,av2);}}

/* loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_4102(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4102,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* modules.scm:273: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4075(t4,t1,t3);}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4250,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:274: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t5;
tp(2,av2);}}}

/* k6864 in g1698 in loop in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6866,2,av);}
/* modules.scm:672: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6748(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* ##sys#register-undefined in k2972 in k2968 */
static void C_ccall f_3812(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3812,5,av);}
a=C_alloc(6);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3819,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:229: module-undefined-list */
t6=*((C_word*)lf[5]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6259 in import-name in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6261,2,av);}
t2=C_i_check_structure_2(t1,lf[3],lf[11]);
t3=C_i_block_ref(t1,C_fix(10));
t4=C_i_check_structure_2(t1,lf[3],lf[12]);
t5=C_i_block_ref(t1,C_fix(11));
t6=C_i_check_structure_2(t1,lf[3],lf[56]);
t7=C_i_block_ref(t1,C_fix(12));
t8=C_i_check_structure_2(t1,lf[3],lf[4]);
t9=C_i_block_ref(t1,C_fix(1));
/* modules.scm:606: values */{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t9;
av2[3]=t9;
av2[4]=t3;
av2[5]=t5;
av2[6]=t7;
C_values(7,av2);}}

/* g583 in k3817 in register-undefined in k2972 in k2968 */
static void C_fcall f_3826(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3826,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3833,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=C_i_cdr(t2);
t5=C_i_memq(((C_word*)t0)[2],t4);
t6=t3;
f_3833(t6,C_i_not(t5));}
else{
t4=t3;
f_3833(t4,C_SCHEME_FALSE);}}

/* import-name in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6257(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6257,2,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6261,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6280,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:601: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[59]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[59]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k3817 in register-undefined in k2972 in k2968 */
static void C_ccall f_3819(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3819,2,av);}
a=C_alloc(9);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3826,a[2]=((C_word*)t0)[3],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:229: g583 */
t4=t3;
f_3826(t4,((C_word*)t0)[4],t2);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,t1);
/* modules.scm:235: set-module-undefined-list! */
t6=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
/* modules.scm:235: set-module-undefined-list! */
t5=*((C_word*)lf[6]+1);{
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
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6282(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_6282,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:608: import-name */
f_6257(t1,t2);}
else{
t3=C_i_listp(t2);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6301,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t4)){
t6=t5;
f_6301(t6,t4);}
else{
t6=C_i_length(t2);
t7=t5;
f_6301(t7,C_fixnum_lessp(t6,C_fix(2)));}}}

/* k6278 in import-name in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6280,2,av);}
/* modules.scm:601: ##sys#find-module/import-library */
t2=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[62];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* g1228 in k5517 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5520(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5520,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5524,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:515: display */
t4=*((C_word*)lf[77]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[82];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5525 in k5522 in g1228 in k5517 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5527,2,av);}
/* write-char/port */
t2=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5522 in g1228 in k5517 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5524,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* modules.scm:516: display */
t4=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5281 in map-loop1062 in k5227 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_ccall f_5283(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5283,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5258(t6,((C_word*)t0)[5],t5);}

/* k4145 in g669 in k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_4147(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4147,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4151,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* modules.scm:283: loop2 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4102(t6,t3,t5);}

/* k7194 in g1811 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7196(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7196,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
if(C_truep(t4)){
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
t7=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* modules.scm:717: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[128]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[128]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[129];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5514 in k5504 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5516,2,av);}
/* modules.scm:509: display */
t2=*((C_word*)lf[77]+1);{
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

/* k5517 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5519(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5519,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5520,a[2]=((C_word*)t0)[2],a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5539,a[2]=t4,a[3]=t2,a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5539(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* g669 in k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_4139(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4139,3,t0,t1,t2);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4147,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)t0)[2]);
t5=t4;
t6=C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4164,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t3;
f_4147(t8,C_a_i_cons(&a,2,t5,t6));}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_car(t8);
/* modules.scm:282: ##sys#module-rename */
t10=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t7;
av2[2]=t9;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* f8860 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f8860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8860,2,av);}
/* modules.scm:519: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k4162 in g669 in k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_4164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4164,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4147(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k5254 in k5227 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_ccall f_5256(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_5256,2,av);}
a=C_alloc(28);
t2=((C_word*)t0)[2];
t3=C_a_i_record(&a,14,lf[3],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5188,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5196,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:423: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t7;
tp(2,av2);}}

/* map-loop1062 in k5227 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_fcall f_5258(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5258,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5283,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:412: g1068 */
t5=((C_word*)t0)[4];
f_5234(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4149 in k4145 in g669 in k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_4151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4151,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#register-meta-expression in k2972 in k2968 */
static void C_ccall f_3601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3601,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3605,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:180: ##sys#current-module */
t4=*((C_word*)lf[0]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3603 in register-meta-expression in k2972 in k2968 */
static void C_ccall f_3605(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3605,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_check_structure_2(t1,lf[3],lf[33]);
t3=C_i_block_ref(t1,C_fix(9));
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=((C_word*)t0)[3];
t6=C_i_check_structure_2(t1,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t1;
av2[3]=C_fix(9);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3626 in check-for-redef in k2972 in k2968 */
static void C_ccall f_3628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3628,2,av);}
if(C_truep(C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* modules.scm:187: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[36];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5482(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5482,2,av);}
a=C_alloc(9);
t2=C_i_getprop(((C_word*)t0)[2],lf[75],C_SCHEME_FALSE);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5490,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=C_i_length(t3);
t6=C_eqp(C_fix(1),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5506,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:508: display */
t8=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[80];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5519,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:512: display */
t8=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[83];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8860,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:519: get-output-string */
t6=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* g676 in k4238 in k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_4179(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4179,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_car(((C_word*)t0)[2]);
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4197,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
/* modules.scm:287: loop2 */
t12=((C_word*)((C_word*)t0)[3])[1];
f_4102(t12,t9,t11);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(((C_word*)t0)[2]);
/* modules.scm:289: warn */
t6=((C_word*)t0)[4];
f_4052(t6,t4,lf[94],t5);}}

/* check-for-redef in k2972 in k2968 */
static void C_ccall f_3621(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3621,5,av);}
a=C_alloc(5);
t5=C_i_assq(t2,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3628,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
/* modules.scm:185: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t6;
av2[2]=lf[37];
av2[3]=t2;
tp(4,av2);}}
else{
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_3628(2,av2);}}}

/* k5504 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5506,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5516,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:509: cadar */
t4=*((C_word*)lf[79]+1);{
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

/* k5507 in k5504 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5509,2,av);}
/* modules.scm:510: display */
t2=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[78];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1664 in loop in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6811(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6811,3,t0,t1,t2);}
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

/* k5437 in map-loop1126 in finalize-module in k2972 in k2968 */
static void C_ccall f_5439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5439,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_assq(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1035 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_5292,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5317,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
if(C_truep(C_i_symbolp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5223,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:409: ##sys#primitive-alias */
t8=*((C_word*)lf[67]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5469,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5473,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:496: display */
t5=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[86];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4195 in g676 in k4238 in k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_4197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4197,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3461 in k3505 in k3501 in switch-module in k2972 in k2968 */
static void C_ccall f_3463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3463,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3491,a[2]=((C_word*)t0)[5],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:147: g482 */
t4=t3;
f_3491(t4,t2,t1);}
else{
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
f_3466(2,av2);}}}

/* k3464 in k3461 in k3505 in k3501 in switch-module in k2972 in k2968 */
static void C_ccall f_3466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3466,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],lf[27]);
t5=t2;
f_3469(t5,C_i_block_ref(t3,C_fix(13)));}
else{
t3=t2;
f_3469(t3,((C_word*)((C_word*)t0)[4])[1]);}}

/* k5488 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5490,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:519: get-output-string */
t3=*((C_word*)lf[76]+1);{
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

/* k5495 in k5488 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5497,2,av);}
/* modules.scm:519: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k5667 in g1296 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5669,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_set_car(t3,t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* g1296 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5665(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_5665,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5669,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(t2);
/* modules.scm:536: merge-se */
f_4256(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[2]));}

/* k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5664(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5664,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5665,a[2]=((C_word*)t0)[2],a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5687,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5728,a[2]=t6,a[3]=t2,a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5728(t8,t4,((C_word*)t0)[3]);}

/* k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5661,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5664,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:533: ##sys#mark-imported-symbols */
t4=*((C_word*)lf[48]+1);{
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

/* k3470 in k3467 in k3464 in k3461 in k3505 in k3501 in switch-module in k2972 in k2968 */
static void C_ccall f_3472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3472,2,av);}
/* modules.scm:159: ##sys#current-module */
t2=*((C_word*)lf[0]+1);{
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

/* k3467 in k3464 in k3461 in k3505 in k3501 in switch-module in k2972 in k2968 */
static void C_fcall f_3469(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3469,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3478,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* modules.scm:157: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}
else{
/* modules.scm:159: ##sys#current-module */
t4=*((C_word*)lf[0]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_5658,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5753,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:530: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t4;
tp(2,av2);}}

/* k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5652(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5652,2,av);}
a=C_alloc(15);
t2=C_i_check_list_2(t1,lf[16]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5759,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5759(t7,t3,t1);}

/* k3476 in k3467 in k3464 in k3461 in k3505 in k3501 in switch-module in k2972 in k2968 */
static void C_ccall f_3478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3478,2,av);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* modules.scm:158: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}

/* k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5476,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5473,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5476,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:497: display */
t3=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5479,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5571,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:500: display */
t4=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[85];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5482(2,av2);}}}

/* k5643 in map-loop1260 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5645,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_car(((C_word*)t0)[4]);
/* modules.scm:527: ##sys#error */
t4=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[88];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* g482 in k3461 in k3505 in k3501 in switch-module in k2972 in k2968 */
static void C_fcall f_3491(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3491,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(13);
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7857 in loop in validate-exports in k2972 in k2968 */
static void C_ccall f_7859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7859,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* module-name in k2972 in k2968 */
static void C_ccall f_2988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2988,3,av);}
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7831 in loop in validate-exports in k2972 in k2968 */
static void C_ccall f_7833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7833,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5918 in k5868 in loop in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5920(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5920,2,av);}
a=C_alloc(9);
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5882,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=C_i_cdr(t3);
t6=t4;
f_5882(t6,C_i_symbolp(t5));}
else{
t5=t4;
f_5882(t5,C_SCHEME_FALSE);}}

/* k5951 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5953,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5955,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5955(t5,((C_word*)t0)[3],t1);}

/* k5697 in k5694 in k5691 in k5685 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5699,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5718,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:554: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5694 in k5691 in k5685 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5696(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5696,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5722,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_structure_2(t4,lf[3],lf[56]);
t6=C_i_block_ref(t4,C_fix(12));
/* modules.scm:551: merge-se */
f_4256(t3,C_a_i_list(&a,2,t6,((C_word*)t0)[6]));}

/* loop in k5951 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5955(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_5955,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5968,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
/* modules.scm:457: ##sys#find-export */
t5=*((C_word*)lf[42]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[3];
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k5691 in k5685 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5693,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(11);
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k5865 in loop in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5867,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_5854(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3293 in k3290 in a3287 in k3258 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3295,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3290 in a3287 in k3258 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3292,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3295,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:124: module-alias-environment390391 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k3267 in a3264 in k3258 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3269,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:124: module-alias-environment390391 */
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k4123 in k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_4125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4125,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:276: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4102(t4,((C_word*)t0)[4],t3);}

/* k5685 in k5662 in k5659 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5687,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_structure_2(t3,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_fix(10);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k5856 in k5852 in loop in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5858,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5852 in loop in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5854(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5854,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5858,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* modules.scm:488: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5823(t6,t3,t5);}

/* a3264 in k3258 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3265,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* modules.scm:124: module-alias-environment390391 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_3269(2,av2);}}}

/* k3258 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_3260,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3265,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3282,a[2]=((C_word*)t0)[3],a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3288,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:124: ##sys#dynamic-wind */
t9=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* ##sys#register-module-alias in k2972 in k2968 */
static void C_ccall f_3238(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3238,4,av);}
a=C_alloc(7);
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3254,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:122: ##sys#module-alias-environment */
t7=*((C_word*)lf[1]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k5975 in k5966 in loop in k5951 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5977,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3935 in for-each-loop611 in mark-imported-symbols in k2972 in k2968 */
static void C_fcall f_3937(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,1)))){
C_save_and_reclaim_args((void *)trf_3937,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_putprop(&a,3,t2,lf[49],C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a3287 in k3258 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3288,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3292,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:124: module-alias-environment390391 */
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* ##sys#finalize-module in k2972 in k2968 */
static void C_ccall f_5410(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5410,3,av);}
a=C_alloc(24);
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[10]);
t5=C_i_block_ref(t3,C_fix(2));
t6=t5;
t7=t2;
t8=C_i_check_structure_2(t7,lf[3],lf[4]);
t9=C_i_block_ref(t7,C_fix(1));
t10=t9;
t11=t2;
t12=C_i_check_structure_2(t11,lf[3],lf[39]);
t13=C_i_block_ref(t11,C_fix(3));
t14=t13;
t15=t2;
t16=C_i_check_structure_2(t15,lf[3],lf[29]);
t17=C_i_block_ref(t15,C_fix(4));
t18=t17;
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t22=t21;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=((C_word*)t23)[1];
t25=t2;
t26=C_i_check_structure_2(t25,lf[3],lf[44]);
t27=C_i_block_ref(t25,C_fix(5));
t28=C_i_check_list_2(t27,lf[16]);
t29=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5448,a[2]=t18,a[3]=t20,a[4]=t1,a[5]=t2,a[6]=t10,a[7]=t6,a[8]=t14,tmp=(C_word)a,a+=9,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5990,a[2]=t23,a[3]=t31,a[4]=t24,a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp));
t33=((C_word*)t31)[1];
f_5990(t33,t29,t27);}

/* k5966 in loop in k5951 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5968(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5968,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5977,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* modules.scm:458: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5955(t7,t4,t6);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:459: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5955(t4,((C_word*)t0)[3],t3);}}

/* k5024 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_5026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5026,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5030,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:373: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* a3281 in k3258 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3282,2,av);}
/* modules.scm:129: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k6151 in k6148 in k6145 in k6142 in k6139 in k6136 in a6133 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6153,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:569: current-meta-environment13421343 */
t3=((C_word*)t0)[12];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6157 in k6154 in k6151 in k6148 in k6145 in k6142 in k6139 in k6136 in a6133 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6159(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6159,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate2(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=C_mutate2(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[9]);
t6=((C_word*)t0)[10];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6154 in k6151 in k6148 in k6145 in k6142 in k6139 in k6136 in a6133 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_6156,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:569: macro-environment13441345 */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6148 in k6145 in k6142 in k6139 in k6136 in a6133 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6150,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:569: current-environment13401341 */
t3=((C_word*)t0)[13];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* map-loop1909 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7464(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7464,3,t0,t1,t2);}
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

/* k5009 in for-each-loop941 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_5011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5011,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5001(t3,((C_word*)t0)[4],t2);}

/* map-loop1126 in finalize-module in k2972 in k2968 */
static void C_fcall f_5990(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5990,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6015,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5439,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:450: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t8;
tp(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#find-module in k2972 in k2968 */
static void C_ccall f_3402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_3402,c,av);}
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
t12=C_i_assq(t2,*((C_word*)lf[22]+1));
if(C_truep(t12)){
t13=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_i_cdr(t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
if(C_truep(t5)){
/* modules.scm:143: error */
t13=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t1;
av2[2]=t9;
av2[3]=lf[23];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
t13=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}}

/* k3398 in loop in resolve-module-name in k2972 in k2968 */
static void C_ccall f_3400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3400,2,av);}
a=C_alloc(7);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3373,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li10),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:131: g444 */
t4=t3;
f_3373(t4,((C_word*)t0)[7],t2);}
else{
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[7];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6142 in k6139 in k6136 in a6133 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6144,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:569: macro-environment13441345 */
t4=((C_word*)t0)[9];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6145 in k6142 in k6139 in k6136 in a6133 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6147,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:569: current-module13381339 */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6139 in k6136 in a6133 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6141,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:569: current-meta-environment13421343 */
t4=((C_word*)t0)[9];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* for-each-loop941 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_fcall f_5001(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5001,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5011,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:376: g942 */
t5=((C_word*)t0)[3];
f_4841(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* for-each-loop1227 in k5517 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5539(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5539,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5549,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:513: g1228 */
t5=((C_word*)t0)[3];
f_5520(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5896 in k5880 in k5918 in k5868 in loop in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5898,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_5854(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE));}

/* k6172 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6174,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[107];
tp(4,av2);}}

/* ##sys#expand-import in k2972 in k2968 */
static void C_ccall f_6177(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6177,10,av);}
a=C_alloc(11);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6181,a[2]=t9,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t8,a[7]=t7,a[8]=t2,a[9]=t1,a[10]=t3,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:585: r */
t11=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[138];
((C_proc)C_fast_retrieve_proc(t11))(3,av2);}}

/* k6168 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6170,2,av);}
/* modules.scm:566: ##sys#find-extension */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

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
else C_toplevel_entry(C_text("modules_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_modules_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2970))){
C_save(t1);
C_rereclaim2(2970*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,183);
lf[0]=C_h_intern(&lf[0],18,"\003syscurrent-module");
lf[1]=C_h_intern(&lf[1],28,"\003sysmodule-alias-environment");
lf[3]=C_h_intern(&lf[3],6,"module");
lf[4]=C_h_intern(&lf[4],11,"module-name");
lf[5]=C_h_intern(&lf[5],21,"module-undefined-list");
lf[6]=C_h_intern(&lf[6],26,"set-module-undefined-list!");
lf[7]=C_h_intern(&lf[7],14,"\003sysblock-set!");
lf[8]=C_h_intern(&lf[8],15,"\003sysmodule-name");
lf[9]=C_h_intern(&lf[9],18,"\003sysmodule-exports");
lf[10]=C_h_intern(&lf[10],18,"module-export-list");
lf[11]=C_h_intern(&lf[11],15,"module-vexports");
lf[12]=C_h_intern(&lf[12],15,"module-sexports");
lf[13]=C_h_intern(&lf[13],25,"\003sysregister-module-alias");
lf[14]=C_h_intern(&lf[14],23,"\003syswith-module-aliases");
lf[15]=C_h_intern(&lf[15],16,"\003sysdynamic-wind");
lf[16]=C_h_intern(&lf[16],3,"map");
lf[17]=C_h_intern(&lf[17],6,"append");
lf[18]=C_h_intern(&lf[18],23,"\003sysresolve-module-name");
lf[19]=C_h_intern(&lf[19],5,"error");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\035module alias refers to itself");
lf[21]=C_h_intern(&lf[21],15,"\003sysfind-module");
lf[22]=C_h_intern(&lf[22],16,"\003sysmodule-table");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\020module not found");
lf[24]=C_h_intern(&lf[24],17,"\003sysswitch-module");
lf[25]=C_h_intern(&lf[25],21,"\003sysmacro-environment");
lf[26]=C_h_intern(&lf[26],23,"\003syscurrent-environment");
lf[27]=C_h_intern(&lf[27],25,"module-saved-environments");
lf[28]=C_h_intern(&lf[28],22,"\003sysadd-to-export-list");
lf[29]=C_h_intern(&lf[29],17,"module-exist-list");
lf[30]=C_h_intern(&lf[30],8,"for-each");
lf[31]=C_h_intern(&lf[31],28,"\003systoplevel-definition-hook");
lf[32]=C_h_intern(&lf[32],28,"\003sysregister-meta-expression");
lf[33]=C_h_intern(&lf[33],23,"module-meta-expressions");
lf[34]=C_h_intern(&lf[34],15,"check-for-redef");
lf[35]=C_h_intern(&lf[35],8,"\003syswarn");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\047redefinition of imported syntax binding");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000&redefinition of imported value binding");
lf[38]=C_h_intern(&lf[38],19,"\003sysregister-export");
lf[39]=C_h_intern(&lf[39],19,"module-defined-list");
lf[40]=C_h_intern(&lf[40],8,"\003sysdelq");
lf[41]=C_h_intern(&lf[41],17,"\003sysmodule-rename");
lf[42]=C_h_intern(&lf[42],15,"\003sysfind-export");
lf[43]=C_h_intern(&lf[43],26,"\003sysregister-syntax-export");
lf[44]=C_h_intern(&lf[44],26,"module-defined-syntax-list");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000!use of syntax precedes definition");
lf[46]=C_h_intern(&lf[46],22,"\003sysregister-undefined");
lf[47]=C_h_intern(&lf[47],19,"\003sysregister-module");
lf[48]=C_h_intern(&lf[48],25,"\003sysmark-imported-symbols");
lf[49]=C_h_intern(&lf[49],12,"\004corealiased");
lf[51]=C_h_intern(&lf[51],32,"\003syscompiled-module-registration");
lf[52]=C_h_intern(&lf[52],19,"module-import-forms");
lf[53]=C_h_intern(&lf[53],24,"module-meta-import-forms");
lf[54]=C_h_intern(&lf[54],10,"\003sysappend");
lf[55]=C_h_intern(&lf[55],5,"quote");
lf[56]=C_h_intern(&lf[56],15,"module-iexports");
lf[57]=C_h_intern(&lf[57],4,"list");
lf[58]=C_h_intern(&lf[58],4,"cons");
lf[59]=C_h_intern(&lf[59],16,"\003sysstrip-syntax");
lf[60]=C_h_intern(&lf[60],28,"\003sysregister-compiled-module");
lf[61]=C_h_intern(&lf[61],16,"\003sysfast-reverse");
lf[62]=C_h_intern(&lf[62],6,"import");
lf[63]=C_h_intern(&lf[63],4,"eval");
lf[64]=C_h_intern(&lf[64],22,"\003sysensure-transformer");
lf[65]=C_h_intern(&lf[65],9,"\003syserror");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\0000cannot find implementation of re-exported syntax");
lf[67]=C_h_intern(&lf[67],19,"\003sysprimitive-alias");
lf[68]=C_h_intern(&lf[68],14,"\004coreprimitive");
lf[69]=C_h_intern(&lf[69],18,"\003sysstring->symbol");
lf[70]=C_h_intern(&lf[70],17,"\003sysstring-append");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\002#%");
lf[72]=C_h_intern(&lf[72],29,"\003sysregister-primitive-module");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\0002unknown syntax referenced while registering module");
lf[74]=C_h_intern(&lf[74],19,"\003sysfinalize-module");
lf[75]=C_h_intern(&lf[75],7,"\004coredb");
lf[76]=C_h_intern(&lf[76],17,"get-output-string");
lf[77]=C_h_intern(&lf[77],7,"display");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002)\047");
lf[79]=C_h_intern(&lf[79],5,"cadar");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\042\012Warning:    suggesting: `(import ");
lf[81]=C_h_intern(&lf[81],19,"\003syswrite-char/port");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\025\012Warning:    (import ");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\037\012Warning:    suggesting one of:");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\015\012Warning:    ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\004 in:");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\052reference to possibly unbound identifier `");
lf[87]=C_h_intern(&lf[87],18,"open-output-string");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000$(internal) indirect export not found");
lf[89]=C_h_intern(&lf[89],13,"string-append");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\014 in module `");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[92]=C_h_intern(&lf[92],14,"symbol->string");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000!indirect export of syntax binding");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\033indirect reexport of syntax");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\042indirect export of unknown binding");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\021module unresolved");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\037exported identifier of module `");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\026\047 has not been defined");
lf[99]=C_h_intern(&lf[99],30,"\003sysfind-module/import-library");
lf[100]=C_h_intern(&lf[100],28,"\003syscurrent-meta-environment");
lf[101]=C_h_intern(&lf[101],19,"\003sysnotices-enabled");
lf[102]=C_h_intern(&lf[102],8,"\003sysload");
lf[103]=C_h_intern(&lf[103],26,"\003sysmeta-macro-environment");
lf[104]=C_h_intern(&lf[104],21,"\003syssyntax-error-hook");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000#cannot import from undefined module");
lf[106]=C_h_intern(&lf[106],18,"\003sysfind-extension");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\007.import");
lf[108]=C_h_intern(&lf[108],17,"\003sysexpand-import");
lf[109]=C_h_intern(&lf[109],16,"\004coremacro-alias");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[111]=C_h_intern(&lf[111],18,"\003syssymbol->string");
lf[112]=C_h_intern(&lf[112],14,"number->string");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid prefix");
lf[114]=C_h_intern(&lf[114],8,"keyword\077");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid import specification");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\005srfi-");
lf[117]=C_h_intern(&lf[117],18,"\003sysnumber->string");
lf[118]=C_h_intern(&lf[118],7,"sprintf");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\0002imported identifier doesn\047t exist in module ~s: ~s");
lf[120]=C_h_intern(&lf[120],16,"\003syscheck-syntax");
lf[121]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\0002excluded identifier doesn\047t exist in module ~s: ~s");
lf[123]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\0001renamed identifier doesn\047t exist in module ~s: ~s");
lf[125]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000");
lf[126]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid import specification");
lf[128]=C_h_intern(&lf[128],10,"\003sysnotice");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000(re-importing already imported identifier");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000$re-importing already imported syntax");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000%`reexport\047 only valid inside a module");
lf[132]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[133]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[134]=C_h_intern(&lf[134],4,"srfi");
lf[135]=C_h_intern(&lf[135],6,"prefix");
lf[136]=C_h_intern(&lf[136],6,"except");
lf[137]=C_h_intern(&lf[137],6,"rename");
lf[138]=C_h_intern(&lf[138],4,"only");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[140]=C_h_intern(&lf[140],21,"\003sysalias-global-hook");
lf[141]=C_h_intern(&lf[141],27,"\003sysactive-eval-environment");
lf[142]=C_h_intern(&lf[142],21,"\003sysqualified-symbol\077");
lf[143]=C_h_intern(&lf[143],22,"\003sysregister-interface");
lf[144]=C_h_intern(&lf[144],14,"\004coreinterface");
lf[145]=C_h_intern(&lf[145],20,"\003sysvalidate-exports");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\021unknown interface");
lf[147]=C_h_intern(&lf[147],1,"x");
lf[148]=C_h_intern(&lf[148],1,"\052");
lf[149]=C_h_intern(&lf[149],7,"\000syntax");
lf[150]=C_h_intern(&lf[150],10,"\000interface");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid interface specification");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid export");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid export");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\017invalid exports");
lf[156]=C_h_intern(&lf[156],20,"\003sysregister-functor");
lf[157]=C_h_intern(&lf[157],12,"\004corefunctor");
lf[158]=C_h_intern(&lf[158],23,"\003sysinstantiate-functor");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000/argument list mismatch in functor instantiation");
lf[160]=C_h_intern(&lf[160],11,"\004coremodule");
lf[161]=C_h_intern(&lf[161],21,"\004corelet-module-alias");
lf[162]=C_h_intern(&lf[162],26,"\003sysmatch-functor-argument");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000!instantation of undefined functor");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\021argument module `");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000$\047 does not match required signature\012");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\022in instantiation `");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\016\047 of functor `");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\0007\047, because the following required exports are missing:\012");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\003\012  ");
lf[170]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003not\376\003\000\000\002\376\001\000\000\010boolean\077\376\003\000\000\002\376\001\000\000\003eq\077\376\003\000\000\002\376\001\000\000\004eqv\077\376\003\000\000\002\376\001\000\000\006equal\077\376\003\000\000\002\376"
"\001\000\000\005pair\077\376\003\000\000\002\376\001\000\000\004cons\376\003\000\000\002\376\001\000\000\003car\376\003\000\000\002\376\001\000\000\003cdr\376\003\000\000\002\376\001\000\000\004caar\376\003\000\000\002\376\001\000\000\004cadr\376\003\000"
"\000\002\376\001\000\000\004cdar\376\003\000\000\002\376\001\000\000\004cddr\376\003\000\000\002\376\001\000\000\005caaar\376\003\000\000\002\376\001\000\000\005caadr\376\003\000\000\002\376\001\000\000\005cadar\376\003\000\000\002\376\001\000\000\005"
"caddr\376\003\000\000\002\376\001\000\000\005cdaar\376\003\000\000\002\376\001\000\000\005cdadr\376\003\000\000\002\376\001\000\000\005cddar\376\003\000\000\002\376\001\000\000\005cdddr\376\003\000\000\002\376\001\000\000\006caaaa"
"r\376\003\000\000\002\376\001\000\000\006caaadr\376\003\000\000\002\376\001\000\000\006caadar\376\003\000\000\002\376\001\000\000\006caaddr\376\003\000\000\002\376\001\000\000\006cadaar\376\003\000\000\002\376\001\000\000\006cadad"
"r\376\003\000\000\002\376\001\000\000\006caddar\376\003\000\000\002\376\001\000\000\006cadddr\376\003\000\000\002\376\001\000\000\006cdaaar\376\003\000\000\002\376\001\000\000\006cdaadr\376\003\000\000\002\376\001\000\000\006cdada"
"r\376\003\000\000\002\376\001\000\000\006cdaddr\376\003\000\000\002\376\001\000\000\006cddaar\376\003\000\000\002\376\001\000\000\006cddadr\376\003\000\000\002\376\001\000\000\006cdddar\376\003\000\000\002\376\001\000\000\006cdddd"
"r\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\005null\077\376\003\000\000\002\376\001\000\000\005list\077\376\003\000\000\002\376\001\000\000\004lis"
"t\376\003\000\000\002\376\001\000\000\006length\376\003\000\000\002\376\001\000\000\011list-tail\376\003\000\000\002\376\001\000\000\010list-ref\376\003\000\000\002\376\001\000\000\006append\376\003\000\000\002\376\001\000\000\007"
"reverse\376\003\000\000\002\376\001\000\000\004memq\376\003\000\000\002\376\001\000\000\004memv\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\004assq\376\003\000\000\002\376\001\000\000\004assv\376"
"\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376\001\000\000\007symbol\077\376\003\000\000\002\376\001\000\000\016symbol->string\376\003\000\000\002\376\001\000\000\016string->symbol\376"
"\003\000\000\002\376\001\000\000\007number\077\376\003\000\000\002\376\001\000\000\010integer\077\376\003\000\000\002\376\001\000\000\006exact\077\376\003\000\000\002\376\001\000\000\005real\077\376\003\000\000\002\376\001\000\000\010compl"
"ex\077\376\003\000\000\002\376\001\000\000\010inexact\077\376\003\000\000\002\376\001\000\000\011rational\077\376\003\000\000\002\376\001\000\000\005zero\077\376\003\000\000\002\376\001\000\000\004odd\077\376\003\000\000\002\376\001\000\000\005e"
"ven\077\376\003\000\000\002\376\001\000\000\011positive\077\376\003\000\000\002\376\001\000\000\011negative\077\376\003\000\000\002\376\001\000\000\003max\376\003\000\000\002\376\001\000\000\003min\376\003\000\000\002\376\001\000\000\001+\376"
"\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001\052\376\003\000\000\002\376\001\000\000\001/\376\003\000\000\002\376\001\000\000\001=\376\003\000\000\002\376\001\000\000\001>\376\003\000\000\002\376\001\000\000\001<\376\003\000\000\002\376\001\000\000\002>=\376\003\000"
"\000\002\376\001\000\000\002<=\376\003\000\000\002\376\001\000\000\010quotient\376\003\000\000\002\376\001\000\000\011remainder\376\003\000\000\002\376\001\000\000\006modulo\376\003\000\000\002\376\001\000\000\003gcd\376\003\000\000\002"
"\376\001\000\000\003lcm\376\003\000\000\002\376\001\000\000\003abs\376\003\000\000\002\376\001\000\000\005floor\376\003\000\000\002\376\001\000\000\007ceiling\376\003\000\000\002\376\001\000\000\010truncate\376\003\000\000\002\376\001\000\000"
"\005round\376\003\000\000\002\376\001\000\000\016exact->inexact\376\003\000\000\002\376\001\000\000\016inexact->exact\376\003\000\000\002\376\001\000\000\003exp\376\003\000\000\002\376\001\000\000\003log"
"\376\003\000\000\002\376\001\000\000\004expt\376\003\000\000\002\376\001\000\000\004sqrt\376\003\000\000\002\376\001\000\000\003sin\376\003\000\000\002\376\001\000\000\003cos\376\003\000\000\002\376\001\000\000\003tan\376\003\000\000\002\376\001\000\000\004asi"
"n\376\003\000\000\002\376\001\000\000\004acos\376\003\000\000\002\376\001\000\000\004atan\376\003\000\000\002\376\001\000\000\016number->string\376\003\000\000\002\376\001\000\000\016string->number\376\003\000"
"\000\002\376\001\000\000\005char\077\376\003\000\000\002\376\001\000\000\006char=\077\376\003\000\000\002\376\001\000\000\006char>\077\376\003\000\000\002\376\001\000\000\006char<\077\376\003\000\000\002\376\001\000\000\007char>=\077\376\003\000"
"\000\002\376\001\000\000\007char<=\077\376\003\000\000\002\376\001\000\000\011char-ci=\077\376\003\000\000\002\376\001\000\000\011char-ci<\077\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\003\000\000\002\376\001\000\000"
"\012char-ci>=\077\376\003\000\000\002\376\001\000\000\012char-ci<=\077\376\003\000\000\002\376\001\000\000\020char-alphabetic\077\376\003\000\000\002\376\001\000\000\020char-whitespa"
"ce\077\376\003\000\000\002\376\001\000\000\015char-numeric\077\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\003\000\000\002\376\001\000\000\020char-lower-case\077\376\003"
"\000\000\002\376\001\000\000\013char-upcase\376\003\000\000\002\376\001\000\000\015char-downcase\376\003\000\000\002\376\001\000\000\015char->integer\376\003\000\000\002\376\001\000\000\015integ"
"er->char\376\003\000\000\002\376\001\000\000\007string\077\376\003\000\000\002\376\001\000\000\010string=\077\376\003\000\000\002\376\001\000\000\010string>\077\376\003\000\000\002\376\001\000\000\010string<\077\376"
"\003\000\000\002\376\001\000\000\011string>=\077\376\003\000\000\002\376\001\000\000\011string<=\077\376\003\000\000\002\376\001\000\000\013string-ci=\077\376\003\000\000\002\376\001\000\000\013string-ci<\077\376"
"\003\000\000\002\376\001\000\000\013string-ci>\077\376\003\000\000\002\376\001\000\000\014string-ci>=\077\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\003\000\000\002\376\001\000\000\013make-s"
"tring\376\003\000\000\002\376\001\000\000\015string-length\376\003\000\000\002\376\001\000\000\012string-ref\376\003\000\000\002\376\001\000\000\013string-set!\376\003\000\000\002\376\001\000\000\015s"
"tring-append\376\003\000\000\002\376\001\000\000\013string-copy\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\014list->string\376\003\000"
"\000\002\376\001\000\000\011substring\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\007vector\077\376\003\000\000\002\376\001\000\000\013make-vector\376\003\000\000"
"\002\376\001\000\000\012vector-ref\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\006vector\376\003\000\000\002\376\001\000\000\015v"
"ector-length\376\003\000\000\002\376\001\000\000\014vector->list\376\003\000\000\002\376\001\000\000\014list->vector\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003"
"\000\000\002\376\001\000\000\012procedure\077\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\005force\376"
"\003\000\000\002\376\001\000\000\036call-with-current-continuation\376\003\000\000\002\376\001\000\000\013input-port\077\376\003\000\000\002\376\001\000\000\014output-por"
"t\077\376\003\000\000\002\376\001\000\000\022current-input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\024call-with-i"
"nput-file\376\003\000\000\002\376\001\000\000\025call-with-output-file\376\003\000\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-"
"output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376\003\000\000\002\376\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\004load\376\003"
"\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\013eof-object\077\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000"
"\005write\376\003\000\000\002\376\001\000\000\007display\376\003\000\000\002\376\001\000\000\012write-char\376\003\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\024with-input"
"-from-file\376\003\000\000\002\376\001\000\000\023with-output-to-file\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\013char-ready\077\376\003\000\000\002\376"
"\001\000\000\011imag-part\376\003\000\000\002\376\001\000\000\011real-part\376\003\000\000\002\376\001\000\000\011magnitude\376\003\000\000\002\376\001\000\000\011numerator\376\003\000\000\002\376\001\000\000\013"
"denominator\376\003\000\000\002\376\001\000\000\005angle\376\003\000\000\002\376\001\000\000\031scheme-report-environment\376\003\000\000\002\376\001\000\000\020null-envi"
"ronment\376\003\000\000\002\376\001\000\000\027interaction-environment\376\003\000\000\002\376\001\000\000\004else\376\377\016");
lf[171]=C_h_intern(&lf[171],29,"\003sysdefault-macro-environment");
lf[172]=C_h_intern(&lf[172],18,"module-environment");
lf[173]=C_h_intern(&lf[173],11,"environment");
lf[174]=C_h_intern(&lf[174],17,"register-feature!");
lf[175]=C_h_intern(&lf[175],19,"module-environments");
lf[176]=C_h_intern(&lf[176],4,"r5rs");
lf[177]=C_h_intern(&lf[177],6,"scheme");
lf[178]=C_h_intern(&lf[178],9,"r5rs-null");
lf[179]=C_h_intern(&lf[179],9,"r4rs-null");
lf[180]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\014dynamic-wind\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\020call-with-values\376\377\016");
lf[181]=C_h_intern(&lf[181],4,"r4rs");
lf[182]=C_h_intern(&lf[182],14,"make-parameter");
C_register_lf2(lf,183,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2970,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:72: make-parameter */
t3=*((C_word*)lf[182]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3274 in k3271 in k3267 in a3264 in k3258 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3276,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5880 in k5918 in k5868 in loop in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5882(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_5882,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_5854(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
if(C_truep(((C_word*)t0)[5])){
/* modules.scm:487: ##sys#module-rename */
t2=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5902,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5906,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:483: symbol->string */
t6=*((C_word*)lf[92]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k3271 in k3267 in a3264 in k3258 in with-module-aliases in k2972 in k2968 */
static void C_ccall f_3273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3273,2,av);}
a=C_alloc(4);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3276,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:124: module-alias-environment390391 */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* map-loop884 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_fcall f_5066(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_5066,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5091,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_cdr(t4);
if(C_truep(C_i_pairp(t6))){
t7=C_u_i_car(t4);
t8=C_i_cadr(t4);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4789,a[2]=t5,a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_i_caddr(t4);
t12=C_u_i_car(t4);
/* modules.scm:363: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t10;
av2[2]=t11;
av2[3]=t12;
tp(4,av2);}}
else{
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7668 in alias-global-hook in k2972 in k2968 */
static void C_ccall f_7670(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7670,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_i_getprop(t2,lf[68],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=((C_word*)t0)[2];
if(C_truep(C_i_getprop(t4,lf[49],C_SCHEME_FALSE))){
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:777: ##sys#active-eval-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[141]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[141]+1);
av2[1]=t5;
tp(2,av2);}}}}}

/* ##sys#register-module in k2972 in k2968 */
static void C_ccall f_3878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +21,c,1)))){
C_save_and_reclaim((void*)f_3878,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+21);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=t2;
t14=C_a_i_record(&a,14,lf[3],t13,t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t6,t10,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t15=C_a_i_cons(&a,2,t2,t14);
t16=C_a_i_cons(&a,2,t15,*((C_word*)lf[22]+1));
t17=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t16);
t18=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* k2968 */
static void C_ccall f_2970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2970,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#current-module ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2974,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:73: make-parameter */
t4=*((C_word*)lf[182]+1);{
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

/* k5868 in loop in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5870,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_5854(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:474: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t2;
tp(2,av2);}}}

/* a6117 in a6111 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6118,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[101]+1));
t3=C_mutate2((C_word*)lf[101]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a6111 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_6112,2,av);}
a=C_alloc(18);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6118,a[2]=t5,a[3]=t3,a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6123,a[2]=((C_word*)t0)[2],a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6129,a[2]=t3,a[3]=t5,a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:569: ##sys#dynamic-wind */
t9=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k7419 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7421,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7430,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li114),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7430(t11,t7,((C_word*)t0)[4]);}

/* k5055 in map-loop912 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_5057(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5057,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5032(t6,((C_word*)t0)[5],t5);}

/* ##sys#module-exports in k2972 in k2968 */
static void C_ccall f_3214(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3214,3,av);}
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[10]);
t5=C_i_block_ref(t3,C_fix(2));
t6=t2;
t7=C_i_check_structure_2(t6,lf[3],lf[11]);
t8=C_i_block_ref(t6,C_fix(10));
t9=t2;
t10=C_i_check_structure_2(t9,lf[3],lf[12]);
t11=C_i_block_ref(t9,C_fix(11));
/* modules.scm:112: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t8;
av2[4]=t11;
C_values(5,av2);}}

/* k4728 in map-loop856 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4730,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:351: ##sys#error */
t4=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[62];
av2[3]=lf[66];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* modules.scm:351: ##sys#error */
t3=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[62];
av2[3]=lf[66];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k7426 in k7419 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7428,2,av);}
/* modules.scm:739: append */
t2=*((C_word*)lf[17]+1);{
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

/* k2972 in k2968 */
static void C_ccall f_2974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(110,c,10)))){
C_save_and_reclaim((void *)f_2974,2,av);}
a=C_alloc(110);
t2=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#module-alias-environment ...) */,t1);
t3=C_mutate2(&lf[2] /* (set! module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2988,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[5]+1 /* (set! module-undefined-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3069,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[6]+1 /* (set! set-module-undefined-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3078,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[8]+1 /* (set! ##sys#module-name ...) */,lf[2]);
t7=C_mutate2((C_word*)lf[9]+1 /* (set! ##sys#module-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[13]+1 /* (set! ##sys#register-module-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3238,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! ##sys#with-module-aliases ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3256,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[18]+1 /* (set! ##sys#resolve-module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3359,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[21]+1 /* (set! ##sys#find-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3402,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_mutate2((C_word*)lf[24]+1 /* (set! ##sys#switch-module ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3456,a[2]=t13,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate2((C_word*)lf[28]+1 /* (set! ##sys#add-to-export-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3509,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[31]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3598,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[32]+1 /* (set! ##sys#register-meta-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3601,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[34]+1 /* (set! check-for-redef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3621,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[38]+1 /* (set! ##sys#register-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3642,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[43]+1 /* (set! ##sys#register-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3731,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[46]+1 /* (set! ##sys#register-undefined ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3812,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[47]+1 /* (set! ##sys#register-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3878,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[48]+1 /* (set! ##sys#mark-imported-symbols ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3928,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2(&lf[50] /* (set! merge-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4256,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2((C_word*)lf[51]+1 /* (set! ##sys#compiled-module-registration ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4308,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate2((C_word*)lf[60]+1 /* (set! ##sys#register-compiled-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4700,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate2((C_word*)lf[67]+1 /* (set! ##sys#primitive-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5140,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate2((C_word*)lf[72]+1 /* (set! ##sys#register-primitive-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5159,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate2((C_word*)lf[42]+1 /* (set! ##sys#find-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5332,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate2((C_word*)lf[74]+1 /* (set! ##sys#finalize-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5410,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(lf[22] /* ##sys#module-table */,0,C_SCHEME_END_OF_LIST);
t32=C_mutate2((C_word*)lf[99]+1 /* (set! ##sys#find-module/import-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6025,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[108]+1 /* (set! ##sys#expand-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6177,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2((C_word*)lf[41]+1 /* (set! ##sys#module-rename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7615,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[140]+1 /* (set! ##sys#alias-global-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7633,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[143]+1 /* (set! ##sys#register-interface ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7743,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[145]+1 /* (set! ##sys#validate-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7751,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[156]+1 /* (set! ##sys#register-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7956,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[158]+1 /* (set! ##sys#instantiate-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7972,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[162]+1 /* (set! ##sys#match-functor-argument ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8190,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t41=lf[170];
t42=*((C_word*)lf[171]+1);
t43=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8350,a[2]=((C_word*)t0)[2],a[3]=t42,a[4]=t41,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:931: ##sys#register-primitive-module */
t44=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t44;
av2[1]=t43;
av2[2]=lf[181];
av2[3]=t41;
av2[4]=*((C_word*)lf[171]+1);
((C_proc)(void*)(*((C_word*)t44+1)))(5,av2);}}

/* k5574 in g1197 in k5569 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5576,2,av);}
/* modules.scm:504: display */
t2=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5569 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5571(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5571,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5572,a[2]=((C_word*)t0)[2],a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5584,a[2]=t4,a[3]=t2,a[4]=((C_word)li58),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5584(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6136 in a6133 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6138,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6141,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:569: current-environment13401341 */
t4=((C_word*)t0)[9];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* g1197 in k5569 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5572(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5572,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5576,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:503: display */
t4=*((C_word*)lf[77]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[84];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a6133 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6134,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:569: current-module13381339 */
t3=((C_word*)t0)[9];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7075 in map-loop1716 in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
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

/* k3831 in g583 in k3817 in register-undefined in k2972 in k2968 */
static void C_fcall f_3833(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_3833,2,t0,t1);}
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

/* set-module-undefined-list! in k2972 in k2968 */
static void C_ccall f_3078(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3078,4,av);}
t4=C_i_check_structure_2(t2,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(6);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_4765,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4805,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5066,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5066(t13,t9,t7);}

/* for-each-loop1651 in k6767 in loop in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6788(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6788,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6798,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:665: g1652 */
t5=((C_word*)t0)[3];
f_6756(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* f8914 in g1652 in loop in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f8914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8914,2,av);}
/* modules.scm:593: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* ##sys#register-export in k2972 in k2968 */
static void C_ccall f_3642(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3642,4,av);}
a=C_alloc(5);
if(C_truep(t3)){
t4=t3;
t5=C_i_check_structure_2(t4,lf[3],lf[10]);
t6=C_i_block_ref(t4,C_fix(2));
t7=C_eqp(C_SCHEME_TRUE,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3652,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t7)){
t9=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t7;
f_3652(2,av2);}}
else{
/* modules.scm:192: ##sys#find-export */
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7405 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7407,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(2);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5028 in k5024 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_5030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_5030,2,av);}
a=C_alloc(18);
/* modules.scm:371: merge-se */
f_4256(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* map-loop912 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_fcall f_5032(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5032,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5057,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4821,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_u_i_cdr(t4);
t10=C_u_i_car(t4);
/* modules.scm:368: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[64]+1);
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

/* map-loop1716 in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7052(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7052,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7077,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:692: g1722 */
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

/* k3653 in k3650 in register-export in k2972 in k2968 */
static void C_ccall f_3655(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_3655,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3658,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3718,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[4];
t6=C_i_check_structure_2(t5,lf[3],lf[4]);
t7=C_i_block_ref(t5,C_fix(1));
/* modules.scm:195: ##sys#module-rename */
t8=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k3656 in k3653 in k3650 in register-export in k2972 in k2968 */
static void C_ccall f_3658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3658,2,av);}
a=C_alloc(10);
t2=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3664,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3714,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:198: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3664(2,av2);}}}

/* a6128 in a6111 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6129,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[101]+1));
t3=C_mutate2((C_word*)lf[101]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* g1698 in loop in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6850(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_6850,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=C_i_cadr(t2);
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6866,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:674: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* a6122 in a6111 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6123,2,av);}
/* modules.scm:576: ##sys#load */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[102]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[102]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k6773 in k6767 in loop in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_6775,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:669: values */{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
C_values(7,av2);}}

/* k4753 in map-loop856 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_4755,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3650 in register-export in k2972 in k2968 */
static void C_ccall f_3652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3652,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3655,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:193: module-undefined-list */
t4=*((C_word*)lf[5]+1);{
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

/* k7649 in g2005 in k7638 in mrename in alias-global-hook in k2972 in k2968 */
static void C_ccall f_7651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7651,2,av);}
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[3],lf[4]);
t4=C_i_block_ref(t2,C_fix(1));
/* modules.scm:767: ##sys#module-rename */
t5=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7041 in map-loop1742 in k7004 in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7043(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7043,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7018(t6,((C_word*)t0)[5],t5);}

/* k3665 in k3662 in k3656 in k3653 in k3650 in register-export in k2972 in k2968 */
static void C_ccall f_3667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_3667,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[29]);
t5=C_i_block_ref(t3,C_fix(4));
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=((C_word*)t0)[4];
t8=C_i_check_structure_2(t7,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t9=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t2;
av2[2]=t7;
av2[3]=C_fix(4);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k5592 in for-each-loop1196 in k5569 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5594,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5584(t3,((C_word*)t0)[4],t2);}

/* k4787 in map-loop884 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_4789,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3662 in k3656 in k3653 in k3650 in register-export in k2972 in k2968 */
static void C_ccall f_3664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3664,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3703,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:199: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7621 in module-rename in k2972 in k2968 */
static void C_ccall f_7623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7623,2,av);}
/* modules.scm:754: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k5547 in for-each-loop1227 in k5517 in k5480 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5549,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5539(t3,((C_word*)t0)[4],t2);}

/* g2005 in k7638 in mrename in alias-global-hook in k2972 in k2968 */
static void C_fcall f_7644(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_7644,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7651,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t2;
t5=C_i_check_structure_2(t4,lf[3],lf[4]);
t6=C_i_block_ref(t4,C_fix(1));
/* modules.scm:767: ##sys#module-rename */
t7=*((C_word*)lf[41]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* modules.scm:766: ##sys#register-undefined */
t4=*((C_word*)lf[46]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k7638 in mrename in alias-global-hook in k2972 in k2968 */
static void C_ccall f_7640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7640,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li123),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:760: g2005 */
t3=t2;
f_7644(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* mrename in alias-global-hook in k2972 in k2968 */
static void C_fcall f_7636(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7636,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7640,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:762: ##sys#current-module */
t4=*((C_word*)lf[0]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6796 in for-each-loop1651 in k6767 in loop in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6798,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6788(t3,((C_word*)t0)[4],t2);}

/* k3668 in k3665 in k3662 in k3656 in k3653 in k3650 in register-export in k2972 in k2968 */
static void C_ccall f_3670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_3670,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE);
t3=((C_word*)t0)[4];
t4=C_i_check_structure_2(t3,lf[3],lf[39]);
t5=C_i_block_ref(t3,C_fix(3));
t6=C_a_i_cons(&a,2,t2,t5);
t7=((C_word*)t0)[5];
t8=((C_word*)t0)[4];
t9=C_i_check_structure_2(t8,lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t10=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_fix(3);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* ##sys#module-rename in k2972 in k2968 */
static void C_ccall f_7615(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7615,4,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7623,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t3,C_fix(1));
t6=C_slot(t2,C_fix(1));
/* modules.scm:755: string-append */
t7=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=lf[139];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* ##sys#alias-global-hook in k2972 in k2968 */
static void C_ccall f_7633(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7633,5,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7636,a[2]=t3,a[3]=t4,a[4]=((C_word)li124),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7670,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:769: ##sys#qualified-symbol? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[142]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[142]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}

/* k7600 in for-each-loop1771 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7602,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7592(t3,((C_word*)t0)[4],t2);}

/* k7014 in k7004 in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7016,2,av);}
/* modules.scm:692: values */{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
av2[6]=((C_word*)t0)[6];
C_values(7,av2);}}

/* k3981 in for-each-loop611 in mark-imported-symbols in k2972 in k2968 */
static void C_ccall f_3983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3983,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3973(t3,((C_word*)t0)[4],t2);}

/* k7004 in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_7006,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(((C_word*)t0)[3],lf[16]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7016,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7018,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li105),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7018(t13,t9,((C_word*)t0)[3]);}

/* k8239 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8241,2,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8254,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8258,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:887: symbol->string */
t4=*((C_word*)lf[92]+1);{
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
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g1068 in k5227 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_fcall f_5234(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5234,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:415: ##sys#error */
t4=*((C_word*)lf[65]+1);{
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

/* map-loop1742 in k7004 in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7018(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7018,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7043,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:692: g1748 */
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

/* k8252 in k8239 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8254,2,av);}
/* modules.scm:883: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[3];
av2[3]=t1;
tp(4,av2);}}

/* k8256 in k8239 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8258,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:888: symbol->string */
t4=*((C_word*)lf[92]+1);{
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

/* for-each-loop1196 in k5569 in k5477 in k5474 in k5471 in k5467 in g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5584(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5584,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5594,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:501: g1197 */
t5=((C_word*)t0)[3];
f_5572(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5221 in map-loop1035 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_ccall f_5223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5223,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5227 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_ccall f_5229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_5229,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5256,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5258,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li50),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_5258(t13,t9,((C_word*)t0)[4]);}

/* k8260 in k8256 in k8239 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8262,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:889: symbol->string */
t4=*((C_word*)lf[92]+1);{
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

/* map-loop1935 in k7419 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7430(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7430,3,t0,t1,t2);}
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

/* k8264 in k8260 in k8256 in k8239 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_8266,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8286,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8288,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li141),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8288(t13,t9,t7);}

/* k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_4577,2,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,lf[57],t1);
t3=t2;
t4=((C_word*)t0)[2];
t5=C_i_check_structure_2(t4,lf[3],lf[11]);
t6=C_i_block_ref(t4,C_fix(10));
t7=C_a_i_list(&a,2,lf[55],t6);
t8=t7;
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4448,a[2]=((C_word*)t0)[3],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t14=C_i_check_list_2(((C_word*)t0)[4],lf[16]);
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4488,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=t8,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4490,a[2]=t11,a[3]=t17,a[4]=t13,a[5]=t12,a[6]=((C_word)li34),tmp=(C_word)a,a+=7,tmp));
t19=((C_word*)t17)[1];
f_4490(t19,t15,((C_word*)t0)[4]);}

/* map-loop750 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_fcall f_4579(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4579,3,t0,t1,t2);}
a=C_alloc(30);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4604,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_car(t4);
t7=C_u_i_cdr(t4);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t3;
f_4604(t9,C_a_i_list(&a,2,lf[55],t8));}
else{
t6=C_u_i_car(t4);
t7=C_a_i_list(&a,2,lf[55],t6);
t8=C_a_i_list(&a,2,lf[55],C_SCHEME_END_OF_LIST);
t9=C_u_i_cdr(t4);
t10=t3;
f_4604(t10,C_a_i_list(&a,4,lf[57],t7,t8,t9));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6570 in loop in loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_6572,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:648: values */{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
C_values(7,av2);}}

/* ##sys#compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4308(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4308,3,av);}
a=C_alloc(10);
t3=t2;
t4=C_i_check_structure_2(t3,lf[3],lf[39]);
t5=C_i_block_ref(t3,C_fix(3));
t6=t5;
t7=t2;
t8=C_i_check_structure_2(t7,lf[3],lf[4]);
t9=C_i_block_ref(t7,C_fix(1));
t10=t2;
t11=C_i_check_structure_2(t10,lf[3],lf[52]);
t12=C_i_block_ref(t10,C_fix(7));
t13=t2;
t14=C_i_check_structure_2(t13,lf[3],lf[12]);
t15=C_i_block_ref(t13,C_fix(11));
t16=t15;
t17=t2;
t18=C_i_check_structure_2(t17,lf[3],lf[53]);
t19=C_i_block_ref(t17,C_fix(8));
t20=t19;
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4331,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t16,a[6]=t20,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t12))){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4698,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:312: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[59]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[59]+1);
av2[1]=t22;
av2[2]=t12;
tp(3,av2);}}
else{
t22=t21;
f_4331(t22,C_SCHEME_END_OF_LIST);}}

/* g2187 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_fcall f_8201(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8201,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t2:C_i_car(t2));
t5=t4;
t6=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[11]);
t7=C_i_block_ref(((C_word*)t0)[2],C_fix(10));
t8=C_i_assq(t5,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8214,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t8)){
t10=t9;
f_8214(t10,t8);}
else{
t10=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[12]);
t11=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
t12=t9;
f_8214(t12,C_i_assq(t5,t11));}}

/* g1832 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7203(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7203,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7239,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:721: macro-env */
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}

/* k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7202(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7202,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7203,a[2]=((C_word*)t0)[2],a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7504,a[2]=t6,a[3]=t2,a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7504(t8,t4,((C_word*)t0)[3]);}

/* k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6728,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:660: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=((C_word*)t0)[11];
av2[4]=lf[125];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6955,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:684: c */
t3=((C_word*)t0)[13];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[14];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k7237 in g1832 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_7239,2,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
t7=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=((C_word*)t0)[3];
t8=C_u_i_car(t7);
/* modules.scm:723: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[128]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[128]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[130];
av2[3]=t8;
tp(4,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5448(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_5448,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[7]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
t6=C_i_check_structure_2(t5,lf[3],lf[12]);
t7=C_i_block_ref(t5,C_fix(11));
/* modules.scm:454: merge-se */
f_4256(t3,C_a_i_list(&a,2,t7,t2));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5953,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:455: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t5;
tp(2,av2);}}}

/* ##sys#register-compiled-module in k2972 in k2968 */
static void C_ccall f_4700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c<6) C_bad_min_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-6)*C_SIZEOF_PAIR +20,c,3)))){
C_save_and_reclaim((void*)f_4700,c,av);}
a=C_alloc((c-6)*C_SIZEOF_PAIR+20);
t6=C_build_rest(&a,c,6,av);
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
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_car(t6));
t9=t8;
t10=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t12)[1];
t14=C_i_check_list_2(t5,lf[16]);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4765,a[2]=t3,a[3]=t9,a[4]=t2,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5100,a[2]=t12,a[3]=t17,a[4]=t13,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_5100(t19,t15,t5);}

/* g1601 in loop in loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6562(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_6562,3,t0,t1,t2);}
a=C_alloc(3);
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8899,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:593: sprintf */
t5=*((C_word*)lf[118]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[122];
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8212 in g2187 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_fcall f_8214(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_8214,2,t0,t1);}
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
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6713 in map-loop1556 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6715(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6715,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6690(t6,((C_word*)t0)[5],t5);}

/* k6593 in for-each-loop1600 in loop in loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6595,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6585(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1600 in loop in loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6585(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6585,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6595,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:644: g1601 */
t5=((C_word*)t0)[3];
f_6562(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* for-each-loop611 in mark-imported-symbols in k2972 in k2968 */
static void C_fcall f_3973(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3973,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3983,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3937,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_i_cdr(t6);
if(C_truep(C_i_symbolp(t8))){
t9=C_u_i_car(t6);
t10=C_u_i_cdr(t6);
t11=C_eqp(t9,t10);
t12=t7;
f_3937(t12,C_i_not(t11));}
else{
t9=t7;
f_3937(t9,C_SCHEME_FALSE);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_5451,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[8]);
t5=(C_truep(t4)?((C_word*)t0)[2]:((C_word*)t0)[8]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5823,a[2]=t2,a[3]=t7,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word)li69),tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_5823(t9,t3,t5);}

/* g1181 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5455(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5455,3,t0,t1,t2);}
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
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5469,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:494: open-output-string */
t8=*((C_word*)lf[87]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_5454,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5608,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* modules.scm:520: module-undefined-list */
t5=*((C_word*)lf[5]+1);{
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

/* k7246 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7248(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_7248,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7266,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7270,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:748: import-env */
t5=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_7245,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7273,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7273(2,av2);}}
else{
/* modules.scm:727: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[131];
tp(4,av2);}}}
else{
t3=t2;
f_7248(t3,C_SCHEME_UNDEFINED);}}

/* k7277 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7279(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7279,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7289,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_structure_2(((C_word*)t0)[3],lf[3],lf[56]);
t5=C_i_block_ref(((C_word*)t0)[3],C_fix(12));
/* modules.scm:746: merge-se */
f_4256(t3,C_a_i_list(&a,2,t5,((C_word*)t0)[4]));}

/* k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6525,2,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:638: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[123];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6728,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* modules.scm:659: c */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[16];
av2[3]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_6528,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(((C_word*)t0)[3],lf[16]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6537,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6690,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6690(t12,t8,((C_word*)t0)[3]);}

/* k7268 in k7246 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7270,2,av);}
/* modules.scm:748: append */
t2=*((C_word*)lf[17]+1);{
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

/* k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_7273,2,av);}
a=C_alloc(27);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[10]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(2));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7279,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(C_SCHEME_TRUE,t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7299,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7396,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[12]);
t9=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
/* modules.scm:730: append */
t10=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7407,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[10]);
t8=C_i_block_ref(((C_word*)t0)[2],C_fix(2));
t9=C_eqp(C_SCHEME_TRUE,t8);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:t8);
t11=t10;
t12=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t13=t12;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t14)[1];
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7421,a[2]=t6,a[3]=t11,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7464,a[2]=t14,a[3]=t18,a[4]=t15,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_7464(t20,t16,((C_word*)t0)[6]);}}

/* k8017 in merr in k7985 in instantiate-functor in k2972 in k2968 */
static void C_ccall f_8019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8019,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:835: err */
t3=((C_word*)t0)[3];
f_7980(t3,((C_word*)t0)[4],C_a_i_list(&a,3,lf[159],((C_word*)t0)[5],t2));}

/* ##sys#switch-module in k2972 in k2968 */
static void C_ccall f_3456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3456,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3503,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:149: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* ##sys#mark-imported-symbols in k2972 in k2968 */
static void C_ccall f_3928(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3928,3,av);}
a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[30]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3973,a[2]=t5,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3973(t7,t1,t2);}

/* map-loop2126 in merr in k7985 in instantiate-functor in k2972 in k2968 */
static void C_fcall f_8021(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8021,3,t0,t1,t2);}
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

/* k7256 in k7249 in k7246 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7258,2,av);}
/* modules.scm:749: macro-env */
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

/* k7249 in k7246 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7251,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7262,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:749: macro-env */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7287 in k7277 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7289,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(12);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* map-loop2208 in k8264 in k8260 in k8256 in k8239 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_fcall f_8288(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_8288,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8313,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8280,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:890: symbol->string */
t7=*((C_word*)lf[92]+1);{
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

/* k8284 in k8264 in k8260 in k8256 in k8239 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,11)))){
C_save_and_reclaim((void *)f_8286,2,av);}{
C_word *av2;
if(c >= 12) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(12);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[89]+1);
av2[3]=lf[164];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[165];
av2[6]=lf[166];
av2[7]=((C_word*)t0)[4];
av2[8]=lf[167];
av2[9]=((C_word*)t0)[5];
av2[10]=lf[168];
av2[11]=t1;
C_apply(12,av2);}}

/* k8278 in map-loop2208 in k8264 in k8260 in k8256 in k8239 in k8192 in match-functor-argument in k2972 in k2968 */
static void C_ccall f_8280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8280,2,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[169];
av2[3]=t1;
tp(4,av2);}}

/* k7280 in k7277 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7282,2,av);}
t2=((C_word*)t0)[2];
f_7248(t2,C_SCHEME_UNDEFINED);}

/* k4513 in map-loop783 in k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4515(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4515,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4490(t6,((C_word*)t0)[5],t5);}

/* k4329 in compiled-module-registration in k2972 in k2968 */
static void C_fcall f_4331(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_4331,2,t0,t1);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4335,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4339,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4676,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:313: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[59]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[59]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}
else{
t5=t4;
f_4339(t5,C_SCHEME_END_OF_LIST);}}

/* k4333 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4335,2,av);}
/* modules.scm:306: ##sys#append */
t2=*((C_word*)lf[54]+1);{
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

/* k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_fcall f_4339(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,3)))){
C_save_and_reclaim_args((void *)trf_4339,2,t0,t1);}
a=C_alloc(27);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4343,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4347,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=*((C_word*)lf[59]+1);
t10=((C_word*)t0)[3];
t11=C_i_check_structure_2(t10,lf[3],lf[33]);
t12=C_i_block_ref(t10,C_fix(9));
t13=C_i_check_list_2(t12,lf[16]);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4628,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4630,a[2]=t7,a[3]=t16,a[4]=t9,a[5]=t8,a[6]=((C_word)li36),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_4630(t18,t14,t12);}

/* k3252 in register-module-alias in k2972 in k2968 */
static void C_ccall f_3254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3254,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:121: ##sys#module-alias-environment */
t3=*((C_word*)lf[1]+1);{
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

/* ##sys#with-module-aliases in k2972 in k2968 */
static void C_ccall f_3256(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3256,4,av);}
a=C_alloc(21);
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3260,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[16]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3319,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3325,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_3325(t15,t11,t2);}

/* k7264 in k7246 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7266,2,av);}
/* modules.scm:748: import-env */
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

/* k6510 in map-loop1487 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6512(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6512,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6487(t6,((C_word*)t0)[5],t5);}

/* k7260 in k7249 in k7246 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7262,2,av);}
/* modules.scm:749: append */
t2=*((C_word*)lf[17]+1);{
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

/* k7297 in k7271 in k7243 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7299,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[29]);
t4=C_i_block_ref(((C_word*)t0)[2],C_fix(4));
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7317,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7360,a[2]=t8,a[3]=t12,a[4]=t9,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7360(t14,t10,((C_word*)t0)[5]);}

/* resolve in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6195(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6195,3,av);}
t3=t2;
t4=C_u_i_assq(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=C_i_cdr(t4);
if(C_truep(t5)){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t2;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t5=C_i_getprop(t3,lf[109],C_SCHEME_FALSE);
if(C_truep(t5)){
if(C_truep(t5)){
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t2;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t6=t2;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,4)))){
C_save_and_reclaim((void *)f_6193,2,av);}
a=C_alloc(42);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6195,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6214,a[2]=((C_word*)t0)[2],a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6257,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6282,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t10,a[5]=t4,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t2,a[13]=((C_word)li108),tmp=(C_word)a,a+=14,tmp));
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7125,a[2]=t10,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:694: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t15;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[133];
tp(5,av2);}}

/* k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6190,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:589: r */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[134];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* loop in k7985 in instantiate-functor in k2972 in k2968 */
static void C_fcall f_8081(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,6)))){
C_save_and_reclaim_args((void *)trf_8081,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8093,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li137),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_8093(t7,t1,t3);}
else{
if(C_truep(C_i_nullp(t3))){
/* modules.scm:854: merr */
t4=((C_word*)t0)[4];
f_7997(t4,t1);}
else{
t4=C_i_car(t3);
t5=C_i_car(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_car(t5):t5);
t8=t7;
t9=C_i_car(t2);
t10=t9;
t11=C_u_i_cdr(t4);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8167,a[2]=t8,a[3]=t10,a[4]=t1,a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:863: ##sys#match-functor-argument */
t13=*((C_word*)lf[162]+1);{
C_word av2[7];
av2[0]=t13;
av2[1]=t12;
av2[2]=t8;
av2[3]=((C_word*)t0)[2];
av2[4]=t10;
av2[5]=t11;
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t13+1)))(7,av2);}}}}

/* k4377 in k4486 in k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4379,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4375(t2,C_a_i_cons(&a,2,lf[57],t1));}

/* k4373 in k4486 in k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_fcall f_4375(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_4375,2,t0,t1);}
a=C_alloc(21);
t2=C_a_i_list(&a,6,lf[60],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
t3=C_a_i_list(&a,1,t2);
/* modules.scm:306: ##sys#append */
t4=*((C_word*)lf[54]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6187,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:588: r */
t4=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[135];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6184,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:587: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[136];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k7088 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7090(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7090,2,av);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_fixnump(t2))){
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=((C_word*)t0)[3];
f_6310(t6,C_i_nullp(t5));}
else{
t3=((C_word*)t0)[3];
f_6310(t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_6310(t2,C_SCHEME_FALSE);}}

/* k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6181,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:586: r */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[137];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* module-undefined-list in k2972 in k2968 */
static void C_ccall f_3069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3069,3,av);}
t3=C_i_check_structure_2(t2,lf[3],lf[5]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(6));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop2 in loop in k7985 in instantiate-functor in k2972 in k2968 */
static void C_fcall f_8093(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_8093,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=C_i_car(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_caar(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8115,a[2]=t4,a[3]=t7,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:847: cadar */
t9=*((C_word*)lf[79]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* modules.scm:852: merr */
t6=((C_word*)t0)[5];
f_7997(t6,t1);}}}

/* loop in k4486 in k4575 in k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_fcall f_4391(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4391,3,t0,t1,t2);}
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
/* modules.scm:339: loop */
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
t8=C_a_i_list(&a,2,lf[55],t7);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4433,a[2]=t9,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=C_u_i_car(t11);
t13=C_u_i_cdr(t12);
/* modules.scm:342: ##sys#strip-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[59]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[59]+1);
av2[1]=t10;
av2[2]=t13;
tp(3,av2);}}}}

/* loop in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6748(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,0,4)))){
C_save_and_reclaim_args((void *)trf_6748,5,t0,t1,t2,t3,t4);}
a=C_alloc(28);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6756,a[2]=((C_word*)t0)[2],a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=t4;
t11=C_i_check_list_2(t10,lf[16]);
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6769,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],a[10]=t5,tmp=(C_word)a,a+=11,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6811,a[2]=t8,a[3]=t14,a[4]=t9,a[5]=((C_word)li99),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_6811(t16,t12,t10);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6850,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t4,a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:663: g1698 */
t8=t7;
f_6850(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:676: loop */
t17=t1;
t18=t8;
t19=t11;
t20=t4;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}}}

/* k8058 in k7985 in instantiate-functor in k2972 in k2968 */
static void C_ccall f_8060(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8060,2,av);}
a=C_alloc(18);
t2=C_eqp(lf[148],((C_word*)t0)[2]);
t3=(C_truep(t2)?C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[3]):C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]));
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,lf[160],t4);
t6=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[161],t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6736(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_6736,5,t0,t1,t2,t3,t4);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=t6,a[9]=((C_word)li101),tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_6748(t8,t1,((C_word*)t0)[7],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6903,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t4,a[6]=((C_word)li102),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:661: g1703 */
t8=t7;
f_6903(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:683: loop */
t13=t1;
t14=t8;
t15=t11;
t16=t4;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}}}

/* k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_6731,2,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word)li103),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_6736(t5,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);}

/* k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_6537,2,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word)li95),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_6542(t5,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);}

/* k4341 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4343,2,av);}
/* modules.scm:306: ##sys#append */
t2=*((C_word*)lf[54]+1);{
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

/* k4345 in k4337 in k4329 in compiled-module-registration in k2972 in k2968 */
static void C_ccall f_4347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_4347,2,av);}
a=C_alloc(27);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_i_check_structure_2(t3,lf[3],lf[4]);
t5=C_i_block_ref(t3,C_fix(1));
t6=C_a_i_list(&a,2,lf[55],t5);
t7=t6;
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=((C_word*)t0)[2];
t13=C_i_check_structure_2(t12,lf[3],lf[56]);
t14=C_i_block_ref(t12,C_fix(12));
t15=C_i_check_list_2(t14,lf[16]);
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t7,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4579,a[2]=t10,a[3]=t18,a[4]=t11,a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_4579(t20,t16,t14);}

/* k5170 in k5254 in k5227 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_ccall f_5172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_5172,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[22]+1));
t4=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6767 in loop in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6769(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6769,2,av);}
a=C_alloc(17);
t2=C_i_check_list_2(t1,lf[30]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6788,a[2]=t5,a[3]=((C_word*)t0)[10],a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6788(t7,t3,t1);}

/* k5164 in register-primitive-module in k2972 in k2968 */
static void C_ccall f_5166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_5166,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5229,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5292,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5292(t13,t9,t7);}

/* g1652 in loop in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6756(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_6756,3,t0,t1,t2);}
a=C_alloc(3);
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8914,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:593: sprintf */
t5=*((C_word*)lf[118]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[124];
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* loop in loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6554(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_6554,5,t0,t1,t2,t3,t4);}
a=C_alloc(21);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6562,a[2]=((C_word*)t0)[2],a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_i_check_list_2(t6,lf[30]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6572,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6585,a[2]=t10,a[3]=t5,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_6585(t12,t8,t6);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6613,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=t3,a[5]=t4,a[6]=((C_word)li92),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:642: g1621 */
t8=t7;
f_6613(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:653: loop */
t13=t1;
t14=t8;
t15=t11;
t16=t4;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}}}

/* k5194 in k5254 in k5227 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_ccall f_5196(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5196,2,av);}
a=C_alloc(9);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[11]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(10));
t4=C_i_check_structure_2(((C_word*)t0)[2],lf[3],lf[12]);
t5=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
/* modules.scm:423: merge-se */
f_4256(((C_word*)t0)[3],C_a_i_list(&a,3,t1,t3,t5));}

/* k5190 in k5186 in k5254 in k5227 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_ccall f_5192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5192,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(13);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* loop in k6535 in k6526 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6542(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_6542,5,t0,t1,t2,t3,t4);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=t6,a[9]=((C_word)li93),tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_6554(t8,t1,((C_word*)t0)[7],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6654,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=t3,a[5]=t4,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:639: g1626 */
t8=t7;
f_6654(t8,t1,t6);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=t2;
t10=C_u_i_car(t9);
t11=C_a_i_cons(&a,2,t10,t3);
/* modules.scm:658: loop */
t13=t1;
t14=t8;
t15=t11;
t16=t4;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}}}

/* k5186 in k5254 in k5227 in k5164 in register-primitive-module in k2972 in k2968 */
static void C_ccall f_5188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5188,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5192,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:426: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7571 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7573,2,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(7);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6310(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,7)))){
C_save_and_reclaim_args((void *)trf_6310,2,t0,t1);}
a=C_alloc(19);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6321,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6325,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[4]);
/* modules.scm:614: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[117]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[117]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_i_cddr(((C_word*)t0)[4]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6338,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6348,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word)li107),tmp=(C_word)a,a+=14,tmp);
/* modules.scm:616: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}}

/* k8392 in k8348 in k2972 in k2968 */
static void C_ccall f_8394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8394,2,av);}
/* modules.scm:932: ##sys#register-primitive-module */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[177];
av2[3]=t1;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4206 in g676 in k4238 in k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_4208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4208,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:290: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4102(t4,((C_word*)t0)[4],t3);}

/* k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6301(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,4)))){
C_save_and_reclaim_args((void *)trf_6301,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
/* modules.scm:610: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[115];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6310,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7090,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* modules.scm:611: c */
t5=((C_word*)t0)[9];{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[14];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k3701 in k3662 in k3656 in k3653 in k3650 in register-export in k2972 in k2968 */
static void C_ccall f_3703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3703,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:199: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3705 in k3701 in k3662 in k3656 in k3653 in k3650 in register-export in k2972 in k2968 */
static void C_ccall f_3707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3707,2,av);}
/* modules.scm:199: check-for-redef */
t2=*((C_word*)lf[34]+1);{
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

/* k7588 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7590,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[132];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop1771 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7592(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7592,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7602,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:695: g1772 */
t5=((C_word*)t0)[3];
f_7129(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6315 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6317,2,av);}
/* modules.scm:612: import-name */
f_6257(((C_word*)t0)[3],t1);}

/* k3712 in k3656 in k3653 in k3650 in register-export in k2972 in k2968 */
static void C_ccall f_3714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3714,2,av);}
/* modules.scm:198: set-module-undefined-list! */
t2=*((C_word*)lf[6]+1);{
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

/* k3716 in k3653 in k3650 in register-export in k2972 in k2968 */
static void C_ccall f_3718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3718,2,av);}
/* modules.scm:194: ##sys#toplevel-definition-hook */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k6319 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6321,2,av);}
/* modules.scm:613: ##sys#intern-symbol */{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
C_string_to_symbol(3,av2);}}

/* map-loop856 in register-compiled-module in k2972 in k2968 */
static void C_fcall f_5100(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5100,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5125,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
if(C_truep(C_i_symbolp(t4))){
t6=t5;
t7=t4;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4730,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:348: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t8;
tp(2,av2);}}
else{
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4755,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_u_i_cdr(t4);
t10=C_u_i_car(t4);
/* modules.scm:358: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[64]+1);
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

/* a6337 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6338,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* modules.scm:618: import-spec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6282(t3,t1,t2);}

/* k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_4250(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_4250,2,av);}
a=C_alloc(7);
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4125,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* modules.scm:275: warn */
t5=((C_word*)t0)[6];
f_4052(t5,t2,lf[93],t4);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[7]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4139,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:272: g669 */
t6=t5;
f_4139(t6,((C_word*)t0)[5],t4);}
else{
t5=((C_word*)t0)[3];
t6=C_u_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4240,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:284: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t7;
tp(2,av2);}}}}

/* merge-se in k2972 in k2968 */
static void C_fcall f_4256(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4256,2,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4260,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word av2[4];
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[17]+1);
av2[3]=t2;
C_apply(4,av2);}}

/* k6323 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6325,2,av);}
/* modules.scm:614: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[116];
av2[3]=t1;
tp(4,av2);}}

/* k4238 in k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_4240(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4240,2,av);}
a=C_alloc(6);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4179,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:272: g676 */
t4=t3;
f_4179(t4,((C_word*)t0)[6],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4227,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* modules.scm:292: warn */
t6=((C_word*)t0)[5];
f_4052(t6,t3,lf[95],t5);}}

/* k6975 in ren in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6977,2,av);}
/* modules.scm:689: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6969 in ren in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6971,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_6355,2,av);}
a=C_alloc(17);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:620: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[121];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* modules.scm:637: c */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[17];
av2[3]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_6358,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(((C_word*)t0)[3],lf[16]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6367,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6487,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li89),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6487(t12,t8,((C_word*)t0)[3]);}

/* loop in k4258 in merge-se in k2972 in k2968 */
static void C_fcall f_4271(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4271,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
t4=t2;
t5=C_u_i_cdr(t4);
if(C_truep(C_i_assq(t3,t5))){
t6=t2;
t7=C_u_i_cdr(t6);
/* modules.scm:301: loop */
t12=t1;
t13=t7;
t1=t12;
t2=t13;
goto loop;}
else{
t6=t2;
t7=C_u_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4298,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
/* modules.scm:302: loop */
t12=t8;
t13=t10;
t1=t12;
t2=t13;
goto loop;}}}

/* k3501 in switch-module in k2972 in k2968 */
static void C_ccall f_3503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3503,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3507,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:149: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3505 in k3501 in switch-module in k2972 in k2968 */
static void C_ccall f_3507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3507,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3463,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:150: ##sys#current-module */
t5=*((C_word*)lf[0]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ren in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6963(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6963,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6971,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6977,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6981,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:690: tostr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_6214(t6,t5,((C_word*)t0)[3]);}

/* ##sys#add-to-export-list in k2972 in k2968 */
static void C_ccall f_3509(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3509,4,av);}
a=C_alloc(6);
t4=t2;
t5=C_i_check_structure_2(t4,lf[3],lf[10]);
t6=C_i_block_ref(t4,C_fix(2));
t7=C_eqp(t6,C_SCHEME_TRUE);
if(C_truep(t7)){
t8=t2;
t9=C_i_check_structure_2(t8,lf[3],lf[29]);
t10=C_i_block_ref(t8,C_fix(4));
t11=t10;
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3525,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:165: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t12;
tp(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3596,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:175: append */
t9=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}

/* for-each-loop1831 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7504(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7504,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7514,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:719: g1832 */
t5=((C_word*)t0)[3];
f_7203(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6348(C_word c,C_word *av){
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
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_6348,7,av);}
a=C_alloc(18);
t7=t2;
t8=t3;
t9=t4;
t10=t5;
t11=t6;
t12=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t8,a[6]=((C_word*)t0)[4],a[7]=t11,a[8]=t9,a[9]=t10,a[10]=t1,a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],tmp=(C_word)a,a+=18,tmp);
/* modules.scm:619: c */
t13=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t12;
av2[2]=((C_word*)t0)[12];
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t13))(4,av2);}}

/* k4258 in merge-se in k2972 in k2968 */
static void C_ccall f_4260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4260,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4271,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4271(t5,((C_word*)t0)[2],t1);}

/* k4058 in warn in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_4060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4060,2,av);}
/* modules.scm:263: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k4062 in warn in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_4064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4064,2,av);}
/* modules.scm:264: string-append */
t2=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[90];
av2[4]=t1;
av2[5]=lf[91];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* loop in k6365 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6372(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,5)))){
C_save_and_reclaim_args((void *)trf_6372,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(21);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6380,a[2]=((C_word*)t0)[2],a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t7=t5;
t8=C_i_check_list_2(t7,lf[30]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6390,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t3,a[8]=t4,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6403,a[2]=t11,a[3]=t6,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6403(t13,t9,t7);}
else{
t6=C_i_car(t2);
t7=C_i_assq(t6,((C_word*)t0)[7]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6431,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t4,a[6]=t5,a[7]=((C_word)li86),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:621: g1544 */
t9=t8;
f_6431(t9,t1,t7);}
else{
t8=t2;
t9=C_u_i_car(t8);
t10=C_i_assq(t9,((C_word*)t0)[9]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6453,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=t5,a[7]=((C_word)li87),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:621: g1548 */
t12=t11;
f_6453(t12,t1,t10);}
else{
t11=t2;
t12=C_u_i_cdr(t11);
t13=t2;
t14=C_u_i_car(t13);
t15=C_a_i_cons(&a,2,t14,t5);
/* modules.scm:636: loop */
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

/* k6388 in loop in k6365 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_6390,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:628: values */{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
C_values(7,av2);}}

/* k4296 in loop in k4258 in merge-se in k2972 in k2968 */
static void C_ccall f_4298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4298,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* warn in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_4052(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4052,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4060,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4064,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:264: symbol->string */
t6=*((C_word*)lf[92]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3523 in add-to-export-list in k2972 in k2968 */
static void C_ccall f_3525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
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
C_save_and_reclaim((void *)f_3525,2,av);}
a=C_alloc(25);
t2=t1;
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3534,a[2]=t4,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3526,a[2]=t2,a[3]=t5,a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[30]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3548,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3568,a[2]=t6,a[3]=t11,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_3568(t13,t9,t7);}

/* g499 in k3523 in add-to-export-list in k2972 in k2968 */
static C_word C_fcall f_3526(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_assq(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return((
  /* modules.scm:168: g515 */
  f_3534(C_a_i(&a,3),((C_word*)t0)[3],t2)
));}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* k6983 in k6979 in ren in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6985,2,av);}
/* modules.scm:690: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* for-each-loop1810 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_7527(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7527,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7537,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:711: g1811 */
t5=((C_word*)t0)[3];
f_7158(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6979 in ren in k6956 in k6953 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6981,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6985,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* modules.scm:690: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[111]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[111]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k6365 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,6)))){
C_save_and_reclaim((void *)f_6367,2,av);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word)li88),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_6372(t5,((C_word*)t0)[9],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* g1524 in loop in k6365 in k6356 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6380(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_6380,3,t0,t1,t2);}
a=C_alloc(3);
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8886,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:593: sprintf */
t5=*((C_word*)lf[118]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[119];
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4898 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4900(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_4900,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4901,a[2]=((C_word*)t0)[2],a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[30]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4926,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4955,a[2]=t6,a[3]=t2,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4955(t8,t4,((C_word*)t0)[3]);}

/* g984 in k4898 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_fcall f_4901(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4901,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4913,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(t6)){
/* modules.scm:387: merge-se */
f_4256(t5,C_a_i_list(&a,2,t6,((C_word*)t0)[2]));}
else{
/* modules.scm:387: merge-se */
f_4256(t5,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k7512 in for-each-loop1831 in k7200 in k7155 in k7143 in a7140 in g1772 in k7126 in k7123 in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_7514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7514,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7504(t3,((C_word*)t0)[4],t2);}

/* k6095 in k6092 in k6089 in k6086 in k6083 in k6079 in k6075 in k6071 in k6067 in k6064 in k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6097,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6092 in k6089 in k6086 in k6083 in k6079 in k6075 in k6071 in k6067 in k6064 in k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6094,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:569: macro-environment13441345 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6089 in k6086 in k6083 in k6079 in k6075 in k6071 in k6067 in k6064 in k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6091,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:569: current-meta-environment13421343 */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k4927 in k4924 in k4898 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4929,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[22]+1));
t4=C_mutate2((C_word*)lf[22]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* g444 in k3398 in loop in resolve-module-name in k2972 in k2968 */
static void C_fcall f_3373(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_3373,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(t2);
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
/* modules.scm:137: error */
t4=*((C_word*)lf[19]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[20];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* modules.scm:138: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3365(t5,t1,t3,t4);}}

/* k4924 in k4898 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4926,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4953,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:391: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6086 in k6083 in k6079 in k6075 in k6071 in k6067 in k6064 in k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6088,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:569: current-environment13401341 */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6083 in k6079 in k6075 in k6071 in k6067 in k6064 in k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6085,2,av);}
a=C_alloc(10);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6088,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:569: current-module13381339 */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[12];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6079 in k6075 in k6071 in k6067 in k6064 in k6061 in k6058 in a6055 in k6045 in k6042 in k6036 in k6030 in k6027 in find-module/import-library in k2972 in k2968 */
static void C_ccall f_6081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6081,2,av);}
a=C_alloc(13);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6085,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:569: macro-environment13441345 */
t4=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k4911 in g984 in k4898 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4913,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop1180 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5796(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5796,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5806,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:442: g1181 */
t5=((C_word*)t0)[3];
f_5455(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4943 in k4924 in k4898 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4945,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4949,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:392: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
tp(2,av2);}}

/* k4947 in k4943 in k4924 in k4898 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4949,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[3],C_SCHEME_FALSE);
/* modules.scm:89: ##sys#block-set! */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(13);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5782 in map-loop1260 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5784(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5784,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5759(t6,((C_word*)t0)[5],t5);}

/* loop in resolve-module-name in k2972 in k2968 */
static void C_fcall f_3365(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3365,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3400,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:133: ##sys#module-alias-environment */
t5=*((C_word*)lf[1]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4963 in for-each-loop983 in k4898 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4965,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4955(t3,((C_word*)t0)[4],t2);}

/* k6917 in g1703 in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_ccall f_6919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6919,2,av);}
/* modules.scm:679: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6736(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k4951 in k4924 in k4898 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4953,2,av);}
a=C_alloc(9);
/* modules.scm:391: merge-se */
f_4256(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* for-each-loop983 in k4898 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_fcall f_4955(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4955,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4965,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:385: g984 */
t5=((C_word*)t0)[3];
f_4901(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g1703 in loop in k6729 in k6726 in k6523 in k6353 in a6347 in k6308 in k6299 in import-spec in k6191 in k6188 in k6185 in k6182 in k6179 in expand-import in k2972 in k2968 */
static void C_fcall f_6903(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_6903,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=C_i_cadr(t2);
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6919,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:681: ##sys#delq */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* map-loop1260 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_fcall f_5759(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5759,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5784,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
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
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5645,a[2]=t8,a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:526: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t9;
tp(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5755 in k5751 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_5757,2,av);}
a=C_alloc(18);
/* modules.scm:529: merge-se */
f_4256(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* k5751 in k5656 in k5650 in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_5753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5753,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5757,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:531: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
tp(2,av2);}}

/* k4986 in for-each-loop962 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_ccall f_4988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4988,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4978(t3,((C_word*)t0)[4],t2);}

/* for-each-loop962 in k4864 in k4838 in k4835 in k4829 in k4803 in k4763 in register-compiled-module in k2972 in k2968 */
static void C_fcall f_4978(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4978,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4988,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* modules.scm:380: g963 */
t5=((C_word*)t0)[3];
f_4867(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4225 in k4238 in k4248 in loop2 in loop in k5615 in k5612 in k5606 in k5452 in k5449 in k5446 in finalize-module in k2972 in k2968 */
static void C_ccall f_4227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4227,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* modules.scm:293: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4102(t4,((C_word*)t0)[4],t3);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[473] = {
{"f_3731:modules_2escm",(void*)f_3731},
{"f_6054:modules_2escm",(void*)f_6054},
{"f_6056:modules_2escm",(void*)f_6056},
{"f_6050:modules_2escm",(void*)f_6050},
{"f_3741:modules_2escm",(void*)f_3741},
{"f_3744:modules_2escm",(void*)f_3744},
{"f_6044:modules_2escm",(void*)f_6044},
{"f_5125:modules_2escm",(void*)f_5125},
{"f_6047:modules_2escm",(void*)f_6047},
{"f_3319:modules_2escm",(void*)f_3319},
{"f_3753:modules_2escm",(void*)f_3753},
{"f_3750:modules_2escm",(void*)f_3750},
{"f_5373:modules_2escm",(void*)f_5373},
{"f_6073:modules_2escm",(void*)f_6073},
{"f_5153:modules_2escm",(void*)f_5153},
{"f_6077:modules_2escm",(void*)f_6077},
{"f_3759:modules_2escm",(void*)f_3759},
{"f_5159:modules_2escm",(void*)f_5159},
{"f_5738:modules_2escm",(void*)f_5738},
{"f_6063:modules_2escm",(void*)f_6063},
{"f_5140:modules_2escm",(void*)f_5140},
{"f_6066:modules_2escm",(void*)f_6066},
{"f_6069:modules_2escm",(void*)f_6069},
{"f_5144:modules_2escm",(void*)f_5144},
{"f_6060:modules_2escm",(void*)f_6060},
{"f_8119:modules_2escm",(void*)f_8119},
{"f_4841:modules_2escm",(void*)f_4841},
{"f_4840:modules_2escm",(void*)f_4840},
{"f_8115:modules_2escm",(void*)f_8115},
{"f_6015:modules_2escm",(void*)f_6015},
{"f_4837:modules_2escm",(void*)f_4837},
{"f_4831:modules_2escm",(void*)f_4831},
{"f_3534:modules_2escm",(void*)f_3534},
{"f_4866:modules_2escm",(void*)f_4866},
{"f_4867:modules_2escm",(void*)f_4867},
{"f_3793:modules_2escm",(void*)f_3793},
{"f_6038:modules_2escm",(void*)f_6038},
{"f_5332:modules_2escm",(void*)f_5332},
{"f_6035:modules_2escm",(void*)f_6035},
{"f_3797:modules_2escm",(void*)f_3797},
{"f_4075:modules_2escm",(void*)f_4075},
{"f_6032:modules_2escm",(void*)f_6032},
{"f_3548:modules_2escm",(void*)f_3548},
{"f_4853:modules_2escm",(void*)f_4853},
{"f_7972:modules_2escm",(void*)f_7972},
{"f_3551:modules_2escm",(void*)f_3551},
{"f_6029:modules_2escm",(void*)f_6029},
{"f_6025:modules_2escm",(void*)f_6025},
{"f_3558:modules_2escm",(void*)f_3558},
{"f_4883:modules_2escm",(void*)f_4883},
{"f_3562:modules_2escm",(void*)f_3562},
{"f_8313:modules_2escm",(void*)f_8313},
{"f_3568:modules_2escm",(void*)f_3568},
{"f_7704:modules_2escm",(void*)f_7704},
{"f_8322:modules_2escm",(void*)f_8322},
{"f_7997:modules_2escm",(void*)f_7997},
{"f_6690:modules_2escm",(void*)f_6690},
{"f_7900:modules_2escm",(void*)f_7900},
{"f_8374:modules_2escm",(void*)f_8374},
{"f_4630:modules_2escm",(void*)f_4630},
{"f_3596:modules_2escm",(void*)f_3596},
{"f_3598:modules_2escm",(void*)f_3598},
{"f_8194:modules_2escm",(void*)f_8194},
{"f_8190:modules_2escm",(void*)f_8190},
{"f_8353:modules_2escm",(void*)f_8353},
{"f_8359:modules_2escm",(void*)f_8359},
{"f_8356:modules_2escm",(void*)f_8356},
{"f_4655:modules_2escm",(void*)f_4655},
{"f_5317:modules_2escm",(void*)f_5317},
{"f_8350:modules_2escm",(void*)f_8350},
{"f_6955:modules_2escm",(void*)f_6955},
{"f_6958:modules_2escm",(void*)f_6958},
{"f_8167:modules_2escm",(void*)f_8167},
{"f_8362:modules_2escm",(void*)f_8362},
{"f_8365:modules_2escm",(void*)f_8365},
{"f_8367:modules_2escm",(void*)f_8367},
{"f_7537:modules_2escm",(void*)f_7537},
{"f_8178:modules_2escm",(void*)f_8178},
{"f_4676:modules_2escm",(void*)f_4676},
{"f_8347:modules_2escm",(void*)f_8347},
{"f_7558:modules_2escm",(void*)f_7558},
{"f_6453:modules_2escm",(void*)f_6453},
{"f_4805:modules_2escm",(void*)f_4805},
{"f_4698:modules_2escm",(void*)f_4698},
{"f_7306:modules_2escm",(void*)f_7306},
{"f_6625:modules_2escm",(void*)f_6625},
{"f_6487:modules_2escm",(void*)f_6487},
{"f_5710:modules_2escm",(void*)f_5710},
{"f_5714:modules_2escm",(void*)f_5714},
{"f_5718:modules_2escm",(void*)f_5718},
{"f_6613:modules_2escm",(void*)f_6613},
{"f_8130:modules_2escm",(void*)f_8130},
{"f_4821:modules_2escm",(void*)f_4821},
{"f_7980:modules_2escm",(void*)f_7980},
{"f_7987:modules_2escm",(void*)f_7987},
{"f_7326:modules_2escm",(void*)f_7326},
{"f_7324:modules_2escm",(void*)f_7324},
{"f_7317:modules_2escm",(void*)f_7317},
{"f_5722:modules_2escm",(void*)f_5722},
{"f_5728:modules_2escm",(void*)f_5728},
{"f_6413:modules_2escm",(void*)f_6413},
{"f_7956:modules_2escm",(void*)f_7956},
{"f_3359:modules_2escm",(void*)f_3359},
{"f_7360:modules_2escm",(void*)f_7360},
{"f_8332:modules_2escm",(void*)f_8332},
{"f_3323:modules_2escm",(void*)f_3323},
{"f_3325:modules_2escm",(void*)f_3325},
{"f_4628:modules_2escm",(void*)f_4628},
{"f_4423:modules_2escm",(void*)f_4423},
{"f_4490:modules_2escm",(void*)f_4490},
{"f_6403:modules_2escm",(void*)f_6403},
{"f_5343:modules_2escm",(void*)f_5343},
{"f_5345:modules_2escm",(void*)f_5345},
{"f_4448:modules_2escm",(void*)f_4448},
{"f_5091:modules_2escm",(void*)f_5091},
{"f_4433:modules_2escm",(void*)f_4433},
{"f_7396:modules_2escm",(void*)f_7396},
{"f_4604:modules_2escm",(void*)f_4604},
{"f_4488:modules_2escm",(void*)f_4488},
{"f8886:modules_2escm",(void*)f8886},
{"f8899:modules_2escm",(void*)f8899},
{"f_4472:modules_2escm",(void*)f_4472},
{"f_7135:modules_2escm",(void*)f_7135},
{"f_7873:modules_2escm",(void*)f_7873},
{"f_7741:modules_2escm",(void*)f_7741},
{"f_7743:modules_2escm",(void*)f_7743},
{"f_7125:modules_2escm",(void*)f_7125},
{"f_7128:modules_2escm",(void*)f_7128},
{"f_7129:modules_2escm",(void*)f_7129},
{"f_7738:modules_2escm",(void*)f_7738},
{"f_6666:modules_2escm",(void*)f_6666},
{"f_7760:modules_2escm",(void*)f_7760},
{"f_7141:modules_2escm",(void*)f_7141},
{"f_7145:modules_2escm",(void*)f_7145},
{"f_7754:modules_2escm",(void*)f_7754},
{"f_7751:modules_2escm",(void*)f_7751},
{"f_6654:modules_2escm",(void*)f_6654},
{"f_6431:modules_2escm",(void*)f_6431},
{"f_7914:modules_2escm",(void*)f_7914},
{"f_7801:modules_2escm",(void*)f_7801},
{"f_5617:modules_2escm",(void*)f_5617},
{"f_5614:modules_2escm",(void*)f_5614},
{"f_5608:modules_2escm",(void*)f_5608},
{"f_7158:modules_2escm",(void*)f_7158},
{"f_7157:modules_2escm",(void*)f_7157},
{"f_6227:modules_2escm",(void*)f_6227},
{"f_5823:modules_2escm",(void*)f_5823},
{"f_6214:modules_2escm",(void*)f_6214},
{"f_5906:modules_2escm",(void*)f_5906},
{"f_5902:modules_2escm",(void*)f_5902},
{"f_5806:modules_2escm",(void*)f_5806},
{"f_6234:modules_2escm",(void*)f_6234},
{"f_4102:modules_2escm",(void*)f_4102},
{"f_6866:modules_2escm",(void*)f_6866},
{"f_3812:modules_2escm",(void*)f_3812},
{"f_6261:modules_2escm",(void*)f_6261},
{"f_3826:modules_2escm",(void*)f_3826},
{"f_6257:modules_2escm",(void*)f_6257},
{"f_3819:modules_2escm",(void*)f_3819},
{"f_6282:modules_2escm",(void*)f_6282},
{"f_6280:modules_2escm",(void*)f_6280},
{"f_5520:modules_2escm",(void*)f_5520},
{"f_5527:modules_2escm",(void*)f_5527},
{"f_5524:modules_2escm",(void*)f_5524},
{"f_5283:modules_2escm",(void*)f_5283},
{"f_4147:modules_2escm",(void*)f_4147},
{"f_7196:modules_2escm",(void*)f_7196},
{"f_5516:modules_2escm",(void*)f_5516},
{"f_5519:modules_2escm",(void*)f_5519},
{"f_4139:modules_2escm",(void*)f_4139},
{"f8860:modules_2escm",(void*)f8860},
{"f_4164:modules_2escm",(void*)f_4164},
{"f_5256:modules_2escm",(void*)f_5256},
{"f_5258:modules_2escm",(void*)f_5258},
{"f_4151:modules_2escm",(void*)f_4151},
{"f_3601:modules_2escm",(void*)f_3601},
{"f_3605:modules_2escm",(void*)f_3605},
{"f_3628:modules_2escm",(void*)f_3628},
{"f_5482:modules_2escm",(void*)f_5482},
{"f_4179:modules_2escm",(void*)f_4179},
{"f_3621:modules_2escm",(void*)f_3621},
{"f_5506:modules_2escm",(void*)f_5506},
{"f_5509:modules_2escm",(void*)f_5509},
{"f_6811:modules_2escm",(void*)f_6811},
{"f_5439:modules_2escm",(void*)f_5439},
{"f_5292:modules_2escm",(void*)f_5292},
{"f_5469:modules_2escm",(void*)f_5469},
{"f_4197:modules_2escm",(void*)f_4197},
{"f_3463:modules_2escm",(void*)f_3463},
{"f_3466:modules_2escm",(void*)f_3466},
{"f_5490:modules_2escm",(void*)f_5490},
{"f_5497:modules_2escm",(void*)f_5497},
{"f_5669:modules_2escm",(void*)f_5669},
{"f_5665:modules_2escm",(void*)f_5665},
{"f_5664:modules_2escm",(void*)f_5664},
{"f_5661:modules_2escm",(void*)f_5661},
{"f_3472:modules_2escm",(void*)f_3472},
{"f_3469:modules_2escm",(void*)f_3469},
{"f_5658:modules_2escm",(void*)f_5658},
{"f_5652:modules_2escm",(void*)f_5652},
{"f_3478:modules_2escm",(void*)f_3478},
{"f_5476:modules_2escm",(void*)f_5476},
{"f_5473:modules_2escm",(void*)f_5473},
{"f_5479:modules_2escm",(void*)f_5479},
{"f_5645:modules_2escm",(void*)f_5645},
{"f_3491:modules_2escm",(void*)f_3491},
{"f_7859:modules_2escm",(void*)f_7859},
{"f_2988:modules_2escm",(void*)f_2988},
{"f_7833:modules_2escm",(void*)f_7833},
{"f_5920:modules_2escm",(void*)f_5920},
{"f_5953:modules_2escm",(void*)f_5953},
{"f_5699:modules_2escm",(void*)f_5699},
{"f_5696:modules_2escm",(void*)f_5696},
{"f_5955:modules_2escm",(void*)f_5955},
{"f_5693:modules_2escm",(void*)f_5693},
{"f_5867:modules_2escm",(void*)f_5867},
{"f_3295:modules_2escm",(void*)f_3295},
{"f_3292:modules_2escm",(void*)f_3292},
{"f_3269:modules_2escm",(void*)f_3269},
{"f_4125:modules_2escm",(void*)f_4125},
{"f_5687:modules_2escm",(void*)f_5687},
{"f_5858:modules_2escm",(void*)f_5858},
{"f_5854:modules_2escm",(void*)f_5854},
{"f_3265:modules_2escm",(void*)f_3265},
{"f_3260:modules_2escm",(void*)f_3260},
{"f_3238:modules_2escm",(void*)f_3238},
{"f_5977:modules_2escm",(void*)f_5977},
{"f_3937:modules_2escm",(void*)f_3937},
{"f_3288:modules_2escm",(void*)f_3288},
{"f_5410:modules_2escm",(void*)f_5410},
{"f_5968:modules_2escm",(void*)f_5968},
{"f_5026:modules_2escm",(void*)f_5026},
{"f_3282:modules_2escm",(void*)f_3282},
{"f_6153:modules_2escm",(void*)f_6153},
{"f_6159:modules_2escm",(void*)f_6159},
{"f_6156:modules_2escm",(void*)f_6156},
{"f_6150:modules_2escm",(void*)f_6150},
{"f_7464:modules_2escm",(void*)f_7464},
{"f_5011:modules_2escm",(void*)f_5011},
{"f_5990:modules_2escm",(void*)f_5990},
{"f_3402:modules_2escm",(void*)f_3402},
{"f_3400:modules_2escm",(void*)f_3400},
{"f_6144:modules_2escm",(void*)f_6144},
{"f_6147:modules_2escm",(void*)f_6147},
{"f_6141:modules_2escm",(void*)f_6141},
{"f_5001:modules_2escm",(void*)f_5001},
{"f_5539:modules_2escm",(void*)f_5539},
{"f_5898:modules_2escm",(void*)f_5898},
{"f_6174:modules_2escm",(void*)f_6174},
{"f_6177:modules_2escm",(void*)f_6177},
{"f_6170:modules_2escm",(void*)f_6170},
{"toplevel:modules_2escm",(void*)C_modules_toplevel},
{"f_3276:modules_2escm",(void*)f_3276},
{"f_5882:modules_2escm",(void*)f_5882},
{"f_3273:modules_2escm",(void*)f_3273},
{"f_5066:modules_2escm",(void*)f_5066},
{"f_7670:modules_2escm",(void*)f_7670},
{"f_3878:modules_2escm",(void*)f_3878},
{"f_2970:modules_2escm",(void*)f_2970},
{"f_5870:modules_2escm",(void*)f_5870},
{"f_6118:modules_2escm",(void*)f_6118},
{"f_6112:modules_2escm",(void*)f_6112},
{"f_7421:modules_2escm",(void*)f_7421},
{"f_5057:modules_2escm",(void*)f_5057},
{"f_3214:modules_2escm",(void*)f_3214},
{"f_4730:modules_2escm",(void*)f_4730},
{"f_7428:modules_2escm",(void*)f_7428},
{"f_2974:modules_2escm",(void*)f_2974},
{"f_5576:modules_2escm",(void*)f_5576},
{"f_5571:modules_2escm",(void*)f_5571},
{"f_6138:modules_2escm",(void*)f_6138},
{"f_5572:modules_2escm",(void*)f_5572},
{"f_6134:modules_2escm",(void*)f_6134},
{"f_7077:modules_2escm",(void*)f_7077},
{"f_3833:modules_2escm",(void*)f_3833},
{"f_3078:modules_2escm",(void*)f_3078},
{"f_4765:modules_2escm",(void*)f_4765},
{"f_6788:modules_2escm",(void*)f_6788},
{"f8914:modules_2escm",(void*)f8914},
{"f_3642:modules_2escm",(void*)f_3642},
{"f_7407:modules_2escm",(void*)f_7407},
{"f_5030:modules_2escm",(void*)f_5030},
{"f_5032:modules_2escm",(void*)f_5032},
{"f_7052:modules_2escm",(void*)f_7052},
{"f_3655:modules_2escm",(void*)f_3655},
{"f_3658:modules_2escm",(void*)f_3658},
{"f_6129:modules_2escm",(void*)f_6129},
{"f_6850:modules_2escm",(void*)f_6850},
{"f_6123:modules_2escm",(void*)f_6123},
{"f_6775:modules_2escm",(void*)f_6775},
{"f_4755:modules_2escm",(void*)f_4755},
{"f_3652:modules_2escm",(void*)f_3652},
{"f_7651:modules_2escm",(void*)f_7651},
{"f_7043:modules_2escm",(void*)f_7043},
{"f_3667:modules_2escm",(void*)f_3667},
{"f_5594:modules_2escm",(void*)f_5594},
{"f_4789:modules_2escm",(void*)f_4789},
{"f_3664:modules_2escm",(void*)f_3664},
{"f_7623:modules_2escm",(void*)f_7623},
{"f_5549:modules_2escm",(void*)f_5549},
{"f_7644:modules_2escm",(void*)f_7644},
{"f_7640:modules_2escm",(void*)f_7640},
{"f_7636:modules_2escm",(void*)f_7636},
{"f_6798:modules_2escm",(void*)f_6798},
{"f_3670:modules_2escm",(void*)f_3670},
{"f_7615:modules_2escm",(void*)f_7615},
{"f_7633:modules_2escm",(void*)f_7633},
{"f_7602:modules_2escm",(void*)f_7602},
{"f_7016:modules_2escm",(void*)f_7016},
{"f_3983:modules_2escm",(void*)f_3983},
{"f_7006:modules_2escm",(void*)f_7006},
{"f_8241:modules_2escm",(void*)f_8241},
{"f_5234:modules_2escm",(void*)f_5234},
{"f_7018:modules_2escm",(void*)f_7018},
{"f_8254:modules_2escm",(void*)f_8254},
{"f_8258:modules_2escm",(void*)f_8258},
{"f_5584:modules_2escm",(void*)f_5584},
{"f_5223:modules_2escm",(void*)f_5223},
{"f_5229:modules_2escm",(void*)f_5229},
{"f_8262:modules_2escm",(void*)f_8262},
{"f_7430:modules_2escm",(void*)f_7430},
{"f_8266:modules_2escm",(void*)f_8266},
{"f_4577:modules_2escm",(void*)f_4577},
{"f_4579:modules_2escm",(void*)f_4579},
{"f_6572:modules_2escm",(void*)f_6572},
{"f_4308:modules_2escm",(void*)f_4308},
{"f_8201:modules_2escm",(void*)f_8201},
{"f_7203:modules_2escm",(void*)f_7203},
{"f_7202:modules_2escm",(void*)f_7202},
{"f_6728:modules_2escm",(void*)f_6728},
{"f_7239:modules_2escm",(void*)f_7239},
{"f_5448:modules_2escm",(void*)f_5448},
{"f_4700:modules_2escm",(void*)f_4700},
{"f_6562:modules_2escm",(void*)f_6562},
{"f_8214:modules_2escm",(void*)f_8214},
{"f_6715:modules_2escm",(void*)f_6715},
{"f_6595:modules_2escm",(void*)f_6595},
{"f_6585:modules_2escm",(void*)f_6585},
{"f_3973:modules_2escm",(void*)f_3973},
{"f_5451:modules_2escm",(void*)f_5451},
{"f_5455:modules_2escm",(void*)f_5455},
{"f_5454:modules_2escm",(void*)f_5454},
{"f_7248:modules_2escm",(void*)f_7248},
{"f_7245:modules_2escm",(void*)f_7245},
{"f_7279:modules_2escm",(void*)f_7279},
{"f_6525:modules_2escm",(void*)f_6525},
{"f_6528:modules_2escm",(void*)f_6528},
{"f_7270:modules_2escm",(void*)f_7270},
{"f_7273:modules_2escm",(void*)f_7273},
{"f_8019:modules_2escm",(void*)f_8019},
{"f_3456:modules_2escm",(void*)f_3456},
{"f_3928:modules_2escm",(void*)f_3928},
{"f_8021:modules_2escm",(void*)f_8021},
{"f_7258:modules_2escm",(void*)f_7258},
{"f_7251:modules_2escm",(void*)f_7251},
{"f_7289:modules_2escm",(void*)f_7289},
{"f_8288:modules_2escm",(void*)f_8288},
{"f_8286:modules_2escm",(void*)f_8286},
{"f_8280:modules_2escm",(void*)f_8280},
{"f_7282:modules_2escm",(void*)f_7282},
{"f_4515:modules_2escm",(void*)f_4515},
{"f_4331:modules_2escm",(void*)f_4331},
{"f_4335:modules_2escm",(void*)f_4335},
{"f_4339:modules_2escm",(void*)f_4339},
{"f_3254:modules_2escm",(void*)f_3254},
{"f_3256:modules_2escm",(void*)f_3256},
{"f_7266:modules_2escm",(void*)f_7266},
{"f_6512:modules_2escm",(void*)f_6512},
{"f_7262:modules_2escm",(void*)f_7262},
{"f_7299:modules_2escm",(void*)f_7299},
{"f_6195:modules_2escm",(void*)f_6195},
{"f_6193:modules_2escm",(void*)f_6193},
{"f_6190:modules_2escm",(void*)f_6190},
{"f_8081:modules_2escm",(void*)f_8081},
{"f_4379:modules_2escm",(void*)f_4379},
{"f_4375:modules_2escm",(void*)f_4375},
{"f_6187:modules_2escm",(void*)f_6187},
{"f_6184:modules_2escm",(void*)f_6184},
{"f_7090:modules_2escm",(void*)f_7090},
{"f_6181:modules_2escm",(void*)f_6181},
{"f_3069:modules_2escm",(void*)f_3069},
{"f_8093:modules_2escm",(void*)f_8093},
{"f_4391:modules_2escm",(void*)f_4391},
{"f_6748:modules_2escm",(void*)f_6748},
{"f_8060:modules_2escm",(void*)f_8060},
{"f_6736:modules_2escm",(void*)f_6736},
{"f_6731:modules_2escm",(void*)f_6731},
{"f_6537:modules_2escm",(void*)f_6537},
{"f_4343:modules_2escm",(void*)f_4343},
{"f_4347:modules_2escm",(void*)f_4347},
{"f_5172:modules_2escm",(void*)f_5172},
{"f_6769:modules_2escm",(void*)f_6769},
{"f_5166:modules_2escm",(void*)f_5166},
{"f_6756:modules_2escm",(void*)f_6756},
{"f_6554:modules_2escm",(void*)f_6554},
{"f_5196:modules_2escm",(void*)f_5196},
{"f_5192:modules_2escm",(void*)f_5192},
{"f_6542:modules_2escm",(void*)f_6542},
{"f_5188:modules_2escm",(void*)f_5188},
{"f_7573:modules_2escm",(void*)f_7573},
{"f_6310:modules_2escm",(void*)f_6310},
{"f_8394:modules_2escm",(void*)f_8394},
{"f_4208:modules_2escm",(void*)f_4208},
{"f_6301:modules_2escm",(void*)f_6301},
{"f_3703:modules_2escm",(void*)f_3703},
{"f_3707:modules_2escm",(void*)f_3707},
{"f_7590:modules_2escm",(void*)f_7590},
{"f_7592:modules_2escm",(void*)f_7592},
{"f_6317:modules_2escm",(void*)f_6317},
{"f_3714:modules_2escm",(void*)f_3714},
{"f_3718:modules_2escm",(void*)f_3718},
{"f_6321:modules_2escm",(void*)f_6321},
{"f_5100:modules_2escm",(void*)f_5100},
{"f_6338:modules_2escm",(void*)f_6338},
{"f_4250:modules_2escm",(void*)f_4250},
{"f_4256:modules_2escm",(void*)f_4256},
{"f_6325:modules_2escm",(void*)f_6325},
{"f_4240:modules_2escm",(void*)f_4240},
{"f_6977:modules_2escm",(void*)f_6977},
{"f_6971:modules_2escm",(void*)f_6971},
{"f_6355:modules_2escm",(void*)f_6355},
{"f_6358:modules_2escm",(void*)f_6358},
{"f_4271:modules_2escm",(void*)f_4271},
{"f_3503:modules_2escm",(void*)f_3503},
{"f_3507:modules_2escm",(void*)f_3507},
{"f_6963:modules_2escm",(void*)f_6963},
{"f_3509:modules_2escm",(void*)f_3509},
{"f_7504:modules_2escm",(void*)f_7504},
{"f_6348:modules_2escm",(void*)f_6348},
{"f_4260:modules_2escm",(void*)f_4260},
{"f_4060:modules_2escm",(void*)f_4060},
{"f_4064:modules_2escm",(void*)f_4064},
{"f_6372:modules_2escm",(void*)f_6372},
{"f_6390:modules_2escm",(void*)f_6390},
{"f_4298:modules_2escm",(void*)f_4298},
{"f_4052:modules_2escm",(void*)f_4052},
{"f_3525:modules_2escm",(void*)f_3525},
{"f_3526:modules_2escm",(void*)f_3526},
{"f_6985:modules_2escm",(void*)f_6985},
{"f_7527:modules_2escm",(void*)f_7527},
{"f_6981:modules_2escm",(void*)f_6981},
{"f_6367:modules_2escm",(void*)f_6367},
{"f_6380:modules_2escm",(void*)f_6380},
{"f_4900:modules_2escm",(void*)f_4900},
{"f_4901:modules_2escm",(void*)f_4901},
{"f_7514:modules_2escm",(void*)f_7514},
{"f_6097:modules_2escm",(void*)f_6097},
{"f_6094:modules_2escm",(void*)f_6094},
{"f_6091:modules_2escm",(void*)f_6091},
{"f_4929:modules_2escm",(void*)f_4929},
{"f_3373:modules_2escm",(void*)f_3373},
{"f_4926:modules_2escm",(void*)f_4926},
{"f_6088:modules_2escm",(void*)f_6088},
{"f_6085:modules_2escm",(void*)f_6085},
{"f_6081:modules_2escm",(void*)f_6081},
{"f_4913:modules_2escm",(void*)f_4913},
{"f_5796:modules_2escm",(void*)f_5796},
{"f_4945:modules_2escm",(void*)f_4945},
{"f_4949:modules_2escm",(void*)f_4949},
{"f_5784:modules_2escm",(void*)f_5784},
{"f_3365:modules_2escm",(void*)f_3365},
{"f_4965:modules_2escm",(void*)f_4965},
{"f_6919:modules_2escm",(void*)f_6919},
{"f_4953:modules_2escm",(void*)f_4953},
{"f_4955:modules_2escm",(void*)f_4955},
{"f_6903:modules_2escm",(void*)f_6903},
{"f_5759:modules_2escm",(void*)f_5759},
{"f_5757:modules_2escm",(void*)f_5757},
{"f_5753:modules_2escm",(void*)f_5753},
{"f_4988:modules_2escm",(void*)f_4988},
{"f_4978:modules_2escm",(void*)f_4978},
{"f_4227:modules_2escm",(void*)f_4227},
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
S|  for-each		16
S|  map		22
o|eliminated procedure checks: 333 
o|specializations:
o|  2 (cddr (pair * pair))
o|  1 (< fixnum fixnum)
o|  2 (string-append string string)
o|  1 (= fixnum fixnum)
o|  6 (##sys#check-list (or pair list) *)
o|  2 (cdar (pair pair *))
o|  1 (caar (pair pair *))
o|  28 (car pair)
o|  47 (cdr pair)
(o e)|safe calls: 728 
(o e)|assignments to immediate values: 1 
o|safe globals: (lookup) 
o|Removed `not' forms: 7 
o|removed side-effect free assignment to unused variable: module? 
o|contracted procedure: "(modules.scm:118) %make-module" 
o|inlining procedure: k3327 
o|contracted procedure: "(modules.scm:127) g406415" 
o|inlining procedure: k3327 
o|inlining procedure: k3378 
o|inlining procedure: k3378 
o|inlining procedure: k3370 
o|inlining procedure: k3370 
o|inlining procedure: k3419 
o|inlining procedure: k3419 
o|inlining procedure: k3470 
o|inlining procedure: k3470 
o|inlining procedure: k3531 
o|inlining procedure: k3531 
o|inlining procedure: k3514 
o|inlining procedure: k3570 
o|inlining procedure: k3570 
o|inlining procedure: k3514 
o|inlining procedure: k3606 
o|contracted procedure: "(modules.scm:181) set-module-meta-expressions!" 
o|inlining procedure: k3606 
o|inlining procedure: k3632 
o|inlining procedure: k3632 
o|inlining procedure: k3644 
o|inlining procedure: k3644 
o|inlining procedure: k3733 
o|contracted procedure: "(modules.scm:223) set-module-defined-syntax-list!" 
o|inlining procedure: k3733 
o|inlining procedure: k3814 
o|inlining procedure: k3828 
o|inlining procedure: k3828 
o|inlining procedure: k3871 
o|inlining procedure: k3871 
o|inlining procedure: k3814 
o|inlining procedure: k3975 
o|contracted procedure: "(modules.scm:244) g612619" 
o|inlining procedure: k3932 
o|contracted procedure: "(modules.scm:249) g625626" 
o|inlining procedure: k3932 
o|inlining procedure: k3975 
o|merged explicitly consed rest parameter: ses690 
o|inlining procedure: k4273 
o|inlining procedure: k4273 
o|inlining procedure: k4377 
o|inlining procedure: k4377 
o|inlining procedure: k4393 
o|inlining procedure: k4393 
o|inlining procedure: k4456 
o|inlining procedure: k4456 
o|inlining procedure: k4492 
o|inlining procedure: k4492 
o|inlining procedure: k4581 
o|contracted procedure: "(modules.scm:318) g756765" 
o|inlining procedure: k4533 
o|inlining procedure: k4533 
o|inlining procedure: k4581 
o|inlining procedure: k4632 
o|inlining procedure: k4632 
o|inlining procedure: k4736 
o|contracted procedure: "(modules.scm:357) find-reexport849" 
o|inlining procedure: k4711 
o|inlining procedure: k4711 
o|inlining procedure: k4736 
o|consed rest parameter at call site: "(modules.scm:378) merge-se" 1 
o|inlining procedure: k4858 
o|consed rest parameter at call site: "(modules.scm:378) merge-se" 1 
o|inlining procedure: k4858 
o|consed rest parameter at call site: "(modules.scm:378) merge-se" 1 
o|inlining procedure: k4869 
o|consed rest parameter at call site: "(modules.scm:383) merge-se" 1 
o|inlining procedure: k4888 
o|consed rest parameter at call site: "(modules.scm:383) merge-se" 1 
o|inlining procedure: k4888 
o|consed rest parameter at call site: "(modules.scm:383) merge-se" 1 
o|inlining procedure: k4869 
o|consed rest parameter at call site: "(modules.scm:387) merge-se" 1 
o|inlining procedure: k4918 
o|consed rest parameter at call site: "(modules.scm:387) merge-se" 1 
o|inlining procedure: k4918 
o|consed rest parameter at call site: "(modules.scm:387) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:391) merge-se" 1 
o|inlining procedure: k4957 
o|inlining procedure: k4957 
o|inlining procedure: k4980 
o|inlining procedure: k4980 
o|inlining procedure: k5003 
o|inlining procedure: k5003 
o|consed rest parameter at call site: "(modules.scm:371) merge-se" 1 
o|inlining procedure: k5034 
o|contracted procedure: "(modules.scm:367) g918927" 
o|inlining procedure: k5034 
o|inlining procedure: k5068 
o|contracted procedure: "(modules.scm:361) g890899" 
o|inlining procedure: k4771 
o|inlining procedure: k4771 
o|inlining procedure: k5068 
o|inlining procedure: k5102 
o|inlining procedure: k5102 
o|contracted procedure: "(modules.scm:400) g10121013" 
o|consed rest parameter at call site: "(modules.scm:423) merge-se" 1 
o|inlining procedure: k5236 
o|inlining procedure: k5236 
o|inlining procedure: k5260 
o|inlining procedure: k5260 
o|inlining procedure: k5294 
o|contracted procedure: "(modules.scm:407) g10411050" 
o|inlining procedure: k5211 
o|inlining procedure: k5211 
o|inlining procedure: k5294 
o|inlining procedure: k5347 
o|inlining procedure: k5347 
o|inlining procedure: k5359 
o|inlining procedure: k5374 
o|inlining procedure: k5374 
o|inlining procedure: k5359 
o|inlining procedure: k5461 
o|inlining procedure: k5461 
o|inlining procedure: k5498 
o|inlining procedure: k5498 
o|inlining procedure: k5541 
o|inlining procedure: k5541 
o|substituted constant variable: a5561 
o|contracted procedure: "(modules.scm:506) g12151216" 
o|inlining procedure: k5586 
o|inlining procedure: k5586 
o|consed rest parameter at call site: "(modules.scm:536) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:554) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:551) merge-se" 1 
o|contracted procedure: "(modules.scm:547) set-module-vexports!" 
o|inlining procedure: k5730 
o|inlining procedure: k5730 
o|consed rest parameter at call site: "(modules.scm:529) merge-se" 1 
o|inlining procedure: k5761 
o|contracted procedure: "(modules.scm:524) g12661275" 
o|inlining procedure: k5623 
o|inlining procedure: k5623 
o|inlining procedure: k5761 
o|contracted procedure: "(modules.scm:528) module-indirect-exports" 
o|removed side-effect free assignment to unused variable: indirect?641 
o|inlining procedure: k4065 
o|inlining procedure: k4065 
o|inlining procedure: k4077 
o|inlining procedure: k4077 
o|inlining procedure: k4104 
o|inlining procedure: k4104 
o|inlining procedure: k4162 
o|inlining procedure: k4162 
o|inlining procedure: k4136 
o|inlining procedure: k4136 
o|inlining procedure: k4181 
o|inlining procedure: k4181 
o|inlining procedure: k5798 
o|inlining procedure: k5798 
o|inlining procedure: k5825 
o|inlining procedure: k5825 
o|inlining procedure: k5865 
o|inlining procedure: k5865 
o|contracted procedure: k5892 
o|inlining procedure: k5889 
o|inlining procedure: k5889 
o|consed rest parameter at call site: "(modules.scm:454) merge-se" 1 
o|inlining procedure: k5957 
o|inlining procedure: k5957 
o|inlining procedure: k5992 
o|contracted procedure: "(modules.scm:450) g11321141" 
o|inlining procedure: k5992 
o|inlining procedure: k6033 
o|inlining procedure: k6033 
o|substituted constant variable: saved134613471366 
o|substituted constant variable: saved134813491367 
o|substituted constant variable: a6175 
o|inlining procedure: k6200 
o|inlining procedure: k6200 
o|contracted procedure: "(modules.scm:591) lookup" 
o|inlining procedure: k2953 
o|inlining procedure: k2953 
o|contracted procedure: "(modules.scm:60) g229230" 
o|inlining procedure: k6216 
o|inlining procedure: k6216 
o|inlining procedure: k6235 
o|inlining procedure: k6235 
o|inlining procedure: k6284 
o|inlining procedure: k6284 
o|inlining procedure: k6305 
o|inlining procedure: k6305 
o|inlining procedure: k6350 
o|inlining procedure: k6374 
o|inlining procedure: k6405 
o|inlining procedure: k6405 
o|inlining procedure: k6374 
o|inlining procedure: k6450 
o|inlining procedure: k6450 
o|inlining procedure: k6489 
o|inlining procedure: k6489 
o|inlining procedure: k6350 
o|inlining procedure: k6544 
o|inlining procedure: k6556 
o|inlining procedure: k6587 
o|inlining procedure: k6587 
o|inlining procedure: k6556 
o|inlining procedure: k6544 
o|inlining procedure: k6692 
o|inlining procedure: k6692 
o|inlining procedure: k6723 
o|inlining procedure: k6738 
o|inlining procedure: k6750 
o|inlining procedure: k6790 
o|inlining procedure: k6790 
o|inlining procedure: k6813 
o|inlining procedure: k6813 
o|inlining procedure: k6750 
o|inlining procedure: k6738 
o|inlining procedure: k6723 
o|inlining procedure: k7020 
o|inlining procedure: k7020 
o|inlining procedure: k7054 
o|inlining procedure: k7054 
o|inlining procedure: k7091 
o|inlining procedure: k7091 
o|substituted constant variable: a7118 
o|inlining procedure: k7163 
o|inlining procedure: k7173 
o|contracted procedure: k7179 
o|inlining procedure: k7173 
o|inlining procedure: k7163 
o|inlining procedure: k7208 
o|contracted procedure: k7214 
o|inlining procedure: k7208 
o|consed rest parameter at call site: "(modules.scm:746) merge-se" 1 
o|inlining procedure: k7328 
o|inlining procedure: k7328 
o|inlining procedure: k7362 
o|inlining procedure: k7362 
o|inlining procedure: k7432 
o|inlining procedure: k7432 
o|inlining procedure: k7466 
o|inlining procedure: k7466 
o|inlining procedure: k7506 
o|inlining procedure: k7506 
o|inlining procedure: k7529 
o|inlining procedure: k7529 
o|inlining procedure: k7549 
o|contracted procedure: "(modules.scm:701) set-module-meta-import-forms!" 
o|inlining procedure: k7549 
o|contracted procedure: "(modules.scm:704) set-module-import-forms!" 
o|inlining procedure: k7594 
o|inlining procedure: k7594 
o|inlining procedure: k7641 
o|inlining procedure: k7641 
o|inlining procedure: k7665 
o|inlining procedure: k7665 
o|contracted procedure: "(modules.scm:760) g20172018" 
o|inlining procedure: k7687 
o|inlining procedure: k7687 
o|inlining procedure: k7712 
o|inlining procedure: k7712 
o|contracted procedure: "(modules.scm:783) g20422043" 
o|contracted procedure: "(modules.scm:774) g20232024" 
o|contracted procedure: "(modules.scm:770) g20132014" 
o|contracted procedure: "(modules.scm:788) g20512052" 
o|merged explicitly consed rest parameter: args2065 
o|inlining procedure: k7767 
o|inlining procedure: k7767 
o|consed rest parameter at call site: "(modules.scm:796) err2063" 1 
o|contracted procedure: "(modules.scm:795) g20702071" 
o|inlining procedure: k7773 
o|inlining procedure: k7773 
o|contracted procedure: k7791 
o|inlining procedure: k7788 
o|inlining procedure: k7803 
o|inlining procedure: k7803 
o|contracted procedure: k7812 
o|inlining procedure: k7821 
o|inlining procedure: k7821 
o|contracted procedure: k7839 
o|inlining procedure: k7845 
o|inlining procedure: k7845 
o|inlining procedure: k7868 
o|inlining procedure: k7868 
o|consed rest parameter at call site: "(modules.scm:816) err2063" 1 
o|inlining procedure: k7902 
o|inlining procedure: k7902 
o|consed rest parameter at call site: "(modules.scm:821) err2063" 1 
o|consed rest parameter at call site: "(modules.scm:810) err2063" 1 
o|consed rest parameter at call site: "(modules.scm:805) err2063" 1 
o|inlining procedure: k7788 
o|consed rest parameter at call site: "(modules.scm:800) err2063" 1 
o|contracted procedure: "(modules.scm:824) g21012102" 
o|merged explicitly consed rest parameter: args2116 
o|consed rest parameter at call site: "(modules.scm:835) err2115" 1 
o|inlining procedure: k8023 
o|inlining procedure: k8023 
o|inlining procedure: k8074 
o|inlining procedure: k8074 
o|inlining procedure: k8083 
o|inlining procedure: k8095 
o|inlining procedure: k8095 
o|inlining procedure: k8083 
o|consed rest parameter at call site: "(modules.scm:830) err2115" 1 
o|contracted procedure: "(modules.scm:827) g21112112" 
o|inlining procedure: k8195 
o|inlining procedure: k8206 
o|inlining procedure: k8206 
o|inlining procedure: k8195 
o|inlining procedure: k8290 
o|contracted procedure: "(modules.scm:890) g22142223" 
o|substituted constant variable: a8276 
o|inlining procedure: k8290 
o|inlining procedure: k8324 
o|inlining procedure: k8324 
o|propagated global variable: r4rs-syntax2235 ##sys#default-macro-environment 
o|replaced variables: 849 
o|removed binding forms: 417 
o|substituted constant variable: defined-list246 
o|substituted constant variable: exist-list247 
o|substituted constant variable: defined-syntax-list248 
o|substituted constant variable: undefined-list249 
o|substituted constant variable: import-forms250 
o|substituted constant variable: meta-import-forms251 
o|substituted constant variable: meta-expressions252 
o|substituted constant variable: saved-environments256 
o|substituted constant variable: r36078420 
o|substituted constant variable: r36338422 
o|removed call to pure procedure with unused result: "(modules.scm:202) void" 
o|removed call to pure procedure with unused result: "(modules.scm:217) void" 
o|substituted constant variable: r38728432 
o|substituted constant variable: r38728432 
o|substituted constant variable: prop628 
o|substituted constant variable: val629 
o|removed call to pure procedure with unused result: "(modules.scm:248) void" 
o|removed call to pure procedure with unused result: "(modules.scm:298) void" 
o|substituted constant variable: r42748439 
o|removed call to pure procedure with unused result: "(modules.scm:295) void" 
o|substituted constant variable: r43788441 
o|substituted constant variable: r43788441 
o|substituted constant variable: r43948445 
o|removed call to pure procedure with unused result: "(modules.scm:331) void" 
o|substituted constant variable: r48598463 
o|substituted constant variable: r48598463 
o|substituted constant variable: r48898468 
o|substituted constant variable: r48898468 
o|substituted constant variable: r49198473 
o|substituted constant variable: r49198473 
o|contracted procedure: "(modules.scm:355) g862871" 
o|substituted constant variable: prop1015 
o|substituted constant variable: r53488497 
o|substituted constant variable: prop1218 
o|removed call to pure procedure with unused result: "(modules.scm:535) void" 
o|removed call to pure procedure with unused result: "(modules.scm:540) void" 
o|substituted constant variable: r40668517 
o|substituted constant variable: r40788519 
o|converted assignments to bindings: (warn642) 
o|substituted constant variable: r58268533 
o|removed call to pure procedure with unused result: "(modules.scm:476) void" 
o|inlining procedure: k5865 
o|substituted constant variable: r58908540 
o|substituted constant variable: r59588541 
o|inlining procedure: k6033 
o|substituted constant variable: se219 
o|substituted constant variable: prop232 
o|converted assignments to bindings: (ren1709) 
o|substituted constant variable: r70928594 
o|substituted constant variable: r71748597 
o|substituted constant variable: r71648598 
o|substituted constant variable: r72098600 
o|removed call to pure procedure with unused result: "(modules.scm:747) void" 
o|removed call to pure procedure with unused result: "(modules.scm:709) void" 
o|removed call to pure procedure with unused result: "(modules.scm:708) void" 
o|removed call to pure procedure with unused result: "(modules.scm:707) void" 
o|removed call to pure procedure with unused result: "(modules.scm:763) void" 
o|removed call to pure procedure with unused result: "(modules.scm:771) void" 
o|removed call to pure procedure with unused result: "(modules.scm:775) void" 
o|substituted constant variable: prop2045 
o|removed call to pure procedure with unused result: "(modules.scm:778) void" 
o|substituted constant variable: prop2026 
o|substituted constant variable: prop2016 
o|converted assignments to bindings: (mrename1997) 
o|substituted constant variable: prop2054 
o|substituted constant variable: prop2073 
o|substituted constant variable: r78048630 
o|substituted constant variable: prop2104 
o|substituted constant variable: r80758643 
o|substituted constant variable: r80758643 
o|substituted constant variable: r80968648 
o|converted assignments to bindings: (merr2123) 
o|converted assignments to bindings: (err2115) 
o|substituted constant variable: prop2114 
o|simplifications: ((let . 5)) 
o|replaced variables: 48 
o|removed binding forms: 881 
o|contracted procedure: k3674 
o|contracted procedure: k3754 
o|contracted procedure: k3938 
o|contracted procedure: k4261 
o|contracted procedure: k4267 
o|contracted procedure: k4477 
o|inlining procedure: k5147 
o|inlining procedure: k5488 
o|contracted procedure: k5670 
o|contracted procedure: k5688 
o|contracted procedure: k5883 
o|substituted constant variable: r58668730 
o|inlining procedure: k2961 
o|inlining procedure: "(modules.scm:626) warn1425" 
o|inlining procedure: "(modules.scm:646) warn1425" 
o|inlining procedure: "(modules.scm:667) warn1425" 
o|contracted procedure: k7146 
o|contracted procedure: k7149 
o|contracted procedure: k7152 
o|contracted procedure: k7646 
o|inlining procedure: k7649 
o|contracted procedure: k7681 
o|contracted procedure: k7695 
o|contracted procedure: k7709 
o|inlining procedure: k7723 
o|replaced variables: 12 
o|removed binding forms: 117 
o|inlining procedure: k4714 
o|contracted procedure: k5485 
o|removed side-effect free assignment to unused variable: warn1425 
o|substituted constant variable: msg14338882 
o|substituted constant variable: msg14338895 
o|substituted constant variable: msg14338910 
o|contracted procedure: k7673 
o|contracted procedure: k7692 
o|contracted procedure: k7764 
o|contracted procedure: k7976 
o|simplifications: ((let . 1)) 
o|replaced variables: 9 
o|removed binding forms: 39 
o|inlining procedure: "(modules.scm:240) make-module" 
o|inlining procedure: "(modules.scm:370) make-module" 
o|substituted constant variable: r47158989 
o|inlining procedure: "(modules.scm:405) make-module" 
o|replaced variables: 7 
o|removed binding forms: 14 
o|removed conditional forms: 1 
o|removed side-effect free assignment to unused variable: make-module 
o|substituted constant variable: iexports3809083 
o|substituted constant variable: explist3779104 
o|substituted constant variable: explist3779116 
o|substituted constant variable: iexports3809119 
o|inlining procedure: k6197 
o|inlining procedure: k6197 
o|replaced variables: 10 
o|removed binding forms: 5 
o|substituted constant variable: r61989259 
o|substituted constant variable: r61989259 
o|substituted constant variable: r61989259 
o|replaced variables: 3 
o|removed binding forms: 15 
o|removed conditional forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 18) (##core#call . 647)) 
o|  call simplifications:
o|    list?	3
o|    fx<
o|    fixnum?
o|    cddr
o|    ##sys#call-with-values	2
o|    ##sys#intern-symbol
o|    string?
o|    number?
o|    cdar	3
o|    length	2
o|    write-char	2
o|    caddr	2
o|    set-car!	4
o|    ##sys#cons	17
o|    ##sys#list	19
o|    apply	4
o|    caar	10
o|    symbol?	18
o|    ##sys#make-structure	4
o|    list	8
o|    not	3
o|    set-cdr!
o|    eq?	20
o|    null?	30
o|    assq	30
o|    cdr	36
o|    memq	6
o|    ##sys#check-list	32
o|    pair?	52
o|    car	46
o|    cadr	15
o|    ##sys#setslot	22
o|    ##sys#slot	101
o|    cons	105
o|    values	6
o|    ##sys#check-structure	25
o|    ##sys#block-ref	13
o|contracted procedure: k2990 
o|contracted procedure: k2999 
o|contracted procedure: k3008 
o|contracted procedure: k3017 
o|contracted procedure: k3026 
o|contracted procedure: k3035 
o|contracted procedure: k3044 
o|contracted procedure: k3053 
o|contracted procedure: k3071 
o|contracted procedure: k3080 
o|contracted procedure: k3089 
o|contracted procedure: k3107 
o|contracted procedure: k3125 
o|contracted procedure: k3143 
o|contracted procedure: k3161 
o|contracted procedure: k3170 
o|contracted procedure: k3179 
o|contracted procedure: k3188 
o|contracted procedure: k3197 
o|contracted procedure: k3206 
o|contracted procedure: k3248 
o|contracted procedure: k3244 
o|contracted procedure: k3298 
o|contracted procedure: k3314 
o|contracted procedure: k3330 
o|contracted procedure: k3333 
o|contracted procedure: k3336 
o|contracted procedure: k3344 
o|contracted procedure: k3352 
o|contracted procedure: k3307 
o|contracted procedure: k3311 
o|contracted procedure: k3367 
o|contracted procedure: k3375 
o|contracted procedure: k3381 
o|contracted procedure: k3391 
o|contracted procedure: k3449 
o|contracted procedure: k3404 
o|contracted procedure: k3443 
o|contracted procedure: k3407 
o|contracted procedure: k3437 
o|contracted procedure: k3410 
o|contracted procedure: k3431 
o|contracted procedure: k3413 
o|contracted procedure: k3416 
o|contracted procedure: k3458 
o|contracted procedure: k3485 
o|contracted procedure: k3517 
o|contracted procedure: k3528 
o|contracted procedure: k3537 
o|contracted procedure: k3543 
o|contracted procedure: k3573 
o|contracted procedure: k3583 
o|contracted procedure: k3587 
o|contracted procedure: k3613 
o|contracted procedure: k3134 
o|contracted procedure: k3623 
o|contracted procedure: k3629 
o|contracted procedure: k3647 
o|contracted procedure: k3659 
o|contracted procedure: k3685 
o|contracted procedure: k3681 
o|contracted procedure: k3693 
o|contracted procedure: k3736 
o|contracted procedure: k3768 
o|contracted procedure: k3764 
o|contracted procedure: k3062 
o|contracted procedure: k3783 
o|contracted procedure: k3779 
o|contracted procedure: k3798 
o|contracted procedure: k3820 
o|contracted procedure: k3842 
o|contracted procedure: k3838 
o|contracted procedure: k3853 
o|contracted procedure: k3849 
o|contracted procedure: k3863 
o|contracted procedure: k3871 
o|contracted procedure: k3921 
o|contracted procedure: k3880 
o|contracted procedure: k3915 
o|contracted procedure: k3883 
o|contracted procedure: k3909 
o|contracted procedure: k3886 
o|contracted procedure: k3903 
o|contracted procedure: k3889 
o|contracted procedure: k3892 
o|contracted procedure: k3900 
o|contracted procedure: k3896 
o|contracted procedure: k3966 
o|contracted procedure: k3978 
o|contracted procedure: k3988 
o|contracted procedure: k3992 
o|contracted procedure: k3963 
o|contracted procedure: k3948 
o|contracted procedure: k3955 
o|contracted procedure: k4276 
o|contracted procedure: k4302 
o|contracted procedure: k4282 
o|contracted procedure: k4357 
o|contracted procedure: k4528 
o|contracted procedure: k4572 
o|contracted procedure: k4361 
o|contracted procedure: k4365 
o|contracted procedure: k4445 
o|contracted procedure: k4450 
o|contracted procedure: k4453 
o|contracted procedure: k4459 
o|contracted procedure: k4466 
o|contracted procedure: k4483 
o|contracted procedure: k4369 
o|contracted procedure: k4353 
o|contracted procedure: k4349 
o|contracted procedure: k4380 
o|contracted procedure: k4396 
o|contracted procedure: k4441 
o|contracted procedure: k4402 
o|contracted procedure: k4410 
o|contracted procedure: k4427 
o|contracted procedure: k4417 
o|contracted procedure: k4495 
o|contracted procedure: k4498 
o|contracted procedure: k4501 
o|contracted procedure: k4509 
o|contracted procedure: k4517 
o|contracted procedure: k4584 
o|contracted procedure: k4587 
o|contracted procedure: k4590 
o|contracted procedure: k4598 
o|contracted procedure: k4606 
o|contracted procedure: k4566 
o|contracted procedure: k4536 
o|contracted procedure: k4543 
o|contracted procedure: k4554 
o|contracted procedure: k4558 
o|contracted procedure: k4617 
o|contracted procedure: k4623 
o|contracted procedure: k4635 
o|contracted procedure: k4638 
o|contracted procedure: k4641 
o|contracted procedure: k4649 
o|contracted procedure: k4657 
o|contracted procedure: k4663 
o|contracted procedure: k4670 
o|contracted procedure: k4677 
o|contracted procedure: k4692 
o|contracted procedure: k4688 
o|contracted procedure: k4684 
o|contracted procedure: k5133 
o|contracted procedure: k4702 
o|contracted procedure: k4731 
o|contracted procedure: k4760 
o|contracted procedure: k4766 
o|contracted procedure: k4800 
o|contracted procedure: k4806 
o|contracted procedure: k4826 
o|contracted procedure: k4832 
o|contracted procedure: k4847 
o|contracted procedure: k4855 
o|contracted procedure: k4861 
o|contracted procedure: k4892 
o|contracted procedure: k4872 
o|contracted procedure: k4885 
o|contracted procedure: k4895 
o|contracted procedure: k4907 
o|contracted procedure: k4915 
o|contracted procedure: k4921 
o|contracted procedure: k4935 
o|contracted procedure: k4931 
o|contracted procedure: k4939 
o|contracted procedure: k4960 
o|contracted procedure: k4970 
o|contracted procedure: k4974 
o|contracted procedure: k4983 
o|contracted procedure: k4993 
o|contracted procedure: k4997 
o|contracted procedure: k5006 
o|contracted procedure: k5016 
o|contracted procedure: k5020 
o|contracted procedure: k5037 
o|contracted procedure: k5040 
o|contracted procedure: k5043 
o|contracted procedure: k5051 
o|contracted procedure: k5059 
o|contracted procedure: k4815 
o|contracted procedure: k5071 
o|contracted procedure: k5074 
o|contracted procedure: k5077 
o|contracted procedure: k5085 
o|contracted procedure: k5093 
o|contracted procedure: k4797 
o|contracted procedure: k4774 
o|contracted procedure: k4783 
o|contracted procedure: k4791 
o|contracted procedure: k5105 
o|contracted procedure: k5108 
o|contracted procedure: k5111 
o|contracted procedure: k5119 
o|contracted procedure: k5127 
o|contracted procedure: k4739 
o|contracted procedure: k4708 
o|contracted procedure: k4724 
o|contracted procedure: k4714 
o|contracted procedure: k4749 
o|contracted procedure: k5155 
o|contracted procedure: k5325 
o|contracted procedure: k5161 
o|contracted procedure: k5206 
o|contracted procedure: k5224 
o|contracted procedure: k5231 
o|contracted procedure: k5239 
o|contracted procedure: k5242 
o|contracted procedure: k5251 
o|contracted procedure: k5167 
o|contracted procedure: k5178 
o|contracted procedure: k5174 
o|contracted procedure: k5182 
o|contracted procedure: k5263 
o|contracted procedure: k5266 
o|contracted procedure: k5269 
o|contracted procedure: k5277 
o|contracted procedure: k5285 
o|contracted procedure: k5297 
o|contracted procedure: k5300 
o|contracted procedure: k5303 
o|contracted procedure: k5311 
o|contracted procedure: k5319 
o|contracted procedure: k5214 
o|contracted procedure: k5350 
o|contracted procedure: k5400 
o|contracted procedure: k5353 
o|contracted procedure: k5362 
o|contracted procedure: k5389 
o|contracted procedure: k5365 
o|contracted procedure: k5403 
o|contracted procedure: k5424 
o|contracted procedure: k5443 
o|contracted procedure: k5457 
o|contracted procedure: k5464 
o|contracted procedure: k5563 
o|contracted procedure: k5501 
o|contracted procedure: k5532 
o|contracted procedure: k5544 
o|contracted procedure: k5554 
o|contracted procedure: k5558 
o|contracted procedure: k5566 
o|contracted procedure: k5589 
o|contracted procedure: k5599 
o|contracted procedure: k5603 
o|contracted procedure: k5609 
o|contracted procedure: k5618 
o|contracted procedure: k5653 
o|contracted procedure: k5679 
o|contracted procedure: k5682 
o|contracted procedure: k5704 
o|contracted procedure: k3152 
o|contracted procedure: k5733 
o|contracted procedure: k5743 
o|contracted procedure: k5747 
o|contracted procedure: k5764 
o|contracted procedure: k5767 
o|contracted procedure: k5770 
o|contracted procedure: k5778 
o|contracted procedure: k5786 
o|contracted procedure: k5647 
o|contracted procedure: k5626 
o|contracted procedure: k5629 
o|contracted procedure: k4068 
o|contracted procedure: k4080 
o|contracted procedure: k4252 
o|contracted procedure: k4086 
o|contracted procedure: k4098 
o|contracted procedure: k4107 
o|contracted procedure: k4114 
o|contracted procedure: k4244 
o|contracted procedure: k4120 
o|contracted procedure: k4133 
o|contracted procedure: k4155 
o|contracted procedure: k4159 
o|contracted procedure: k4173 
o|contracted procedure: k4219 
o|contracted procedure: k4184 
o|contracted procedure: k4201 
o|contracted procedure: k4191 
o|contracted procedure: k4215 
o|contracted procedure: k5801 
o|contracted procedure: k5811 
o|contracted procedure: k5815 
o|contracted procedure: k5934 
o|contracted procedure: k5819 
o|contracted procedure: k5828 
o|contracted procedure: k5831 
o|contracted procedure: k5928 
o|contracted procedure: k5834 
o|contracted procedure: k5840 
o|contracted procedure: k5862 
o|inlining procedure: k5865 
o|contracted procedure: k5874 
o|inlining procedure: k5865 
o|contracted procedure: k5914 
o|contracted procedure: k5925 
o|contracted procedure: k5937 
o|contracted procedure: k5960 
o|contracted procedure: k5986 
o|contracted procedure: k5995 
o|contracted procedure: k5998 
o|contracted procedure: k6001 
o|contracted procedure: k6009 
o|contracted procedure: k6017 
o|contracted procedure: k5433 
o|contracted procedure: k6197 
o|contracted procedure: k6219 
o|contracted procedure: k6238 
o|contracted procedure: k6247 
o|contracted procedure: k6287 
o|contracted procedure: k7120 
o|contracted procedure: k6296 
o|contracted procedure: k6327 
o|contracted procedure: k6331 
o|contracted procedure: k6344 
o|contracted procedure: k6359 
o|contracted procedure: k6362 
o|contracted procedure: k6377 
o|contracted procedure: k6385 
o|contracted procedure: k6399 
o|contracted procedure: k6395 
o|contracted procedure: k6408 
o|contracted procedure: k6418 
o|contracted procedure: k6422 
o|contracted procedure: k6483 
o|contracted procedure: k6425 
o|contracted procedure: k6437 
o|contracted procedure: k6441 
o|contracted procedure: k6447 
o|contracted procedure: k6459 
o|contracted procedure: k6463 
o|contracted procedure: k6475 
o|contracted procedure: k6492 
o|contracted procedure: k6495 
o|contracted procedure: k6498 
o|contracted procedure: k6506 
o|contracted procedure: k6514 
o|contracted procedure: k6529 
o|contracted procedure: k6532 
o|contracted procedure: k6547 
o|contracted procedure: k6559 
o|contracted procedure: k6567 
o|contracted procedure: k6581 
o|contracted procedure: k6577 
o|contracted procedure: k6590 
o|contracted procedure: k6600 
o|contracted procedure: k6604 
o|contracted procedure: k6645 
o|contracted procedure: k6607 
o|contracted procedure: k6619 
o|contracted procedure: k6627 
o|contracted procedure: k6639 
o|contracted procedure: k6686 
o|contracted procedure: k6648 
o|contracted procedure: k6660 
o|contracted procedure: k6668 
o|contracted procedure: k6680 
o|contracted procedure: k6695 
o|contracted procedure: k6698 
o|contracted procedure: k6701 
o|contracted procedure: k6709 
o|contracted procedure: k6717 
o|contracted procedure: k6741 
o|contracted procedure: k6753 
o|contracted procedure: k6761 
o|contracted procedure: k6764 
o|contracted procedure: k6770 
o|contracted procedure: k6784 
o|contracted procedure: k6780 
o|contracted procedure: k6793 
o|contracted procedure: k6803 
o|contracted procedure: k6807 
o|contracted procedure: k6816 
o|contracted procedure: k6838 
o|contracted procedure: k6834 
o|contracted procedure: k6819 
o|contracted procedure: k6822 
o|contracted procedure: k6830 
o|contracted procedure: k6894 
o|contracted procedure: k6844 
o|contracted procedure: k6856 
o|contracted procedure: k6872 
o|contracted procedure: k6876 
o|contracted procedure: k6868 
o|contracted procedure: k6860 
o|contracted procedure: k6888 
o|contracted procedure: k6947 
o|contracted procedure: k6897 
o|contracted procedure: k6909 
o|contracted procedure: k6925 
o|contracted procedure: k6929 
o|contracted procedure: k6921 
o|contracted procedure: k6913 
o|contracted procedure: k6941 
o|contracted procedure: k6959 
o|contracted procedure: k6987 
o|contracted procedure: k6994 
o|contracted procedure: k6998 
o|contracted procedure: k7001 
o|contracted procedure: k7008 
o|contracted procedure: k7011 
o|contracted procedure: k7023 
o|contracted procedure: k7026 
o|contracted procedure: k7029 
o|contracted procedure: k7037 
o|contracted procedure: k7045 
o|contracted procedure: k7057 
o|contracted procedure: k7060 
o|contracted procedure: k7063 
o|contracted procedure: k7071 
o|contracted procedure: k7079 
o|contracted procedure: k7104 
o|contracted procedure: k7094 
o|contracted procedure: k7108 
o|contracted procedure: k7115 
o|contracted procedure: k7160 
o|contracted procedure: k7166 
o|contracted procedure: k7190 
o|contracted procedure: k7186 
o|contracted procedure: k7197 
o|contracted procedure: k7233 
o|contracted procedure: k7205 
o|contracted procedure: k7229 
o|contracted procedure: k7223 
o|contracted procedure: k7240 
o|contracted procedure: k7294 
o|contracted procedure: k7312 
o|contracted procedure: k7319 
o|contracted procedure: k7331 
o|contracted procedure: k7353 
o|contracted procedure: k7349 
o|contracted procedure: k7334 
o|contracted procedure: k7337 
o|contracted procedure: k7345 
o|contracted procedure: k7365 
o|contracted procedure: k7387 
o|contracted procedure: k7383 
o|contracted procedure: k7368 
o|contracted procedure: k7371 
o|contracted procedure: k7379 
o|contracted procedure: k7497 
o|contracted procedure: k7412 
o|contracted procedure: k7416 
o|contracted procedure: k7423 
o|contracted procedure: k7435 
o|contracted procedure: k7457 
o|contracted procedure: k7453 
o|contracted procedure: k7438 
o|contracted procedure: k7441 
o|contracted procedure: k7449 
o|contracted procedure: k7469 
o|contracted procedure: k7491 
o|contracted procedure: k7487 
o|contracted procedure: k7472 
o|contracted procedure: k7475 
o|contracted procedure: k7483 
o|contracted procedure: k7509 
o|contracted procedure: k7519 
o|contracted procedure: k7523 
o|contracted procedure: k7532 
o|contracted procedure: k7542 
o|contracted procedure: k7546 
o|contracted procedure: k3116 
o|contracted procedure: k7564 
o|contracted procedure: k3098 
o|contracted procedure: k7579 
o|contracted procedure: k7582 
o|contracted procedure: k7585 
o|contracted procedure: k7597 
o|contracted procedure: k7607 
o|contracted procedure: k7611 
o|contracted procedure: k7625 
o|contracted procedure: k7629 
o|contracted procedure: k7698 
o|contracted procedure: k7706 
o|contracted procedure: k7715 
o|contracted procedure: k7776 
o|contracted procedure: k7782 
o|contracted procedure: k7952 
o|contracted procedure: k7806 
o|contracted procedure: k7948 
o|contracted procedure: k7818 
o|contracted procedure: k7824 
o|contracted procedure: k7944 
o|contracted procedure: k7940 
o|contracted procedure: k7848 
o|contracted procedure: k7865 
o|contracted procedure: k7878 
o|contracted procedure: k7884 
o|contracted procedure: k7891 
o|contracted procedure: k7905 
o|contracted procedure: k7916 
o|contracted procedure: k7934 
o|contracted procedure: k7922 
o|contracted procedure: k7968 
o|contracted procedure: k7964 
o|contracted procedure: k7988 
o|contracted procedure: k7991 
o|contracted procedure: k8003 
o|contracted procedure: k8011 
o|contracted procedure: k8014 
o|contracted procedure: k8007 
o|contracted procedure: k8026 
o|contracted procedure: k8048 
o|contracted procedure: k8044 
o|contracted procedure: k8029 
o|contracted procedure: k8032 
o|contracted procedure: k8040 
o|contracted procedure: k8077 
o|contracted procedure: k8070 
o|contracted procedure: k8066 
o|contracted procedure: k8062 
o|contracted procedure: k8086 
o|contracted procedure: k8098 
o|contracted procedure: k8101 
o|contracted procedure: k8137 
o|contracted procedure: k8107 
o|contracted procedure: k8110 
o|contracted procedure: k8124 
o|contracted procedure: k8143 
o|contracted procedure: k8149 
o|contracted procedure: k8152 
o|contracted procedure: k8155 
o|contracted procedure: k8158 
o|contracted procedure: k8161 
o|contracted procedure: k8172 
o|contracted procedure: k8198 
o|contracted procedure: k8230 
o|contracted procedure: k8203 
o|contracted procedure: k8209 
o|contracted procedure: k8216 
o|contracted procedure: k8236 
o|contracted procedure: k8245 
o|contracted procedure: k8268 
o|contracted procedure: k8281 
o|contracted procedure: k8293 
o|contracted procedure: k8296 
o|contracted procedure: k8299 
o|contracted procedure: k8307 
o|contracted procedure: k8315 
o|contracted procedure: k8327 
o|contracted procedure: k8337 
o|contracted procedure: k8341 
o|contracted procedure: k8385 
o|contracted procedure: k8369 
o|contracted procedure: k8382 
o|simplifications: ((let . 95)) 
o|removed binding forms: 547 
o|inlining procedure: "(modules.scm:115) module-sexports" 
o|inlining procedure: "(modules.scm:114) module-vexports" 
o|inlining procedure: "(modules.scm:113) module-export-list" 
o|inlining procedure: "(modules.scm:155) module-saved-environments" 
o|inlining procedure: "(modules.scm:152) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:174) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:173) set-module-sexports!" 
o|inlining procedure: "(modules.scm:173) module-sexports" 
o|inlining procedure: "(modules.scm:164) module-exist-list" 
o|inlining procedure: "(modules.scm:175) set-module-export-list!" 
o|inlining procedure: "(modules.scm:162) module-export-list" 
o|inlining procedure: "(modules.scm:181) module-meta-expressions" 
o|inlining procedure: "(modules.scm:203) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:206) module-defined-list" 
o|inlining procedure: "(modules.scm:200) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:200) module-exist-list" 
o|inlining procedure: "(modules.scm:195) module-name" 
o|inlining procedure: "(modules.scm:191) module-export-list" 
o|inlining procedure: "(modules.scm:225) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:219) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:222) module-defined-list" 
o|inlining procedure: "(modules.scm:213) module-name" 
o|inlining procedure: "(modules.scm:210) module-export-list" 
o|inlining procedure: k3867 
o|inlining procedure: k3867 
o|inlining procedure: "(modules.scm:337) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:323) module-vexports" 
o|inlining procedure: "(modules.scm:322) module-iexports" 
o|inlining procedure: "(modules.scm:316) module-name" 
o|inlining procedure: "(modules.scm:314) module-meta-expressions" 
o|inlining procedure: "(modules.scm:311) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:310) module-sexports" 
o|inlining procedure: "(modules.scm:309) module-import-forms" 
o|inlining procedure: "(modules.scm:308) module-name" 
o|inlining procedure: "(modules.scm:307) module-defined-list" 
o|inlining procedure: "(modules.scm:389) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:421) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:425) module-sexports" 
o|inlining procedure: "(modules.scm:424) module-vexports" 
o|inlining procedure: "(modules.scm:432) module-exist-list" 
o|inlining procedure: "(modules.scm:431) module-export-list" 
o|inlining procedure: "(modules.scm:552) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:549) set-module-iexports!" 
o|inlining procedure: "(modules.scm:551) module-iexports" 
o|inlining procedure: "(modules.scm:548) set-module-sexports!" 
o|inlining procedure: "(modules.scm:255) module-defined-list" 
o|inlining procedure: "(modules.scm:254) module-name" 
o|inlining procedure: "(modules.scm:253) module-export-list" 
o|inlining procedure: "(modules.scm:454) module-sexports" 
o|inlining procedure: "(modules.scm:451) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:448) module-exist-list" 
o|inlining procedure: "(modules.scm:447) module-defined-list" 
o|inlining procedure: "(modules.scm:446) module-name" 
o|inlining procedure: "(modules.scm:445) module-export-list" 
o|inlining procedure: "(modules.scm:605) module-name" 
o|inlining procedure: "(modules.scm:604) module-iexports" 
o|inlining procedure: "(modules.scm:603) module-sexports" 
o|inlining procedure: "(modules.scm:602) module-vexports" 
o|inlining procedure: "(modules.scm:744) set-module-iexports!" 
o|inlining procedure: "(modules.scm:746) module-iexports" 
o|inlining procedure: "(modules.scm:731) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:733) module-exist-list" 
o|inlining procedure: "(modules.scm:730) set-module-sexports!" 
o|inlining procedure: "(modules.scm:730) module-sexports" 
o|inlining procedure: "(modules.scm:737) set-module-export-list!" 
o|inlining procedure: "(modules.scm:740) module-export-list" 
o|inlining procedure: "(modules.scm:728) module-export-list" 
o|inlining procedure: "(modules.scm:703) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:706) module-import-forms" 
o|inlining procedure: "(modules.scm:767) module-name" 
o|inlining procedure: "(modules.scm:767) module-name" 
o|inlining procedure: "(modules.scm:879) module-sexports" 
o|inlining procedure: "(modules.scm:878) module-vexports" 
o|inlining procedure: "(modules.scm:945) module-saved-environments" 
o|replaced variables: 203 
o|removed side-effect free assignment to unused variable: module-export-list 
o|removed side-effect free assignment to unused variable: set-module-export-list! 
o|removed side-effect free assignment to unused variable: module-defined-list 
o|removed side-effect free assignment to unused variable: set-module-defined-list! 
o|removed side-effect free assignment to unused variable: module-exist-list 
o|removed side-effect free assignment to unused variable: set-module-exist-list! 
o|removed side-effect free assignment to unused variable: module-defined-syntax-list 
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
o|replaced variables: 138 
o|removed binding forms: 106 
o|inlining procedure: k3228 
o|contracted procedure: k3348 
o|inlining procedure: k3564 
o|inlining procedure: k3720 
o|inlining procedure: k5202 
o|inlining procedure: k5724 
o|inlining procedure: k5944 
o|inlining procedure: k6271 
o|inlining procedure: k7291 
o|inlining procedure: k7398 
o|inlining procedure: k7560 
o|inlining procedure: k7575 
o|inlining procedure: k7656 
o|inlining procedure: k76568945 
o|inlining procedure: k8223 
o|inlining procedure: k8375 
o|replaced variables: 3 
o|removed binding forms: 129 
o|contracted procedure: k3220 
o|contracted procedure: k3224 
o|contracted procedure: k3511 
o|contracted procedure: k3520 
o|contracted procedure: k3617 
o|contracted procedure: k3727 
o|contracted procedure: k3689 
o|contracted procedure: k3697 
o|contracted procedure: k3808 
o|contracted procedure: k3745 
o|contracted procedure: k3772 
o|contracted procedure: k3787 
o|contracted procedure: k4310 
o|contracted procedure: k4313 
o|contracted procedure: k4316 
o|contracted procedure: k4319 
o|contracted procedure: k4322 
o|contracted procedure: k4613 
o|contracted procedure: k4569 
o|contracted procedure: k4524 
o|contracted procedure: k4387 
o|contracted procedure: k4620 
o|contracted procedure: k5198 
o|contracted procedure: k5334 
o|contracted procedure: k5412 
o|contracted procedure: k5415 
o|contracted procedure: k5418 
o|contracted procedure: k5421 
o|contracted procedure: k5440 
o|contracted procedure: k3998 
o|contracted procedure: k4001 
o|contracted procedure: k4004 
o|contracted procedure: k6262 
o|contracted procedure: k6265 
o|contracted procedure: k6268 
o|contracted procedure: k7274 
o|contracted procedure: k7308 
o|contracted procedure: k7409 
o|contracted procedure: k8227 
o|removed binding forms: 55 
o|replaced variables: 32 
o|removed binding forms: 17 
o|direct leaf routine/allocation: g515516 3 
o|direct leaf routine with hoistable closures/allocation: g499506 (g515516) 3 
o|contracted procedure: "(modules.scm:164) k3576" 
o|removed binding forms: 2 
o|customizable procedures: (g21872194 for-each-loop21862201 map-loop22082226 k8212 loop2150 merr2123 loop22157 map-loop21262143 err2115 loop22086 k7871 loop2074 iface2064 err2063 g20332034 mrename1997 g20052006 g17721779 for-each-loop17711973 g18111818 for-each-loop18101824 g18321839 for-each-loop18311843 map-loop19091926 map-loop19351952 map-loop18551872 map-loop18811898 k7246 k6299 k6308 map-loop17161733 map-loop17421759 tostr1426 g17031704 loop1631 g16981699 loop1640 map-loop16641681 g16521659 for-each-loop16511688 map-loop15561573 g16261627 loop1580 g16211622 loop1589 g16011608 for-each-loop16001611 map-loop14871504 g15481549 g15441545 loop1511 g15241531 for-each-loop15231534 import-spec1428 import-name1427 map-loop11261144 loop1152 k5868 k5880 k5852 loop1160 g11811188 for-each-loop11801252 g676677 g669670 k4145 warn642 loop2660 loop654 map-loop12601285 g12961303 for-each-loop12951310 g11971204 for-each-loop11961208 g12281235 for-each-loop12271240 k5341 k5371 loop1097 map-loop10351053 g10681077 map-loop10621083 map-loop856874 map-loop884902 map-loop912930 g942949 for-each-loop941955 g963970 for-each-loop962976 g984991 for-each-loop983997 merge-se k4329 k4337 map-loop724741 k4602 map-loop750774 g789798 map-loop783816 loop823 k4373 loop695 k3935 for-each-loop611631 g583584 k3831 for-each-loop498518 g482483 k3467 g444445 loop435 map-loop400418) 
o|calls to known targets: 251 
o|identified direct recursive calls: f_3325 1 
o|identified direct recursive calls: f_3568 1 
o|identified direct recursive calls: f_4271 2 
o|identified direct recursive calls: f_4391 1 
o|identified direct recursive calls: f_5345 1 
o|identified direct recursive calls: f_4075 1 
o|identified direct recursive calls: f_5823 1 
o|identified direct recursive calls: f_6372 1 
o|identified direct recursive calls: f_6554 1 
o|identified direct recursive calls: f_6542 1 
o|identified direct recursive calls: f_6811 1 
o|identified direct recursive calls: f_6748 1 
o|identified direct recursive calls: f_6736 1 
o|identified direct recursive calls: f_7326 1 
o|identified direct recursive calls: f_7360 1 
o|identified direct recursive calls: f_7430 1 
o|identified direct recursive calls: f_7464 1 
o|identified direct recursive calls: f_7900 1 
o|identified direct recursive calls: f_7801 2 
o|identified direct recursive calls: f_8021 1 
o|fast box initializations: 61 
o|fast global references: 16 
o|fast global assignments: 2 
o|dropping unused closure argument: f_6257 
o|dropping unused closure argument: f_4256 
*/
/* end of file */

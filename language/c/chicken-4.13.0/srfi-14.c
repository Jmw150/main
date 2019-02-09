/* Generated from srfi-14.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: srfi-14.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file srfi-14.c
   unit: srfi_2d14
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[101];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,19),40,37,108,97,116,105,110,49,45,62,99,104,97,114,32,110,54,52,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,19),40,109,97,107,101,45,99,104,97,114,45,115,101,116,32,115,54,56,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,17),40,99,104,97,114,45,115,101,116,58,115,32,99,115,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,15),40,99,104,97,114,45,115,101,116,63,32,120,55,50,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,37,100,101,102,97,117,108,116,45,98,97,115,101,32,109,97,121,98,101,45,98,97,115,101,55,54,32,112,114,111,99,55,55,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,9),40,108,112,32,99,115,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,31),40,37,99,104,97,114,45,115,101,116,58,115,47,99,104,101,99,107,32,99,115,56,49,32,112,114,111,99,56,50,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,20),40,99,104,97,114,45,115,101,116,45,99,111,112,121,32,99,115,56,57,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,11),40,108,112,32,114,101,115,116,57,57,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,20),40,99,104,97,114,45,115,101,116,61,32,46,32,114,101,115,116,57,49,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,10),40,108,112,50,32,105,49,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,18),40,108,112,32,115,49,49,49,51,32,114,101,115,116,49,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,22),40,99,104,97,114,45,115,101,116,60,61,32,46,32,114,101,115,116,49,48,54,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,49,52,55,32,97,110,115,49,52,56,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,38),40,99,104,97,114,45,115,101,116,45,104,97,115,104,32,99,115,49,51,52,32,46,32,109,97,121,98,101,45,98,111,117,110,100,49,51,53,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,99,111,110,116,97,105,110,115,63,32,99,115,49,53,55,32,99,104,97,114,49,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,12),40,108,112,32,115,105,122,101,49,55,51,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,21),40,99,104,97,114,45,115,101,116,45,115,105,122,101,32,99,115,49,54,57,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,18),40,108,112,32,105,49,56,52,32,99,111,117,110,116,49,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,99,104,97,114,45,115,101,116,45,99,111,117,110,116,32,112,114,101,100,49,56,48,32,99,115,101,116,49,56,49,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,11),40,103,50,48,53,32,99,50,49,52,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,52,32,103,50,49,49,50,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,45),40,37,115,101,116,45,99,104,97,114,45,115,101,116,32,115,101,116,49,57,55,32,112,114,111,99,49,57,56,32,99,115,49,57,57,32,99,104,97,114,115,50,48,48,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,103,50,51,48,32,99,50,51,57,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,57,32,103,50,51,54,50,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,46),40,37,115,101,116,45,99,104,97,114,45,115,101,116,33,32,115,101,116,50,50,50,32,112,114,111,99,50,50,51,32,99,115,50,50,52,32,99,104,97,114,115,50,50,53,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,17),40,97,49,57,51,51,32,115,50,52,57,32,105,50,53,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,97,100,106,111,105,110,32,99,115,50,52,55,32,46,32,99,104,97,114,115,50,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,17),40,97,49,57,52,53,32,115,50,53,52,32,105,50,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,97,100,106,111,105,110,33,32,99,115,50,53,50,32,46,32,99,104,97,114,115,50,53,51,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,17),40,97,49,57,53,55,32,115,50,53,57,32,105,50,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,100,101,108,101,116,101,32,99,115,50,53,55,32,46,32,99,104,97,114,115,50,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,17),40,97,49,57,54,57,32,115,50,54,52,32,105,50,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,100,101,108,101,116,101,33,32,99,115,50,54,50,32,46,32,99,104,97,114,115,50,54,51,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,25),40,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,32,99,115,101,116,50,54,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,28),40,101,110,100,45,111,102,45,99,104,97,114,45,115,101,116,63,32,99,117,114,115,111,114,50,54,57,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,32),40,99,104,97,114,45,115,101,116,45,114,101,102,32,99,115,101,116,50,55,49,32,99,117,114,115,111,114,50,55,50,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,40),40,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,45,110,101,120,116,32,99,115,101,116,50,55,52,32,99,117,114,115,111,114,50,55,53,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,49),40,37,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,45,110,101,120,116,32,99,115,101,116,50,55,56,32,99,117,114,115,111,114,50,55,57,32,112,114,111,99,50,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,33),40,99,104,97,114,45,115,101,116,45,102,111,114,45,101,97,99,104,32,112,114,111,99,50,57,56,32,99,115,50,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,28),40,99,104,97,114,45,115,101,116,45,109,97,112,32,112,114,111,99,51,49,56,32,99,115,51,49,57,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,51,52,57,32,97,110,115,51,53,48,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,37),40,99,104,97,114,45,115,101,116,45,102,111,108,100,32,107,111,110,115,51,52,52,32,107,110,105,108,51,52,53,32,99,115,51,52,54,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,54,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,30),40,99,104,97,114,45,115,101,116,45,101,118,101,114,121,32,112,114,101,100,51,53,55,32,99,115,51,53,56,41,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,28),40,99,104,97,114,45,115,101,116,45,97,110,121,32,112,114,101,100,51,55,53,32,99,115,51,55,54,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,12),40,108,112,32,115,101,101,100,52,48,50,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,47),40,37,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,33,32,112,51,57,54,32,102,51,57,55,32,103,51,57,56,32,115,51,57,57,32,115,101,101,100,52,48,48,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,56),40,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,32,112,52,49,52,32,102,52,49,53,32,103,52,49,54,32,115,101,101,100,52,49,55,32,46,32,109,97,121,98,101,45,98,97,115,101,52,49,56,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,54),40,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,33,32,112,52,50,50,32,102,52,50,51,32,103,52,50,52,32,115,101,101,100,52,50,53,32,98,97,115,101,45,99,115,101,116,52,50,54,41,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,6),40,103,52,51,52,41,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,37,108,105,115,116,45,62,99,104,97,114,45,115,101,116,33,32,99,104,97,114,115,52,50,57,32,115,52,51,48,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,21),40,99,104,97,114,45,115,101,116,32,46,32,99,104,97,114,115,52,53,52,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,41),40,108,105,115,116,45,62,99,104,97,114,45,115,101,116,32,99,104,97,114,115,52,53,56,32,46,32,109,97,121,98,101,45,98,97,115,101,52,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,37),40,108,105,115,116,45,62,99,104,97,114,45,115,101,116,33,32,99,104,97,114,115,52,54,51,32,98,97,115,101,45,99,115,52,54,52,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,52,55,48,32,97,110,115,52,55,49,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,22),40,99,104,97,114,45,115,101,116,45,62,108,105,115,116,32,99,115,52,54,55,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,56,49,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,41),40,37,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,33,32,115,116,114,52,55,56,32,98,115,52,55,57,32,112,114,111,99,52,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,41),40,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,32,115,116,114,52,57,50,32,46,32,109,97,121,98,101,45,98,97,115,101,52,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,37),40,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,33,32,115,116,114,52,57,55,32,98,97,115,101,45,99,115,52,57,56,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,9),40,108,112,32,106,53,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,24),40,99,104,97,114,45,115,101,116,45,62,115,116,114,105,110,103,32,99,115,53,48,49,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,65),40,37,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,33,32,108,111,119,101,114,53,49,53,32,117,112,112,101,114,53,49,54,32,101,114,114,111,114,63,53,49,55,32,98,115,53,49,56,32,112,114,111,99,53,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,49),40,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,32,108,111,119,101,114,53,51,56,32,117,112,112,101,114,53,51,57,32,46,32,114,101,115,116,53,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,61),40,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,33,32,108,111,119,101,114,53,53,51,32,117,112,112,101,114,53,53,52,32,101,114,114,111,114,63,53,53,53,32,98,97,115,101,45,99,115,53,53,54,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,53,54,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,39),40,37,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,33,32,112,114,101,100,53,53,57,32,100,115,53,54,48,32,98,115,53,54,49,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,56),40,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,32,112,114,101,100,105,99,97,116,101,53,56,53,32,100,111,109,97,105,110,53,56,54,32,46,32,109,97,121,98,101,45,98,97,115,101,53,56,55,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,52),40,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,33,32,112,114,101,100,105,99,97,116,101,53,57,49,32,100,111,109,97,105,110,53,57,50,32,98,97,115,101,45,99,115,53,57,51,41,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,17),40,45,62,99,104,97,114,45,115,101,116,32,120,53,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,54,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,24),40,37,115,116,114,105,110,103,45,105,116,101,114,32,112,54,48,50,32,115,54,48,51,41};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,54,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,14),40,103,54,50,48,32,99,115,101,116,54,50,57,41,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,49,57,32,103,54,50,54,54,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,47),40,37,99,104,97,114,45,115,101,116,45,97,108,103,101,98,114,97,32,115,54,49,51,32,99,115,101,116,115,54,49,52,32,111,112,54,49,53,32,112,114,111,99,54,49,54,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,17),40,97,51,48,53,57,32,105,54,53,50,32,118,54,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,45,115,101,116,45,99,111,109,112,108,101,109,101,110,116,32,99,115,54,52,57,41,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,17),40,97,51,48,57,51,32,105,54,54,56,32,118,54,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,30),40,99,104,97,114,45,115,101,116,45,99,111,109,112,108,101,109,101,110,116,33,32,99,115,101,116,54,54,54,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,22),40,97,51,49,50,55,32,115,54,56,52,32,105,54,56,53,32,118,54,56,54,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,37),40,99,104,97,114,45,115,101,116,45,117,110,105,111,110,33,32,99,115,101,116,49,54,56,50,32,46,32,99,115,101,116,115,54,56,51,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,22),40,97,51,49,54,56,32,115,54,57,53,32,105,54,57,54,32,118,54,57,55,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,45,115,101,116,45,117,110,105,111,110,32,46,32,99,115,101,116,115,54,57,51,41,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,22),40,97,51,50,48,56,32,115,55,48,54,32,105,55,48,55,32,118,55,48,56,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,44),40,99,104,97,114,45,115,101,116,45,105,110,116,101,114,115,101,99,116,105,111,110,33,32,99,115,101,116,49,55,48,52,32,46,32,99,115,101,116,115,55,48,53,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,22),40,97,51,50,52,53,32,115,55,49,55,32,105,55,49,56,32,118,55,49,57,41,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,105,110,116,101,114,115,101,99,116,105,111,110,32,46,32,99,115,101,116,115,55,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,22),40,97,51,50,56,49,32,115,55,50,56,32,105,55,50,57,32,118,55,51,48,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,42),40,99,104,97,114,45,115,101,116,45,100,105,102,102,101,114,101,110,99,101,33,32,99,115,101,116,49,55,50,54,32,46,32,99,115,101,116,115,55,50,55,41,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,22),40,97,51,51,50,48,32,115,55,52,48,32,105,55,52,49,32,118,55,52,50,41,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,39),40,99,104,97,114,45,115,101,116,45,100,105,102,102,101,114,101,110,99,101,32,99,115,49,55,51,55,32,46,32,99,115,101,116,115,55,51,56,41,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,22),40,97,51,51,53,56,32,115,55,53,49,32,105,55,53,50,32,118,55,53,51,41,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,120,111,114,33,32,99,115,101,116,49,55,52,57,32,46,32,99,115,101,116,115,55,53,48,41,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,22),40,97,51,52,50,48,32,115,55,54,55,32,105,55,54,56,32,118,55,54,57,41,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,25),40,99,104,97,114,45,115,101,116,45,120,111,114,32,46,32,99,115,101,116,115,55,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,17),40,97,51,52,55,57,32,105,55,57,56,32,118,55,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,12),40,103,55,56,56,32,99,115,55,57,55,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,56,55,32,103,55,57,52,56,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,62),40,37,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,33,32,100,105,102,102,55,56,49,32,105,110,116,55,56,50,32,99,115,101,116,115,55,56,51,32,112,114,111,99,55,56,52,41,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,17),40,97,51,53,56,55,32,105,56,51,50,32,118,56,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,54),40,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,33,32,99,115,49,56,50,55,32,99,115,50,56,50,56,32,46,32,99,115,101,116,115,56,50,57,41,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,46),40,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,32,99,115,49,56,53,51,32,46,32,99,115,101,116,115,56,53,52,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,54,50,32,103,57,55,52,57,56,48,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,51,52,32,103,57,52,54,57,53,50,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,48,54,32,103,57,49,56,57,50,52,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,55,55,32,103,56,56,57,56,57,53,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_2942)
static void C_fcall f_2942(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2452)
static C_word C_fcall f_2452(C_word t0,C_word t1);
C_noret_decl(f_1718)
static void C_ccall f_1718(C_word c,C_word *av) C_noret;
C_noret_decl(f_1526)
static void C_fcall f_1526(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3353)
static void C_ccall f_3353(C_word c,C_word *av) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word *av) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word *av) C_noret;
C_noret_decl(f_2520)
static void C_fcall f_2520(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1796)
static void C_ccall f_1796(C_word c,C_word *av) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word *av) C_noret;
C_noret_decl(f_2257)
static void C_fcall f_2257(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word *av) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word *av) C_noret;
C_noret_decl(f_2431)
static C_word C_fcall f_2431(C_word t0,C_word t1);
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word *av) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word *av) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word *av) C_noret;
C_noret_decl(f_2429)
static void C_fcall f_2429(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word *av) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word *av) C_noret;
C_noret_decl(f_2715)
static C_word C_fcall f_2715(C_word t0,C_word t1);
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word *av) C_noret;
C_noret_decl(f_3128)
static void C_ccall f_3128(C_word c,C_word *av) C_noret;
C_noret_decl(f_2496)
static void C_ccall f_2496(C_word c,C_word *av) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word *av) C_noret;
C_noret_decl(f_2576)
static C_word C_fcall f_2576(C_word t0,C_word t1);
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word *av) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word *av) C_noret;
C_noret_decl(f_2563)
static void C_fcall f_2563(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word *av) C_noret;
C_noret_decl(f_1449)
static void C_fcall f_1449(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word *av) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word *av) C_noret;
C_noret_decl(f_1430)
static void C_ccall f_1430(C_word c,C_word *av) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word *av) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word *av) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word *av) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word *av) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word *av) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word *av) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085(C_word c,C_word *av) C_noret;
C_noret_decl(f_2746)
static void C_fcall f_2746(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1499)
static void C_ccall f_1499(C_word c,C_word *av) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word *av) C_noret;
C_noret_decl(f_1481)
static void C_ccall f_1481(C_word c,C_word *av) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word *av) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word *av) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word *av) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word *av) C_noret;
C_noret_decl(f_1857)
static void C_fcall f_1857(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word *av) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word *av) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word *av) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word *av) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word *av) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word *av) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word *av) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word *av) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word *av) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word *av) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word *av) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word *av) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word *av) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word *av) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word *av) C_noret;
C_noret_decl(f_2205)
static void C_fcall f_2205(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word *av) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word *av) C_noret;
C_noret_decl(f_1884)
static void C_fcall f_1884(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1888)
static void C_ccall f_1888(C_word c,C_word *av) C_noret;
C_noret_decl(f_1889)
static void C_fcall f_1889(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word *av) C_noret;
C_noret_decl(f_3879)
static void C_ccall f_3879(C_word c,C_word *av) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_fcall f_3022(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word *av) C_noret;
C_noret_decl(f_2896)
static void C_ccall f_2896(C_word c,C_word *av) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word *av) C_noret;
C_noret_decl(f_1424)
static void C_ccall f_1424(C_word c,C_word *av) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word *av) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word *av) C_noret;
C_noret_decl(f_1733)
static C_word C_fcall f_1733(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1656)
static C_word C_fcall f_1656(C_word t0,C_word t1);
C_noret_decl(f_2248)
static void C_ccall f_2248(C_word c,C_word *av) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word *av) C_noret;
C_noret_decl(f_2311)
static void C_fcall f_2311(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word *av) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word *av) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word *av) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word *av) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word *av) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word *av) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word *av) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word *av) C_noret;
C_noret_decl(f_2647)
static C_word C_fcall f_2647(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word *av) C_noret;
C_noret_decl(f_1838)
static void C_fcall f_1838(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1833)
static void C_fcall f_1833(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word *av) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word *av) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word *av) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word *av) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word *av) C_noret;
C_noret_decl(f_3651)
static void C_ccall f_3651(C_word c,C_word *av) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word *av) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word *av) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word *av) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word *av) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word *av) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word *av) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word *av) C_noret;
C_noret_decl(f_2130)
static void C_fcall f_2130(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2794)
static void C_ccall f_2794(C_word c,C_word *av) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word *av) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word *av) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word *av) C_noret;
C_noret_decl(f_3032)
static void C_ccall f_3032(C_word c,C_word *av) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word *av) C_noret;
C_noret_decl(f_2125)
static void C_ccall f_2125(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word *av) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word *av) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word *av) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word *av) C_noret;
C_noret_decl(f_2696)
static void C_fcall f_2696(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2119)
static void C_ccall f_2119(C_word c,C_word *av) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word *av) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word *av) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word *av) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word *av) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word *av) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word *av) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word *av) C_noret;
C_noret_decl(f_1339)
static void C_fcall f_1339(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3676)
static void C_ccall f_3676(C_word c,C_word *av) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word *av) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word *av) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word *av) C_noret;
C_noret_decl(f_1606)
static void C_fcall f_1606(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3474)
static void C_fcall f_3474(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3472)
static void C_fcall f_3472(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word *av) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word *av) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word *av) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word *av) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_fcall f_2975(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2973)
static void C_fcall f_2973(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word *av) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word *av) C_noret;
C_noret_decl(f_2984)
static void C_fcall f_2984(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word *av) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word *av) C_noret;
C_noret_decl(f_1383)
static void C_fcall f_1383(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1389)
static void C_fcall f_1389(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word *av) C_noret;
C_noret_decl(f_2074)
static void C_ccall f_2074(C_word c,C_word *av) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word *av) C_noret;
C_noret_decl(f_2064)
static void C_fcall f_2064(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word *av) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word *av) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word *av) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word *av) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word *av) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word *av) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word *av) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word *av) C_noret;
C_noret_decl(f_2012)
static C_word C_fcall f_2012(C_word t0,C_word t1);
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word *av) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word *av) C_noret;
C_noret_decl(f_3547)
static void C_fcall f_3547(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2003)
static void C_fcall f_2003(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word *av) C_noret;
C_noret_decl(f_1994)
static void C_ccall f_1994(C_word c,C_word *av) C_noret;
C_noret_decl(f_2371)
static void C_fcall f_2371(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word *av) C_noret;
C_noret_decl(f_1592)
static void C_fcall f_1592(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word *av) C_noret;
C_noret_decl(f_3729)
static void C_ccall f_3729(C_word c,C_word *av) C_noret;
C_noret_decl(f_3726)
static void C_ccall f_3726(C_word c,C_word *av) C_noret;
C_noret_decl(f_2365)
static void C_fcall f_2365(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word *av) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word *av) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word *av) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940(C_word c,C_word *av) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word *av) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word *av) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272(C_word c,C_word *av) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word *av) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word *av) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word *av) C_noret;
C_noret_decl(f_1952)
static void C_ccall f_1952(C_word c,C_word *av) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word *av) C_noret;
C_noret_decl(f_3779)
static void C_fcall f_3779(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word *av) C_noret;
C_noret_decl(f_3770)
static void C_ccall f_3770(C_word c,C_word *av) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word *av) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word *av) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word *av) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word *av) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word *av) C_noret;
C_noret_decl(f_1905)
static void C_fcall f_1905(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903(C_word c,C_word *av) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word *av) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word *av) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word *av) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word *av) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word *av) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word *av) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word *av) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word *av) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word *av) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word *av) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word *av) C_noret;
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word *av) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word *av) C_noret;
C_noret_decl(f_3280)
static void C_ccall f_3280(C_word c,C_word *av) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word *av) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word *av) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word *av) C_noret;
C_noret_decl(f_3820)
static void C_fcall f_3820(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3762)
static void C_ccall f_3762(C_word c,C_word *av) C_noret;
C_noret_decl(f_3888)
static void C_fcall f_3888(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3766)
static void C_ccall f_3766(C_word c,C_word *av) C_noret;
C_noret_decl(f_3750)
static void C_ccall f_3750(C_word c,C_word *av) C_noret;
C_noret_decl(f_3754)
static void C_ccall f_3754(C_word c,C_word *av) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d14_toplevel)
C_externexport void C_ccall C_srfi_2d14_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word *av) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word *av) C_noret;
C_noret_decl(f_3411)
static void C_ccall f_3411(C_word c,C_word *av) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word *av) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word *av) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word *av) C_noret;
C_noret_decl(f_3845)
static void C_ccall f_3845(C_word c,C_word *av) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word *av) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word *av) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word *av) C_noret;
C_noret_decl(f_2810)
static void C_fcall f_2810(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word *av) C_noret;
C_noret_decl(f_2804)
static void C_fcall f_2804(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3854)
static void C_fcall f_3854(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word *av) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word *av) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word *av) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word *av) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word *av) C_noret;
C_noret_decl(f_2479)
static void C_ccall f_2479(C_word c,C_word *av) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word *av) C_noret;
C_noret_decl(f_1770)
static void C_ccall f_1770(C_word c,C_word *av) C_noret;
C_noret_decl(f_1775)
static void C_fcall f_1775(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1501)
static void C_fcall f_1501(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2932)
static void C_fcall f_2932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word *av) C_noret;
C_noret_decl(f_1724)
static void C_ccall f_1724(C_word c,C_word *av) C_noret;
C_noret_decl(f_1728)
static void C_ccall f_1728(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2942)
static void C_ccall trf_2942(C_word c,C_word *av) C_noret;
static void C_ccall trf_2942(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2942(t0,t1,t2);}

C_noret_decl(trf_1526)
static void C_ccall trf_1526(C_word c,C_word *av) C_noret;
static void C_ccall trf_1526(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1526(t0,t1,t2);}

C_noret_decl(trf_2520)
static void C_ccall trf_2520(C_word c,C_word *av) C_noret;
static void C_ccall trf_2520(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2520(t0,t1,t2,t3);}

C_noret_decl(trf_2257)
static void C_ccall trf_2257(C_word c,C_word *av) C_noret;
static void C_ccall trf_2257(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2257(t0,t1,t2);}

C_noret_decl(trf_2429)
static void C_ccall trf_2429(C_word c,C_word *av) C_noret;
static void C_ccall trf_2429(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2429(t0,t1,t2);}

C_noret_decl(trf_2563)
static void C_ccall trf_2563(C_word c,C_word *av) C_noret;
static void C_ccall trf_2563(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2563(t0,t1,t2,t3);}

C_noret_decl(trf_1449)
static void C_ccall trf_1449(C_word c,C_word *av) C_noret;
static void C_ccall trf_1449(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1449(t0,t1,t2);}

C_noret_decl(trf_2746)
static void C_ccall trf_2746(C_word c,C_word *av) C_noret;
static void C_ccall trf_2746(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2746(t0,t1);}

C_noret_decl(trf_1857)
static void C_ccall trf_1857(C_word c,C_word *av) C_noret;
static void C_ccall trf_1857(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1857(t0,t1,t2);}

C_noret_decl(trf_2205)
static void C_ccall trf_2205(C_word c,C_word *av) C_noret;
static void C_ccall trf_2205(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2205(t0,t1,t2,t3);}

C_noret_decl(trf_1884)
static void C_ccall trf_1884(C_word c,C_word *av) C_noret;
static void C_ccall trf_1884(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1884(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1889)
static void C_ccall trf_1889(C_word c,C_word *av) C_noret;
static void C_ccall trf_1889(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1889(t0,t1,t2);}

C_noret_decl(trf_3022)
static void C_ccall trf_3022(C_word c,C_word *av) C_noret;
static void C_ccall trf_3022(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3022(t0,t1,t2);}

C_noret_decl(trf_2311)
static void C_ccall trf_2311(C_word c,C_word *av) C_noret;
static void C_ccall trf_2311(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2311(t0,t1,t2);}

C_noret_decl(trf_1838)
static void C_ccall trf_1838(C_word c,C_word *av) C_noret;
static void C_ccall trf_1838(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1838(t0,t1,t2);}

C_noret_decl(trf_1833)
static void C_ccall trf_1833(C_word c,C_word *av) C_noret;
static void C_ccall trf_1833(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1833(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2130)
static void C_ccall trf_2130(C_word c,C_word *av) C_noret;
static void C_ccall trf_2130(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2130(t0,t1,t2);}

C_noret_decl(trf_2696)
static void C_ccall trf_2696(C_word c,C_word *av) C_noret;
static void C_ccall trf_2696(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2696(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1339)
static void C_ccall trf_1339(C_word c,C_word *av) C_noret;
static void C_ccall trf_1339(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1339(t0,t1,t2);}

C_noret_decl(trf_1606)
static void C_ccall trf_1606(C_word c,C_word *av) C_noret;
static void C_ccall trf_1606(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1606(t0,t1,t2,t3);}

C_noret_decl(trf_3474)
static void C_ccall trf_3474(C_word c,C_word *av) C_noret;
static void C_ccall trf_3474(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3474(t0,t1,t2);}

C_noret_decl(trf_3472)
static void C_ccall trf_3472(C_word c,C_word *av) C_noret;
static void C_ccall trf_3472(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3472(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2975)
static void C_ccall trf_2975(C_word c,C_word *av) C_noret;
static void C_ccall trf_2975(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2975(t0,t1,t2);}

C_noret_decl(trf_2973)
static void C_ccall trf_2973(C_word c,C_word *av) C_noret;
static void C_ccall trf_2973(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2973(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2984)
static void C_ccall trf_2984(C_word c,C_word *av) C_noret;
static void C_ccall trf_2984(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2984(t0,t1,t2);}

C_noret_decl(trf_1383)
static void C_ccall trf_1383(C_word c,C_word *av) C_noret;
static void C_ccall trf_1383(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1383(t0,t1,t2);}

C_noret_decl(trf_1389)
static void C_ccall trf_1389(C_word c,C_word *av) C_noret;
static void C_ccall trf_1389(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1389(t0,t1,t2);}

C_noret_decl(trf_2064)
static void C_ccall trf_2064(C_word c,C_word *av) C_noret;
static void C_ccall trf_2064(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2064(t0,t1,t2);}

C_noret_decl(trf_3547)
static void C_ccall trf_3547(C_word c,C_word *av) C_noret;
static void C_ccall trf_3547(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3547(t0,t1,t2);}

C_noret_decl(trf_2003)
static void C_ccall trf_2003(C_word c,C_word *av) C_noret;
static void C_ccall trf_2003(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2003(t0,t1,t2,t3);}

C_noret_decl(trf_2371)
static void C_ccall trf_2371(C_word c,C_word *av) C_noret;
static void C_ccall trf_2371(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2371(t0,t1,t2);}

C_noret_decl(trf_1592)
static void C_ccall trf_1592(C_word c,C_word *av) C_noret;
static void C_ccall trf_1592(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1592(t0,t1);}

C_noret_decl(trf_2365)
static void C_ccall trf_2365(C_word c,C_word *av) C_noret;
static void C_ccall trf_2365(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2365(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3779)
static void C_ccall trf_3779(C_word c,C_word *av) C_noret;
static void C_ccall trf_3779(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3779(t0,t1,t2);}

C_noret_decl(trf_1905)
static void C_ccall trf_1905(C_word c,C_word *av) C_noret;
static void C_ccall trf_1905(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1905(t0,t1,t2);}

C_noret_decl(trf_3820)
static void C_ccall trf_3820(C_word c,C_word *av) C_noret;
static void C_ccall trf_3820(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3820(t0,t1,t2);}

C_noret_decl(trf_3888)
static void C_ccall trf_3888(C_word c,C_word *av) C_noret;
static void C_ccall trf_3888(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3888(t0,t1,t2);}

C_noret_decl(trf_2810)
static void C_ccall trf_2810(C_word c,C_word *av) C_noret;
static void C_ccall trf_2810(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2810(t0,t1,t2);}

C_noret_decl(trf_2804)
static void C_ccall trf_2804(C_word c,C_word *av) C_noret;
static void C_ccall trf_2804(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2804(t0,t1,t2,t3);}

C_noret_decl(trf_3854)
static void C_ccall trf_3854(C_word c,C_word *av) C_noret;
static void C_ccall trf_3854(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3854(t0,t1,t2);}

C_noret_decl(trf_1775)
static void C_ccall trf_1775(C_word c,C_word *av) C_noret;
static void C_ccall trf_1775(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1775(t0,t1,t2,t3);}

C_noret_decl(trf_1501)
static void C_ccall trf_1501(C_word c,C_word *av) C_noret;
static void C_ccall trf_1501(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1501(t0,t1,t2,t3);}

C_noret_decl(trf_2932)
static void C_ccall trf_2932(C_word c,C_word *av) C_noret;
static void C_ccall trf_2932(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2932(t0,t1,t2);}

/* lp in %string-iter in k1295 */
static void C_fcall f_2942(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2942,3,t0,t1,t2);}
a=C_alloc(5);
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2952,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_string_ref(((C_word*)t0)[3],t2);
t6=C_fix(C_character_code(t5));
/* srfi-14.scm:500: p */
t7=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t7;
av2[1]=t4;
av2[2]=t2;
av2[3]=t6;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* for-each-loop433 in %list->char-set! in k1295 */
static C_word C_fcall f_2452(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=(
  /* srfi-14.scm:360: g434 */
  f_2431(((C_word*)t0)[2],t2)
);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k1716 in char-set-contains? in k1295 */
static void C_ccall f_1718(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1718,2,av);}
t2=((C_word*)t0)[2];
t3=C_fix(C_character_code(t2));
t4=((C_word*)t0)[3];
t5=C_i_string_ref(t1,t3);
t6=C_fix(C_character_code(t5));
t7=C_eqp(t6,C_fix(0));
t8=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_i_not(t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* lp2 in k1509 in lp in k1497 in char-set<= in k1295 */
static void C_fcall f_1526(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1526,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* srfi-14.scm:179: lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1501(t4,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[5];
t5=t2;
t6=C_i_string_ref(t4,t5);
t7=C_fix(C_character_code(t6));
t8=t2;
t9=C_i_string_ref(((C_word*)t0)[3],t8);
t10=C_fix(C_character_code(t9));
if(C_truep(C_fixnum_less_or_equal_p(t7,t10))){
t11=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:181: lp2 */
t13=t1;
t14=t11;
t1=t13;
t2=t14;
goto loop;}
else{
t11=t1;{
C_word av2[2];
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}

/* k3351 in char-set-xor! in k1295 */
static void C_ccall f_3353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3353,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3355 in char-set-xor! in k1295 */
static void C_ccall f_3357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3357,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3359,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:581: %char-set-algebra */
f_2973(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[70]);}

/* a3358 in k3355 in char-set-xor! in k1295 */
static void C_ccall f_3359(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3359,5,av);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t2;
t7=t3;
t8=C_i_string_ref(t6,t7);
t9=C_fix(C_character_code(t8));
t10=C_fixnum_difference(C_fix(1),t9);
t11=t1;
t12=t2;
t13=t3;
t14=C_make_character(C_unfix(t10));
t15=t11;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_i_string_set(t12,t13,t14);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}}

/* lp in k2513 in char-set->list in k1295 */
static void C_fcall f_2520(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_2520,4,t0,t1,t2,t3);}
a=C_alloc(3);
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=t2;
t7=C_i_string_ref(((C_word*)t0)[2],t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t3;
/* srfi-14.scm:383: lp */
t14=t1;
t15=t5;
t16=t10;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t10=t2;
t11=C_make_character(C_unfix(t10));
t12=C_a_i_cons(&a,2,t11,t3);
/* srfi-14.scm:383: lp */
t14=t1;
t15=t5;
t16=t12;
t1=t14;
t2=t15;
t3=t16;
goto loop;}}}

/* k1794 in lp in k1768 in char-set-count in k1295 */
static void C_ccall f_1796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1796,2,av);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:228: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1775(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}
else{
t2=((C_word*)t0)[2];
/* srfi-14.scm:228: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1775(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}}

/* k2250 in char-set-every in k1295 */
static void C_ccall f_2252(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2252,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2257,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2257(t6,((C_word*)t0)[3],C_fix(255));}

/* lp in k2250 in char-set-every in k1295 */
static void C_fcall f_2257(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2257,3,t0,t1,t2);}
a=C_alloc(5);
t3=t2;
t4=C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t2;
t6=C_i_string_ref(((C_word*)t0)[2],t5);
t7=C_fix(C_character_code(t6));
t8=C_eqp(t7,C_fix(0));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2286,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t8)){
if(C_truep(t8)){
t10=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:325: lp */
t13=t1;
t14=t10;
t1=t13;
t2=t14;
goto loop;}
else{
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}
else{
t10=t2;
t11=C_make_character(C_unfix(t10));
/* srfi-14.scm:324: pred */
t12=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t12;
av2[1]=t9;
av2[2]=t11;
((C_proc)C_fast_retrieve_proc(t12))(3,av2);}}}}

/* k2828 in lp in %char-set-filter! in k1295 */
static void C_ccall f_2830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2830,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_string_set(t2,t3,C_make_character(1));
t5=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:456: lp */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2810(t6,((C_word*)t0)[5],t5);}
else{
t2=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:456: lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2810(t3,((C_word*)t0)[5],t2);}}

/* k3342 in char-set-difference in k1295 */
static void C_ccall f_3344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3344,2,av);}
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* g434 in %list->char-set! in k1295 */
static C_word C_fcall f_2431(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_fix(C_character_code(t1));
t3=((C_word*)t0)[2];
return(C_i_string_set(t3,t2,C_make_character(1)));}

/* char-set-xor! in k1295 */
static void C_ccall f_3349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,3)))){
C_save_and_reclaim((void*)f_3349,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3353,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3357,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:581: %char-set:s/check */
f_1383(t5,t2,lf[70]);}

/* k2421 in char-set-unfold! in k1295 */
static void C_ccall f_2423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2423,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2425 in char-set-unfold! in k1295 */
static void C_ccall f_2427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2427,2,av);}
/* srfi-14.scm:351: %char-set-unfold! */
f_2365(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* %list->char-set! in k1295 */
static void C_fcall f_2429(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_2429,3,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2431,a[2]=t3,a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[22]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2452,a[2]=t4,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  f_2452(t6,t2)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* char-set-count in k1295 */
static void C_ccall f_1766(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1766,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1770,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:225: %char-set:s/check */
f_1383(t4,t3,lf[20]);}

/* k3124 in char-set-union! in k1295 */
static void C_ccall f_3126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3126,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3128,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:536: %char-set-algebra */
f_2973(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[62]);}

/* lp in k2704 in %ucs-range->char-set! in k1295 */
static C_word C_fcall f_2715(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
t2=((C_word*)t0)[2];
t3=t1;
if(C_truep(C_fixnum_less_or_equal_p(t2,t3))){
t4=((C_word*)t0)[3];
t5=t1;
t6=C_i_string_set(t4,t5,C_make_character(1));
t7=C_fixnum_difference(t1,C_fix(1));
t9=t7;
t1=t9;
goto loop;}
else{
t4=C_SCHEME_UNDEFINED;
return(t4);}}

/* k3120 in char-set-union! in k1295 */
static void C_ccall f_3122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3122,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3127 in k3124 in char-set-union! in k1295 */
static void C_ccall f_3128(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3128,5,av);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t1;
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_string_set(t2,t3,C_make_character(1));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k2494 in k2491 in list->char-set in k1295 */
static void C_ccall f_2496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2496,2,av);}
/* srfi-14.scm:372: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* k2491 in list->char-set in k1295 */
static void C_ccall f_2493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2493,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2496,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:371: %list->char-set! */
f_2429(t3,((C_word*)t0)[3],t2);}

/* doloop481 in %string->char-set! in k1295 */
static C_word C_fcall f_2576(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
t2=t1;
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_string_ref(((C_word*)t0)[2],t1);
t4=C_fix(C_character_code(t3));
t5=((C_word*)t0)[3];
t6=C_i_string_set(t5,t4,C_make_character(1));
t7=C_fixnum_difference(t1,C_fix(1));
t9=t7;
t1=t9;
goto loop;}}

/* k2480 in k2477 in char-set in k1295 */
static void C_ccall f_2482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2482,2,av);}
/* srfi-14.scm:367: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* list->char-set in k1295 */
static void C_ccall f_2489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_2489,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2493,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:370: %default-base */
f_1339(t4,t3,*((C_word*)lf[42]+1));}

/* %string->char-set! in k1295 */
static void C_fcall f_2563(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2563,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=C_i_check_string_2(t2,t4);
t6=t2;
t7=C_block_size(t6);
t8=C_fixnum_difference(t7,C_fix(1));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2576,a[2]=t2,a[3]=t3,a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=(
  f_2576(t9,t8)
);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k1442 in char-set= in k1295 */
static void C_ccall f_1444(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1444,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1449,a[2]=t2,a[3]=t4,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1449(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* lp in k1442 in char-set= in k1295 */
static void C_fcall f_1449(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1449,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_pairp(t2);
t4=C_i_not(t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1471,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t2);
/* srfi-14.scm:165: %char-set:s/check */
f_1383(t5,t6,lf[14]);}}

/* a3320 in k3311 in char-set-difference in k1295 */
static void C_ccall f_3321(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3321,5,av);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t1;
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_string_set(t2,t3,C_make_character(0));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3205 in char-set-intersection! in k1295 */
static void C_ccall f_3207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3207,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3209,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:551: %char-set-algebra */
f_2973(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[65]);}

/* char-set= in k1295 */
static void C_ccall f_1430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_1430,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1444,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:162: %char-set:s/check */
f_1383(t7,t4,lf[14]);}}

/* a3208 in k3205 in char-set-intersection! in k1295 */
static void C_ccall f_3209(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3209,5,av);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_string_set(t2,t3,C_make_character(0));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3050 in k3047 in char-set-complement in k1295 */
static void C_ccall f_3052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3052,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3060,a[2]=t2,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:524: %string-iter */
f_2932(t3,t4,((C_word*)t0)[3]);}

/* k3053 in k3050 in k3047 in char-set-complement in k1295 */
static void C_ccall f_3055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3055,2,av);}
/* srfi-14.scm:525: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* k3087 in char-set-complement! in k1295 */
static void C_ccall f_3089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3089,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3094,a[2]=t2,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:529: %string-iter */
f_2932(t3,t4,t2);}

/* %latin1->char in k1295 */
static void C_ccall f_1299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1299,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_make_character(C_unfix(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1295 */
static void C_ccall f_1297(C_word c,C_word *av){
C_word tmp;
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(192,c,7)))){
C_save_and_reclaim((void *)f_1297,2,av);}
a=C_alloc(192);
t2=C_mutate2(&lf[0] /* (set! %latin1->char ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1299,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[1]+1 /* (set! make-char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1311,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[3]+1 /* (set! char-set:s ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1317,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[4]+1 /* (set! char-set? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1323,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2(&lf[5] /* (set! %default-base ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1339,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2(&lf[11] /* (set! %char-set:s/check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1383,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[13]+1 /* (set! char-set-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1416,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[14]+1 /* (set! char-set= ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1430,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[15]+1 /* (set! char-set<= ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1481,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[16]+1 /* (set! char-set-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1585,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[18]+1 /* (set! char-set-contains? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1685,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[19]+1 /* (set! char-set-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1724,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[20]+1 /* (set! char-set-count ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1766,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2(&lf[21] /* (set! %set-char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1833,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2(&lf[23] /* (set! %set-char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1884,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[24]+1 /* (set! char-set-adjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1928,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[25]+1 /* (set! char-set-adjoin! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1940,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[26]+1 /* (set! char-set-delete ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1952,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[27]+1 /* (set! char-set-delete! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1964,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[28]+1 /* (set! char-set-cursor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1976,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[30]+1 /* (set! end-of-char-set? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1982,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[31]+1 /* (set! char-set-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1988,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2((C_word*)lf[32]+1 /* (set! char-set-cursor-next ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1994,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate2(&lf[29] /* (set! %char-set-cursor-next ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2003,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate2((C_word*)lf[33]+1 /* (set! char-set-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2055,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate2((C_word*)lf[34]+1 /* (set! char-set-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2115,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate2((C_word*)lf[35]+1 /* (set! char-set-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2196,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate2((C_word*)lf[36]+1 /* (set! char-set-every ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2248,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate2((C_word*)lf[37]+1 /* (set! char-set-any ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2302,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate2(&lf[38] /* (set! %char-set-unfold! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2365,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate2((C_word*)lf[39]+1 /* (set! char-set-unfold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2407,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[40]+1 /* (set! char-set-unfold! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2419,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate2(&lf[41] /* (set! %list->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2429,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate2((C_word*)lf[2]+1 /* (set! char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2475,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate2((C_word*)lf[42]+1 /* (set! list->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2489,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate2((C_word*)lf[43]+1 /* (set! list->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2501,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate2((C_word*)lf[44]+1 /* (set! char-set->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2511,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2(&lf[45] /* (set! %string->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[46]+1 /* (set! string->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2613,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[47]+1 /* (set! string->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[48]+1 /* (set! char-set->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2635,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2(&lf[49] /* (set! %ucs-range->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2696,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[51]+1 /* (set! ucs-range->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2764,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[52]+1 /* (set! ucs-range->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2794,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2(&lf[53] /* (set! %char-set-filter! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2804,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[54]+1 /* (set! char-set-filter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2872,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2((C_word*)lf[55]+1 /* (set! char-set-filter! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2888,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[56]+1 /* (set! ->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2902,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2(&lf[58] /* (set! %string-iter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2932,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate2(&lf[59] /* (set! %char-set-algebra ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2973,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate2((C_word*)lf[60]+1 /* (set! char-set-complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate2((C_word*)lf[61]+1 /* (set! char-set-complement! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3085,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[62]+1 /* (set! char-set-union! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3118,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate2((C_word*)lf[63]+1 /* (set! char-set-union ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3149,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate2((C_word*)lf[65]+1 /* (set! char-set-intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3199,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate2((C_word*)lf[66]+1 /* (set! char-set-intersection ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3226,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate2((C_word*)lf[68]+1 /* (set! char-set-difference! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3272,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate2((C_word*)lf[69]+1 /* (set! char-set-difference ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3303,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate2((C_word*)lf[70]+1 /* (set! char-set-xor! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3349,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate2((C_word*)lf[71]+1 /* (set! char-set-xor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3401,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate2(&lf[72] /* (set! %char-set-diff+intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3472,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate2((C_word*)lf[73]+1 /* (set! char-set-diff+intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3570,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate2((C_word*)lf[74]+1 /* (set! char-set-diff+intersection ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3641,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:630: char-set */
t66=*((C_word*)lf[2]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t66;
av2[1]=t65;
((C_proc)(void*)(*((C_word*)t66+1)))(2,av2);}}

/* char-set-complement! in k1295 */
static void C_ccall f_3085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3085,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3089,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:528: %char-set:s/check */
f_1383(t3,t2,lf[61]);}

/* k2744 in %ucs-range->char-set! in k1295 */
static void C_fcall f_2746(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_2746,2,t0,t1);}
if(C_truep(t1)){
/* srfi-14.scm:429: ##sys#error */
t2=*((C_word*)lf[7]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[50];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2706(2,av2);}}}

/* k1497 in char-set<= in k1295 */
static void C_ccall f_1499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1499,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1501,a[2]=t3,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1501(t5,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2391 in k2399 in k2403 in lp in %char-set-unfold! in k1295 */
static void C_ccall f_2393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2393,2,av);}
/* srfi-14.scm:343: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2371(t2,((C_word*)t0)[3],t1);}

/* char-set<= in k1295 */
static void C_ccall f_1481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_1481,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1499,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:173: %char-set:s/check */
f_1383(t7,t4,lf[15]);}}

/* k3930 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3932,2,av);}
/* srfi-14.scm:642: ucs-range->char-set! */
t2=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(216);
av2[3]=C_fix(223);
av2[4]=C_SCHEME_TRUE;
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* char-set-unfold! in k1295 */
static void C_ccall f_2419(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2419,7,av);}
a=C_alloc(11);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2423,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2427,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:352: %char-set:s/check */
f_1383(t8,t6,lf[40]);}

/* a3059 in k3050 in k3047 in char-set-complement in k1295 */
static void C_ccall f_3060(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3060,4,av);}
t4=C_fixnum_difference(C_fix(1),t3);
t5=C_make_character(C_unfix(t4));
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_string_set(((C_word*)t0)[2],t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2412 in k2409 in char-set-unfold in k1295 */
static void C_ccall f_2414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2414,2,av);}
/* srfi-14.scm:348: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* k2409 in char-set-unfold in k1295 */
static void C_ccall f_2411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_2411,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:347: %char-set-unfold! */
f_2365(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t2,((C_word*)t0)[6]);}

/* for-each-loop204 in k1835 in %set-char-set in k1295 */
static void C_fcall f_1857(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1857,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1867,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:236: g205 */
t5=((C_word*)t0)[3];
f_1838(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3234 in char-set-intersection in k1295 */
static void C_ccall f_3236(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3236,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3239,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3246,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:558: %char-set-algebra */
f_2973(t3,t2,t5,t6,lf[66]);}

/* k1850 in k1835 in %set-char-set in k1295 */
static void C_ccall f_1852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1852,2,av);}
/* srfi-14.scm:240: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* ucs-range->char-set in k1295 */
static void C_ccall f_2764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_2764,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2774,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:437: %default-base */
f_1339(t10,t9,*((C_word*)lf[51]+1));}

/* k1469 in lp in k1442 in char-set= in k1295 */
static void C_ccall f_1471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1471,2,av);}
if(C_truep(C_i_string_equal_p(((C_word*)t0)[2],t1))){
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
/* srfi-14.scm:166: lp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1449(t4,((C_word*)t0)[5],t3);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* char-set-unfold in k1295 */
static void C_ccall f_2407(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand((c-6)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_2407,c,av);}
a=C_alloc((c-6)*C_SIZEOF_PAIR+7);
t6=C_build_rest(&a,c,6,av);
C_word t7;
C_word t8;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2411,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:346: %default-base */
f_1339(t7,t6,*((C_word*)lf[39]+1));}

/* k2403 in lp in %char-set-unfold! in k1295 */
static void C_ccall f_2405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2405,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2401,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:342: f */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k2399 in k2403 in lp in %char-set-unfold! in k1295 */
static void C_ccall f_2401(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2401,2,av);}
a=C_alloc(4);
t2=C_fix(C_character_code(t1));
t3=((C_word*)t0)[2];
t4=C_i_string_set(t3,t2,C_make_character(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2393,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:343: g */
t6=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k3047 in char-set-complement in k1295 */
static void C_ccall f_3049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3049,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3052,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t3;
av2[2]=C_fix(256);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* char-set-intersection in k1295 */
static void C_ccall f_3226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3226,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3236,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3265,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_u_i_car(t5);
/* srfi-14.scm:557: %char-set:s/check */
f_1383(t4,t6,lf[66]);}
else{
/* srfi-14.scm:560: char-set-copy */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=*((C_word*)lf[67]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k3237 in k3234 in char-set-intersection in k1295 */
static void C_ccall f_3239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3239,2,av);}
/* srfi-14.scm:559: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* k3911 in map-loop877 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3913(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3913,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3888(t6,((C_word*)t0)[5],t5);}

/* k3090 in k3087 in char-set-complement! in k1295 */
static void C_ccall f_3092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3092,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3093 in k3087 in char-set-complement! in k1295 */
static void C_ccall f_3094(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3094,4,av);}
t4=C_fixnum_difference(C_fix(1),t3);
t5=C_make_character(C_unfix(t4));
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_string_set(((C_word*)t0)[2],t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* char-set-complement in k1295 */
static void C_ccall f_3045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3045,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:522: %char-set:s/check */
f_1383(t3,t2,lf[60]);}

/* k2704 in %ucs-range->char-set! in k1295 */
static void C_ccall f_2706(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2706,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_i_fixnum_min(t2,C_fix(256));
t4=C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2715,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=(
  f_2715(t5,t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* lp in k2198 in char-set-fold in k1295 */
static void C_fcall f_2205(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2205,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2223,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=t2;
t9=C_i_string_ref(((C_word*)t0)[3],t8);
t10=C_fix(C_character_code(t9));
t11=C_eqp(t10,C_fix(0));
if(C_truep(t11)){
t12=t3;
/* srfi-14.scm:315: lp */
t15=t1;
t16=t6;
t17=t12;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t12=t2;
t13=C_make_character(C_unfix(t12));
/* srfi-14.scm:317: kons */
t14=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t14;
av2[1]=t7;
av2[2]=t13;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t14))(4,av2);}}}}

/* k2198 in char-set-fold in k1295 */
static void C_ccall f_2200(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2200,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2205,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2205(t6,((C_word*)t0)[3],C_fix(255),((C_word*)t0)[4]);}

/* k1880 in %set-char-set in k1295 */
static void C_ccall f_1882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1882,2,av);}
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* %set-char-set! in k1295 */
static void C_fcall f_1884(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1884,5,t1,t2,t3,t4,t5);}
a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1888,a[2]=t2,a[3]=t5,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:243: %char-set:s/check */
f_1383(t6,t4,t3);}

/* k1886 in %set-char-set! in k1295 */
static void C_ccall f_1888(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_1888,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1889,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_list_2(t4,lf[22]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1903,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1905,a[2]=t8,a[3]=t3,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1905(t10,t6,t4);}

/* g230 in k1886 in %set-char-set! in k1295 */
static void C_fcall f_1889(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1889,3,t0,t1,t2);}
t3=C_fix(C_character_code(t2));
/* srfi-14.scm:244: set */
t4=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}

/* k3201 in char-set-intersection! in k1295 */
static void C_ccall f_3203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3203,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3877 in map-loop906 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3879(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3879,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3854(t6,((C_word*)t0)[5],t5);}

/* char-set-contains? in k1295 */
static void C_ccall f_1685(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1685,4,av);}
a=C_alloc(4);
t4=C_i_check_char_2(t3,lf[18]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1718,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:213: %char-set:s/check */
f_1383(t5,t2,lf[18]);}

/* for-each-loop619 in %char-set-algebra in k1295 */
static void C_fcall f_3022(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3022,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3032,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:509: g620 */
t5=((C_word*)t0)[3];
f_2975(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3157 in char-set-union in k1295 */
static void C_ccall f_3159(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3159,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3162,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3169,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:543: %char-set-algebra */
f_2973(t3,t2,t5,t6,lf[63]);}

/* k2894 in char-set-filter! in k1295 */
static void C_ccall f_2896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2896,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:469: %char-set:s/check */
f_1383(t3,((C_word*)t0)[4],lf[55]);}

/* k2890 in char-set-filter! in k1295 */
static void C_ccall f_2892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2892,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1422 in char-set-copy in k1295 */
static void C_ccall f_1424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1424,2,av);}
/* srfi-14.scm:155: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* k1426 in char-set-copy in k1295 */
static void C_ccall f_1428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1428,2,av);}
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* char-set-copy in k1295 */
static void C_ccall f_1416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1416,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1424,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1428,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:155: %char-set:s/check */
f_1383(t4,t2,lf[13]);}

/* lp in k1726 in char-set-size in k1295 */
static C_word C_fcall f_1733(C_word t0,C_word t1,C_word t2){
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
t3=t1;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=t2;
return(t4);}
else{
t4=C_fixnum_difference(t1,C_fix(1));
t5=t1;
t6=C_i_string_ref(((C_word*)t0)[2],t5);
t7=C_fix(C_character_code(t6));
t8=C_fixnum_plus(t2,t7);
t10=t4;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* lp in k1596 in k1590 in char-set-hash in k1295 */
static C_word C_fcall f_1656(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(C_fixnum_greater_or_equal_p(t2,t3))){
return(C_fixnum_difference(t1,C_fix(1)));}
else{
t4=C_fixnum_plus(t1,t1);
t6=t4;
t1=t6;
goto loop;}}

/* char-set-every in k1295 */
static void C_ccall f_2248(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2248,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2252,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:321: %char-set:s/check */
f_1383(t4,t3,lf[36]);}

/* k1404 in k1394 in lp in %char-set:s/check in k1295 */
static void C_ccall f_1406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1406,2,av);}
/* srfi-14.scm:127: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1389(t2,((C_word*)t0)[3],t1);}

/* lp in k2304 in char-set-any in k1295 */
static void C_fcall f_2311(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2311,3,t0,t1,t2);}
a=C_alloc(5);
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2321,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_i_string_ref(((C_word*)t0)[3],t5);
t7=C_fix(C_character_code(t6));
t8=C_eqp(t7,C_fix(0));
if(C_truep(C_i_not(t8))){
t9=t2;
t10=C_make_character(C_unfix(t9));
/* srfi-14.scm:332: pred */
t11=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t11;
av2[1]=t4;
av2[2]=t10;
((C_proc)C_fast_retrieve_proc(t11))(3,av2);}}
else{
t9=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:333: lp */
t12=t1;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* char-set-fold in k1295 */
static void C_ccall f_2196(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2196,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2200,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:312: %char-set:s/check */
f_1383(t5,t4,lf[35]);}

/* k2304 in char-set-any in k1295 */
static void C_ccall f_2306(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2306,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2311,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2311(t6,((C_word*)t0)[3],C_fix(255));}

/* char-set-any in k1295 */
static void C_ccall f_2302(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2302,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2306,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:329: %char-set:s/check */
f_1383(t4,t3,lf[37]);}

/* char-set-union! in k1295 */
static void C_ccall f_3118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,3)))){
C_save_and_reclaim((void*)f_3118,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3122,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3126,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:536: %char-set:s/check */
f_1383(t5,t2,lf[62]);}

/* k2186 in lp in k2120 in k2117 in char-set-map in k1295 */
static void C_ccall f_2188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2188,2,av);}
t2=C_fix(C_character_code(t1));
t3=C_i_string_set(((C_word*)t0)[2],t2,C_make_character(1));
t4=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:307: lp */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2130(t5,((C_word*)t0)[5],t4);}

/* k2221 in lp in k2198 in char-set-fold in k1295 */
static void C_ccall f_2223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2223,2,av);}
/* srfi-14.scm:315: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2205(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* char-set-union in k1295 */
static void C_ccall f_3149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3149,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3159,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3192,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_u_i_car(t5);
/* srfi-14.scm:542: %char-set:s/check */
f_1383(t4,t6,lf[63]);}
else{
/* srfi-14.scm:545: char-set-copy */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=*((C_word*)lf[64]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k2640 in k2637 in char-set->string in k1295 */
static void C_ccall f_2642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2642,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2647,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  f_2647(t3,C_fix(255),C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* lp in k2640 in k2637 in char-set->string in k1295 */
static C_word C_fcall f_2647(C_word t0,C_word t1,C_word t2){
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
C_stack_overflow_check;
loop:{}
t3=t1;
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
return(((C_word*)t0)[2]);}
else{
t4=t1;
t5=C_i_string_ref(((C_word*)t0)[3],t4);
t6=C_fix(C_character_code(t5));
t7=C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=t2;
t9=C_fixnum_difference(t1,C_fix(1));
t14=t9;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t8=t1;
t9=C_make_character(C_unfix(t8));
t10=C_i_string_set(((C_word*)t0)[2],t2,t9);
t11=C_fixnum_plus(t2,C_fix(1));
t12=C_fixnum_difference(t1,C_fix(1));
t14=t12;
t15=t11;
t1=t14;
t2=t15;
goto loop;}}}

/* k1835 in %set-char-set in k1295 */
static void C_ccall f_1837(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_1837,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1838,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
t5=C_i_check_list_2(t4,lf[22]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1852,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1857,a[2]=t8,a[3]=t3,a[4]=((C_word)li22),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1857(t10,t6,t4);}

/* g205 in k1835 in %set-char-set in k1295 */
static void C_fcall f_1838(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1838,3,t0,t1,t2);}
t3=C_fix(C_character_code(t2));
/* srfi-14.scm:238: set */
t4=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}

/* %set-char-set in k1295 */
static void C_fcall f_1833(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1833,5,t1,t2,t3,t4,t5);}
a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1837,a[2]=t2,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1882,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:237: %char-set:s/check */
f_1383(t7,t4,t3);}

/* k3160 in k3157 in char-set-union in k1295 */
static void C_ccall f_3162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3162,2,av);}
/* srfi-14.scm:544: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* a3168 in k3157 in char-set-union in k1295 */
static void C_ccall f_3169(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3169,5,av);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t1;
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_string_set(t2,t3,C_make_character(1));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k2618 in k2615 in string->char-set in k1295 */
static void C_ccall f_2620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2620,2,av);}
/* srfi-14.scm:401: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* string->char-set! in k1295 */
static void C_ccall f_2625(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2625,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2629,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:404: %char-set:s/check */
f_1383(t5,t3,lf[47]);}

/* k2627 in string->char-set! in k1295 */
static void C_ccall f_2629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2629,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3649 in k3646 in k3643 in char-set-diff+intersection in k1295 */
static void C_ccall f_3651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3651,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:619: make-char-set */
t3=*((C_word*)lf[1]+1);{
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

/* k2772 in ucs-range->char-set in k1295 */
static void C_ccall f_2774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_2774,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2777,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:438: %ucs-range->char-set! */
f_2696(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t2,lf[51]);}

/* k2775 in k2772 in ucs-range->char-set in k1295 */
static void C_ccall f_2777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2777,2,av);}
/* srfi-14.scm:439: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* k1865 in for-each-loop204 in k1835 in %set-char-set in k1295 */
static void C_ccall f_1867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1867,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1857(t3,((C_word*)t0)[4],t2);}

/* char-set-diff+intersection in k1295 */
static void C_ccall f_3641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3641,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3645,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:616: %char-set:s/check */
f_1383(t5,t2,lf[74]);}

/* k3643 in char-set-diff+intersection in k1295 */
static void C_ccall f_3645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3645,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3648,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t3;
av2[2]=C_fix(256);
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3656 in k3649 in k3646 in k3643 in char-set-diff+intersection in k1295 */
static void C_ccall f_3658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3658,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3662,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:619: make-char-set */
t4=*((C_word*)lf[1]+1);{
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

/* k3646 in k3643 in char-set-diff+intersection in k1295 */
static void C_ccall f_3648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3648,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3651,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:618: %char-set-diff+intersection! */
f_3472(t3,((C_word*)t0)[3],t2,((C_word*)t0)[4],lf[74]);}

/* k2631 in string->char-set! in k1295 */
static void C_ccall f_2633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2633,2,av);}
/* srfi-14.scm:404: %string->char-set! */
f_2563(((C_word*)t0)[2],((C_word*)t0)[3],t1,lf[47]);}

/* lp in k2120 in k2117 in char-set-map in k1295 */
static void C_fcall f_2130(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2130,3,t0,t1,t2);}
a=C_alloc(6);
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=t2;
t5=C_i_string_ref(((C_word*)t0)[2],t4);
t6=C_fix(C_character_code(t5));
t7=C_eqp(t6,C_fix(0));
if(C_truep(C_i_not(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_make_character(C_unfix(t9));
/* srfi-14.scm:306: proc */
t11=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t11;
av2[1]=t8;
av2[2]=t10;
((C_proc)C_fast_retrieve_proc(t11))(3,av2);}}
else{
t8=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:307: lp */
t12=t1;
t13=t8;
t1=t12;
t2=t13;
goto loop;}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* ucs-range->char-set! in k1295 */
static void C_ccall f_2794(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2794,6,av);}
a=C_alloc(10);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2798,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2802,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:443: %char-set:s/check */
f_1383(t7,t5,lf[52]);}

/* char-set->string in k1295 */
static void C_ccall f_2635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2635,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2639,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:410: %char-set:s/check */
f_1383(t3,t2,lf[48]);}

/* k2637 in char-set->string in k1295 */
static void C_ccall f_2639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2639,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2642,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2694,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:411: char-set-size */
t5=*((C_word*)lf[19]+1);{
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

/* k2796 in ucs-range->char-set! in k1295 */
static void C_ccall f_2798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2798,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3030 in for-each-loop619 in %char-set-algebra in k1295 */
static void C_ccall f_3032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3032,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3022(t3,((C_word*)t0)[4],t2);}

/* k2120 in k2117 in char-set-map in k1295 */
static void C_ccall f_2122(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2122,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2125,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2130,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word)li43),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2130(t7,t3,C_fix(255));}

/* k2123 in k2120 in k2117 in char-set-map in k1295 */
static void C_ccall f_2125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2125,2,av);}
/* srfi-14.scm:308: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_3693,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3932,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:643: ucs-range->char-set! */
t4=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(192);
av2[3]=C_fix(215);
av2[4]=C_SCHEME_TRUE;
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3696,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[77]+1 /* (set! char-set:upper-case ...) */,t1);
t3=C_mutate2((C_word*)lf[78]+1 /* (set! char-set:title-case ...) */,*((C_word*)lf[64]+1));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:648: char-set-union */
t5=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[77]+1);
av2[3]=*((C_word*)lf[76]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2615 in string->char-set in k1295 */
static void C_ccall f_2617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2617,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2620,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:400: %string->char-set! */
f_2563(t3,((C_word*)t0)[3],t2,lf[46]);}

/* string->char-set in k1295 */
static void C_ccall f_2613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_2613,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2617,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:399: %default-base */
f_1339(t4,t3,*((C_word*)lf[46]+1));}

/* k2692 in k2637 in char-set->string in k1295 */
static void C_ccall f_2694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2694,2,av);}
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* %ucs-range->char-set! in k1295 */
static void C_fcall f_2696(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2696,6,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
t7=C_i_check_exact_2(t2,t6);
t8=C_i_check_exact_2(t3,t6);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2706,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2746,a[2]=t9,a[3]=t6,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=t3;
if(C_truep(C_fixnum_lessp(t11,t12))){
t13=t3;
t14=t10;
f_2746(t14,(C_truep(C_fixnum_lessp(C_fix(256),t13))?t4:C_SCHEME_FALSE));}
else{
t13=t10;
f_2746(t13,C_SCHEME_FALSE);}}

/* k2117 in char-set-map in k1295 */
static void C_ccall f_2119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2119,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2122,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t3;
av2[2]=C_fix(256);
av2[3]=C_make_character(0);
tp(4,av2);}}

/* char-set-map in k1295 */
static void C_ccall f_2115(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2115,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2119,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:301: %char-set:s/check */
f_1383(t4,t3,lf[34]);}

/* k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3683,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:636: ucs-range->char-set! */
t3=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(248);
av2[3]=C_fix(256);
av2[4]=C_SCHEME_TRUE;
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3686,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:637: char-set-adjoin! */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_make_character(181);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3680,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:635: ucs-range->char-set! */
t3=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(223);
av2[3]=C_fix(247);
av2[4]=C_SCHEME_TRUE;
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3572 in char-set-diff+intersection! in k1295 */
static void C_ccall f_3574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3574,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm:607: %char-set:s/check */
f_1383(t3,((C_word*)t0)[4],lf[73]);}

/* char-set-diff+intersection! in k1295 */
static void C_ccall f_3570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_3570,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3574,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:606: %char-set:s/check */
f_1383(t5,t2,lf[73]);}

/* k3575 in k3572 in char-set-diff+intersection! in k1295 */
static void C_ccall f_3577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_3577,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3588,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:608: %string-iter */
f_2932(t3,t4,((C_word*)t0)[5]);}

/* %default-base in k1295 */
static void C_fcall f_1339(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1339,3,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_car(t4);
t6=t2;
t7=C_u_i_cdr(t6);
if(C_truep(C_i_nullp(t7))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1360,a[2]=t1,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:114: char-set? */
t9=*((C_word*)lf[4]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* srfi-14.scm:116: ##sys#error */
t8=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[9];
av2[3]=t3;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}
else{
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t1;
av2[2]=C_fix(256);
av2[3]=C_make_character(0);
tp(4,av2);}}}

/* k3674 in k3670 in k1295 */
static void C_ccall f_3676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3676,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[67]+1 /* (set! char-set:full ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:634: ucs-range->char-set */
t4=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(97);
av2[3]=C_fix(123);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3670 in k1295 */
static void C_ccall f_3672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3672,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[64]+1 /* (set! char-set:empty ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:631: char-set-complement */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[64]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3689,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[76]+1 /* (set! char-set:lower-case ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:640: ucs-range->char-set */
t4=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(65);
av2[3]=C_fix(91);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* char-set? in k1295 */
static void C_ccall f_1323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1323,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3660 in k3656 in k3649 in k3646 in k3643 in char-set-diff+intersection in k1295 */
static void C_ccall f_3662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3662,2,av);}
/* srfi-14.scm:619: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_values(4,av2);}}

/* lp in k1596 in k1590 in char-set-hash in k1295 */
static void C_fcall f_1606(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1606,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-14.scm:205: modulo */
t5=*((C_word*)lf[17]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=t2;
t7=C_i_string_ref(((C_word*)t0)[3],t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t3;
/* srfi-14.scm:206: lp */
t14=t1;
t15=t5;
t16=t10;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t10=C_fixnum_times(C_fix(37),t3);
t11=C_fixnum_plus(t10,t2);
t12=C_fixnum_and(((C_word*)t0)[5],t11);
/* srfi-14.scm:206: lp */
t14=t1;
t15=t5;
t16=t12;
t1=t14;
t2=t15;
t3=t16;
goto loop;}}}

/* g788 in %char-set-diff+intersection! in k1295 */
static void C_fcall f_3474(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_3474,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3539,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:602: %char-set:s/check */
f_1383(t4,t2,((C_word*)t0)[4]);}

/* %char-set-diff+intersection! in k1295 */
static void C_fcall f_3472(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_3472,5,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3474,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp);
t7=C_i_check_list_2(t4,lf[22]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3547,a[2]=t9,a[3]=t6,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3547(t11,t1,t4);}

/* k3463 in char-set-xor in k1295 */
static void C_ccall f_3465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3465,2,av);}
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2513 in char-set->list in k1295 */
static void C_ccall f_2515(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2515,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2520,a[2]=t2,a[3]=t4,a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2520(t6,((C_word*)t0)[2],C_fix(255),C_SCHEME_END_OF_LIST);}

/* char-set->list in k1295 */
static void C_ccall f_2511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2511,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2515,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:380: %char-set:s/check */
f_1383(t3,t2,lf[44]);}

/* k2503 in list->char-set! in k1295 */
static void C_ccall f_2505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2505,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* list->char-set! in k1295 */
static void C_ccall f_2501(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2501,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2505,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2509,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:375: %char-set:s/check */
f_1383(t5,t3,lf[43]);}

/* g620 in %char-set-algebra in k1295 */
static void C_fcall f_2975(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2975,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:511: %char-set:s/check */
f_1383(t3,t2,((C_word*)t0)[4]);}

/* %char-set-algebra in k1295 */
static void C_fcall f_2973(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_2973,5,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2975,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp);
t7=C_i_check_list_2(t3,lf[22]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3022,a[2]=t9,a[3]=t6,a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3022(t11,t1,t3);}

/* k1358 in %default-base in k1295 */
static void C_ccall f_1360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1360,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:114: char-set:s */
t3=*((C_word*)lf[3]+1);{
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
else{
/* srfi-14.scm:115: ##sys#error */
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k2977 in g620 in %char-set-algebra in k1295 */
static void C_ccall f_2979(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2979,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2984,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li80),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2984(t6,((C_word*)t0)[4],C_fix(255));}

/* k1365 in k1358 in %default-base in k1295 */
static void C_ccall f_1367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1367,2,av);}
t2=((C_word*)t0)[2];
t3=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2507 in list->char-set! in k1295 */
static void C_ccall f_2509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2509,2,av);}
/* srfi-14.scm:375: %list->char-set! */
f_2429(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* lp in k2977 in g620 in %char-set-algebra in k1295 */
static void C_fcall f_2984(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_2984,3,t0,t1,t2);}
a=C_alloc(5);
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2994,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_i_string_ref(((C_word*)t0)[3],t5);
t7=C_fix(C_character_code(t6));
/* srfi-14.scm:514: op */
t8=((C_word*)t0)[4];{
C_word av2[5];
av2[0]=t8;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
av2[4]=t7;
((C_proc)C_fast_retrieve_proc(t8))(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1394 in lp in %char-set:s/check in k1295 */
static void C_ccall f_1396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1396,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* srfi-14.scm:126: char-set:s */
t2=*((C_word*)lf[3]+1);{
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1406,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:127: ##sys#error */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[12];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k2992 in lp in k2977 in g620 in %char-set-algebra in k1295 */
static void C_ccall f_2994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2994,2,av);}
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:515: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2984(t3,((C_word*)t0)[4],t2);}

/* %char-set:s/check in k1295 */
static void C_fcall f_1383(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1383,3,t1,t2,t3);}
a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1389,a[2]=t5,a[3]=t3,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1389(t7,t1,t2);}

/* lp in %char-set:s/check in k1295 */
static void C_fcall f_1389(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1389,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1396,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm:126: char-set? */
t4=*((C_word*)lf[4]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a3420 in k3409 in char-set-xor in k1295 */
static void C_ccall f_3421(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3421,5,av);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t2;
t7=t3;
t8=C_i_string_ref(t6,t7);
t9=C_fix(C_character_code(t8));
t10=C_fixnum_difference(C_fix(1),t9);
t11=t1;
t12=t2;
t13=t3;
t14=C_make_character(C_unfix(t10));
t15=t11;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=C_i_string_set(t12,t13,t14);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}}

/* k2072 in lp in k2057 in char-set-for-each in k1295 */
static void C_ccall f_2074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2074,2,av);}
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:297: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2064(t3,((C_word*)t0)[4],t2);}

/* char-set-hash in k1295 */
static void C_ccall f_1585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_1585,c,av);}
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(4194304):C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1592,a[2]=t7,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=C_eqp(((C_word*)t7)[1],C_fix(0));
if(C_truep(t9)){
t10=C_set_block_item(t7,0,C_fix(4194304));
t11=t8;
f_1592(t11,t10);}
else{
t10=t8;
f_1592(t10,C_SCHEME_UNDEFINED);}}

/* lp in k2057 in char-set-for-each in k1295 */
static void C_fcall f_2064(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2064,3,t0,t1,t2);}
a=C_alloc(5);
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2074,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_i_string_ref(((C_word*)t0)[3],t5);
t7=C_fix(C_character_code(t6));
t8=C_eqp(t7,C_fix(0));
if(C_truep(C_i_not(t8))){
t9=t2;
t10=C_make_character(C_unfix(t9));
/* srfi-14.scm:296: proc */
t11=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t11;
av2[1]=t4;
av2[2]=t10;
((C_proc)C_fast_retrieve_proc(t11))(3,av2);}}
else{
t9=C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm:297: lp */
t12=t1;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* char-set-for-each in k1295 */
static void C_ccall f_2055(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2055,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2059,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:293: %char-set:s/check */
f_1383(t4,t3,lf[33]);}

/* k2057 in char-set-for-each in k1295 */
static void C_ccall f_2059(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2059,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2064,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2064(t6,((C_word*)t0)[3],C_fix(255));}

/* k3666 in char-set-diff+intersection in k1295 */
static void C_ccall f_3668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3668,2,av);}
/* srfi-14.scm:616: string-copy */
t2=*((C_word*)lf[75]+1);{
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

/* k3581 in k3578 in k3575 in k3572 in char-set-diff+intersection! in k1295 */
static void C_ccall f_3583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3583,2,av);}
/* srfi-14.scm:613: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_values(4,av2);}}

/* k3578 in k3575 in k3572 in char-set-diff+intersection! in k1295 */
static void C_ccall f_3580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3580,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:612: %char-set-diff+intersection! */
f_3472(t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],lf[73]);}

/* a3587 in k3575 in k3572 in char-set-diff+intersection! in k1295 */
static void C_ccall f_3588(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3588,4,av);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
t6=t2;
t7=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_string_set(((C_word*)t0)[2],t6,C_make_character(0));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=t2;
t6=C_i_string_ref(((C_word*)t0)[2],t5);
t7=C_fix(C_character_code(t6));
t8=C_eqp(t7,C_fix(0));
if(C_truep(C_i_not(t8))){
t9=t1;
t10=t2;
t11=t9;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_i_string_set(((C_word*)t0)[3],t10,C_make_character(0));
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* k3537 in g788 in %char-set-diff+intersection! in k1295 */
static void C_ccall f_3539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3539,2,av);}
/* srfi-14.scm:597: %string-iter */
f_2932(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3555 in for-each-loop787 in %char-set-diff+intersection! in k1295 */
static void C_ccall f_3557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3557,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3547(t3,((C_word*)t0)[4],t2);}

/* lp in k2005 in %char-set-cursor-next in k1295 */
static C_word C_fcall f_2012(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
loop:{}
t2=C_fixnum_difference(t1,C_fix(1));
t3=C_fixnum_lessp(t2,C_fix(0));
if(C_truep(t3)){
if(C_truep(t3)){
return(t2);}
else{
t8=t2;
t1=t8;
goto loop;}}
else{
t4=C_i_string_ref(((C_word*)t0)[2],t2);
t5=C_fix(C_character_code(t4));
t6=C_eqp(t5,C_fix(0));
if(C_truep(C_i_not(t6))){
return(t2);}
else{
t8=t2;
t1=t8;
goto loop;}}}

/* end-of-char-set? in k1295 */
static void C_ccall f_1982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1982,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_fixnum_lessp(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* char-set-ref in k1295 */
static void C_ccall f_1988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1988,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_make_character(C_unfix(t3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* for-each-loop787 in %char-set-diff+intersection! in k1295 */
static void C_fcall f_3547(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3547,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3557,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:595: g788 */
t5=((C_word*)t0)[3];
f_3474(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* %char-set-cursor-next in k1295 */
static void C_fcall f_2003(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2003,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2007,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:282: %char-set:s/check */
f_1383(t5,t2,t4);}

/* k2005 in %char-set-cursor-next in k1295 */
static void C_ccall f_2007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2007,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2012,a[2]=t2,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  f_2012(t3,((C_word*)t0)[3])
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* char-set-cursor-next in k1295 */
static void C_ccall f_1994(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1994,4,av);}
t4=C_i_check_exact_2(t3,lf[32]);
/* srfi-14.scm:279: %char-set-cursor-next */
f_2003(t1,t2,t3,lf[32]);}

/* lp in %char-set-unfold! in k1295 */
static void C_fcall f_2371(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_2371,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2405,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* srfi-14.scm:341: p */
t4=((C_word*)t0)[6];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k1596 in k1590 in char-set-hash in k1295 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1598,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1656,a[2]=((C_word*)t0)[2],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t4=(
  f_1656(t3,C_fix(65536))
);
t5=t4;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1606,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t7,a[5]=t5,a[6]=((C_word)li14),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_1606(t9,((C_word*)t0)[3],C_fix(255),C_fix(0));}

/* k1590 in char-set-hash in k1295 */
static void C_fcall f_1592(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1592,2,t0,t1);}
a=C_alloc(4);
t2=C_i_check_exact_2(((C_word*)((C_word*)t0)[2])[1],lf[16]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:200: %char-set:s/check */
f_1383(t3,((C_word*)t0)[4],lf[16]);}

/* k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3720(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_3720,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=lf[0];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3726,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3888,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li114),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_3888(t12,t8,lf[95]);}

/* k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3729,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[83]+1 /* (set! char-set:punctuation ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3733,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:670: string->char-set */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3726,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3729,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:667: list->char-set! */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* %char-set-unfold! in k1295 */
static void C_fcall f_2365(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_2365,6,t1,t2,t3,t4,t5,t6);}
a=C_alloc(10);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2371,a[2]=t5,a[3]=t8,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_2371(t10,t1,t6);}

/* k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3712,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[81]+1 /* (set! char-set:hex-digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3716,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:657: char-set-union */
t4=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[79]+1);
av2[3]=*((C_word*)lf[80]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3716,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[82]+1 /* (set! char-set:letter+digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:660: string->char-set */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[96];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a1945 in char-set-adjoin! in k1295 */
static void C_ccall f_1946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1946,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_string_set(t2,t3,C_make_character(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* char-set-adjoin! in k1295 */
static void C_ccall f_1940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_1940,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1946,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:251: %set-char-set! */
f_1884(t1,t4,lf[25],t2,t3);}

/* k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3701,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3704,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:649: char-set-adjoin! */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_make_character(170);
av2[4]=C_make_character(186);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3704,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[79]+1 /* (set! char-set:letter ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:653: string->char-set */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[98];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* char-set-difference! in k1295 */
static void C_ccall f_3272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,3)))){
C_save_and_reclaim((void*)f_3272,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3276,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3280,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:566: %char-set:s/check */
f_1383(t5,t2,lf[68]);}

/* k3274 in char-set-difference! in k1295 */
static void C_ccall f_3276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3276,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3708,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[80]+1 /* (set! char-set:digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:654: string->char-set */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[97];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a1957 in char-set-delete in k1295 */
static void C_ccall f_1958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1958,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_string_set(t2,t3,C_make_character(0));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* char-set-delete in k1295 */
static void C_ccall f_1952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_1952,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1958,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:253: %set-char-set */
f_1833(t1,t4,lf[26],t2,t3);}

/* k3775 in k3752 in k3748 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in ... */
static void C_ccall f_3777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3777,2,av);}
/* srfi-14.scm:707: list->char-set */
t2=*((C_word*)lf[42]+1);{
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

/* map-loop962 in k3752 in k3748 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in ... */
static void C_fcall f_3779(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3779,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3804,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:707: g968 */
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

/* k3263 in char-set-intersection in k1295 */
static void C_ccall f_3265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3265,2,av);}
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3768 in k3756 in k3752 in k3748 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in ... */
static void C_ccall f_3770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3770,2,av);}
/* srfi-14.scm:713: ucs-range->char-set! */
t2=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(127);
av2[3]=C_fix(160);
av2[4]=C_SCHEME_TRUE;
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* char-set-delete! in k1295 */
static void C_ccall f_1964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_1964,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1970,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:255: %set-char-set! */
f_1884(t1,t4,lf[27],t2,t3);}

/* k2319 in lp in k2304 in char-set-any in k1295 */
static void C_ccall f_2321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2321,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm:333: lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2311(t3,((C_word*)t0)[2],t2);}}

/* char-set-cursor in k1295 */
static void C_ccall f_1976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1976,3,av);}
/* srfi-14.scm:269: %char-set-cursor-next */
f_2003(t1,t2,C_fix(256),lf[28]);}

/* a1969 in char-set-delete! in k1295 */
static void C_ccall f_1970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1970,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_string_set(t2,t3,C_make_character(0));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a3245 in k3234 in char-set-intersection in k1295 */
static void C_ccall f_3246(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3246,5,av);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_string_set(t2,t3,C_make_character(0));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* for-each-loop229 in k1886 in %set-char-set! in k1295 */
static void C_fcall f_1905(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1905,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1915,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:242: g230 */
t5=((C_word*)t0)[3];
f_1889(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1901 in k1886 in %set-char-set! in k1295 */
static void C_ccall f_1903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1903,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* char-set:s in k1295 */
static void C_ccall f_1317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1317,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3311 in char-set-difference in k1295 */
static void C_ccall f_3313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_3313,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3316,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3321,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:573: %char-set-algebra */
f_2973(t3,t2,((C_word*)t0)[3],t4,lf[69]);}

/* make-char-set in k1295 */
static void C_ccall f_1311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1311,3,av);}
a=C_alloc(3);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record2(&a,2,lf[2],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3314 in k3311 in char-set-difference in k1295 */
static void C_ccall f_3316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3316,2,av);}
/* srfi-14.scm:574: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* k1913 in for-each-loop229 in k1886 in %set-char-set! in k1295 */
static void C_ccall f_1915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1915,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1905(t3,((C_word*)t0)[4],t2);}

/* k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3733(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_3733,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=lf[0];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3739,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3854,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_3854(t12,t8,lf[93]);}

/* char-set-difference in k1295 */
static void C_ccall f_3303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3303,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3313,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3344,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:572: %char-set:s/check */
f_1383(t5,t2,lf[69]);}
else{
/* srfi-14.scm:575: char-set-copy */
t4=*((C_word*)lf[13]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3816 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 in ... */
static void C_ccall f_3818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3818,2,av);}
/* srfi-14.scm:696: list->char-set */
t2=*((C_word*)lf[42]+1);{
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

/* k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3739,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:689: list->char-set! */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3190 in char-set-union in k1295 */
static void C_ccall f_3192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3192,2,av);}
t2=C_i_string_length(t1);
/* srfi-14.scm:102: substring */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* char-set-adjoin in k1295 */
static void C_ccall f_1928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_1928,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1934,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:249: %set-char-set */
f_1833(t1,t4,lf[24],t2,t3);}

/* char-set-intersection! in k1295 */
static void C_ccall f_3199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,3)))){
C_save_and_reclaim((void*)f_3199,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3203,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3207,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:551: %char-set:s/check */
f_1383(t5,t2,lf[65]);}

/* a1933 in char-set-adjoin in k1295 */
static void C_ccall f_1934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1934,4,av);}
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_string_set(t2,t3,C_make_character(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3278 in char-set-difference! in k1295 */
static void C_ccall f_3280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3280,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3282,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:566: %char-set-algebra */
f_2973(((C_word*)t0)[2],t1,((C_word*)t0)[3],t2,lf[68]);}

/* a3281 in k3278 in char-set-difference! in k1295 */
static void C_ccall f_3282(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3282,5,av);}
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t1;
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_string_set(t2,t3,C_make_character(0));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* a3479 in g788 in %char-set-diff+intersection! in k1295 */
static void C_ccall f_3480(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3480,4,av);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=((C_word*)t0)[2];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(C_i_not(t9))){
t10=((C_word*)t0)[2];
t11=t2;
t12=C_i_string_set(t10,t11,C_make_character(0));
t13=t1;
t14=((C_word*)t0)[3];
t15=t2;
t16=t13;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_i_string_set(t14,t15,C_make_character(1));
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}

/* k2950 in lp in %string-iter in k1295 */
static void C_ccall f_2952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2952,2,av);}
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:501: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2942(t3,((C_word*)t0)[4],t2);}

/* map-loop934 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 in ... */
static void C_fcall f_3820(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3820,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3845,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:696: g940 */
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

/* k3760 in k3756 in k3752 in k3748 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in ... */
static void C_ccall f_3762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3762,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[89]+1 /* (set! char-set:iso-control ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3766,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:715: ucs-range->char-set */
t4=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(0);
av2[3]=C_fix(128);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop877 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_fcall f_3888(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3888,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:661: g883 */
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

/* k3764 in k3760 in k3756 in k3752 in k3748 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in ... */
static void C_ccall f_3766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3766,2,av);}
t2=C_mutate2((C_word*)lf[90]+1 /* (set! char-set:ascii ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3748 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 in ... */
static void C_ccall f_3750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3750,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[86]+1 /* (set! char-set:whitespace ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3754,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:704: char-set-union */
t4=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[86]+1);
av2[3]=*((C_word*)lf[85]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3752 in k3748 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in ... */
static void C_ccall f_3754(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_3754,2,av);}
a=C_alloc(20);
t2=C_mutate2((C_word*)lf[87]+1 /* (set! char-set:printing ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3758,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=lf[0];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3777,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3779,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=t7,a[6]=((C_word)li111),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3779(t13,t9,lf[91]);}

/* k3756 in k3752 in k3748 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in ... */
static void C_ccall f_3758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3758,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[88]+1 /* (set! char-set:blank ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3762,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3770,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:713: ucs-range->char-set */
t5=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(0);
av2[3]=C_fix(32);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_srfi_2d14_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("srfi_2d14_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_srfi_2d14_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(620))){
C_save(t1);
C_rereclaim2(620*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,101);
lf[1]=C_h_intern(&lf[1],13,"make-char-set");
lf[2]=C_h_intern(&lf[2],8,"char-set");
lf[3]=C_h_intern(&lf[3],10,"char-set:s");
lf[4]=C_h_intern(&lf[4],9,"char-set\077");
lf[6]=C_h_intern(&lf[6],9,"substring");
lf[7]=C_h_intern(&lf[7],9,"\003syserror");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000 BASE-CS parameter not a char-set");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\0003Expected final base char set -- too many parameters");
lf[10]=C_h_intern(&lf[10],15,"\003sysmake-string");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\016Not a char-set");
lf[13]=C_h_intern(&lf[13],13,"char-set-copy");
lf[14]=C_h_intern(&lf[14],9,"char-set=");
lf[15]=C_h_intern(&lf[15],10,"char-set<=");
lf[16]=C_h_intern(&lf[16],13,"char-set-hash");
lf[17]=C_h_intern(&lf[17],6,"modulo");
lf[18]=C_h_intern(&lf[18],18,"char-set-contains\077");
lf[19]=C_h_intern(&lf[19],13,"char-set-size");
lf[20]=C_h_intern(&lf[20],14,"char-set-count");
lf[22]=C_h_intern(&lf[22],8,"for-each");
lf[24]=C_h_intern(&lf[24],15,"char-set-adjoin");
lf[25]=C_h_intern(&lf[25],16,"char-set-adjoin!");
lf[26]=C_h_intern(&lf[26],15,"char-set-delete");
lf[27]=C_h_intern(&lf[27],16,"char-set-delete!");
lf[28]=C_h_intern(&lf[28],15,"char-set-cursor");
lf[30]=C_h_intern(&lf[30],16,"end-of-char-set\077");
lf[31]=C_h_intern(&lf[31],12,"char-set-ref");
lf[32]=C_h_intern(&lf[32],20,"char-set-cursor-next");
lf[33]=C_h_intern(&lf[33],17,"char-set-for-each");
lf[34]=C_h_intern(&lf[34],12,"char-set-map");
lf[35]=C_h_intern(&lf[35],13,"char-set-fold");
lf[36]=C_h_intern(&lf[36],14,"char-set-every");
lf[37]=C_h_intern(&lf[37],12,"char-set-any");
lf[39]=C_h_intern(&lf[39],15,"char-set-unfold");
lf[40]=C_h_intern(&lf[40],16,"char-set-unfold!");
lf[42]=C_h_intern(&lf[42],14,"list->char-set");
lf[43]=C_h_intern(&lf[43],15,"list->char-set!");
lf[44]=C_h_intern(&lf[44],14,"char-set->list");
lf[46]=C_h_intern(&lf[46],16,"string->char-set");
lf[47]=C_h_intern(&lf[47],17,"string->char-set!");
lf[48]=C_h_intern(&lf[48],16,"char-set->string");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000`Requested UCS range contains unavailable characters -- this implementation "
"only supports Latin-1");
lf[51]=C_h_intern(&lf[51],19,"ucs-range->char-set");
lf[52]=C_h_intern(&lf[52],20,"ucs-range->char-set!");
lf[54]=C_h_intern(&lf[54],15,"char-set-filter");
lf[55]=C_h_intern(&lf[55],16,"char-set-filter!");
lf[56]=C_h_intern(&lf[56],10,"->char-set");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\036Not a charset, string or char.");
lf[60]=C_h_intern(&lf[60],19,"char-set-complement");
lf[61]=C_h_intern(&lf[61],20,"char-set-complement!");
lf[62]=C_h_intern(&lf[62],15,"char-set-union!");
lf[63]=C_h_intern(&lf[63],14,"char-set-union");
lf[64]=C_h_intern(&lf[64],14,"char-set:empty");
lf[65]=C_h_intern(&lf[65],22,"char-set-intersection!");
lf[66]=C_h_intern(&lf[66],21,"char-set-intersection");
lf[67]=C_h_intern(&lf[67],13,"char-set:full");
lf[68]=C_h_intern(&lf[68],20,"char-set-difference!");
lf[69]=C_h_intern(&lf[69],19,"char-set-difference");
lf[70]=C_h_intern(&lf[70],13,"char-set-xor!");
lf[71]=C_h_intern(&lf[71],12,"char-set-xor");
lf[73]=C_h_intern(&lf[73],27,"char-set-diff+intersection!");
lf[74]=C_h_intern(&lf[74],26,"char-set-diff+intersection");
lf[75]=C_h_intern(&lf[75],11,"string-copy");
lf[76]=C_h_intern(&lf[76],19,"char-set:lower-case");
lf[77]=C_h_intern(&lf[77],19,"char-set:upper-case");
lf[78]=C_h_intern(&lf[78],19,"char-set:title-case");
lf[79]=C_h_intern(&lf[79],15,"char-set:letter");
lf[80]=C_h_intern(&lf[80],14,"char-set:digit");
lf[81]=C_h_intern(&lf[81],18,"char-set:hex-digit");
lf[82]=C_h_intern(&lf[82],21,"char-set:letter+digit");
lf[83]=C_h_intern(&lf[83],20,"char-set:punctuation");
lf[84]=C_h_intern(&lf[84],15,"char-set:symbol");
lf[85]=C_h_intern(&lf[85],16,"char-set:graphic");
lf[86]=C_h_intern(&lf[86],19,"char-set:whitespace");
lf[87]=C_h_intern(&lf[87],17,"char-set:printing");
lf[88]=C_h_intern(&lf[88],14,"char-set:blank");
lf[89]=C_h_intern(&lf[89],20,"char-set:iso-control");
lf[90]=C_h_intern(&lf[90],14,"char-set:ascii");
lf[91]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\011\376\003\000\000\002\376\377\001\000\000\000 \376\003\000\000\002\376\377\001\000\000\000\240\376\377\016");
lf[92]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\011\376\003\000\000\002\376\377\001\000\000\000\012\376\003\000\000\002\376\377\001\000\000\000\013\376\003\000\000\002\376\377\001\000\000\000\014\376\003\000\000\002\376\377\001\000\000\000\015\376\003\000\000\002\376\377\001\000\000\000 \376\003\000\000\002\376\377\001"
"\000\000\000\240\376\377\016");
lf[93]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\242\376\003\000\000\002\376\377\001\000\000\000\243\376\003\000\000\002\376\377\001\000\000\000\244\376\003\000\000\002\376\377\001\000\000\000\245\376\003\000\000\002\376\377\001\000\000\000\246\376\003\000\000\002\376\377\001\000\000\000\247\376\003\000\000\002\376\377\001"
"\000\000\000\250\376\003\000\000\002\376\377\001\000\000\000\251\376\003\000\000\002\376\377\001\000\000\000\254\376\003\000\000\002\376\377\001\000\000\000\256\376\003\000\000\002\376\377\001\000\000\000\257\376\003\000\000\002\376\377\001\000\000\000\260\376\003\000\000\002\376\377\001\000\000\000\261\376\003\000\000"
"\002\376\377\001\000\000\000\264\376\003\000\000\002\376\377\001\000\000\000\266\376\003\000\000\002\376\377\001\000\000\000\270\376\003\000\000\002\376\377\001\000\000\000\327\376\003\000\000\002\376\377\001\000\000\000\367\376\377\016");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\011$+<=>^`|~");
lf[95]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\241\376\003\000\000\002\376\377\001\000\000\000\253\376\003\000\000\002\376\377\001\000\000\000\255\376\003\000\000\002\376\377\001\000\000\000\267\376\003\000\000\002\376\377\001\000\000\000\273\376\003\000\000\002\376\377\001\000\000\000\277\376\377\016");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\027!\042#%&\047()\052,-./:;\077@[\134]_{}");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\0260123456789abcdefABCDEF");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\0120123456789");
lf[99]=C_h_intern(&lf[99],17,"register-feature!");
lf[100]=C_h_intern(&lf[100],7,"srfi-14");
C_register_lf2(lf,101,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1297,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:15: register-feature! */
t3=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[100];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3742,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[84]+1 /* (set! char-set:symbol ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3746,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:693: char-set-union */
t4=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[82]+1);
av2[3]=*((C_word*)lf[83]+1);
av2[4]=*((C_word*)lf[84]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_ccall f_3746(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_3746,2,av);}
a=C_alloc(20);
t2=C_mutate2((C_word*)lf[85]+1 /* (set! char-set:graphic ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=lf[0];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3818,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3820,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=t7,a[6]=((C_word)li112),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3820(t13,t9,lf[92]);}

/* k3412 in k3409 in char-set-xor in k1295 */
static void C_ccall f_3414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3414,2,av);}
/* srfi-14.scm:589: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* k3409 in char-set-xor in k1295 */
static void C_ccall f_3411(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3411,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3414,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3421,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:588: %char-set-algebra */
f_2973(t3,t2,t5,t6,lf[71]);}

/* k2874 in char-set-filter in k1295 */
static void C_ccall f_2876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2876,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2886,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:461: %char-set:s/check */
f_1383(t4,((C_word*)t0)[4],lf[55]);}

/* char-set-filter in k1295 */
static void C_ccall f_2872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_2872,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2876,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:459: %default-base */
f_1339(t5,t4,*((C_word*)lf[54]+1));}

/* k2877 in k2874 in char-set-filter in k1295 */
static void C_ccall f_2879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2879,2,av);}
/* srfi-14.scm:464: make-char-set */
t2=*((C_word*)lf[1]+1);{
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

/* k3843 in map-loop934 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in ... */
static void C_ccall f_3845(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3845,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3820(t6,((C_word*)t0)[5],t5);}

/* char-set-xor in k1295 */
static void C_ccall f_3401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3401,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3411,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3465,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_u_i_car(t5);
/* srfi-14.scm:587: %char-set:s/check */
f_1383(t4,t6,lf[71]);}
else{
/* srfi-14.scm:590: char-set-copy */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=*((C_word*)lf[64]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k2884 in k2874 in char-set-filter in k1295 */
static void C_ccall f_2886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2886,2,av);}
/* srfi-14.scm:460: %char-set-filter! */
f_2804(((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* char-set-filter! in k1295 */
static void C_ccall f_2888(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2888,5,av);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2892,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2896,a[2]=t5,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm:468: %char-set:s/check */
f_1383(t6,t3,lf[55]);}

/* lp in %char-set-filter! in k1295 */
static void C_fcall f_2810(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2810,3,t0,t1,t2);}
a=C_alloc(6);
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[4];
t6=t2;
t7=C_i_string_ref(t5,t6);
t8=C_fix(C_character_code(t7));
t9=C_eqp(t8,C_fix(0));
if(C_truep(C_i_not(t9))){
t10=t2;
t11=C_make_character(C_unfix(t10));
/* srfi-14.scm:454: pred */
t12=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t12;
av2[1]=t4;
av2[2]=t11;
((C_proc)C_fast_retrieve_proc(t12))(3,av2);}}
else{
t10=t4;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_2830(2,av2);}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2800 in ucs-range->char-set! in k1295 */
static void C_ccall f_2802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2802,2,av);}
/* srfi-14.scm:442: %ucs-range->char-set! */
f_2696(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,lf[51]);}

/* %char-set-filter! in k1295 */
static void C_fcall f_2804(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_2804,4,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2810,a[2]=t4,a[3]=t6,a[4]=t3,a[5]=t2,a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2810(t8,t1,C_fix(255));}

/* map-loop906 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in k3674 in k3670 in k1295 */
static void C_fcall f_3854(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3854,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3879,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* srfi-14.scm:671: g912 */
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

/* k3802 in map-loop962 in k3752 in k3748 in k3744 in k3740 in k3737 in k3731 in k3727 in k3724 in k3718 in k3714 in k3710 in k3706 in k3702 in k3699 in k3694 in k3691 in k3687 in k3684 in k3681 in k3678 in ... */
static void C_ccall f_3804(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3804,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3779(t6,((C_word*)t0)[5],t5);}

/* k2907 in ->char-set in k1295 */
static void C_ccall f_2909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2909,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
/* srfi-14.scm:478: string->char-set */
t2=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_charp(((C_word*)t0)[2]))){
/* srfi-14.scm:479: char-set */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
/* srfi-14.scm:480: ##sys#error */
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[56];
av2[3]=lf[57];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}}}

/* ->char-set in k1295 */
static void C_ccall f_2902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2902,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2909,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:477: char-set? */
t4=*((C_word*)lf[4]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2898 in k2894 in char-set-filter! in k1295 */
static void C_ccall f_2900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2900,2,av);}
/* srfi-14.scm:467: %char-set-filter! */
f_2804(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1509 in lp in k1497 in char-set<= in k1295 */
static void C_ccall f_1511(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_1511,2,av);}
a=C_alloc(10);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_eqp(((C_word*)t0)[3],t2);
if(C_truep(t5)){
/* srfi-14.scm:177: lp */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1501(t6,((C_word*)t0)[5],t2,t4);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1526,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t7,a[7]=((C_word)li10),tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_1526(t9,((C_word*)t0)[5],C_fix(255));}}

/* k2477 in char-set in k1295 */
static void C_ccall f_2479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2479,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2482,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm:366: %list->char-set! */
f_2429(t3,((C_word*)t0)[3],t2);}

/* char-set in k1295 */
static void C_ccall f_2475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_2475,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2479,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t3;
av2[2]=C_fix(256);
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k1768 in char-set-count in k1295 */
static void C_ccall f_1770(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1770,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1775,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li19),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1775(t6,((C_word*)t0)[3],C_fix(255),C_fix(0));}

/* lp in k1768 in char-set-count in k1295 */
static void C_fcall f_1775(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1775,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=t2;
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1796,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=t2;
t9=C_i_string_ref(((C_word*)t0)[3],t8);
t10=C_fix(C_character_code(t9));
t11=C_eqp(t10,C_fix(0));
if(C_truep(C_i_not(t11))){
t12=t2;
t13=C_make_character(C_unfix(t12));
/* srfi-14.scm:229: pred */
t14=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t14;
av2[1]=t7;
av2[2]=t13;
((C_proc)C_fast_retrieve_proc(t14))(3,av2);}}
else{
t12=t7;{
C_word av2[2];
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
f_1796(2,av2);}}}}

/* lp in k1497 in char-set<= in k1295 */
static void C_fcall f_1501(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1501,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t3);
t5=C_i_not(t4);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1511,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t3);
/* srfi-14.scm:175: %char-set:s/check */
f_1383(t6,t7,lf[15]);}}

/* %string-iter in k1295 */
static void C_fcall f_2932(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2932,3,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_string_length(t3);
t5=C_fixnum_difference(t4,C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2942,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_2942(t9,t1,t5);}

/* k2284 in lp in k2250 in char-set-every in k1295 */
static void C_ccall f_2286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2286,2,av);}
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* srfi-14.scm:325: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2257(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* char-set-size in k1295 */
static void C_ccall f_1724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1724,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1728,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm:218: %char-set:s/check */
f_1383(t3,t2,lf[19]);}

/* k1726 in char-set-size in k1295 */
static void C_ccall f_1728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1728,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1733,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  f_1733(t3,C_fix(255),C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[263] = {
{"f_2942:srfi_2d14_2escm",(void*)f_2942},
{"f_2452:srfi_2d14_2escm",(void*)f_2452},
{"f_1718:srfi_2d14_2escm",(void*)f_1718},
{"f_1526:srfi_2d14_2escm",(void*)f_1526},
{"f_3353:srfi_2d14_2escm",(void*)f_3353},
{"f_3357:srfi_2d14_2escm",(void*)f_3357},
{"f_3359:srfi_2d14_2escm",(void*)f_3359},
{"f_2520:srfi_2d14_2escm",(void*)f_2520},
{"f_1796:srfi_2d14_2escm",(void*)f_1796},
{"f_2252:srfi_2d14_2escm",(void*)f_2252},
{"f_2257:srfi_2d14_2escm",(void*)f_2257},
{"f_2830:srfi_2d14_2escm",(void*)f_2830},
{"f_3344:srfi_2d14_2escm",(void*)f_3344},
{"f_2431:srfi_2d14_2escm",(void*)f_2431},
{"f_3349:srfi_2d14_2escm",(void*)f_3349},
{"f_2423:srfi_2d14_2escm",(void*)f_2423},
{"f_2427:srfi_2d14_2escm",(void*)f_2427},
{"f_2429:srfi_2d14_2escm",(void*)f_2429},
{"f_1766:srfi_2d14_2escm",(void*)f_1766},
{"f_3126:srfi_2d14_2escm",(void*)f_3126},
{"f_2715:srfi_2d14_2escm",(void*)f_2715},
{"f_3122:srfi_2d14_2escm",(void*)f_3122},
{"f_3128:srfi_2d14_2escm",(void*)f_3128},
{"f_2496:srfi_2d14_2escm",(void*)f_2496},
{"f_2493:srfi_2d14_2escm",(void*)f_2493},
{"f_2576:srfi_2d14_2escm",(void*)f_2576},
{"f_2482:srfi_2d14_2escm",(void*)f_2482},
{"f_2489:srfi_2d14_2escm",(void*)f_2489},
{"f_2563:srfi_2d14_2escm",(void*)f_2563},
{"f_1444:srfi_2d14_2escm",(void*)f_1444},
{"f_1449:srfi_2d14_2escm",(void*)f_1449},
{"f_3321:srfi_2d14_2escm",(void*)f_3321},
{"f_3207:srfi_2d14_2escm",(void*)f_3207},
{"f_1430:srfi_2d14_2escm",(void*)f_1430},
{"f_3209:srfi_2d14_2escm",(void*)f_3209},
{"f_3052:srfi_2d14_2escm",(void*)f_3052},
{"f_3055:srfi_2d14_2escm",(void*)f_3055},
{"f_3089:srfi_2d14_2escm",(void*)f_3089},
{"f_1299:srfi_2d14_2escm",(void*)f_1299},
{"f_1297:srfi_2d14_2escm",(void*)f_1297},
{"f_3085:srfi_2d14_2escm",(void*)f_3085},
{"f_2746:srfi_2d14_2escm",(void*)f_2746},
{"f_1499:srfi_2d14_2escm",(void*)f_1499},
{"f_2393:srfi_2d14_2escm",(void*)f_2393},
{"f_1481:srfi_2d14_2escm",(void*)f_1481},
{"f_3932:srfi_2d14_2escm",(void*)f_3932},
{"f_2419:srfi_2d14_2escm",(void*)f_2419},
{"f_3060:srfi_2d14_2escm",(void*)f_3060},
{"f_2414:srfi_2d14_2escm",(void*)f_2414},
{"f_2411:srfi_2d14_2escm",(void*)f_2411},
{"f_1857:srfi_2d14_2escm",(void*)f_1857},
{"f_3236:srfi_2d14_2escm",(void*)f_3236},
{"f_1852:srfi_2d14_2escm",(void*)f_1852},
{"f_2764:srfi_2d14_2escm",(void*)f_2764},
{"f_1471:srfi_2d14_2escm",(void*)f_1471},
{"f_2407:srfi_2d14_2escm",(void*)f_2407},
{"f_2405:srfi_2d14_2escm",(void*)f_2405},
{"f_2401:srfi_2d14_2escm",(void*)f_2401},
{"f_3049:srfi_2d14_2escm",(void*)f_3049},
{"f_3226:srfi_2d14_2escm",(void*)f_3226},
{"f_3239:srfi_2d14_2escm",(void*)f_3239},
{"f_3913:srfi_2d14_2escm",(void*)f_3913},
{"f_3092:srfi_2d14_2escm",(void*)f_3092},
{"f_3094:srfi_2d14_2escm",(void*)f_3094},
{"f_3045:srfi_2d14_2escm",(void*)f_3045},
{"f_2706:srfi_2d14_2escm",(void*)f_2706},
{"f_2205:srfi_2d14_2escm",(void*)f_2205},
{"f_2200:srfi_2d14_2escm",(void*)f_2200},
{"f_1882:srfi_2d14_2escm",(void*)f_1882},
{"f_1884:srfi_2d14_2escm",(void*)f_1884},
{"f_1888:srfi_2d14_2escm",(void*)f_1888},
{"f_1889:srfi_2d14_2escm",(void*)f_1889},
{"f_3203:srfi_2d14_2escm",(void*)f_3203},
{"f_3879:srfi_2d14_2escm",(void*)f_3879},
{"f_1685:srfi_2d14_2escm",(void*)f_1685},
{"f_3022:srfi_2d14_2escm",(void*)f_3022},
{"f_3159:srfi_2d14_2escm",(void*)f_3159},
{"f_2896:srfi_2d14_2escm",(void*)f_2896},
{"f_2892:srfi_2d14_2escm",(void*)f_2892},
{"f_1424:srfi_2d14_2escm",(void*)f_1424},
{"f_1428:srfi_2d14_2escm",(void*)f_1428},
{"f_1416:srfi_2d14_2escm",(void*)f_1416},
{"f_1733:srfi_2d14_2escm",(void*)f_1733},
{"f_1656:srfi_2d14_2escm",(void*)f_1656},
{"f_2248:srfi_2d14_2escm",(void*)f_2248},
{"f_1406:srfi_2d14_2escm",(void*)f_1406},
{"f_2311:srfi_2d14_2escm",(void*)f_2311},
{"f_2196:srfi_2d14_2escm",(void*)f_2196},
{"f_2306:srfi_2d14_2escm",(void*)f_2306},
{"f_2302:srfi_2d14_2escm",(void*)f_2302},
{"f_3118:srfi_2d14_2escm",(void*)f_3118},
{"f_2188:srfi_2d14_2escm",(void*)f_2188},
{"f_2223:srfi_2d14_2escm",(void*)f_2223},
{"f_3149:srfi_2d14_2escm",(void*)f_3149},
{"f_2642:srfi_2d14_2escm",(void*)f_2642},
{"f_2647:srfi_2d14_2escm",(void*)f_2647},
{"f_1837:srfi_2d14_2escm",(void*)f_1837},
{"f_1838:srfi_2d14_2escm",(void*)f_1838},
{"f_1833:srfi_2d14_2escm",(void*)f_1833},
{"f_3162:srfi_2d14_2escm",(void*)f_3162},
{"f_3169:srfi_2d14_2escm",(void*)f_3169},
{"f_2620:srfi_2d14_2escm",(void*)f_2620},
{"f_2625:srfi_2d14_2escm",(void*)f_2625},
{"f_2629:srfi_2d14_2escm",(void*)f_2629},
{"f_3651:srfi_2d14_2escm",(void*)f_3651},
{"f_2774:srfi_2d14_2escm",(void*)f_2774},
{"f_2777:srfi_2d14_2escm",(void*)f_2777},
{"f_1867:srfi_2d14_2escm",(void*)f_1867},
{"f_3641:srfi_2d14_2escm",(void*)f_3641},
{"f_3645:srfi_2d14_2escm",(void*)f_3645},
{"f_3658:srfi_2d14_2escm",(void*)f_3658},
{"f_3648:srfi_2d14_2escm",(void*)f_3648},
{"f_2633:srfi_2d14_2escm",(void*)f_2633},
{"f_2130:srfi_2d14_2escm",(void*)f_2130},
{"f_2794:srfi_2d14_2escm",(void*)f_2794},
{"f_2635:srfi_2d14_2escm",(void*)f_2635},
{"f_2639:srfi_2d14_2escm",(void*)f_2639},
{"f_2798:srfi_2d14_2escm",(void*)f_2798},
{"f_3032:srfi_2d14_2escm",(void*)f_3032},
{"f_2122:srfi_2d14_2escm",(void*)f_2122},
{"f_2125:srfi_2d14_2escm",(void*)f_2125},
{"f_3693:srfi_2d14_2escm",(void*)f_3693},
{"f_3696:srfi_2d14_2escm",(void*)f_3696},
{"f_2617:srfi_2d14_2escm",(void*)f_2617},
{"f_2613:srfi_2d14_2escm",(void*)f_2613},
{"f_2694:srfi_2d14_2escm",(void*)f_2694},
{"f_2696:srfi_2d14_2escm",(void*)f_2696},
{"f_2119:srfi_2d14_2escm",(void*)f_2119},
{"f_2115:srfi_2d14_2escm",(void*)f_2115},
{"f_3683:srfi_2d14_2escm",(void*)f_3683},
{"f_3686:srfi_2d14_2escm",(void*)f_3686},
{"f_3680:srfi_2d14_2escm",(void*)f_3680},
{"f_3574:srfi_2d14_2escm",(void*)f_3574},
{"f_3570:srfi_2d14_2escm",(void*)f_3570},
{"f_3577:srfi_2d14_2escm",(void*)f_3577},
{"f_1339:srfi_2d14_2escm",(void*)f_1339},
{"f_3676:srfi_2d14_2escm",(void*)f_3676},
{"f_3672:srfi_2d14_2escm",(void*)f_3672},
{"f_3689:srfi_2d14_2escm",(void*)f_3689},
{"f_1323:srfi_2d14_2escm",(void*)f_1323},
{"f_3662:srfi_2d14_2escm",(void*)f_3662},
{"f_1606:srfi_2d14_2escm",(void*)f_1606},
{"f_3474:srfi_2d14_2escm",(void*)f_3474},
{"f_3472:srfi_2d14_2escm",(void*)f_3472},
{"f_3465:srfi_2d14_2escm",(void*)f_3465},
{"f_2515:srfi_2d14_2escm",(void*)f_2515},
{"f_2511:srfi_2d14_2escm",(void*)f_2511},
{"f_2505:srfi_2d14_2escm",(void*)f_2505},
{"f_2501:srfi_2d14_2escm",(void*)f_2501},
{"f_2975:srfi_2d14_2escm",(void*)f_2975},
{"f_2973:srfi_2d14_2escm",(void*)f_2973},
{"f_1360:srfi_2d14_2escm",(void*)f_1360},
{"f_2979:srfi_2d14_2escm",(void*)f_2979},
{"f_1367:srfi_2d14_2escm",(void*)f_1367},
{"f_2509:srfi_2d14_2escm",(void*)f_2509},
{"f_2984:srfi_2d14_2escm",(void*)f_2984},
{"f_1396:srfi_2d14_2escm",(void*)f_1396},
{"f_2994:srfi_2d14_2escm",(void*)f_2994},
{"f_1383:srfi_2d14_2escm",(void*)f_1383},
{"f_1389:srfi_2d14_2escm",(void*)f_1389},
{"f_3421:srfi_2d14_2escm",(void*)f_3421},
{"f_2074:srfi_2d14_2escm",(void*)f_2074},
{"f_1585:srfi_2d14_2escm",(void*)f_1585},
{"f_2064:srfi_2d14_2escm",(void*)f_2064},
{"f_2055:srfi_2d14_2escm",(void*)f_2055},
{"f_2059:srfi_2d14_2escm",(void*)f_2059},
{"f_3668:srfi_2d14_2escm",(void*)f_3668},
{"f_3583:srfi_2d14_2escm",(void*)f_3583},
{"f_3580:srfi_2d14_2escm",(void*)f_3580},
{"f_3588:srfi_2d14_2escm",(void*)f_3588},
{"f_3539:srfi_2d14_2escm",(void*)f_3539},
{"f_3557:srfi_2d14_2escm",(void*)f_3557},
{"f_2012:srfi_2d14_2escm",(void*)f_2012},
{"f_1982:srfi_2d14_2escm",(void*)f_1982},
{"f_1988:srfi_2d14_2escm",(void*)f_1988},
{"f_3547:srfi_2d14_2escm",(void*)f_3547},
{"f_2003:srfi_2d14_2escm",(void*)f_2003},
{"f_2007:srfi_2d14_2escm",(void*)f_2007},
{"f_1994:srfi_2d14_2escm",(void*)f_1994},
{"f_2371:srfi_2d14_2escm",(void*)f_2371},
{"f_1598:srfi_2d14_2escm",(void*)f_1598},
{"f_1592:srfi_2d14_2escm",(void*)f_1592},
{"f_3720:srfi_2d14_2escm",(void*)f_3720},
{"f_3729:srfi_2d14_2escm",(void*)f_3729},
{"f_3726:srfi_2d14_2escm",(void*)f_3726},
{"f_2365:srfi_2d14_2escm",(void*)f_2365},
{"f_3712:srfi_2d14_2escm",(void*)f_3712},
{"f_3716:srfi_2d14_2escm",(void*)f_3716},
{"f_1946:srfi_2d14_2escm",(void*)f_1946},
{"f_1940:srfi_2d14_2escm",(void*)f_1940},
{"f_3701:srfi_2d14_2escm",(void*)f_3701},
{"f_3704:srfi_2d14_2escm",(void*)f_3704},
{"f_3272:srfi_2d14_2escm",(void*)f_3272},
{"f_3276:srfi_2d14_2escm",(void*)f_3276},
{"f_3708:srfi_2d14_2escm",(void*)f_3708},
{"f_1958:srfi_2d14_2escm",(void*)f_1958},
{"f_1952:srfi_2d14_2escm",(void*)f_1952},
{"f_3777:srfi_2d14_2escm",(void*)f_3777},
{"f_3779:srfi_2d14_2escm",(void*)f_3779},
{"f_3265:srfi_2d14_2escm",(void*)f_3265},
{"f_3770:srfi_2d14_2escm",(void*)f_3770},
{"f_1964:srfi_2d14_2escm",(void*)f_1964},
{"f_2321:srfi_2d14_2escm",(void*)f_2321},
{"f_1976:srfi_2d14_2escm",(void*)f_1976},
{"f_1970:srfi_2d14_2escm",(void*)f_1970},
{"f_3246:srfi_2d14_2escm",(void*)f_3246},
{"f_1905:srfi_2d14_2escm",(void*)f_1905},
{"f_1903:srfi_2d14_2escm",(void*)f_1903},
{"f_1317:srfi_2d14_2escm",(void*)f_1317},
{"f_3313:srfi_2d14_2escm",(void*)f_3313},
{"f_1311:srfi_2d14_2escm",(void*)f_1311},
{"f_3316:srfi_2d14_2escm",(void*)f_3316},
{"f_1915:srfi_2d14_2escm",(void*)f_1915},
{"f_3733:srfi_2d14_2escm",(void*)f_3733},
{"f_3303:srfi_2d14_2escm",(void*)f_3303},
{"f_3818:srfi_2d14_2escm",(void*)f_3818},
{"f_3739:srfi_2d14_2escm",(void*)f_3739},
{"f_3192:srfi_2d14_2escm",(void*)f_3192},
{"f_1928:srfi_2d14_2escm",(void*)f_1928},
{"f_3199:srfi_2d14_2escm",(void*)f_3199},
{"f_1934:srfi_2d14_2escm",(void*)f_1934},
{"f_3280:srfi_2d14_2escm",(void*)f_3280},
{"f_3282:srfi_2d14_2escm",(void*)f_3282},
{"f_3480:srfi_2d14_2escm",(void*)f_3480},
{"f_2952:srfi_2d14_2escm",(void*)f_2952},
{"f_3820:srfi_2d14_2escm",(void*)f_3820},
{"f_3762:srfi_2d14_2escm",(void*)f_3762},
{"f_3888:srfi_2d14_2escm",(void*)f_3888},
{"f_3766:srfi_2d14_2escm",(void*)f_3766},
{"f_3750:srfi_2d14_2escm",(void*)f_3750},
{"f_3754:srfi_2d14_2escm",(void*)f_3754},
{"f_3758:srfi_2d14_2escm",(void*)f_3758},
{"toplevel:srfi_2d14_2escm",(void*)C_srfi_2d14_toplevel},
{"f_3742:srfi_2d14_2escm",(void*)f_3742},
{"f_3746:srfi_2d14_2escm",(void*)f_3746},
{"f_3414:srfi_2d14_2escm",(void*)f_3414},
{"f_3411:srfi_2d14_2escm",(void*)f_3411},
{"f_2876:srfi_2d14_2escm",(void*)f_2876},
{"f_2872:srfi_2d14_2escm",(void*)f_2872},
{"f_2879:srfi_2d14_2escm",(void*)f_2879},
{"f_3845:srfi_2d14_2escm",(void*)f_3845},
{"f_3401:srfi_2d14_2escm",(void*)f_3401},
{"f_2886:srfi_2d14_2escm",(void*)f_2886},
{"f_2888:srfi_2d14_2escm",(void*)f_2888},
{"f_2810:srfi_2d14_2escm",(void*)f_2810},
{"f_2802:srfi_2d14_2escm",(void*)f_2802},
{"f_2804:srfi_2d14_2escm",(void*)f_2804},
{"f_3854:srfi_2d14_2escm",(void*)f_3854},
{"f_3804:srfi_2d14_2escm",(void*)f_3804},
{"f_2909:srfi_2d14_2escm",(void*)f_2909},
{"f_2902:srfi_2d14_2escm",(void*)f_2902},
{"f_2900:srfi_2d14_2escm",(void*)f_2900},
{"f_1511:srfi_2d14_2escm",(void*)f_1511},
{"f_2479:srfi_2d14_2escm",(void*)f_2479},
{"f_2475:srfi_2d14_2escm",(void*)f_2475},
{"f_1770:srfi_2d14_2escm",(void*)f_1770},
{"f_1775:srfi_2d14_2escm",(void*)f_1775},
{"f_1501:srfi_2d14_2escm",(void*)f_1501},
{"f_2932:srfi_2d14_2escm",(void*)f_2932},
{"f_2286:srfi_2d14_2escm",(void*)f_2286},
{"f_1724:srfi_2d14_2escm",(void*)f_1724},
{"f_1728:srfi_2d14_2escm",(void*)f_1728},
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
S|  map		4
S|  for-each		5
o|eliminated procedure checks: 218 
o|specializations:
o|  4 (##sys#check-list (or pair list) *)
o|  1 (min fixnum fixnum)
o|  2 (< fixnum fixnum)
o|  2 (make-string fixnum)
o|  1 (string-length string)
o|  14 (zero? fixnum)
o|  1 (<= fixnum fixnum)
o|  4 (make-string fixnum char)
o|  8 (cdr pair)
o|  4 (car pair)
(o e)|safe calls: 444 
(o e)|assignments to immediate values: 3 
o|Removed `not' forms: 8 
o|inlining procedure: k1341 
o|inlining procedure: k1355 
o|inlining procedure: k1355 
o|inlining procedure: k1341 
o|substituted constant variable: a1377 
o|inlining procedure: "(srfi-14.scm:118) %latin1->char" 
o|inlining procedure: k1391 
o|inlining procedure: k1391 
o|inlining procedure: k1435 
o|inlining procedure: k1435 
o|inlining procedure: k1454 
o|inlining procedure: k1454 
o|inlining procedure: k1486 
o|inlining procedure: k1486 
o|inlining procedure: k1506 
o|inlining procedure: k1506 
o|inlining procedure: k1528 
o|inlining procedure: k1528 
o|contracted procedure: "(srfi-14.scm:180) g127128" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|contracted procedure: "(srfi-14.scm:180) g123124" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k1608 
o|inlining procedure: k1608 
o|inlining procedure: k1625 
o|inlining procedure: k1625 
o|contracted procedure: "(srfi-14.scm:207) g149150" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k1658 
o|inlining procedure: k1658 
o|contracted procedure: "(srfi-14.scm:213) g159160" 
o|contracted procedure: "(srfi-14.scm:136) g163164" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:215) %char->latin1" 
o|inlining procedure: k1735 
o|inlining procedure: k1735 
o|contracted procedure: "(srfi-14.scm:221) g174175" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k1777 
o|inlining procedure: k1777 
o|inlining procedure: k1791 
o|inlining procedure: k1791 
o|inlining procedure: "(srfi-14.scm:229) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:229) g187188" 
o|contracted procedure: "(srfi-14.scm:136) g191192" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:238) %char->latin1" 
o|inlining procedure: k1859 
o|inlining procedure: k1859 
o|inlining procedure: "(srfi-14.scm:244) %char->latin1" 
o|inlining procedure: k1907 
o|inlining procedure: k1907 
o|inlining procedure: "(srfi-14.scm:273) %latin1->char" 
o|inlining procedure: k2017 
o|inlining procedure: k2017 
o|contracted procedure: "(srfi-14.scm:285) g288289" 
o|contracted procedure: "(srfi-14.scm:136) g292293" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2066 
o|inlining procedure: "(srfi-14.scm:296) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:296) g307308" 
o|contracted procedure: "(srfi-14.scm:136) g311312" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2066 
o|inlining procedure: k2132 
o|contracted procedure: "(srfi-14.scm:306) g336337" 
o|inlining procedure: "(srfi-14.scm:306) %char->latin1" 
o|inlining procedure: "(srfi-14.scm:306) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:305) g328329" 
o|contracted procedure: "(srfi-14.scm:136) g332333" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2132 
o|substituted constant variable: a2193 
o|inlining procedure: k2207 
o|inlining procedure: k2207 
o|inlining procedure: k2221 
o|inlining procedure: k2221 
o|inlining procedure: "(srfi-14.scm:317) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:316) g351352" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2262 
o|inlining procedure: k2262 
o|inlining procedure: "(srfi-14.scm:324) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:324) g369370" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2313 
o|inlining procedure: "(srfi-14.scm:332) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:332) g385386" 
o|contracted procedure: "(srfi-14.scm:136) g389390" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2313 
o|removed unused formal parameters: (proc395) 
o|contracted procedure: k2376 
o|inlining procedure: k2373 
o|inlining procedure: k2373 
o|contracted procedure: "(srfi-14.scm:342) g407408" 
o|inlining procedure: "(srfi-14.scm:342) %char->latin1" 
o|removed unused parameter to known procedure: proc395 "(srfi-14.scm:347) %char-set-unfold!" 
o|removed unused parameter to known procedure: proc395 "(srfi-14.scm:351) %char-set-unfold!" 
o|contracted procedure: "(srfi-14.scm:361) g444445" 
o|inlining procedure: "(srfi-14.scm:361) %char->latin1" 
o|inlining procedure: k2454 
o|inlining procedure: k2454 
o|substituted constant variable: a2486 
o|inlining procedure: k2522 
o|inlining procedure: k2522 
o|inlining procedure: k2536 
o|inlining procedure: k2536 
o|inlining procedure: "(srfi-14.scm:385) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:384) g472473" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2578 
o|inlining procedure: k2578 
o|contracted procedure: "(srfi-14.scm:396) g484485" 
o|inlining procedure: "(srfi-14.scm:396) %char->latin1" 
o|inlining procedure: k2649 
o|inlining procedure: k2649 
o|inlining procedure: "(srfi-14.scm:415) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:414) g508509" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2717 
o|contracted procedure: "(srfi-14.scm:433) g528529" 
o|inlining procedure: k2717 
o|substituted constant variable: a2743 
o|inlining procedure: k2753 
o|inlining procedure: k2753 
o|substituted constant variable: a2759 
o|removed unused formal parameters: (proc562) 
o|inlining procedure: k2812 
o|contracted procedure: "(srfi-14.scm:455) g578579" 
o|inlining procedure: "(srfi-14.scm:454) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:454) g570571" 
o|contracted procedure: "(srfi-14.scm:136) g574575" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k2812 
o|removed unused parameter to known procedure: proc562 "(srfi-14.scm:460) %char-set-filter!" 
o|removed unused parameter to known procedure: proc562 "(srfi-14.scm:467) %char-set-filter!" 
o|inlining procedure: k2904 
o|inlining procedure: k2904 
o|inlining procedure: k2919 
o|inlining procedure: k2919 
o|inlining procedure: k2944 
o|inlining procedure: "(srfi-14.scm:500) %char->latin1" 
o|inlining procedure: k2944 
o|inlining procedure: k2986 
o|contracted procedure: "(srfi-14.scm:514) g637638" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k2986 
o|inlining procedure: k3024 
o|inlining procedure: k3024 
o|contracted procedure: "(srfi-14.scm:524) g654655" 
o|contracted procedure: "(srfi-14.scm:148) g659660" 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|substituted constant variable: a3083 
o|contracted procedure: "(srfi-14.scm:529) g670671" 
o|contracted procedure: "(srfi-14.scm:148) g675676" 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|contracted procedure: k3133 
o|inlining procedure: k3130 
o|inlining procedure: k3130 
o|contracted procedure: "(srfi-14.scm:150) g687688" 
o|inlining procedure: k3151 
o|contracted procedure: k3174 
o|inlining procedure: k3171 
o|inlining procedure: k3171 
o|contracted procedure: "(srfi-14.scm:150) g698699" 
o|inlining procedure: k3151 
o|inlining procedure: k3211 
o|contracted procedure: "(srfi-14.scm:149) g709710" 
o|inlining procedure: k3211 
o|inlining procedure: k3228 
o|inlining procedure: k3248 
o|contracted procedure: "(srfi-14.scm:149) g720721" 
o|inlining procedure: k3248 
o|inlining procedure: k3228 
o|contracted procedure: k3287 
o|inlining procedure: k3284 
o|inlining procedure: k3284 
o|contracted procedure: "(srfi-14.scm:151) g731732" 
o|inlining procedure: k3305 
o|contracted procedure: k3326 
o|inlining procedure: k3323 
o|inlining procedure: k3323 
o|contracted procedure: "(srfi-14.scm:151) g743744" 
o|inlining procedure: k3305 
o|contracted procedure: k3364 
o|inlining procedure: k3361 
o|inlining procedure: k3361 
o|contracted procedure: "(srfi-14.scm:152) g754755" 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:152) g759760" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k3403 
o|contracted procedure: k3426 
o|inlining procedure: k3423 
o|inlining procedure: k3423 
o|contracted procedure: "(srfi-14.scm:152) g770771" 
o|inlining procedure: "(srfi-14.scm:147) %latin1->char" 
o|contracted procedure: "(srfi-14.scm:152) g775776" 
o|inlining procedure: "(srfi-14.scm:137) %char->latin1" 
o|inlining procedure: k3403 
o|contracted procedure: k3485 
o|inlining procedure: k3482 
o|inlining procedure: k3482 
o|contracted procedure: "(srfi-14.scm:601) g816817" 
o|contracted procedure: "(srfi-14.scm:600) g812813" 
o|contracted procedure: "(srfi-14.scm:599) g804805" 
o|contracted procedure: "(srfi-14.scm:136) g808809" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|inlining procedure: k3549 
o|inlining procedure: k3549 
o|inlining procedure: k3590 
o|contracted procedure: "(srfi-14.scm:609) g834835" 
o|inlining procedure: k3590 
o|contracted procedure: "(srfi-14.scm:610) g846847" 
o|contracted procedure: "(srfi-14.scm:610) g838839" 
o|contracted procedure: "(srfi-14.scm:136) g842843" 
o|inlining procedure: "(srfi-14.scm:135) %char->latin1" 
o|substituted constant variable: a3663 
o|inlining procedure: k3781 
o|inlining procedure: k3781 
o|inlining procedure: k3822 
o|inlining procedure: k3822 
o|inlining procedure: k3856 
o|inlining procedure: k3856 
o|inlining procedure: k3890 
o|inlining procedure: k3890 
o|inlining procedure: "(srfi-14.scm:651) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:650) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:637) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:142) %latin1->char" 
o|inlining procedure: "(srfi-14.scm:141) %latin1->char" 
o|replaced variables: 421 
o|removed binding forms: 246 
o|removed side-effect free assignment to unused variable: %char->latin1 
o|substituted constant variable: n643942 
o|folded constant expression: (integer->char (quote 0)) 
o|substituted constant variable: r23144108 
o|substituted constant variable: r27544161 
o|substituted constant variable: g974978 
o|substituted constant variable: g946950 
o|substituted constant variable: g918922 
o|substituted constant variable: g889893 
o|substituted constant variable: n644273 
o|folded constant expression: (integer->char (quote 186)) 
o|substituted constant variable: n644278 
o|folded constant expression: (integer->char (quote 170)) 
o|substituted constant variable: n644283 
o|folded constant expression: (integer->char (quote 181)) 
o|substituted constant variable: n644288 
o|folded constant expression: (integer->char (quote 1)) 
o|substituted constant variable: n644293 
o|folded constant expression: (integer->char (quote 0)) 
o|replaced variables: 101 
o|removed binding forms: 447 
o|inlining procedure: "(srfi-14.scm:114) %string-copy" 
o|inlining procedure: "(srfi-14.scm:155) %string-copy" 
o|inlining procedure: "(srfi-14.scm:237) %string-copy" 
o|inlining procedure: k2023 
o|inlining procedure: k2072 
o|inlining procedure: k2138 
o|inlining procedure: k2818 
o|inlining procedure: "(srfi-14.scm:542) %string-copy" 
o|inlining procedure: "(srfi-14.scm:557) %string-copy" 
o|inlining procedure: "(srfi-14.scm:572) %string-copy" 
o|inlining procedure: "(srfi-14.scm:587) %string-copy" 
o|replaced variables: 47 
o|removed binding forms: 114 
o|removed side-effect free assignment to unused variable: %string-copy 
o|replaced variables: 48 
o|removed binding forms: 51 
o|inlining procedure: k1379 
o|inlining procedure: k3926 
o|inlining procedure: k3934 
o|removed binding forms: 49 
o|substituted constant variable: r13804578 
o|contracted procedure: k1408 
o|contracted procedure: k1412 
o|contracted procedure: k3922 
o|substituted constant variable: r39274641 
o|substituted constant variable: r39354642 
o|removed binding forms: 6 
o|substituted constant variable: r1409 
o|substituted constant variable: r1413 
o|substituted constant variable: r3923 
o|substituted constant variable: r3923 
o|replaced variables: 2 
o|removed binding forms: 3 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c1 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|substituted constant variable: c0 
o|removed binding forms: 6 
o|removed side-effect free assignment to unused variable: c0 
o|removed side-effect free assignment to unused variable: c1 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|simplifications: ((if . 3) (##core#call . 277)) 
o|  call simplifications:
o|    ##sys#setslot	4
o|    values	2
o|    string?
o|    char?
o|    cdr
o|    fx<	2
o|    fxmin
o|    <=
o|    ##sys#check-string
o|    ##sys#size
o|    cons	9
o|    string-set!	25
o|    ##sys#check-list	5
o|    ##sys#check-char
o|    zero?	11
o|    ##sys#check-exact	4
o|    >=	7
o|    *
o|    +	5
o|    fxand
o|    eq?	15
o|    <	11
o|    string-ref	22
o|    char->integer	28
o|    fx<=
o|    -	28
o|    not	11
o|    car	6
o|    string=?
o|    pair?	16
o|    null?	6
o|    string-length	8
o|    ##sys#structure?
o|    ##sys#slot	23
o|    ##sys#make-structure
o|    integer->char	15
o|contracted procedure: k1344 
o|contracted procedure: k1352 
o|contracted procedure: k13354409 
o|contracted procedure: k13354416 
o|contracted procedure: k1432 
o|contracted procedure: k1438 
o|contracted procedure: k1477 
o|contracted procedure: k1451 
o|contracted procedure: k1460 
o|contracted procedure: k1473 
o|contracted procedure: k1483 
o|contracted procedure: k1489 
o|contracted procedure: k1581 
o|contracted procedure: k1503 
o|contracted procedure: k1516 
o|contracted procedure: k1531 
o|substituted constant variable: g5020 
o|contracted procedure: k1540 
o|contracted procedure: k1547 
o|contracted procedure: k1570 
o|contracted procedure: k1557 
o|contracted procedure: k1577 
o|contracted procedure: k1678 
o|contracted procedure: k1587 
o|contracted procedure: k1593 
o|contracted procedure: k1611 
o|substituted constant variable: g5026 
o|contracted procedure: k1621 
o|contracted procedure: k1652 
o|contracted procedure: k1648 
o|contracted procedure: k1625 
o|contracted procedure: k1638 
o|contracted procedure: k1634 
o|contracted procedure: k1661 
o|contracted procedure: k1671 
o|contracted procedure: k1674 
o|contracted procedure: k1687 
o|contracted procedure: k1720 
o|contracted procedure: k1706 
o|contracted procedure: k1702 
o|contracted procedure: k1738 
o|substituted constant variable: g5034 
o|contracted procedure: k1745 
o|contracted procedure: k1749 
o|contracted procedure: k1759 
o|contracted procedure: k1780 
o|substituted constant variable: g5038 
o|contracted procedure: k1787 
o|contracted procedure: k1791 
o|contracted procedure: k1829 
o|contracted procedure: k1816 
o|contracted procedure: k1812 
o|contracted procedure: k1844 
o|contracted procedure: k1847 
o|contracted procedure: k1862 
o|contracted procedure: k1872 
o|contracted procedure: k1876 
o|contracted procedure: k13354437 
o|contracted procedure: k1895 
o|contracted procedure: k1898 
o|contracted procedure: k1910 
o|contracted procedure: k1920 
o|contracted procedure: k1924 
o|substituted constant variable: g5046 
o|contracted procedure: k1996 
o|contracted procedure: k2014 
o|contracted procedure: k2020 
o|substituted constant variable: g5048 
o|contracted procedure: k2045 
o|contracted procedure: k2041 
o|contracted procedure: k2069 
o|substituted constant variable: g5052 
o|contracted procedure: k2079 
o|contracted procedure: k2111 
o|contracted procedure: k20794447 
o|contracted procedure: k2098 
o|contracted procedure: k2094 
o|contracted procedure: k2135 
o|substituted constant variable: g5056 
o|contracted procedure: k2182 
o|contracted procedure: k2138 
o|contracted procedure: k2145 
o|contracted procedure: k2190 
o|contracted procedure: k21454453 
o|contracted procedure: k2164 
o|contracted procedure: k2160 
o|contracted procedure: k2210 
o|substituted constant variable: g5060 
o|contracted procedure: k2217 
o|contracted procedure: k2244 
o|contracted procedure: k2234 
o|contracted procedure: k2230 
o|contracted procedure: k2259 
o|substituted constant variable: g5064 
o|contracted procedure: k2291 
o|contracted procedure: k2298 
o|contracted procedure: k2278 
o|contracted procedure: k2274 
o|contracted procedure: k2316 
o|substituted constant variable: g5068 
o|contracted procedure: k2329 
o|contracted procedure: k2361 
o|contracted procedure: k2348 
o|contracted procedure: k2344 
o|contracted procedure: k2395 
o|contracted procedure: k2384 
o|contracted procedure: k2442 
o|contracted procedure: k2445 
o|contracted procedure: k2457 
o|contracted procedure: k2467 
o|contracted procedure: k2471 
o|contracted procedure: k2525 
o|substituted constant variable: g5076 
o|contracted procedure: k2532 
o|contracted procedure: k2559 
o|contracted procedure: k2536 
o|contracted procedure: k2549 
o|contracted procedure: k2545 
o|contracted procedure: k2565 
o|contracted procedure: k2608 
o|contracted procedure: k2572 
o|contracted procedure: k2581 
o|substituted constant variable: g5080 
o|contracted procedure: k2604 
o|contracted procedure: k2600 
o|contracted procedure: k2589 
o|contracted procedure: k2596 
o|contracted procedure: k2652 
o|substituted constant variable: g5084 
o|contracted procedure: k2662 
o|contracted procedure: k2688 
o|contracted procedure: k2681 
o|contracted procedure: k2675 
o|contracted procedure: k2671 
o|contracted procedure: k2698 
o|contracted procedure: k2701 
o|contracted procedure: k2739 
o|contracted procedure: k2711 
o|contracted procedure: k2720 
o|contracted procedure: k2728 
o|contracted procedure: k2735 
o|contracted procedure: k2750 
o|contracted procedure: k2756 
o|contracted procedure: k2787 
o|contracted procedure: k2766 
o|contracted procedure: k2781 
o|contracted procedure: k2769 
o|contracted procedure: k2815 
o|substituted constant variable: g5092 
o|contracted procedure: k2818 
o|contracted procedure: k2825 
o|contracted procedure: k28254477 
o|contracted procedure: k2868 
o|contracted procedure: k2855 
o|contracted procedure: k2851 
o|contracted procedure: k2913 
o|contracted procedure: k2922 
o|contracted procedure: k2969 
o|contracted procedure: k2938 
o|contracted procedure: k2947 
o|substituted constant variable: g5096 
o|contracted procedure: k2957 
o|contracted procedure: k2965 
o|contracted procedure: k2961 
o|contracted procedure: k2989 
o|substituted constant variable: g5100 
o|contracted procedure: k2999 
o|contracted procedure: k3009 
o|contracted procedure: k3015 
o|contracted procedure: k3027 
o|contracted procedure: k3037 
o|contracted procedure: k3041 
o|contracted procedure: k3077 
o|contracted procedure: k3070 
o|contracted procedure: k3111 
o|contracted procedure: k3104 
o|contracted procedure: k3145 
o|contracted procedure: k3154 
o|contracted procedure: k3186 
o|contracted procedure: k13354490 
o|contracted procedure: k3214 
o|contracted procedure: k3231 
o|contracted procedure: k3251 
o|contracted procedure: k13354495 
o|contracted procedure: k3299 
o|contracted procedure: k3308 
o|contracted procedure: k3338 
o|contracted procedure: k13354500 
o|contracted procedure: k3397 
o|contracted procedure: k3380 
o|contracted procedure: k3373 
o|contracted procedure: k3390 
o|contracted procedure: k3406 
o|contracted procedure: k3459 
o|contracted procedure: k3442 
o|contracted procedure: k3435 
o|contracted procedure: k3452 
o|contracted procedure: k13354505 
o|contracted procedure: k3533 
o|contracted procedure: k3521 
o|contracted procedure: k3507 
o|contracted procedure: k3503 
o|contracted procedure: k3540 
o|contracted procedure: k3552 
o|contracted procedure: k3562 
o|contracted procedure: k3566 
o|contracted procedure: k3593 
o|contracted procedure: k3623 
o|contracted procedure: k3619 
o|contracted procedure: k3721 
o|contracted procedure: k3734 
o|contracted procedure: k3772 
o|contracted procedure: k3784 
o|contracted procedure: k3787 
o|contracted procedure: k3790 
o|contracted procedure: k3798 
o|contracted procedure: k3806 
o|contracted procedure: k3813 
o|contracted procedure: k3825 
o|contracted procedure: k3828 
o|contracted procedure: k3831 
o|contracted procedure: k3839 
o|contracted procedure: k3847 
o|contracted procedure: k3859 
o|contracted procedure: k3862 
o|contracted procedure: k3865 
o|contracted procedure: k3873 
o|contracted procedure: k3881 
o|contracted procedure: k3893 
o|contracted procedure: k3896 
o|contracted procedure: k3899 
o|contracted procedure: k3907 
o|contracted procedure: k3915 
o|simplifications: ((let . 37)) 
o|replaced variables: 2 
o|removed binding forms: 216 
o|inlining procedure: k2284 
o|inlining procedure: k2319 
o|inlining procedure: k2655 
o|inlining procedure: k2655 
o|replaced variables: 94 
o|removed binding forms: 19 
o|inlining procedure: k1709 
o|inlining procedure: k1762 
o|inlining procedure: k1819 
o|inlining procedure: k2048 
o|inlining procedure: k2101 
o|inlining procedure: k2167 
o|substituted constant variable: r23205209 
o|substituted constant variable: r23205209 
o|inlining procedure: k2351 
o|inlining procedure: k2858 
o|inlining procedure: k3012 
o|inlining procedure: k3510 
o|inlining procedure: k3626 
o|simplifications: ((if . 1)) 
o|replaced variables: 2 
o|removed binding forms: 76 
o|removed conditional forms: 1 
o|contracted procedure: k1560 
o|contracted procedure: k1573 
o|contracted procedure: k1641 
o|contracted procedure: k2237 
o|contracted procedure: k2281 
o|contracted procedure: k2552 
o|contracted procedure: k2678 
o|contracted procedure: k3393 
o|contracted procedure: k3455 
o|removed binding forms: 23 
o|replaced variables: 15 
o|inlining procedure: k2023 
o|removed binding forms: 13 
o|contracted procedure: k1822 
o|contracted procedure: k2104 
o|contracted procedure: k2170 
o|contracted procedure: k2354 
o|contracted procedure: k2861 
o|contracted procedure: k3513 
o|contracted procedure: k3629 
o|simplifications: ((let . 8)) 
o|removed binding forms: 8 
o|replaced variables: 6 
o|removed binding forms: 1 
o|direct leaf routine/allocation: lp143 0 
o|direct leaf routine/allocation: lp171 0 
o|direct leaf routine/allocation: lp282 0 
o|direct leaf routine/allocation: g434441 0 
o|direct leaf routine/allocation: doloop481482 0 
o|direct leaf routine/allocation: lp504 0 
o|direct leaf routine/allocation: lp522 0 
o|contracted procedure: k1599 
o|converted assignments to bindings: (lp143) 
o|converted assignments to bindings: (lp171) 
o|converted assignments to bindings: (lp282) 
o|contracted procedure: "(srfi-14.scm:360) k2460" 
o|converted assignments to bindings: (doloop481482) 
o|converted assignments to bindings: (lp504) 
o|converted assignments to bindings: (lp522) 
o|simplifications: ((let . 6)) 
o|removed binding forms: 2 
o|direct leaf routine/allocation: for-each-loop433448 0 
o|converted assignments to bindings: (for-each-loop433448) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (map-loop877894 map-loop906923 map-loop934951 map-loop962979 %char-set-diff+intersection! g788795 for-each-loop787821 %char-set-algebra %string-iter g620627 for-each-loop619643 lp631 lp604 %char-set-filter! lp563 %ucs-range->char-set! k2744 %string->char-set! lp469 %list->char-set! %default-base %char-set-unfold! lp401 lp378 lp360 lp348 lp322 lp301 %char-set-cursor-next %set-char-set! %set-char-set g230237 for-each-loop229240 g205212 for-each-loop204215 lp183 k1590 lp146 lp2120 lp112 lp98 %char-set:s/check lp83) 
o|calls to known targets: 146 
o|identified direct recursive calls: f_1526 1 
o|identified direct recursive calls: f_1656 1 
o|identified direct recursive calls: f_1606 2 
o|identified direct recursive calls: f_1733 1 
o|identified direct recursive calls: f_2012 2 
o|identified direct recursive calls: f_2064 1 
o|identified direct recursive calls: f_2130 1 
o|identified direct recursive calls: f_2205 1 
o|identified direct recursive calls: f_2257 1 
o|identified direct recursive calls: f_2311 1 
o|identified direct recursive calls: f_2452 1 
o|identified direct recursive calls: f_2520 2 
o|identified direct recursive calls: f_2576 1 
o|identified direct recursive calls: f_2647 2 
o|identified direct recursive calls: f_2715 1 
o|fast box initializations: 24 
o|fast global references: 81 
o|fast global assignments: 14 
o|dropping unused closure argument: f_2429 
o|dropping unused closure argument: f_2563 
o|dropping unused closure argument: f_1884 
o|dropping unused closure argument: f_1833 
o|dropping unused closure argument: f_2696 
o|dropping unused closure argument: f_1339 
o|dropping unused closure argument: f_3472 
o|dropping unused closure argument: f_2973 
o|dropping unused closure argument: f_1383 
o|dropping unused closure argument: f_2003 
o|dropping unused closure argument: f_2365 
o|dropping unused closure argument: f_2804 
o|dropping unused closure argument: f_2932 
*/
/* end of file */

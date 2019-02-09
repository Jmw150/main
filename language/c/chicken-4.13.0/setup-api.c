/* Generated from setup-api.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: setup-api.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -emit-import-library setup-api -output-file setup-api.c
   used units: library eval chicken_2dsyntax srfi_2d1 irregex utils posix srfi_2d13 extras ports data_2dstructures files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[288];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,27),40,115,101,116,117,112,45,97,112,105,35,115,104,101,108,108,112,97,116,104,32,115,116,114,53,55,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,36),40,115,101,116,117,112,45,97,112,105,35,101,120,116,114,97,45,102,101,97,116,117,114,101,115,32,46,32,116,109,112,55,49,55,50,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,39),40,115,101,116,117,112,45,97,112,105,35,101,120,116,114,97,45,110,111,110,102,101,97,116,117,114,101,115,32,46,32,116,109,112,56,55,56,56,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,30),40,115,101,116,117,112,45,97,112,105,35,117,115,101,114,45,105,110,115,116,97,108,108,45,115,101,116,117,112,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,34),40,115,101,116,117,112,45,97,112,105,35,115,117,100,111,45,105,110,115,116,97,108,108,32,46,32,97,114,103,115,50,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,7),40,97,50,50,54,52,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,97,50,50,53,52,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,41),40,115,101,116,117,112,45,97,112,105,35,112,97,116,99,104,32,119,104,105,99,104,50,53,51,32,114,120,50,53,52,32,115,117,98,115,116,50,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,48),40,115,101,116,117,112,45,97,112,105,35,114,101,103,105,115,116,101,114,45,112,114,111,103,114,97,109,32,110,97,109,101,50,57,51,32,46,32,116,109,112,50,57,50,50,57,52,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,32),40,115,101,116,117,112,45,97,112,105,35,102,105,110,100,45,112,114,111,103,114,97,109,32,110,97,109,101,51,48,49,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,22),40,114,101,103,32,110,97,109,101,51,48,53,32,114,110,97,109,101,51,48,54,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,54,51,32,103,51,55,53,51,56,50,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,51,54,32,103,51,52,56,51,53,53,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,48,54,32,103,52,49,56,52,50,52,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,15),40,115,109,111,111,116,104,32,108,115,116,52,48,50,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,57,51,32,103,52,48,48,52,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,52,53,32,103,52,53,55,52,54,51,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,30),40,115,101,116,117,112,45,97,112,105,35,101,120,101,99,117,116,101,32,101,120,112,108,105,115,116,51,57,48,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,31),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,97,116,105,111,110,45,112,114,101,102,105,120,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,13),40,118,101,114,98,32,100,105,114,53,55,52,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,15),40,102,95,53,50,49,56,32,100,105,114,53,56,52,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,15),40,102,95,53,50,50,54,32,100,105,114,53,56,54,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,50,57,52,55,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,50,57,53,54,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,45),40,115,101,116,117,112,45,97,112,105,35,119,114,105,116,101,45,105,110,102,111,32,105,100,53,57,54,32,102,105,108,101,115,53,57,55,32,105,110,102,111,53,57,56,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,11),40,103,54,55,55,32,102,54,56,54,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,55,54,32,103,54,56,51,54,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,20),40,119,97,108,107,32,102,114,111,109,54,54,56,32,116,111,54,54,57,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,47),40,115,101,116,117,112,45,97,112,105,35,99,111,112,121,45,102,105,108,101,32,102,114,111,109,54,53,49,32,116,111,54,53,50,32,46,32,116,109,112,54,53,48,54,53,51,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,35),40,115,101,116,117,112,45,97,112,105,35,109,111,118,101,45,102,105,108,101,32,102,114,111,109,55,48,53,32,116,111,55,48,54,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,31),40,115,101,116,117,112,45,97,112,105,35,114,101,109,111,118,101,45,102,105,108,101,42,32,100,105,114,55,49,55,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,46),40,115,101,116,117,112,45,97,112,105,35,109,97,107,101,45,100,101,115,116,45,112,97,116,104,110,97,109,101,32,112,97,116,104,55,50,53,32,102,105,108,101,55,50,54,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,55,51,49,32,103,55,52,51,55,53,57,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,35),40,115,101,116,117,112,45,97,112,105,35,99,104,101,99,107,45,102,105,108,101,108,105,115,116,32,102,108,105,115,116,55,50,56,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,6),40,103,55,57,57,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,45),40,115,101,116,117,112,45,97,112,105,35,115,117,112,112,108,121,45,118,101,114,115,105,111,110,32,105,110,102,111,55,57,49,32,118,101,114,115,105,111,110,55,57,50,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,51,53,51,56,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,50),40,115,101,116,117,112,45,97,112,105,35,115,116,97,110,100,97,114,100,45,101,120,116,101,110,115,105,111,110,32,110,97,109,101,56,49,55,32,46,32,116,109,112,56,49,54,56,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,11),40,103,56,56,51,32,102,56,57,52,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,56,55,55,32,103,56,56,57,57,50,48,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,56),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,45,101,120,116,101,110,115,105,111,110,32,105,100,56,54,51,32,102,105,108,101,115,56,54,52,32,46,32,116,109,112,56,54,50,56,54,53,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,12),40,101,120,105,102,121,32,102,57,52,48,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,11),40,103,57,56,49,32,102,57,57,50,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,22),40,109,97,112,45,108,111,111,112,57,55,53,32,103,57,56,55,49,48,48,52,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,11),40,103,57,53,51,32,102,57,54,52,41,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,57,52,55,32,103,57,53,57,57,54,54,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,54),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,45,112,114,111,103,114,97,109,32,105,100,57,51,49,32,102,105,108,101,115,57,51,50,32,46,32,116,109,112,57,51,48,57,51,51,41,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,13),40,103,49,48,51,54,32,102,49,48,52,55,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,48,51,48,32,103,49,48,52,50,49,48,53,57,41};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,57),40,115,101,116,117,112,45,97,112,105,35,105,110,115,116,97,108,108,45,115,99,114,105,112,116,32,105,100,49,48,49,54,32,102,105,108,101,115,49,48,49,55,32,46,32,116,109,112,49,48,49,53,49,48,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,45,97,112,105,35,114,101,112,111,45,112,97,116,104,32,116,109,112,49,48,55,54,49,48,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,49),40,115,101,116,117,112,45,97,112,105,35,101,110,115,117,114,101,45,100,105,114,101,99,116,111,114,121,32,112,97,116,104,49,49,48,51,32,116,109,112,49,49,48,50,49,49,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,52,50,56,54,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,18),40,97,52,50,56,48,32,101,120,49,49,54,56,49,49,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,52,50,57,53,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,7),40,97,52,51,51,48,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,22),40,97,52,51,50,52,32,46,32,97,114,103,115,49,49,55,48,49,49,57,48,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,7),40,97,52,50,56,57,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,17),40,97,52,50,55,52,32,107,49,49,54,57,49,49,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,7),40,97,52,51,52,56,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,18),40,97,52,51,52,50,32,101,120,49,49,52,52,49,49,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,7),40,97,52,51,53,55,41,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,7),40,97,52,51,57,50,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,22),40,97,52,51,56,54,32,46,32,97,114,103,115,49,49,52,54,49,49,54,54,41,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,97,52,51,53,49,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,17),40,97,52,51,51,54,32,107,49,49,52,53,49,49,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,7),40,97,52,52,52,54,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,7),40,97,52,52,53,50,41,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,7),40,97,52,52,53,53,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,7),40,97,52,52,54,49,41,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,7),40,97,52,52,54,52,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,7),40,97,52,52,54,55,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,46),40,115,101,116,117,112,45,97,112,105,35,116,114,121,45,99,111,109,112,105,108,101,32,99,111,100,101,49,49,50,52,32,46,32,116,109,112,49,49,50,51,49,49,50,53,41,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,42),40,115,101,116,117,112,45,97,112,105,35,102,105,110,100,45,108,105,98,114,97,114,121,32,110,97,109,101,49,49,57,54,32,112,114,111,99,49,49,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,32),40,115,101,116,117,112,45,97,112,105,35,102,105,110,100,45,104,101,97,100,101,114,32,110,97,109,101,49,50,50,51,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,50,52,52,32,103,49,50,53,54,49,50,54,54,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,21),40,118,101,114,115,105,111,110,45,62,108,105,115,116,32,118,49,50,52,49,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,112,49,49,50,55,51,32,112,50,49,50,55,52,41,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,36),40,115,101,116,117,112,45,97,112,105,35,118,101,114,115,105,111,110,62,61,63,32,118,49,49,50,51,56,32,118,50,49,50,51,57,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,26),40,115,101,116,117,112,45,97,112,105,35,101,120,116,101,110,115,105,111,110,45,110,97,109,101,41,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,43),40,115,101,116,117,112,45,97,112,105,35,101,120,116,101,110,115,105,111,110,45,118,101,114,115,105,111,110,32,46,32,116,109,112,49,51,49,56,49,51,49,57,41,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,43),40,115,101,116,117,112,45,97,112,105,35,114,101,97,100,45,105,110,102,111,32,101,103,103,49,51,51,50,32,46,32,116,109,112,49,51,51,49,49,51,51,51,41,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,97,52,56,52,49,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,18),40,97,52,56,51,53,32,101,120,49,51,53,54,49,51,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,7),40,97,52,56,53,48,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,97,52,56,57,53,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,22),40,97,52,56,56,57,32,46,32,97,114,103,115,49,51,53,56,49,51,56,50,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,7),40,97,52,56,52,52,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,17),40,97,52,56,50,57,32,107,49,51,53,55,49,51,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,13),40,103,49,51,56,57,32,102,49,51,57,56,41,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,51,56,56,32,103,49,51,57,53,49,52,48,52,41,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,14),40,119,97,108,107,32,100,105,114,49,51,56,52,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,50),40,115,101,116,117,112,45,97,112,105,35,114,101,109,111,118,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,49,51,52,52,32,46,32,116,109,112,49,51,52,51,49,51,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,13),40,103,49,52,50,54,32,102,49,52,51,53,41,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,29),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,52,50,53,32,103,49,52,51,50,49,52,51,56,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,50),40,115,101,116,117,112,45,97,112,105,35,114,101,109,111,118,101,45,101,120,116,101,110,115,105,111,110,32,101,103,103,49,52,49,53,32,46,32,116,109,112,49,52,49,52,49,52,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,16),40,103,49,52,53,51,32,112,97,116,104,49,52,53,53,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,27),40,115,101,116,117,112,45,97,112,105,35,36,115,121,115,116,101,109,32,115,116,114,49,52,52,52,41,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,16),40,116,109,112,49,49,56,55,54,32,99,49,52,55,53,41};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,32),40,115,101,116,117,112,45,97,112,105,35,115,101,116,117,112,45,101,114,114,111,114,45,104,97,110,100,108,105,110,103,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,21),40,101,110,115,117,114,101,45,115,116,114,105,110,103,32,120,49,51,48,57,41,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,13),40,97,53,49,53,49,32,120,49,50,57,55,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,7),40,97,53,50,55,52,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word *av) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word *av) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word *av) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word *av) C_noret;
C_noret_decl(f_3011)
static void C_fcall f_3011(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word *av) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word *av) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word *av) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word *av) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word *av) C_noret;
C_noret_decl(f_2359)
static void C_ccall f_2359(C_word c,C_word *av) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word *av) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word *av) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word *av) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word *av) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word *av) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word *av) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word *av) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_fcall f_3022(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word *av) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word *av) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word *av) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word *av) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word *av) C_noret;
C_noret_decl(f_4702)
static void C_ccall f_4702(C_word c,C_word *av) C_noret;
C_noret_decl(f_4287)
static void C_ccall f_4287(C_word c,C_word *av) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word *av) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_3792)
static void C_fcall f_3792(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word *av) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word *av) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word *av) C_noret;
C_noret_decl(f_2464)
static void C_ccall f_2464(C_word c,C_word *av) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word *av) C_noret;
C_noret_decl(f_3788)
static void C_fcall f_3788(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word *av) C_noret;
C_noret_decl(f_3784)
static void C_ccall f_3784(C_word c,C_word *av) C_noret;
C_noret_decl(f_4803)
static void C_ccall f_4803(C_word c,C_word *av) C_noret;
C_noret_decl(f_3507)
static void C_fcall f_3507(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2472)
static void C_fcall f_2472(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3170)
static void C_fcall f_3170(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3173)
static void C_ccall f_3173(C_word c,C_word *av) C_noret;
C_noret_decl(f_2407)
static void C_fcall f_2407(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word *av) C_noret;
C_noret_decl(f_2106)
static void C_ccall f_2106(C_word c,C_word *av) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word *av) C_noret;
C_noret_decl(f_4257)
static void C_ccall f_4257(C_word c,C_word *av) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word *av) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word *av) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word *av) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word *av) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word *av) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word *av) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word *av) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word *av) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word *av) C_noret;
C_noret_decl(f_4242)
static void C_ccall f_4242(C_word c,C_word *av) C_noret;
C_noret_decl(f_4248)
static void C_ccall f_4248(C_word c,C_word *av) C_noret;
C_noret_decl(f_3758)
static void C_fcall f_3758(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word *av) C_noret;
C_noret_decl(f_3191)
static void C_ccall f_3191(C_word c,C_word *av) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word *av) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word *av) C_noret;
C_noret_decl(f_3833)
static void C_ccall f_3833(C_word c,C_word *av) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word *av) C_noret;
C_noret_decl(f_3835)
static void C_fcall f_3835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word *av) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word *av) C_noret;
C_noret_decl(f_4275)
static void C_ccall f_4275(C_word c,C_word *av) C_noret;
C_noret_decl(f_2683)
static void C_fcall f_2683(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word *av) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word *av) C_noret;
C_noret_decl(f_2436)
static void C_ccall f_2436(C_word c,C_word *av) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word *av) C_noret;
C_noret_decl(f_4263)
static void C_ccall f_4263(C_word c,C_word *av) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word *av) C_noret;
C_noret_decl(f_4269)
static void C_ccall f_4269(C_word c,C_word *av) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word *av) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word *av) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word *av) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word *av) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word *av) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word *av) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word *av) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word *av) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word *av) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word *av) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word *av) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word *av) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word *av) C_noret;
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word *av) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word *av) C_noret;
C_noret_decl(f_4233)
static void C_ccall f_4233(C_word c,C_word *av) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word *av) C_noret;
C_noret_decl(f_3030)
static void C_fcall f_3030(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word *av) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word *av) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word *av) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word *av) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word *av) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word *av) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word *av) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word *av) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word *av) C_noret;
C_noret_decl(f_4531)
static void C_ccall f_4531(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word *av) C_noret;
C_noret_decl(f_5198)
static void C_ccall f_5198(C_word c,C_word *av) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word *av) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word *av) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word *av) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word *av) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word *av) C_noret;
C_noret_decl(f_5168)
static void C_fcall f_5168(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word *av) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word *av) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word *av) C_noret;
C_noret_decl(f_4513)
static void C_ccall f_4513(C_word c,C_word *av) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word *av) C_noret;
C_noret_decl(f_5175)
static void C_fcall f_5175(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word *av) C_noret;
C_noret_decl(f_4522)
static void C_ccall f_4522(C_word c,C_word *av) C_noret;
C_noret_decl(f_5143)
static void C_ccall f_5143(C_word c,C_word *av) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word *av) C_noret;
C_noret_decl(f_4519)
static void C_ccall f_4519(C_word c,C_word *av) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word *av) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word *av) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word *av) C_noret;
C_noret_decl(f_4884)
static void C_ccall f_4884(C_word c,C_word *av) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word *av) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word *av) C_noret;
C_noret_decl(f_4528)
static void C_ccall f_4528(C_word c,C_word *av) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word *av) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word *av) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word *av) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word *av) C_noret;
C_noret_decl(f_5135)
static void C_ccall f_5135(C_word c,C_word *av) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word *av) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word *av) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word *av) C_noret;
C_noret_decl(f_5139)
static void C_ccall f_5139(C_word c,C_word *av) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word *av) C_noret;
C_noret_decl(f_4504)
static void C_ccall f_4504(C_word c,C_word *av) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103(C_word c,C_word *av) C_noret;
C_noret_decl(f_5100)
static void C_ccall f_5100(C_word c,C_word *av) C_noret;
C_noret_decl(f_5114)
static void C_fcall f_5114(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word *av) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word *av) C_noret;
C_noret_decl(f_2138)
static void C_ccall f_2138(C_word c,C_word *av) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word *av) C_noret;
C_noret_decl(f_2144)
static void C_ccall f_2144(C_word c,C_word *av) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148(C_word c,C_word *av) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word *av) C_noret;
C_noret_decl(f_3050)
static void C_fcall f_3050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2284)
static void C_ccall f_2284(C_word c,C_word *av) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483(C_word c,C_word *av) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word *av) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word *av) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word *av) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word *av) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word *av) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word *av) C_noret;
C_noret_decl(f_4871)
static void C_ccall f_4871(C_word c,C_word *av) C_noret;
C_noret_decl(f_3229)
static void C_fcall f_3229(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4489)
static void C_ccall f_4489(C_word c,C_word *av) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word *av) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word *av) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word *av) C_noret;
C_noret_decl(f_2125)
static void C_ccall f_2125(C_word c,C_word *av) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word *av) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word *av) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word *av) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word *av) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word *av) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word *av) C_noret;
C_noret_decl(f_3581)
static void C_fcall f_3581(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word *av) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word *av) C_noret;
C_noret_decl(f_2170)
static void C_ccall f_2170(C_word c,C_word *av) C_noret;
C_noret_decl(f_3577)
static void C_fcall f_3577(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word *av) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word *av) C_noret;
C_noret_decl(f_2185)
static void C_fcall f_2185(C_word t0) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word *av) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word *av) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word *av) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word *av) C_noret;
C_noret_decl(f_2154)
static void C_ccall f_2154(C_word c,C_word *av) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word *av) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word *av) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word *av) C_noret;
C_noret_decl(f_2884)
static void C_fcall f_2884(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word *av) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word *av) C_noret;
C_noret_decl(f_3254)
static void C_fcall f_3254(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word *av) C_noret;
C_noret_decl(f_4462)
static void C_ccall f_4462(C_word c,C_word *av) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word *av) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word *av) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word *av) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894(C_word c,C_word *av) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word *av) C_noret;
C_noret_decl(f_4970)
static void C_ccall f_4970(C_word c,C_word *av) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word *av) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236(C_word c,C_word *av) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word *av) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word *av) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word *av) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word *av) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word *av) C_noret;
C_noret_decl(f_3889)
static void C_ccall f_3889(C_word c,C_word *av) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word *av) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word *av) C_noret;
C_noret_decl(f_4634)
static void C_fcall f_4634(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4194)
static void C_ccall f_4194(C_word c,C_word *av) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word *av) C_noret;
C_noret_decl(f_3871)
static void C_fcall f_3871(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word *av) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word *av) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word *av) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word *av) C_noret;
C_noret_decl(f_4632)
static void C_ccall f_4632(C_word c,C_word *av) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word *av) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word *av) C_noret;
C_noret_decl(f_4188)
static void C_ccall f_4188(C_word c,C_word *av) C_noret;
C_noret_decl(f_4182)
static void C_ccall f_4182(C_word c,C_word *av) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word *av) C_noret;
C_noret_decl(f_5226)
static void C_ccall f_5226(C_word c,C_word *av) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word *av) C_noret;
C_noret_decl(f_2084)
static void C_ccall f_2084(C_word c,C_word *av) C_noret;
C_noret_decl(f_2857)
static void C_fcall f_2857(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word *av) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word *av) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word *av) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word *av) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word *av) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word *av) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word *av) C_noret;
C_noret_decl(f_2271)
static void C_fcall f_2271(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word *av) C_noret;
C_noret_decl(f_2096)
static void C_ccall f_2096(C_word c,C_word *av) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272(C_word c,C_word *av) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090(C_word c,C_word *av) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word *av) C_noret;
C_noret_decl(f_2561)
static void C_ccall f_2561(C_word c,C_word *av) C_noret;
C_noret_decl(f_2297)
static void C_ccall f_2297(C_word c,C_word *av) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word *av) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word *av) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word *av) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word *av) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word *av) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word *av) C_noret;
C_noret_decl(f_2570)
static void C_fcall f_2570(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word *av) C_noret;
C_noret_decl(f_3629)
static void C_fcall f_3629(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word *av) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word *av) C_noret;
C_noret_decl(f_4173)
static void C_ccall f_4173(C_word c,C_word *av) C_noret;
C_noret_decl(f_4176)
static void C_ccall f_4176(C_word c,C_word *av) C_noret;
C_noret_decl(f_3305)
static void C_fcall f_3305(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word *av) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word *av) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word *av) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word *av) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word *av) C_noret;
C_noret_decl(f_4166)
static void C_fcall f_4166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word *av) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word *av) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word *av) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word *av) C_noret;
C_noret_decl(f_4104)
static void C_fcall f_4104(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word *av) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word *av) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word *av) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word *av) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word *av) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word *av) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word *av) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word *av) C_noret;
C_noret_decl(f_2037)
static void C_ccall f_2037(C_word c,C_word *av) C_noret;
C_noret_decl(f_2806)
static void C_ccall f_2806(C_word c,C_word *av) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word *av) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word *av) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897(C_word c,C_word *av) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word *av) C_noret;
C_noret_decl(f_4890)
static void C_ccall f_4890(C_word c,C_word *av) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word *av) C_noret;
C_noret_decl(f_1885)
static void C_ccall f_1885(C_word c,C_word *av) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word *av) C_noret;
C_noret_decl(f_1888)
static void C_ccall f_1888(C_word c,C_word *av) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word *av) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word *av) C_noret;
C_noret_decl(f_4982)
static void C_ccall f_4982(C_word c,C_word *av) C_noret;
C_noret_decl(f_3933)
static void C_ccall f_3933(C_word c,C_word *av) C_noret;
C_noret_decl(f_3908)
static void C_fcall f_3908(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4996)
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4995)
static void C_ccall f_4995(C_word c,C_word *av) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_5298)
static void C_ccall f_5298(C_word c,C_word *av) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word *av) C_noret;
C_noret_decl(f_5275)
static void C_ccall f_5275(C_word c,C_word *av) C_noret;
C_noret_decl(f_5249)
static void C_ccall f_5249(C_word c,C_word *av) C_noret;
C_noret_decl(f_5245)
static void C_ccall f_5245(C_word c,C_word *av) C_noret;
C_noret_decl(f_5257)
static void C_ccall f_5257(C_word c,C_word *av) C_noret;
C_noret_decl(f_5253)
static void C_ccall f_5253(C_word c,C_word *av) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word *av) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word *av) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word *av) C_noret;
C_noret_decl(f_4773)
static void C_ccall f_4773(C_word c,C_word *av) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word *av) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word *av) C_noret;
C_noret_decl(f_4910)
static void C_fcall f_4910(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5202)
static void C_ccall f_5202(C_word c,C_word *av) C_noret;
C_noret_decl(f_4905)
static void C_fcall f_4905(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2027)
static void C_ccall f_2027(C_word c,C_word *av) C_noret;
C_noret_decl(f_4909)
static void C_ccall f_4909(C_word c,C_word *av) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word *av) C_noret;
C_noret_decl(f_5218)
static void C_ccall f_5218(C_word c,C_word *av) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903(C_word c,C_word *av) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word *av) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word *av) C_noret;
C_noret_decl(f_1909)
static void C_ccall f_1909(C_word c,C_word *av) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_5261)
static void C_ccall f_5261(C_word c,C_word *av) C_noret;
C_noret_decl(f_5265)
static void C_ccall f_5265(C_word c,C_word *av) C_noret;
C_noret_decl(f_4785)
static void C_ccall f_4785(C_word c,C_word *av) C_noret;
C_noret_decl(f_4781)
static void C_ccall f_4781(C_word c,C_word *av) C_noret;
C_noret_decl(f_4023)
static void C_ccall f_4023(C_word c,C_word *av) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word *av) C_noret;
C_noret_decl(f_4026)
static void C_ccall f_4026(C_word c,C_word *av) C_noret;
C_noret_decl(f_2595)
static void C_ccall f_2595(C_word c,C_word *av) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word *av) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word *av) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word *av) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word *av) C_noret;
C_noret_decl(f_4013)
static void C_ccall f_4013(C_word c,C_word *av) C_noret;
C_noret_decl(f_1932)
static void C_ccall f_1932(C_word c,C_word *av) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word *av) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word *av) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word *av) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word *av) C_noret;
C_noret_decl(f_5020)
static void C_fcall f_5020(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word *av) C_noret;
C_noret_decl(f_4923)
static void C_ccall f_4923(C_word c,C_word *av) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word *av) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word *av) C_noret;
C_noret_decl(f_1924)
static void C_ccall f_1924(C_word c,C_word *av) C_noret;
C_noret_decl(f_4352)
static void C_ccall f_4352(C_word c,C_word *av) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word *av) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word *av) C_noret;
C_noret_decl(f_2781)
static void C_fcall f_2781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word *av) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word *av) C_noret;
C_noret_decl(f_2758)
static void C_fcall f_2758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5000)
static void C_ccall f_5000(C_word c,C_word *av) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word *av) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word *av) C_noret;
C_noret_decl(f_4349)
static void C_ccall f_4349(C_word c,C_word *av) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word *av) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word *av) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word *av) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word *av) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word *av) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word *av) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word *av) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word *av) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word *av) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word *av) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word *av) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word *av) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word *av) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word *av) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word *av) C_noret;
C_noret_decl(f_4945)
static void C_fcall f_4945(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word *av) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word *av) C_noret;
C_noret_decl(f_4920)
static void C_fcall f_4920(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304(C_word c,C_word *av) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word *av) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word *av) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word *av) C_noret;
C_noret_decl(f_4955)
static void C_ccall f_4955(C_word c,C_word *av) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word *av) C_noret;
C_noret_decl(f_3476)
static void C_ccall f_3476(C_word c,C_word *av) C_noret;
C_noret_decl(f_3479)
static void C_ccall f_3479(C_word c,C_word *av) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word *av) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word *av) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325(C_word c,C_word *av) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323(C_word c,C_word *av) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word *av) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word *av) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word *av) C_noret;
C_noret_decl(f_3998)
static void C_ccall f_3998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3457)
static void C_ccall f_3457(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word *av) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word *av) C_noret;
C_noret_decl(f_3985)
static void C_fcall f_3985(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word *av) C_noret;
C_noret_decl(f_3989)
static void C_fcall f_3989(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4050)
static void C_fcall f_4050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word *av) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word *av) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word *av) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word *av) C_noret;
C_noret_decl(f_5060)
static void C_ccall f_5060(C_word c,C_word *av) C_noret;
C_noret_decl(f_3422)
static void C_fcall f_3422(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word *av) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word *av) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word *av) C_noret;
C_noret_decl(f_3414)
static void C_fcall f_3414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word *av) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word *av) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word *av) C_noret;
C_noret_decl(f_5056)
static void C_fcall f_5056(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word *av) C_noret;
C_noret_decl(f_3702)
static void C_fcall f_3702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word *av) C_noret;
C_noret_decl(f_4585)
static void C_fcall f_4585(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4580)
static void C_ccall f_4580(C_word c,C_word *av) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word *av) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word *av) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word *av) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word *av) C_noret;
C_noret_decl(f_1977)
static void C_ccall f_1977(C_word c,C_word *av) C_noret;
C_noret_decl(f_4565)
static void C_fcall f_4565(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word *av) C_noret;
C_noret_decl(f_4560)
static void C_ccall f_4560(C_word c,C_word *av) C_noret;
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word *av) C_noret;
C_noret_decl(f_1986)
static void C_ccall f_1986(C_word c,C_word *av) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word *av) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word *av) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word *av) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word *av) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word *av) C_noret;
C_noret_decl(f_1967)
static void C_ccall f_1967(C_word c,C_word *av) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word *av) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word *av) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word *av) C_noret;
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word *av) C_noret;
C_noret_decl(f_4792)
static void C_ccall f_4792(C_word c,C_word *av) C_noret;
C_noret_decl(f_2392)
static void C_ccall f_2392(C_word c,C_word *av) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word *av) C_noret;
C_noret_decl(f_1994)
static void C_ccall f_1994(C_word c,C_word *av) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word *av) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word *av) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word *av) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word *av) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word *av) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word *av) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word *av) C_noret;
C_noret_decl(f_5085)
static void C_ccall f_5085(C_word c,C_word *av) C_noret;
C_noret_decl(f_5097)
static void C_ccall f_5097(C_word c,C_word *av) C_noret;
C_noret_decl(f_5091)
static void C_ccall f_5091(C_word c,C_word *av) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word *av) C_noret;
C_noret_decl(f_4738)
static void C_ccall f_4738(C_word c,C_word *av) C_noret;
C_noret_decl(f_2333)
static void C_ccall f_2333(C_word c,C_word *av) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word *av) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word *av) C_noret;
C_noret_decl(f_2536)
static void C_fcall f_2536(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word *av) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word *av) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word *av) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word *av) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word *av) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word *av) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word *av) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word *av) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word *av) C_noret;

C_noret_decl(trf_3011)
static void C_ccall trf_3011(C_word c,C_word *av) C_noret;
static void C_ccall trf_3011(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3011(t0,t1);}

C_noret_decl(trf_3022)
static void C_ccall trf_3022(C_word c,C_word *av) C_noret;
static void C_ccall trf_3022(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3022(t0,t1,t2,t3);}

C_noret_decl(trf_3792)
static void C_ccall trf_3792(C_word c,C_word *av) C_noret;
static void C_ccall trf_3792(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3792(t0,t1);}

C_noret_decl(trf_3788)
static void C_ccall trf_3788(C_word c,C_word *av) C_noret;
static void C_ccall trf_3788(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3788(t0,t1,t2);}

C_noret_decl(trf_3507)
static void C_ccall trf_3507(C_word c,C_word *av) C_noret;
static void C_ccall trf_3507(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3507(t0,t1);}

C_noret_decl(trf_2472)
static void C_ccall trf_2472(C_word c,C_word *av) C_noret;
static void C_ccall trf_2472(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2472(t0,t1);}

C_noret_decl(trf_3170)
static void C_ccall trf_3170(C_word c,C_word *av) C_noret;
static void C_ccall trf_3170(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3170(t0,t1);}

C_noret_decl(trf_2407)
static void C_ccall trf_2407(C_word c,C_word *av) C_noret;
static void C_ccall trf_2407(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2407(t0,t1,t2);}

C_noret_decl(trf_3758)
static void C_ccall trf_3758(C_word c,C_word *av) C_noret;
static void C_ccall trf_3758(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3758(t0,t1);}

C_noret_decl(trf_3835)
static void C_ccall trf_3835(C_word c,C_word *av) C_noret;
static void C_ccall trf_3835(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3835(t0,t1,t2);}

C_noret_decl(trf_2683)
static void C_ccall trf_2683(C_word c,C_word *av) C_noret;
static void C_ccall trf_2683(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2683(t0,t1,t2);}

C_noret_decl(trf_3030)
static void C_ccall trf_3030(C_word c,C_word *av) C_noret;
static void C_ccall trf_3030(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3030(t0,t1,t2);}

C_noret_decl(trf_5168)
static void C_ccall trf_5168(C_word c,C_word *av) C_noret;
static void C_ccall trf_5168(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5168(t0,t1);}

C_noret_decl(trf_5175)
static void C_ccall trf_5175(C_word c,C_word *av) C_noret;
static void C_ccall trf_5175(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5175(t0,t1);}

C_noret_decl(trf_5114)
static void C_ccall trf_5114(C_word c,C_word *av) C_noret;
static void C_ccall trf_5114(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5114(t0,t1,t2);}

C_noret_decl(trf_3050)
static void C_ccall trf_3050(C_word c,C_word *av) C_noret;
static void C_ccall trf_3050(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3050(t0,t1,t2);}

C_noret_decl(trf_3229)
static void C_ccall trf_3229(C_word c,C_word *av) C_noret;
static void C_ccall trf_3229(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3229(t0,t1,t2);}

C_noret_decl(trf_3581)
static void C_ccall trf_3581(C_word c,C_word *av) C_noret;
static void C_ccall trf_3581(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3581(t0,t1);}

C_noret_decl(trf_3577)
static void C_ccall trf_3577(C_word c,C_word *av) C_noret;
static void C_ccall trf_3577(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3577(t0,t1,t2);}

C_noret_decl(trf_2185)
static void C_ccall trf_2185(C_word c,C_word *av) C_noret;
static void C_ccall trf_2185(C_word c,C_word *av){
C_word t0=av[0];
f_2185(t0);}

C_noret_decl(trf_2884)
static void C_ccall trf_2884(C_word c,C_word *av) C_noret;
static void C_ccall trf_2884(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2884(t0,t1,t2,t3);}

C_noret_decl(trf_3254)
static void C_ccall trf_3254(C_word c,C_word *av) C_noret;
static void C_ccall trf_3254(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3254(t0,t1);}

C_noret_decl(trf_4634)
static void C_ccall trf_4634(C_word c,C_word *av) C_noret;
static void C_ccall trf_4634(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4634(t0,t1,t2,t3);}

C_noret_decl(trf_3871)
static void C_ccall trf_3871(C_word c,C_word *av) C_noret;
static void C_ccall trf_3871(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3871(t0,t1,t2);}

C_noret_decl(trf_2857)
static void C_ccall trf_2857(C_word c,C_word *av) C_noret;
static void C_ccall trf_2857(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2857(t0,t1);}

C_noret_decl(trf_2271)
static void C_ccall trf_2271(C_word c,C_word *av) C_noret;
static void C_ccall trf_2271(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2271(t0,t1);}

C_noret_decl(trf_2570)
static void C_ccall trf_2570(C_word c,C_word *av) C_noret;
static void C_ccall trf_2570(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2570(t0,t1,t2);}

C_noret_decl(trf_3629)
static void C_ccall trf_3629(C_word c,C_word *av) C_noret;
static void C_ccall trf_3629(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3629(t0,t1);}

C_noret_decl(trf_3305)
static void C_ccall trf_3305(C_word c,C_word *av) C_noret;
static void C_ccall trf_3305(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3305(t0,t1,t2);}

C_noret_decl(trf_4166)
static void C_ccall trf_4166(C_word c,C_word *av) C_noret;
static void C_ccall trf_4166(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4166(t0,t1,t2);}

C_noret_decl(trf_4104)
static void C_ccall trf_4104(C_word c,C_word *av) C_noret;
static void C_ccall trf_4104(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4104(t0,t1);}

C_noret_decl(trf_3908)
static void C_ccall trf_3908(C_word c,C_word *av) C_noret;
static void C_ccall trf_3908(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3908(t0,t1,t2);}

C_noret_decl(trf_4996)
static void C_ccall trf_4996(C_word c,C_word *av) C_noret;
static void C_ccall trf_4996(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4996(t0,t1,t2);}

C_noret_decl(trf_4910)
static void C_ccall trf_4910(C_word c,C_word *av) C_noret;
static void C_ccall trf_4910(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4910(t0,t1,t2);}

C_noret_decl(trf_4905)
static void C_ccall trf_4905(C_word c,C_word *av) C_noret;
static void C_ccall trf_4905(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4905(t0,t1,t2);}

C_noret_decl(trf_5020)
static void C_ccall trf_5020(C_word c,C_word *av) C_noret;
static void C_ccall trf_5020(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5020(t0,t1,t2);}

C_noret_decl(trf_2781)
static void C_ccall trf_2781(C_word c,C_word *av) C_noret;
static void C_ccall trf_2781(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2781(t0,t1,t2);}

C_noret_decl(trf_2758)
static void C_ccall trf_2758(C_word c,C_word *av) C_noret;
static void C_ccall trf_2758(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2758(t0,t1,t2);}

C_noret_decl(trf_4945)
static void C_ccall trf_4945(C_word c,C_word *av) C_noret;
static void C_ccall trf_4945(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4945(t0,t1,t2);}

C_noret_decl(trf_4920)
static void C_ccall trf_4920(C_word c,C_word *av) C_noret;
static void C_ccall trf_4920(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4920(t0,t1);}

C_noret_decl(trf_3985)
static void C_ccall trf_3985(C_word c,C_word *av) C_noret;
static void C_ccall trf_3985(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3985(t0,t1,t2);}

C_noret_decl(trf_3989)
static void C_ccall trf_3989(C_word c,C_word *av) C_noret;
static void C_ccall trf_3989(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3989(t0,t1);}

C_noret_decl(trf_4050)
static void C_ccall trf_4050(C_word c,C_word *av) C_noret;
static void C_ccall trf_4050(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4050(t0,t1,t2);}

C_noret_decl(trf_3422)
static void C_ccall trf_3422(C_word c,C_word *av) C_noret;
static void C_ccall trf_3422(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3422(t0,t1);}

C_noret_decl(trf_3414)
static void C_ccall trf_3414(C_word c,C_word *av) C_noret;
static void C_ccall trf_3414(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3414(t0,t1,t2);}

C_noret_decl(trf_5056)
static void C_ccall trf_5056(C_word c,C_word *av) C_noret;
static void C_ccall trf_5056(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5056(t0,t1);}

C_noret_decl(trf_3702)
static void C_ccall trf_3702(C_word c,C_word *av) C_noret;
static void C_ccall trf_3702(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3702(t0,t1,t2);}

C_noret_decl(trf_4585)
static void C_ccall trf_4585(C_word c,C_word *av) C_noret;
static void C_ccall trf_4585(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4585(t0,t1,t2);}

C_noret_decl(trf_4565)
static void C_ccall trf_4565(C_word c,C_word *av) C_noret;
static void C_ccall trf_4565(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4565(t0,t1);}

C_noret_decl(trf_2536)
static void C_ccall trf_2536(C_word c,C_word *av) C_noret;
static void C_ccall trf_2536(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2536(t0,t1,t2);}

/* k2486 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_2488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_2488,2,av);}
C_trace("setup-api.scm:240: cons*");
t2=C_fast_retrieve(lf[93]);{
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[94];
av2[4]=lf[95];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
av2[7]=((C_word*)t0)[6];
av2[8]=((C_word*)t0)[7];
av2[9]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(10,av2);}}

/* k2371 in k2363 in setup-api#register-program in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in ... */
static void C_ccall f_2373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2373,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t1,((C_word*)t0)[2]),C_retrieve2(lf[9],"setup-api#\052registered-programs\052"));
t3=C_mutate2(&lf[9] /* (set! setup-api#*registered-programs* ...) */,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4746 in setup-api#extension-name in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4748,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_car(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3509 in k3501 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_3511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3511,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:420: file-exists?");
t4=C_fast_retrieve(lf[150]);{
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

/* k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_fcall f_3011(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3011,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=C_i_cadr(((C_word*)t0)[4]);
C_trace("setup-api.scm:329: make-pathname");
t5=C_fast_retrieve(lf[79]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
f_3014(2,av2);}}}

/* k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3014,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3109,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=t4;
t6=t2;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3160,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:350: normalize-pathname");
t8=C_fast_retrieve(lf[16]);{
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

/* k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_3017(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3017,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3022,a[2]=t5,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3022(t7,t3,((C_word*)t0)[3],t2);}

/* setup-api#extension-name in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4740,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4748,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:593: extension-name-and-version");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[147]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[147]+1);
av2[1]=t2;
tp(2,av2);}}

/* k2347 in k2344 in k2338 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in ... */
static void C_ccall f_2349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2349,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:191: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[74];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2344 in k2338 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in ... */
static void C_ccall f_2346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2346,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:191: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3516 in k3509 in k3501 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_3518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3518,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_3507(t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}
else{
t2=((C_word*)t0)[3];
f_3507(t2,C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST));}}

/* k2350 in k2347 in k2344 in k2338 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in ... */
static void C_ccall f_2352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2352,2,av);}
C_trace("setup-api.scm:191: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in ... */
static void C_ccall f_2359(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_2359,2,av);}
a=C_alloc(20);
t2=C_mutate2((C_word*)lf[76]+1 /* (set! setup-api#run-verbose ...) */,t1);
t3=C_mutate2((C_word*)lf[77]+1 /* (set! setup-api#register-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2361,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[80]+1 /* (set! setup-api#find-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2388,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2407,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5273,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t8=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4845,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4851,a[2]=((C_word*)t0)[2],a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4890,a[2]=((C_word*)t0)[3],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:612: ##sys#call-with-values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a4841 in a4835 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4842,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3193 in k3189 in k3174 in k3171 in k3168 in setup-api#move-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_3195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3195,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,C_retrieve2(lf[30],"setup-api#\052move-command\052"),((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:357: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
tp(3,av2);}}

/* k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_3775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3775,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:460: installation-prefix");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[114]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[114]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_3778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3778,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3944,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:461: make-pathname");
t4=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=lf[176];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_3772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3772,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[6]))){
t3=((C_word*)t0)[6];
C_trace("setup-api.scm:459: check-filelist");
f_3254(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[6]);
C_trace("setup-api.scm:459: check-filelist");
f_3254(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3018 in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_3020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3020,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3538 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_3539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3539,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_fcall f_3022(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3022,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:336: directory?");
t5=C_fast_retrieve(lf[131]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3027 in walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_3029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3029,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3045,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:340: directory");
t4=C_fast_retrieve(lf[130]);{
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
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:342: ensure-directory");
f_4166(t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}}

/* k2440 in k3621 in k3617 in k3600 in k3594 in k3588 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in ... */
static void C_ccall f_2442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2442,2,av);}
if(C_truep(t1)){
C_trace("setup-api.scm:235: make-pathname");
t2=C_fast_retrieve(lf[79]);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a4295 in a4289 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in ... */
static void C_ccall f_4296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4296,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4304,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:545: open-output-string");
t3=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a4289 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in ... */
static void C_ccall f_4290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4290,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4296,a[2]=((C_word*)t0)[2],a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4325,a[2]=((C_word*)t0)[3],a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:545: ##sys#call-with-values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* k4823 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4825,2,av);}
C_trace("setup-api.scm:612: g1361");
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k4700 in loop in k4630 in k4626 in setup-api#version>=? in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4702(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4702,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[4];
t5=C_u_i_car(t4);
if(C_truep(C_i_string_equal_p(t3,t5))){
t6=((C_word*)t0)[3];
t7=C_u_i_cdr(t6);
t8=((C_word*)t0)[4];
t9=C_u_i_cdr(t8);
C_trace("setup-api.scm:577: loop");
t10=((C_word*)((C_word*)t0)[5])[1];
f_4634(t10,((C_word*)t0)[2],t7,t9);}
else{
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}

/* a4286 in a4280 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in ... */
static void C_ccall f_4287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4287,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4280 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in ... */
static void C_ccall f_4281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4281,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4287,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:545: k1169");
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3793 in k3790 in g981 in k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3795,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3798,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:472: copy-file");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[129]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[129]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
tp(4,av2);}}

/* k3790 in g981 in k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_fcall f_3792(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3792,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3795,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:471: make-dest-pathname");
f_3229(t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3796 in k3793 in k3790 in g981 in k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_3798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3798,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:474: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* k3501 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_3503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3503,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3507,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:419: pathname-replace-extension");
t5=C_fast_retrieve(lf[151]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[152];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_3005(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3005,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t6=((C_word*)t0)[4];
t7=t5;
f_3011(t7,C_u_i_car(t6));}
else{
t6=t5;
f_3011(t6,((C_word*)t0)[4]);}}

/* k2462 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2464,2,av);}
C_trace("setup-api.scm:239: string-intersperse");
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[86];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2468(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2468,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2472,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2614,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:243: deployment-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t4;
tp(2,av2);}}

/* g981 in k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_fcall f_3788(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3788,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3792,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_3792(t5,C_u_i_car(t4));}
else{
t4=t3;
f_3792(t4,t2);}}

/* k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_3781(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_3781,2,av);}
a=C_alloc(24);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3784,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[10],"setup-api#\052windows\052"))){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3871,a[2]=((C_word*)t0)[5],a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(((C_word*)t0)[6],lf[82]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3908,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=t7,a[6]=((C_word)li46),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3908(t13,t3,((C_word*)t0)[6]);}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[6];
f_3784(2,av2);}}}

/* k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_3784(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_3784,2,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3788,a[2]=((C_word*)t0)[2],a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[82]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3826,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3835,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li44),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_3835(t12,t8,t1);}

/* setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4803,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_TRUE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4970,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:607: file-exists?");
t8=C_fast_retrieve(lf[150]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k3505 in k3501 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_fcall f_3507(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3507,2,t0,t1);}
a=C_alloc(8);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3499,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:423: supply-version");
f_3414(t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_fcall f_2472(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2472,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:247: keep-intermediates");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word av2[2];
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3168 in setup-api#move-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_fcall f_3170(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3170,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3173,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t4=C_i_cadr(((C_word*)t0)[3]);
C_trace("setup-api.scm:355: make-pathname");
t5=C_fast_retrieve(lf[79]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
f_3173(2,av2);}}}

/* k3171 in k3168 in setup-api#move-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_3173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3173,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3176,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:356: ensure-directory");
f_4166(t3,t2,C_SCHEME_END_OF_LIST);}

/* reg in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in ... */
static void C_fcall f_2407(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2407,3,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2415,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:224: make-pathname");
t5=C_fast_retrieve(lf[79]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[12],"setup-api#\052chicken-bin-path\052");
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3814 in k3796 in k3793 in k3790 in g981 in k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_3816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3816,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[121],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:474: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
tp(3,av2);}}

/* k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in ... */
static void C_ccall f_2109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2109,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:160: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in ... */
static void C_ccall f_2106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2106,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:160: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[57];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_4254(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4254,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4257,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
C_trace("setup-api.scm:543: print");
t5=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[189];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
C_trace("setup-api.scm:543: print");
t5=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[190];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4257(2,av2);}}}

/* k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_4257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4257,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4337,a[2]=((C_word*)t0)[5],a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:544: call-with-current-continuation");
t4=*((C_word*)lf[188]+1);{
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

/* k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in ... */
static void C_ccall f_2100(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2100,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:160: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in ... */
static void C_ccall f_2664(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_2664,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2675,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
t5=t3;
t6=t4;
if(C_truep(C_i_string_equal_p(t6,lf[85]))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2464,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2468,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:241: find-program");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[80]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[80]+1);
av2[1]=t8;
av2[2]=lf[105];
tp(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2649,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:259: string-prefix?");
t8=C_fast_retrieve(lf[107]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[108];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_4251(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_4251,2,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4412,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(((C_word*)t0)[6])?lf[193]:lf[194]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4426,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=t5,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
C_trace("setup-api.scm:535: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k3158 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_3160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3160,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3164,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:351: normalize-pathname");
t4=C_fast_retrieve(lf[16]);{
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

/* k3162 in k3158 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_3164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3164,2,av);}
C_trace("setup-api.scm:349: string-prefix?");
t2=C_fast_retrieve(lf[107]);{
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

/* k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in ... */
static void C_ccall f_2418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2418,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5269,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CSI_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2413 in reg in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in ... */
static void C_ccall f_2415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2415,2,av);}
C_trace("setup-api.scm:224: register-program");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k3174 in k3171 in k3168 in setup-api#move-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_3176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3176,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:357: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_4245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4245,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4248,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("setup-api.scm:527: pathname-replace-extension");
t4=C_fast_retrieve(lf[151]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[211];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4242,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-api.scm:526: create-temporary-file");
t4=C_fast_retrieve(lf[71]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[212];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_4248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4248,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4251,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4447,a[2]=((C_word*)t0)[9],a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:529: with-output-to-file");
t5=C_fast_retrieve(lf[68]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* exify in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_fcall f_3758(C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3758,2,t1,t2);}
a=C_alloc(8);
t3=(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))?lf[170]:C_SCHEME_FALSE);
t4=t1;
t5=t2;
t6=C_a_i_list(&a,1,t3);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3350,a[2]=t4,a[3]=t5,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:379: pathname-extension");
t11=C_fast_retrieve(lf[167]);{
C_word av2[3];
av2[0]=t11;
av2[1]=t10;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_3752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_3752,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+10);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3758,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3772,a[2]=t1,a[3]=t2,a[4]=t7,a[5]=t8,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:458: setup-install-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[20]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t9;
tp(2,av2);}}

/* k3189 in k3174 in k3171 in k3168 in setup-api#move-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_3191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3191,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3195,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:357: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* a4835 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4836,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4842,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:612: k1357");
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in ... */
static void C_ccall f_2427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2427,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5257,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_UNINSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3831 in k3824 in k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_3833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3833,2,av);}
C_trace("setup-api.scm:477: write-info");
f_2884(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in ... */
static void C_ccall f_2424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2424,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5261,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop975 in k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_fcall f_3835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3835,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3860,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:469: g981");
t5=((C_word*)t0)[4];
f_3788(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* setup-api#move-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_3166(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3166,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3170,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t5=t2;
t6=t4;
f_3170(t6,C_u_i_car(t5));}
else{
t5=t4;
f_3170(t5,t2);}}

/* a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4830(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4830,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4836,a[2]=t2,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4845,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:612: with-exception-handler");
t5=C_fast_retrieve(lf[187]);{
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

/* k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in ... */
static void C_ccall f_2421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2421,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5265,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in ... */
static void C_ccall f_4275(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4275,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4281,a[2]=t2,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4290,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li58),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:545: with-exception-handler");
t5=C_fast_retrieve(lf[187]);{
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

/* map-loop406 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in ... */
static void C_fcall f_2683(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2683,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:265: g412");
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

/* k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in ... */
static void C_ccall f_2433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2433,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2436,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5249,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_BUG_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3100 in k3107 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_3102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3102,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_3017(2,av2);}}
else{
C_trace("setup-api.scm:333: make-pathname");
t2=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in ... */
static void C_ccall f_2436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2436,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[81]+1 /* (set! setup-api#execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2651,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:289: make-parameter");
t4=C_fast_retrieve(lf[268]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in ... */
static void C_ccall f_2430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2430,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5253,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_STATUS_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in ... */
static void C_ccall f_4263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4263,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4275,a[2]=((C_word*)t0)[4],a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:545: call-with-current-continuation");
t4=*((C_word*)lf[188]+1);{
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

/* k4264 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in ... */
static void C_ccall f_4266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4266,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:545: g1173");
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k4267 in k4264 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in ... */
static void C_ccall f_4269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4269,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in ... */
static void C_ccall f_2651(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_2651,3,av);}
a=C_alloc(20);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2654,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=t3;
t9=C_i_check_list_2(t2,lf[82]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2750,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2781,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,a[6]=((C_word)li17),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_2781(t14,t10,t2);}

/* smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in ... */
static void C_ccall f_2654(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2654,3,av);}
a=C_alloc(17);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[78]);
t8=C_i_check_list_2(t2,lf[82]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2664,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2683,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li14),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_2683(t13,t9,t2);}

/* k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in ... */
static void C_ccall f_4260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4260,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:544: g1149");
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k3107 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_3109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3109,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_3017(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:331: absolute-pathname?");
t3=C_fast_retrieve(lf[132]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4410 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_4412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4412,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4415,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("setup-api.scm:541: print");
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[192];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
C_trace("setup-api.scm:530: system");
t4=C_fast_retrieve(lf[191]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k4413 in k4410 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_4415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4415,2,av);}
C_trace("setup-api.scm:530: system");
t2=C_fast_retrieve(lf[191]);{
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

/* k4210 in k4192 in k4180 in k4171 in setup-api#ensure-directory in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4212,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[183],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:521: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
tp(3,av2);}}

/* k3799 in k3796 in k3793 in k3790 in g981 in k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_3801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3801,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2621 in k2612 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_2623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2623,2,av);}
if(C_truep(t1)){
C_trace("setup-api.scm:245: host-extension");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}
else{
t2=((C_word*)t0)[3];
f_2472(t2,lf[101]);}}

/* k2673 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2675,2,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
C_trace("setup-api.scm:266: string-intersperse");
t4=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=lf[84];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_2611(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2611,2,av);}
a=C_alloc(6);
t2=(C_truep(t1)?lf[87]:lf[88]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:248: host-extension");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
tp(2,av2);}}

/* k2612 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_2614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2614,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[2];
f_2472(t4,(C_truep(t3)?lf[102]:lf[101]));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2623,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:244: feature?");
t4=C_fast_retrieve(lf[103]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[104];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2615 in k2612 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_2617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2617,2,av);}
t2=((C_word*)t0)[2];
f_2472(t2,(C_truep(t1)?lf[101]:lf[102]));}

/* k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4230,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4233,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4465,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:524: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[162]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[162]+1);
av2[1]=t3;
av2[2]=lf[218];
av2[3]=((C_word*)t0)[4];
av2[4]=t4;
tp(5,av2);}}

/* k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_4239,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4242,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4453,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:524: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[162]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[162]+1);
av2[1]=t3;
av2[2]=lf[213];
av2[3]=((C_word*)t0)[7];
av2[4]=t4;
tp(5,av2);}}

/* k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4233,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4462,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:524: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[162]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[162]+1);
av2[1]=t3;
av2[2]=lf[216];
av2[3]=((C_word*)t0)[5];
av2[4]=t4;
tp(5,av2);}}

/* k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_4236,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4456,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:524: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[162]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[162]+1);
av2[1]=t3;
av2[2]=lf[214];
av2[3]=((C_word*)t0)[6];
av2[4]=t4;
tp(5,av2);}}

/* g677 in k3027 in walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_fcall f_3030(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3030,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:339: make-pathname");
t4=C_fast_retrieve(lf[79]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3824 in k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_3826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3826,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:477: supply-version");
f_3414(t3,((C_word*)t0)[4],C_SCHEME_FALSE);}

/* k3036 in g677 in k3027 in walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_3038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3038,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:339: make-pathname");
t4=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2641 in k2647 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_2643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2643,2,av);}
C_trace("setup-api.scm:260: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k2647 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2649,2,av);}
a=C_alloc(3);
t2=(C_truep(t1)?C_retrieve2(lf[8],"setup-api#\052windows-shell\052"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:260: substring");
t4=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
C_trace("setup-api.scm:261: find-program");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[80]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[80]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_4223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,4)))){
C_save_and_reclaim((void*)f_4223,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_get_keyword(lf[186],t3,C_SCHEME_FALSE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4230,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4468,a[2]=t5,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:524: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[162]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[162]+1);
av2[1]=t6;
av2[2]=lf[219];
av2[3]=t3;
av2[4]=t7;
tp(5,av2);}}

/* k3058 in for-each-loop676 in k3043 in k3027 in walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_3060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3060,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3050(t3,((C_word*)t0)[4],t2);}

/* k2963 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_2965(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2965,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_a_i_list(&a,1,t1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2819,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
C_trace("setup-api.scm:286: repository-path");
t6=C_fast_retrieve(lf[124]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_car(t4);
C_trace("setup-api.scm:287: make-pathname");
t7=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=t6;
av2[3]=t3;
av2[4]=lf[0];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k3040 in k3036 in g677 in k3027 in walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_3042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3042,2,av);}
C_trace("setup-api.scm:339: walk");
t2=((C_word*)((C_word*)t0)[2])[1];
f_3022(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3043 in k3027 in walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_3045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3045,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3050,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3050(t5,((C_word*)t0)[3],t1);}

/* setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in ... */
static void C_ccall f_2211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_2211,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
if(C_truep(C_i_nullp(t2))){
t3=C_retrieve2(lf[7],"setup-api#\052sudo\052");
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_retrieve2(lf[7],"setup-api#\052sudo\052");
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_car(t2))){
t3=t1;
t4=lf[7] /* setup-api#*sudo* */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t5=lf[7] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
C_trace("setup-api.scm:155: print");
t6=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[48];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2080,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2180,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:158: get-environment-variable");
t8=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[61];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
C_trace("setup-api.scm:181: user-install-setup");
f_2185(t1);}}}

/* k4529 in k4526 in k4523 in k4520 in k4517 in k4514 in k4511 in k4508 in k4505 in k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in ... */
static void C_ccall f_4531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4531,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4535,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:553: conc");
t4=C_fast_retrieve(lf[199]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[222];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2972 in k2966 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_2974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2974,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:315: ##sys#print");
t3=*((C_word*)lf[51]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5196 in k5166 in a5151 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_5198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5198,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5202,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:588: ensure-string");
f_5175(t3,((C_word*)t0)[4]);}

/* k2966 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_2968(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2968,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=*((C_word*)lf[72]+1);
t3=*((C_word*)lf[72]+1);
t4=C_i_check_port_2(*((C_word*)lf[72]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[73]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2974,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:315: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[128];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[72]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2891(2,av2);}}}

/* k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_2608(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2608,2,av);}
a=C_alloc(7);
t2=(C_truep(t1)?lf[89]:lf[90]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:249: deployment-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t4;
tp(2,av2);}}

/* k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_2605(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_2605,2,av);}
a=C_alloc(18);
t2=(C_truep(t1)?lf[91]:lf[92]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2505,a[2]=t4,a[3]=t7,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:253: extra-features");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[24]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t9;
tp(2,av2);}}

/* k2978 in k2975 in k2972 in k2966 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_2980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2980,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:315: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2981 in k2978 in k2975 in k2972 in k2966 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_2983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2983,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:315: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[126];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5166 in a5151 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_fcall f_5168(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5168,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5175,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5198,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:588: ensure-string");
f_5175(t6,t2);}
else{
C_trace("setup-api.scm:590: error");
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[267];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2975 in k2972 in k2966 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_2977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2977,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:315: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[127];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4533 in k4529 in k4526 in k4523 in k4520 in k4517 in k4514 in k4511 in k4508 in k4505 in k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in ... */
static void C_ccall f_4535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4535,2,av);}
C_trace("setup-api.scm:551: test-compile");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[216];
av2[4]=t1;
tp(5,av2);}}

/* setup-api#find-header in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_4537(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4537,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4545,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:557: open-output-string");
t4=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4511 in k4508 in k4505 in k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_4513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4513,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k4508 in k4505 in k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_4510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4510,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[225];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* ensure-string in k5166 in a5151 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_fcall f_5175(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_5175,2,t1,t2);}
t3=C_i_not(t2);
if(C_truep(t3)){
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[266];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
C_trace("setup-api.scm:587: ->string");
t4=C_fast_retrieve(lf[78]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[266];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
C_trace("setup-api.scm:587: ->string");
t4=C_fast_retrieve(lf[78]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k4543 in setup-api#find-header in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4545(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4545,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4551,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:557: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[232];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4520 in k4517 in k4514 in k4511 in k4508 in k4505 in k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in ... */
static void C_ccall f_4522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4522,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[223];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5141 in tmp11876 in setup-api#setup-error-handling in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_5143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5143,2,av);}
C_trace("setup-api.scm:656: reset");
t2=C_fast_retrieve(lf[261]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4514 in k4511 in k4508 in k4505 in k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in ... */
static void C_ccall f_4516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4516,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[224];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4517 in k4514 in k4511 in k4508 in k4505 in k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in ... */
static void C_ccall f_4519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4519,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5148 in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_5150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5150,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4886 in k4863 in k4853 in a4850 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_4888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4888,2,av);}
C_trace("setup-api.scm:614: ##sys#print");
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5151 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_5152(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5152,3,av);}
a=C_alloc(4);
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=lf[265];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5168,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t2))){
t6=t2;
t7=C_u_i_length(t6);
t8=t5;
f_5168(t8,C_eqp(C_fix(2),t7));}
else{
t6=t5;
f_5168(t6,C_SCHEME_FALSE);}}}

/* k4882 in k4872 in k4869 in k4863 in k4853 in a4850 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_4884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4884,2,av);}
C_trace("setup-api.scm:614: ##sys#print");
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4878 in k4875 in k4872 in k4869 in k4863 in k4853 in a4850 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in ... */
static void C_ccall f_4880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4880,2,av);}
C_trace("setup-api.scm:614: $system");
f_5056(((C_word*)t0)[2],t1);}

/* k4523 in k4520 in k4517 in k4514 in k4511 in k4508 in k4505 in k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in ... */
static void C_ccall f_4525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4525,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:552: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k4526 in k4523 in k4520 in k4517 in k4514 in k4511 in k4508 in k4505 in k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in ... */
static void C_ccall f_4528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4528,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:552: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_4501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4501,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k5120 in g1453 in k5108 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_5122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5122,2,av);}
C_trace("setup-api.scm:644: string-append");
t2=*((C_word*)lf[254]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[257];
av2[3]=t1;
av2[4]=lf[258];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4853 in a4850 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_4855(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4855,2,av);}
a=C_alloc(5);
t2=(C_truep(t1)?t1:lf[242]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:614: open-output-string");
t5=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a4850 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4851,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4855,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:613: get-environment-variable");
t3=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[244];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5133 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_5135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5135,2,av);}
t2=C_eqp(t1,lf[165]);
if(C_truep(t2)){
C_trace("setup-api.scm:642: get-environment-variable");
t3=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[259];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5110(2,av2);}}}

/* k3091 in k3087 in k3072 in k3027 in walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_3093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3093,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,C_retrieve2(lf[28],"setup-api#\052copy-command\052"),((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:343: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
tp(3,av2);}}

/* setup-api#setup-error-handling in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_5137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5137,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5139,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate2((C_word*)lf[264]+1 /* (set! ##sys#current-exception-handler ...) */,t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4863 in k4853 in a4850 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_4865(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4865,2,av);}
a=C_alloc(10);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4871,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4888,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:614: qs");
t7=C_fast_retrieve(lf[15]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* tmp11876 in setup-api#setup-error-handling in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_5139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5139,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5143,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:655: print-error-message");
t4=C_fast_retrieve(lf[262]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=*((C_word*)lf[263]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4505 in k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_4507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4507,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4502 in k4499 in k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_4504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4504,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[226];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5101 in k5098 in k5095 in k5092 in k5089 in k5086 in k5083 in k5080 in k5074 in k5061 in k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in ... */
static void C_ccall f_5103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5103,2,av);}
C_trace("setup-api.scm:649: error");
t2=*((C_word*)lf[137]+1);{
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

/* k5098 in k5095 in k5092 in k5089 in k5086 in k5083 in k5080 in k5074 in k5061 in k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in ... */
static void C_ccall f_5100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5100,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5103,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:650: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* g1453 in k5108 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_fcall f_5114(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5114,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5122,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:645: qs");
t4=C_fast_retrieve(lf[15]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3072 in k3027 in walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_3074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3074,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:344: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k5108 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_5110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5110,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5114,a[2]=((C_word*)t0)[2],a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:639: g1453");
t3=t2;
f_5114(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_5060(2,av2);}}}

/* k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_2138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2138,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:162: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[55];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_2132(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2132,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:162: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2142 in k2139 in k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_2144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2144,2,av);}
a=C_alloc(4);
t2=C_mutate2(&lf[31] /* (set! setup-api#*chmod-command* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:163: open-output-string");
t4=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2146 in k2142 in k2139 in k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in ... */
static void C_ccall f_2148(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2148,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:163: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2139 in k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_2141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2141,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:162: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* for-each-loop676 in k3043 in k3027 in walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_fcall f_3050(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3050,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3060,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:337: g677");
t5=((C_word*)t0)[3];
f_3030(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2282 in k2273 in loop in a2264 in a2254 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in ... */
static void C_ccall f_2284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2284,2,av);}
C_trace("setup-api.scm:201: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2271(t2,((C_word*)t0)[3]);}

/* k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4483(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4483,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[229];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_3567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3567,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:431: repo-path");
f_4104(t3,C_SCHEME_END_OF_LIST);}

/* k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in ... */
static void C_ccall f_2116(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2116,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:161: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_3564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3564,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
C_trace("setup-api.scm:430: check-filelist");
f_3254(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace("setup-api.scm:430: check-filelist");
f_3254(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in ... */
static void C_ccall f_2112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2112,2,av);}
a=C_alloc(4);
t2=C_mutate2(&lf[29] /* (set! setup-api#*remove-command* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:161: open-output-string");
t4=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4875 in k4872 in k4869 in k4863 in k4853 in a4850 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_4877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4877,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:614: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k4872 in k4869 in k4863 in k4853 in a4850 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_4874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4874,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4884,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:615: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k4869 in k4863 in k4853 in a4850 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_4871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4871,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:614: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[243];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* setup-api#make-dest-pathname in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_fcall f_3229(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3229,3,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_listp(t3))){
t4=C_i_cadr(t3);
C_trace("setup-api.scm:364: make-dest-pathname");
t6=t1;
t7=t2;
t8=t4;
t1=t6;
t2=t7;
t3=t8;
goto loop;}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3249,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:365: absolute-pathname?");
t5=C_fast_retrieve(lf[132]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4489,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k3225 in setup-api#remove-file* in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_3227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3227,2,av);}
a=C_alloc(9);
t2=C_a_i_list(&a,2,C_retrieve2(lf[29],"setup-api#\052remove-command\052"),t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:359: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
tp(3,av2);}}

/* k3087 in k3072 in k3027 in walk in k3015 in k3012 in k3009 in k3003 in setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_3089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3089,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3093,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:345: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_2128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2128,2,av);}
a=C_alloc(4);
t2=C_mutate2(&lf[30] /* (set! setup-api#*move-command* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:162: open-output-string");
t4=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2125,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:161: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_3554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_3554,c,av);}
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
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3564,a[2]=t7,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:429: setup-install-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[20]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t8;
tp(2,av2);}}

/* k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_3570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3570,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:432: repo-path");
f_4104(t2,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in ... */
static void C_ccall f_2122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2122,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:161: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[56];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* setup-api#remove-file* in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_3211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3211,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:360: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_3587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3587,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_3590(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:438: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_3584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3584,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:436: copy-file");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[129]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[129]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
tp(4,av2);}}

/* k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_fcall f_3581(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3581,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:435: make-dest-pathname");
f_3229(t3,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k2171 in k2168 in k2162 in k2158 in k2155 in k2152 in k2146 in k2142 in k2139 in k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in ... */
static void C_ccall f_2173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2173,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2176,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:164: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k2174 in k2171 in k2168 in k2162 in k2158 in k2155 in k2152 in k2146 in k2142 in k2139 in k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in ... */
static void C_ccall f_2176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2176,2,av);}
t2=C_mutate2(&lf[33] /* (set! setup-api#*mkdir-command* ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2168 in k2162 in k2158 in k2155 in k2152 in k2146 in k2142 in k2139 in k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in ... */
static void C_ccall f_2170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2170,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:164: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[52];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_fcall f_3577(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3577,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3581,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_3581(t5,C_u_i_car(t4));}
else{
t4=t3;
f_3581(t4,t2);}}

/* k2862 in verb in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_2864(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2864,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[72]+1);
t3=*((C_word*)lf[72]+1);
t4=C_i_check_port_2(*((C_word*)lf[72]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[73]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:303: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[115];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[72]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_3573(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_3573,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3577,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[82]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3693,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3702,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li40),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3702(t13,t9,((C_word*)t0)[3]);}

/* setup-api#user-install-setup in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in ... */
static void C_fcall f_2185(C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_2185,1,t1);}
t2=lf[7] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=t1;
t4=C_mutate2(&lf[28] /* (set! setup-api#*copy-command* ...) */,lf[35]);
t5=C_mutate2(&lf[29] /* (set! setup-api#*remove-command* ...) */,lf[36]);
t6=C_mutate2(&lf[30] /* (set! setup-api#*move-command* ...) */,lf[37]);
t7=C_mutate2(&lf[31] /* (set! setup-api#*chmod-command* ...) */,lf[38]);
t8=C_mutate2(&lf[32] /* (set! setup-api#*ranlib-command* ...) */,lf[39]);
t9=t3;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t3=t1;
t4=C_mutate2(&lf[28] /* (set! setup-api#*copy-command* ...) */,lf[40]);
t5=C_mutate2(&lf[29] /* (set! setup-api#*remove-command* ...) */,lf[41]);
t6=C_mutate2(&lf[30] /* (set! setup-api#*move-command* ...) */,lf[42]);
t7=C_mutate2(&lf[31] /* (set! setup-api#*chmod-command* ...) */,lf[43]);
t8=C_mutate2(&lf[32] /* (set! setup-api#*ranlib-command* ...) */,lf[44]);
t9=C_mutate2(&lf[33] /* (set! setup-api#*mkdir-command* ...) */,lf[45]);
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k2178 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in ... */
static void C_ccall f_2180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2180,2,av);}
if(C_truep(t1)){
t2=t1;
C_trace("setup-api.scm:158: qs");
t3=C_fast_retrieve(lf[15]);{
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
else{
C_trace("setup-api.scm:158: qs");
t2=C_fast_retrieve(lf[15]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[59];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* a4446 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_4447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4447,2,av);}
C_trace("setup-api.scm:529: g1138");
t2=*((C_word*)lf[210]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2871 in k2868 in k2862 in verb in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_2873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2873,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:303: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2868 in k2862 in verb in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_2870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2870,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:303: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2152 in k2146 in k2142 in k2139 in k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in ... */
static void C_ccall f_2154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2154,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:163: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[54];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2155 in k2152 in k2146 in k2142 in k2139 in k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in ... */
static void C_ccall f_2157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2157,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:163: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k2874 in k2871 in k2868 in k2862 in verb in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_2876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2876,2,av);}
C_trace("setup-api.scm:303: ##sys#flush-output");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[110]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[110]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_4475(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4475,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4483,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:552: open-output-string");
t5=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_fcall f_2884(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,2)))){
C_save_and_reclaim_args((void *)trf_2884,4,t1,t2,t3,t4);}
a=C_alloc(16);
t5=C_a_i_cons(&a,2,lf[120],t3);
t6=C_a_i_cons(&a,2,t5,t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2891,a[2]=t1,a[3]=t7,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2968,a[2]=t8,a[3]=t7,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:315: setup-verbose-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word av2[2];
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t9;
tp(2,av2);}}

/* k2162 in k2158 in k2155 in k2152 in k2146 in k2142 in k2139 in k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in ... */
static void C_ccall f_2164(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2164,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2170,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:164: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2158 in k2155 in k2152 in k2146 in k2142 in k2139 in k2136 in k2130 in k2126 in k2123 in k2120 in k2114 in k2110 in k2107 in k2104 in k2098 in k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in ... */
static void C_ccall f_2160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2160,2,av);}
a=C_alloc(4);
t2=C_mutate2(&lf[32] /* (set! setup-api#*ranlib-command* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:164: open-output-string");
t4=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* setup-api#check-filelist in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_fcall f_3254(C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_3254,2,t1,t2);}
a=C_alloc(13);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(t2,lf[82]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3305,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3305(t11,t1,t2);}

/* a4464 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4465,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[217];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4461 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4462,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[215];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4467 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4468,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_retrieve2(lf[3],"setup-api#\052cxx\052");
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_retrieve2(lf[3],"setup-api#\052cxx\052");
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_retrieve2(lf[2],"setup-api#\052cc\052");
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_retrieve2(lf[2],"setup-api#\052cc\052");
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3384 in setup-api#supply-version in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_3386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3386,2,av);}
if(C_truep(t1)){
if(C_truep(C_i_pairp(t1))){
t2=C_i_cadr(t1);
t3=C_i_equalp(lf[145],t2);
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?lf[146]:C_i_cadr(t1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[146];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[146];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_2891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2891,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:316: ->string");
t3=C_fast_retrieve(lf[78]);{
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

/* k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_2894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2894,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2965,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:317: repo-path");
f_4104(t4,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* setup-api#remove-extension in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4978,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4982,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("setup-api.scm:629: repository-path");
t5=C_fast_retrieve(lf[124]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_car(t3);
f_4982(2,av2);}}}

/* k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4970(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4970,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
if(C_truep(C_retrieve2(lf[7],"setup-api#\052sudo\052"))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4825,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4830,a[2]=((C_word*)t0)[3],a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:612: call-with-current-continuation");
t4=*((C_word*)lf[188]+1);{
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
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4905,a[2]=t3,a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4905(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}}
else{
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-api.scm:609: error");
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[249];
av2[3]=lf[250];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k2895 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_2897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2897,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2900,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:318: ensure-directory");
f_4166(t3,t2,C_SCHEME_END_OF_LIST);}

/* setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in ... */
static void C_ccall f_2236(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2236,5,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2240,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2340,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:191: setup-verbose-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in ... */
static void C_ccall f_2234(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2234,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[62]+1 /* (set! setup-api#abort-setup ...) */,t1);
t3=C_mutate2((C_word*)lf[63]+1 /* (set! setup-api#patch ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2236,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:208: make-parameter");
t5=C_fast_retrieve(lf[268]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4495,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k4496 in k4493 in k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4498,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[227];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3247 in setup-api#make-dest-pathname in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_3249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3249,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace("setup-api.scm:367: make-pathname");
t2=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k4490 in k4487 in k4481 in setup-api#find-library in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4492,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:552: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[228];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3887 in k3883 in g953 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_3889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3889,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4626 in setup-api#version>=? in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4628,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4632,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:565: version->list");
f_4565(t3,((C_word*)t0)[4]);}

/* k3883 in g953 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_3885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3885,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3889,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
C_trace("setup-api.scm:465: exify");
f_3758(t3,t4);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(964))){
C_save(t1);
C_rereclaim2(964*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,288);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[11]=C_h_intern(&lf[11],24,"setup-api#host-extension");
lf[13]=C_h_intern(&lf[13],24,"setup-api#chicken-prefix");
lf[14]=C_h_intern(&lf[14],19,"setup-api#shellpath");
lf[15]=C_h_intern(&lf[15],2,"qs");
lf[16]=C_h_intern(&lf[16],18,"normalize-pathname");
lf[18]=C_h_intern(&lf[18],30,"setup-api#setup-root-directory");
lf[19]=C_h_intern(&lf[19],28,"setup-api#setup-verbose-mode");
lf[20]=C_h_intern(&lf[20],28,"setup-api#setup-install-mode");
lf[21]=C_h_intern(&lf[21],25,"setup-api#deployment-mode");
lf[22]=C_h_intern(&lf[22],22,"setup-api#program-path");
lf[23]=C_h_intern(&lf[23],28,"setup-api#keep-intermediates");
lf[24]=C_h_intern(&lf[24],24,"setup-api#extra-features");
lf[25]=C_h_intern(&lf[25],17,"register-feature!");
lf[26]=C_h_intern(&lf[26],27,"setup-api#extra-nonfeatures");
lf[27]=C_h_intern(&lf[27],19,"unregister-feature!");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\004copy");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\011del /Q /S");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\004move");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\005chmod");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\006ranlib");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\006rm -fr");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\002mv");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\005chmod");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\006ranlib");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\005mkdir");
lf[46]=C_h_intern(&lf[46],22,"setup-api#sudo-install");
lf[47]=C_h_intern(&lf[47],5,"print");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\0001Warning: cannot install as superuser with Windows");
lf[49]=C_h_intern(&lf[49],7,"sprintf");
lf[50]=C_h_intern(&lf[50],17,"get-output-string");
lf[51]=C_h_intern(&lf[51],9,"\003sysprint");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\006 mkdir");
lf[53]=C_h_intern(&lf[53],18,"open-output-string");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\007 ranlib");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\006 chmod");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\003 mv");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\007 rm -rf");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\006 cp -r");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\004sudo");
lf[60]=C_h_intern(&lf[60],24,"get-environment-variable");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\004SUDO");
lf[62]=C_h_intern(&lf[62],21,"setup-api#abort-setup");
lf[63]=C_h_intern(&lf[63],15,"setup-api#patch");
lf[64]=C_h_intern(&lf[64],10,"write-line");
lf[65]=C_h_intern(&lf[65],19,"irregex-replace/all");
lf[66]=C_h_intern(&lf[66],9,"read-line");
lf[67]=C_h_intern(&lf[67],20,"with-input-from-file");
lf[68]=C_h_intern(&lf[68],19,"with-output-to-file");
lf[70]=C_h_intern(&lf[70],16,"\003syswrite-char-0");
lf[71]=C_h_intern(&lf[71],21,"create-temporary-file");
lf[72]=C_h_intern(&lf[72],19,"\003sysstandard-output");
lf[73]=C_h_intern(&lf[73],6,"printf");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\011patching ");
lf[76]=C_h_intern(&lf[76],21,"setup-api#run-verbose");
lf[77]=C_h_intern(&lf[77],26,"setup-api#register-program");
lf[78]=C_h_intern(&lf[78],8,"->string");
lf[79]=C_h_intern(&lf[79],13,"make-pathname");
lf[80]=C_h_intern(&lf[80],22,"setup-api#find-program");
lf[81]=C_h_intern(&lf[81],17,"setup-api#execute");
lf[82]=C_h_intern(&lf[82],3,"map");
lf[83]=C_h_intern(&lf[83],18,"string-intersperse");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\002-k");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\011-deployed");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[93]=C_h_intern(&lf[93],5,"cons\052");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\023compiling-extension");
lf[96]=C_h_intern(&lf[96],6,"append");
lf[97]=C_h_intern(&lf[97],17,"\003sysstring-append");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\014-no-feature ");
lf[99]=C_h_intern(&lf[99],14,"symbol->string");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\011-feature ");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\013-setup-mode");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[103]=C_h_intern(&lf[103],8,"feature\077");
lf[104]=C_h_intern(&lf[104],14,"\000cross-chicken");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[106]=C_h_intern(&lf[106],9,"substring");
lf[107]=C_h_intern(&lf[107],14,"string-prefix\077");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\002./");
lf[109]=C_h_intern(&lf[109],8,"for-each");
lf[110]=C_h_intern(&lf[110],16,"\003sysflush-output");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[112]=C_h_intern(&lf[112],28,"setup-api#destination-prefix");
lf[113]=C_h_intern(&lf[113],24,"setup-api#runtime-prefix");
lf[114]=C_h_intern(&lf[114],29,"setup-api#installation-prefix");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\010  mkdir ");
lf[116]=C_h_intern(&lf[116],16,"create-directory");
lf[117]=C_h_intern(&lf[117],2,"-p");
lf[118]=C_h_intern(&lf[118],34,"setup-api#create-directory/parents");
lf[120]=C_h_intern(&lf[120],5,"files");
lf[121]=C_h_intern(&lf[121],3,"a+r");
lf[122]=C_h_intern(&lf[122],2,"pp");
lf[124]=C_h_intern(&lf[124],15,"repository-path");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\004 -> ");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\015writing info ");
lf[129]=C_h_intern(&lf[129],19,"setup-api#copy-file");
lf[130]=C_h_intern(&lf[130],9,"directory");
lf[131]=C_h_intern(&lf[131],10,"directory\077");
lf[132]=C_h_intern(&lf[132],18,"absolute-pathname\077");
lf[133]=C_h_intern(&lf[133],19,"setup-api#move-file");
lf[134]=C_h_intern(&lf[134],22,"setup-api#remove-file\052");
lf[137]=C_h_intern(&lf[137],5,"error");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid file-specification");
lf[139]=C_h_intern(&lf[139],5,"every");
lf[140]=C_h_intern(&lf[140],7,"string\077");
lf[142]=C_h_intern(&lf[142],7,"version");
lf[143]=C_h_intern(&lf[143],8,"egg-name");
lf[144]=C_h_intern(&lf[144],24,"setup-api#extension-name");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\007unknown");
lf[147]=C_h_intern(&lf[147],36,"setup-api#extension-name-and-version");
lf[148]=C_h_intern(&lf[148],28,"setup-api#standard-extension");
lf[149]=C_h_intern(&lf[149],27,"setup-api#install-extension");
lf[150]=C_h_intern(&lf[150],12,"file-exists\077");
lf[151]=C_h_intern(&lf[151],26,"pathname-replace-extension");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[154]=C_h_intern(&lf[154],3,"csc");
lf[155]=C_h_intern(&lf[155],8,"-dynamic");
lf[156]=C_h_intern(&lf[156],15,"-optimize-level");
lf[157]=C_h_intern(&lf[157],12,"-debug-level");
lf[158]=C_h_intern(&lf[158],20,"-emit-import-library");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\006inline");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\012import.scm");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\003scm");
lf[162]=C_h_intern(&lf[162],15,"\003sysget-keyword");
lf[163]=C_h_intern(&lf[163],5,"\000info");
lf[164]=C_h_intern(&lf[164],6,"static");
lf[165]=C_h_intern(&lf[165],6,"macosx");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[167]=C_h_intern(&lf[167],18,"pathname-extension");
lf[168]=C_h_intern(&lf[168],16,"software-version");
lf[169]=C_h_intern(&lf[169],25,"setup-api#install-program");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\003exe");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[172]=C_h_intern(&lf[172],26,"\003sysload-dynamic-extension");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[177]=C_h_intern(&lf[177],24,"setup-api#install-script");
lf[178]=C_h_intern(&lf[178],4,"a+rx");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\014lib/chicken/");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000Acannot create directory: a file with the same name already exists");
lf[183]=C_h_intern(&lf[183],3,"a+x");
lf[184]=C_h_intern(&lf[184],18,"pathname-directory");
lf[185]=C_h_intern(&lf[185],21,"setup-api#try-compile");
lf[186]=C_h_intern(&lf[186],4,"\000c++");
lf[187]=C_h_intern(&lf[187],22,"with-exception-handler");
lf[188]=C_h_intern(&lf[188],30,"call-with-current-continuation");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\012succeeded.");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\007failed.");
lf[191]=C_h_intern(&lf[191],6,"system");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\007 >nul: ");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\014 >/dev/null ");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\0042>&1");
lf[199]=C_h_intern(&lf[199],4,"conc");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\004 -o ");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\002-L");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[210]=C_h_intern(&lf[210],7,"display");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\001o");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[213]=C_h_intern(&lf[213],13,"\000compile-only");
lf[214]=C_h_intern(&lf[214],5,"\000verb");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[216]=C_h_intern(&lf[216],8,"\000ldflags");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[218]=C_h_intern(&lf[218],7,"\000cflags");
lf[219]=C_h_intern(&lf[219],3,"\000cc");
lf[220]=C_h_intern(&lf[220],22,"setup-api#test-compile");
lf[221]=C_h_intern(&lf[221],22,"setup-api#find-library");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\017(); return 0; }");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\015int main() { ");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\003();");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\005char ");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\012extern \042C\042");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\022#ifdef __cplusplus");
lf[230]=C_h_intern(&lf[230],21,"setup-api#find-header");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\033>\012int main() { return 0; }\012");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\012#include <");
lf[233]=C_h_intern(&lf[233],20,"setup-api#version>=\077");
lf[234]=C_h_intern(&lf[234],13,"irregex-split");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\006[-\134._]");
lf[236]=C_h_intern(&lf[236],8,"string>\077");
lf[237]=C_h_intern(&lf[237],27,"setup-api#extension-version");
lf[238]=C_h_intern(&lf[238],12,"string-null\077");
lf[239]=C_h_intern(&lf[239],19,"setup-api#read-info");
lf[240]=C_h_intern(&lf[240],4,"read");
lf[241]=C_h_intern(&lf[241],26,"setup-api#remove-directory");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\004sudo");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\010 rm -fr ");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\004SUDO");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[246]=C_h_intern(&lf[246],11,"delete-file");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[248]=C_h_intern(&lf[248],16,"delete-directory");
lf[249]=C_h_intern(&lf[249],16,"remove-directory");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000#cannot remove - directory not found");
lf[251]=C_h_intern(&lf[251],26,"setup-api#remove-extension");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000.shell command failed with nonzero exit status ");
lf[254]=C_h_intern(&lf[254],13,"string-append");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\037/usr/bin/env DYLD_LIBRARY_PATH=");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\021DYLD_LIBRARY_PATH");
lf[260]=C_h_intern(&lf[260],30,"setup-api#setup-error-handling");
lf[261]=C_h_intern(&lf[261],5,"reset");
lf[262]=C_h_intern(&lf[262],19,"print-error-message");
lf[263]=C_h_intern(&lf[263],18,"\003sysstandard-error");
lf[264]=C_h_intern(&lf[264],29,"\003syscurrent-exception-handler");
lf[265]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\000\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\042invalid extension-name-and-version");
lf[268]=C_h_intern(&lf[268],14,"make-parameter");
lf[269]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\000\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\026CHICKEN_INSTALL_PREFIX");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\013chicken-bug");
lf[272]=C_h_intern(&lf[272],17,"\003syspeek-c-string");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\016chicken-status");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\021chicken-uninstall");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\017chicken-install");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\003csi");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[279]=C_h_intern(&lf[279],4,"exit");
lf[280]=C_h_intern(&lf[280],17,"current-directory");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[284]=C_h_intern(&lf[284],13,"chicken-setup");
lf[285]=C_h_intern(&lf[285],7,"windows");
lf[286]=C_h_intern(&lf[286],14,"build-platform");
lf[287]=C_h_intern(&lf[287],13,"software-type");
C_register_lf2(lf,288,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1882,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k4619 in version->list in setup-api#version>=? in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4621,2,av);}
C_trace("setup-api.scm:563: irregex-split");
t2=C_fast_retrieve(lf[234]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[235];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* loop in k4630 in k4626 in setup-api#version>=? in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_fcall f_4634(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4634,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_nullp(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
if(C_truep(C_i_numberp(t5))){
t6=C_i_car(t3);
if(C_truep(C_i_numberp(t6))){
t7=t2;
t8=C_u_i_car(t7);
t9=t3;
t10=C_u_i_car(t9);
t11=C_i_greaterp(t8,t10);
if(C_truep(t11)){
t12=t1;{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t12=t2;
t13=C_u_i_car(t12);
t14=t3;
t15=C_u_i_car(t14);
if(C_truep(C_i_nequalp(t13,t15))){
t16=t2;
t17=C_u_i_cdr(t16);
t18=t3;
t19=C_u_i_cdr(t18);
C_trace("setup-api.scm:572: loop");
t21=t1;
t22=t17;
t23=t19;
t1=t21;
t2=t22;
t3=t23;
goto loop;}
else{
t16=t1;{
C_word av2[2];
av2[0]=t16;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}}
else{
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t6=C_i_car(t3);
t7=C_i_numberp(t6);
if(C_truep(t7)){
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4702,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_u_i_car(t9);
t11=t3;
t12=C_u_i_car(t11);
C_trace("setup-api.scm:574: string>?");
t13=*((C_word*)lf[236]+1);{
C_word av2[4];
av2[0]=t13;
av2[1]=t8;
av2[2]=t10;
av2[3]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}}}}}

/* k4192 in k4180 in k4171 in setup-api#ensure-directory in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4194,2,av);}
a=C_alloc(3);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:521: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k2919 in k2901 in k2898 in k2895 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_2921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2921,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[121],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:324: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
tp(3,av2);}}

/* g953 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_fcall f_3871(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3871,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_listp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3885,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
C_trace("setup-api.scm:465: exify");
f_3758(t3,t4);}
else{
C_trace("setup-api.scm:466: exify");
f_3758(t1,t2);}}

/* k2925 in k2922 in k2898 in k2895 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_2927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2927,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:322: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* a2254 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in ... */
static void C_ccall f_2255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2255,2,av);}
a=C_alloc(5);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2265,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:195: with-input-from-file");
t4=C_fast_retrieve(lf[67]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2922 in k2898 in k2895 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_2924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2924,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[4],a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:321: with-output-to-file");
t5=C_fast_retrieve(lf[68]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4428 in k4424 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_4430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,7)))){
C_save_and_reclaim((void *)f_4430,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[206];
f_4434(2,av2);}}
else{
C_trace("setup-api.scm:538: conc");
t4=C_fast_retrieve(lf[199]);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[207];
av2[3]=C_retrieve2(lf[6],"setup-api#\052target-lib-home\052");
av2[4]=lf[208];
av2[5]=((C_word*)t0)[9];
av2[6]=lf[209];
av2[7]=C_retrieve2(lf[5],"setup-api#\052target-libs\052");
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}}

/* k4630 in k4626 in setup-api#version>=? in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4632(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4632,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4634,a[2]=t3,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4634(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4432 in k4428 in k4424 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in ... */
static void C_ccall f_4434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,16)))){
C_save_and_reclaim((void *)f_4434,2,av);}
t2=(C_truep(C_retrieve2(lf[10],"setup-api#\052windows\052"))?lf[195]:lf[196]);
t3=(C_truep(((C_word*)t0)[2])?lf[197]:lf[198]);
C_trace("setup-api.scm:531: conc");
t4=C_fast_retrieve(lf[199]);{
C_word *av2;
if(c >= 17) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(17);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[200];
av2[4]=((C_word*)t0)[5];
av2[5]=lf[201];
av2[6]=((C_word*)t0)[6];
av2[7]=lf[202];
av2[8]=C_retrieve2(lf[4],"setup-api#\052target-cflags\052");
av2[9]=lf[203];
av2[10]=((C_word*)t0)[7];
av2[11]=lf[204];
av2[12]=((C_word*)t0)[8];
av2[13]=lf[205];
av2[14]=t1;
av2[15]=t2;
av2[16]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(17,av2);}}

/* k3348 in exify in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_3350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3350,2,av);}
if(C_truep(t1)){
if(C_truep(C_i_equalp(lf[171],t1))){
t2=C_fast_retrieve(lf[172]);
t3=C_fast_retrieve(lf[172]);
C_trace("setup-api.scm:378: pathname-replace-extension");
t4=C_fast_retrieve(lf[151]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fast_retrieve(lf[172]);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(C_i_equalp(lf[173],t1))){
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
C_trace("setup-api.scm:378: pathname-replace-extension");
t2=C_fast_retrieve(lf[151]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[174];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
C_trace("setup-api.scm:378: pathname-replace-extension");
t2=C_fast_retrieve(lf[151]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[175];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}
else{
C_trace("setup-api.scm:378: pathname-replace-extension");
t2=C_fast_retrieve(lf[151]);{
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
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}}
else{
C_trace("setup-api.scm:378: pathname-replace-extension");
t2=C_fast_retrieve(lf[151]);{
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
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k4186 in k4180 in k4171 in setup-api#ensure-directory in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4188,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace("setup-api.scm:517: error");
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[182];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k4180 in k4171 in setup-api#ensure-directory in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4182,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:516: directory?");
t3=C_fast_retrieve(lf[131]);{
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
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:519: create-directory/parents");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k4424 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_4426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4426,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("setup-api.scm:535: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}

/* f_5226 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_5226(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5226,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5230,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:309: verb");
f_2857(t3,t2);}

/* k5220 */
static void C_ccall f_5222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5222,2,av);}
C_trace("setup-api.scm:307: create-directory");
t2=C_fast_retrieve(lf[116]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in ... */
static void C_ccall f_2084(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2084,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:159: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* verb in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_fcall f_2857(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2857,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2864,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:302: setup-verbose-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word av2[2];
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t3;
tp(2,av2);}}

/* k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in ... */
static void C_ccall f_2080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2080,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2084,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:159: open-output-string");
t4=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2901 in k2898 in k2895 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_2903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2903,2,av);}
a=C_alloc(3);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:324: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* k2898 in k2895 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_2900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2900,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[7],"setup-api#\052sudo\052"))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2924,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:320: create-temporary-file");
t4=C_fast_retrieve(lf[71]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[4],a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:323: with-output-to-file");
t4=C_fast_retrieve(lf[68]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k3617 in k3600 in k3594 in k3588 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in ... */
static void C_ccall f_3619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3619,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3623,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:445: runtime-prefix");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[113]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[113]+1);
av2[1]=t3;
tp(2,av2);}}

/* k2273 in loop in a2264 in a2254 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in ... */
static void C_ccall f_2275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2275,2,av);}
a=C_alloc(7);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2291,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:200: irregex-replace/all");
t4=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* a4452 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4453,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4455 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4456,2,av);}
C_trace("setup-api.scm:525: setup-verbose-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t1;
tp(2,av2);}}

/* loop in a2264 in a2254 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in ... */
static void C_fcall f_2271(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2271,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2275,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:198: read-line");
t3=C_fast_retrieve(lf[66]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in ... */
static void C_ccall f_2093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2093,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2096,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:159: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k2094 in k2091 in k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in ... */
static void C_ccall f_2096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2096,2,av);}
a=C_alloc(4);
t2=C_mutate2(&lf[28] /* (set! setup-api#*copy-command* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:160: open-output-string");
t4=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3270 in map-loop731 in setup-api#check-filelist in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_3272(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3272,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_u_i_car(((C_word*)t0)[3]);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_a_i_list2(&a,2,t2,t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
C_trace("setup-api.scm:374: error");
t5=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[138];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}
else{
C_trace("setup-api.scm:374: error");
t2=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[138];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}}

/* k2088 in k2082 in k2078 in setup-api#sudo-install in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in ... */
static void C_ccall f_2090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2090,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:159: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[58];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in ... */
static void C_ccall f_2240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2240,2,av);}
a=C_alloc(6);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:193: with-output-to-file");
t4=C_fast_retrieve(lf[68]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:202: create-temporary-file");
t3=C_fast_retrieve(lf[71]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2559 in map-loop363 in k2526 in k2509 in k2503 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_2561(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2561,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2536(t6,((C_word*)t0)[5],t5);}

/* k2295 in k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in ... */
static void C_ccall f_2297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2297,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:205: open-output-string");
t3=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2289 in k2273 in loop in a2264 in a2254 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in ... */
static void C_ccall f_2291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2291,2,av);}
C_trace("setup-api.scm:200: write-line");
t2=C_fast_retrieve(lf[64]);{
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

/* k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in ... */
static void C_ccall f_2294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_2294,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list2(&a,2,t2,t2);
C_trace("setup-api.scm:203: patch");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[63]);
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[63]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}

/* k4143 in k4140 in k4134 in k4124 in k4118 in setup-api#repo-path in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4145,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:507: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k4140 in k4134 in k4124 in k4118 in setup-api#repo-path in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4142,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_fudge(C_fix(42));
C_trace("setup-api.scm:507: ##sys#print");
t4=*((C_word*)lf[51]+1);{
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
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4146 in k4143 in k4140 in k4134 in k4124 in k4118 in setup-api#repo-path in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_4148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4148,2,av);}
C_trace("setup-api.scm:505: make-pathname");
t2=C_fast_retrieve(lf[79]);{
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

/* k3621 in k3617 in k3600 in k3594 in k3588 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in ... */
static void C_ccall f_3623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3623,2,av);}
a=C_alloc(4);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2442,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:234: runtime-prefix");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[113]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[113]+1);
av2[1]=t4;
tp(2,av2);}}}

/* map-loop336 in k2503 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_fcall f_2570(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2570,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2595,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2502,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:252: symbol->string");
t7=*((C_word*)lf[99]+1);{
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

/* k3858 in map-loop975 in k3782 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3860,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3835(t6,((C_word*)t0)[5],t5);}

/* k3627 in k3588 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_fcall f_3629(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3629,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:443: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word av2[3];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
f_3596(2,av2);}}}

/* a2264 in a2254 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in ... */
static void C_ccall f_2265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2265,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2271,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2271(t5,t1);}

/* a2956 in k2898 in k2895 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_2957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2957,2,av);}
t2=C_fast_retrieve(lf[122]);
C_trace("setup-api.scm:323: g635");
t3=C_fast_retrieve(lf[122]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4171 in setup-api#ensure-directory in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4173(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4173,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:515: file-exists?");
t5=C_fast_retrieve(lf[150]);{
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
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4174 in k4171 in setup-api#ensure-directory in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4176,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop731 in setup-api#check-filelist in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_fcall f_3305(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3305,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3330,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
if(C_truep(C_i_stringp(t6))){
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3272,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t6))){
C_trace("setup-api.scm:372: every");
t8=C_fast_retrieve(lf[139]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=*((C_word*)lf[140]+1);
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_3272(2,av2);}}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2940 in k2925 in k2922 in k2898 in k2895 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_2942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2942,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2946,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:322: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* a2947 in k2922 in k2898 in k2895 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_2948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2948,2,av);}
t2=C_fast_retrieve(lf[122]);
C_trace("setup-api.scm:321: g623");
t3=C_fast_retrieve(lf[122]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2944 in k2940 in k2925 in k2922 in k2898 in k2895 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_2946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2946,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,C_retrieve2(lf[30],"setup-api#\052move-command\052"),((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:322: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
tp(3,av2);}}

/* k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in ... */
static void C_ccall f_2835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2835,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[112]+1 /* (set! setup-api#destination-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:290: make-parameter");
t4=C_fast_retrieve(lf[268]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in ... */
static void C_ccall f_2839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2839,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[113]+1 /* (set! setup-api#runtime-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:293: get-environment-variable");
t4=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[270];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* setup-api#ensure-directory in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_fcall f_4166(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4166,3,t1,t2,t3);}
a=C_alloc(4);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4173,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=t2;
f_4173(2,av2);}}
else{
C_trace("setup-api.scm:514: pathname-directory");
t7=C_fast_retrieve(lf[184]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k3328 in map-loop731 in setup-api#check-filelist in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_3330(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3330,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3305(t6,((C_word*)t0)[5],t5);}

/* k3642 in k3627 in k3588 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in ... */
static void C_ccall f_3644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3644,2,av);}
a=C_alloc(9);
t2=C_a_i_list(&a,2,C_retrieve2(lf[32],"setup-api#\052ranlib-command\052"),t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:443: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
tp(3,av2);}}

/* k4109 in setup-api#repo-path in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4111,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4114,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:510: ensure-directory");
f_4166(t3,t2,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k4112 in k4109 in setup-api#repo-path in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4114,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* setup-api#repo-path in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_fcall f_4104(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4104,2,t1,t2);}
a=C_alloc(6);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4111,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4120,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:501: deployment-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word av2[2];
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t6;
tp(2,av2);}}
else{
C_trace("setup-api.scm:509: repository-path");
t6=C_fast_retrieve(lf[124]);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in ... */
static void C_ccall f_2843(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(68,c,5)))){
C_save_and_reclaim((void *)f_2843,2,av);}
a=C_alloc(68);
t2=t1;
t3=C_mutate2((C_word*)lf[114]+1 /* (set! setup-api#installation-prefix ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2844,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
t5=(C_truep(C_retrieve2(lf[10],"setup-api#\052windows\052"))?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5218,a[2]=t4,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5226,a[2]=t4,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t6=C_mutate2((C_word*)lf[118]+1 /* (set! setup-api#create-directory/parents ...) */,t5);
t7=C_mutate2(&lf[119] /* (set! setup-api#write-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2884,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[129]+1 /* (set! setup-api#copy-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[133]+1 /* (set! setup-api#move-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3166,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[134]+1 /* (set! setup-api#remove-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3211,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2(&lf[135] /* (set! setup-api#make-dest-pathname ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3229,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2(&lf[136] /* (set! setup-api#check-filelist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3254,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2(&lf[141] /* (set! setup-api#supply-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3414,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[148]+1 /* (set! setup-api#standard-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3457,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[149]+1 /* (set! setup-api#install-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3554,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[169]+1 /* (set! setup-api#install-program ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3752,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[177]+1 /* (set! setup-api#install-script ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3962,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2(&lf[125] /* (set! setup-api#repo-path ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4104,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2(&lf[123] /* (set! setup-api#ensure-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4166,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[185]+1 /* (set! setup-api#try-compile ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4223,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[220]+1 /* (set! setup-api#test-compile ...) */,C_fast_retrieve(lf[185]));
t22=C_mutate2((C_word*)lf[221]+1 /* (set! setup-api#find-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4475,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[230]+1 /* (set! setup-api#find-header ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4537,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate2((C_word*)lf[233]+1 /* (set! setup-api#version>=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4562,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4738,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5152,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:580: make-parameter");
t27=C_fast_retrieve(lf[268]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t27;
av2[1]=t25;
av2[2]=lf[269];
av2[3]=t26;
((C_proc)(void*)(*((C_word*)t27+1)))(4,av2);}}

/* setup-api#installation-prefix in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2844,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2848,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:295: destination-prefix");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[112]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[112]+1);
av2[1]=t2;
tp(2,av2);}}

/* k2846 in setup-api#installation-prefix in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_2848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2848,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:C_fast_retrieve(lf[13]));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4134 in k4124 in k4118 in setup-api#repo-path in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4136(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4136,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:507: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[181];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4118 in setup-api#repo-path in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4120,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
C_trace("setup-api.scm:502: installation-prefix");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[114]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[114]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:503: destination-prefix");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[112]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[112]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k3600 in k3594 in k3588 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in ... */
static void C_ccall f_3602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3602,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3619,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:445: destination-prefix");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[112]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[112]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k4124 in k4118 in setup-api#repo-path in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4126,2,av);}
a=C_alloc(4);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4136,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:507: open-output-string");
t4=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
C_trace("setup-api.scm:508: repository-path");
t3=C_fast_retrieve(lf[124]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2817 in k2963 in k2892 in k2889 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_2819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2819,2,av);}
C_trace("setup-api.scm:287: make-pathname");
t2=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2035 in setup-api#extra-nonfeatures in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in ... */
static void C_ccall f_2037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2037,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2804 in map-loop445 in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in ... */
static void C_ccall f_2806(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2806,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2781(t6,((C_word*)t0)[5],t5);}

/* k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1894,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utils_toplevel(2,av2);}}

/* a4895 in a4889 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_4896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4896,2,av);}{
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

/* k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1897,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k3942 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_3944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3944,2,av);}
a=C_alloc(3);
C_trace("setup-api.scm:461: ensure-directory");
f_4166(((C_word*)t0)[2],t1,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* a4889 in a4844 in a4829 in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4890,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4896,a[2]=t2,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:612: k1357");
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1891,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1883 in k1880 */
static void C_ccall f_1885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1885,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k1880 */
static void C_ccall f_1882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1882,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1886 in k1883 in k1880 */
static void C_ccall f_1888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1888,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d1_toplevel(2,av2);}}

/* k3588 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_3590(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3590,2,av);}
a=C_alloc(15);
t2=C_i_assq(lf[164],((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3629,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3668,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:440: software-version");
t7=C_fast_retrieve(lf[168]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_3596(2,av2);}}}

/* k4986 in k5043 in k4980 in setup-api#remove-extension in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4988,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4995,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:636: make-pathname");
t3=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[0];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4980 in setup-api#remove-extension in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4982,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5045,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:630: read-info");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[239]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
tp(4,av2);}}

/* k3931 in map-loop947 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_3933(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3933,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3908(t6,((C_word*)t0)[5],t5);}

/* map-loop947 in k3779 in k3776 in k3773 in k3770 in setup-api#install-program in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_fcall f_3908(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3908,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3933,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:463: g953");
t5=((C_word*)t0)[4];
f_3871(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g1426 in k5043 in k4980 in setup-api#remove-extension in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4996,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5000,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5006,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:633: absolute-pathname?");
t5=C_fast_retrieve(lf[132]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4993 in k4986 in k5043 in k4980 in setup-api#remove-extension in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4995,2,av);}
C_trace("setup-api.scm:636: remove-file*");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[134]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[134]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k3594 in k3588 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_3596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3596,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:444: deployment-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t2;
tp(2,av2);}}

/* k5296 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_5298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5298,2,av);}
t2=C_eqp(t1,lf[285]);
if(C_truep(t2)){
C_trace("setup-api.scm:87: build-platform");
t3=C_fast_retrieve(lf[286]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_1943(2,av2);}}}

/* k5271 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in ... */
static void C_ccall f_5273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5273,2,av);}
C_trace("setup-api.scm:225: reg");
f_2407(((C_word*)t0)[3],lf[278],t1);}

/* a5274 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in ... */
static void C_ccall f_5275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5275,2,av);}
t2=C_fast_retrieve(lf[279]);
C_trace("setup-api.scm:183: g213");
t3=C_fast_retrieve(lf[279]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5247 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in ... */
static void C_ccall f_5249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5249,2,av);}
C_trace("setup-api.scm:231: reg");
f_2407(((C_word*)t0)[3],lf[271],t1);}

/* k5243 in k5228 */
static void C_ccall f_5245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5245,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,C_retrieve2(lf[33],"setup-api#\052mkdir-command\052"),lf[117],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:310: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
tp(3,av2);}}

/* k5255 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in ... */
static void C_ccall f_5257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5257,2,av);}
C_trace("setup-api.scm:229: reg");
f_2407(((C_word*)t0)[3],lf[274],t1);}

/* k5251 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in ... */
static void C_ccall f_5253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5253,2,av);}
C_trace("setup-api.scm:230: reg");
f_2407(((C_word*)t0)[3],lf[273],t1);}

/* k4761 in k4771 in setup-api#extension-version in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4763,2,av);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
C_trace("setup-api.scm:598: ->string");
t2=C_fast_retrieve(lf[78]);{
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
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in ... */
static void C_ccall f_2006(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_2006,2,av);}
a=C_alloc(24);
t2=C_mutate2((C_word*)lf[23]+1 /* (set! setup-api#keep-intermediates ...) */,t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_mutate2((C_word*)lf[24]+1 /* (set! setup-api#extra-features ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2008,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_mutate2((C_word*)lf[26]+1 /* (set! setup-api#extra-nonfeatures ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2027,a[2]=t7,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t9=lf[28] /* setup-api#*copy-command* */ =C_SCHEME_UNDEFINED;;
t10=lf[29] /* setup-api#*remove-command* */ =C_SCHEME_UNDEFINED;;
t11=lf[30] /* setup-api#*move-command* */ =C_SCHEME_UNDEFINED;;
t12=lf[31] /* setup-api#*chmod-command* */ =C_SCHEME_UNDEFINED;;
t13=lf[32] /* setup-api#*ranlib-command* */ =C_SCHEME_UNDEFINED;;
t14=lf[33] /* setup-api#*mkdir-command* */ =C_SCHEME_UNDEFINED;;
t15=C_mutate2(&lf[34] /* (set! setup-api#user-install-setup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2185,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[46]+1 /* (set! setup-api#sudo-install ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2211,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2234,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5275,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:183: make-parameter");
t19=C_fast_retrieve(lf[268]);{
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

/* setup-api#extra-features in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in ... */
static void C_ccall f_2008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_2008,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2018,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t6;
av2[2]=C_fast_retrieve(lf[25]);
av2[3]=t5;
C_apply(4,av2);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4771 in setup-api#extension-version in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4773(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4773,2,av);}
a=C_alloc(5);
t2=C_i_cadr(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:597: string-null?");
t5=C_fast_retrieve(lf[238]);{
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

/* k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in ... */
static void C_ccall f_2002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2002,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[22]+1 /* (set! setup-api#program-path ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2006,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:113: make-parameter");
t4=C_fast_retrieve(lf[268]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5228 */
static void C_ccall f_5230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5230,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:310: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k2016 in setup-api#extra-features in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in ... */
static void C_ccall f_2018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2018,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* g1389 in k4907 in walk in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_fcall f_4910(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4910,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_string_equal_p(lf[245],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4920,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_4920(t5,t3);}
else{
t5=t2;
t6=t4;
f_4920(t6,C_u_i_string_equal_p(lf[247],t5));}}

/* k5200 in k5196 in k5166 in a5151 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_5202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_5202,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* walk in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_fcall f_4905(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4905,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4909,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:618: directory");
t4=C_fast_retrieve(lf[130]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* setup-api#extra-nonfeatures in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in ... */
static void C_ccall f_2027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_2027,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2037,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t6;
av2[2]=C_fast_retrieve(lf[27]);
av2[3]=t5;
C_apply(4,av2);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4907 in walk in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4909(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_4909,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li90),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4940,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4945,a[2]=t5,a[3]=t2,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4945(t7,t3,t1);}

/* setup-api#extension-version in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4750,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4773,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:596: extension-name-and-version");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[147]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[147]+1);
av2[1]=t6;
tp(2,av2);}}

/* f_5218 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_5218(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5218,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5222,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:306: verb");
f_2857(t3,t2);}

/* k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1903,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1906,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1900,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d13_toplevel(2,av2);}}

/* k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1906,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1909,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_ports_toplevel(2,av2);}}

/* k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1909,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k5267 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in ... */
static void C_ccall f_5269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5269,2,av);}
C_trace("setup-api.scm:226: reg");
f_2407(((C_word*)t0)[3],lf[277],t1);}

/* k5259 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in ... */
static void C_ccall f_5261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5261,2,av);}
C_trace("setup-api.scm:228: reg");
f_2407(((C_word*)t0)[3],lf[275],t1);}

/* k5263 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in ... */
static void C_ccall f_5265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5265,2,av);}
C_trace("setup-api.scm:227: reg");
f_2407(((C_word*)t0)[3],lf[276],t1);}

/* k4783 in setup-api#read-info in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4785,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4792,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:603: make-pathname");
t3=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=lf[0];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* setup-api#read-info in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_4781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4781,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4785,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("setup-api.scm:601: repository-path");
t5=C_fast_retrieve(lf[124]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_car(t3);
f_4785(2,av2);}}}

/* k4021 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4023,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4026(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4048,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:493: string-intersperse");
t5=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[179];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* a4392 in a4386 in a4351 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in ... */
static void C_ccall f_4393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4393,2,av);}{
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

/* k4024 in k4021 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_4026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4026,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:494: supply-version");
f_3414(t2,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k2593 in map-loop336 in k2503 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_2595(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2595,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2570(t6,((C_word*)t0)[5],t5);}

/* k4383 in k4373 in k4370 in k4364 in a4357 in a4351 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in ... */
static void C_ccall f_4385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4385,2,av);}
C_trace("setup-api.scm:544: ##sys#print");
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1936(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_1936,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[6] /* (set! setup-api#*target-lib-home* ...) */,t1);
t3=lf[7] /* setup-api#*sudo* */ =C_SCHEME_FALSE;;
t4=C_mutate2(&lf[8] /* (set! setup-api#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t5=lf[9] /* setup-api#*registered-programs* */ =C_SCHEME_END_OF_LIST;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1943,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5298,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:86: software-type");
t8=C_fast_retrieve(lf[287]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* a4386 in a4351 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in ... */
static void C_ccall f_4387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4387,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4393,a[2]=t2,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:544: k1145");
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4379 in k4376 in k4373 in k4370 in k4364 in a4357 in a4351 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in ... */
static void C_ccall f_4381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4381,2,av);}
C_trace("setup-api.scm:544: $system");
f_5056(((C_word*)t0)[2],t1);}

/* k4011 in k3993 in k3990 in k3987 in g1036 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_4013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4013,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[121],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:489: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
tp(3,av2);}}

/* k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1932,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[5] /* (set! setup-api#*target-libs* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1936,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1946,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1950,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:91: make-parameter");
t3=C_fast_retrieve(lf[268]);{
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

/* k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1943,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[10] /* (set! setup-api#*windows* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:89: register-feature!");
t4=C_fast_retrieve(lf[25]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[284];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3666 in k3588 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_3668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3668,2,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[165]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t3,((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3660,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:442: pathname-extension");
t5=C_fast_retrieve(lf[167]);{
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
t4=((C_word*)t0)[4];
f_3629(t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[4];
f_3629(t3,C_SCHEME_FALSE);}}

/* k3658 in k3666 in k3588 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in ... */
static void C_ccall f_3660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3660,2,av);}
t2=((C_word*)t0)[2];
f_3629(t2,C_i_equalp(t1,lf[166]));}

/* for-each-loop1425 in k5043 in k4980 in setup-api#remove-extension in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_fcall f_5020(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5020,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5030,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:631: g1426");
t5=((C_word*)t0)[3];
f_4996(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4927 in k4921 in k4918 in g1389 in k4907 in walk in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_4929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4929,2,av);}
if(C_truep(t1)){
C_trace("setup-api.scm:624: walk");
t2=((C_word*)((C_word*)t0)[2])[1];
f_4905(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
C_trace("setup-api.scm:625: delete-file");
t2=C_fast_retrieve(lf[246]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k4921 in k4918 in g1389 in k4907 in walk in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_4923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4923,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:623: directory?");
t4=C_fast_retrieve(lf[131]);{
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

/* k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1912,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1915,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[0] /* (set! setup-api#constant26 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1920,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1924,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[3] /* (set! setup-api#*cxx* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1928,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a4351 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in ... */
static void C_ccall f_4352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4352,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4358,a[2]=((C_word*)t0)[2],a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[3],a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:544: ##sys#call-with-values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1920,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[2] /* (set! setup-api#*cc* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1924,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a4357 in a4351 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in ... */
static void C_ccall f_4358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4358,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4366,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:544: open-output-string");
t3=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop445 in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in ... */
static void C_fcall f_2781(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2781,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2806,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:271: g451");
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

/* k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1928,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[4] /* (set! setup-api#*target-cflags* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1932,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3681 in k3585 in k3582 in k3579 in g883 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_3683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3683,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[121],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:438: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
tp(3,av2);}}

/* for-each-loop393 in k2748 in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in ... */
static void C_fcall f_2758(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_2758,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2768,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2720,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2726,a[2]=t7,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:269: run-verbose");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[76]);
C_word av2[2];
av2[0]=*((C_word*)lf[76]+1);
av2[1]=t8;
tp(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4998 in g1426 in k5043 in k4980 in setup-api#remove-extension in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_5000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5000,2,av);}
C_trace("setup-api.scm:634: remove-file*");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[134]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[134]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k5004 in g1426 in k5043 in k4980 in setup-api#remove-extension in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_5006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5006,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
C_trace("setup-api.scm:634: remove-file*");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[134]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[134]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}
else{
C_trace("setup-api.scm:633: make-pathname");
t2=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* a4342 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in ... */
static void C_ccall f_4343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4343,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4349,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:544: k1145");
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4348 in a4342 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in ... */
static void C_ccall f_4349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4349,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2748 in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in ... */
static void C_ccall f_2750(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2750,2,av);}
a=C_alloc(6);
t2=C_i_check_list_2(t1,lf[109]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2758,a[2]=t4,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2758(t6,((C_word*)t0)[2],t1);}

/* k4373 in k4370 in k4364 in a4357 in a4351 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in ... */
static void C_ccall f_4375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4375,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4385,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:544: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k4370 in k4364 in a4357 in a4351 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in ... */
static void C_ccall f_4372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4372,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:544: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k4376 in k4373 in k4370 in k4364 in a4357 in a4351 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in ... */
static void C_ccall f_4378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4378,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:544: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1954,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
C_trace("setup-api.scm:95: make-pathname");
t3=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[282];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_1957(2,av2);}}}

/* k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 */
static void C_ccall f_1950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1950,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[11]+1 /* (set! setup-api#host-extension ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:94: get-environment-variable");
t4=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[283];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4364 in a4357 in a4351 in a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in ... */
static void C_ccall f_4366(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4366,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:544: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_retrieve2(lf[29],"setup-api#\052remove-command\052");
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4938 in k4907 in walk in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4940,2,av);}
C_trace("setup-api.scm:627: delete-directory");
t2=C_fast_retrieve(lf[248]);{
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

/* k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in k1880 in ... */
static void C_ccall f_1957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1957,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1960,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
f_1960(2,av2);}}
else{
C_trace("##sys#peek-c-string");
t3=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k4308 in k4302 in a4295 in a4289 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in ... */
static void C_ccall f_4310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4310,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:545: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k3497 in k3505 in k3501 in k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_3499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3499,2,av);}
C_trace("setup-api.scm:416: install-extension");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[149]);
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k4317 in k4314 in k4311 in k4308 in k4302 in a4295 in a4289 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in ... */
static void C_ccall f_4319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4319,2,av);}
C_trace("setup-api.scm:545: $system");
f_5056(((C_word*)t0)[2],t1);}

/* k4311 in k4308 in k4302 in a4295 in a4289 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in ... */
static void C_ccall f_4313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4313,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4323,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:545: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k4314 in k4311 in k4308 in k4302 in a4295 in a4289 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in ... */
static void C_ccall f_4316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4316,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:545: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k3480 in k3477 in k3474 in k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_3482(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,2)))){
C_save_and_reclaim((void *)f_3482,2,av);}
a=C_alloc(39);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_a_i_list(&a,9,lf[154],lf[155],lf[156],C_fix(3),lf[157],C_fix(1),((C_word*)t0)[7],lf[158],((C_word*)t0)[3]);
t5=C_a_i_list1(&a,1,t4);
C_trace("setup-api.scm:408: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t3;
av2[2]=t5;
tp(3,av2);}}

/* for-each-loop1388 in k4907 in walk in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_fcall f_4945(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4945,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4955,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:617: g1389");
t5=((C_word*)t0)[3];
f_4910(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3486 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_3488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3488,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:418: pathname-replace-extension");
t3=C_fast_retrieve(lf[151]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[153];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_3485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_3485,2,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_list(&a,7,lf[154],lf[155],lf[156],C_fix(3),lf[157],C_fix(0),((C_word*)t0)[7]);
t4=C_a_i_list1(&a,1,t3);
C_trace("setup-api.scm:415: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t2;
av2[2]=t4;
tp(3,av2);}}

/* k4918 in g1389 in k4907 in walk in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_fcall f_4920(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_4920,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4923,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:622: make-pathname");
t3=C_fast_retrieve(lf[79]);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k4302 in a4295 in a4289 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in ... */
static void C_ccall f_4304(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4304,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4310,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:545: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_retrieve2(lf[29],"setup-api#\052remove-command\052");
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2766 in for-each-loop393 in k2748 in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2768,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2758(t3,((C_word*)t0)[4],t2);}

/* k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_3470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3470,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:410: ->string");
t4=C_fast_retrieve(lf[78]);{
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

/* k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_3473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3473,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3476,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:411: make-pathname");
t4=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=t2;
av2[4]=lf[161];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4953 in for-each-loop1388 in k4907 in walk in k4968 in setup-api#remove-directory in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_4955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4955,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4945(t3,((C_word*)t0)[4],t2);}

/* a4330 in a4324 in a4289 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in ... */
static void C_ccall f_4331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4331,2,av);}{
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

/* k3474 in k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_3476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3476,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:412: make-pathname");
t4=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[6];
av2[4]=lf[160];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3477 in k3474 in k3471 in k3468 in setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_3479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3479,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-api.scm:413: make-pathname");
t4=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[7];
av2[4]=lf[159];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a4336 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in ... */
static void C_ccall f_4337(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4337,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4343,a[2]=t2,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4352,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:544: with-exception-handler");
t5=C_fast_retrieve(lf[187]);{
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

/* k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_3981(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_3981,2,av);}
a=C_alloc(23);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3985,a[2]=t2,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[82]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4023,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4050,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li49),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4050(t13,t9,((C_word*)t0)[2]);}

/* a4324 in a4289 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in ... */
static void C_ccall f_4325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4325,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4331,a[2]=t2,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:545: k1169");
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4321 in k4311 in k4308 in k4302 in a4295 in a4289 in a4274 in k4261 in k4258 in k4255 in k4252 in k4249 in k4246 in k4243 in k4240 in k4237 in k4234 in k4231 in k4228 in setup-api#try-compile in k2841 in k2837 in ... */
static void C_ccall f_4323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4323,2,av);}
C_trace("setup-api.scm:545: ##sys#print");
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3453 in k3438 in setup-api#supply-version in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_3455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3455,2,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,2,lf[143],t1);
C_trace("setup-api.scm:400: cons*");
t3=C_fast_retrieve(lf[93]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3993 in k3990 in k3987 in g1036 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_3995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3995,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4013,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:489: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* k3990 in k3987 in g1036 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_3992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3992,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3995,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:487: copy-file");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[129]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[129]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
tp(4,av2);}}

/* k3996 in k3993 in k3990 in k3987 in g1036 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_3998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3998,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* setup-api#standard-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_3457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_3457,c,av);}
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3470,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3539,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:408: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[162]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[162]+1);
av2[1]=t9;
av2[2]=lf[163];
av2[3]=t8;
av2[4]=t10;
tp(5,av2);}}

/* k3725 in map-loop877 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_3727(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3727,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3702(t6,((C_word*)t0)[5],t5);}

/* k3438 in setup-api#supply-version in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_3440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3440,2,av);}
a=C_alloc(11);
t2=C_a_i_list(&a,2,lf[142],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3455,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:402: extension-name");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[144]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[144]+1);
av2[1]=t4;
tp(2,av2);}}

/* g1036 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_fcall f_3985(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3985,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3989,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_3989(t5,C_u_i_car(t4));}
else{
t4=t3;
f_3989(t4,t2);}}

/* k2320 in k2317 in k2314 in k2311 in k2308 in k2302 in k2295 in k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in ... */
static void C_ccall f_2322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2322,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2325,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:205: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k3987 in g1036 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_fcall f_3989(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3989,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3992,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:486: make-dest-pathname");
f_3229(t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* map-loop1030 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_fcall f_4050(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4050,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:484: g1036");
t5=((C_word*)t0)[4];
f_3985(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3432 in g799 in setup-api#supply-version in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_3434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3434,2,av);}
a=C_alloc(9);
t2=C_a_i_list(&a,2,lf[143],t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2327 in k2317 in k2314 in k2311 in k2308 in k2302 in k2295 in k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in ... */
static void C_ccall f_2329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2329,2,av);}
C_trace("setup-api.scm:205: ##sys#print");
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2302 in k2295 in k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in ... */
static void C_ccall f_2325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2325,2,av);}
C_trace("setup-api.scm:204: $system");
f_5056(((C_word*)t0)[2],t1);}

/* k5061 in k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_5063(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5063,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:650: open-output-string");
t5=C_fast_retrieve(lf[53]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_5060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5060,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5063,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:647: system");
t4=C_fast_retrieve(lf[191]);{
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

/* g799 in setup-api#supply-version in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_fcall f_3422(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3422,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3434,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:396: extension-name");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[144]);
C_word av2[2];
av2[0]=*((C_word*)lf[144]+1);
av2[1]=t2;
tp(2,av2);}}

/* k2730 in k2724 in for-each-loop393 in k2748 in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_2732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2732,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:269: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2733 in k2730 in k2724 in for-each-loop393 in k2748 in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_2735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2735,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:269: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2736 in k2733 in k2730 in k2724 in for-each-loop393 in k2748 in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_2738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2738,2,av);}
C_trace("setup-api.scm:269: ##sys#flush-output");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[110]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[110]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* setup-api#supply-version in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_fcall f_3414(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3414,3,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_assq(lf[142],t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3422,a[2]=t2,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:392: g799");
t5=t4;
f_3422(t5,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3440,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=t4;
if(C_truep(t3)){
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3386,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:387: extension-name-and-version");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[147]);
C_word av2[2];
av2[0]=*((C_word*)lf[147]+1);
av2[1]=t6;
tp(2,av2);}}}}

/* k5043 in k4980 in setup-api#remove-extension in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_5045(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_5045,2,av);}
a=C_alloc(16);
t2=C_i_assq(lf[120],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4996,a[2]=((C_word*)t0)[3],a[3]=((C_word)li94),tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
t6=C_i_check_list_2(t5,lf[109]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5020,a[2]=t8,a[3]=t4,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_5020(t10,t3,t5);}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_4988(2,av2);}}}

/* k2523 in map-loop363 in k2526 in k2509 in k2503 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_2525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2525,2,av);}
C_trace("##sys#string-append");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[98];
av2[3]=t1;
tp(4,av2);}}

/* k2526 in k2509 in k2503 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_2528(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2528,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[82]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2536,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2536(t7,t3,t1);}

/* setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_fcall f_5056(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_5056,2,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5060,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[8],"setup-api#\052windows-shell\052"))){
C_trace("setup-api.scm:640: string-append");
t4=*((C_word*)lf[254]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[255];
av2[3]=t2;
av2[4]=lf[256];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5110,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5135,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:641: software-version");
t6=C_fast_retrieve(lf[168]);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3698 in k3691 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_3700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3700,2,av);}
C_trace("setup-api.scm:451: write-info");
f_2884(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop877 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_fcall f_3702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3702,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3727,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-api.scm:433: g883");
t5=((C_word*)t0)[4];
f_3577(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2509 in k2503 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_2511(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2511,2,av);}
a=C_alloc(11);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2528,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:256: extra-nonfeatures");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[26]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t7;
tp(2,av2);}}

/* map-loop1244 in k4578 in version->list in setup-api#version>=? in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_fcall f_4585(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4585,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string_to_number(&a,2,t3,C_fix(10));
t5=(C_truep(t4)?t4:t3);
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

/* k4578 in version->list in setup-api#version>=? in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4580(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4580,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4585,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li76),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4585(t5,((C_word*)t0)[4],t1);}

/* k4555 in k4552 in k4549 in k4543 in setup-api#find-header in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4557,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4560,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:557: get-output-string");
t3=C_fast_retrieve(lf[50]);{
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

/* k4552 in k4549 in k4543 in setup-api#find-header in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4554,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:557: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[231];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4549 in k4543 in setup-api#find-header in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_4551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4551,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:557: ##sys#print");
t3=*((C_word*)lf[51]+1);{
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
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2718 in for-each-loop393 in k2748 in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2720,2,av);}
C_trace("setup-api.scm:270: $system");
f_5056(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2724 in for-each-loop393 in k2748 in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2726(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2726,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[72]+1);
t3=*((C_word*)lf[72]+1);
t4=C_i_check_port_2(*((C_word*)lf[72]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[73]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2732,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:269: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[111];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[72]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
C_trace("setup-api.scm:270: $system");
f_5056(((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k1975 in setup-api#shellpath in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in ... */
static void C_ccall f_1977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1977,2,av);}
C_trace("setup-api.scm:103: qs");
t2=C_fast_retrieve(lf[15]);{
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

/* version->list in setup-api#version>=? in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_fcall f_4565(C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_4565,2,t1,t2);}
a=C_alloc(13);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4580,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4621,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:563: ->string");
t9=C_fast_retrieve(lf[78]);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* setup-api#version>=? in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_4562(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4562,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4565,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4628,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:564: version->list");
f_4565(t5,t2);}

/* k4558 in k4555 in k4552 in k4549 in k4543 in setup-api#find-header in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_4560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4560,2,av);}
C_trace("setup-api.scm:556: test-compile");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[213];
av2[4]=C_SCHEME_TRUE;
tp(5,av2);}}

/* k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in ... */
static void C_ccall f_1982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1982,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[17] /* (set! setup-api#*base-directory* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1986,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:108: make-parameter");
t4=C_fast_retrieve(lf[268]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[17],"setup-api#\052base-directory\052");
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in ... */
static void C_ccall f_1986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1986,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[18]+1 /* (set! setup-api#setup-root-directory ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:109: make-parameter");
t4=C_fast_retrieve(lf[268]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4084 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_4086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4086,2,av);}
a=C_alloc(3);
C_trace("setup-api.scm:483: ensure-directory");
f_4166(((C_word*)t0)[2],t1,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k2706 in map-loop406 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2708(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2708,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2683(t6,((C_word*)t0)[5],t5);}

/* k4073 in map-loop1030 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_4075(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4075,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4050(t6,((C_word*)t0)[5],t5);}

/* k5074 in k5061 in k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in ... */
static void C_ccall f_5076(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5076,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5082,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:650: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[253];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in ... */
static void C_ccall f_1964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1964,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
f_1967(2,av2);}}
else{
C_trace("##sys#peek-c-string");
t3=*((C_word*)lf[272]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in ... */
static void C_ccall f_1967(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1967,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[13]+1 /* (set! setup-api#chicken-prefix ...) */,t1);
t3=C_mutate2((C_word*)lf[14]+1 /* (set! setup-api#shellpath ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1969,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:106: current-directory");
t5=C_fast_retrieve(lf[280]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* setup-api#shellpath in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in ... */
static void C_ccall f_1969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1969,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1977,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:103: normalize-pathname");
t4=C_fast_retrieve(lf[16]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in k1895 in k1892 in k1889 in k1886 in k1883 in ... */
static void C_ccall f_1960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1960,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[12] /* (set! setup-api#*chicken-bin-path* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1964,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:99: get-environment-variable");
t4=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[281];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* setup-api#find-program in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in ... */
static void C_ccall f_2388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2388,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2392,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:216: ->string");
t4=C_fast_retrieve(lf[78]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2381 in setup-api#register-program in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in ... */
static void C_ccall f_2383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2383,2,av);}
C_trace("setup-api.scm:211: make-pathname");
t2=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[12],"setup-api#\052chicken-bin-path\052");
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4790 in k4783 in setup-api#read-info in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_4792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4792,2,av);}
C_trace("setup-api.scm:602: with-input-from-file");
t2=C_fast_retrieve(lf[67]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[240]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2390 in setup-api#find-program in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in ... */
static void C_ccall f_2392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2392,2,av);}
t2=C_i_assoc(t1,C_retrieve2(lf[9],"setup-api#\052registered-programs\052"));
if(C_truep(t2)){
t3=C_i_cdr(t2);
C_trace("setup-api.scm:219: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4046 in k4021 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_4048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4048,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,C_retrieve2(lf[31],"setup-api#\052chmod-command\052"),lf[178],t1);
t3=C_a_i_list1(&a,1,t2);
C_trace("setup-api.scm:493: execute");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t3;
tp(3,av2);}}

/* k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in ... */
static void C_ccall f_1994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1994,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[20]+1 /* (set! setup-api#setup-install-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1998,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:111: make-parameter");
t4=C_fast_retrieve(lf[268]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in ... */
static void C_ccall f_1998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1998,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[21]+1 /* (set! setup-api#deployment-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2002,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:112: make-parameter");
t4=C_fast_retrieve(lf[268]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[12],"setup-api#\052chicken-bin-path\052");
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in k1918 in k1913 in k1910 in k1907 in k1904 in k1901 in k1898 in ... */
static void C_ccall f_1990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1990,2,av);}
a=C_alloc(3);
t2=C_mutate2((C_word*)lf[19]+1 /* (set! setup-api#setup-verbose-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1994,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:110: make-parameter");
t4=C_fast_retrieve(lf[268]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4031 in k4024 in k4021 in k3979 in k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_4033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4033,2,av);}
C_trace("setup-api.scm:494: write-info");
f_2884(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3691 in k3571 in k3568 in k3565 in k3562 in setup-api#install-extension in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_3693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3693,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:451: supply-version");
f_3414(t3,((C_word*)t0)[4],C_SCHEME_FALSE);}

/* k2500 in map-loop336 in k2503 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_2502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2502,2,av);}
C_trace("##sys#string-append");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[100];
av2[3]=t1;
tp(4,av2);}}

/* k2503 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_2505(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2505,2,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[82]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2570,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2570(t7,t3,t1);}

/* k5028 in for-each-loop1425 in k5043 in k4980 in setup-api#remove-extension in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_5030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5030,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5020(t3,((C_word*)t0)[4],t2);}

/* k5086 in k5083 in k5080 in k5074 in k5061 in k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in ... */
static void C_ccall f_5088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5088,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:650: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k5080 in k5074 in k5061 in k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in ... */
static void C_ccall f_5082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5082,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:650: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5083 in k5080 in k5074 in k5061 in k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_5085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5085,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:650: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(58);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k5095 in k5092 in k5089 in k5086 in k5083 in k5080 in k5074 in k5061 in k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in ... */
static void C_ccall f_5097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5097,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:650: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5089 in k5086 in k5083 in k5080 in k5074 in k5061 in k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_5091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5091,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:650: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k5092 in k5089 in k5086 in k5083 in k5080 in k5074 in k5061 in k5058 in setup-api#$system in k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in ... */
static void C_ccall f_5094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5094,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:650: ##sys#print");
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[252];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4736 in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_4738(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_4738,2,av);}
a=C_alloc(24);
t2=C_mutate2((C_word*)lf[147]+1 /* (set! setup-api#extension-name-and-version ...) */,t1);
t3=C_mutate2((C_word*)lf[144]+1 /* (set! setup-api#extension-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4740,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[237]+1 /* (set! setup-api#extension-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4750,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[239]+1 /* (set! setup-api#read-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4781,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[241]+1 /* (set! setup-api#remove-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4803,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[251]+1 /* (set! setup-api#remove-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4978,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2(&lf[69] /* (set! setup-api#$system ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5056,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[260]+1 /* (set! setup-api#setup-error-handling ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5137,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:662: user-install-setup");
f_2185(t10);}

/* k2331 in k2311 in k2308 in k2302 in k2295 in k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in ... */
static void C_ccall f_2333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2333,2,av);}
C_trace("setup-api.scm:205: ##sys#print");
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2308 in k2302 in k2295 in k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in ... */
static void C_ccall f_2310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2310,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:205: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* setup-api#copy-file in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_2995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_2995,c,av);}
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
t6=(C_truep(t5)?C_SCHEME_TRUE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3005,a[2]=t9,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t9))){
C_trace("setup-api.scm:326: installation-prefix");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[114]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[114]+1);
av2[1]=t10;
tp(2,av2);}}
else{
t11=t10;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_i_car(t9);
f_3005(2,av2);}}}

/* k2984 in k2981 in k2978 in k2975 in k2972 in k2966 in setup-api#write-info in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in ... */
static void C_ccall f_2986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2986,2,av);}
C_trace("setup-api.scm:315: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2302 in k2295 in k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in ... */
static void C_ccall f_2304(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2304,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[49]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2310,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-api.scm:205: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_retrieve2(lf[30],"setup-api#\052move-command\052");
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* map-loop363 in k2526 in k2509 in k2503 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_fcall f_2536(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2536,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2561,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2525,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:255: symbol->string");
t7=*((C_word*)lf[99]+1);{
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

/* k2532 in k2526 in k2509 in k2503 in k2603 in k2606 in k2609 in k2470 in k2466 in k2662 in smooth in setup-api#execute in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in ... */
static void C_ccall f_2534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2534,2,av);}
C_trace("setup-api.scm:250: append");
t2=*((C_word*)lf[96]+1);{
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
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* setup-api#register-program in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in ... */
static void C_ccall f_2361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_2361,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2365,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2383,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:211: ->string");
t6=C_fast_retrieve(lf[78]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_car(t3);
f_2365(2,av2);}}}

/* k2317 in k2314 in k2311 in k2308 in k2302 in k2295 in k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in ... */
static void C_ccall f_2319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2319,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2329,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:206: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k2314 in k2311 in k2308 in k2302 in k2295 in k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in ... */
static void C_ccall f_2316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2316,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:205: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k2311 in k2308 in k2302 in k2295 in k2292 in k2238 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in ... */
static void C_ccall f_2313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2313,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2333,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:205: shellpath");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}

/* k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in ... */
static void C_ccall f_3972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3972,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
C_trace("setup-api.scm:481: check-filelist");
f_3254(t2,t3);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace("setup-api.scm:481: check-filelist");
f_3254(t2,t3);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in ... */
static void C_ccall f_3975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3975,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3978,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:482: installation-prefix");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[114]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[114]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3976 in k3973 in k3970 in setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in ... */
static void C_ccall f_3978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3978,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4086,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-api.scm:483: make-pathname");
t4=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=lf[180];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2363 in setup-api#register-program in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in ... */
static void C_ccall f_2365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2365,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2373,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-api.scm:213: ->string");
t4=C_fast_retrieve(lf[78]);{
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

/* k2338 in setup-api#patch in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in k1958 in k1955 in k1952 in k1948 in k1944 in k1941 in k1934 in k1930 in k1926 in k1922 in ... */
static void C_ccall f_2340(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2340,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[72]+1);
t3=*((C_word*)lf[72]+1);
t4=C_i_check_port_2(*((C_word*)lf[72]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[73]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-api.scm:191: ##sys#print");
t6=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[75];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[72]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2240(2,av2);}}}

/* setup-api#install-script in k2841 in k2837 in k2833 in k2434 in k2431 in k2428 in k2425 in k2422 in k2419 in k2416 in k2357 in k2232 in k2004 in k2000 in k1996 in k1992 in k1988 in k1984 in k1980 in k1965 in k1962 in ... */
static void C_ccall f_3962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_3962,c,av);}
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
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3972,a[2]=t1,a[3]=t2,a[4]=t7,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-api.scm:480: setup-install-mode");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[20]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t8;
tp(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[484] = {
{"f_2488:setup_2dapi_2escm",(void*)f_2488},
{"f_2373:setup_2dapi_2escm",(void*)f_2373},
{"f_4748:setup_2dapi_2escm",(void*)f_4748},
{"f_3511:setup_2dapi_2escm",(void*)f_3511},
{"f_3011:setup_2dapi_2escm",(void*)f_3011},
{"f_3014:setup_2dapi_2escm",(void*)f_3014},
{"f_3017:setup_2dapi_2escm",(void*)f_3017},
{"f_4740:setup_2dapi_2escm",(void*)f_4740},
{"f_2349:setup_2dapi_2escm",(void*)f_2349},
{"f_2346:setup_2dapi_2escm",(void*)f_2346},
{"f_3518:setup_2dapi_2escm",(void*)f_3518},
{"f_2352:setup_2dapi_2escm",(void*)f_2352},
{"f_2359:setup_2dapi_2escm",(void*)f_2359},
{"f_4845:setup_2dapi_2escm",(void*)f_4845},
{"f_4842:setup_2dapi_2escm",(void*)f_4842},
{"f_3195:setup_2dapi_2escm",(void*)f_3195},
{"f_3775:setup_2dapi_2escm",(void*)f_3775},
{"f_3778:setup_2dapi_2escm",(void*)f_3778},
{"f_3772:setup_2dapi_2escm",(void*)f_3772},
{"f_3020:setup_2dapi_2escm",(void*)f_3020},
{"f_3539:setup_2dapi_2escm",(void*)f_3539},
{"f_3022:setup_2dapi_2escm",(void*)f_3022},
{"f_3029:setup_2dapi_2escm",(void*)f_3029},
{"f_2442:setup_2dapi_2escm",(void*)f_2442},
{"f_4296:setup_2dapi_2escm",(void*)f_4296},
{"f_4290:setup_2dapi_2escm",(void*)f_4290},
{"f_4825:setup_2dapi_2escm",(void*)f_4825},
{"f_4702:setup_2dapi_2escm",(void*)f_4702},
{"f_4287:setup_2dapi_2escm",(void*)f_4287},
{"f_4281:setup_2dapi_2escm",(void*)f_4281},
{"f_3795:setup_2dapi_2escm",(void*)f_3795},
{"f_3792:setup_2dapi_2escm",(void*)f_3792},
{"f_3798:setup_2dapi_2escm",(void*)f_3798},
{"f_3503:setup_2dapi_2escm",(void*)f_3503},
{"f_3005:setup_2dapi_2escm",(void*)f_3005},
{"f_2464:setup_2dapi_2escm",(void*)f_2464},
{"f_2468:setup_2dapi_2escm",(void*)f_2468},
{"f_3788:setup_2dapi_2escm",(void*)f_3788},
{"f_3781:setup_2dapi_2escm",(void*)f_3781},
{"f_3784:setup_2dapi_2escm",(void*)f_3784},
{"f_4803:setup_2dapi_2escm",(void*)f_4803},
{"f_3507:setup_2dapi_2escm",(void*)f_3507},
{"f_2472:setup_2dapi_2escm",(void*)f_2472},
{"f_3170:setup_2dapi_2escm",(void*)f_3170},
{"f_3173:setup_2dapi_2escm",(void*)f_3173},
{"f_2407:setup_2dapi_2escm",(void*)f_2407},
{"f_3816:setup_2dapi_2escm",(void*)f_3816},
{"f_2109:setup_2dapi_2escm",(void*)f_2109},
{"f_2106:setup_2dapi_2escm",(void*)f_2106},
{"f_4254:setup_2dapi_2escm",(void*)f_4254},
{"f_4257:setup_2dapi_2escm",(void*)f_4257},
{"f_2100:setup_2dapi_2escm",(void*)f_2100},
{"f_2664:setup_2dapi_2escm",(void*)f_2664},
{"f_4251:setup_2dapi_2escm",(void*)f_4251},
{"f_3160:setup_2dapi_2escm",(void*)f_3160},
{"f_3164:setup_2dapi_2escm",(void*)f_3164},
{"f_2418:setup_2dapi_2escm",(void*)f_2418},
{"f_2415:setup_2dapi_2escm",(void*)f_2415},
{"f_3176:setup_2dapi_2escm",(void*)f_3176},
{"f_4245:setup_2dapi_2escm",(void*)f_4245},
{"f_4242:setup_2dapi_2escm",(void*)f_4242},
{"f_4248:setup_2dapi_2escm",(void*)f_4248},
{"f_3758:setup_2dapi_2escm",(void*)f_3758},
{"f_3752:setup_2dapi_2escm",(void*)f_3752},
{"f_3191:setup_2dapi_2escm",(void*)f_3191},
{"f_4836:setup_2dapi_2escm",(void*)f_4836},
{"f_2427:setup_2dapi_2escm",(void*)f_2427},
{"f_3833:setup_2dapi_2escm",(void*)f_3833},
{"f_2424:setup_2dapi_2escm",(void*)f_2424},
{"f_3835:setup_2dapi_2escm",(void*)f_3835},
{"f_3166:setup_2dapi_2escm",(void*)f_3166},
{"f_4830:setup_2dapi_2escm",(void*)f_4830},
{"f_2421:setup_2dapi_2escm",(void*)f_2421},
{"f_4275:setup_2dapi_2escm",(void*)f_4275},
{"f_2683:setup_2dapi_2escm",(void*)f_2683},
{"f_2433:setup_2dapi_2escm",(void*)f_2433},
{"f_3102:setup_2dapi_2escm",(void*)f_3102},
{"f_2436:setup_2dapi_2escm",(void*)f_2436},
{"f_2430:setup_2dapi_2escm",(void*)f_2430},
{"f_4263:setup_2dapi_2escm",(void*)f_4263},
{"f_4266:setup_2dapi_2escm",(void*)f_4266},
{"f_4269:setup_2dapi_2escm",(void*)f_4269},
{"f_2651:setup_2dapi_2escm",(void*)f_2651},
{"f_2654:setup_2dapi_2escm",(void*)f_2654},
{"f_4260:setup_2dapi_2escm",(void*)f_4260},
{"f_3109:setup_2dapi_2escm",(void*)f_3109},
{"f_4412:setup_2dapi_2escm",(void*)f_4412},
{"f_4415:setup_2dapi_2escm",(void*)f_4415},
{"f_4212:setup_2dapi_2escm",(void*)f_4212},
{"f_3801:setup_2dapi_2escm",(void*)f_3801},
{"f_2623:setup_2dapi_2escm",(void*)f_2623},
{"f_2675:setup_2dapi_2escm",(void*)f_2675},
{"f_2611:setup_2dapi_2escm",(void*)f_2611},
{"f_2614:setup_2dapi_2escm",(void*)f_2614},
{"f_2617:setup_2dapi_2escm",(void*)f_2617},
{"f_4230:setup_2dapi_2escm",(void*)f_4230},
{"f_4239:setup_2dapi_2escm",(void*)f_4239},
{"f_4233:setup_2dapi_2escm",(void*)f_4233},
{"f_4236:setup_2dapi_2escm",(void*)f_4236},
{"f_3030:setup_2dapi_2escm",(void*)f_3030},
{"f_3826:setup_2dapi_2escm",(void*)f_3826},
{"f_3038:setup_2dapi_2escm",(void*)f_3038},
{"f_2643:setup_2dapi_2escm",(void*)f_2643},
{"f_2649:setup_2dapi_2escm",(void*)f_2649},
{"f_4223:setup_2dapi_2escm",(void*)f_4223},
{"f_3060:setup_2dapi_2escm",(void*)f_3060},
{"f_2965:setup_2dapi_2escm",(void*)f_2965},
{"f_3042:setup_2dapi_2escm",(void*)f_3042},
{"f_3045:setup_2dapi_2escm",(void*)f_3045},
{"f_2211:setup_2dapi_2escm",(void*)f_2211},
{"f_4531:setup_2dapi_2escm",(void*)f_4531},
{"f_2974:setup_2dapi_2escm",(void*)f_2974},
{"f_5198:setup_2dapi_2escm",(void*)f_5198},
{"f_2968:setup_2dapi_2escm",(void*)f_2968},
{"f_2608:setup_2dapi_2escm",(void*)f_2608},
{"f_2605:setup_2dapi_2escm",(void*)f_2605},
{"f_2980:setup_2dapi_2escm",(void*)f_2980},
{"f_2983:setup_2dapi_2escm",(void*)f_2983},
{"f_5168:setup_2dapi_2escm",(void*)f_5168},
{"f_2977:setup_2dapi_2escm",(void*)f_2977},
{"f_4535:setup_2dapi_2escm",(void*)f_4535},
{"f_4537:setup_2dapi_2escm",(void*)f_4537},
{"f_4513:setup_2dapi_2escm",(void*)f_4513},
{"f_4510:setup_2dapi_2escm",(void*)f_4510},
{"f_5175:setup_2dapi_2escm",(void*)f_5175},
{"f_4545:setup_2dapi_2escm",(void*)f_4545},
{"f_4522:setup_2dapi_2escm",(void*)f_4522},
{"f_5143:setup_2dapi_2escm",(void*)f_5143},
{"f_4516:setup_2dapi_2escm",(void*)f_4516},
{"f_4519:setup_2dapi_2escm",(void*)f_4519},
{"f_5150:setup_2dapi_2escm",(void*)f_5150},
{"f_4888:setup_2dapi_2escm",(void*)f_4888},
{"f_5152:setup_2dapi_2escm",(void*)f_5152},
{"f_4884:setup_2dapi_2escm",(void*)f_4884},
{"f_4880:setup_2dapi_2escm",(void*)f_4880},
{"f_4525:setup_2dapi_2escm",(void*)f_4525},
{"f_4528:setup_2dapi_2escm",(void*)f_4528},
{"f_4501:setup_2dapi_2escm",(void*)f_4501},
{"f_5122:setup_2dapi_2escm",(void*)f_5122},
{"f_4855:setup_2dapi_2escm",(void*)f_4855},
{"f_4851:setup_2dapi_2escm",(void*)f_4851},
{"f_5135:setup_2dapi_2escm",(void*)f_5135},
{"f_3093:setup_2dapi_2escm",(void*)f_3093},
{"f_5137:setup_2dapi_2escm",(void*)f_5137},
{"f_4865:setup_2dapi_2escm",(void*)f_4865},
{"f_5139:setup_2dapi_2escm",(void*)f_5139},
{"f_4507:setup_2dapi_2escm",(void*)f_4507},
{"f_4504:setup_2dapi_2escm",(void*)f_4504},
{"f_5103:setup_2dapi_2escm",(void*)f_5103},
{"f_5100:setup_2dapi_2escm",(void*)f_5100},
{"f_5114:setup_2dapi_2escm",(void*)f_5114},
{"f_3074:setup_2dapi_2escm",(void*)f_3074},
{"f_5110:setup_2dapi_2escm",(void*)f_5110},
{"f_2138:setup_2dapi_2escm",(void*)f_2138},
{"f_2132:setup_2dapi_2escm",(void*)f_2132},
{"f_2144:setup_2dapi_2escm",(void*)f_2144},
{"f_2148:setup_2dapi_2escm",(void*)f_2148},
{"f_2141:setup_2dapi_2escm",(void*)f_2141},
{"f_3050:setup_2dapi_2escm",(void*)f_3050},
{"f_2284:setup_2dapi_2escm",(void*)f_2284},
{"f_4483:setup_2dapi_2escm",(void*)f_4483},
{"f_3567:setup_2dapi_2escm",(void*)f_3567},
{"f_2116:setup_2dapi_2escm",(void*)f_2116},
{"f_3564:setup_2dapi_2escm",(void*)f_3564},
{"f_2112:setup_2dapi_2escm",(void*)f_2112},
{"f_4877:setup_2dapi_2escm",(void*)f_4877},
{"f_4874:setup_2dapi_2escm",(void*)f_4874},
{"f_4871:setup_2dapi_2escm",(void*)f_4871},
{"f_3229:setup_2dapi_2escm",(void*)f_3229},
{"f_4489:setup_2dapi_2escm",(void*)f_4489},
{"f_3227:setup_2dapi_2escm",(void*)f_3227},
{"f_3089:setup_2dapi_2escm",(void*)f_3089},
{"f_2128:setup_2dapi_2escm",(void*)f_2128},
{"f_2125:setup_2dapi_2escm",(void*)f_2125},
{"f_3554:setup_2dapi_2escm",(void*)f_3554},
{"f_3570:setup_2dapi_2escm",(void*)f_3570},
{"f_2122:setup_2dapi_2escm",(void*)f_2122},
{"f_3211:setup_2dapi_2escm",(void*)f_3211},
{"f_3587:setup_2dapi_2escm",(void*)f_3587},
{"f_3584:setup_2dapi_2escm",(void*)f_3584},
{"f_3581:setup_2dapi_2escm",(void*)f_3581},
{"f_2173:setup_2dapi_2escm",(void*)f_2173},
{"f_2176:setup_2dapi_2escm",(void*)f_2176},
{"f_2170:setup_2dapi_2escm",(void*)f_2170},
{"f_3577:setup_2dapi_2escm",(void*)f_3577},
{"f_2864:setup_2dapi_2escm",(void*)f_2864},
{"f_3573:setup_2dapi_2escm",(void*)f_3573},
{"f_2185:setup_2dapi_2escm",(void*)f_2185},
{"f_2180:setup_2dapi_2escm",(void*)f_2180},
{"f_4447:setup_2dapi_2escm",(void*)f_4447},
{"f_2873:setup_2dapi_2escm",(void*)f_2873},
{"f_2870:setup_2dapi_2escm",(void*)f_2870},
{"f_2154:setup_2dapi_2escm",(void*)f_2154},
{"f_2157:setup_2dapi_2escm",(void*)f_2157},
{"f_2876:setup_2dapi_2escm",(void*)f_2876},
{"f_4475:setup_2dapi_2escm",(void*)f_4475},
{"f_2884:setup_2dapi_2escm",(void*)f_2884},
{"f_2164:setup_2dapi_2escm",(void*)f_2164},
{"f_2160:setup_2dapi_2escm",(void*)f_2160},
{"f_3254:setup_2dapi_2escm",(void*)f_3254},
{"f_4465:setup_2dapi_2escm",(void*)f_4465},
{"f_4462:setup_2dapi_2escm",(void*)f_4462},
{"f_4468:setup_2dapi_2escm",(void*)f_4468},
{"f_3386:setup_2dapi_2escm",(void*)f_3386},
{"f_2891:setup_2dapi_2escm",(void*)f_2891},
{"f_2894:setup_2dapi_2escm",(void*)f_2894},
{"f_4978:setup_2dapi_2escm",(void*)f_4978},
{"f_4970:setup_2dapi_2escm",(void*)f_4970},
{"f_2897:setup_2dapi_2escm",(void*)f_2897},
{"f_2236:setup_2dapi_2escm",(void*)f_2236},
{"f_2234:setup_2dapi_2escm",(void*)f_2234},
{"f_4495:setup_2dapi_2escm",(void*)f_4495},
{"f_4498:setup_2dapi_2escm",(void*)f_4498},
{"f_3249:setup_2dapi_2escm",(void*)f_3249},
{"f_4492:setup_2dapi_2escm",(void*)f_4492},
{"f_3889:setup_2dapi_2escm",(void*)f_3889},
{"f_4628:setup_2dapi_2escm",(void*)f_4628},
{"f_3885:setup_2dapi_2escm",(void*)f_3885},
{"toplevel:setup_2dapi_2escm",(void*)C_toplevel},
{"f_4621:setup_2dapi_2escm",(void*)f_4621},
{"f_4634:setup_2dapi_2escm",(void*)f_4634},
{"f_4194:setup_2dapi_2escm",(void*)f_4194},
{"f_2921:setup_2dapi_2escm",(void*)f_2921},
{"f_3871:setup_2dapi_2escm",(void*)f_3871},
{"f_2927:setup_2dapi_2escm",(void*)f_2927},
{"f_2255:setup_2dapi_2escm",(void*)f_2255},
{"f_2924:setup_2dapi_2escm",(void*)f_2924},
{"f_4430:setup_2dapi_2escm",(void*)f_4430},
{"f_4632:setup_2dapi_2escm",(void*)f_4632},
{"f_4434:setup_2dapi_2escm",(void*)f_4434},
{"f_3350:setup_2dapi_2escm",(void*)f_3350},
{"f_4188:setup_2dapi_2escm",(void*)f_4188},
{"f_4182:setup_2dapi_2escm",(void*)f_4182},
{"f_4426:setup_2dapi_2escm",(void*)f_4426},
{"f_5226:setup_2dapi_2escm",(void*)f_5226},
{"f_5222:setup_2dapi_2escm",(void*)f_5222},
{"f_2084:setup_2dapi_2escm",(void*)f_2084},
{"f_2857:setup_2dapi_2escm",(void*)f_2857},
{"f_2080:setup_2dapi_2escm",(void*)f_2080},
{"f_2903:setup_2dapi_2escm",(void*)f_2903},
{"f_2900:setup_2dapi_2escm",(void*)f_2900},
{"f_3619:setup_2dapi_2escm",(void*)f_3619},
{"f_2275:setup_2dapi_2escm",(void*)f_2275},
{"f_4453:setup_2dapi_2escm",(void*)f_4453},
{"f_4456:setup_2dapi_2escm",(void*)f_4456},
{"f_2271:setup_2dapi_2escm",(void*)f_2271},
{"f_2093:setup_2dapi_2escm",(void*)f_2093},
{"f_2096:setup_2dapi_2escm",(void*)f_2096},
{"f_3272:setup_2dapi_2escm",(void*)f_3272},
{"f_2090:setup_2dapi_2escm",(void*)f_2090},
{"f_2240:setup_2dapi_2escm",(void*)f_2240},
{"f_2561:setup_2dapi_2escm",(void*)f_2561},
{"f_2297:setup_2dapi_2escm",(void*)f_2297},
{"f_2291:setup_2dapi_2escm",(void*)f_2291},
{"f_2294:setup_2dapi_2escm",(void*)f_2294},
{"f_4145:setup_2dapi_2escm",(void*)f_4145},
{"f_4142:setup_2dapi_2escm",(void*)f_4142},
{"f_4148:setup_2dapi_2escm",(void*)f_4148},
{"f_3623:setup_2dapi_2escm",(void*)f_3623},
{"f_2570:setup_2dapi_2escm",(void*)f_2570},
{"f_3860:setup_2dapi_2escm",(void*)f_3860},
{"f_3629:setup_2dapi_2escm",(void*)f_3629},
{"f_2265:setup_2dapi_2escm",(void*)f_2265},
{"f_2957:setup_2dapi_2escm",(void*)f_2957},
{"f_4173:setup_2dapi_2escm",(void*)f_4173},
{"f_4176:setup_2dapi_2escm",(void*)f_4176},
{"f_3305:setup_2dapi_2escm",(void*)f_3305},
{"f_2942:setup_2dapi_2escm",(void*)f_2942},
{"f_2948:setup_2dapi_2escm",(void*)f_2948},
{"f_2946:setup_2dapi_2escm",(void*)f_2946},
{"f_2835:setup_2dapi_2escm",(void*)f_2835},
{"f_2839:setup_2dapi_2escm",(void*)f_2839},
{"f_4166:setup_2dapi_2escm",(void*)f_4166},
{"f_3330:setup_2dapi_2escm",(void*)f_3330},
{"f_3644:setup_2dapi_2escm",(void*)f_3644},
{"f_4111:setup_2dapi_2escm",(void*)f_4111},
{"f_4114:setup_2dapi_2escm",(void*)f_4114},
{"f_4104:setup_2dapi_2escm",(void*)f_4104},
{"f_2843:setup_2dapi_2escm",(void*)f_2843},
{"f_2844:setup_2dapi_2escm",(void*)f_2844},
{"f_2848:setup_2dapi_2escm",(void*)f_2848},
{"f_4136:setup_2dapi_2escm",(void*)f_4136},
{"f_4120:setup_2dapi_2escm",(void*)f_4120},
{"f_3602:setup_2dapi_2escm",(void*)f_3602},
{"f_4126:setup_2dapi_2escm",(void*)f_4126},
{"f_2819:setup_2dapi_2escm",(void*)f_2819},
{"f_2037:setup_2dapi_2escm",(void*)f_2037},
{"f_2806:setup_2dapi_2escm",(void*)f_2806},
{"f_1894:setup_2dapi_2escm",(void*)f_1894},
{"f_4896:setup_2dapi_2escm",(void*)f_4896},
{"f_1897:setup_2dapi_2escm",(void*)f_1897},
{"f_3944:setup_2dapi_2escm",(void*)f_3944},
{"f_4890:setup_2dapi_2escm",(void*)f_4890},
{"f_1891:setup_2dapi_2escm",(void*)f_1891},
{"f_1885:setup_2dapi_2escm",(void*)f_1885},
{"f_1882:setup_2dapi_2escm",(void*)f_1882},
{"f_1888:setup_2dapi_2escm",(void*)f_1888},
{"f_3590:setup_2dapi_2escm",(void*)f_3590},
{"f_4988:setup_2dapi_2escm",(void*)f_4988},
{"f_4982:setup_2dapi_2escm",(void*)f_4982},
{"f_3933:setup_2dapi_2escm",(void*)f_3933},
{"f_3908:setup_2dapi_2escm",(void*)f_3908},
{"f_4996:setup_2dapi_2escm",(void*)f_4996},
{"f_4995:setup_2dapi_2escm",(void*)f_4995},
{"f_3596:setup_2dapi_2escm",(void*)f_3596},
{"f_5298:setup_2dapi_2escm",(void*)f_5298},
{"f_5273:setup_2dapi_2escm",(void*)f_5273},
{"f_5275:setup_2dapi_2escm",(void*)f_5275},
{"f_5249:setup_2dapi_2escm",(void*)f_5249},
{"f_5245:setup_2dapi_2escm",(void*)f_5245},
{"f_5257:setup_2dapi_2escm",(void*)f_5257},
{"f_5253:setup_2dapi_2escm",(void*)f_5253},
{"f_4763:setup_2dapi_2escm",(void*)f_4763},
{"f_2006:setup_2dapi_2escm",(void*)f_2006},
{"f_2008:setup_2dapi_2escm",(void*)f_2008},
{"f_4773:setup_2dapi_2escm",(void*)f_4773},
{"f_2002:setup_2dapi_2escm",(void*)f_2002},
{"f_5230:setup_2dapi_2escm",(void*)f_5230},
{"f_2018:setup_2dapi_2escm",(void*)f_2018},
{"f_4910:setup_2dapi_2escm",(void*)f_4910},
{"f_5202:setup_2dapi_2escm",(void*)f_5202},
{"f_4905:setup_2dapi_2escm",(void*)f_4905},
{"f_2027:setup_2dapi_2escm",(void*)f_2027},
{"f_4909:setup_2dapi_2escm",(void*)f_4909},
{"f_4750:setup_2dapi_2escm",(void*)f_4750},
{"f_5218:setup_2dapi_2escm",(void*)f_5218},
{"f_1903:setup_2dapi_2escm",(void*)f_1903},
{"f_1900:setup_2dapi_2escm",(void*)f_1900},
{"f_1906:setup_2dapi_2escm",(void*)f_1906},
{"f_1909:setup_2dapi_2escm",(void*)f_1909},
{"f_5269:setup_2dapi_2escm",(void*)f_5269},
{"f_5261:setup_2dapi_2escm",(void*)f_5261},
{"f_5265:setup_2dapi_2escm",(void*)f_5265},
{"f_4785:setup_2dapi_2escm",(void*)f_4785},
{"f_4781:setup_2dapi_2escm",(void*)f_4781},
{"f_4023:setup_2dapi_2escm",(void*)f_4023},
{"f_4393:setup_2dapi_2escm",(void*)f_4393},
{"f_4026:setup_2dapi_2escm",(void*)f_4026},
{"f_2595:setup_2dapi_2escm",(void*)f_2595},
{"f_4385:setup_2dapi_2escm",(void*)f_4385},
{"f_1936:setup_2dapi_2escm",(void*)f_1936},
{"f_4387:setup_2dapi_2escm",(void*)f_4387},
{"f_4381:setup_2dapi_2escm",(void*)f_4381},
{"f_4013:setup_2dapi_2escm",(void*)f_4013},
{"f_1932:setup_2dapi_2escm",(void*)f_1932},
{"f_1946:setup_2dapi_2escm",(void*)f_1946},
{"f_1943:setup_2dapi_2escm",(void*)f_1943},
{"f_3668:setup_2dapi_2escm",(void*)f_3668},
{"f_3660:setup_2dapi_2escm",(void*)f_3660},
{"f_5020:setup_2dapi_2escm",(void*)f_5020},
{"f_4929:setup_2dapi_2escm",(void*)f_4929},
{"f_4923:setup_2dapi_2escm",(void*)f_4923},
{"f_1912:setup_2dapi_2escm",(void*)f_1912},
{"f_1915:setup_2dapi_2escm",(void*)f_1915},
{"f_1924:setup_2dapi_2escm",(void*)f_1924},
{"f_4352:setup_2dapi_2escm",(void*)f_4352},
{"f_1920:setup_2dapi_2escm",(void*)f_1920},
{"f_4358:setup_2dapi_2escm",(void*)f_4358},
{"f_2781:setup_2dapi_2escm",(void*)f_2781},
{"f_1928:setup_2dapi_2escm",(void*)f_1928},
{"f_3683:setup_2dapi_2escm",(void*)f_3683},
{"f_2758:setup_2dapi_2escm",(void*)f_2758},
{"f_5000:setup_2dapi_2escm",(void*)f_5000},
{"f_5006:setup_2dapi_2escm",(void*)f_5006},
{"f_4343:setup_2dapi_2escm",(void*)f_4343},
{"f_4349:setup_2dapi_2escm",(void*)f_4349},
{"f_2750:setup_2dapi_2escm",(void*)f_2750},
{"f_4375:setup_2dapi_2escm",(void*)f_4375},
{"f_4372:setup_2dapi_2escm",(void*)f_4372},
{"f_4378:setup_2dapi_2escm",(void*)f_4378},
{"f_1954:setup_2dapi_2escm",(void*)f_1954},
{"f_1950:setup_2dapi_2escm",(void*)f_1950},
{"f_4366:setup_2dapi_2escm",(void*)f_4366},
{"f_4940:setup_2dapi_2escm",(void*)f_4940},
{"f_1957:setup_2dapi_2escm",(void*)f_1957},
{"f_4310:setup_2dapi_2escm",(void*)f_4310},
{"f_3499:setup_2dapi_2escm",(void*)f_3499},
{"f_4319:setup_2dapi_2escm",(void*)f_4319},
{"f_4313:setup_2dapi_2escm",(void*)f_4313},
{"f_4316:setup_2dapi_2escm",(void*)f_4316},
{"f_3482:setup_2dapi_2escm",(void*)f_3482},
{"f_4945:setup_2dapi_2escm",(void*)f_4945},
{"f_3488:setup_2dapi_2escm",(void*)f_3488},
{"f_3485:setup_2dapi_2escm",(void*)f_3485},
{"f_4920:setup_2dapi_2escm",(void*)f_4920},
{"f_4304:setup_2dapi_2escm",(void*)f_4304},
{"f_2768:setup_2dapi_2escm",(void*)f_2768},
{"f_3470:setup_2dapi_2escm",(void*)f_3470},
{"f_3473:setup_2dapi_2escm",(void*)f_3473},
{"f_4955:setup_2dapi_2escm",(void*)f_4955},
{"f_4331:setup_2dapi_2escm",(void*)f_4331},
{"f_3476:setup_2dapi_2escm",(void*)f_3476},
{"f_3479:setup_2dapi_2escm",(void*)f_3479},
{"f_4337:setup_2dapi_2escm",(void*)f_4337},
{"f_3981:setup_2dapi_2escm",(void*)f_3981},
{"f_4325:setup_2dapi_2escm",(void*)f_4325},
{"f_4323:setup_2dapi_2escm",(void*)f_4323},
{"f_3455:setup_2dapi_2escm",(void*)f_3455},
{"f_3995:setup_2dapi_2escm",(void*)f_3995},
{"f_3992:setup_2dapi_2escm",(void*)f_3992},
{"f_3998:setup_2dapi_2escm",(void*)f_3998},
{"f_3457:setup_2dapi_2escm",(void*)f_3457},
{"f_3727:setup_2dapi_2escm",(void*)f_3727},
{"f_3440:setup_2dapi_2escm",(void*)f_3440},
{"f_3985:setup_2dapi_2escm",(void*)f_3985},
{"f_2322:setup_2dapi_2escm",(void*)f_2322},
{"f_3989:setup_2dapi_2escm",(void*)f_3989},
{"f_4050:setup_2dapi_2escm",(void*)f_4050},
{"f_3434:setup_2dapi_2escm",(void*)f_3434},
{"f_2329:setup_2dapi_2escm",(void*)f_2329},
{"f_2325:setup_2dapi_2escm",(void*)f_2325},
{"f_5063:setup_2dapi_2escm",(void*)f_5063},
{"f_5060:setup_2dapi_2escm",(void*)f_5060},
{"f_3422:setup_2dapi_2escm",(void*)f_3422},
{"f_2732:setup_2dapi_2escm",(void*)f_2732},
{"f_2735:setup_2dapi_2escm",(void*)f_2735},
{"f_2738:setup_2dapi_2escm",(void*)f_2738},
{"f_3414:setup_2dapi_2escm",(void*)f_3414},
{"f_5045:setup_2dapi_2escm",(void*)f_5045},
{"f_2525:setup_2dapi_2escm",(void*)f_2525},
{"f_2528:setup_2dapi_2escm",(void*)f_2528},
{"f_5056:setup_2dapi_2escm",(void*)f_5056},
{"f_3700:setup_2dapi_2escm",(void*)f_3700},
{"f_3702:setup_2dapi_2escm",(void*)f_3702},
{"f_2511:setup_2dapi_2escm",(void*)f_2511},
{"f_4585:setup_2dapi_2escm",(void*)f_4585},
{"f_4580:setup_2dapi_2escm",(void*)f_4580},
{"f_4557:setup_2dapi_2escm",(void*)f_4557},
{"f_4554:setup_2dapi_2escm",(void*)f_4554},
{"f_4551:setup_2dapi_2escm",(void*)f_4551},
{"f_2720:setup_2dapi_2escm",(void*)f_2720},
{"f_2726:setup_2dapi_2escm",(void*)f_2726},
{"f_1977:setup_2dapi_2escm",(void*)f_1977},
{"f_4565:setup_2dapi_2escm",(void*)f_4565},
{"f_4562:setup_2dapi_2escm",(void*)f_4562},
{"f_4560:setup_2dapi_2escm",(void*)f_4560},
{"f_1982:setup_2dapi_2escm",(void*)f_1982},
{"f_1986:setup_2dapi_2escm",(void*)f_1986},
{"f_4086:setup_2dapi_2escm",(void*)f_4086},
{"f_2708:setup_2dapi_2escm",(void*)f_2708},
{"f_4075:setup_2dapi_2escm",(void*)f_4075},
{"f_5076:setup_2dapi_2escm",(void*)f_5076},
{"f_1964:setup_2dapi_2escm",(void*)f_1964},
{"f_1967:setup_2dapi_2escm",(void*)f_1967},
{"f_1969:setup_2dapi_2escm",(void*)f_1969},
{"f_1960:setup_2dapi_2escm",(void*)f_1960},
{"f_2388:setup_2dapi_2escm",(void*)f_2388},
{"f_2383:setup_2dapi_2escm",(void*)f_2383},
{"f_4792:setup_2dapi_2escm",(void*)f_4792},
{"f_2392:setup_2dapi_2escm",(void*)f_2392},
{"f_4048:setup_2dapi_2escm",(void*)f_4048},
{"f_1994:setup_2dapi_2escm",(void*)f_1994},
{"f_1998:setup_2dapi_2escm",(void*)f_1998},
{"f_1990:setup_2dapi_2escm",(void*)f_1990},
{"f_4033:setup_2dapi_2escm",(void*)f_4033},
{"f_3693:setup_2dapi_2escm",(void*)f_3693},
{"f_2502:setup_2dapi_2escm",(void*)f_2502},
{"f_2505:setup_2dapi_2escm",(void*)f_2505},
{"f_5030:setup_2dapi_2escm",(void*)f_5030},
{"f_5088:setup_2dapi_2escm",(void*)f_5088},
{"f_5082:setup_2dapi_2escm",(void*)f_5082},
{"f_5085:setup_2dapi_2escm",(void*)f_5085},
{"f_5097:setup_2dapi_2escm",(void*)f_5097},
{"f_5091:setup_2dapi_2escm",(void*)f_5091},
{"f_5094:setup_2dapi_2escm",(void*)f_5094},
{"f_4738:setup_2dapi_2escm",(void*)f_4738},
{"f_2333:setup_2dapi_2escm",(void*)f_2333},
{"f_2310:setup_2dapi_2escm",(void*)f_2310},
{"f_2995:setup_2dapi_2escm",(void*)f_2995},
{"f_2986:setup_2dapi_2escm",(void*)f_2986},
{"f_2304:setup_2dapi_2escm",(void*)f_2304},
{"f_2536:setup_2dapi_2escm",(void*)f_2536},
{"f_2534:setup_2dapi_2escm",(void*)f_2534},
{"f_2361:setup_2dapi_2escm",(void*)f_2361},
{"f_2319:setup_2dapi_2escm",(void*)f_2319},
{"f_2316:setup_2dapi_2escm",(void*)f_2316},
{"f_2313:setup_2dapi_2escm",(void*)f_2313},
{"f_3972:setup_2dapi_2escm",(void*)f_3972},
{"f_3975:setup_2dapi_2escm",(void*)f_3975},
{"f_3978:setup_2dapi_2escm",(void*)f_3978},
{"f_2365:setup_2dapi_2escm",(void*)f_2365},
{"f_2340:setup_2dapi_2escm",(void*)f_2340},
{"f_3962:setup_2dapi_2escm",(void*)f_3962},
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
o|hiding nonexported module bindings: setup-api#constant26 
o|hiding nonexported module bindings: setup-api#*cc* 
o|hiding nonexported module bindings: setup-api#*cxx* 
o|hiding nonexported module bindings: setup-api#*target-cflags* 
o|hiding nonexported module bindings: setup-api#*target-libs* 
o|hiding nonexported module bindings: setup-api#*target-lib-home* 
o|hiding nonexported module bindings: setup-api#*sudo* 
o|hiding nonexported module bindings: setup-api#*windows-shell* 
o|hiding nonexported module bindings: setup-api#*registered-programs* 
o|hiding nonexported module bindings: setup-api#*windows* 
o|hiding nonexported module bindings: setup-api#*chicken-bin-path* 
o|hiding nonexported module bindings: setup-api#*csc-options* 
o|hiding nonexported module bindings: setup-api#*base-directory* 
o|hiding nonexported module bindings: setup-api#*copy-command* 
o|hiding nonexported module bindings: setup-api#*remove-command* 
o|hiding nonexported module bindings: setup-api#*move-command* 
o|hiding nonexported module bindings: setup-api#*chmod-command* 
o|hiding nonexported module bindings: setup-api#*ranlib-command* 
o|hiding nonexported module bindings: setup-api#*mkdir-command* 
o|hiding nonexported module bindings: setup-api#windows-user-install-setup 
o|hiding nonexported module bindings: setup-api#unix-user-install-setup 
o|hiding nonexported module bindings: setup-api#windows-sudo-install-setup 
o|hiding nonexported module bindings: setup-api#unix-sudo-install-setup 
o|hiding nonexported module bindings: setup-api#user-install-setup 
o|hiding nonexported module bindings: setup-api#sudo-install-setup 
o|hiding nonexported module bindings: setup-api#ignore-errors 
o|hiding nonexported module bindings: setup-api#target-prefix 
o|hiding nonexported module bindings: setup-api#fixpath 
o|hiding nonexported module bindings: setup-api#make-setup-info-pathname 
o|hiding nonexported module bindings: setup-api#write-info 
o|hiding nonexported module bindings: setup-api#path-prefix? 
o|hiding nonexported module bindings: setup-api#make-dest-pathname 
o|hiding nonexported module bindings: setup-api#check-filelist 
o|hiding nonexported module bindings: setup-api#translate-extension 
o|hiding nonexported module bindings: setup-api#what-version 
o|hiding nonexported module bindings: setup-api#supply-version 
o|hiding nonexported module bindings: setup-api#repo-path 
o|hiding nonexported module bindings: setup-api#ensure-directory 
o|hiding nonexported module bindings: setup-api#$system 
S|applied compiler syntax:
S|  for-each		4
S|  map		10
S|  printf		4
S|  sprintf		14
o|eliminated procedure checks: 138 
o|specializations:
o|  1 (current-exception-handler procedure)
o|  1 (current-error-port)
o|  1 (string=? string string)
o|  1 (= fixnum fixnum)
o|  1 (length list)
o|  3 (zero? fixnum)
o|  3 (##sys#check-list (or pair list) *)
o|  14 (car pair)
o|  6 (cdr pair)
o|  2 (string-append string string)
o|  18 (##sys#check-output-port * * *)
(o e)|safe calls: 450 
(o e)|assignments to immediate values: 2 
o|safe globals: (setup-api#constant26) 
o|Removed `not' forms: 4 
o|inlining procedure: k2013 
o|inlining procedure: k2013 
o|inlining procedure: k2032 
o|inlining procedure: k2032 
o|inlining procedure: k2188 
o|contracted procedure: "(setup-api.scm:169) setup-api#windows-user-install-setup" 
o|inlining procedure: k2188 
o|contracted procedure: "(setup-api.scm:170) setup-api#unix-user-install-setup" 
o|inlining procedure: k2213 
o|propagated global variable: r22145305 setup-api#*sudo* 
o|inlining procedure: k2213 
o|contracted procedure: "(setup-api.scm:180) setup-api#sudo-install-setup" 
o|inlining procedure: k2201 
o|contracted procedure: "(setup-api.scm:175) setup-api#windows-sudo-install-setup" 
o|inlining procedure: k2201 
o|contracted procedure: "(setup-api.scm:176) setup-api#unix-sudo-install-setup" 
o|substituted constant variable: a2086 
o|substituted constant variable: a2087 
o|substituted constant variable: a2102 
o|substituted constant variable: a2103 
o|substituted constant variable: a2118 
o|substituted constant variable: a2119 
o|substituted constant variable: a2134 
o|substituted constant variable: a2135 
o|substituted constant variable: a2150 
o|substituted constant variable: a2151 
o|substituted constant variable: a2166 
o|substituted constant variable: a2167 
o|inlining procedure: k2181 
o|inlining procedure: k2181 
o|inlining procedure: k2241 
o|inlining procedure: k2276 
o|inlining procedure: k2276 
o|inlining procedure: k2241 
o|substituted constant variable: a2306 
o|substituted constant variable: a2307 
o|propagated global variable: out256260 ##sys#standard-output 
o|substituted constant variable: a2342 
o|substituted constant variable: a2343 
o|propagated global variable: out256260 ##sys#standard-output 
o|inlining procedure: k2396 
o|inlining procedure: k2396 
o|contracted procedure: "(setup-api.scm:266) setup-api#fixpath" 
o|inlining procedure: k2452 
o|substituted constant variable: setup-api#*csc-options* 
o|inlining procedure: k2538 
o|contracted procedure: "(setup-api.scm:254) g369378" 
o|substituted constant variable: a2521 
o|inlining procedure: k2538 
o|inlining procedure: k2572 
o|contracted procedure: "(setup-api.scm:251) g342351" 
o|substituted constant variable: a2498 
o|inlining procedure: k2572 
o|inlining procedure: k2615 
o|inlining procedure: k2615 
o|inlining procedure: k2452 
o|inlining procedure: k2685 
o|inlining procedure: k2685 
o|inlining procedure: k2760 
o|contracted procedure: "(setup-api.scm:263) g394430" 
o|propagated global variable: out433437 ##sys#standard-output 
o|substituted constant variable: a2728 
o|substituted constant variable: a2729 
o|inlining procedure: k2718 
o|propagated global variable: out433437 ##sys#standard-output 
o|inlining procedure: k2718 
o|inlining procedure: k2760 
o|inlining procedure: k2783 
o|inlining procedure: k2783 
o|inlining procedure: k2849 
o|inlining procedure: k2849 
o|propagated global variable: out575579 ##sys#standard-output 
o|substituted constant variable: a2866 
o|substituted constant variable: a2867 
o|inlining procedure: k2859 
o|propagated global variable: out575579 ##sys#standard-output 
o|inlining procedure: k2859 
o|inlining procedure: k2904 
o|inlining procedure: k2904 
o|propagated global variable: g623624 pp 
o|propagated global variable: g635636 pp 
o|consed rest parameter at call site: "(setup-api.scm:318) setup-api#ensure-directory" 2 
o|contracted procedure: "(setup-api.scm:317) setup-api#make-setup-info-pathname" 
o|consed rest parameter at call site: "(setup-api.scm:317) setup-api#repo-path" 1 
o|propagated global variable: out603607 ##sys#standard-output 
o|substituted constant variable: a2970 
o|substituted constant variable: a2971 
o|propagated global variable: out603607 ##sys#standard-output 
o|inlining procedure: k3024 
o|inlining procedure: k3052 
o|inlining procedure: k3052 
o|inlining procedure: k3024 
o|consed rest parameter at call site: "(setup-api.scm:342) setup-api#ensure-directory" 2 
o|contracted procedure: k3094 
o|inlining procedure: k3097 
o|inlining procedure: k3097 
o|contracted procedure: "(setup-api.scm:330) setup-api#path-prefix?" 
o|consed rest parameter at call site: "(setup-api.scm:356) setup-api#ensure-directory" 2 
o|inlining procedure: k3231 
o|inlining procedure: k3231 
o|inlining procedure: k3307 
o|contracted procedure: "(setup-api.scm:369) g737746" 
o|inlining procedure: k3261 
o|inlining procedure: k3261 
o|inlining procedure: k3276 
o|inlining procedure: k3276 
o|inlining procedure: k3307 
o|removed unused formal parameters: (a801) 
o|inlining procedure: k3419 
o|removed unused parameter to known procedure: a801 "(setup-api.scm:392) g799800" 
o|inlining procedure: k3419 
o|contracted procedure: "(setup-api.scm:399) setup-api#what-version" 
o|inlining procedure: k3381 
o|inlining procedure: k3381 
o|inlining procedure: k3396 
o|inlining procedure: k3396 
o|inlining procedure: k3513 
o|inlining procedure: k3513 
o|inlining procedure: k3597 
o|inlining procedure: k3597 
o|contracted procedure: k3606 
o|contracted procedure: "(setup-api.scm:447) setup-api#target-prefix" 
o|inlining procedure: k2443 
o|inlining procedure: k2443 
o|inlining procedure: k3624 
o|inlining procedure: k3624 
o|inlining procedure: k3648 
o|inlining procedure: k3648 
o|inlining procedure: k3559 
o|inlining procedure: k3704 
o|inlining procedure: k3704 
o|consed rest parameter at call site: "(setup-api.scm:432) setup-api#repo-path" 1 
o|consed rest parameter at call site: "(setup-api.scm:431) setup-api#repo-path" 1 
o|inlining procedure: k3736 
o|inlining procedure: k3736 
o|inlining procedure: k3559 
o|contracted procedure: "(setup-api.scm:455) setup-api#translate-extension" 
o|contracted procedure: k3354 
o|inlining procedure: k3351 
o|inlining procedure: k3363 
o|inlining procedure: k3363 
o|inlining procedure: k3351 
o|inlining procedure: k3799 
o|inlining procedure: k3799 
o|inlining procedure: k3767 
o|inlining procedure: k3837 
o|inlining procedure: k3837 
o|inlining procedure: k3873 
o|inlining procedure: k3873 
o|inlining procedure: k3910 
o|inlining procedure: k3910 
o|consed rest parameter at call site: "(setup-api.scm:461) setup-api#ensure-directory" 2 
o|inlining procedure: k3946 
o|inlining procedure: k3946 
o|inlining procedure: k3767 
o|inlining procedure: k3996 
o|inlining procedure: k3996 
o|inlining procedure: k3967 
o|inlining procedure: k4052 
o|inlining procedure: k4052 
o|consed rest parameter at call site: "(setup-api.scm:483) setup-api#ensure-directory" 2 
o|inlining procedure: k4088 
o|inlining procedure: k4088 
o|inlining procedure: k3967 
o|merged explicitly consed rest parameter: tmp10761077 
o|consed rest parameter at call site: "(setup-api.scm:510) setup-api#ensure-directory" 2 
o|inlining procedure: k4115 
o|inlining procedure: k4115 
o|substituted constant variable: a4138 
o|substituted constant variable: a4139 
o|merged explicitly consed rest parameter: tmp11021104 
o|inlining procedure: k4174 
o|inlining procedure: k4183 
o|inlining procedure: k4183 
o|inlining procedure: k4195 
o|inlining procedure: k4195 
o|inlining procedure: k4174 
o|substituted constant variable: a4306 
o|substituted constant variable: a4307 
o|substituted constant variable: a4368 
o|substituted constant variable: a4369 
o|inlining procedure: k4402 
o|inlining procedure: k4402 
o|inlining procedure: k4413 
o|inlining procedure: k4413 
o|inlining procedure: k4470 
o|propagated global variable: r44715443 setup-api#*cxx* 
o|inlining procedure: k4470 
o|propagated global variable: r44715444 setup-api#*cc* 
o|substituted constant variable: a4485 
o|substituted constant variable: a4486 
o|substituted constant variable: a4547 
o|substituted constant variable: a4548 
o|inlining procedure: k4587 
o|contracted procedure: "(setup-api.scm:560) g12501259" 
o|inlining procedure: k4575 
o|inlining procedure: k4575 
o|inlining procedure: k4587 
o|inlining procedure: k4636 
o|inlining procedure: k4636 
o|inlining procedure: k4651 
o|inlining procedure: k4666 
o|inlining procedure: k4666 
o|inlining procedure: k4651 
o|inlining procedure: k4703 
o|inlining procedure: k4703 
o|inlining procedure: k4758 
o|inlining procedure: k4758 
o|contracted procedure: k4811 
o|inlining procedure: k4808 
o|substituted constant variable: a4867 
o|substituted constant variable: a4868 
o|inlining procedure: k4912 
o|inlining procedure: k4912 
o|substituted constant variable: a4936 
o|inlining procedure: k4947 
o|inlining procedure: k4947 
o|inlining procedure: k4808 
o|inlining procedure: k4998 
o|inlining procedure: k4998 
o|inlining procedure: k5022 
o|inlining procedure: k5022 
o|inlining procedure: k5064 
o|inlining procedure: k5064 
o|substituted constant variable: a5078 
o|substituted constant variable: a5079 
o|inlining procedure: k5111 
o|inlining procedure: k5111 
o|inlining procedure: k5154 
o|inlining procedure: k5154 
o|inlining procedure: k5177 
o|inlining procedure: k5177 
o|substituted constant variable: a5212 
o|propagated global variable: g213214 exit 
o|replaced variables: 512 
o|removed binding forms: 297 
o|removed side-effect free assignment to unused variable: setup-api#*csc-options* 
o|substituted constant variable: r21825311 
o|substituted constant variable: r21825311 
o|propagated global variable: out256260 ##sys#standard-output 
o|inlining procedure: k2615 
o|propagated global variable: out433437 ##sys#standard-output 
o|converted assignments to bindings: (smooth401) 
o|propagated global variable: out575579 ##sys#standard-output 
o|propagated global variable: out603607 ##sys#standard-output 
o|substituted constant variable: r33975368 
o|substituted constant variable: r35145371 
o|substituted constant variable: r35145371 
o|removed call to pure procedure with unused result: "(setup-api.scm:408) get-keyword" 
o|substituted constant variable: r24445376 
o|substituted constant variable: r36495380 
o|inlining procedure: k3351 
o|propagated global variable: r33525517 ##sys#load-dynamic-extension 
o|propagated global variable: r33525517 ##sys#load-dynamic-extension 
o|inlining procedure: k3351 
o|inlining procedure: k3351 
o|inlining procedure: k3351 
o|converted assignments to bindings: (exify939) 
o|inlining procedure: k4174 
o|inlining procedure: k4174 
o|substituted constant variable: r44035433 
o|substituted constant variable: r44035433 
o|substituted constant variable: r44035435 
o|substituted constant variable: r44035435 
o|converted assignments to bindings: (version->list1240) 
o|substituted constant variable: r51555481 
o|substituted constant variable: r51785483 
o|converted assignments to bindings: (verb573) 
o|converted assignments to bindings: (reg304) 
o|simplifications: ((let . 5)) 
o|replaced variables: 23 
o|removed binding forms: 562 
o|Removed `not' forms: 1 
o|substituted constant variable: r26165493 
o|inlining procedure: k3273 
o|inlining procedure: k3390 
o|inlining procedure: k3390 
o|contracted procedure: k3465 
o|inlining procedure: k5183 
o|replaced variables: 8 
o|removed binding forms: 49 
o|removed conditional forms: 1 
o|Removed `not' forms: 1 
o|substituted constant variable: r32745575 
o|substituted constant variable: r32745575 
o|substituted constant variable: r32745575 
o|substituted constant variable: r33915579 
o|substituted constant variable: r33915580 
o|substituted constant variable: r33525519 
o|substituted constant variable: r33525521 
o|replaced variables: 2 
o|removed binding forms: 13 
o|removed conditional forms: 3 
o|removed binding forms: 7 
o|simplifications: ((if . 30) (##core#call . 264)) 
o|  call simplifications:
o|    not	2
o|    number?	3
o|    >
o|    =
o|    string->number
o|    ##sys#get-keyword
o|    ##sys#call-with-values	3
o|    ##sys#apply	3
o|    ##sys#fudge
o|    eq?	7
o|    assq	3
o|    equal?	6
o|    string?
o|    ##sys#cons	5
o|    ##sys#list	17
o|    string=?	3
o|    ##sys#check-list	11
o|    pair?	23
o|    ##sys#setslot	10
o|    ##sys#slot	38
o|    cons	22
o|    assoc
o|    cdr	5
o|    alist-cons
o|    list?	8
o|    list	22
o|    cadr	10
o|    eof-object?
o|    null?	26
o|    car	26
o|    apply	2
o|contracted procedure: k2020 
o|contracted procedure: k2010 
o|contracted procedure: k2039 
o|contracted procedure: k2029 
o|contracted procedure: k2216 
o|contracted procedure: k2222 
o|contracted procedure: k2244 
o|contracted procedure: k2251 
o|contracted procedure: k2261 
o|contracted procedure: k2279 
o|contracted procedure: k2335 
o|contracted procedure: k2367 
o|contracted procedure: k2374 
o|contracted procedure: k2393 
o|contracted procedure: k2403 
o|contracted procedure: k2656 
o|contracted procedure: k2659 
o|contracted procedure: k2669 
o|contracted procedure: k2679 
o|contracted procedure: k2455 
o|contracted procedure: k2474 
o|contracted procedure: k2478 
o|contracted procedure: k2482 
o|contracted procedure: k2490 
o|contracted procedure: k2506 
o|contracted procedure: k2513 
o|contracted procedure: k2529 
o|contracted procedure: k2541 
o|contracted procedure: k2544 
o|contracted procedure: k2547 
o|contracted procedure: k2555 
o|contracted procedure: k2563 
o|contracted procedure: k2575 
o|contracted procedure: k2578 
o|contracted procedure: k2581 
o|contracted procedure: k2589 
o|contracted procedure: k2597 
o|contracted procedure: k2634 
o|contracted procedure: k2688 
o|contracted procedure: k2691 
o|contracted procedure: k2694 
o|contracted procedure: k2702 
o|contracted procedure: k2710 
o|contracted procedure: k2742 
o|contracted procedure: k2745 
o|contracted procedure: k2751 
o|contracted procedure: k2763 
o|contracted procedure: k2773 
o|contracted procedure: k2777 
o|contracted procedure: k2786 
o|contracted procedure: k2789 
o|contracted procedure: k2792 
o|contracted procedure: k2800 
o|contracted procedure: k2808 
o|contracted procedure: k2880 
o|contracted procedure: k5239 
o|contracted procedure: k5235 
o|contracted procedure: k2991 
o|contracted procedure: k2886 
o|contracted procedure: k2915 
o|contracted procedure: k2911 
o|contracted procedure: k2936 
o|contracted procedure: k2932 
o|contracted procedure: k2823 
o|inlining procedure: k2817 
o|contracted procedure: k3145 
o|contracted procedure: k2997 
o|contracted procedure: k3139 
o|contracted procedure: k3000 
o|contracted procedure: k3124 
o|contracted procedure: k3006 
o|contracted procedure: k3055 
o|contracted procedure: k3065 
o|contracted procedure: k3069 
o|contracted procedure: k3083 
o|contracted procedure: k3079 
o|contracted procedure: k3110 
o|contracted procedure: k3117 
o|contracted procedure: k3120 
o|contracted procedure: k3130 
o|contracted procedure: k3185 
o|contracted procedure: k3181 
o|contracted procedure: k3196 
o|contracted procedure: k3203 
o|contracted procedure: k3206 
o|contracted procedure: k3221 
o|contracted procedure: k3217 
o|contracted procedure: k3234 
o|contracted procedure: k3241 
o|contracted procedure: k3256 
o|contracted procedure: k3298 
o|contracted procedure: k3310 
o|contracted procedure: k3313 
o|contracted procedure: k3316 
o|contracted procedure: k3324 
o|contracted procedure: k3332 
o|contracted procedure: k3264 
o|contracted procedure: k3282 
o|contracted procedure: k3273 
o|contracted procedure: k3292 
o|contracted procedure: k3416 
o|contracted procedure: k3428 
o|contracted procedure: k3445 
o|contracted procedure: k3449 
o|contracted procedure: k3399 
o|contracted procedure: k3410 
o|contracted procedure: k3390 
o|contracted procedure: k3547 
o|contracted procedure: k3459 
o|contracted procedure: k3541 
o|contracted procedure: k3462 
o|contracted procedure: k3493 
o|contracted procedure: k3513 
o|contracted procedure: k3527 
o|contracted procedure: k3523 
o|contracted procedure: k3535 
o|contracted procedure: k3531 
o|contracted procedure: k3745 
o|contracted procedure: k3556 
o|contracted procedure: k3574 
o|contracted procedure: k3591 
o|contracted procedure: k3613 
o|contracted procedure: k3638 
o|contracted procedure: k3634 
o|contracted procedure: k3645 
o|contracted procedure: k3662 
o|contracted procedure: k3651 
o|contracted procedure: k3677 
o|contracted procedure: k3673 
o|contracted procedure: k3684 
o|contracted procedure: k3688 
o|contracted procedure: k3707 
o|contracted procedure: k3710 
o|contracted procedure: k3713 
o|contracted procedure: k3721 
o|contracted procedure: k3729 
o|contracted procedure: k3739 
o|contracted procedure: k3736 
o|contracted procedure: k3955 
o|contracted procedure: k3754 
o|contracted procedure: k3764 
o|contracted procedure: k3372 
o|contracted procedure: k3341 
o|contracted procedure: k3360 
o|contracted procedure: k3366 
o|contracted procedure: k3785 
o|contracted procedure: k3810 
o|contracted procedure: k3806 
o|contracted procedure: k3817 
o|contracted procedure: k3821 
o|contracted procedure: k3840 
o|contracted procedure: k3843 
o|contracted procedure: k3846 
o|contracted procedure: k3854 
o|contracted procedure: k3862 
o|contracted procedure: k3868 
o|contracted procedure: k3876 
o|contracted procedure: k3891 
o|contracted procedure: k3895 
o|contracted procedure: k3901 
o|contracted procedure: k3913 
o|contracted procedure: k3916 
o|contracted procedure: k3919 
o|contracted procedure: k3927 
o|contracted procedure: k3935 
o|contracted procedure: k3949 
o|contracted procedure: k3946 
o|contracted procedure: k4097 
o|contracted procedure: k3964 
o|contracted procedure: k3982 
o|contracted procedure: k4007 
o|contracted procedure: k4003 
o|contracted procedure: k4014 
o|contracted procedure: k4018 
o|contracted procedure: k4042 
o|contracted procedure: k4038 
o|contracted procedure: k4055 
o|contracted procedure: k4058 
o|contracted procedure: k4061 
o|contracted procedure: k4069 
o|contracted procedure: k4077 
o|contracted procedure: k4091 
o|contracted procedure: k4088 
o|contracted procedure: k4159 
o|contracted procedure: k4106 
o|contracted procedure: k4150 
o|contracted procedure: k4216 
o|contracted procedure: k4168 
o|contracted procedure: k4206 
o|contracted procedure: k4202 
o|contracted procedure: k4225 
o|contracted procedure: k4405 
o|contracted procedure: k4420 
o|contracted procedure: k4436 
o|contracted procedure: k4440 
o|contracted procedure: k4567 
o|contracted procedure: k4590 
o|contracted procedure: k4593 
o|contracted procedure: k4596 
o|contracted procedure: k4604 
o|contracted procedure: k4612 
o|contracted procedure: k4572 
o|contracted procedure: k4639 
o|contracted procedure: k4645 
o|contracted procedure: k4732 
o|contracted procedure: k4654 
o|contracted procedure: k4691 
o|contracted procedure: k4660 
o|contracted procedure: k4663 
o|contracted procedure: k4672 
o|contracted procedure: k4728 
o|contracted procedure: k4694 
o|contracted procedure: k4709 
o|contracted procedure: k4774 
o|contracted procedure: k4752 
o|contracted procedure: k4755 
o|contracted procedure: k4793 
o|contracted procedure: k4971 
o|contracted procedure: k4805 
o|contracted procedure: k4856 
o|contracted procedure: k4915 
o|contracted procedure: k4950 
o|contracted procedure: k4960 
o|contracted procedure: k4964 
o|contracted procedure: k4983 
o|contracted procedure: k5010 
o|contracted procedure: k5013 
o|contracted procedure: k5025 
o|contracted procedure: k5035 
o|contracted procedure: k5039 
o|contracted procedure: k5046 
o|contracted procedure: k5067 
o|contracted procedure: k5126 
o|contracted procedure: k5157 
o|contracted procedure: k5160 
o|contracted procedure: k5169 
o|contracted procedure: k5172 
o|contracted procedure: k5180 
o|contracted procedure: k5183 
o|contracted procedure: k5206 
o|contracted procedure: k5289 
o|simplifications: ((let . 52)) 
o|removed binding forms: 240 
o|replaced variables: 104 
o|simplifications: ((if . 1)) 
o|removed binding forms: 52 
o|contracted procedure: k4608 
o|removed binding forms: 1 
o|customizable procedures: (reg304 k5166 ensure-string1308 g14531454 g14261433 for-each-loop14251437 g13891396 for-each-loop13881403 k4918 walk1383 version->list1240 loop1272 map-loop12441265 g10361045 map-loop10301058 k3987 g953962 map-loop947965 exify939 g981990 map-loop9751003 k3790 setup-api#check-filelist g883892 map-loop877919 setup-api#write-info k3579 k3627 k3505 setup-api#supply-version g799800 map-loop731758 setup-api#make-dest-pathname k3168 k3009 g677684 for-each-loop676687 walk667 setup-api#repo-path setup-api#ensure-directory verb573 map-loop445462 for-each-loop393469 map-loop406423 k2470 map-loop336354 map-loop363381 setup-api#$system loop265 setup-api#user-install-setup) 
o|calls to known targets: 144 
o|identified direct recursive calls: f_3229 1 
o|identified direct recursive calls: f_4585 1 
o|identified direct recursive calls: f_4634 1 
o|fast box initializations: 18 
o|fast global references: 85 
o|fast global assignments: 47 
o|dropping unused closure argument: f_2407 
o|dropping unused closure argument: f_3758 
o|dropping unused closure argument: f_5175 
o|dropping unused closure argument: f_3229 
o|dropping unused closure argument: f_2185 
o|dropping unused closure argument: f_2884 
o|dropping unused closure argument: f_3254 
o|dropping unused closure argument: f_2857 
o|dropping unused closure argument: f_4166 
o|dropping unused closure argument: f_4104 
o|dropping unused closure argument: f_3414 
o|dropping unused closure argument: f_5056 
o|dropping unused closure argument: f_4565 
*/
/* end of file */

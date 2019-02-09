/* Generated from setup-download.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: setup-download.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -emit-import-library setup-download -output-file setup-download.c
   used units: library eval chicken_2dsyntax extras irregex posix utils srfi_2d1 data_2dstructures tcp srfi_2d13 files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externimport void C_ccall C_tcp_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[259];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,34),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,100,32,102,115,116,114,49,53,55,32,97,114,103,115,49,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,40),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,103,101,116,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,57),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,101,120,105,115,116,105,110,103,45,118,101,114,115,105,111,110,32,101,103,103,49,54,57,32,118,101,114,115,105,111,110,49,55,48,32,118,115,49,55,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,7),40,97,49,53,54,48,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,52,53,32,103,51,53,50,51,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,18),40,97,49,55,51,57,32,103,51,51,56,51,51,57,51,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,33),40,97,49,53,57,55,32,115,114,99,50,56,51,50,56,52,50,57,48,32,118,101,114,50,56,53,50,56,54,50,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,59),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,111,99,97,116,101,45,101,103,103,47,108,111,99,97,108,32,101,103,103,50,54,48,32,100,105,114,50,54,49,32,46,32,116,109,112,50,53,57,50,54,50,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,97,49,56,51,54,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,97,49,56,57,52,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,13),40,97,49,56,56,56,32,101,120,51,56,53,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,97,49,57,48,57,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,7),40,97,49,57,50,49,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,20),40,97,49,57,49,53,32,46,32,97,114,103,115,51,55,57,51,56,55,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,57,48,51,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,15),40,97,49,56,56,50,32,107,51,55,56,51,56,52,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,17),40,97,49,56,53,55,32,114,101,116,117,114,110,51,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,37),40,97,49,56,52,50,32,108,111,99,51,54,55,51,54,56,51,55,49,32,118,101,114,115,105,111,110,51,54,57,51,55,48,51,55,50,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,14),40,97,49,56,51,48,32,101,103,103,51,54,54,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,46),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,103,97,116,104,101,114,45,101,103,103,45,105,110,102,111,114,109,97,116,105,111,110,32,100,105,114,51,54,52,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,66),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,109,97,107,101,45,115,118,110,45,108,115,45,99,109,100,32,117,97,114,103,51,57,51,32,112,97,114,103,51,57,52,32,112,110,97,109,51,57,53,32,116,109,112,51,57,50,51,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,7),40,97,50,50,53,48,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,37),40,97,50,50,55,56,32,102,105,108,101,100,105,114,53,50,57,53,51,48,53,51,52,32,118,101,114,53,51,49,53,51,50,53,51,53,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,12),40,97,50,51,52,52,32,102,53,50,55,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,58),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,111,99,97,116,101,45,101,103,103,47,115,118,110,32,101,103,103,53,48,53,32,114,101,112,111,53,48,54,32,46,32,116,109,112,53,48,52,53,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,39),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,100,101,99,111,110,115,116,114,117,99,116,45,117,114,108,32,117,114,108,53,53,48,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,50,53,49,48,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,50,53,53,50,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,14),40,97,50,53,52,54,32,101,120,110,54,48,52,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,51,49,55,52,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,11),40,103,55,50,53,32,109,55,50,55,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,51,49,52,55,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,20),40,103,101,116,45,102,105,108,101,115,32,102,105,108,101,115,55,52,51,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,32),40,97,51,49,56,48,32,105,110,55,55,56,55,55,57,55,56,50,32,111,117,116,55,56,48,55,56,49,55,56,51,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,50,53,55,48,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,7),40,97,50,53,57,50,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,20),40,97,50,53,56,54,32,46,32,97,114,103,115,53,57,56,54,49,51,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,50,53,54,52,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,15),40,97,50,53,52,48,32,107,53,57,55,54,48,51,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,31),40,97,50,53,49,54,32,104,111,115,116,53,56,55,32,112,111,114,116,53,56,56,32,108,111,99,110,53,56,57,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,58),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,111,99,97,116,101,45,101,103,103,47,104,116,116,112,32,101,103,103,53,54,54,32,117,114,108,53,54,55,32,46,32,116,109,112,53,54,53,53,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,50,55,53,48,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,50,55,53,51,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,50,55,53,54,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,50,55,53,57,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,78),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,109,97,107,101,45,72,84,84,80,45,71,69,84,47,49,46,49,32,108,111,99,97,116,105,111,110,54,50,51,32,117,115,101,114,45,97,103,101,110,116,54,50,52,32,104,111,115,116,54,50,53,32,116,109,112,54,50,50,54,50,54,41,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,53),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,114,101,115,112,111,110,115,101,45,109,97,116,99,104,45,99,111,100,101,63,32,109,114,115,112,54,51,56,32,99,111,100,101,54,51,57,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,50,56,48,54,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,20),40,103,101,116,45,99,104,117,110,107,115,32,100,97,116,97,56,50,48,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,50,57,48,48,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,36),40,97,50,57,48,54,32,105,110,112,120,54,56,50,54,56,51,54,56,54,32,111,117,116,112,120,54,56,52,54,56,53,54,56,55,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,32),40,97,50,56,50,48,32,105,110,54,54,53,54,54,54,54,55,53,32,111,117,116,54,54,55,54,54,56,54,55,54,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,100),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,104,116,116,112,45,99,111,110,110,101,99,116,32,104,111,115,116,54,52,52,32,112,111,114,116,54,52,53,32,108,111,99,110,54,52,54,32,112,114,111,120,121,45,104,111,115,116,54,52,55,32,112,114,111,120,121,45,112,111,114,116,54,52,56,32,112,114,111,120,121,45,117,115,101,114,45,112,97,115,115,54,52,57,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,39),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,99,104,101,99,107,45,101,103,103,45,110,97,109,101,32,110,97,109,101,56,51,54,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,7),40,97,51,51,56,50,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,97,51,51,57,49,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,7),40,97,51,52,51,48,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,7),40,97,51,52,51,57,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,80),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,114,101,116,114,105,101,118,101,45,101,120,116,101,110,115,105,111,110,32,110,97,109,101,56,52,50,32,116,114,97,110,115,112,111,114,116,56,52,51,32,108,111,99,97,116,105,111,110,56,52,52,32,46,32,116,109,112,56,52,49,56,52,53,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,7),40,97,51,52,54,54,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,56,49,32,103,49,57,51,50,48,55,41,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,50,53,32,103,52,51,55,52,52,52,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,7),40,97,51,49,57,50,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,97,51,50,48,52,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,32),40,97,51,50,49,52,32,105,110,56,48,51,56,48,52,56,48,55,32,111,117,116,56,48,53,56,48,54,56,48,56,41};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,49),40,97,51,49,57,56,32,104,111,115,116,55,57,49,55,57,50,55,57,55,32,112,111,114,116,55,57,51,55,57,52,55,57,56,32,108,111,99,110,55,57,53,55,57,54,55,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,7),40,97,51,52,55,49,41,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,7),40,97,51,53,49,48,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,69),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,105,115,116,45,101,120,116,101,110,115,105,111,110,115,32,116,114,97,110,115,112,111,114,116,57,48,48,32,108,111,99,97,116,105,111,110,57,48,49,32,46,32,116,109,112,56,57,57,57,48,50,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,7),40,97,51,53,51,51,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,50,51,32,103,50,51,53,50,52,57,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,55,53,32,103,52,56,55,52,57,52,41,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,7),40,97,51,53,51,56,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,97,51,53,54,54,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,85),40,115,101,116,117,112,45,100,111,119,110,108,111,97,100,35,108,105,115,116,45,101,120,116,101,110,115,105,111,110,45,118,101,114,115,105,111,110,115,32,110,97,109,101,57,51,48,32,116,114,97,110,115,112,111,114,116,57,51,49,32,108,111,99,97,116,105,111,110,57,51,50,32,46,32,116,109,112,57,50,57,57,51,51,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word *av) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word *av) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word *av) C_noret;
C_noret_decl(f_2131)
static void C_fcall f_2131(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word *av) C_noret;
C_noret_decl(f_3255)
static void C_fcall f_3255(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word *av) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word *av) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word *av) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word *av) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word *av) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word *av) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word *av) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word *av) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word *av) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word *av) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word *av) C_noret;
C_noret_decl(f_1899)
static void C_ccall f_1899(C_word c,C_word *av) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word *av) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word *av) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word *av) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word *av) C_noret;
C_noret_decl(f_2246)
static void C_ccall f_2246(C_word c,C_word *av) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word *av) C_noret;
C_noret_decl(f_1977)
static void C_ccall f_1977(C_word c,C_word *av) C_noret;
C_noret_decl(f_1971)
static void C_ccall f_1971(C_word c,C_word *av) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word *av) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word *av) C_noret;
C_noret_decl(f_1889)
static void C_ccall f_1889(C_word c,C_word *av) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word *av) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word *av) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word *av) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word *av) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word *av) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word *av) C_noret;
C_noret_decl(f_2008)
static void C_fcall f_2008(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2000)
static void C_ccall f_2000(C_word c,C_word *av) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word *av) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word *av) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word *av) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word *av) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word *av) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word *av) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word *av) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word *av) C_noret;
C_noret_decl(f_2798)
static void C_fcall f_2798(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word *av) C_noret;
C_noret_decl(f_3057)
static void C_fcall f_3057(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word *av) C_noret;
C_noret_decl(f_1423)
static void C_fcall f_1423(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word *av) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word *av) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word *av) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word *av) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word *av) C_noret;
C_noret_decl(f_2345)
static void C_ccall f_2345(C_word c,C_word *av) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word *av) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word *av) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word *av) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word *av) C_noret;
C_noret_decl(f_2359)
static void C_ccall f_2359(C_word c,C_word *av) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word *av) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word *av) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843(C_word c,C_word *av) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word *av) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word *av) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word *av) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word *av) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word *av) C_noret;
C_noret_decl(f_2751)
static void C_ccall f_2751(C_word c,C_word *av) C_noret;
C_noret_decl(f_1928)
static void C_fcall f_1928(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1826)
static void C_ccall f_1826(C_word c,C_word *av) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word *av) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word *av) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word *av) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word *av) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word *av) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word *av) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word *av) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word *av) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word *av) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word *av) C_noret;
C_noret_decl(f_1608)
static void C_fcall f_1608(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word *av) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word *av) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_fcall f_3070(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word *av) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word *av) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word *av) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word *av) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word *av) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word *av) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word *av) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word *av) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word *av) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word *av) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word *av) C_noret;
C_noret_decl(f_2710)
static void C_fcall f_2710(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word *av) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word *av) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word *av) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word *av) C_noret;
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word *av) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word *av) C_noret;
C_noret_decl(f_2775)
static void C_fcall f_2775(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word *av) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word *av) C_noret;
C_noret_decl(f_3146)
static void C_ccall f_3146(C_word c,C_word *av) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word *av) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word *av) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word *av) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word *av) C_noret;
C_noret_decl(f_1351)
static void C_ccall f_1351(C_word c,C_word *av) C_noret;
C_noret_decl(f_1353)
static void C_fcall f_1353(C_word t0) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word *av) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word *av) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word *av) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748(C_word c,C_word *av) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word *av) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word *av) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word *av) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word *av) C_noret;
C_noret_decl(f_1368)
static void C_fcall f_1368(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word *av) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word *av) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word *av) C_noret;
C_noret_decl(f_2896)
static void C_ccall f_2896(C_word c,C_word *av) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word *av) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word *av) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word *av) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word *av) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word *av) C_noret;
C_noret_decl(f_1717)
static void C_fcall f_1717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word *av) C_noret;
C_noret_decl(f_2870)
static void C_fcall f_2870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word *av) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word *av) C_noret;
C_noret_decl(f_1547)
static void C_ccall f_1547(C_word c,C_word *av) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word *av) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word *av) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word *av) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word *av) C_noret;
C_noret_decl(f_2828)
static void C_ccall f_2828(C_word c,C_word *av) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word *av) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word *av) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word *av) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word *av) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word *av) C_noret;
C_noret_decl(f_1556)
static void C_ccall f_1556(C_word c,C_word *av) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word *av) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word *av) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word *av) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word *av) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word *av) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word *av) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word *av) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word *av) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word *av) C_noret;
C_noret_decl(f_2094)
static void C_ccall f_2094(C_word c,C_word *av) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word *av) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word *av) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word *av) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word *av) C_noret;
C_noret_decl(f_1487)
static void C_fcall f_1487(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word *av) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word *av) C_noret;
C_noret_decl(f_1572)
static void C_ccall f_1572(C_word c,C_word *av) C_noret;
C_noret_decl(f_1575)
static void C_ccall f_1575(C_word c,C_word *av) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word *av) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word *av) C_noret;
C_noret_decl(f_3205)
static void C_ccall f_3205(C_word c,C_word *av) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word *av) C_noret;
C_noret_decl(f_1461)
static void C_ccall f_1461(C_word c,C_word *av) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word *av) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word *av) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word *av) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word *av) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word *av) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word *av) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word *av) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word *av) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word *av) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word *av) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word *av) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word *av) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word *av) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word *av) C_noret;
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word *av) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word *av) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word *av) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word *av) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word *av) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word *av) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word *av) C_noret;
C_noret_decl(f_2923)
static void C_ccall f_2923(C_word c,C_word *av) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word *av) C_noret;
C_noret_decl(f_2704)
static void C_ccall f_2704(C_word c,C_word *av) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645(C_word c,C_word *av) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word *av) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word *av) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word *av) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_1657)
static void C_ccall f_1657(C_word c,C_word *av) C_noret;
C_noret_decl(f_2989)
static void C_fcall f_2989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word *av) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word *av) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word *av) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word *av) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word *av) C_noret;
C_noret_decl(f_2966)
static void C_fcall f_2966(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word *av) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word *av) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word *av) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word *av) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word *av) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word *av) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word *av) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word *av) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word *av) C_noret;
C_noret_decl(f_1584)
static void C_ccall f_1584(C_word c,C_word *av) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word *av) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word *av) C_noret;
C_noret_decl(f_3135)
static void C_ccall f_3135(C_word c,C_word *av) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word *av) C_noret;
C_noret_decl(f_1675)
static void C_ccall f_1675(C_word c,C_word *av) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word *av) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word *av) C_noret;
C_noret_decl(f3787)
static void C_ccall f3787(C_word c,C_word *av) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word *av) C_noret;
C_noret_decl(f3783)
static void C_ccall f3783(C_word c,C_word *av) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word *av) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word *av) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3011)
static void C_fcall f_3011(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word *av) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word *av) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word *av) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word *av) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word *av) C_noret;
C_noret_decl(f_3326)
static void C_fcall f_3326(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word *av) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word *av) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word *av) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word *av) C_noret;
C_noret_decl(f_2436)
static void C_ccall f_2436(C_word c,C_word *av) C_noret;
C_noret_decl(f_2432)
static void C_ccall f_2432(C_word c,C_word *av) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word *av) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word *av) C_noret;
C_noret_decl(f_2421)
static void C_fcall f_2421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1305)
static void C_ccall f_1305(C_word c,C_word *av) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word *av) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word *av) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word *av) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word *av) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word *av) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word *av) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word *av) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word *av) C_noret;
C_noret_decl(f_1290)
static void C_ccall f_1290(C_word c,C_word *av) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word *av) C_noret;
C_noret_decl(f_1327)
static void C_ccall f_1327(C_word c,C_word *av) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word *av) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word *av) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word *av) C_noret;
C_noret_decl(f_1321)
static void C_ccall f_1321(C_word c,C_word *av) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word *av) C_noret;
C_noret_decl(f_3467)
static void C_ccall f_3467(C_word c,C_word *av) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word *av) C_noret;
C_noret_decl(f_1681)
static void C_ccall f_1681(C_word c,C_word *av) C_noret;
C_noret_decl(f_1337)
static void C_fcall f_1337(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word *av) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word *av) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word *av) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word *av) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word *av) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word *av) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word *av) C_noret;
C_noret_decl(f_1698)
static void C_ccall f_1698(C_word c,C_word *av) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word *av) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word *av) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word *av) C_noret;
C_noret_decl(f_2119)
static void C_ccall f_2119(C_word c,C_word *av) C_noret;
C_noret_decl(f_3116)
static void C_ccall f_3116(C_word c,C_word *av) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word *av) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word *av) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2131)
static void C_ccall trf_2131(C_word c,C_word *av) C_noret;
static void C_ccall trf_2131(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2131(t0,t1,t2);}

C_noret_decl(trf_3255)
static void C_ccall trf_3255(C_word c,C_word *av) C_noret;
static void C_ccall trf_3255(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3255(t0,t1,t2);}

C_noret_decl(trf_2008)
static void C_ccall trf_2008(C_word c,C_word *av) C_noret;
static void C_ccall trf_2008(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2008(t0,t1,t2);}

C_noret_decl(trf_2798)
static void C_ccall trf_2798(C_word c,C_word *av) C_noret;
static void C_ccall trf_2798(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_2798(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3057)
static void C_ccall trf_3057(C_word c,C_word *av) C_noret;
static void C_ccall trf_3057(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3057(t0,t1,t2);}

C_noret_decl(trf_1423)
static void C_ccall trf_1423(C_word c,C_word *av) C_noret;
static void C_ccall trf_1423(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1423(t0,t1,t2);}

C_noret_decl(trf_1928)
static void C_ccall trf_1928(C_word c,C_word *av) C_noret;
static void C_ccall trf_1928(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1928(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1608)
static void C_ccall trf_1608(C_word c,C_word *av) C_noret;
static void C_ccall trf_1608(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1608(t0,t1);}

C_noret_decl(trf_3070)
static void C_ccall trf_3070(C_word c,C_word *av) C_noret;
static void C_ccall trf_3070(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3070(t0,t1);}

C_noret_decl(trf_2710)
static void C_ccall trf_2710(C_word c,C_word *av) C_noret;
static void C_ccall trf_2710(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2710(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2775)
static void C_ccall trf_2775(C_word c,C_word *av) C_noret;
static void C_ccall trf_2775(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2775(t0,t1,t2);}

C_noret_decl(trf_1353)
static void C_ccall trf_1353(C_word c,C_word *av) C_noret;
static void C_ccall trf_1353(C_word c,C_word *av){
C_word t0=av[0];
f_1353(t0);}

C_noret_decl(trf_1368)
static void C_ccall trf_1368(C_word c,C_word *av) C_noret;
static void C_ccall trf_1368(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1368(t0,t1,t2,t3);}

C_noret_decl(trf_1717)
static void C_ccall trf_1717(C_word c,C_word *av) C_noret;
static void C_ccall trf_1717(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1717(t0,t1,t2);}

C_noret_decl(trf_2870)
static void C_ccall trf_2870(C_word c,C_word *av) C_noret;
static void C_ccall trf_2870(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2870(t0,t1);}

C_noret_decl(trf_1487)
static void C_ccall trf_1487(C_word c,C_word *av) C_noret;
static void C_ccall trf_1487(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1487(t0,t1,t2);}

C_noret_decl(trf_2989)
static void C_ccall trf_2989(C_word c,C_word *av) C_noret;
static void C_ccall trf_2989(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2989(t0,t1,t2);}

C_noret_decl(trf_2966)
static void C_ccall trf_2966(C_word c,C_word *av) C_noret;
static void C_ccall trf_2966(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2966(t0,t1);}

C_noret_decl(trf_3011)
static void C_ccall trf_3011(C_word c,C_word *av) C_noret;
static void C_ccall trf_3011(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3011(t0,t1);}

C_noret_decl(trf_3326)
static void C_ccall trf_3326(C_word c,C_word *av) C_noret;
static void C_ccall trf_3326(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3326(t0,t1);}

C_noret_decl(trf_2421)
static void C_ccall trf_2421(C_word c,C_word *av) C_noret;
static void C_ccall trf_2421(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2421(t0,t1);}

C_noret_decl(trf_1337)
static void C_ccall trf_1337(C_word c,C_word *av) C_noret;
static void C_ccall trf_1337(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1337(t0,t1,t2);}

/* a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2517(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2517,5,av);}
a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2521,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("setup-download.scm:241: string-append");
t7=*((C_word*)lf[68]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[140];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=lf[141];
f_2607(2,av2);}}}

/* a2510 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2511,2,av);}
C_trace("setup-download.scm:237: deconstruct-url");
f_2421(t1,((C_word*)t0)[2]);}

/* k1994 in map-loop425 in k1998 in k1978 in k1975 in k1972 in k1969 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_1996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1996,2,av);}
C_trace("##sys#string-append");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[221];
tp(4,av2);}}

/* map-loop475 in k2121 in k2095 in k2092 in k2089 in k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_fcall f_2131(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_2131,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2156,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2119,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:177: string-chomp");
t7=C_fast_retrieve(lf[222]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[241];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_2203,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+8);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=C_i_nullp(t14);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t19=C_i_nullp(t18);
t20=(C_truep(t19)?C_SCHEME_FALSE:C_i_car(t18));
t21=t20;
t22=C_i_nullp(t18);
t23=(C_truep(t22)?C_SCHEME_END_OF_LIST:C_i_cdr(t18));
t24=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2231,a[2]=t2,a[3]=t7,a[4]=t3,a[5]=t12,a[6]=t1,a[7]=t21,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
C_trace("setup-download.scm:181: string-append");
t25=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t25;
av2[1]=t24;
av2[2]=lf[91];
av2[3]=t16;
av2[4]=lf[92];
((C_proc)(void*)(*((C_word*)t25+1)))(5,av2);}}
else{
t25=t24;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t25;
av2[1]=lf[93];
f_2231(2,av2);}}}

/* get-chunks in k2856 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in ... */
static void C_fcall f_3255(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3255,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3300,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:415: read-line");
t4=C_fast_retrieve(lf[115]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a3566 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_3567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3567,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1978 in k1975 in k1972 in k1969 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_1980(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1980,2,av);}
a=C_alloc(10);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2000,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:167: with-input-from-pipe");
t7=C_fast_retrieve(lf[85]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fast_retrieve(lf[86]);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_2240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2240,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:185: with-input-from-pipe");
t3=C_fast_retrieve(lf[85]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_fast_retrieve(lf[86]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1627 in k1624 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in ... */
static void C_ccall f_1629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1629,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:119: system");
t3=C_fast_retrieve(lf[30]);{
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

/* k1624 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_1626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1626,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:118: d");
f_1337(t3,lf[31],C_a_i_list(&a,1,t2));}

/* k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_1623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1623,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[5],"setup-download#\052windows-shell\052"))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1648,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:116: open-output-string");
t4=C_fast_retrieve(lf[37]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1669,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:117: open-output-string");
t4=C_fast_retrieve(lf[37]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_1620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1620,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1691,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:114: normalize-pathname");
t4=C_fast_retrieve(lf[41]);{
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

/* k3572 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3574,2,av);}
C_trace("setup-download.scm:54: conc");
t2=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[252];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a1894 in a1888 in a1882 in k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_1895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1895,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1899,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:146: warning");
t3=C_fast_retrieve(lf[25]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[52];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_2237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2237,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:184: d");
f_1337(t3,lf[87],C_a_i_list(&a,1,t2));}

/* k3241 in k3237 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in ... */
static void C_ccall f_3243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3243,2,av);}
C_trace("setup-download.scm:406: make-composite-condition");
t2=C_fast_retrieve(lf[117]);{
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

/* k1897 in a1894 in a1888 in a1882 in k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_1899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1899,2,av);}
C_trace("setup-download.scm:149: return");
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k3245 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in ... */
static void C_ccall f_3247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3247,2,av);}
C_trace("setup-download.scm:407: make-property-condition");
t2=C_fast_retrieve(lf[118]);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[120];
av2[3]=lf[121];
av2[4]=t1;
av2[5]=lf[122];
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_2234,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2359,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:183: make-pathname");
t5=C_fast_retrieve(lf[20]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2169 in k2089 in k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_2171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2171,2,av);}
C_trace("setup-download.scm:172: make-pathname");
t2=C_fast_retrieve(lf[20]);{
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

/* k1510 in map-loop223 in k1480 in k1465 in k1459 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_1512(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1512,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1487(t6,((C_word*)t0)[5],t5);}

/* k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_2246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_2246,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2251,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li21),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2279,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word)li22),tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:185: ##sys#call-with-values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[9];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_2243(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_2243,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2246,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2343,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2345,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:188: filter-map");
t6=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1975 in k1972 in k1969 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_1977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1977,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1980,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:164: d");
f_1337(t3,lf[224],C_a_i_list(&a,1,t2));}

/* k1969 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_1971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1971,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1974,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-download.scm:162: string-append");
t4=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[225];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[226];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[227];
f_1974(2,av2);}}}

/* k1972 in k1969 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_1974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1974,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1977,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:163: make-svn-ls-cmd");
f_1928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* k2154 in map-loop475 in k2121 in k2095 in k2092 in k2089 in k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_2156(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2156,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2131(t6,((C_word*)t0)[5],t5);}

/* a1888 in a1882 in k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_1889(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1889,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:144: k378");
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k2165 in k2089 in k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_2167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2167,2,av);}
C_trace("setup-download.scm:172: make-svn-ls-cmd");
f_1928(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST);}

/* k1941 in setup-download#make-svn-ls-cmd in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1943,2,av);}
C_trace("setup-download.scm:154: conc");
t2=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[66];
av2[3]=((C_word*)t0)[3];
av2[4]=C_make_character(32);
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
av2[7]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k1879 in k1876 in k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_1881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_1881,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3275 in k3298 in get-chunks in k2856 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in ... */
static void C_ccall f_3277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3277,2,av);}
C_trace("setup-download.scm:420: string-concatenate-reverse");
t2=C_fast_retrieve(lf[173]);{
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

/* a1882 in k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_1883(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1883,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1904,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:144: with-exception-handler");
t5=C_fast_retrieve(lf[55]);{
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

/* k3287 in k3284 in k3281 in k3298 in get-chunks in k2856 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in ... */
static void C_ccall f_3289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3289,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
C_trace("setup-download.scm:425: get-chunks");
t3=((C_word*)((C_word*)t0)[4])[1];
f_3255(t3,((C_word*)t0)[5],t2);}

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
if(C_unlikely(!C_demand_2(784))){
C_save(t1);
C_rereclaim2(784*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,259);
lf[4]=C_h_intern(&lf[4],7,"default");
lf[7]=C_h_intern(&lf[7],18,"\003sysstandard-error");
lf[8]=C_h_intern(&lf[8],19,"\003sysstandard-output");
lf[9]=C_h_intern(&lf[9],12,"flush-output");
lf[10]=C_h_intern(&lf[10],7,"fprintf");
lf[11]=C_h_intern(&lf[11],34,"setup-download#temporary-directory");
lf[13]=C_h_intern(&lf[13],26,"create-temporary-directory");
lf[15]=C_h_intern(&lf[15],5,"error");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\021version not found");
lf[17]=C_h_intern(&lf[17],4,"sort");
lf[18]=C_h_intern(&lf[18],20,"setup-api#version>=\077");
lf[19]=C_h_intern(&lf[19],31,"setup-download#locate-egg/local");
lf[20]=C_h_intern(&lf[20],13,"make-pathname");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[23]=C_h_intern(&lf[23],10,"directory\077");
lf[24]=C_h_intern(&lf[24],12,"file-exists\077");
lf[25]=C_h_intern(&lf[25],7,"warning");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000-extension has no such version - using default");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[30]=C_h_intern(&lf[30],6,"system");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[32]=C_h_intern(&lf[32],7,"sprintf");
lf[33]=C_h_intern(&lf[33],17,"get-output-string");
lf[34]=C_h_intern(&lf[34],9,"\003sysprint");
lf[35]=C_h_intern(&lf[35],16,"\003syswrite-char-0");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\006xcopy ");
lf[37]=C_h_intern(&lf[37],18,"open-output-string");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\003/\052 ");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\006cp -r ");
lf[40]=C_h_intern(&lf[40],2,"qs");
lf[41]=C_h_intern(&lf[41],18,"normalize-pathname");
lf[42]=C_h_intern(&lf[42],16,"create-directory");
lf[43]=C_h_intern(&lf[43],12,"delete-file\052");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\0006 deleting stale file `~a\047 from local build directory~%");
lf[45]=C_h_intern(&lf[45],14,"string-suffix\077");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\003.so");
lf[47]=C_h_intern(&lf[47],6,"filter");
lf[48]=C_h_intern(&lf[48],9,"directory");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\004tags");
lf[50]=C_h_intern(&lf[50],37,"setup-download#gather-egg-information");
lf[51]=C_h_intern(&lf[51],7,"version");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000.extension has syntactically invalid .meta file");
lf[53]=C_h_intern(&lf[53],20,"with-input-from-file");
lf[54]=C_h_intern(&lf[54],4,"read");
lf[55]=C_h_intern(&lf[55],22,"with-exception-handler");
lf[56]=C_h_intern(&lf[56],30,"call-with-current-continuation");
lf[57]=C_h_intern(&lf[57],14,"string->symbol");
lf[58]=C_h_intern(&lf[58],7,"call/cc");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[60]=C_h_intern(&lf[60],10,"filter-map");
lf[62]=C_h_intern(&lf[62],11,"\000recursive\077");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\004 -R ");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[65]=C_h_intern(&lf[65],4,"conc");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\007svn ls ");
lf[67]=C_h_intern(&lf[67],29,"setup-download#locate-egg/svn");
lf[68]=C_h_intern(&lf[68],13,"string-append");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\005tags/");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\006trunk/");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\005 1>&2");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\013svn export ");
lf[80]=C_h_intern(&lf[80],4,"meta");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\005.meta");
lf[82]=C_h_intern(&lf[82],23,"irregex-match-substring");
lf[83]=C_h_intern(&lf[83],14,"irregex-search");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\016^tags/([^/]+)/");
lf[85]=C_h_intern(&lf[85],20,"with-input-from-pipe");
lf[86]=C_h_intern(&lf[86],10,"read-lines");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\047checking available versions ...~%  ~a~%");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\020not a valid port");
lf[97]=C_h_intern(&lf[97],13,"irregex-match");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000$(http://)\077([^/:]+)(:([^:/]+))\077(/.\052)\077");
lf[99]=C_h_intern(&lf[99],30,"setup-download#locate-egg/http");
lf[100]=C_h_intern(&lf[100],6,"signal");
lf[101]=C_h_intern(&lf[101],26,"setup-api#remove-directory");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[104]=C_h_intern(&lf[104],17,"open-input-string");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\002#f");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000 files-versions are not identical");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000=unrecognized file-information - possibly corrupt transmission");
lf[110]=C_h_intern(&lf[110],12,"string-every");
lf[111]=C_h_intern(&lf[111],19,"char-set:whitespace");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\026^[ ]\052\134(error .\052\134)[ ]\052$");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\031 \052#\134|[- ]\052([^- ]\052) \052\134|#.\052");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\011 \052#!eof \052");
lf[115]=C_h_intern(&lf[115],9,"read-line");
lf[116]=C_h_intern(&lf[116],5,"abort");
lf[117]=C_h_intern(&lf[117],24,"make-composite-condition");
lf[118]=C_h_intern(&lf[118],23,"make-property-condition");
lf[119]=C_h_intern(&lf[119],20,"setup-download-error");
lf[120]=C_h_intern(&lf[120],3,"exn");
lf[121]=C_h_intern(&lf[121],7,"message");
lf[122]=C_h_intern(&lf[122],9,"arguments");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\011[Server] ");
lf[124]=C_h_intern(&lf[124],17,"close-output-port");
lf[125]=C_h_intern(&lf[125],16,"close-input-port");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[127]=C_h_intern(&lf[127],7,"display");
lf[128]=C_h_intern(&lf[128],19,"with-output-to-file");
lf[129]=C_h_intern(&lf[129],7,"\000binary");
lf[130]=C_h_intern(&lf[130],20,"\003sysread-string/port");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\006  ~a~%");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\0001invalid file name - possibly corrupt transmission");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\023reading files ...~%");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\006\077name=");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\006&mode=");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\012&tests=yes");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[139]=C_h_intern(&lf[139],8,"->string");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\011&version=");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[143]=C_h_intern(&lf[143],11,"\000proxy-host");
lf[144]=C_h_intern(&lf[144],16,"\000proxy-user-pass");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\004GET ");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\011 HTTP/1.1");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\014Connection: ");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\014User-Agent: ");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\010Accept: ");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\006Host: ");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\020Content-length: ");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\033Proxy-Authorization: Basic ");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\002\015\012");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\007http://");
lf[163]=C_h_intern(&lf[163],15,"\003sysget-keyword");
lf[164]=C_h_intern(&lf[164],15,"\000content-length");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[166]=C_h_intern(&lf[166],7,"\000accept");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\005close");
lf[168]=C_h_intern(&lf[168],11,"\000connection");
lf[169]=C_h_intern(&lf[169],5,"\000port");
lf[171]=C_h_intern(&lf[171],14,"number->string");
lf[172]=C_h_intern(&lf[172],11,"tcp-connect");
lf[173]=C_h_intern(&lf[173],26,"string-concatenate-reverse");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\002~%");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000/invalid response from server - please try again");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\017reading chunks ");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\004~a~%");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000$[Tt]ransfer-[Ee]ncoding:\134s\052chunked.\052");
lf[180]=C_h_intern(&lf[180],12,"string-null\077");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\003\052/\052");
lf[182]=C_h_intern(&lf[182],11,"\000proxy-port");
lf[183]=C_h_intern(&lf[183],10,"http-fetch");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\034invalid response from server");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\004~a~%");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\034HTTP/[0-9.]+\134s+([0-9]+)\134s+.\052");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\026reading response ...~%");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\003\052/\052");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\023requesting ~s ...~%");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000&connecting to host ~s, port ~a ~a...~%");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\005(via ");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid extension name");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[200]=C_h_intern(&lf[200],12,"string-index");
lf[201]=C_h_intern(&lf[201],33,"setup-download#retrieve-extension");
lf[202]=C_h_intern(&lf[202],8,"\000version");
lf[203]=C_h_intern(&lf[203],6,"\000quiet");
lf[204]=C_h_intern(&lf[204],12,"\000destination");
lf[205]=C_h_intern(&lf[205],9,"\000username");
lf[206]=C_h_intern(&lf[206],9,"\000password");
lf[207]=C_h_intern(&lf[207],6,"\000tests");
lf[208]=C_h_intern(&lf[208],6,"\000trunk");
lf[209]=C_h_intern(&lf[209],6,"\000clean");
lf[210]=C_h_intern(&lf[210],5,"local");
lf[211]=C_h_intern(&lf[211],3,"svn");
lf[212]=C_h_intern(&lf[212],4,"http");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\0001cannot retrieve extension - unsupported transport");
lf[214]=C_h_intern(&lf[214],16,"\003sysdynamic-wind");
lf[215]=C_h_intern(&lf[215],5,"\000mode");
lf[216]=C_h_intern(&lf[216],30,"setup-download#list-extensions");
lf[217]=C_h_intern(&lf[217],18,"string-concatenate");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[219]=C_h_intern(&lf[219],3,"map");
lf[220]=C_h_intern(&lf[220],17,"\003sysstring-append");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[222]=C_h_intern(&lf[222],12,"string-chomp");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\047listing extension directory ...~%  ~a~%");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\007\077list=1");
lf[232]=C_h_intern(&lf[232],8,"read-all");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000.cannot list extensions - unsupported transport");
lf[234]=C_h_intern(&lf[234],38,"setup-download#list-extension-versions");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\010unknown\012");
lf[237]=C_h_intern(&lf[237],17,"directory-exists\077");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\005/tags");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\010unknown\012");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\005/tags");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\014--password=\047");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\014--username=\047");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000.cannot list extensions - unsupported transport");
lf[250]=C_h_intern(&lf[250],8,"char-set");
lf[251]=C_h_intern(&lf[251],14,"make-parameter");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\020chicken-install ");
lf[253]=C_h_intern(&lf[253],15,"chicken-version");
lf[254]=C_h_intern(&lf[254],17,"tcp-write-timeout");
lf[255]=C_h_intern(&lf[255],16,"tcp-read-timeout");
lf[256]=C_h_intern(&lf[256],19,"tcp-connect-timeout");
lf[257]=C_h_intern(&lf[257],11,"\003sysrequire");
lf[258]=C_h_intern(&lf[258],9,"setup-api");
C_register_lf2(lf,259,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1281,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k2281 in a2278 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_2283(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,6)))){
C_save_and_reclaim((void *)f_2283,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2286,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2309,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2326,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(C_retrieve2(lf[3],"setup-download#\052mode\052"),lf[80]);
if(C_truep(t6)){
t7=((C_word*)t0)[6];
C_trace("setup-download.scm:220: conc");
t8=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=((C_word*)t0)[8];
av2[3]=C_make_character(47);
av2[4]=t7;
av2[5]=lf[81];
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}
else{
C_trace("setup-download.scm:204: conc");
t7=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=C_make_character(47);
av2[4]=((C_word*)t0)[6];
av2[5]=C_make_character(47);
av2[6]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}}

/* k2004 in k1998 in k1978 in k1975 in k1972 in k1969 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_2006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2006,2,av);}
C_trace("setup-download.scm:165: string-concatenate");
t2=C_fast_retrieve(lf[217]);{
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

/* map-loop425 in k1998 in k1978 in k1975 in k1972 in k1969 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_fcall f_2008(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_2008,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1996,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:166: string-chomp");
t7=C_fast_retrieve(lf[222]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=lf[223];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1998 in k1978 in k1975 in k1972 in k1969 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_2000(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2000,2,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[219]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2006,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2008,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2008(t7,t3,t1);}

/* a3533 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_3534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3534,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1915 in a1903 in a1882 in k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_1916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_1916,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1922,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:144: k378");
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

/* a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_1858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1858,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1866,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:142: string->symbol");
t4=*((C_word*)lf[57]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_3539(C_word c,C_word *av){
C_word tmp;
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3539,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[210]);
if(C_truep(t3)){
t4=t1;
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1461,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1523,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:88: string-append");
t9=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
av2[3]=lf[238];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t4=C_eqp(t2,lf[211]);
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[4];
t8=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=t14;
t16=C_i_nullp(t12);
t17=(C_truep(t16)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2088,a[2]=t5,a[3]=t7,a[4]=t6,a[5]=t15,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
C_trace("setup-download.scm:170: string-append");
t19=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=lf[246];
av2[3]=t10;
av2[4]=lf[247];
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}
else{
t19=t18;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=lf[248];
f_2088(2,av2);}}}
else{
C_trace("setup-download.scm:477: error");
t5=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[249];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* a1909 in a1903 in a1882 in k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_1910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1910,2,av);}
C_trace("setup-download.scm:150: with-input-from-file");
t2=C_fast_retrieve(lf[53]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=*((C_word*)lf[54]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3281 in k3298 in get-chunks in k2856 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in ... */
static void C_ccall f_3283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3283,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3286,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:423: d");
f_1337(t3,lf[175],C_SCHEME_END_OF_LIST);}

/* k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_1853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1853,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:140: call/cc");
t3=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3284 in k3281 in k3298 in get-chunks in k2856 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in ... */
static void C_ccall f_3286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3286,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:424: read-line");
t3=C_fast_retrieve(lf[115]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_fcall f_2798(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,3)))){
C_save_and_reclaim_args((void *)trf_2798,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(23);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2802,a[2]=t5,a[3]=t2,a[4]=t6,a[5]=t3,a[6]=t4,a[7]=t7,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2934,a[2]=t8,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2937,a[2]=t9,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:301: open-output-string");
t11=C_fast_retrieve(lf[37]);{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
C_trace("setup-download.scm:299: d");
f_1337(t8,lf[190],C_a_i_list(&a,3,t2,t3,lf[193]));}}

/* a2278 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_2279(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2279,4,av);}
a=C_alloc(13);
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2283,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2336,a[2]=t6,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[6])){
C_trace("setup-download.scm:201: make-pathname");
t8=C_fast_retrieve(lf[20]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
C_trace("setup-download.scm:201: get-temporary-directory");
f_1353(t7);}}

/* get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in ... */
static void C_fcall f_3057(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3057,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3061,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:366: skip");
t4=((C_word*)((C_word*)t0)[7])[1];
f_2966(t4,t3);}

/* a2250 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_2251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2251,2,av);}
a=C_alloc(4);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2262,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:195: string-append");
t3=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[69];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2265,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
if(C_truep(((C_word*)t0)[5])){
C_trace("setup-download.scm:82: warning");
t4=C_fast_retrieve(lf[25]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[26];
av2[3]=t3;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_i_member(lf[70],((C_word*)t0)[3]))){
C_trace("setup-download.scm:199: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=lf[71];
av2[3]=lf[72];
C_values(4,av2);}}
else{
C_trace("setup-download.scm:200: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=lf[73];
av2[3]=lf[74];
C_values(4,av2);}}}}}

/* map-loop181 in k1416 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_fcall f_1423(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1423,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1448,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-download.scm:85: g204");
t5=*((C_word*)lf[68]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[218];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2788 in k2784 in setup-download#response-match-code? in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2790,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_string_equal_p(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1419 in k1416 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_1421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1421,2,av);}
C_trace("setup-download.scm:85: string-concatenate");
t2=C_fast_retrieve(lf[217]);{
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

/* k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_1866(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_1866,2,av);}
a=C_alloc(17);
t2=t1;
t3=C_a_i_list2(&a,2,lf[51],((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1878,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1883,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:144: call-with-current-continuation");
t7=*((C_word*)lf[56]+1);{
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

/* k2284 in k2281 in a2278 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_2286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2286,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:214: d");
f_1337(t3,lf[76],C_a_i_list(&a,1,t2));}

/* k2287 in k2284 in k2281 in a2278 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_2289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2289,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:215: system");
t3=C_fast_retrieve(lf[30]);{
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

/* a2344 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_2345(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2345,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2349,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:190: irregex-search");
t4=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[84];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2260 in a2250 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_2262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2262,2,av);}
C_trace("setup-download.scm:195: values");{
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

/* k2347 in a2344 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_2349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2349,2,av);}
if(C_truep(t1)){
C_trace("setup-download.scm:191: irregex-match-substring");
t2=C_fast_retrieve(lf[82]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2341 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_2343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2343,2,av);}
C_trace("setup-download.scm:186: existing-version");
f_1368(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2231,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
C_trace("setup-download.scm:182: string-append");
t4=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[88];
av2[3]=((C_word*)t0)[7];
av2[4]=lf[89];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[90];
f_2234(2,av2);}}}

/* k2357 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_2359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2359,2,av);}
a=C_alloc(6);
C_trace("setup-download.scm:183: make-svn-ls-cmd");
f_1928(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,C_a_i_list(&a,2,lf[62],C_SCHEME_TRUE));}

/* a1903 in a1882 in k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_1904(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1904,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1910,a[2]=((C_word*)t0)[2],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[3],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:144: ##sys#call-with-values");{
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

/* k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_1847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1847,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:139: file-exists?");
t4=C_fast_retrieve(lf[24]);{
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

/* a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_1843(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1843,4,av);}
a=C_alloc(5);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1847,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:138: make-pathname");
t6=C_fast_retrieve(lf[20]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=lf[59];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2263 in a2250 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_2265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2265,2,av);}
if(C_truep(C_i_member(lf[70],((C_word*)t0)[2]))){
C_trace("setup-download.scm:199: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[71];
av2[3]=lf[72];
C_values(4,av2);}}
else{
C_trace("setup-download.scm:200: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[73];
av2[3]=lf[74];
C_values(4,av2);}}}

/* k2784 in setup-download#response-match-code? in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2786,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2790,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:293: irregex-match-substring");
t4=C_fast_retrieve(lf[82]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +14,c,5)))){
C_save_and_reclaim((void*)f_2469,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+14);
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
C_word t34;
C_word t35;
C_word t36;
C_word t37;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_i_nullp(t19);
t21=(C_truep(t20)?C_SCHEME_FALSE:C_i_car(t19));
t22=t21;
t23=C_i_nullp(t19);
t24=(C_truep(t23)?C_SCHEME_END_OF_LIST:C_i_cdr(t19));
t25=C_i_nullp(t24);
t26=(C_truep(t25)?C_SCHEME_FALSE:C_i_car(t24));
t27=t26;
t28=C_i_nullp(t24);
t29=(C_truep(t28)?C_SCHEME_END_OF_LIST:C_i_cdr(t24));
t30=C_i_nullp(t29);
t31=(C_truep(t30)?C_SCHEME_FALSE:C_i_car(t29));
t32=t31;
t33=C_i_nullp(t29);
t34=(C_truep(t33)?C_SCHEME_END_OF_LIST:C_i_cdr(t29));
t35=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2511,a[2]=t3,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t36=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2517,a[2]=t7,a[3]=t22,a[4]=t27,a[5]=t32,a[6]=t2,a[7]=t12,a[8]=t17,a[9]=((C_word)li40),tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:234: ##sys#call-with-values");{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t35;
av2[3]=t36;
C_call_with_values(4,av2);}}

/* a2753 in k2715 in k2712 in setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_2754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2754,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[165];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2756 in k2712 in setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2757,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[167];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2750 in k2718 in k2715 in k2712 in setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_2751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2751,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* setup-download#make-svn-ls-cmd in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_fcall f_1928(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1928,5,t1,t2,t3,t4,t5);}
a=C_alloc(6);
t6=C_i_get_keyword(lf[62],t5,C_SCHEME_FALSE);
t7=(C_truep(t6)?lf[63]:lf[64]);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1943,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:154: qs");
t10=C_fast_retrieve(lf[40]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1826,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1831,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:135: filter-map");
t3=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a1921 in a1915 in a1903 in a1882 in k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_1922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1922,2,av);}{
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

/* setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1822(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1822,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1826,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:134: directory");
t4=C_fast_retrieve(lf[48]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in ... */
static void C_ccall f_3061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3061,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:367: read");
t4=*((C_word*)lf[54]+1);{
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

/* k2534 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_2536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2536,2,av);}
C_trace("setup-download.scm:248: g601");
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in ... */
static void C_ccall f_3064(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3064,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3070,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=t3;
f_3070(t5,C_eqp(lf[15],t4));}
else{
t4=t3;
f_3070(t4,C_SCHEME_FALSE);}}

/* k3370 in setup-download#retrieve-extension in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3372(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3372,2,av);}
a=C_alloc(18);
t2=t1;
t3=C_i_get_keyword(lf[209],((C_word*)t0)[2],C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
C_trace("setup-download.scm:441: check-egg-name");
f_3326(t5,((C_word*)t0)[6]);}

/* k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_2533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2533,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2536,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word)li39),tmp=(C_word)a,a+=12,tmp);
C_trace("setup-download.scm:248: call-with-current-continuation");
t4=*((C_word*)lf[56]+1);{
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

/* k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_2530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2530,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2533,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2533(2,av2);}}
else{
C_trace("setup-download.scm:247: create-directory");
t4=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3376 in k3370 in setup-download#retrieve-extension in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_3378(C_word c,C_word *av){
C_word tmp;
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(45,c,4)))){
C_save_and_reclaim((void *)f_3378,2,av);}
a=C_alloc(45);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[3];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[4];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3383,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t3,a[6]=t5,a[7]=t7,a[8]=((C_word)li56),tmp=(C_word)a,a+=9,tmp);
t15=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3392,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word)li57),tmp=(C_word)a,a+=15,tmp);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3431,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=t13,a[8]=((C_word)li58),tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:442: ##sys#dynamic-wind");
t17=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t17;
av2[1]=((C_word*)t0)[17];
av2[2]=t14;
av2[3]=t15;
av2[4]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* a2759 in setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2760,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(80);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_fcall f_1608(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_1608,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
C_trace("setup-download.scm:110: values");{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[28];
C_values(4,av2);}}
else{
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:112: create-directory");
t3=C_fast_retrieve(lf[42]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1704,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1740,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1748,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:125: directory");
t6=C_fast_retrieve(lf[48]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
C_trace("setup-download.scm:131: values");{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[4];
C_values(4,av2);}}}}}

/* k2447 in k2430 in k2423 in setup-download#deconstruct-url in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_2449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2449,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:227: irregex-match-substring");
t3=C_fast_retrieve(lf[82]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(4);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(80);
f_2436(2,av2);}}}

/* k1876 in k1864 in a1857 in k1851 in k1845 in a1842 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_1878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1878,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:144: g382");
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k2438 in k2434 in k2430 in k2423 in setup-download#deconstruct-url in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_2440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2440,2,av);}
if(C_truep(t1)){
t2=t1;
C_trace("setup-download.scm:224: values");{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
C_values(5,av2);}}
else{
C_trace("setup-download.scm:224: values");{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[95];
C_values(5,av2);}}}

/* k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in ... */
static void C_fcall f_3070(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_3070,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=((C_word*)t0)[3];
t6=t4;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3235,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3239,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3247,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:409: string-append");
t10=*((C_word*)lf[68]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[123];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t2=C_eofp(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:C_i_not(((C_word*)t0)[2]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:371: close-input-port");
t5=*((C_word*)lf[125]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:376: string-suffix?");
t5=C_fast_retrieve(lf[45]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[132];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
C_trace("setup-download.scm:375: error");
t4=*((C_word*)lf[15]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[133];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}}

/* k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_2527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2527,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2530,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:246: file-exists?");
t4=C_fast_retrieve(lf[24]);{
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

/* k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2521,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[10])){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[10];
f_2524(2,av2);}}
else{
C_trace("setup-download.scm:244: get-temporary-directory");
f_1353(t3);}}

/* a3382 in k3376 in k3370 in setup-download#retrieve-extension in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_3383(C_word c,C_word *av){
C_word tmp;
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3383,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[2],"setup-download#\052trunk\052"));
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,C_retrieve2(lf[3],"setup-download#\052mode\052"));
t5=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate2(&lf[2] /* (set! setup-download#*trunk* ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate2(&lf[3] /* (set! setup-download#*mode* ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_2524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2524,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("setup-download.scm:245: make-pathname");
t3=C_fast_retrieve(lf[20]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_1617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1617,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1695,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:113: normalize-pathname");
t4=C_fast_retrieve(lf[41]);{
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

/* k2450 in k2447 in k2430 in k2423 in setup-download#deconstruct-url in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_2452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2452,2,av);}
a=C_alloc(4);
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2436(2,av2);}}
else{
C_trace("setup-download.scm:229: error");
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[96];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3041 in k3032 in k2983 in k2977 in k2968 in skip in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in ... */
static void C_ccall f_3043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3043,2,av);}
if(C_truep(t1)){
C_trace("setup-download.scm:361: skip");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2966(t2,((C_word*)t0)[3]);}
else{
C_trace("setup-download.scm:363: error");
t2=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[109];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2741 in k2737 in k2721 in k2718 in k2715 in k2712 in setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_2743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,24)))){
C_save_and_reclaim((void *)f_2743,2,av);}
C_trace("setup-download.scm:272: conc");
t2=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 25) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(25);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[145];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[146];
av2[5]=lf[147];
av2[6]=lf[148];
av2[7]=((C_word*)t0)[4];
av2[8]=lf[149];
av2[9]=lf[150];
av2[10]=((C_word*)t0)[5];
av2[11]=lf[151];
av2[12]=lf[152];
av2[13]=((C_word*)t0)[6];
av2[14]=lf[153];
av2[15]=lf[154];
av2[16]=((C_word*)t0)[7];
av2[17]=C_make_character(58);
av2[18]=((C_word*)t0)[8];
av2[19]=lf[155];
av2[20]=t1;
av2[21]=lf[156];
av2[22]=((C_word*)t0)[9];
av2[23]=lf[157];
av2[24]=lf[158];
((C_proc)(void*)(*((C_word*)t2+1)))(25,av2);}}

/* a3391 in k3376 in k3370 in setup-download#retrieve-extension in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_3392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_3392,2,av);}
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[210]);
if(C_truep(t3)){
C_trace("setup-download.scm:447: locate-egg/local");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[7];
tp(7,av2);}}
else{
t4=C_eqp(t2,lf[211]);
if(C_truep(t4)){
C_trace("setup-download.scm:449: locate-egg/svn");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[67]);
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[8];
av2[7]=((C_word*)t0)[9];
tp(8,av2);}}
else{
t5=C_eqp(t2,lf[212]);
if(C_truep(t5)){
C_trace("setup-download.scm:451: locate-egg/http");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[99]);
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[10];
av2[7]=((C_word*)t0)[11];
av2[8]=((C_word*)t0)[12];
av2[9]=((C_word*)t0)[13];
tp(10,av2);}}
else{
C_trace("setup-download.scm:453: error");
t6=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[213];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}}}

/* k2715 in k2712 in setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_2717,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2754,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:265: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[163]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[163]+1);
av2[1]=t3;
av2[2]=lf[166];
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
tp(5,av2);}}

/* k2712 in setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2714(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2714,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2757,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:265: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[163]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[163]+1);
av2[1]=t3;
av2[2]=lf[168];
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
tp(5,av2);}}

/* setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_fcall f_2710(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2710,5,t1,t2,t3,t4,t5);}
a=C_alloc(10);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2714,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2760,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:265: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[163]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[163]+1);
av2[1]=t6;
av2[2]=lf[169];
av2[3]=t5;
av2[4]=t7;
tp(5,av2);}}

/* k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_2802,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word)li53),tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:303: ##sys#call-with-values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[8];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a2806 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2807,2,av);}
t2=((C_word*)t0)[2];
t3=(C_truep(t2)?t2:((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
if(C_truep(t4)){
C_trace("setup-download.scm:303: tcp-connect");
t5=C_fast_retrieve(lf[172]);{
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
else{
t5=((C_word*)t0)[5];
C_trace("setup-download.scm:303: tcp-connect");
t6=C_fast_retrieve(lf[172]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k2721 in k2718 in k2715 in k2712 in setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_2723(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2723,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_i_get_keyword(lf[143],((C_word*)t0)[2],C_SCHEME_FALSE);
t4=C_i_get_keyword(lf[144],((C_word*)t0)[2],C_SCHEME_FALSE);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2739,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=t5,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t3)){
C_trace("setup-download.scm:275: string-append");
t7=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[162];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=((C_word*)t0)[9];
f_2739(2,av2);}}}

/* k2718 in k2715 in k2712 in setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_2720(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2720,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2751,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:265: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[163]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[163]+1);
av2[1]=t3;
av2[2]=lf[164];
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
tp(5,av2);}}

/* a1836 in a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_1837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1837,2,av);}
C_trace("setup-download.scm:137: locate-egg/local");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a1830 in k1824 in setup-download#gather-egg-information in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1831(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1831,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1837,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1843,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:136: ##sys#call-with-values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* setup-download#response-match-code? in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_fcall f_2775(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2775,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2786,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:293: number->string");
t5=*((C_word*)lf[171]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1702 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_1704(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1704,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1717,a[2]=t3,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1717(t5,((C_word*)t0)[2],t1);}

/* k1707 in for-each-loop345 in k1702 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_1709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1709,2,av);}
C_trace("setup-download.scm:129: delete-file*");
t2=C_fast_retrieve(lf[43]);{
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

/* k3144 in k3130 in k3127 in k3124 in k3108 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in ... */
static void C_ccall f_3146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3146,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3148,a[2]=((C_word*)t0)[2],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:384: with-output-to-file");
t3=C_fast_retrieve(lf[128]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t2;
av2[4]=lf[129];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a3147 in k3144 in k3130 in k3127 in k3124 in k3108 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in ... */
static void C_ccall f_3148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3148,2,av);}
C_trace("setup-download.scm:384: g763");
t2=*((C_word*)lf[127]+1);{
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

/* k2737 in k2721 in k2718 in k2715 in k2712 in setup-download#make-HTTP-GET/1.1 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_2739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_2739,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2743,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[9])){
C_trace("setup-download.scm:283: string-append");
t4=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[159];
av2[3]=((C_word*)t0)[9];
av2[4]=lf[160];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[161];
f_2743(2,av2);}}}

/* k1725 in for-each-loop345 in k1702 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_1727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1727,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1717(t3,((C_word*)t0)[4],t2);}

/* k1342 in setup-download#d in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1344,2,av);}
C_trace("setup-download.scm:62: flush-output");
t2=*((C_word*)lf[9]+1);{
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

/* k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1351(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,8)))){
C_save_and_reclaim((void *)f_1351,2,av);}
a=C_alloc(36);
t2=C_mutate2((C_word*)lf[11]+1 /* (set! setup-download#temporary-directory ...) */,t1);
t3=C_mutate2(&lf[12] /* (set! setup-download#get-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1353,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2(&lf[14] /* (set! setup-download#existing-version ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1368,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[19]+1 /* (set! setup-download#locate-egg/local ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1525,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[50]+1 /* (set! setup-download#gather-egg-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1822,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2(&lf[61] /* (set! setup-download#make-svn-ls-cmd ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1928,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[67]+1 /* (set! setup-download#locate-egg/svn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2203,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2(&lf[94] /* (set! setup-download#deconstruct-url ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2421,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[99]+1 /* (set! setup-download#locate-egg/http ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2469,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2(&lf[142] /* (set! setup-download#make-HTTP-GET/1.1 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2710,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2(&lf[170] /* (set! setup-download#response-match-code? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2775,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2(&lf[103] /* (set! setup-download#http-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2798,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3304,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:427: char-set");
t15=C_fast_retrieve(lf[250]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=C_make_character(92);
av2[3]=C_make_character(47);
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}

/* setup-download#get-temporary-directory in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_fcall f_1353(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1353,1,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1357,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:67: temporary-directory");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[2];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t2;
tp(2,av2);}}

/* k1355 in setup-download#get-temporary-directory in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1357,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:68: create-temporary-directory");
t3=C_fast_retrieve(lf[13]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3093 in k3090 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in ... */
static void C_ccall f_3095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3095,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3090 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in ... */
static void C_ccall f_3092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3092,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:372: close-output-port");
t3=*((C_word*)lf[124]+1);{
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

/* k1746 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_1748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1748,2,av);}
C_trace("setup-download.scm:125: filter");
t2=C_fast_retrieve(lf[47]);{
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

/* a1739 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_1740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1740,3,av);}
t3=C_fast_retrieve(lf[45]);
C_trace("setup-download.scm:125: g341");
t4=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[46];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a3174 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_3175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3175,2,av);}
C_trace("setup-download.scm:389: http-connect");
f_2798(t1,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k1361 in k1355 in setup-download#get-temporary-directory in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1363,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1366,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:69: temporary-directory");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k1364 in k1361 in k1355 in setup-download#get-temporary-directory in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_1366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1366,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* setup-download#existing-version in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_fcall f_1368(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_1368,4,t1,t2,t3,t4);}
a=C_alloc(3);
if(C_truep(t3)){
if(C_truep(C_i_member(t3,t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
C_trace("setup-download.scm:76: error");
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[16];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1384,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:77: sort");
t6=C_fast_retrieve(lf[17]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=C_fast_retrieve(lf[18]);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1382 in setup-download#existing-version in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1384,2,av);}
t2=C_i_pairp(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(t2)?C_u_i_car(t1):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1775 in k1769 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_1777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1777,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:99: directory");
t3=C_fast_retrieve(lf[48]);{
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
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_1553(2,av2);}}}

/* k1769 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_1771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1771,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:98: directory?");
t3=C_fast_retrieve(lf[23]);{
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
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_1553(2,av2);}}}

/* k2894 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_2896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_2896,2,av);}
a=C_alloc(16);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[9],a[10]=((C_word)li52),tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:317: ##sys#call-with-values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[10];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2923,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:325: response-match-code?");
f_2775(t2,((C_word*)t0)[12],C_fix(200));}}

/* k2890 in k2878 in k2872 in loop in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in ... */
static void C_ccall f_2892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2892,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3783,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:331: d");
f_1337(t3,lf[178],C_a_i_list(&a,1,((C_word*)t0)[5]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3787,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:331: d");
f_1337(t2,lf[178],C_a_i_list(&a,1,((C_word*)t0)[5]));}}

/* k1782 in k1775 in k1769 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_1784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1784,2,av);}
C_trace("setup-download.scm:99: existing-version");
f_1368(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2862 in k2859 in k2856 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in ... */
static void C_ccall f_2864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2864,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:337: open-input-string");
t3=C_fast_retrieve(lf[104]);{
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

/* k2866 in k2862 in k2859 in k2856 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in ... */
static void C_ccall f_2868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2868,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace("setup-download.scm:338: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
C_values(4,av2);}}

/* k2859 in k2856 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in ... */
static void C_ccall f_2861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2861,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:336: close-input-port");
t4=*((C_word*)lf[125]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* for-each-loop345 in k1702 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_fcall f_1717(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1717,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1727,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1709,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:128: d");
f_1337(t7,lf[44],C_a_i_list(&a,1,t6));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2872 in loop in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in ... */
static void C_ccall f_2874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2874,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:329: string-null?");
t4=C_fast_retrieve(lf[180]);{
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

/* loop in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_fcall f_2870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2870,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2874,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:328: read-line");
t3=C_fast_retrieve(lf[115]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2856 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in ... */
static void C_ccall f_2858(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2858,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3255,a[2]=t5,a[3]=t3,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3255(t7,t2,C_SCHEME_END_OF_LIST);}

/* k2031 in map-loop425 in k1998 in k1978 in k1975 in k1972 in k1969 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_2033(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2033,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2008(t6,((C_word*)t0)[5],t5);}

/* k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1547,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1550,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:96: make-pathname");
t4=C_fast_retrieve(lf[20]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[49];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3217 in a3214 in a3198 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_3219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3219,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3222,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:400: close-input-port");
t4=*((C_word*)lf[125]+1);{
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

/* a3214 in a3198 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_3215(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3215,4,av);}
a=C_alloc(5);
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3219,a[2]=t1,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:399: read-all");
t7=C_fast_retrieve(lf[232]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k3211 in a3204 in a3198 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_3213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3213,2,av);}
C_trace("setup-download.scm:395: http-connect");
f_2798(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_2825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,5)))){
C_save_and_reclaim((void *)f_2825,2,av);}
a=C_alloc(39);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2930,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:306: make-HTTP-GET/1.1");
f_2710(t3,((C_word*)t0)[7],C_retrieve2(lf[1],"setup-download#\052chicken-install-user-agent\052"),((C_word*)t0)[8],C_a_i_list(&a,8,lf[169],((C_word*)t0)[9],lf[166],lf[188],lf[143],((C_word*)t0)[5],lf[182],((C_word*)t0)[6]));}

/* k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_2828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2828,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:309: flush-output");
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2821(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_2821,4,av);}
a=C_alloc(18);
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=t3;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2825,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:304: d");
f_1337(t8,lf[189],C_a_i_list(&a,1,((C_word*)t0)[4]));}

/* k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_2088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2088,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2091,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
C_trace("setup-download.scm:171: string-append");
t4=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[243];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[244];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[245];
f_2091(2,av2);}}}

/* k2573 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_2575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2575,2,av);}
if(C_truep(t1)){
t2=t1;
C_trace("setup-download.scm:254: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_values(4,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-download.scm:254: values");{
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
else{
C_trace("setup-download.scm:254: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[102];
C_values(4,av2);}}}}

/* k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_1553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1553,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1556,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
C_trace("setup-download.scm:100: make-pathname");
t4=C_fast_retrieve(lf[20]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_1556(2,av2);}}}

/* k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1550(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_1550,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1553,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_retrieve2(lf[2],"setup-download#\052trunk\052");
if(C_truep(C_retrieve2(lf[2],"setup-download#\052trunk\052"))){
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_1553(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1771,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:98: file-exists?");
t6=C_fast_retrieve(lf[24]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_1556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_1556,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li3),tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1598,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:94: ##sys#call-with-values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[8];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_1759(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1759,2,av);}
a=C_alloc(10);
t2=C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_1608(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1755,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:109: directory?");
t5=C_fast_retrieve(lf[23]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_2571(C_word c,C_word *av){
C_word tmp;
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_2571,2,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2575,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[7];
t8=((C_word*)t0)[8];
t9=((C_word*)t0)[9];
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3175,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t7,a[6]=t8,a[7]=t9,a[8]=((C_word)li29),tmp=(C_word)a,a+=9,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3181,a[2]=t6,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:387: ##sys#call-with-values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t10;
av2[3]=t11;
C_call_with_values(4,av2);}}

/* k3223 in k3220 in k3217 in a3214 in a3198 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_3225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3225,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3220 in k3217 in a3214 in a3198 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_3222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3222,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:401: close-output-port");
t3=*((C_word*)lf[124]+1);{
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

/* k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_2837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2837,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_stringp(t2))){
C_trace("setup-download.scm:290: irregex-match");
t4=C_fast_retrieve(lf[97]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[186];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_2840(2,av2);}}}

/* k1753 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_1755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1755,2,av);}
t2=((C_word*)t0)[2];
f_1608(t2,C_i_not(t1));}

/* k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_2834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_2834,2,av);}
a=C_alloc(14);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2837,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("setup-download.scm:312: read-line");
t5=C_fast_retrieve(lf[115]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_2831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2831,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("setup-download.scm:310: d");
f_1337(t2,lf[187],C_SCHEME_END_OF_LIST);}

/* k2095 in k2092 in k2089 in k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_2097(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2097,2,av);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[239];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2123,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:178: with-input-from-pipe");
t7=C_fast_retrieve(lf[85]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fast_retrieve(lf[86]);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k2092 in k2089 in k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_2094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2094,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2097,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:173: with-input-from-pipe");
t4=C_fast_retrieve(lf[85]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fast_retrieve(lf[86]);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a1560 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_1561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1561,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1572,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:103: make-pathname");
t3=C_fast_retrieve(lf[20]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1575,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:104: make-pathname");
t3=C_fast_retrieve(lf[20]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[27];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k1483 in k1480 in k1465 in k1459 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_1485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1485,2,av);}
C_trace("setup-download.scm:90: string-concatenate");
t2=C_fast_retrieve(lf[217]);{
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

/* k1480 in k1465 in k1459 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_1482(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1482,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1487,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1487(t6,t2,t1);}

/* k2089 in k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_2091(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2091,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2094,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2167,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2171,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:172: string-append");
t6=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[242];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* map-loop223 in k1480 in k1465 in k1459 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_fcall f_1487(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1487,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1512,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("setup-download.scm:91: g246");
t5=*((C_word*)lf[68]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[235];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2878 in k2872 in loop in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in ... */
static void C_ccall f_2880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2880,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:296: irregex-match");
t3=C_fast_retrieve(lf[97]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[179];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2555 in a2552 in a2546 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_2557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2557,2,av);}
C_trace("setup-download.scm:250: signal");
t2=C_fast_retrieve(lf[100]);{
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

/* k1570 in a1560 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_1572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1572,2,av);}
C_trace("setup-download.scm:103: values");{
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

/* k1573 in a1560 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_1575(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1575,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1578,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
if(C_truep(((C_word*)t0)[5])){
C_trace("setup-download.scm:82: warning");
t5=C_fast_retrieve(lf[25]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[26];
av2[3]=t4;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
f_1578(2,av2);}}}

/* k1576 in k1573 in a1560 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_1578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1578,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1593,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:106: file-exists?");
t4=C_fast_retrieve(lf[24]);{
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

/* a2552 in a2546 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_2553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2553,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2557,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("setup-download.scm:250: signal");
t3=C_fast_retrieve(lf[100]);{
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
else{
C_trace("setup-download.scm:249: setup-api#remove-directory");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[101]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[101]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* a3204 in a3198 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_3205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3205,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3213,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:397: string-append");
t3=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[231];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_2565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2565,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li35),tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[10],a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:248: ##sys#call-with-values");{
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

/* k1459 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_1461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1461,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1467,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:89: directory-exists?");
t4=C_fast_retrieve(lf[237]);{
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

/* k1465 in k1459 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_1467(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1467,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1482,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:91: directory");
t7=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[236];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2935 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2937(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2937,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[32]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2943,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:301: ##sys#print");
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[192];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_3181(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3181,4,av);}
a=C_alloc(6);
t4=t1;
t5=t2;
t6=t3;
t7=((C_word*)t0)[2];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2964,a[2]=t5,a[3]=t6,a[4]=t7,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:341: d");
f_1337(t8,lf[134],C_SCHEME_END_OF_LIST);}

/* k2932 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2934,2,av);}
a=C_alloc(9);
C_trace("setup-download.scm:299: d");
f_1337(((C_word*)t0)[2],lf[190],C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k2928 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_2930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2930,2,av);}
C_trace("setup-download.scm:305: display");
t2=*((C_word*)lf[127]+1);{
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

/* a2546 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_2547(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2547,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2553,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li27),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:248: k597");
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k2947 in k2944 in k2941 in k2935 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_2949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2949,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:301: ##sys#print");
t3=*((C_word*)lf[34]+1);{
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

/* a3192 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_3193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3193,2,av);}
C_trace("setup-download.scm:393: deconstruct-url");
f_2421(t1,((C_word*)t0)[2]);}

/* k1446 in map-loop181 in k1416 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_1448(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1448,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1423(t6,((C_word*)t0)[5],t5);}

/* k2944 in k2941 in k2935 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_2946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2946,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:301: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t2;
av2[2]=C_make_character(58);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in ... */
static void C_ccall f_2541(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_2541,3,av);}
a=C_alloc(18);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2565,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t2,a[11]=((C_word)li38),tmp=(C_word)a,a+=12,tmp);
C_trace("setup-download.scm:248: with-exception-handler");
t5=C_fast_retrieve(lf[55]);{
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

/* k3237 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in ... */
static void C_ccall f_3239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3239,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3243,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:411: make-property-condition");
t4=C_fast_retrieve(lf[118]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[119];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2941 in k2935 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2943,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:301: ##sys#print");
t3=*((C_word*)lf[34]+1);{
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
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3233 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in ... */
static void C_ccall f_3235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3235,2,av);}
C_trace("setup-download.scm:405: abort");
t2=C_fast_retrieve(lf[116]);{
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

/* a3198 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_3199(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3199,5,av);}
a=C_alloc(12);
t5=t2;
t6=t3;
t7=t4;
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3205,a[2]=t5,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t7,a[8]=((C_word)li65),tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:392: ##sys#call-with-values");{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t8;
av2[3]=t9;
C_call_with_values(4,av2);}}

/* k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_2849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2849,2,av);}
a=C_alloc(5);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2858,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:334: d");
f_1337(t2,lf[177],C_SCHEME_END_OF_LIST);}
else{
C_trace("setup-download.scm:338: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[5])[1];
C_values(4,av2);}}}

/* k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_2846(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_2846,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2870(t6,t2);}

/* k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_2843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_2843,2,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2896,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t2,a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
C_trace("setup-download.scm:316: response-match-code?");
f_2775(t3,((C_word*)t0)[13],C_fix(407));}

/* k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_2840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2840,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,tmp=(C_word)a,a+=14,tmp);
C_trace("setup-download.scm:314: d");
f_1337(t3,lf[185],C_a_i_list(&a,1,((C_word*)t0)[12]));}

/* k2915 in a2906 in k2894 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in ... */
static void C_ccall f_2917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2917,2,av);}
C_trace("setup-download.scm:319: display");
t2=*((C_word*)lf[127]+1);{
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

/* k3032 in k2983 in k2977 in k2968 in skip in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in ... */
static void C_ccall f_3034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3034,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
C_trace("setup-download.scm:359: open-input-string");
t2=C_fast_retrieve(lf[104]);{
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
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:360: string-every");
t3=C_fast_retrieve(lf[110]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[111]);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2921 in k2894 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_2923(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,6)))){
C_save_and_reclaim((void *)f_2923,2,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2846(2,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,1,((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2700,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2704,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:259: make-property-condition");
t6=C_fast_retrieve(lf[118]);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[120];
av2[3]=lf[121];
av2[4]=lf[184];
av2[5]=lf[122];
av2[6]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(7,av2);}}}

/* k2698 in k2921 in k2894 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in ... */
static void C_ccall f_2700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2700,2,av);}
C_trace("setup-download.scm:257: signal");
t2=C_fast_retrieve(lf[100]);{
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

/* k2702 in k2921 in k2894 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in ... */
static void C_ccall f_2704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2704,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:263: make-property-condition");
t4=C_fast_retrieve(lf[118]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[183];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2706 in k2702 in k2921 in k2894 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in ... */
static void C_ccall f_2708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2708,2,av);}
C_trace("setup-download.scm:258: make-composite-condition");
t2=C_fast_retrieve(lf[117]);{
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

/* k2977 in k2968 in skip in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in ... */
static void C_ccall f_2979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2979,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
C_trace("setup-download.scm:347: open-input-string");
t2=C_fast_retrieve(lf[104]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[105];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:348: irregex-match");
t3=C_fast_retrieve(lf[97]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[113];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k1643 in k1627 in k1624 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in ... */
static void C_ccall f_1645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1645,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
C_trace("setup-download.scm:120: values");{
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
else{
C_trace("setup-download.scm:121: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[29];
C_values(4,av2);}}}

/* k1646 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_1648(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1648,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[32]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1654,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:116: ##sys#print");
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[36];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2968 in skip in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in ... */
static void C_ccall f_2970(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2970,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_eofp(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t3;
f_2979(2,av2);}}
else{
C_trace("setup-download.scm:346: irregex-match");
t5=C_fast_retrieve(lf[97]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[114];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3304(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_3304,2,av);}
a=C_alloc(12);
t2=C_mutate2(&lf[194] /* (set! setup-download#slashes ...) */,t1);
t3=C_mutate2(&lf[195] /* (set! setup-download#check-egg-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3326,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[201]+1 /* (set! setup-download#retrieve-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3338,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[216]+1 /* (set! setup-download#list-extensions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3443,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[234]+1 /* (set! setup-download#list-extension-versions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3516,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k3298 in get-chunks in k2856 in k2847 in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in ... */
static void C_ccall f_3300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3300,2,av);}
a=C_alloc(10);
t2=C_a_i_string_to_number(&a,2,t1,C_fix(16));
if(C_truep(t2)){
if(C_truep(C_i_zerop(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:419: d");
f_1337(t3,lf[174],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3283,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("read-string/port");
t4=C_fast_retrieve(lf[130]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}
else{
C_trace("setup-download.scm:417: error");
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[176];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k2983 in k2977 in k2968 in skip in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in ... */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2985,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:342: g725");
t3=t2;
f_2989(t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3034,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:358: irregex-match");
t3=C_fast_retrieve(lf[97]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[112];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k1655 in k1652 in k1646 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in ... */
static void C_ccall f_1657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1657,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:116: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* g725 in k2983 in k2977 in k2968 in skip in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in ... */
static void C_fcall f_2989(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2989,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2993,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:350: irregex-match-substring");
t4=C_fast_retrieve(lf[82]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1652 in k1646 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in ... */
static void C_ccall f_1654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1654,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:116: ##sys#print");
t3=*((C_word*)lf[34]+1);{
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

/* k2953 in k2950 in k2947 in k2944 in k2941 in k2935 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in ... */
static void C_ccall f_2955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2955,2,av);}
C_trace("setup-download.scm:301: get-output-string");
t2=C_fast_retrieve(lf[33]);{
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

/* k2950 in k2947 in k2944 in k2941 in k2935 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_2952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2952,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:301: ##sys#print");
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2609 in k2605 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_2611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_2611,2,av);}
if(C_truep(((C_word*)t0)[2])){
C_trace("setup-download.scm:238: string-append");
t2=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[135];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=lf[136];
av2[7]=t1;
av2[8]=lf[137];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}
else{
C_trace("setup-download.scm:238: string-append");
t2=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[135];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=lf[136];
av2[7]=t1;
av2[8]=lf[138];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}}

/* k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_2964(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_2964,2,av);}
a=C_alloc(21);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2966,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3057,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word)li33),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_3057(t10,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* skip in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in ... */
static void C_fcall f_2966(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2966,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2970,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:344: read-line");
t3=C_fast_retrieve(lf[115]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2605 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2607,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:242: ->string");
t4=C_fast_retrieve(lf[139]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[3],"setup-download#\052mode\052");
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3127 in k3124 in k3108 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in ... */
static void C_ccall f_3129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3129,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("read-string/port");
t3=C_fast_retrieve(lf[130]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3124 in k3108 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in ... */
static void C_ccall f_3126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3126,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:382: read");
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2991 in g725 in k2983 in k2977 in k2968 in skip in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in ... */
static void C_ccall f_2993(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2993,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_i_string_equal_p(lf[106],t2);
t4=(C_truep(t3)?t3:C_u_i_string_equal_p(lf[107],t2));
if(C_truep(t4)){
C_trace("setup-download.scm:357: open-input-string");
t5=C_fast_retrieve(lf[104]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_i_string_equal_p(t2,((C_word*)((C_word*)t0)[4])[1]);
t7=t5;
f_3011(t7,C_i_not(t6));}
else{
t6=t5;
f_3011(t6,C_SCHEME_FALSE);}}}

/* k1658 in k1655 in k1652 in k1646 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in ... */
static void C_ccall f_1660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1660,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:116: ##sys#print");
t3=*((C_word*)lf[34]+1);{
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

/* k1661 in k1658 in k1655 in k1652 in k1646 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in ... */
static void C_ccall f_1663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1663,2,av);}
C_trace("setup-download.scm:116: get-output-string");
t2=C_fast_retrieve(lf[33]);{
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

/* k3121 in k3111 in k3108 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in ... */
static void C_ccall f_3123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3123,2,av);}
C_trace("setup-download.scm:378: create-directory");
t2=C_fast_retrieve(lf[42]);{
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

/* k1667 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_1669(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1669,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[32]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1675,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:117: ##sys#print");
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[39];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2334 in a2278 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_2336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2336,2,av);}
C_trace("setup-download.scm:201: make-pathname");
t2=C_fast_retrieve(lf[20]);{
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

/* k1582 in k1576 in k1573 in a1560 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_1584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1584,2,av);}
if(C_truep(t1)){
C_trace("setup-download.scm:107: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[21];
C_values(4,av2);}}
else{
C_trace("setup-download.scm:108: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[22];
C_values(4,av2);}}}

/* a2900 in k2894 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_2901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2901,2,av);}
C_trace("setup-download.scm:317: tcp-connect");
t2=C_fast_retrieve(lf[172]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a2906 in k2894 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_2907(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,5)))){
C_save_and_reclaim((void *)f_2907,4,av);}
a=C_alloc(34);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2917,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:320: make-HTTP-GET/1.1");
f_2710(t6,((C_word*)t0)[4],C_retrieve2(lf[1],"setup-download#\052chicken-install-user-agent\052"),((C_word*)t0)[5],C_a_i_list(&a,10,lf[169],((C_word*)t0)[6],lf[166],lf[181],lf[143],((C_word*)t0)[7],lf[182],((C_word*)t0)[8],lf[144],((C_word*)t0)[9]));}

/* k3133 in k3130 in k3127 in k3124 in k3108 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in ... */
static void C_ccall f_3135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3135,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
C_trace("setup-download.scm:385: get-files");
t3=((C_word*)((C_word*)t0)[4])[1];
f_3057(t3,((C_word*)t0)[5],t2);}

/* k3130 in k3127 in k3124 in k3108 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in ... */
static void C_ccall f_3132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3132,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3146,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:384: make-pathname");
t5=C_fast_retrieve(lf[20]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1673 in k1667 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in ... */
static void C_ccall f_1675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1675,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:117: ##sys#print");
t3=*((C_word*)lf[34]+1);{
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

/* k1676 in k1673 in k1667 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in ... */
static void C_ccall f_1678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1678,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:117: ##sys#print");
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[38];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2324 in k2281 in a2278 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_2326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2326,2,av);}
C_trace("setup-download.scm:204: conc");
t2=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(47);
av2[4]=((C_word*)t0)[4];
av2[5]=C_make_character(47);
av2[6]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* f3787 in k2890 in k2878 in k2872 in loop in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in ... */
static void C_ccall f3787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f3787,2,av);}
C_trace("setup-download.scm:332: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2870(t2,((C_word*)t0)[3]);}

/* k1591 in k1576 in k1573 in a1560 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_1593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1593,2,av);}
if(C_truep(t1)){
C_trace("setup-download.scm:106: directory?");
t2=C_fast_retrieve(lf[23]);{
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
C_trace("setup-download.scm:108: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=lf[22];
C_values(4,av2);}}}

/* f3783 in k2890 in k2878 in k2872 in loop in k2844 in k2841 in k2838 in k2835 in k2832 in k2829 in k2826 in k2823 in a2820 in k2800 in setup-download#http-connect in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in ... */
static void C_ccall f3783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f3783,2,av);}
C_trace("setup-download.scm:332: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_2870(t2,((C_word*)t0)[3]);}

/* a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in ... */
static void C_ccall f_1598(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1598,4,av);}
a=C_alloc(8);
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1759,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
C_trace("setup-download.scm:109: file-exists?");
t7=C_fast_retrieve(lf[24]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k2317 in k2307 in k2281 in a2278 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_2319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2319,2,av);}
t2=((C_word*)t0)[2];
C_trace("setup-download.scm:220: conc");
t3=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(47);
av2[4]=t2;
av2[5]=lf[81];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k3012 in k3009 in k2991 in g725 in k2983 in k2977 in k2968 in skip in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in ... */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3014,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
C_trace("setup-download.scm:357: open-input-string");
t3=C_fast_retrieve(lf[104]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3009 in k2991 in g725 in k2983 in k2977 in k2968 in skip in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in ... */
static void C_fcall f_3011(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_3011,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:353: warning");
t3=C_fast_retrieve(lf[25]);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[108];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[5]);
C_trace("setup-download.scm:357: open-input-string");
t3=C_fast_retrieve(lf[104]);{
C_word av2[3];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3516(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_3516,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+9);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
t6=C_i_get_keyword(lf[203],t5,C_SCHEME_FALSE);
t7=t6;
t8=C_i_get_keyword(lf[205],t5,C_SCHEME_FALSE);
t9=t8;
t10=C_i_get_keyword(lf[206],t5,C_SCHEME_FALSE);
t11=t10;
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3529,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=t4,a[6]=t9,a[7]=t11,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:469: check-egg-name");
f_3326(t12,t2);}

/* k2311 in k2307 in k2281 in a2278 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_2313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,14)))){
C_save_and_reclaim((void *)f_2313,2,av);}
t2=(C_truep(C_retrieve2(lf[0],"setup-download#\052quiet\052"))?lf[77]:lf[78]);
C_trace("setup-download.scm:157: conc");
t3=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 15) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(15);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[79];
av2[3]=((C_word*)t0)[3];
av2[4]=C_make_character(32);
av2[5]=((C_word*)t0)[4];
av2[6]=C_make_character(32);
av2[7]=C_make_character(34);
av2[8]=((C_word*)t0)[5];
av2[9]=C_make_character(34);
av2[10]=C_make_character(32);
av2[11]=C_make_character(34);
av2[12]=t1;
av2[13]=C_make_character(34);
av2[14]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(15,av2);}}

/* a3510 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3511,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2307 in k2281 in a2278 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_2309(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2309,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(C_retrieve2(lf[3],"setup-download#\052mode\052"),lf[80]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:211: create-directory");
t6=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=((C_word*)t0)[6];
f_2313(2,av2);}}}

/* k2303 in k2287 in k2284 in k2281 in a2278 in k2244 in k2241 in k2238 in k2235 in k2232 in k2229 in setup-download#locate-egg/svn in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in ... */
static void C_ccall f_2305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2305,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
C_trace("setup-download.scm:216: values");{
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
else{
C_trace("setup-download.scm:217: values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[75];
C_values(4,av2);}}}

/* a2592 in a2586 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_2593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2593,2,av);}{
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

/* setup-download#check-egg-name in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_fcall f_3326(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3326,2,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3333,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=t2;
if(C_truep((C_truep(C_i_equalp(t5,lf[197]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t5,lf[198]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t5,lf[199]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t6=t4;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3320,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:431: string-index");
t7=C_fast_retrieve(lf[200]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
av2[3]=C_retrieve2(lf[194],"setup-download#slashes");
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k3318 in setup-download#check-egg-name in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3320,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_not(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3472(C_word c,C_word *av){
C_word tmp;
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_3472,2,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[210]);
if(C_truep(t3)){
t4=t1;
t5=((C_word*)t0)[3];
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1418,a[2]=t4,a[3]=t8,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:85: directory");
t11=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t4=C_eqp(t2,lf[211]);
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[3];
t7=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
t14=t13;
t15=C_i_nullp(t11);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1971,a[2]=t5,a[3]=t6,a[4]=t14,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
C_trace("setup-download.scm:161: string-append");
t18=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t18;
av2[1]=t17;
av2[2]=lf[228];
av2[3]=t9;
av2[4]=lf[229];
((C_proc)(void*)(*((C_word*)t18+1)))(5,av2);}}
else{
t18=t17;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=lf[230];
f_1971(2,av2);}}}
else{
t5=C_eqp(t2,lf[212]);
if(C_truep(t5)){
t6=t1;
t7=((C_word*)t0)[3];
t8=((C_word*)t0)[6];
t9=((C_word*)t0)[7];
t10=((C_word*)t0)[8];
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3193,a[2]=t7,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3199,a[2]=t8,a[3]=t9,a[4]=t10,a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp);
C_trace("setup-download.scm:392: ##sys#call-with-values");{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t6;
av2[2]=t11;
av2[3]=t12;
C_call_with_values(4,av2);}}
else{
C_trace("setup-download.scm:466: error");
t6=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[233];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}}}

/* setup-download#retrieve-extension in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3338(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +20,c,4)))){
C_save_and_reclaim((void*)f_3338,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+20);
t5=C_build_rest(&a,c,5,av);
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
t6=C_i_get_keyword(lf[202],t5,C_SCHEME_FALSE);
t7=t6;
t8=C_i_get_keyword(lf[203],t5,C_SCHEME_FALSE);
t9=t8;
t10=C_i_get_keyword(lf[204],t5,C_SCHEME_FALSE);
t11=t10;
t12=C_i_get_keyword(lf[205],t5,C_SCHEME_FALSE);
t13=t12;
t14=C_i_get_keyword(lf[206],t5,C_SCHEME_FALSE);
t15=t14;
t16=C_i_get_keyword(lf[207],t5,C_SCHEME_FALSE);
t17=t16;
t18=C_i_get_keyword(lf[143],t5,C_SCHEME_FALSE);
t19=t18;
t20=C_i_get_keyword(lf[182],t5,C_SCHEME_FALSE);
t21=t20;
t22=C_i_get_keyword(lf[144],t5,C_SCHEME_FALSE);
t23=t22;
t24=C_i_get_keyword(lf[208],t5,C_SCHEME_FALSE);
t25=t24;
t26=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3372,a[2]=t5,a[3]=t9,a[4]=t25,a[5]=t3,a[6]=t2,a[7]=t4,a[8]=t7,a[9]=t11,a[10]=t13,a[11]=t15,a[12]=t17,a[13]=t19,a[14]=t21,a[15]=t23,a[16]=t1,tmp=(C_word)a,a+=17,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3440,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:437: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[163]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[163]+1);
av2[1]=t26;
av2[2]=lf[215];
av2[3]=t5;
av2[4]=t27;
tp(5,av2);}}

/* k3331 in setup-download#check-egg-name in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3333,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
C_trace("setup-download.scm:435: error");
t2=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[196];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2434 in k2430 in k2423 in setup-download#deconstruct-url in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_2436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2436,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
C_trace("setup-download.scm:231: irregex-match-substring");
t4=C_fast_retrieve(lf[82]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(5);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_2440(2,av2);}}}

/* k2430 in k2423 in setup-download#deconstruct-url in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2432(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2432,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2436,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2449,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("setup-download.scm:226: irregex-match-substring");
t5=C_fast_retrieve(lf[82]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(3);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_2449(2,av2);}}}

/* a2586 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_2587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_2587,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2593,a[2]=t2,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:248: k597");
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

/* k2423 in setup-download#deconstruct-url in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_2425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2425,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2432,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
C_trace("setup-download.scm:225: irregex-match-substring");
t4=C_fast_retrieve(lf[82]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
f_2432(2,av2);}}}

/* setup-download#deconstruct-url in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_fcall f_2421(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2421,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2425,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:223: irregex-match");
t4=C_fast_retrieve(lf[97]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[98];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1305,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_tcp_toplevel(2,av2);}}

/* k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1308,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1311,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d13_toplevel(2,av2);}}

/* k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1302,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1305,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1279 */
static void C_ccall f_1281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1281,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1284,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1285 in k1282 in k1279 */
static void C_ccall f_1287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1287,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1290,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1317,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:49: tcp-connect-timeout");
t3=C_fast_retrieve(lf[256]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(30000);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1282 in k1279 */
static void C_ccall f_1284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1284,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1311,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1314,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:27: ##sys#require");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[257]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[257]+1);
av2[1]=t2;
av2[2]=lf[258];
tp(3,av2);}}

/* k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1290,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1293,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1293,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1296,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1327(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1327,2,av);}
a=C_alloc(6);
t2=lf[0] /* setup-download#*quiet* */ =C_SCHEME_FALSE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3574,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:54: chicken-version");
t5=C_fast_retrieve(lf[253]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1296,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1299,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utils_toplevel(2,av2);}}

/* k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1324,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1327,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:51: tcp-write-timeout");
t3=C_fast_retrieve(lf[254]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(30000);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1299,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d1_toplevel(2,av2);}}

/* k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1321,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:50: tcp-read-timeout");
t3=C_fast_retrieve(lf[255]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(30000);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a3430 in k3376 in k3370 in setup-download#retrieve-extension in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_3431(C_word c,C_word *av){
C_word tmp;
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3431,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[2],"setup-download#\052trunk\052"));
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,C_retrieve2(lf[3],"setup-download#\052mode\052"));
t5=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate2(&lf[2] /* (set! setup-download#*trunk* ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate2(&lf[3] /* (set! setup-download#*mode* ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* a3466 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3467,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[0],"setup-download#\052quiet\052"));
t3=C_mutate2(&lf[0] /* (set! setup-download#*quiet* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1682 in k1679 in k1676 in k1673 in k1667 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in ... */
static void C_ccall f_1684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1684,2,av);}
C_trace("setup-download.scm:117: get-output-string");
t2=C_fast_retrieve(lf[33]);{
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

/* k1679 in k1676 in k1673 in k1667 in k1621 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in ... */
static void C_ccall f_1681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1681,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("setup-download.scm:117: ##sys#print");
t3=*((C_word*)lf[34]+1);{
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

/* setup-download#d in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_fcall f_1337(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_1337,3,t1,t2,t3);}
a=C_alloc(4);
t4=(C_truep(C_retrieve2(lf[0],"setup-download#\052quiet\052"))?*((C_word*)lf[7]+1):*((C_word*)lf[8]+1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1344,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);{
C_word av2[6];
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[10]+1);
av2[3]=t5;
av2[4]=t2;
av2[5]=t3;
C_apply(6,av2);}}

/* k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1332(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1332,2,av);}
a=C_alloc(6);
t2=C_mutate2(&lf[1] /* (set! setup-download#*chicken-install-user-agent* ...) */,t1);
t3=lf[2] /* setup-download#*trunk* */ =C_SCHEME_FALSE;;
t4=C_mutate2(&lf[3] /* (set! setup-download#*mode* ...) */,lf[4]);
t5=C_mutate2(&lf[5] /* (set! setup-download#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t6=C_mutate2(&lf[6] /* (set! setup-download#d ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1337,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1351,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:64: make-parameter");
t8=C_fast_retrieve(lf[251]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_1525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_1525,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+7);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1547,a[2]=t2,a[3]=t7,a[4]=t17,a[5]=t1,a[6]=t12,tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:95: make-pathname");
t21=C_fast_retrieve(lf[20]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t21;
av2[1]=t20;
av2[2]=t3;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t21+1)))(4,av2);}}

/* k1521 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in ... */
static void C_ccall f_1523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1523,2,av);}
C_trace("setup-download.scm:88: make-pathname");
t2=C_fast_retrieve(lf[20]);{
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

/* setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +24,c,4)))){
C_save_and_reclaim((void*)f_3443,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+24);
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
t5=C_i_get_keyword(lf[203],t4,C_SCHEME_FALSE);
t6=C_i_get_keyword(lf[205],t4,C_SCHEME_FALSE);
t7=t6;
t8=C_i_get_keyword(lf[206],t4,C_SCHEME_FALSE);
t9=t8;
t10=C_i_get_keyword(lf[143],t4,C_SCHEME_FALSE);
t11=t10;
t12=C_i_get_keyword(lf[182],t4,C_SCHEME_FALSE);
t13=t12;
t14=C_i_get_keyword(lf[144],t4,C_SCHEME_FALSE);
t15=t14;
t16=t5;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_FALSE;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3467,a[2]=t19,a[3]=t17,a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp);
t21=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3472,a[2]=t2,a[3]=t3,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=t13,a[8]=t15,a[9]=((C_word)li68),tmp=(C_word)a,a+=10,tmp);
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3511,a[2]=t17,a[3]=t19,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:455: ##sys#dynamic-wind");
t23=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t23;
av2[1]=t1;
av2[2]=t20;
av2[3]=t21;
av2[4]=t22;
((C_proc)(void*)(*((C_word*)t23+1)))(5,av2);}}

/* a3439 in setup-download#retrieve-extension in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3440,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1693 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_1695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1695,2,av);}
C_trace("setup-download.scm:113: qs");
t2=C_fast_retrieve(lf[40]);{
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

/* k1689 in k1618 in k1615 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_1691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1691,2,av);}
C_trace("setup-download.scm:114: qs");
t2=C_fast_retrieve(lf[40]);{
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

/* k1696 in k1606 in k1757 in a1597 in k1554 in k1551 in k1548 in k1545 in setup-download#locate-egg/local in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_1698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1698,2,av);}
C_trace("setup-download.scm:131: values");{
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

/* k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 */
static void C_ccall f_3529(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3529,2,av);}
a=C_alloc(22);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3534,a[2]=t5,a[3]=t3,a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3539,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li74),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3567,a[2]=t3,a[3]=t5,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
C_trace("setup-download.scm:470: ##sys#dynamic-wind");
t9=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[8];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k2127 in k2121 in k2095 in k2092 in k2089 in k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in ... */
static void C_ccall f_2129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2129,2,av);}
C_trace("setup-download.scm:176: string-concatenate");
t2=C_fast_retrieve(lf[217]);{
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

/* k2121 in k2095 in k2092 in k2089 in k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in ... */
static void C_ccall f_2123(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2123,2,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[219]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2131,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2131(t7,t3,t1);}

/* k2117 in map-loop475 in k2121 in k2095 in k2092 in k2089 in k2086 in a3538 in k3527 in setup-download#list-extension-versions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in ... */
static void C_ccall f_2119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2119,2,av);}
C_trace("##sys#string-append");
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[240];
tp(4,av2);}}

/* k3114 in k3111 in k3108 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in ... */
static void C_ccall f_3116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3116,2,av);}
C_trace("setup-download.scm:379: get-files");
t2=((C_word*)((C_word*)t0)[2])[1];
f_3057(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3111 in k3108 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in ... */
static void C_ccall f_3113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3113,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3123,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("setup-download.scm:378: make-pathname");
t4=C_fast_retrieve(lf[20]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3108 in k3068 in k3062 in k3059 in get-files in k2962 in a3180 in a2570 in a2564 in a2540 in k2531 in k2528 in k2525 in k2522 in k2519 in a2516 in setup-download#locate-egg/http in k1349 in k1330 in k1325 in k1322 in k1319 in ... */
static void C_ccall f_3110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3110,2,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("setup-download.scm:377: d");
f_1337(t2,lf[126],C_a_i_list(&a,1,((C_word*)t0)[6]));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3126,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("setup-download.scm:381: d");
f_1337(t2,lf[131],C_a_i_list(&a,1,((C_word*)t0)[6]));}}

/* k1416 in a3471 in setup-download#list-extensions in k3302 in k1349 in k1330 in k1325 in k1322 in k1319 in k1315 in k1312 in k1309 in k1306 in k1303 in k1300 in k1297 in k1294 in k1291 in k1288 in k1285 in k1282 in k1279 in ... */
static void C_ccall f_1418(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1418,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1423,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1423(t6,t2,t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[295] = {
{"f_2517:setup_2ddownload_2escm",(void*)f_2517},
{"f_2511:setup_2ddownload_2escm",(void*)f_2511},
{"f_1996:setup_2ddownload_2escm",(void*)f_1996},
{"f_2131:setup_2ddownload_2escm",(void*)f_2131},
{"f_2203:setup_2ddownload_2escm",(void*)f_2203},
{"f_3255:setup_2ddownload_2escm",(void*)f_3255},
{"f_3567:setup_2ddownload_2escm",(void*)f_3567},
{"f_1980:setup_2ddownload_2escm",(void*)f_1980},
{"f_2240:setup_2ddownload_2escm",(void*)f_2240},
{"f_1629:setup_2ddownload_2escm",(void*)f_1629},
{"f_1626:setup_2ddownload_2escm",(void*)f_1626},
{"f_1623:setup_2ddownload_2escm",(void*)f_1623},
{"f_1620:setup_2ddownload_2escm",(void*)f_1620},
{"f_3574:setup_2ddownload_2escm",(void*)f_3574},
{"f_1895:setup_2ddownload_2escm",(void*)f_1895},
{"f_2237:setup_2ddownload_2escm",(void*)f_2237},
{"f_3243:setup_2ddownload_2escm",(void*)f_3243},
{"f_1899:setup_2ddownload_2escm",(void*)f_1899},
{"f_3247:setup_2ddownload_2escm",(void*)f_3247},
{"f_2234:setup_2ddownload_2escm",(void*)f_2234},
{"f_2171:setup_2ddownload_2escm",(void*)f_2171},
{"f_1512:setup_2ddownload_2escm",(void*)f_1512},
{"f_2246:setup_2ddownload_2escm",(void*)f_2246},
{"f_2243:setup_2ddownload_2escm",(void*)f_2243},
{"f_1977:setup_2ddownload_2escm",(void*)f_1977},
{"f_1971:setup_2ddownload_2escm",(void*)f_1971},
{"f_1974:setup_2ddownload_2escm",(void*)f_1974},
{"f_2156:setup_2ddownload_2escm",(void*)f_2156},
{"f_1889:setup_2ddownload_2escm",(void*)f_1889},
{"f_2167:setup_2ddownload_2escm",(void*)f_2167},
{"f_1943:setup_2ddownload_2escm",(void*)f_1943},
{"f_1881:setup_2ddownload_2escm",(void*)f_1881},
{"f_3277:setup_2ddownload_2escm",(void*)f_3277},
{"f_1883:setup_2ddownload_2escm",(void*)f_1883},
{"f_3289:setup_2ddownload_2escm",(void*)f_3289},
{"toplevel:setup_2ddownload_2escm",(void*)C_toplevel},
{"f_2283:setup_2ddownload_2escm",(void*)f_2283},
{"f_2006:setup_2ddownload_2escm",(void*)f_2006},
{"f_2008:setup_2ddownload_2escm",(void*)f_2008},
{"f_2000:setup_2ddownload_2escm",(void*)f_2000},
{"f_3534:setup_2ddownload_2escm",(void*)f_3534},
{"f_1916:setup_2ddownload_2escm",(void*)f_1916},
{"f_1858:setup_2ddownload_2escm",(void*)f_1858},
{"f_3539:setup_2ddownload_2escm",(void*)f_3539},
{"f_1910:setup_2ddownload_2escm",(void*)f_1910},
{"f_3283:setup_2ddownload_2escm",(void*)f_3283},
{"f_1853:setup_2ddownload_2escm",(void*)f_1853},
{"f_3286:setup_2ddownload_2escm",(void*)f_3286},
{"f_2798:setup_2ddownload_2escm",(void*)f_2798},
{"f_2279:setup_2ddownload_2escm",(void*)f_2279},
{"f_3057:setup_2ddownload_2escm",(void*)f_3057},
{"f_2251:setup_2ddownload_2escm",(void*)f_2251},
{"f_1423:setup_2ddownload_2escm",(void*)f_1423},
{"f_2790:setup_2ddownload_2escm",(void*)f_2790},
{"f_1421:setup_2ddownload_2escm",(void*)f_1421},
{"f_1866:setup_2ddownload_2escm",(void*)f_1866},
{"f_2286:setup_2ddownload_2escm",(void*)f_2286},
{"f_2289:setup_2ddownload_2escm",(void*)f_2289},
{"f_2345:setup_2ddownload_2escm",(void*)f_2345},
{"f_2262:setup_2ddownload_2escm",(void*)f_2262},
{"f_2349:setup_2ddownload_2escm",(void*)f_2349},
{"f_2343:setup_2ddownload_2escm",(void*)f_2343},
{"f_2231:setup_2ddownload_2escm",(void*)f_2231},
{"f_2359:setup_2ddownload_2escm",(void*)f_2359},
{"f_1904:setup_2ddownload_2escm",(void*)f_1904},
{"f_1847:setup_2ddownload_2escm",(void*)f_1847},
{"f_1843:setup_2ddownload_2escm",(void*)f_1843},
{"f_2265:setup_2ddownload_2escm",(void*)f_2265},
{"f_2786:setup_2ddownload_2escm",(void*)f_2786},
{"f_2469:setup_2ddownload_2escm",(void*)f_2469},
{"f_2754:setup_2ddownload_2escm",(void*)f_2754},
{"f_2757:setup_2ddownload_2escm",(void*)f_2757},
{"f_2751:setup_2ddownload_2escm",(void*)f_2751},
{"f_1928:setup_2ddownload_2escm",(void*)f_1928},
{"f_1826:setup_2ddownload_2escm",(void*)f_1826},
{"f_1922:setup_2ddownload_2escm",(void*)f_1922},
{"f_1822:setup_2ddownload_2escm",(void*)f_1822},
{"f_3061:setup_2ddownload_2escm",(void*)f_3061},
{"f_2536:setup_2ddownload_2escm",(void*)f_2536},
{"f_3064:setup_2ddownload_2escm",(void*)f_3064},
{"f_3372:setup_2ddownload_2escm",(void*)f_3372},
{"f_2533:setup_2ddownload_2escm",(void*)f_2533},
{"f_2530:setup_2ddownload_2escm",(void*)f_2530},
{"f_3378:setup_2ddownload_2escm",(void*)f_3378},
{"f_2760:setup_2ddownload_2escm",(void*)f_2760},
{"f_1608:setup_2ddownload_2escm",(void*)f_1608},
{"f_2449:setup_2ddownload_2escm",(void*)f_2449},
{"f_1878:setup_2ddownload_2escm",(void*)f_1878},
{"f_2440:setup_2ddownload_2escm",(void*)f_2440},
{"f_3070:setup_2ddownload_2escm",(void*)f_3070},
{"f_2527:setup_2ddownload_2escm",(void*)f_2527},
{"f_2521:setup_2ddownload_2escm",(void*)f_2521},
{"f_3383:setup_2ddownload_2escm",(void*)f_3383},
{"f_2524:setup_2ddownload_2escm",(void*)f_2524},
{"f_1617:setup_2ddownload_2escm",(void*)f_1617},
{"f_2452:setup_2ddownload_2escm",(void*)f_2452},
{"f_3043:setup_2ddownload_2escm",(void*)f_3043},
{"f_2743:setup_2ddownload_2escm",(void*)f_2743},
{"f_3392:setup_2ddownload_2escm",(void*)f_3392},
{"f_2717:setup_2ddownload_2escm",(void*)f_2717},
{"f_2714:setup_2ddownload_2escm",(void*)f_2714},
{"f_2710:setup_2ddownload_2escm",(void*)f_2710},
{"f_2802:setup_2ddownload_2escm",(void*)f_2802},
{"f_2807:setup_2ddownload_2escm",(void*)f_2807},
{"f_2723:setup_2ddownload_2escm",(void*)f_2723},
{"f_2720:setup_2ddownload_2escm",(void*)f_2720},
{"f_1837:setup_2ddownload_2escm",(void*)f_1837},
{"f_1831:setup_2ddownload_2escm",(void*)f_1831},
{"f_2775:setup_2ddownload_2escm",(void*)f_2775},
{"f_1704:setup_2ddownload_2escm",(void*)f_1704},
{"f_1709:setup_2ddownload_2escm",(void*)f_1709},
{"f_3146:setup_2ddownload_2escm",(void*)f_3146},
{"f_3148:setup_2ddownload_2escm",(void*)f_3148},
{"f_2739:setup_2ddownload_2escm",(void*)f_2739},
{"f_1727:setup_2ddownload_2escm",(void*)f_1727},
{"f_1344:setup_2ddownload_2escm",(void*)f_1344},
{"f_1351:setup_2ddownload_2escm",(void*)f_1351},
{"f_1353:setup_2ddownload_2escm",(void*)f_1353},
{"f_1357:setup_2ddownload_2escm",(void*)f_1357},
{"f_3095:setup_2ddownload_2escm",(void*)f_3095},
{"f_3092:setup_2ddownload_2escm",(void*)f_3092},
{"f_1748:setup_2ddownload_2escm",(void*)f_1748},
{"f_1740:setup_2ddownload_2escm",(void*)f_1740},
{"f_3175:setup_2ddownload_2escm",(void*)f_3175},
{"f_1363:setup_2ddownload_2escm",(void*)f_1363},
{"f_1366:setup_2ddownload_2escm",(void*)f_1366},
{"f_1368:setup_2ddownload_2escm",(void*)f_1368},
{"f_1384:setup_2ddownload_2escm",(void*)f_1384},
{"f_1777:setup_2ddownload_2escm",(void*)f_1777},
{"f_1771:setup_2ddownload_2escm",(void*)f_1771},
{"f_2896:setup_2ddownload_2escm",(void*)f_2896},
{"f_2892:setup_2ddownload_2escm",(void*)f_2892},
{"f_1784:setup_2ddownload_2escm",(void*)f_1784},
{"f_2864:setup_2ddownload_2escm",(void*)f_2864},
{"f_2868:setup_2ddownload_2escm",(void*)f_2868},
{"f_2861:setup_2ddownload_2escm",(void*)f_2861},
{"f_1717:setup_2ddownload_2escm",(void*)f_1717},
{"f_2874:setup_2ddownload_2escm",(void*)f_2874},
{"f_2870:setup_2ddownload_2escm",(void*)f_2870},
{"f_2858:setup_2ddownload_2escm",(void*)f_2858},
{"f_2033:setup_2ddownload_2escm",(void*)f_2033},
{"f_1547:setup_2ddownload_2escm",(void*)f_1547},
{"f_3219:setup_2ddownload_2escm",(void*)f_3219},
{"f_3215:setup_2ddownload_2escm",(void*)f_3215},
{"f_3213:setup_2ddownload_2escm",(void*)f_3213},
{"f_2825:setup_2ddownload_2escm",(void*)f_2825},
{"f_2828:setup_2ddownload_2escm",(void*)f_2828},
{"f_2821:setup_2ddownload_2escm",(void*)f_2821},
{"f_2088:setup_2ddownload_2escm",(void*)f_2088},
{"f_2575:setup_2ddownload_2escm",(void*)f_2575},
{"f_1553:setup_2ddownload_2escm",(void*)f_1553},
{"f_1550:setup_2ddownload_2escm",(void*)f_1550},
{"f_1556:setup_2ddownload_2escm",(void*)f_1556},
{"f_1759:setup_2ddownload_2escm",(void*)f_1759},
{"f_2571:setup_2ddownload_2escm",(void*)f_2571},
{"f_3225:setup_2ddownload_2escm",(void*)f_3225},
{"f_3222:setup_2ddownload_2escm",(void*)f_3222},
{"f_2837:setup_2ddownload_2escm",(void*)f_2837},
{"f_1755:setup_2ddownload_2escm",(void*)f_1755},
{"f_2834:setup_2ddownload_2escm",(void*)f_2834},
{"f_2831:setup_2ddownload_2escm",(void*)f_2831},
{"f_2097:setup_2ddownload_2escm",(void*)f_2097},
{"f_2094:setup_2ddownload_2escm",(void*)f_2094},
{"f_1561:setup_2ddownload_2escm",(void*)f_1561},
{"f_1485:setup_2ddownload_2escm",(void*)f_1485},
{"f_1482:setup_2ddownload_2escm",(void*)f_1482},
{"f_2091:setup_2ddownload_2escm",(void*)f_2091},
{"f_1487:setup_2ddownload_2escm",(void*)f_1487},
{"f_2880:setup_2ddownload_2escm",(void*)f_2880},
{"f_2557:setup_2ddownload_2escm",(void*)f_2557},
{"f_1572:setup_2ddownload_2escm",(void*)f_1572},
{"f_1575:setup_2ddownload_2escm",(void*)f_1575},
{"f_1578:setup_2ddownload_2escm",(void*)f_1578},
{"f_2553:setup_2ddownload_2escm",(void*)f_2553},
{"f_3205:setup_2ddownload_2escm",(void*)f_3205},
{"f_2565:setup_2ddownload_2escm",(void*)f_2565},
{"f_1461:setup_2ddownload_2escm",(void*)f_1461},
{"f_1467:setup_2ddownload_2escm",(void*)f_1467},
{"f_2937:setup_2ddownload_2escm",(void*)f_2937},
{"f_3181:setup_2ddownload_2escm",(void*)f_3181},
{"f_2934:setup_2ddownload_2escm",(void*)f_2934},
{"f_2930:setup_2ddownload_2escm",(void*)f_2930},
{"f_2547:setup_2ddownload_2escm",(void*)f_2547},
{"f_2949:setup_2ddownload_2escm",(void*)f_2949},
{"f_3193:setup_2ddownload_2escm",(void*)f_3193},
{"f_1448:setup_2ddownload_2escm",(void*)f_1448},
{"f_2946:setup_2ddownload_2escm",(void*)f_2946},
{"f_2541:setup_2ddownload_2escm",(void*)f_2541},
{"f_3239:setup_2ddownload_2escm",(void*)f_3239},
{"f_2943:setup_2ddownload_2escm",(void*)f_2943},
{"f_3235:setup_2ddownload_2escm",(void*)f_3235},
{"f_3199:setup_2ddownload_2escm",(void*)f_3199},
{"f_2849:setup_2ddownload_2escm",(void*)f_2849},
{"f_2846:setup_2ddownload_2escm",(void*)f_2846},
{"f_2843:setup_2ddownload_2escm",(void*)f_2843},
{"f_2840:setup_2ddownload_2escm",(void*)f_2840},
{"f_2917:setup_2ddownload_2escm",(void*)f_2917},
{"f_3034:setup_2ddownload_2escm",(void*)f_3034},
{"f_2923:setup_2ddownload_2escm",(void*)f_2923},
{"f_2700:setup_2ddownload_2escm",(void*)f_2700},
{"f_2704:setup_2ddownload_2escm",(void*)f_2704},
{"f_2708:setup_2ddownload_2escm",(void*)f_2708},
{"f_2979:setup_2ddownload_2escm",(void*)f_2979},
{"f_1645:setup_2ddownload_2escm",(void*)f_1645},
{"f_1648:setup_2ddownload_2escm",(void*)f_1648},
{"f_2970:setup_2ddownload_2escm",(void*)f_2970},
{"f_3304:setup_2ddownload_2escm",(void*)f_3304},
{"f_3300:setup_2ddownload_2escm",(void*)f_3300},
{"f_2985:setup_2ddownload_2escm",(void*)f_2985},
{"f_1657:setup_2ddownload_2escm",(void*)f_1657},
{"f_2989:setup_2ddownload_2escm",(void*)f_2989},
{"f_1654:setup_2ddownload_2escm",(void*)f_1654},
{"f_2955:setup_2ddownload_2escm",(void*)f_2955},
{"f_2952:setup_2ddownload_2escm",(void*)f_2952},
{"f_2611:setup_2ddownload_2escm",(void*)f_2611},
{"f_2964:setup_2ddownload_2escm",(void*)f_2964},
{"f_2966:setup_2ddownload_2escm",(void*)f_2966},
{"f_2607:setup_2ddownload_2escm",(void*)f_2607},
{"f_3129:setup_2ddownload_2escm",(void*)f_3129},
{"f_3126:setup_2ddownload_2escm",(void*)f_3126},
{"f_2993:setup_2ddownload_2escm",(void*)f_2993},
{"f_1660:setup_2ddownload_2escm",(void*)f_1660},
{"f_1663:setup_2ddownload_2escm",(void*)f_1663},
{"f_3123:setup_2ddownload_2escm",(void*)f_3123},
{"f_1669:setup_2ddownload_2escm",(void*)f_1669},
{"f_2336:setup_2ddownload_2escm",(void*)f_2336},
{"f_1584:setup_2ddownload_2escm",(void*)f_1584},
{"f_2901:setup_2ddownload_2escm",(void*)f_2901},
{"f_2907:setup_2ddownload_2escm",(void*)f_2907},
{"f_3135:setup_2ddownload_2escm",(void*)f_3135},
{"f_3132:setup_2ddownload_2escm",(void*)f_3132},
{"f_1675:setup_2ddownload_2escm",(void*)f_1675},
{"f_1678:setup_2ddownload_2escm",(void*)f_1678},
{"f_2326:setup_2ddownload_2escm",(void*)f_2326},
{"f3787:setup_2ddownload_2escm",(void*)f3787},
{"f_1593:setup_2ddownload_2escm",(void*)f_1593},
{"f3783:setup_2ddownload_2escm",(void*)f3783},
{"f_1598:setup_2ddownload_2escm",(void*)f_1598},
{"f_2319:setup_2ddownload_2escm",(void*)f_2319},
{"f_3014:setup_2ddownload_2escm",(void*)f_3014},
{"f_3011:setup_2ddownload_2escm",(void*)f_3011},
{"f_3516:setup_2ddownload_2escm",(void*)f_3516},
{"f_2313:setup_2ddownload_2escm",(void*)f_2313},
{"f_3511:setup_2ddownload_2escm",(void*)f_3511},
{"f_2309:setup_2ddownload_2escm",(void*)f_2309},
{"f_2305:setup_2ddownload_2escm",(void*)f_2305},
{"f_2593:setup_2ddownload_2escm",(void*)f_2593},
{"f_3326:setup_2ddownload_2escm",(void*)f_3326},
{"f_3320:setup_2ddownload_2escm",(void*)f_3320},
{"f_3472:setup_2ddownload_2escm",(void*)f_3472},
{"f_3338:setup_2ddownload_2escm",(void*)f_3338},
{"f_3333:setup_2ddownload_2escm",(void*)f_3333},
{"f_2436:setup_2ddownload_2escm",(void*)f_2436},
{"f_2432:setup_2ddownload_2escm",(void*)f_2432},
{"f_2587:setup_2ddownload_2escm",(void*)f_2587},
{"f_2425:setup_2ddownload_2escm",(void*)f_2425},
{"f_2421:setup_2ddownload_2escm",(void*)f_2421},
{"f_1305:setup_2ddownload_2escm",(void*)f_1305},
{"f_1308:setup_2ddownload_2escm",(void*)f_1308},
{"f_1302:setup_2ddownload_2escm",(void*)f_1302},
{"f_1281:setup_2ddownload_2escm",(void*)f_1281},
{"f_1287:setup_2ddownload_2escm",(void*)f_1287},
{"f_1317:setup_2ddownload_2escm",(void*)f_1317},
{"f_1284:setup_2ddownload_2escm",(void*)f_1284},
{"f_1311:setup_2ddownload_2escm",(void*)f_1311},
{"f_1314:setup_2ddownload_2escm",(void*)f_1314},
{"f_1290:setup_2ddownload_2escm",(void*)f_1290},
{"f_1293:setup_2ddownload_2escm",(void*)f_1293},
{"f_1327:setup_2ddownload_2escm",(void*)f_1327},
{"f_1296:setup_2ddownload_2escm",(void*)f_1296},
{"f_1324:setup_2ddownload_2escm",(void*)f_1324},
{"f_1299:setup_2ddownload_2escm",(void*)f_1299},
{"f_1321:setup_2ddownload_2escm",(void*)f_1321},
{"f_3431:setup_2ddownload_2escm",(void*)f_3431},
{"f_3467:setup_2ddownload_2escm",(void*)f_3467},
{"f_1684:setup_2ddownload_2escm",(void*)f_1684},
{"f_1681:setup_2ddownload_2escm",(void*)f_1681},
{"f_1337:setup_2ddownload_2escm",(void*)f_1337},
{"f_1332:setup_2ddownload_2escm",(void*)f_1332},
{"f_1525:setup_2ddownload_2escm",(void*)f_1525},
{"f_1523:setup_2ddownload_2escm",(void*)f_1523},
{"f_3443:setup_2ddownload_2escm",(void*)f_3443},
{"f_3440:setup_2ddownload_2escm",(void*)f_3440},
{"f_1695:setup_2ddownload_2escm",(void*)f_1695},
{"f_1691:setup_2ddownload_2escm",(void*)f_1691},
{"f_1698:setup_2ddownload_2escm",(void*)f_1698},
{"f_3529:setup_2ddownload_2escm",(void*)f_3529},
{"f_2129:setup_2ddownload_2escm",(void*)f_2129},
{"f_2123:setup_2ddownload_2escm",(void*)f_2123},
{"f_2119:setup_2ddownload_2escm",(void*)f_2119},
{"f_3116:setup_2ddownload_2escm",(void*)f_3116},
{"f_3113:setup_2ddownload_2escm",(void*)f_3113},
{"f_3110:setup_2ddownload_2escm",(void*)f_3110},
{"f_1418:setup_2ddownload_2escm",(void*)f_1418},
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
o|hiding nonexported module bindings: setup-download#constant148 
o|hiding nonexported module bindings: setup-download#*quiet* 
o|hiding nonexported module bindings: setup-download#*chicken-install-user-agent* 
o|hiding nonexported module bindings: setup-download#*trunk* 
o|hiding nonexported module bindings: setup-download#*mode* 
o|hiding nonexported module bindings: setup-download#*windows-shell* 
o|hiding nonexported module bindings: setup-download#d 
o|hiding nonexported module bindings: setup-download#get-temporary-directory 
o|hiding nonexported module bindings: setup-download#existing-version 
o|hiding nonexported module bindings: setup-download#when-no-such-version-warning 
o|hiding nonexported module bindings: setup-download#list-eggs/local 
o|hiding nonexported module bindings: setup-download#list-egg-versions/local 
o|hiding nonexported module bindings: setup-download#make-svn-ls-cmd 
o|hiding nonexported module bindings: setup-download#make-svn-export-cmd 
o|hiding nonexported module bindings: setup-download#list-eggs/svn 
o|hiding nonexported module bindings: setup-download#list-egg-versions/svn 
o|hiding nonexported module bindings: setup-download#metafile 
o|hiding nonexported module bindings: setup-download#deconstruct-url 
o|hiding nonexported module bindings: setup-download#network-failure 
o|hiding nonexported module bindings: setup-download#make-HTTP-GET/1.1 
o|hiding nonexported module bindings: setup-download#match-http-response 
o|hiding nonexported module bindings: setup-download#response-match-code? 
o|hiding nonexported module bindings: setup-download#match-chunked-transfer-encoding 
o|hiding nonexported module bindings: setup-download#http-connect 
o|hiding nonexported module bindings: setup-download#http-retrieve-files 
o|hiding nonexported module bindings: setup-download#http-fetch 
o|hiding nonexported module bindings: setup-download#list-eggs/http 
o|hiding nonexported module bindings: setup-download#throw-server-error 
o|hiding nonexported module bindings: setup-download#read-chunks 
o|hiding nonexported module bindings: setup-download#slashes 
o|hiding nonexported module bindings: setup-download#valid-extension-name? 
o|hiding nonexported module bindings: setup-download#check-egg-name 
S|applied compiler syntax:
S|  for-each		1
S|  sprintf		3
S|  map		4
o|eliminated procedure checks: 43 
o|specializations:
o|  8 (eqv? * (not float))
o|  1 (cddr (pair * pair))
o|  1 (string=? string string)
o|  2 (string-append string string)
o|  2 (zero? fixnum)
o|  3 (##sys#check-output-port * * *)
o|  3 (##sys#check-list (or pair list) *)
o|  2 (car pair)
o|  1 (current-output-port)
o|  1 (current-error-port)
(o e)|safe calls: 378 
o|Removed `not' forms: 4 
o|merged explicitly consed rest parameter: args158 
o|inlining procedure: k1358 
o|inlining procedure: k1358 
o|inlining procedure: k1370 
o|inlining procedure: k1370 
o|inlining procedure: k1395 
o|inlining procedure: k1395 
o|inlining procedure: k1563 
o|inlining procedure: k1563 
o|inlining procedure: k1600 
o|inlining procedure: k1600 
o|inlining procedure: k1630 
o|inlining procedure: k1630 
o|consed rest parameter at call site: "(setup-download.scm:118) setup-download#d" 2 
o|substituted constant variable: a1650 
o|substituted constant variable: a1651 
o|substituted constant variable: a1671 
o|substituted constant variable: a1672 
o|inlining procedure: k1696 
o|inlining procedure: k1719 
o|contracted procedure: "(setup-download.scm:125) g346353" 
o|consed rest parameter at call site: "(setup-download.scm:128) setup-download#d" 2 
o|inlining procedure: k1719 
o|propagated global variable: g341342 string-suffix? 
o|inlining procedure: k1696 
o|contracted procedure: k1763 
o|propagated global variable: r1764 setup-download#*trunk* 
o|inlining procedure: k1766 
o|inlining procedure: k1766 
o|inlining procedure: k1848 
o|inlining procedure: k1848 
o|merged explicitly consed rest parameter: tmp392396 
o|inlining procedure: k2253 
o|inlining procedure: k2253 
o|inlining procedure: k2290 
o|inlining procedure: k2290 
o|consed rest parameter at call site: "(setup-download.scm:214) setup-download#d" 2 
o|contracted procedure: "(setup-download.scm:202) setup-download#make-svn-export-cmd" 
o|inlining procedure: "(setup-download.scm:212) setup-download#metafile" 
o|inlining procedure: k2324 
o|inlining procedure: "(setup-download.scm:207) setup-download#metafile" 
o|inlining procedure: k2324 
o|inlining procedure: k2334 
o|inlining procedure: k2334 
o|inlining procedure: k2350 
o|inlining procedure: k2350 
o|consed rest parameter at call site: "(setup-download.scm:184) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:183) setup-download#make-svn-ls-cmd" 4 
o|inlining procedure: k2441 
o|inlining procedure: k2441 
o|inlining procedure: k2456 
o|inlining procedure: k2456 
o|substituted constant variable: setup-download#constant148 
o|inlining procedure: k2555 
o|inlining procedure: k2555 
o|inlining procedure: k2580 
o|inlining procedure: k2580 
o|contracted procedure: "(setup-download.scm:252) setup-download#http-fetch" 
o|contracted procedure: "(setup-download.scm:390) setup-download#http-retrieve-files" 
o|inlining procedure: k2971 
o|inlining procedure: k2971 
o|inlining procedure: k3000 
o|inlining procedure: k3000 
o|substituted constant variable: a3024 
o|inlining procedure: k3029 
o|inlining procedure: k3029 
o|inlining procedure: k3065 
o|contracted procedure: "(setup-download.scm:369) setup-download#throw-server-error" 
o|inlining procedure: k3065 
o|contracted procedure: k3099 
o|inlining procedure: k3096 
o|consed rest parameter at call site: "(setup-download.scm:377) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:381) setup-download#d" 2 
o|inlining procedure: k3096 
o|consed rest parameter at call site: "(setup-download.scm:341) setup-download#d" 2 
o|inlining procedure: k2613 
o|inlining procedure: k2613 
o|merged explicitly consed rest parameter: tmp622626 
o|inlining procedure: k2777 
o|inlining procedure: k2777 
o|inlining procedure: k2817 
o|inlining procedure: k2817 
o|inlining procedure: k2850 
o|contracted procedure: "(setup-download.scm:335) setup-download#read-chunks" 
o|contracted procedure: k3263 
o|inlining procedure: k3260 
o|consed rest parameter at call site: "(setup-download.scm:419) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:423) setup-download#d" 2 
o|inlining procedure: k3260 
o|consed rest parameter at call site: "(setup-download.scm:334) setup-download#d" 2 
o|inlining procedure: k2850 
o|inlining procedure: k2875 
o|inlining procedure: k2875 
o|consed rest parameter at call site: "(setup-download.scm:331) setup-download#d" 2 
o|contracted procedure: "(setup-download.scm:330) setup-download#match-chunked-transfer-encoding" 
o|consed rest parameter at call site: "(setup-download.scm:320) setup-download#make-HTTP-GET/1.1" 4 
o|inlining procedure: k2918 
o|inlining procedure: k2918 
o|contracted procedure: "(setup-download.scm:326) setup-download#network-failure" 
o|consed rest parameter at call site: "(setup-download.scm:314) setup-download#d" 2 
o|contracted procedure: "(setup-download.scm:313) setup-download#match-http-response" 
o|inlining procedure: k2765 
o|inlining procedure: k2765 
o|consed rest parameter at call site: "(setup-download.scm:310) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:306) setup-download#make-HTTP-GET/1.1" 4 
o|consed rest parameter at call site: "(setup-download.scm:304) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:299) setup-download#d" 2 
o|substituted constant variable: a2939 
o|substituted constant variable: a2940 
o|inlining procedure: k2932 
o|consed rest parameter at call site: "(setup-download.scm:299) setup-download#d" 2 
o|inlining procedure: k2932 
o|consed rest parameter at call site: "(setup-download.scm:299) setup-download#d" 2 
o|inlining procedure: k3328 
o|inlining procedure: k3328 
o|contracted procedure: "(setup-download.scm:434) setup-download#valid-extension-name?" 
o|contracted procedure: k3311 
o|inlining procedure: k3308 
o|inlining procedure: k3308 
o|inlining procedure: k3394 
o|inlining procedure: k3394 
o|inlining procedure: k3412 
o|inlining procedure: k3412 
o|substituted constant variable: a3425 
o|substituted constant variable: a3427 
o|substituted constant variable: a3429 
o|inlining procedure: k3474 
o|contracted procedure: "(setup-download.scm:460) setup-download#list-eggs/local" 
o|inlining procedure: k1425 
o|contracted procedure: "(setup-download.scm:85) g187196" 
o|inlining procedure: k1425 
o|inlining procedure: k3474 
o|contracted procedure: "(setup-download.scm:462) setup-download#list-eggs/svn" 
o|inlining procedure: k2010 
o|contracted procedure: "(setup-download.scm:166) g431440" 
o|substituted constant variable: a1997 
o|inlining procedure: k2010 
o|consed rest parameter at call site: "(setup-download.scm:164) setup-download#d" 2 
o|consed rest parameter at call site: "(setup-download.scm:163) setup-download#make-svn-ls-cmd" 4 
o|inlining procedure: k3492 
o|contracted procedure: "(setup-download.scm:464) setup-download#list-eggs/http" 
o|inlining procedure: k3492 
o|substituted constant variable: a3505 
o|substituted constant variable: a3507 
o|substituted constant variable: a3509 
o|inlining procedure: k3541 
o|contracted procedure: "(setup-download.scm:473) setup-download#list-egg-versions/local" 
o|inlining procedure: k1462 
o|inlining procedure: k1489 
o|contracted procedure: "(setup-download.scm:91) g229238" 
o|inlining procedure: k1489 
o|inlining procedure: k1462 
o|inlining procedure: k3541 
o|contracted procedure: "(setup-download.scm:475) setup-download#list-egg-versions/svn" 
o|inlining procedure: k2098 
o|inlining procedure: k2098 
o|inlining procedure: k2133 
o|contracted procedure: "(setup-download.scm:177) g481490" 
o|substituted constant variable: a2120 
o|inlining procedure: k2133 
o|consed rest parameter at call site: "(setup-download.scm:172) setup-download#make-svn-ls-cmd" 4 
o|substituted constant variable: a3563 
o|substituted constant variable: a3565 
o|replaced variables: 360 
o|removed binding forms: 179 
o|removed side-effect free assignment to unused variable: setup-download#constant148 
o|substituted constant variable: r17673600 
o|substituted constant variable: r18493602 
o|substituted constant variable: r23513628 
o|removed side-effect free assignment to unused variable: setup-download#metafile 
o|substituted constant variable: r24423631 
o|substituted constant variable: r24423631 
o|inlining procedure: k2580 
o|inlining procedure: k2580 
o|inlining procedure: k3000 
o|inlining procedure: k3000 
o|substituted constant variable: r26143667 
o|substituted constant variable: r26143667 
o|substituted constant variable: r26143669 
o|substituted constant variable: r26143669 
o|removed call to pure procedure with unused result: "(setup-download.scm:265) get-keyword" 
o|substituted constant variable: r27783672 
o|substituted constant variable: r27663694 
o|substituted constant variable: r29333697 
o|substituted constant variable: r29333697 
o|substituted constant variable: r33093701 
o|substituted constant variable: r14633719 
o|substituted constant variable: r20993721 
o|replaced variables: 21 
o|removed binding forms: 386 
o|inlining procedure: "(setup-download.scm:105) setup-download#when-no-such-version-warning" 
o|inlining procedure: "(setup-download.scm:197) setup-download#when-no-such-version-warning" 
o|contracted procedure: k2727 
o|inlining procedure: k2881 
o|inlining procedure: k2881 
o|replaced variables: 17 
o|removed binding forms: 53 
o|removed side-effect free assignment to unused variable: setup-download#when-no-such-version-warning 
o|substituted constant variable: r25813735 
o|replaced variables: 10 
o|removed binding forms: 19 
o|removed binding forms: 8 
o|simplifications: ((if . 41) (##core#call . 200)) 
o|  call simplifications:
o|    ##sys#check-list	2
o|    ##sys#setslot	4
o|    zero?
o|    string?	2
o|    read-string	2
o|    cadr
o|    eof-object?	2
o|    string=?	3
o|    string->number	2
o|    ##sys#get-keyword	23
o|    list
o|    ##sys#apply	2
o|    cons	12
o|    car	17
o|    null?	35
o|    cdr	17
o|    ##sys#call-with-values	11
o|    not	5
o|    ##sys#slot	14
o|    eq?	13
o|    values	20
o|    pair?	7
o|    member	3
o|    apply
o|contracted procedure: k1339 
o|contracted procedure: k1376 
o|contracted procedure: k1388 
o|contracted procedure: k1815 
o|contracted procedure: k1527 
o|contracted procedure: k1809 
o|contracted procedure: k1530 
o|contracted procedure: k1803 
o|contracted procedure: k1533 
o|contracted procedure: k1797 
o|contracted procedure: k1536 
o|contracted procedure: k1791 
o|contracted procedure: k1539 
o|contracted procedure: k1785 
o|contracted procedure: k1542 
o|inlining procedure: k1582 
o|contracted procedure: k1603 
o|contracted procedure: k1633 
o|contracted procedure: k1722 
o|contracted procedure: k1732 
o|contracted procedure: k1736 
o|contracted procedure: k1872 
o|contracted procedure: k1868 
o|contracted procedure: k1930 
o|contracted procedure: k1937 
o|contracted procedure: k2408 
o|contracted procedure: k2205 
o|contracted procedure: k2402 
o|contracted procedure: k2208 
o|contracted procedure: k2396 
o|contracted procedure: k2211 
o|contracted procedure: k2390 
o|contracted procedure: k2214 
o|contracted procedure: k2384 
o|contracted procedure: k2217 
o|contracted procedure: k2378 
o|contracted procedure: k2220 
o|contracted procedure: k2372 
o|contracted procedure: k2223 
o|contracted procedure: k2366 
o|contracted procedure: k2226 
o|contracted procedure: k2269 
o|contracted procedure: k2293 
o|contracted procedure: k1951 
o|contracted procedure: k2314 
o|contracted procedure: k2327 
o|contracted procedure: k2453 
o|contracted procedure: k2685 
o|contracted procedure: k2471 
o|contracted procedure: k2679 
o|contracted procedure: k2474 
o|contracted procedure: k2673 
o|contracted procedure: k2477 
o|contracted procedure: k2667 
o|contracted procedure: k2480 
o|contracted procedure: k2661 
o|contracted procedure: k2483 
o|contracted procedure: k2655 
o|contracted procedure: k2486 
o|contracted procedure: k2649 
o|contracted procedure: k2489 
o|contracted procedure: k2643 
o|contracted procedure: k2492 
o|contracted procedure: k2637 
o|contracted procedure: k2495 
o|contracted procedure: k2631 
o|contracted procedure: k2498 
o|contracted procedure: k2625 
o|contracted procedure: k2501 
o|contracted procedure: k2619 
o|contracted procedure: k2504 
o|contracted procedure: k2974 
o|contracted procedure: k2994 
o|contracted procedure: k2997 
o|contracted procedure: k3021 
o|contracted procedure: k3075 
o|contracted procedure: k3084 
o|contracted procedure: k3087 
o|contracted procedure: k3154 
o|contracted procedure: k3140 
o|contracted procedure: k3160 
o|contracted procedure: k2724 
o|contracted procedure: k2730 
o|contracted procedure: k2813 
o|contracted procedure: k3257 
o|contracted procedure: k3272 
o|contracted procedure: k3294 
o|contracted procedure: k2768 
o|contracted procedure: k3322 
o|contracted procedure: k3340 
o|contracted procedure: k3343 
o|contracted procedure: k3346 
o|contracted procedure: k3349 
o|contracted procedure: k3352 
o|contracted procedure: k3355 
o|contracted procedure: k3358 
o|contracted procedure: k3361 
o|contracted procedure: k3364 
o|contracted procedure: k3367 
o|contracted procedure: k3373 
o|contracted procedure: k3397 
o|contracted procedure: k3406 
o|contracted procedure: k3415 
o|contracted procedure: k3445 
o|contracted procedure: k3448 
o|contracted procedure: k3451 
o|contracted procedure: k3454 
o|contracted procedure: k3457 
o|contracted procedure: k3460 
o|contracted procedure: k3477 
o|contracted procedure: k1408 
o|contracted procedure: k1428 
o|contracted procedure: k1431 
o|contracted procedure: k1434 
o|contracted procedure: k1442 
o|contracted procedure: k1450 
o|contracted procedure: k3486 
o|contracted procedure: k2065 
o|contracted procedure: k1957 
o|contracted procedure: k2059 
o|contracted procedure: k1960 
o|contracted procedure: k2053 
o|contracted procedure: k1963 
o|contracted procedure: k2047 
o|contracted procedure: k1966 
o|contracted procedure: k1985 
o|contracted procedure: k2001 
o|contracted procedure: k2013 
o|contracted procedure: k2016 
o|contracted procedure: k2019 
o|contracted procedure: k2027 
o|contracted procedure: k2035 
o|contracted procedure: k3495 
o|contracted procedure: k3518 
o|contracted procedure: k3521 
o|contracted procedure: k3524 
o|contracted procedure: k3544 
o|contracted procedure: k1472 
o|contracted procedure: k1492 
o|contracted procedure: k1495 
o|contracted procedure: k1498 
o|contracted procedure: k1506 
o|contracted procedure: k1514 
o|contracted procedure: k3553 
o|contracted procedure: k2196 
o|contracted procedure: k2074 
o|contracted procedure: k2190 
o|contracted procedure: k2077 
o|contracted procedure: k2184 
o|contracted procedure: k2080 
o|contracted procedure: k2178 
o|contracted procedure: k2083 
o|contracted procedure: k2101 
o|contracted procedure: k2108 
o|contracted procedure: k2124 
o|contracted procedure: k2136 
o|contracted procedure: k2139 
o|contracted procedure: k2142 
o|contracted procedure: k2150 
o|contracted procedure: k2158 
o|simplifications: ((if . 1) (let . 13)) 
o|removed binding forms: 159 
o|substituted constant variable: r15833871 
o|inlining procedure: k2263 
o|replaced variables: 108 
o|removed conditional forms: 1 
o|removed binding forms: 42 
o|removed binding forms: 1 
o|customizable procedures: (map-loop475493 map-loop223248 map-loop425443 map-loop181206 setup-download#check-egg-name setup-download#response-match-code? setup-download#make-HTTP-GET/1.1 loop692 get-chunks819 k3068 get-files742 skip714 g725726 k3009 setup-download#http-connect setup-download#deconstruct-url setup-download#make-svn-ls-cmd setup-download#get-temporary-directory setup-download#existing-version k1606 for-each-loop345357 setup-download#d) 
o|calls to known targets: 87 
o|fast box initializations: 9 
o|fast global references: 56 
o|fast global assignments: 25 
o|dropping unused closure argument: f_2798 
o|dropping unused closure argument: f_1928 
o|dropping unused closure argument: f_2710 
o|dropping unused closure argument: f_2775 
o|dropping unused closure argument: f_1353 
o|dropping unused closure argument: f_1368 
o|dropping unused closure argument: f_3326 
o|dropping unused closure argument: f_2421 
o|dropping unused closure argument: f_1337 
*/
/* end of file */

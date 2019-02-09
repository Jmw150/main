/* Generated from files.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: files.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file files.c
   unit: files
*/

#include "chicken.h"

#include <errno.h>

#ifndef _WIN32
# include <sys/stat.h>
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#else
# define C_mkdir(str)	    C_fix(mkdir(C_c_string(str)))
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[109];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,21),40,100,101,108,101,116,101,45,102,105,108,101,42,32,102,105,108,101,54,52,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,100,57,51,32,108,57,52,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,99,111,112,121,32,111,114,105,103,102,105,108,101,55,49,32,110,101,119,102,105,108,101,55,50,32,46,32,116,109,112,55,48,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,49,51,50,32,108,49,51,51,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,46),40,102,105,108,101,45,109,111,118,101,32,111,114,105,103,102,105,108,101,49,49,48,32,110,101,119,102,105,108,101,49,49,49,32,46,32,116,109,112,49,48,57,49,49,50,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,26),40,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,63,32,112,110,49,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,11),40,108,112,32,108,101,110,49,55,48,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,17),40,99,104,111,112,45,112,100,115,32,115,116,114,49,54,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,116,114,115,49,56,56,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,99,111,110,99,45,100,105,114,115,32,100,105,114,115,49,56,54,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,27),40,99,97,110,111,110,105,99,97,108,105,122,101,45,100,105,114,115,32,100,105,114,115,49,57,50,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,45),40,95,109,97,107,101,45,112,97,116,104,110,97,109,101,32,108,111,99,50,48,48,32,100,105,114,50,48,49,32,102,105,108,101,50,48,50,32,101,120,116,50,48,51,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,43),40,109,97,107,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,50,50,53,32,102,105,108,101,50,50,54,32,46,32,116,109,112,50,50,52,50,50,55,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,52),40,109,97,107,101,45,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,50,51,55,32,102,105,108,101,50,51,56,32,46,32,116,109,112,50,51,54,50,51,57,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,18),40,115,116,114,105,112,45,112,100,115,32,100,105,114,50,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,26),40,100,101,99,111,109,112,111,115,101,45,112,97,116,104,110,97,109,101,32,112,110,50,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,49,52,55,48,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,47),40,97,49,52,55,54,32,100,105,114,50,54,53,50,54,54,50,55,49,32,102,105,108,101,50,54,55,50,54,56,50,55,50,32,101,120,116,50,54,57,50,55,48,50,55,51,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,26),40,112,97,116,104,110,97,109,101,45,100,105,114,101,99,116,111,114,121,32,112,110,50,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,7),40,97,49,52,56,53,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,47),40,97,49,52,57,49,32,100,105,114,50,55,57,50,56,48,50,56,53,32,102,105,108,101,50,56,49,50,56,50,50,56,54,32,101,120,116,50,56,51,50,56,52,50,56,55,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,21),40,112,97,116,104,110,97,109,101,45,102,105,108,101,32,112,110,50,55,56,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,49,53,48,48,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,47),40,97,49,53,48,54,32,100,105,114,50,57,51,50,57,52,50,57,57,32,102,105,108,101,50,57,53,50,57,54,51,48,48,32,101,120,116,50,57,55,50,57,56,51,48,49,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,26),40,112,97,116,104,110,97,109,101,45,101,120,116,101,110,115,105,111,110,32,112,110,50,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,49,53,49,53,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,47),40,97,49,53,50,49,32,100,105,114,51,48,55,51,48,56,51,49,51,32,102,105,108,101,51,48,57,51,49,48,51,49,52,32,101,120,116,51,49,49,51,49,50,51,49,53,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,32),40,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,100,105,114,101,99,116,111,114,121,32,112,110,51,48,54,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,51,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,47),40,97,49,53,51,57,32,100,105,114,51,50,49,51,50,50,51,50,55,32,102,105,108,101,51,50,51,51,50,52,51,50,56,32,101,120,116,51,50,53,51,50,54,51,50,57,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,32),40,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,101,120,116,101,110,115,105,111,110,32,112,110,51,50,48,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,49,53,53,49,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,45),40,97,49,53,53,55,32,95,51,51,54,51,51,55,51,52,50,32,102,105,108,101,51,51,56,51,51,57,51,52,51,32,101,120,116,51,52,48,51,52,49,51,52,52,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,41),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,100,105,114,101,99,116,111,114,121,32,112,110,51,51,52,32,100,105,114,51,51,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,49,53,54,57,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,44),40,97,49,53,55,53,32,100,105,114,51,53,49,51,53,50,51,53,55,32,95,51,53,51,51,53,52,51,53,56,32,101,120,116,51,53,53,51,53,54,51,53,57,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,37),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,102,105,108,101,32,112,110,51,52,57,32,102,105,108,101,51,53,48,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,53,56,55,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,45),40,97,49,53,57,51,32,100,105,114,51,54,54,51,54,55,51,55,50,32,102,105,108,101,51,54,56,51,54,57,51,55,51,32,95,51,55,48,51,55,49,51,55,52,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,41),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,101,120,116,101,110,115,105,111,110,32,112,110,51,54,52,32,101,120,116,51,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,9),40,116,101,109,112,100,105,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,12),40,97,49,54,53,52,32,112,52,49,49,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,35),40,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,102,105,108,101,32,46,32,116,109,112,52,48,49,52,48,50,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,28),40,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,18),40,97,100,100,112,97,114,116,32,112,97,114,116,115,52,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,6),40,112,100,115,63,41,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,11),40,103,52,54,52,32,112,52,55,51,41,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,52,54,51,32,103,52,55,48,52,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,105,52,53,49,32,112,114,101,118,52,53,50,32,112,97,114,116,115,52,53,51,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,40),40,110,111,114,109,97,108,105,122,101,45,112,97,116,104,110,97,109,101,32,112,97,116,104,52,51,55,32,46,32,116,109,112,52,51,54,52,51,56,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,40),40,115,112,108,105,116,45,100,105,114,101,99,116,111,114,121,32,108,111,99,52,57,54,32,100,105,114,52,57,55,32,107,101,101,112,63,52,57,56,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,24),40,100,105,114,101,99,116,111,114,121,45,110,117,108,108,63,32,100,105,114,53,48,49,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,28),40,100,101,99,111,109,112,111,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,53,49,48,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,14),40,102,95,50,50,48,49,32,112,110,49,52,57,41,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,14),40,102,95,50,50,48,55,32,114,116,49,53,48,41,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,14),40,102,95,50,50,49,54,32,114,116,49,53,50,41,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,30),40,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,49,53,55,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,19),40,114,111,111,116,45,111,114,105,103,105,110,32,114,116,49,53,56,41,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,22),40,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,49,53,57,41,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1273)
static void C_fcall f_1273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1552)
static void C_ccall f_1552(C_word c,C_word *av) C_noret;
C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word *av) C_noret;
C_noret_decl(f_1431)
static void C_ccall f_1431(C_word c,C_word *av) C_noret;
C_noret_decl(f_1225)
static void C_fcall f_1225(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1797)
static C_word C_fcall f_1797(C_word t0,C_word t1);
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word *av) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word *av) C_noret;
C_noret_decl(f_1255)
static void C_fcall f_1255(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word *av) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word *av) C_noret;
C_noret_decl(f_1884)
static void C_fcall f_1884(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word *av) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word *av) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word *av) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word *av) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word *av) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word *av) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word *av) C_noret;
C_noret_decl(f_973)
static void C_fcall f_973(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word *av) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word *av) C_noret;
C_noret_decl(f_1861)
static void C_fcall f_1861(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word *av) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word *av) C_noret;
C_noret_decl(f_1546)
static void C_ccall f_1546(C_word c,C_word *av) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word *av) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word *av) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word *av) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word *av) C_noret;
C_noret_decl(f_1690)
static void C_fcall f_1690(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word *av) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854(C_word c,C_word *av) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word *av) C_noret;
C_noret_decl(f_1194)
static void C_fcall f_1194(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word *av) C_noret;
C_noret_decl(f_1095)
static void C_fcall f_1095(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1459)
static void C_ccall f_1459(C_word c,C_word *av) C_noret;
C_noret_decl(f_924)
static void C_ccall f_924(C_word c,C_word *av) C_noret;
C_noret_decl(f_1830)
static void C_fcall f_1830(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1088)
static void C_fcall f_1088(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word *av) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word *av) C_noret;
C_noret_decl(f_1820)
static void C_fcall f_1820(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1075)
static void C_fcall f_1075(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073(C_word c,C_word *av) C_noret;
C_noret_decl(f_1060)
static void C_fcall f_1060(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1062)
static void C_ccall f_1062(C_word c,C_word *av) C_noret;
C_noret_decl(f_949)
static void C_ccall f_949(C_word c,C_word *av) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word *av) C_noret;
C_noret_decl(f_781)
static void C_ccall f_781(C_word c,C_word *av) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word *av) C_noret;
C_noret_decl(f_1625)
static void C_ccall f_1625(C_word c,C_word *av) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word *av) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word *av) C_noret;
C_noret_decl(f_952)
static void C_ccall f_952(C_word c,C_word *av) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word *av) C_noret;
C_noret_decl(f_790)
static void C_ccall f_790(C_word c,C_word *av) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word *av) C_noret;
C_noret_decl(f_961)
static void C_ccall f_961(C_word c,C_word *av) C_noret;
C_noret_decl(f_964)
static void C_ccall f_964(C_word c,C_word *av) C_noret;
C_noret_decl(f_1910)
static void C_fcall f_1910(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word *av) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word *av) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word *av) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word *av) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word *av) C_noret;
C_noret_decl(f_860)
static void C_ccall f_860(C_word c,C_word *av) C_noret;
C_noret_decl(C_files_toplevel)
C_externexport void C_ccall C_files_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word *av) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word *av) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word *av) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word *av) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word *av) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word *av) C_noret;
C_noret_decl(f_1015)
static void C_ccall f_1015(C_word c,C_word *av) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word *av) C_noret;
C_noret_decl(f_1006)
static void C_ccall f_1006(C_word c,C_word *av) C_noret;
C_noret_decl(f_1143)
static void C_fcall f_1143(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1750)
static C_word C_fcall f_1750(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word *av) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word *av) C_noret;
C_noret_decl(f_2061)
static void C_fcall f_2061(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1152)
static void C_fcall f_1152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word *av) C_noret;
C_noret_decl(f_1600)
static void C_fcall f_1600(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word *av) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word *av) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word *av) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word *av) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216(C_word c,C_word *av) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word *av) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word *av) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word *av) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word *av) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word *av) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word *av) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word *av) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word *av) C_noret;
C_noret_decl(f_1637)
static void C_fcall f_1637(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word *av) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word *av) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word *av) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word *av) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word *av) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word *av) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word *av) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word *av) C_noret;
C_noret_decl(f_1724)
static void C_ccall f_1724(C_word c,C_word *av) C_noret;
C_noret_decl(f_1720)
static void C_ccall f_1720(C_word c,C_word *av) C_noret;
C_noret_decl(f_1728)
static void C_ccall f_1728(C_word c,C_word *av) C_noret;
C_noret_decl(f_2084)
static C_word C_fcall f_2084(C_word t0);
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word *av) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393(C_word c,C_word *av) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word *av) C_noret;
C_noret_decl(f_2074)
static void C_ccall f_2074(C_word c,C_word *av) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word *av) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word *av) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word *av) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word *av) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word *av) C_noret;
C_noret_decl(f_1955)
static void C_fcall f_1955(C_word t0,C_word t1) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word *av) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word *av) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word *av) C_noret;
C_noret_decl(f_1582)
static void C_ccall f_1582(C_word c,C_word *av) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word *av) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word *av) C_noret;
C_noret_decl(f_1588)
static void C_ccall f_1588(C_word c,C_word *av) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word *av) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word *av) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word *av) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word *av) C_noret;
C_noret_decl(f_2007)
static void C_fcall f_2007(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word *av) C_noret;
C_noret_decl(f_1346)
static void C_ccall f_1346(C_word c,C_word *av) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word *av) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343(C_word c,C_word *av) C_noret;
C_noret_decl(f_1522)
static void C_ccall f_1522(C_word c,C_word *av) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word *av) C_noret;
C_noret_decl(f_880)
static void C_ccall f_880(C_word c,C_word *av) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word *av) C_noret;
C_noret_decl(f_1516)
static void C_ccall f_1516(C_word c,C_word *av) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word *av) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word *av) C_noret;
C_noret_decl(f_1372)
static void C_fcall f_1372(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1371)
static void C_ccall f_1371(C_word c,C_word *av) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word *av) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word *av) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word *av) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word *av) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word *av) C_noret;
C_noret_decl(f_986)
static void C_ccall f_986(C_word c,C_word *av) C_noret;
C_noret_decl(f_1409)
static void C_ccall f_1409(C_word c,C_word *av) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word *av) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word *av) C_noret;
C_noret_decl(f_844)
static void C_fcall f_844(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_842)
static void C_ccall f_842(C_word c,C_word *av) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word *av) C_noret;
C_noret_decl(f_1248)
static void C_ccall f_1248(C_word c,C_word *av) C_noret;
C_noret_decl(f_1564)
static void C_ccall f_1564(C_word c,C_word *av) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word *av) C_noret;
C_noret_decl(f_857)
static void C_ccall f_857(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1273)
static void C_ccall trf_1273(C_word c,C_word *av) C_noret;
static void C_ccall trf_1273(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1273(t0,t1);}

C_noret_decl(trf_1225)
static void C_ccall trf_1225(C_word c,C_word *av) C_noret;
static void C_ccall trf_1225(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1225(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1255)
static void C_ccall trf_1255(C_word c,C_word *av) C_noret;
static void C_ccall trf_1255(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1255(t0,t1);}

C_noret_decl(trf_1884)
static void C_ccall trf_1884(C_word c,C_word *av) C_noret;
static void C_ccall trf_1884(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1884(t0,t1);}

C_noret_decl(trf_973)
static void C_ccall trf_973(C_word c,C_word *av) C_noret;
static void C_ccall trf_973(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_973(t0,t1,t2,t3);}

C_noret_decl(trf_1861)
static void C_ccall trf_1861(C_word c,C_word *av) C_noret;
static void C_ccall trf_1861(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1861(t0,t1,t2);}

C_noret_decl(trf_1690)
static void C_ccall trf_1690(C_word c,C_word *av) C_noret;
static void C_ccall trf_1690(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1690(t0,t1);}

C_noret_decl(trf_1194)
static void C_ccall trf_1194(C_word c,C_word *av) C_noret;
static void C_ccall trf_1194(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1194(t0,t1,t2);}

C_noret_decl(trf_1095)
static void C_ccall trf_1095(C_word c,C_word *av) C_noret;
static void C_ccall trf_1095(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1095(t0,t1);}

C_noret_decl(trf_1830)
static void C_ccall trf_1830(C_word c,C_word *av) C_noret;
static void C_ccall trf_1830(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1830(t0,t1);}

C_noret_decl(trf_1088)
static void C_ccall trf_1088(C_word c,C_word *av) C_noret;
static void C_ccall trf_1088(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1088(t0,t1,t2);}

C_noret_decl(trf_1820)
static void C_ccall trf_1820(C_word c,C_word *av) C_noret;
static void C_ccall trf_1820(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1820(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1075)
static void C_ccall trf_1075(C_word c,C_word *av) C_noret;
static void C_ccall trf_1075(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1075(t0,t1);}

C_noret_decl(trf_1060)
static void C_ccall trf_1060(C_word c,C_word *av) C_noret;
static void C_ccall trf_1060(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1060(t0,t1);}

C_noret_decl(trf_1910)
static void C_ccall trf_1910(C_word c,C_word *av) C_noret;
static void C_ccall trf_1910(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1910(t0,t1,t2);}

C_noret_decl(trf_1143)
static void C_ccall trf_1143(C_word c,C_word *av) C_noret;
static void C_ccall trf_1143(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1143(t0,t1,t2);}

C_noret_decl(trf_2061)
static void C_ccall trf_2061(C_word c,C_word *av) C_noret;
static void C_ccall trf_2061(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2061(t0,t1,t2,t3);}

C_noret_decl(trf_1152)
static void C_ccall trf_1152(C_word c,C_word *av) C_noret;
static void C_ccall trf_1152(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1152(t0,t1,t2);}

C_noret_decl(trf_1600)
static void C_ccall trf_1600(C_word c,C_word *av) C_noret;
static void C_ccall trf_1600(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1600(t0,t1);}

C_noret_decl(trf_1637)
static void C_ccall trf_1637(C_word c,C_word *av) C_noret;
static void C_ccall trf_1637(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1637(t0,t1);}

C_noret_decl(trf_1955)
static void C_ccall trf_1955(C_word c,C_word *av) C_noret;
static void C_ccall trf_1955(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1955(t0,t1);}

C_noret_decl(trf_2007)
static void C_ccall trf_2007(C_word c,C_word *av) C_noret;
static void C_ccall trf_2007(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2007(t0,t1);}

C_noret_decl(trf_1372)
static void C_ccall trf_1372(C_word c,C_word *av) C_noret;
static void C_ccall trf_1372(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1372(t0,t1);}

C_noret_decl(trf_844)
static void C_ccall trf_844(C_word c,C_word *av) C_noret;
static void C_ccall trf_844(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_844(t0,t1,t2,t3);}

/* k1271 in _make-pathname in k1058 in k779 in k776 in k773 */
static void C_fcall f_1273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1273,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
/* files.scm:208: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
av2[4]=t2;
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_1248(2,av2);}}}

/* a1551 in pathname-replace-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1552,2,av);}
/* files.scm:291: decompose-pathname */
t2=*((C_word*)lf[47]+1);{
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

/* a1557 in pathname-replace-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1558,5,av);}
/* files.scm:292: make-pathname */
t5=*((C_word*)lf[30]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1429 in k1407 in decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1431,2,av);}
/* files.scm:253: strip-pds */
f_1372(((C_word*)t0)[3],t1);}

/* _make-pathname in k1058 in k779 in k776 in k773 */
static void C_fcall f_1225(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1225,5,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=(C_truep(t5)?t5:lf[37]);
t7=t6;
t8=(C_truep(t4)?t4:lf[38]);
t9=t8;
t10=C_i_check_string_2(t3,t2);
t11=C_i_check_string_2(t9,t2);
t12=C_i_check_string_2(t7,t2);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1248,a[2]=t1,a[3]=t3,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1273,a[2]=t9,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t15=C_block_size(t3);
if(C_truep(C_fixnum_greater_or_equal_p(t15,C_fix(1)))){
t16=C_block_size(t9);
if(C_truep(C_fixnum_greater_or_equal_p(t16,C_fix(1)))){
t17=C_subchar(t9,C_fix(0));
if(C_truep(*((C_word*)lf[28]+1))){
t18=C_u_i_memq(t17,lf[41]);
t19=t14;
f_1273(t19,t18);}
else{
t18=t14;
f_1273(t18,C_eqp(C_make_character(47),t17));}}
else{
t17=t14;
f_1273(t17,C_SCHEME_FALSE);}}
else{
t16=t14;
f_1273(t16,C_SCHEME_FALSE);}}

/* a1500 in pathname-extension in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1501,2,av);}
/* files.scm:276: decompose-pathname */
t2=*((C_word*)lf[47]+1);{
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

/* pds? in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static C_word C_fcall f_1797(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_eqp(((C_word*)t0)[2],lf[78]);
if(C_truep(t2)){
t3=t1;
t4=C_u_i_memq(t3,lf[84]);
return(t4);}
else{
return(C_eqp(t1,C_make_character(47)));}}

/* a1506 in pathname-extension in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1507(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1507,5,av);}
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a1593 in pathname-replace-extension in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1594,5,av);}
/* files.scm:302: make-pathname */
t5=*((C_word*)lf[30]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1253 in k1246 in _make-pathname in k1058 in k779 in k776 in k773 */
static void C_fcall f_1255(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1255,2,t0,t1);}
if(C_truep(t1)){
/* files.scm:203: string-append */
t2=*((C_word*)lf[35]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[39];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
/* files.scm:203: string-append */
t2=*((C_word*)lf[35]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[40];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* pathname-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1480,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1486,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1492,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
/* files.scm:270: ##sys#call-with-values */{
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

/* k1879 in k1876 in k1873 in k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1881(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_1881,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1884,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[85]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1898,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_string(&a,1,((C_word*)t0)[5]);
/* files.scm:397: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[42]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[42]+1);
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t3)[1];
tp(4,av2);}}
else{
t6=t4;
f_1884(t6,C_SCHEME_UNDEFINED);}}

/* k1882 in k1879 in k1876 in k1873 in k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_1884(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1884,2,t0,t1);}
a=C_alloc(4);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:399: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[42]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[42]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1182 in k1178 in loop in conc-dirs in k1058 in k779 in k776 in k773 */
static void C_ccall f_1184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1184,2,av);}
/* files.scm:187: string-append */
t2=*((C_word*)lf[35]+1);{
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

/* k1178 in loop in conc-dirs in k1058 in k779 in k776 in k773 */
static void C_ccall f_1180(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1180,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1184,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
/* files.scm:190: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_1152(t6,t3,t5);}

/* pathname-extension in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1495,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1501,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1507,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
/* files.scm:275: ##sys#call-with-values */{
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

/* a1491 in pathname-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1492(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1492,5,av);}
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1918 in for-each-loop463 in k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1920,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1910(t3,((C_word*)t0)[4],t2);}

/* k1873 in k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1875,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[7],((C_word*)t0)[8]);
if(C_truep(t3)){
/* files.scm:394: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[88]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1878(2,av2);}}}

/* k969 in k962 in k959 in k956 in k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_971,2,av);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li3),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_973(t5,((C_word*)t0)[7],t1,C_fix(0));}

/* loop in k969 in k962 in k959 in k956 in k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_fcall f_973(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_973,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_983,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* files.scm:126: close-input-port */
t6=*((C_word*)lf[5]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_992,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* files.scm:131: write-string */
t6=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* a1485 in pathname-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1486,2,av);}
/* files.scm:271: decompose-pathname */
t2=*((C_word*)lf[47]+1);{
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

/* k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1860(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1860,2,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
t4=C_i_check_list_2(t3,lf[89]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1910,a[2]=t7,a[3]=t2,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1910(t9,t5,t3);}

/* g464 in k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_1861(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1861,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1865,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm:391: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[88]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k1863 in g464 in k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1865,2,av);}
/* files.scm:392: display */
t2=*((C_word*)lf[87]+1);{
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

/* k1876 in k1873 in k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1878,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:395: get-output-string */
t3=*((C_word*)lf[90]+1);{
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

/* pathname-replace-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1546(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1546,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1552,a[2]=t2,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1558,a[2]=t3,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
/* files.scm:290: ##sys#call-with-values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1539 in pathname-strip-extension in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1540,5,av);}
/* files.scm:287: make-pathname */
t5=*((C_word*)lf[30]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a1476 in pathname-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1477(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1477,5,av);}
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1450 in k1432 in k1407 in decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1452,2,av);}
/* files.scm:259: strip-pds */
f_1372(((C_word*)t0)[3],t1);}

/* k1692 in loop in create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1694,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:346: file-exists? */
t4=*((C_word*)lf[2]+1);{
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

/* loop in create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_1690(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1690,2,t0,t1);}
a=C_alloc(9);
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1694,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1728,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:340: tempdir */
t5=((C_word*)t0)[4];
f_1600(t5,t4);}

/* k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1857,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=C_i_car(t2);
/* files.scm:388: display */
t5=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1854,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1857,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* files.scm:387: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[91]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
tp(3,av2);}}

/* a1533 in pathname-strip-extension in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1534,2,av);}
/* files.scm:286: decompose-pathname */
t2=*((C_word*)lf[47]+1);{
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

/* canonicalize-dirs in k1058 in k779 in k776 in k773 */
static void C_fcall f_1194(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1194,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[36];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t5=C_a_i_list1(&a,1,t2);
/* files.scm:194: conc-dirs */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1143(t6,t1,t5);}
else{
/* files.scm:195: conc-dirs */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1143(t5,t1,t2);}}}

/* pathname-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1465,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1471,a[2]=t2,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1477,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* files.scm:265: ##sys#call-with-values */{
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

/* k1093 in lp in chop-pds in k1058 in k779 in k776 in k773 */
static void C_fcall f_1095(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1095,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* files.scm:169: lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1088(t3,((C_word*)t0)[4],t2);}
else{
t2=C_block_size(((C_word*)t0)[5]);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],t2))){
/* files.scm:171: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k1457 in k1432 in k1407 in decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1459,2,av);}
/* files.scm:262: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}

/* file-move in k779 in k776 in k773 */
static void C_ccall f_924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,4)))){
C_save_and_reclaim((void*)f_924,c,av);}
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(1024):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_check_string_2(t2,lf[17]);
t16=C_i_check_string_2(t3,lf[17]);
t17=C_i_check_number_2(t12,lf[17]);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_949,a[2]=t2,a[3]=t12,a[4]=t1,a[5]=t3,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t12))){
if(C_truep(C_fixnum_greaterp(t12,C_fix(0)))){
t19=t18;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=C_SCHEME_UNDEFINED;
f_949(2,av2);}}
else{
/* files.scm:107: ##sys#error */
t19=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=lf[17];
av2[3]=lf[20];
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}}
else{
/* files.scm:107: ##sys#error */
t19=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=lf[17];
av2[3]=lf[20];
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}}

/* k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_1830(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1830,2,t0,t1);}
a=C_alloc(9);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=C_eqp(((C_word*)((C_word*)t0)[3])[1],lf[85]);
if(C_truep(t2)){
t3=C_a_i_string(&a,1,((C_word*)t0)[4]);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* files.scm:385: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[42]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[42]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=t3;
tp(4,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=lf[86];
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* files.scm:385: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[42]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[42]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=t3;
tp(4,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1854,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* files.scm:386: open-output-string */
t3=*((C_word*)lf[92]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* lp in chop-pds in k1058 in k779 in k776 in k773 */
static void C_fcall f_1088(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1088,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1095,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(1)))){
t4=C_fixnum_difference(t2,C_fix(1));
t5=C_subchar(((C_word*)t0)[3],t4);
if(C_truep(*((C_word*)lf[28]+1))){
t6=C_u_i_memq(t5,lf[29]);
t7=t3;
f_1095(t7,t6);}
else{
t6=t3;
f_1095(t6,C_eqp(C_make_character(47),t5));}}
else{
t4=t3;
f_1095(t4,C_SCHEME_FALSE);}}

/* k1446 in k1442 in k1432 in k1407 in decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1448,2,av);}
/* files.scm:258: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}

/* k1442 in k1432 in k1407 in decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1444,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1448,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:260: irregex-match-substring */
t4=*((C_word*)lf[48]+1);{
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

/* loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_1820(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_1820,5,t0,t1,t2,t3,t4);}
a=C_alloc(16);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1830,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1946,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* files.scm:382: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[7];
av2[3]=t3;
av2[4]=t2;
tp(5,av2);}}
else{
t7=t6;
f_1830(t7,C_SCHEME_UNDEFINED);}}
else{
t6=C_i_string_ref(((C_word*)t0)[7],t2);
t7=(
  /* files.scm:401: pds? */
  f_1797(((C_word*)t0)[8],t6)
);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1955,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[9],a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t9=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t9)){
t10=t8;
f_1955(t10,C_SCHEME_UNDEFINED);}
else{
t10=C_eqp(t2,t3);
if(C_truep(t10)){
t11=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[85]);
t12=t8;
f_1955(t12,t11);}
else{
t11=C_mutate2(((C_word *)((C_word*)t0)[3])+1,lf[93]);
t12=t8;
f_1955(t12,t11);}}}
else{
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2007,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=t3,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)t5)[1]))){
t9=((C_word*)t0)[7];
t10=t2;
t11=C_i_string_ref(t9,t10);
t12=t8;
f_2007(t12,(C_truep(C_u_i_char_equalp(t11,C_make_character(58)))?C_eqp(((C_word*)t0)[10],lf[78]):C_SCHEME_FALSE));}
else{
t9=t8;
f_2007(t9,C_SCHEME_FALSE);}}}}

/* chop-pds in k1058 in k779 in k776 in k773 */
static void C_fcall f_1075(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1075,2,t1,t2);}
a=C_alloc(7);
if(C_truep(t2)){
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1088,a[2]=t5,a[3]=t2,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1088(t7,t1,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1071 in absolute-pathname? in k1058 in k779 in k776 in k773 */
static void C_ccall f_1073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1073,2,av);}
/* files.scm:157: irregex-match-data? */
t2=*((C_word*)lf[25]+1);{
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

/* k1058 in k779 in k776 in k773 */
static void C_fcall f_1060(C_word t0,C_word t1){
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
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,6)))){
C_save_and_reclaim_args((void *)trf_1060,2,t0,t1);}
a=C_alloc(38);
t2=C_mutate2((C_word*)lf[24]+1 /* (set! absolute-pathname? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1062,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2(&lf[26] /* (set! chop-pds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1075,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t4=C_set_block_item(lf[30] /* make-pathname */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[31] /* make-absolute-pathname */,0,C_SCHEME_UNDEFINED);
t6=(C_truep(*((C_word*)lf[28]+1))?lf[32]:lf[33]);
t7=t6;
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1143,a[2]=t7,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1194,a[2]=t9,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t16=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1225,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[30]+1 /* (set! make-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1313,a[2]=t13,a[3]=t11,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp));
t18=C_mutate2((C_word*)lf[31]+1 /* (set! make-absolute-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1332,a[2]=t13,a[3]=t7,a[4]=t11,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t19=(C_truep(*((C_word*)lf[28]+1))?lf[43]:lf[44]);
t20=(C_truep(*((C_word*)lf[28]+1))?lf[45]:lf[46]);
t21=t20;
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1368,a[2]=((C_word*)t0)[2],a[3]=t21,tmp=(C_word)a,a+=4,tmp);
/* files.scm:237: irregex */
t23=*((C_word*)lf[103]+1);{
C_word av2[3];
av2[0]=t23;
av2[1]=t22;
av2[2]=t19;
((C_proc)(void*)(*((C_word*)t23+1)))(3,av2);}}

/* absolute-pathname? in k1058 in k779 in k776 in k773 */
static void C_ccall f_1062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1062,3,av);}
a=C_alloc(3);
t3=C_i_check_string_2(t2,lf[24]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1073,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm:157: absolute-pathname-root */
t5=lf[21];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_949,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1015,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* files.scm:111: directory-exists? */
t4=*((C_word*)lf[14]+1);{
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

/* delete-file* in k779 in k776 in k773 */
static void C_ccall f_783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_783,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_790,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:67: file-exists? */
t4=*((C_word*)lf[2]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k779 in k776 in k773 */
static void C_ccall f_781(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_781,2,av);}
a=C_alloc(15);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! delete-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_783,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[3]+1 /* (set! file-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_795,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[17]+1 /* (set! file-move ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_924,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=lf[21] /* absolute-pathname-root */ =C_SCHEME_UNDEFINED;;
t6=lf[22] /* root-origin */ =C_SCHEME_UNDEFINED;;
t7=lf[23] /* root-directory */ =C_SCHEME_UNDEFINED;;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[28]+1))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2199,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* files.scm:146: irregex */
t10=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[105];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2226,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* files.scm:150: irregex */
t10=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[106];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}

/* k956 in k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_958,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_961,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* files.scm:120: open-output-file */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[10];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* create-temporary-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_1625,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+9);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?lf[65]:C_i_car(t2));
t5=t4;
t6=C_i_check_string_2(t5,lf[64]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1637,a[2]=t8,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li42),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1637(t10,t1);}

/* k1618 in k1612 in k1605 in tempdir in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1620,2,av);}
if(C_truep(t1)){
t2=t1;
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=lf[59];
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_955,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:119: open-input-file */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[10];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_952,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1006,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm:113: file-exists? */
t4=*((C_word*)lf[2]+1);{
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

/* file-copy in k779 in k776 in k773 */
static void C_ccall f_795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,4)))){
C_save_and_reclaim((void*)f_795,c,av);}
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(1024):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_check_string_2(t2,lf[3]);
t16=C_i_check_string_2(t3,lf[3]);
t17=C_i_check_number_2(t12,lf[3]);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_820,a[2]=t12,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t12))){
if(C_truep(C_fixnum_greaterp(t12,C_fix(0)))){
t19=t18;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t19;
av2[1]=C_SCHEME_UNDEFINED;
f_820(2,av2);}}
else{
/* files.scm:76: ##sys#error */
t19=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=lf[3];
av2[3]=lf[16];
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}}
else{
/* files.scm:76: ##sys#error */
t19=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=lf[3];
av2[3]=lf[16];
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}}

/* k788 in delete-file* in k779 in k776 in k773 */
static void C_ccall f_790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_790,2,av);}
if(C_truep(t1)){
/* files.scm:67: delete-file */
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1612 in k1605 in tempdir in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1614,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=t1;
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:315: get-environment-variable */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[61];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k959 in k956 in k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_961,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_964,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm:121: make-string */
t4=*((C_word*)lf[8]+1);{
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

/* k962 in k959 in k956 in k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_964,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* files.scm:122: read-string! */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* for-each-loop463 in k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_1910(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1910,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1920,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* files.scm:389: g464 */
t5=((C_word*)t0)[3];
f_1861(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1684,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1690,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1690(t5,t1);}

/* k1738 in k1734 in k1726 in loop in create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1740,2,av);}
/* files.scm:341: string-append */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[76];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1670 in k1666 in k1658 in loop in create-temporary-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1672,2,av);}
/* files.scm:326: string-append */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[67];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1666 in k1658 in loop in create-temporary-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1668,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fudge(C_fix(33));
/* files.scm:330: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k865 in k858 in loop in k840 in k833 in k830 in k827 in k824 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_867,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* files.scm:100: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_844(t3,((C_word*)t0)[5],t1,t2);}

/* k858 in loop in k840 in k833 in k830 in k827 in k824 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_860,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:100: read-string! */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_files_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("files_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_files_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(466))){
C_save(t1);
C_rereclaim2(466*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,109);
lf[0]=C_h_intern(&lf[0],12,"delete-file\052");
lf[1]=C_h_intern(&lf[1],11,"delete-file");
lf[2]=C_h_intern(&lf[2],12,"file-exists\077");
lf[3]=C_h_intern(&lf[3],9,"file-copy");
lf[4]=C_h_intern(&lf[4],17,"close-output-port");
lf[5]=C_h_intern(&lf[5],16,"close-input-port");
lf[6]=C_h_intern(&lf[6],12,"read-string!");
lf[7]=C_h_intern(&lf[7],12,"write-string");
lf[8]=C_h_intern(&lf[8],11,"make-string");
lf[9]=C_h_intern(&lf[9],16,"open-output-file");
lf[10]=C_h_intern(&lf[10],7,"\000binary");
lf[11]=C_h_intern(&lf[11],15,"open-input-file");
lf[12]=C_h_intern(&lf[12],9,"\003syserror");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\030can not copy directories");
lf[14]=C_h_intern(&lf[14],17,"directory-exists\077");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000#newfile exists but clobber is false");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000/invalid blocksize given: not a positive integer");
lf[17]=C_h_intern(&lf[17],9,"file-move");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000#newfile exists but clobber is false");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\030can not move directories");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000/invalid blocksize given: not a positive integer");
lf[24]=C_h_intern(&lf[24],18,"absolute-pathname\077");
lf[25]=C_h_intern(&lf[25],19,"irregex-match-data\077");
lf[27]=C_h_intern(&lf[27],13,"\003syssubstring");
lf[28]=C_h_intern(&lf[28],20,"\003syswindows-platform");
lf[29]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[30]=C_h_intern(&lf[30],13,"make-pathname");
lf[31]=C_h_intern(&lf[31],22,"make-absolute-pathname");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[35]=C_h_intern(&lf[35],13,"string-append");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[41]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[42]=C_h_intern(&lf[42],17,"\003sysstring-append");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000&^(.\052[\134/\134\134])\077([^\134/\134\134]+)(\134.([^\134/\134\134.]+))$");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\033^(.\052/)\077([^/]+)(\134.([^/.]+))$");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\034^(.\052[\134/\134\134])\077((\134.)\077[^\134/\134\134]+)$");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\024^(.\052/)\077((\134.)\077[^/]+)$");
lf[47]=C_h_intern(&lf[47],18,"decompose-pathname");
lf[48]=C_h_intern(&lf[48],23,"irregex-match-substring");
lf[49]=C_h_intern(&lf[49],14,"irregex-search");
lf[50]=C_h_intern(&lf[50],18,"pathname-directory");
lf[51]=C_h_intern(&lf[51],13,"pathname-file");
lf[52]=C_h_intern(&lf[52],18,"pathname-extension");
lf[53]=C_h_intern(&lf[53],24,"pathname-strip-directory");
lf[54]=C_h_intern(&lf[54],24,"pathname-strip-extension");
lf[55]=C_h_intern(&lf[55],26,"pathname-replace-directory");
lf[56]=C_h_intern(&lf[56],21,"pathname-replace-file");
lf[57]=C_h_intern(&lf[57],26,"pathname-replace-extension");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\004temp");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\004/tmp");
lf[60]=C_h_intern(&lf[60],24,"get-environment-variable");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\003TMP");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\004TEMP");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\006TMPDIR");
lf[64]=C_h_intern(&lf[64],21,"create-temporary-file");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\003tmp");
lf[66]=C_h_intern(&lf[66],21,"call-with-output-file");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[68]=C_h_intern(&lf[68],18,"\003sysnumber->string");
lf[69]=C_h_intern(&lf[69],14,"number->string");
lf[70]=C_h_intern(&lf[70],26,"create-temporary-directory");
lf[71]=C_h_intern(&lf[71],15,"\003syssignal-hook");
lf[72]=C_h_intern(&lf[72],11,"\000file-error");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000$cannot create temporary directory - ");
lf[74]=C_h_intern(&lf[74],17,"\003syspeek-c-string");
lf[75]=C_h_intern(&lf[75],17,"\003sysmake-c-string");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[77]=C_h_intern(&lf[77],7,"mingw32");
lf[78]=C_h_intern(&lf[78],7,"windows");
lf[79]=C_h_intern(&lf[79],4,"unix");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[83]=C_h_intern(&lf[83],18,"normalize-pathname");
lf[84]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000/\376\003\000\000\002\376\377\012\000\000\134\376\377\016");
lf[85]=C_h_intern(&lf[85],3,"abs");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[87]=C_h_intern(&lf[87],7,"display");
lf[88]=C_h_intern(&lf[88],16,"\003syswrite-char-0");
lf[89]=C_h_intern(&lf[89],8,"for-each");
lf[90]=C_h_intern(&lf[90],17,"get-output-string");
lf[91]=C_h_intern(&lf[91],16,"\003sysfast-reverse");
lf[92]=C_h_intern(&lf[92],18,"open-output-string");
lf[93]=C_h_intern(&lf[93],3,"rel");
lf[95]=C_h_intern(&lf[95],12,"string-split");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[98]=C_h_intern(&lf[98],15,"directory-null\077");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[101]=C_h_intern(&lf[101],19,"decompose-directory");
lf[102]=C_h_intern(&lf[102],14,"build-platform");
lf[103]=C_h_intern(&lf[103],7,"irregex");
lf[104]=C_h_intern(&lf[104],13,"irregex-match");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\026([A-Za-z]:)\077([\134/\134\134]).\052");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\005(/).\052");
lf[107]=C_h_intern(&lf[107],17,"register-feature!");
lf[108]=C_h_intern(&lf[108],5,"files");
C_register_lf2(lf,109,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_775,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1734 in k1726 in loop in create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1736,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_fudge(C_fix(33));
/* files.scm:345: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1730 in k1726 in loop in create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1732,2,av);}
/* files.scm:339: make-pathname */
t2=*((C_word*)lf[30]+1);{
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

/* k1658 in loop in create-temporary-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1660,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1664,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1668,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:328: number->string */
t5=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1662 in k1658 in loop in create-temporary-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1664,2,av);}
/* files.scm:324: make-pathname */
t2=*((C_word*)lf[30]+1);{
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

/* k872 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_874,2,av);}
if(C_truep(t1)){
/* files.scm:87: ##sys#error */
t2=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[3];
av2[3]=lf[13];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_826(2,av2);}}}

/* decompose-directory in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2114,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2161,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:455: split-directory */
f_2061(t3,lf[101],t2,C_SCHEME_FALSE);}

/* k1013 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_1015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1015,2,av);}
if(C_truep(t1)){
/* files.scm:112: ##sys#error */
t2=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[17];
av2[3]=lf[19];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_952(2,av2);}}}

/* a1654 in k1645 in k1639 in loop in create-temporary-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1655,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1004 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_1006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1006,2,av);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_955(2,av2);}}
else{
/* files.scm:115: ##sys#error */
t2=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[17];
av2[3]=lf[18];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_955(2,av2);}}}

/* conc-dirs in k1058 in k779 in k776 in k773 */
static void C_fcall f_1143(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1143,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_check_list_2(t2,lf[30]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1152,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1152(t7,t1,t2);}

/* addpart in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static C_word C_fcall f_1750(C_word *a,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;{}
if(C_truep(C_i_string_equal_p(lf[80],t1))){
t3=t2;
return(t3);}
else{
t3=t1;
if(C_truep(C_u_i_string_equal_p(lf[81],t3))){
t4=C_i_nullp(t2);
if(C_truep(t4)){
return((C_truep(t4)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}
else{
t5=C_i_car(t2);
t6=C_i_string_equal_p(lf[82],t5);
return((C_truep(t6)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}}
else{
return(C_a_i_cons(&a,2,t1,t2));}}}

/* k2009 in k2005 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2011,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* files.scm:413: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1820(t5,((C_word*)t0)[5],t3,t4,C_SCHEME_END_OF_LIST);}

/* normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +22,c,5)))){
C_save_and_reclaim((void*)f_1788,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+22);
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
t5=(C_truep(t4)?((C_word*)t0)[2]:C_i_car(t3));
t6=t5;
t7=C_eqp(t6,lf[78]);
t8=(C_truep(t7)?C_make_character(92):C_make_character(47));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1797,a[2]=t6,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_string_2(t2,lf[83]);
t12=C_block_size(t2);
t13=t12;
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_FALSE;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1820,a[2]=t13,a[3]=t15,a[4]=t9,a[5]=t17,a[6]=((C_word*)t0)[3],a[7]=t2,a[8]=t10,a[9]=t19,a[10]=t6,a[11]=((C_word)li50),tmp=(C_word)a,a+=12,tmp));
t21=((C_word*)t19)[1];
f_1820(t21,t1,C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* split-directory in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_2061(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_2061,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t3,t2);
if(C_truep(*((C_word*)lf[28]+1))){
/* files.scm:423: string-split */
t6=*((C_word*)lf[95]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=lf[96];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* files.scm:423: string-split */
t6=*((C_word*)lf[95]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=lf[97];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* loop in conc-dirs in k1058 in k779 in k776 in k773 */
static void C_fcall f_1152(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1152,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t2;
t7=C_u_i_cdr(t6);
/* files.scm:186: loop */
t10=t1;
t11=t7;
t1=t10;
t2=t11;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1180,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t7=t2;
t8=C_u_i_car(t7);
/* files.scm:188: chop-pds */
f_1075(t6,t8);}}}

/* k1605 in tempdir in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1607,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=t1;
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:314: get-environment-variable */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[62];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* tempdir in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_1600(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1600,2,t0,t1);}
a=C_alloc(4);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1607,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm:313: get-environment-variable */
t4=*((C_word*)lf[60]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[63];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1896 in k1879 in k1876 in k1873 in k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1898,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_1884(t3,t2);}

/* k1889 in k1882 in k1879 in k1876 in k1873 in k1858 in k1855 in k1852 in k1828 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1891,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_2201 in k2197 in k779 in k776 in k773 */
static void C_ccall f_2201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2201,3,av);}
/* files.scm:147: irregex-match */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* f_2207 in k2197 in k779 in k776 in k773 */
static void C_ccall f_2207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2207,3,av);}
if(C_truep(t2)){
/* files.scm:148: irregex-match-substring */
t3=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_2216 in k2197 in k779 in k776 in k773 */
static void C_ccall f_2216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2216,3,av);}
if(C_truep(t2)){
/* files.scm:149: irregex-match-substring */
t3=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2196(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_2196,2,av);}
a=C_alloc(17);
t2=C_eqp(t1,lf[77]);
t3=(C_truep(t2)?lf[78]:lf[79]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1750,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
t6=C_mutate2((C_word*)lf[83]+1 /* (set! normalize-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1788,a[2]=t4,a[3]=t5,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t7=C_mutate2(&lf[94] /* (set! split-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2061,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[98]+1 /* (set! directory-null? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2074,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[101]+1 /* (set! decompose-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2114,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k2197 in k779 in k776 in k773 */
static void C_ccall f_2199(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2199,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_mutate2(&lf[21] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2201,a[2]=t2,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2(&lf[22] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2207,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2(&lf[23] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2216,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[2];
f_1060(t6,t5);}

/* k1645 in k1639 in loop in create-temporary-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1647,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* files.scm:333: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1637(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[4],a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
/* files.scm:334: call-with-output-file */
t3=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2224 in k779 in k776 in k773 */
static void C_ccall f_2226(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2226,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_mutate2(&lf[21] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2228,a[2]=t2,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2(&lf[22] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2234,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2(&lf[23] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[2];
f_1060(t6,t5);}

/* k2162 in k2159 in decompose-directory in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2164,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:457: root-origin */
t4=lf[22];{
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

/* k2159 in decompose-directory in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2161,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2164,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:456: absolute-pathname-root */
t4=lf[21];{
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

/* k2165 in k2162 in k2159 in decompose-directory in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2167,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:458: root-directory */
t4=lf[23];{
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

/* k1639 in loop in create-temporary-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1641,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:332: file-exists? */
t4=*((C_word*)lf[2]+1);{
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

/* loop in create-temporary-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_1637(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1637,2,t0,t1);}
a=C_alloc(10);
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1641,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1660,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* files.scm:325: tempdir */
t5=((C_word*)t0)[5];
f_1600(t5,t4);}

/* root-directory in k2224 in k779 in k776 in k773 */
static void C_ccall f_2237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2237,3,av);}
if(C_truep(t2)){
/* files.scm:153: irregex-match-substring */
t3=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* root-origin in k2224 in k779 in k776 in k773 */
static void C_ccall f_2234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2234,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* absolute-pathname-root in k2224 in k779 in k776 in k773 */
static void C_ccall f_2228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2228,3,av);}
/* files.scm:151: irregex-match */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2172 in k2165 in k2162 in k2159 in decompose-directory in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2174(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2174,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_nullp(((C_word*)t0)[4]);
t5=(C_truep(t4)?C_SCHEME_FALSE:((C_word*)t0)[4]);
t6=t3;
if(C_truep(((C_word*)t0)[3])){
t7=C_i_car(t5);
t8=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_substring_compare(((C_word*)t0)[3],t7,C_fix(0),C_fix(0),t8))){
t9=C_u_i_cdr(t5);
t10=C_block_size(t7);
t11=C_block_size(t10);
t12=C_eqp(t8,t11);
if(C_truep(t12)){
t13=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2153,a[2]=t6,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* files.scm:454: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t13;
av2[2]=t7;
av2[3]=t8;
av2[4]=t10;
tp(5,av2);}}}
else{
t9=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k1698 in k1692 in loop in create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1700,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* files.scm:347: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1690(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm:348: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[70];
tp(4,av2);}}}

/* k2176 in k2172 in k2165 in k2162 in k2159 in decompose-directory in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2178,2,av);}
/* files.scm:458: values */{
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
av2[4]=t1;
C_values(5,av2);}}

/* k1705 in k1698 in k1692 in loop in create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1707(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1707,2,av);}
a=C_alloc(10);
t2=C_mkdir(t1);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1724,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k2151 in k2172 in k2165 in k2162 in k2159 in decompose-directory in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2153,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1722 in k1705 in k1698 in k1692 in loop in create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1724,2,av);}
/* files.scm:353: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[42]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[42]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[73];
av2[3]=t1;
tp(4,av2);}}

/* k1718 in k1705 in k1698 in k1692 in loop in create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1720,2,av);}
/* files.scm:351: ##sys#signal-hook */
t2=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[72];
av2[3]=lf[70];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1726 in loop in create-temporary-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1728,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1732,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1736,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:343: number->string */
t5=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* loop in k2080 in directory-null? in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static C_word C_fcall f_2084(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_i_equalp(t3,lf[99]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[100]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k2080 in directory-null? in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2082,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2084,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(
  f_2084(t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1393(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1393,3,av);}
a=C_alloc(6);
t3=C_i_check_string_2(t2,lf[47]);
t4=C_block_size(t2);
t5=C_eqp(C_fix(0),t4);
if(C_truep(t5)){
/* files.scm:249: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1409,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* files.scm:250: irregex-search */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k1944 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_1946,2,av);}
a=C_alloc(9);
t2=(
  /* files.scm:382: addpart */
  f_1750(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1])
);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_1830(t4,t3);}

/* directory-null? in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_2074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2074,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2082,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_listp(t2))){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
f_2082(2,av2);}}
else{
/* files.scm:429: split-directory */
f_2061(t3,lf[98],t2,C_SCHEME_TRUE);}}

/* k824 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_826,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:88: open-input-file */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[10];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_823,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_874,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* files.scm:86: directory-exists? */
t4=*((C_word*)lf[14]+1);{
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

/* k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_820,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_880,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:80: file-exists? */
t4=*((C_word*)lf[2]+1);{
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

/* k827 in k824 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_829,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_832,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:89: open-output-file */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[10];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* make-absolute-pathname in k1058 in k779 in k776 in k773 */
static void C_ccall f_1332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_1332,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+7);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1343,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t7,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* files.scm:224: canonicalize-dirs */
t9=((C_word*)((C_word*)t0)[4])[1];
f_1194(t9,t8,t2);}

/* k1953 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_1955(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1955,2,t0,t1);}
a=C_alloc(8);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* files.scm:405: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1820(t5,((C_word*)t0)[5],t3,t4,((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=t3;
t5=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1991,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* files.scm:408: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k773 */
static void C_ccall f_775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_775,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_778,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k776 in k773 */
static void C_ccall f_778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_778,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_781,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:57: register-feature! */
t3=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[108];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1322 in make-pathname in k1058 in k779 in k776 in k773 */
static void C_ccall f_1324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1324,2,av);}
/* files.scm:218: _make-pathname */
f_1225(((C_word*)t0)[3],lf[30],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* pathname-replace-extension in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1582(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1582,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1588,a[2]=t2,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1594,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
/* files.scm:300: ##sys#call-with-values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* k833 in k830 in k827 in k824 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_835,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm:91: read-string! */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k830 in k827 in k824 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_832,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_835,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* files.scm:90: make-string */
t4=*((C_word*)lf[8]+1);{
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

/* a1587 in pathname-replace-extension in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1588,2,av);}
/* files.scm:301: decompose-pathname */
t2=*((C_word*)lf[47]+1);{
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

/* k1421 in k1417 in k1407 in decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1423,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm:255: irregex-match-substring */
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(4);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1432 in k1407 in decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1434,2,av);}
a=C_alloc(8);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1444,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1452,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* files.scm:259: irregex-match-substring */
t5=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1459,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm:262: strip-pds */
f_1372(t3,((C_word*)t0)[4]);}}

/* a1569 in pathname-replace-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1570,2,av);}
/* files.scm:296: decompose-pathname */
t2=*((C_word*)lf[47]+1);{
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

/* a1575 in pathname-replace-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1576,5,av);}
/* files.scm:297: make-pathname */
t5=*((C_word*)lf[30]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2005 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_2007(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_2007,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* files.scm:412: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* files.scm:414: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1820(t3,((C_word*)t0)[5],t2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[8])[1]);}}

/* k1347 in k1341 in make-absolute-pathname in k1058 in k779 in k776 in k773 */
static void C_ccall f_1349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1349,2,av);}
if(C_truep(t1)){
/* files.scm:222: _make-pathname */
f_1225(((C_word*)t0)[3],lf[31],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
/* files.scm:227: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[42]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[42]+1);
av2[1]=((C_word*)t0)[7];
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}}

/* k1344 in k1341 in make-absolute-pathname in k1058 in k779 in k776 in k773 */
static void C_ccall f_1346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1346,2,av);}
/* files.scm:222: _make-pathname */
f_1225(((C_word*)t0)[3],lf[31],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1425 in k1421 in k1417 in k1407 in decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1427,2,av);}
/* files.scm:252: values */{
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
av2[4]=t1;
C_values(5,av2);}}

/* k1341 in make-absolute-pathname in k1058 in k779 in k776 in k773 */
static void C_ccall f_1343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_1343,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* files.scm:225: absolute-pathname? */
t5=*((C_word*)lf[24]+1);{
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

/* a1521 in pathname-strip-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1522,5,av);}
/* files.scm:282: make-pathname */
t5=*((C_word*)lf[30]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* pathname-strip-extension in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1528,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1534,a[2]=t2,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1540,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* files.scm:285: ##sys#call-with-values */{
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

/* k878 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_880,2,av);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_823(2,av2);}}
else{
/* files.scm:82: ##sys#error */
t2=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[3];
av2[3]=lf[15];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_823(2,av2);}}}

/* k1377 in strip-pds in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1379,2,av);}
t2=C_block_size(t1);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* files.scm:245: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=C_fix(1);
tp(5,av2);}}}

/* a1515 in pathname-strip-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1516,2,av);}
/* files.scm:281: decompose-pathname */
t2=*((C_word*)lf[47]+1);{
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

/* pathname-strip-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1510,3,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1516,a[2]=t2,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1522,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* files.scm:280: ##sys#call-with-values */{
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

/* k1417 in k1407 in decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1419,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1423,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm:254: irregex-match-substring */
t4=*((C_word*)lf[48]+1);{
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

/* strip-pds in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_fcall f_1372(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1372,2,t1,t2);}
a=C_alloc(4);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1379,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* files.scm:242: chop-pds */
f_1075(t3,t2);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1371(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(52,c,4)))){
C_save_and_reclaim((void *)f_1371,2,av);}
a=C_alloc(52);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1372,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
t4=C_mutate2((C_word*)lf[47]+1 /* (set! decompose-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1393,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t5=C_mutate2((C_word*)lf[50]+1 /* (set! pathname-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1465,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[51]+1 /* (set! pathname-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1480,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[52]+1 /* (set! pathname-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1495,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[53]+1 /* (set! pathname-strip-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1510,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[54]+1 /* (set! pathname-strip-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1528,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[55]+1 /* (set! pathname-replace-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1546,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[56]+1 /* (set! pathname-replace-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1564,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[57]+1 /* (set! pathname-replace-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1582,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=lf[58];
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1600,a[2]=t14,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
t17=C_mutate2((C_word*)lf[64]+1 /* (set! create-temporary-file ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1625,a[2]=t15,a[3]=t16,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t18=C_mutate2((C_word*)lf[70]+1 /* (set! create-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1684,a[2]=t15,a[3]=t16,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2196,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* files.scm:360: build-platform */
t20=*((C_word*)lf[102]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t20;
av2[1]=t19;
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}

/* a1470 in pathname-directory in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1471,2,av);}
/* files.scm:266: decompose-pathname */
t2=*((C_word*)lf[47]+1);{
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

/* k1989 in k1953 in loop in normalize-pathname in k2194 in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1991,2,av);}
a=C_alloc(9);
t2=(
  /* files.scm:408: addpart */
  f_1750(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1])
);
/* files.scm:406: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1820(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);}

/* k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1368,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1371,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* files.scm:238: irregex */
t4=*((C_word*)lf[103]+1);{
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

/* k987 in k984 in k981 in loop in k969 in k962 in k959 in k956 in k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_989,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k981 in loop in k969 in k962 in k959 in k956 in k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_983,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:127: close-output-port */
t3=*((C_word*)lf[4]+1);{
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

/* k984 in k981 in loop in k969 in k962 in k959 in k956 in k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_986,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:128: delete-file */
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

/* k1407 in decompose-pathname in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1409,2,av);}
a=C_alloc(8);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1419,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1431,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* files.scm:253: irregex-match-substring */
t5=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm:256: irregex-search */
t4=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k990 in loop in k969 in k962 in k959 in k956 in k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_992,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm:132: read-string! */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k997 in k990 in loop in k969 in k962 in k959 in k956 in k953 in k950 in k947 in file-move in k779 in k776 in k773 */
static void C_ccall f_999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_999,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* files.scm:132: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_973(t3,((C_word*)t0)[5],t1,t2);}

/* loop in k840 in k833 in k830 in k827 in k824 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_fcall f_844(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_844,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_854,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm:95: close-input-port */
t6=*((C_word*)lf[5]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_860,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* files.scm:99: write-string */
t6=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
av2[3]=t2;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k840 in k833 in k830 in k827 in k824 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_842,2,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li1),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_844(t5,((C_word*)t0)[6],t1,C_fix(0));}

/* make-pathname in k1058 in k779 in k776 in k773 */
static void C_ccall f_1313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_1313,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1324,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* files.scm:218: canonicalize-dirs */
t9=((C_word*)((C_word*)t0)[3])[1];
f_1194(t9,t8,t2);}

/* k1246 in _make-pathname in k1058 in k779 in k776 in k773 */
static void C_ccall f_1248(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1248,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_block_size(((C_word*)t0)[4]);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t5=C_subchar(((C_word*)t0)[4],C_fix(0));
t6=C_i_char_equalp(t5,C_make_character(46));
t7=t3;
f_1255(t7,C_i_not(t6));}
else{
t5=t3;
f_1255(t5,C_SCHEME_FALSE);}}

/* pathname-replace-file in k1369 in k1366 in k1058 in k779 in k776 in k773 */
static void C_ccall f_1564(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1564,4,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1570,a[2]=t2,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1576,a[2]=t3,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
/* files.scm:295: ##sys#call-with-values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* k852 in loop in k840 in k833 in k830 in k827 in k824 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_854,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm:96: close-output-port */
t3=*((C_word*)lf[4]+1);{
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

/* k855 in k852 in loop in k840 in k833 in k830 in k827 in k824 in k821 in k818 in file-copy in k779 in k776 in k773 */
static void C_ccall f_857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_857,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[165] = {
{"f_1273:files_2escm",(void*)f_1273},
{"f_1552:files_2escm",(void*)f_1552},
{"f_1558:files_2escm",(void*)f_1558},
{"f_1431:files_2escm",(void*)f_1431},
{"f_1225:files_2escm",(void*)f_1225},
{"f_1501:files_2escm",(void*)f_1501},
{"f_1797:files_2escm",(void*)f_1797},
{"f_1507:files_2escm",(void*)f_1507},
{"f_1594:files_2escm",(void*)f_1594},
{"f_1255:files_2escm",(void*)f_1255},
{"f_1480:files_2escm",(void*)f_1480},
{"f_1881:files_2escm",(void*)f_1881},
{"f_1884:files_2escm",(void*)f_1884},
{"f_1184:files_2escm",(void*)f_1184},
{"f_1180:files_2escm",(void*)f_1180},
{"f_1495:files_2escm",(void*)f_1495},
{"f_1492:files_2escm",(void*)f_1492},
{"f_1920:files_2escm",(void*)f_1920},
{"f_1875:files_2escm",(void*)f_1875},
{"f_971:files_2escm",(void*)f_971},
{"f_973:files_2escm",(void*)f_973},
{"f_1486:files_2escm",(void*)f_1486},
{"f_1860:files_2escm",(void*)f_1860},
{"f_1861:files_2escm",(void*)f_1861},
{"f_1865:files_2escm",(void*)f_1865},
{"f_1878:files_2escm",(void*)f_1878},
{"f_1546:files_2escm",(void*)f_1546},
{"f_1540:files_2escm",(void*)f_1540},
{"f_1477:files_2escm",(void*)f_1477},
{"f_1452:files_2escm",(void*)f_1452},
{"f_1694:files_2escm",(void*)f_1694},
{"f_1690:files_2escm",(void*)f_1690},
{"f_1857:files_2escm",(void*)f_1857},
{"f_1854:files_2escm",(void*)f_1854},
{"f_1534:files_2escm",(void*)f_1534},
{"f_1194:files_2escm",(void*)f_1194},
{"f_1465:files_2escm",(void*)f_1465},
{"f_1095:files_2escm",(void*)f_1095},
{"f_1459:files_2escm",(void*)f_1459},
{"f_924:files_2escm",(void*)f_924},
{"f_1830:files_2escm",(void*)f_1830},
{"f_1088:files_2escm",(void*)f_1088},
{"f_1448:files_2escm",(void*)f_1448},
{"f_1444:files_2escm",(void*)f_1444},
{"f_1820:files_2escm",(void*)f_1820},
{"f_1075:files_2escm",(void*)f_1075},
{"f_1073:files_2escm",(void*)f_1073},
{"f_1060:files_2escm",(void*)f_1060},
{"f_1062:files_2escm",(void*)f_1062},
{"f_949:files_2escm",(void*)f_949},
{"f_783:files_2escm",(void*)f_783},
{"f_781:files_2escm",(void*)f_781},
{"f_958:files_2escm",(void*)f_958},
{"f_1625:files_2escm",(void*)f_1625},
{"f_1620:files_2escm",(void*)f_1620},
{"f_955:files_2escm",(void*)f_955},
{"f_952:files_2escm",(void*)f_952},
{"f_795:files_2escm",(void*)f_795},
{"f_790:files_2escm",(void*)f_790},
{"f_1614:files_2escm",(void*)f_1614},
{"f_961:files_2escm",(void*)f_961},
{"f_964:files_2escm",(void*)f_964},
{"f_1910:files_2escm",(void*)f_1910},
{"f_1684:files_2escm",(void*)f_1684},
{"f_1740:files_2escm",(void*)f_1740},
{"f_1672:files_2escm",(void*)f_1672},
{"f_1668:files_2escm",(void*)f_1668},
{"f_867:files_2escm",(void*)f_867},
{"f_860:files_2escm",(void*)f_860},
{"toplevel:files_2escm",(void*)C_files_toplevel},
{"f_1736:files_2escm",(void*)f_1736},
{"f_1732:files_2escm",(void*)f_1732},
{"f_1660:files_2escm",(void*)f_1660},
{"f_1664:files_2escm",(void*)f_1664},
{"f_874:files_2escm",(void*)f_874},
{"f_2114:files_2escm",(void*)f_2114},
{"f_1015:files_2escm",(void*)f_1015},
{"f_1655:files_2escm",(void*)f_1655},
{"f_1006:files_2escm",(void*)f_1006},
{"f_1143:files_2escm",(void*)f_1143},
{"f_1750:files_2escm",(void*)f_1750},
{"f_2011:files_2escm",(void*)f_2011},
{"f_1788:files_2escm",(void*)f_1788},
{"f_2061:files_2escm",(void*)f_2061},
{"f_1152:files_2escm",(void*)f_1152},
{"f_1607:files_2escm",(void*)f_1607},
{"f_1600:files_2escm",(void*)f_1600},
{"f_1898:files_2escm",(void*)f_1898},
{"f_1891:files_2escm",(void*)f_1891},
{"f_2201:files_2escm",(void*)f_2201},
{"f_2207:files_2escm",(void*)f_2207},
{"f_2216:files_2escm",(void*)f_2216},
{"f_2196:files_2escm",(void*)f_2196},
{"f_2199:files_2escm",(void*)f_2199},
{"f_1647:files_2escm",(void*)f_1647},
{"f_2226:files_2escm",(void*)f_2226},
{"f_2164:files_2escm",(void*)f_2164},
{"f_2161:files_2escm",(void*)f_2161},
{"f_2167:files_2escm",(void*)f_2167},
{"f_1641:files_2escm",(void*)f_1641},
{"f_1637:files_2escm",(void*)f_1637},
{"f_2237:files_2escm",(void*)f_2237},
{"f_2234:files_2escm",(void*)f_2234},
{"f_2228:files_2escm",(void*)f_2228},
{"f_2174:files_2escm",(void*)f_2174},
{"f_1700:files_2escm",(void*)f_1700},
{"f_2178:files_2escm",(void*)f_2178},
{"f_1707:files_2escm",(void*)f_1707},
{"f_2153:files_2escm",(void*)f_2153},
{"f_1724:files_2escm",(void*)f_1724},
{"f_1720:files_2escm",(void*)f_1720},
{"f_1728:files_2escm",(void*)f_1728},
{"f_2084:files_2escm",(void*)f_2084},
{"f_2082:files_2escm",(void*)f_2082},
{"f_1393:files_2escm",(void*)f_1393},
{"f_1946:files_2escm",(void*)f_1946},
{"f_2074:files_2escm",(void*)f_2074},
{"f_826:files_2escm",(void*)f_826},
{"f_823:files_2escm",(void*)f_823},
{"f_820:files_2escm",(void*)f_820},
{"f_829:files_2escm",(void*)f_829},
{"f_1332:files_2escm",(void*)f_1332},
{"f_1955:files_2escm",(void*)f_1955},
{"f_775:files_2escm",(void*)f_775},
{"f_778:files_2escm",(void*)f_778},
{"f_1324:files_2escm",(void*)f_1324},
{"f_1582:files_2escm",(void*)f_1582},
{"f_835:files_2escm",(void*)f_835},
{"f_832:files_2escm",(void*)f_832},
{"f_1588:files_2escm",(void*)f_1588},
{"f_1423:files_2escm",(void*)f_1423},
{"f_1434:files_2escm",(void*)f_1434},
{"f_1570:files_2escm",(void*)f_1570},
{"f_1576:files_2escm",(void*)f_1576},
{"f_2007:files_2escm",(void*)f_2007},
{"f_1349:files_2escm",(void*)f_1349},
{"f_1346:files_2escm",(void*)f_1346},
{"f_1427:files_2escm",(void*)f_1427},
{"f_1343:files_2escm",(void*)f_1343},
{"f_1522:files_2escm",(void*)f_1522},
{"f_1528:files_2escm",(void*)f_1528},
{"f_880:files_2escm",(void*)f_880},
{"f_1379:files_2escm",(void*)f_1379},
{"f_1516:files_2escm",(void*)f_1516},
{"f_1510:files_2escm",(void*)f_1510},
{"f_1419:files_2escm",(void*)f_1419},
{"f_1372:files_2escm",(void*)f_1372},
{"f_1371:files_2escm",(void*)f_1371},
{"f_1471:files_2escm",(void*)f_1471},
{"f_1991:files_2escm",(void*)f_1991},
{"f_1368:files_2escm",(void*)f_1368},
{"f_989:files_2escm",(void*)f_989},
{"f_983:files_2escm",(void*)f_983},
{"f_986:files_2escm",(void*)f_986},
{"f_1409:files_2escm",(void*)f_1409},
{"f_992:files_2escm",(void*)f_992},
{"f_999:files_2escm",(void*)f_999},
{"f_844:files_2escm",(void*)f_844},
{"f_842:files_2escm",(void*)f_842},
{"f_1313:files_2escm",(void*)f_1313},
{"f_1248:files_2escm",(void*)f_1248},
{"f_1564:files_2escm",(void*)f_1564},
{"f_854:files_2escm",(void*)f_854},
{"f_857:files_2escm",(void*)f_857},
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
S|  for-each		1
o|eliminated procedure checks: 41 
o|specializations:
o|  1 (char=? char char)
o|  1 (string-ref string fixnum)
o|  1 (string=? string string)
o|  1 (car pair)
o|  5 (cdr pair)
o|  1 (zero? fixnum)
o|  3 (memq * list)
(o e)|safe calls: 234 
o|dropping redundant toplevel assignment: create-temporary-file 
o|dropping redundant toplevel assignment: create-temporary-directory 
o|Removed `not' forms: 4 
o|inlining procedure: k785 
o|inlining procedure: k785 
o|inlining procedure: k846 
o|inlining procedure: k846 
o|inlining procedure: k881 
o|inlining procedure: k881 
o|inlining procedure: k975 
o|inlining procedure: k975 
o|inlining procedure: k1007 
o|inlining procedure: k1007 
o|inlining procedure: k1077 
o|inlining procedure: k1090 
o|inlining procedure: k1090 
o|contracted procedure: "(files.scm:168) g176177" 
o|inlining procedure: k1121 
o|substituted constant variable: a1125 
o|inlining procedure: k1121 
o|inlining procedure: k1077 
o|inlining procedure: k1154 
o|inlining procedure: k1154 
o|inlining procedure: k1196 
o|inlining procedure: k1196 
o|inlining procedure: k1250 
o|inlining procedure: k1250 
o|inlining procedure: k1284 
o|contracted procedure: "(files.scm:207) g214215" 
o|inlining procedure: k1292 
o|substituted constant variable: a1296 
o|inlining procedure: k1292 
o|inlining procedure: k1284 
o|inlining procedure: k1344 
o|inlining procedure: k1344 
o|inlining procedure: k1374 
o|inlining procedure: k1374 
o|inlining procedure: k1398 
o|inlining procedure: k1398 
o|inlining procedure: k1435 
o|inlining procedure: k1435 
o|inlining procedure: k1602 
o|inlining procedure: k1602 
o|inlining procedure: k1615 
o|inlining procedure: k1615 
o|inlining procedure: k1642 
o|inlining procedure: k1642 
o|inlining procedure: k1695 
o|inlining procedure: k1695 
o|inlining procedure: k1752 
o|inlining procedure: k1752 
o|substituted constant variable: a1761 
o|inlining procedure: k1763 
o|inlining procedure: k1763 
o|inlining procedure: k1799 
o|substituted constant variable: a1806 
o|inlining procedure: k1799 
o|inlining procedure: k1822 
o|inlining procedure: k1840 
o|inlining procedure: k1840 
o|inlining procedure: k1885 
o|inlining procedure: k1885 
o|inlining procedure: k1912 
o|inlining procedure: k1912 
o|inlining procedure: k1822 
o|inlining procedure: k1956 
o|inlining procedure: k1956 
o|contracted procedure: k1992 
o|inlining procedure: k1996 
o|inlining procedure: k1996 
o|inlining procedure: k2002 
o|inlining procedure: k2002 
o|substituted constant variable: a2043 
o|inlining procedure: k2037 
o|inlining procedure: k2037 
o|inlining procedure: k2070 
o|inlining procedure: k2070 
o|inlining procedure: k2089 
o|inlining procedure: k2089 
o|contracted procedure: "(files.scm:458) strip-origin-prefix511" 
o|contracted procedure: k2122 
o|inlining procedure: k2119 
o|contracted procedure: k2134 
o|inlining procedure: k2141 
o|inlining procedure: k2141 
o|inlining procedure: k2119 
o|contracted procedure: k2183 
o|inlining procedure: k2209 
o|inlining procedure: k2209 
o|inlining procedure: k2218 
o|inlining procedure: k2218 
o|inlining procedure: k2239 
o|inlining procedure: k2239 
o|replaced variables: 243 
o|removed binding forms: 113 
o|substituted constant variable: r7862246 
o|substituted constant variable: r10782260 
o|substituted constant variable: r11552261 
o|substituted constant variable: r11972263 
o|substituted constant variable: r12512265 
o|substituted constant variable: r12512265 
o|substituted constant variable: r12512267 
o|substituted constant variable: r12512267 
o|substituted constant variable: r12852272 
o|substituted constant variable: r13752278 
o|inlining procedure: k1608 
o|inlining procedure: k1608 
o|inlining procedure: k1608 
o|inlining procedure: k1608 
o|substituted constant variable: r19972309 
o|substituted constant variable: r19972311 
o|substituted constant variable: r20382316 
o|converted assignments to bindings: (pds?445) 
o|substituted constant variable: r20712317 
o|substituted constant variable: r20712317 
o|substituted constant variable: r20712319 
o|substituted constant variable: r20712319 
o|converted assignments to bindings: (addpart423) 
o|converted assignments to bindings: (tempdir383) 
o|substituted constant variable: r22102328 
o|substituted constant variable: r22192330 
o|substituted constant variable: r22402332 
o|simplifications: ((let . 3)) 
o|replaced variables: 16 
o|removed binding forms: 245 
o|inlining procedure: k887 
o|inlining procedure: k1019 
o|inlining procedure: k1837 
o|replaced variables: 11 
o|removed binding forms: 41 
o|substituted constant variable: r8882388 
o|substituted constant variable: r10202391 
o|simplifications: ((let . 1)) 
o|replaced variables: 1 
o|removed binding forms: 8 
o|removed conditional forms: 2 
o|removed binding forms: 3 
o|simplifications: ((if . 23) (##core#call . 141)) 
o|  call simplifications:
o|    list?
o|    member
o|    string-ref
o|    pair?
o|    ##sys#slot	2
o|    string	2
o|    string=?	2
o|    cons	3
o|    ##sys#fudge	2
o|    ##sys#call-with-values	8
o|    values	5
o|    fx>	3
o|    char=?
o|    not	2
o|    string?
o|    list
o|    ##sys#check-list	2
o|    string-length
o|    fx>=	4
o|    eq?	11
o|    ##sys#size	12
o|    fx<
o|    fx-	2
o|    car	13
o|    null?	19
o|    cdr	5
o|    ##sys#check-string	12
o|    ##sys#check-number	2
o|    integer?	2
o|    >	2
o|    fx=	7
o|    fx+	10
o|contracted procedure: k917 
o|contracted procedure: k797 
o|contracted procedure: k911 
o|contracted procedure: k800 
o|contracted procedure: k905 
o|contracted procedure: k803 
o|contracted procedure: k899 
o|contracted procedure: k806 
o|contracted procedure: k809 
o|contracted procedure: k812 
o|contracted procedure: k815 
o|contracted procedure: k849 
o|contracted procedure: k869 
o|contracted procedure: k893 
o|contracted procedure: k887 
o|substituted constant variable: g2465 
o|contracted procedure: k1049 
o|contracted procedure: k926 
o|contracted procedure: k1043 
o|contracted procedure: k929 
o|contracted procedure: k1037 
o|contracted procedure: k932 
o|contracted procedure: k1031 
o|contracted procedure: k935 
o|contracted procedure: k938 
o|contracted procedure: k941 
o|contracted procedure: k944 
o|contracted procedure: k978 
o|contracted procedure: k1001 
o|contracted procedure: k1025 
o|contracted procedure: k1019 
o|substituted constant variable: g2469 
o|contracted procedure: k1064 
o|contracted procedure: k1084 
o|contracted procedure: k1100 
o|contracted procedure: k1113 
o|contracted procedure: k1106 
o|contracted procedure: k1116 
o|contracted procedure: k1134 
o|contracted procedure: k1139 
o|contracted procedure: k1145 
o|contracted procedure: k1157 
o|contracted procedure: k1160 
o|contracted procedure: k1190 
o|contracted procedure: k1166 
o|contracted procedure: k1199 
o|contracted procedure: k1202 
o|contracted procedure: k1208 
o|contracted procedure: k1215 
o|contracted procedure: k1227 
o|contracted procedure: k1230 
o|contracted procedure: k1233 
o|contracted procedure: k1236 
o|contracted procedure: k1239 
o|contracted procedure: k1268 
o|contracted procedure: k1256 
o|contracted procedure: k1263 
o|contracted procedure: k1278 
o|contracted procedure: k1309 
o|contracted procedure: k1281 
o|contracted procedure: k1305 
o|contracted procedure: k1287 
o|contracted procedure: k1325 
o|contracted procedure: k1315 
o|contracted procedure: k1353 
o|contracted procedure: k1334 
o|contracted procedure: k1360 
o|contracted procedure: k1363 
o|contracted procedure: k1390 
o|contracted procedure: k1383 
o|contracted procedure: k1395 
o|contracted procedure: k1461 
o|contracted procedure: k1401 
o|contracted procedure: k1677 
o|contracted procedure: k1627 
o|contracted procedure: k1630 
o|contracted procedure: k1674 
o|contracted procedure: k1711 
o|contracted procedure: k1742 
o|contracted procedure: k2190 
o|contracted procedure: k1746 
o|contracted procedure: k1755 
o|contracted procedure: k1766 
o|inlining procedure: k1769 
o|contracted procedure: k1782 
o|inlining procedure: k1769 
o|contracted procedure: k2054 
o|contracted procedure: k1790 
o|contracted procedure: k2051 
o|contracted procedure: k1793 
o|contracted procedure: k1802 
o|contracted procedure: k1810 
o|contracted procedure: k1813 
o|contracted procedure: k1825 
o|contracted procedure: k1834 
o|contracted procedure: k1846 
o|contracted procedure: k1837 
o|contracted procedure: k1870 
o|contracted procedure: k1892 
o|contracted procedure: k1900 
o|contracted procedure: k1903 
o|contracted procedure: k1915 
o|contracted procedure: k1925 
o|contracted procedure: k1929 
o|contracted procedure: k1933 
o|contracted procedure: k1936 
o|contracted procedure: k1959 
o|contracted procedure: k1966 
o|contracted procedure: k1970 
o|contracted procedure: k1977 
o|contracted procedure: k1981 
o|contracted procedure: k1999 
o|contracted procedure: k2016 
o|contracted procedure: k2020 
o|contracted procedure: k2024 
o|contracted procedure: k2031 
o|contracted procedure: k2034 
o|contracted procedure: k2048 
o|contracted procedure: k2063 
o|contracted procedure: k2086 
o|contracted procedure: k2104 
o|contracted procedure: k2095 
o|contracted procedure: k2107 
o|contracted procedure: k2187 
o|contracted procedure: k2180 
o|contracted procedure: k2125 
o|contracted procedure: k2128 
o|contracted procedure: k2138 
o|contracted procedure: k2155 
o|contracted procedure: k2144 
o|simplifications: ((if . 1) (let . 20)) 
o|replaced variables: 2 
o|removed binding forms: 126 
o|replaced variables: 53 
o|removed binding forms: 5 
o|removed binding forms: 24 
o|direct leaf routine/allocation: addpart423 9 
o|direct leaf routine/allocation: pds?445 0 
o|direct leaf routine/allocation: loop502 0 
o|contracted procedure: "(files.scm:382) k1940" 
o|contracted procedure: "(files.scm:401) k1950" 
o|contracted procedure: "(files.scm:408) k1985" 
o|converted assignments to bindings: (loop502) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|customizable procedures: (k1058 split-directory k2005 k1953 loop450 k1828 g464471 for-each-loop463475 k1882 loop414 tempdir383 loop408 strip-pds255 canonicalize-dirs184 _make-pathname185 k1271 k1253 conc-dirs183 chop-pds loop187 k1093 lp169 loop131 loop92) 
o|calls to known targets: 68 
o|identified direct recursive calls: f_1152 1 
o|identified direct recursive calls: f_2084 1 
o|fast box initializations: 11 
o|fast global references: 8 
o|fast global assignments: 11 
o|dropping unused closure argument: f_1225 
o|dropping unused closure argument: f_1075 
o|dropping unused closure argument: f_1750 
o|dropping unused closure argument: f_2061 
o|dropping unused closure argument: f_2084 
o|dropping unused closure argument: f_1372 
*/
/* end of file */

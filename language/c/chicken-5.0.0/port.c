/* Generated from port.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: port.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file port.c -emit-import-library chicken.port
   unit: port
   uses: extras library
*/
#include "chicken.h"



#if !defined(_WIN32)
# include <sys/ioctl.h>
# include <termios.h>
#endif

#if !defined(__ANDROID__) && defined(TIOCGWINSZ)
static int get_tty_size(int fd, int *rows, int *cols)
{
  struct winsize tty_size;
  int r;

  memset(&tty_size, 0, sizeof tty_size);

  r = ioctl(fd, TIOCGWINSZ, &tty_size);
  if (r == 0) {
     *rows = tty_size.ws_row;
     *cols = tty_size.ws_col;
  }
  return r;
}
#else
static int get_tty_size(int fd, int *rows, int *cols)
{
  *rows = *cols = 0;
  errno = ENOSYS;
  return -1;
}
#endif

#if defined(_WIN32) && !defined(__CYGWIN__)
char *ttyname(int fd) {
  errno = ENOSYS;
  return NULL;
}
#endif



static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[90];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,110,97,109,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,111,114,116,35,115,101,116,45,112,111,114,116,45,110,97,109,101,33,32,112,111,114,116,32,110,97,109,101,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,112,111,115,105,116,105,111,110,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,111,114,116,35,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,32,109,111,100,101,32,46,32,115,105,122,101,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,102,111,114,45,101,97,99,104,32,102,110,32,116,104,117,110,107,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,120,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,109,97,112,32,102,110,32,116,104,117,110,107,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,97,99,99,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,102,111,108,100,32,102,110,32,97,99,99,32,116,104,117,110,107,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,14),40,102,95,49,49,50,49,32,98,117,102,32,110,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,56,56,32,105,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,14),40,102,95,49,49,50,54,32,98,117,102,32,110,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,7),40,97,49,49,52,51,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,9),40,97,49,49,52,57,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,111,112,121,45,112,111,114,116,32,115,114,99,32,100,101,115,116,32,46,32,114,101,115,116,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,11),40,103,50,53,48,32,103,50,54,50,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,52,57,32,103,50,53,54,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,9),40,97,49,49,56,53,32,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,52,32,103,50,56,49,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,49,50,49,57,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,98,114,111,97,100,99,97,115,116,45,112,111,114,116,32,46,32,112,111,114,116,115,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,49,50,53,55,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,49,50,57,50,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,49,51,49,50,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,110,32,99,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,22),40,97,49,51,52,55,32,112,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,99,111,110,99,97,116,101,110,97,116,101,100,45,112,111,114,116,32,112,49,32,46,32,112,111,114,116,115,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,7),40,97,49,52,48,57,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,49,52,49,52,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,49,52,50,48,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,52,51,52,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,49,52,51,57,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,49,52,52,53,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,7),40,97,49,52,53,57,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,49,52,54,52,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,52,55,48,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,115,116,114,105,110,103,32,115,116,114,32,112,114,111,99,41,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,115,116,114,105,110,103,32,112,114,111,99,41,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,53,48,53,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,49,53,49,48,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,49,53,49,54,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,115,116,114,105,110,103,32,115,116,114,32,116,104,117,110,107,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,48,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,53,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,49,53,52,52,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,49,53,53,56,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,7),40,97,49,53,54,51,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,97,49,53,55,50,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,9),40,97,49,54,49,54,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,9),40,97,49,54,51,55,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,11),40,97,49,54,53,56,32,112,32,100,41,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,9),40,97,49,54,54,52,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,105,110,112,117,116,45,112,111,114,116,32,114,101,97,100,32,114,101,97,100,121,63,32,99,108,111,115,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,97,49,55,51,54,32,112,32,99,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,11),40,97,49,55,52,54,32,112,32,115,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,11),40,97,49,55,53,50,32,112,32,100,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,9),40,97,49,55,53,56,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,111,117,116,112,117,116,45,112,111,114,116,32,119,114,105,116,101,32,99,108,111,115,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,9),40,97,49,55,56,57,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,9),40,97,49,55,57,53,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,11),40,97,49,56,48,49,32,95,32,99,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,11),40,97,49,56,48,55,32,95,32,115,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,97,49,56,49,51,32,95,32,100,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,9),40,97,49,56,51,56,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,9),40,97,49,56,52,52,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,15),40,97,49,56,53,48,32,95,32,110,32,100,32,115,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,11),40,97,49,56,53,54,32,95,32,108,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,49,56,54,50,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,98,105,100,105,114,101,99,116,105,111,110,97,108,45,112,111,114,116,32,105,32,111,41,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,104,101,99,107,45,116,101,114,109,105,110,97,108,33,32,99,97,108,108,101,114,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,110,97,109,101,32,112,111,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k1972 */
C_regparm static C_word C_fcall stub548(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_nn(C_a1);
int *t2=(int *)C_c_pointer_nn(C_a2);
C_r=C_fix((C_word)get_tty_size(t0,t1,t2));
return C_r;}

/* from k1942 */
C_regparm static C_word C_fcall stub534(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k1876 */
C_regparm static C_word C_fcall stub512(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub141(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word p=(C_word )(C_a0);
int m=(int )C_unfix(C_a1);
int s=(int )C_unfix(C_a2);
C_return(setvbuf(C_port_file(p), NULL, m, s));
C_ret:
#undef return

return C_r;}

C_noret_decl(f_1019)
static void C_fcall f_1019(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word *av) C_noret;
C_noret_decl(f_1032)
static void C_ccall f_1032(C_word c,C_word *av) C_noret;
C_noret_decl(f_1041)
static void C_ccall f_1041(C_word c,C_word *av) C_noret;
C_noret_decl(f_1046)
static void C_fcall f_1046(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1050)
static void C_fcall f_1050(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word *av) C_noret;
C_noret_decl(f_1088)
static void C_ccall f_1088(C_word c,C_word *av) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word *av) C_noret;
C_noret_decl(f_1121)
static void C_ccall f_1121(C_word c,C_word *av) C_noret;
C_noret_decl(f_1126)
static void C_ccall f_1126(C_word c,C_word *av) C_noret;
C_noret_decl(f_1144)
static void C_ccall f_1144(C_word c,C_word *av) C_noret;
C_noret_decl(f_1150)
static void C_ccall f_1150(C_word c,C_word *av) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word *av) C_noret;
C_noret_decl(f_1186)
static void C_ccall f_1186(C_word c,C_word *av) C_noret;
C_noret_decl(f_1188)
static void C_fcall f_1188(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1197)
static void C_fcall f_1197(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1207)
static void C_ccall f_1207(C_word c,C_word *av) C_noret;
C_noret_decl(f_1220)
static void C_ccall f_1220(C_word c,C_word *av) C_noret;
C_noret_decl(f_1226)
static void C_fcall f_1226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1236)
static void C_ccall f_1236(C_word c,C_word *av) C_noret;
C_noret_decl(f_1249)
static void C_ccall f_1249(C_word c,C_word *av) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word *av) C_noret;
C_noret_decl(f_1264)
static void C_fcall f_1264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word *av) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word *av) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word *av) C_noret;
C_noret_decl(f_1319)
static void C_fcall f_1319(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word *av) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word *av) C_noret;
C_noret_decl(f_1354)
static void C_fcall f_1354(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word *av) C_noret;
C_noret_decl(f_1373)
static void C_fcall f_1373(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1401)
static void C_ccall f_1401(C_word c,C_word *av) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word *av) C_noret;
C_noret_decl(f_1415)
static void C_ccall f_1415(C_word c,C_word *av) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word *av) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word *av) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word *av) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word *av) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word *av) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word *av) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word *av) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word *av) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word *av) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word *av) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word *av) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word *av) C_noret;
C_noret_decl(f_1489)
static void C_ccall f_1489(C_word c,C_word *av) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word *av) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word *av) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word *av) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word *av) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word *av) C_noret;
C_noret_decl(f_1522)
static void C_ccall f_1522(C_word c,C_word *av) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word *av) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word *av) C_noret;
C_noret_decl(f_1536)
static void C_ccall f_1536(C_word c,C_word *av) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word *av) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word *av) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word *av) C_noret;
C_noret_decl(f_1554)
static void C_ccall f_1554(C_word c,C_word *av) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word *av) C_noret;
C_noret_decl(f_1564)
static void C_ccall f_1564(C_word c,C_word *av) C_noret;
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word *av) C_noret;
C_noret_decl(f_1573)
static void C_ccall f_1573(C_word c,C_word *av) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word *av) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word *av) C_noret;
C_noret_decl(f_1615)
static void C_ccall f_1615(C_word c,C_word *av) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word *av) C_noret;
C_noret_decl(f_1638)
static void C_ccall f_1638(C_word c,C_word *av) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word *av) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word *av) C_noret;
C_noret_decl(f_1665)
static void C_ccall f_1665(C_word c,C_word *av) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word *av) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word *av) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word *av) C_noret;
C_noret_decl(f_1737)
static void C_ccall f_1737(C_word c,C_word *av) C_noret;
C_noret_decl(f_1747)
static void C_ccall f_1747(C_word c,C_word *av) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word *av) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word *av) C_noret;
C_noret_decl(f_1774)
static void C_ccall f_1774(C_word c,C_word *av) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word *av) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word *av) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word *av) C_noret;
C_noret_decl(f_1796)
static void C_ccall f_1796(C_word c,C_word *av) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word *av) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word *av) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word *av) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word *av) C_noret;
C_noret_decl(f_1845)
static void C_ccall f_1845(C_word c,C_word *av) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word *av) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word *av) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word *av) C_noret;
C_noret_decl(f_1879)
static void C_fcall f_1879(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word *av) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word *av) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word *av) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word *av) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word *av) C_noret;
C_noret_decl(f_1914)
static void C_fcall f_1914(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1945)
static void C_ccall f_1945(C_word c,C_word *av) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word *av) C_noret;
C_noret_decl(f_1952)
static void C_ccall f_1952(C_word c,C_word *av) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word *av) C_noret;
C_noret_decl(f_1979)
static void C_ccall f_1979(C_word c,C_word *av) C_noret;
C_noret_decl(f_2000)
static void C_ccall f_2000(C_word c,C_word *av) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word *av) C_noret;
C_noret_decl(f_727)
static void C_ccall f_727(C_word c,C_word *av) C_noret;
C_noret_decl(f_730)
static void C_ccall f_730(C_word c,C_word *av) C_noret;
C_noret_decl(f_732)
static void C_ccall f_732(C_word c,C_word *av) C_noret;
C_noret_decl(f_739)
static void C_ccall f_739(C_word c,C_word *av) C_noret;
C_noret_decl(f_750)
static void C_ccall f_750(C_word c,C_word *av) C_noret;
C_noret_decl(f_754)
static void C_ccall f_754(C_word c,C_word *av) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word *av) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word *av) C_noret;
C_noret_decl(f_794)
static void C_ccall f_794(C_word c,C_word *av) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word *av) C_noret;
C_noret_decl(f_801)
static void C_fcall f_801(C_word t0,C_word t1) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word *av) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word *av) C_noret;
C_noret_decl(f_813)
static void C_fcall f_813(C_word t0,C_word t1) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word *av) C_noret;
C_noret_decl(f_876)
static void C_fcall f_876(C_word t0,C_word t1) C_noret;
C_noret_decl(f_880)
static void C_ccall f_880(C_word c,C_word *av) C_noret;
C_noret_decl(f_889)
static void C_ccall f_889(C_word c,C_word *av) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word *av) C_noret;
C_noret_decl(f_900)
static void C_fcall f_900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_904)
static void C_ccall f_904(C_word c,C_word *av) C_noret;
C_noret_decl(f_924)
static void C_ccall f_924(C_word c,C_word *av) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word *av) C_noret;
C_noret_decl(f_932)
static void C_fcall f_932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word *av) C_noret;
C_noret_decl(f_949)
static void C_ccall f_949(C_word c,C_word *av) C_noret;
C_noret_decl(f_956)
static void C_ccall f_956(C_word c,C_word *av) C_noret;
C_noret_decl(f_961)
static void C_fcall f_961(C_word t0,C_word t1) C_noret;
C_noret_decl(f_965)
static void C_ccall f_965(C_word c,C_word *av) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word *av) C_noret;
C_noret_decl(f_986)
static void C_fcall f_986(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externexport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1019)
static void C_ccall trf_1019(C_word c,C_word *av) C_noret;
static void C_ccall trf_1019(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1019(t0,t1);}

C_noret_decl(trf_1046)
static void C_ccall trf_1046(C_word c,C_word *av) C_noret;
static void C_ccall trf_1046(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1046(t0,t1,t2);}

C_noret_decl(trf_1050)
static void C_ccall trf_1050(C_word c,C_word *av) C_noret;
static void C_ccall trf_1050(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1050(t0,t1);}

C_noret_decl(trf_1188)
static void C_ccall trf_1188(C_word c,C_word *av) C_noret;
static void C_ccall trf_1188(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1188(t0,t1,t2);}

C_noret_decl(trf_1197)
static void C_ccall trf_1197(C_word c,C_word *av) C_noret;
static void C_ccall trf_1197(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1197(t0,t1,t2);}

C_noret_decl(trf_1226)
static void C_ccall trf_1226(C_word c,C_word *av) C_noret;
static void C_ccall trf_1226(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1226(t0,t1,t2);}

C_noret_decl(trf_1264)
static void C_ccall trf_1264(C_word c,C_word *av) C_noret;
static void C_ccall trf_1264(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1264(t0,t1);}

C_noret_decl(trf_1319)
static void C_ccall trf_1319(C_word c,C_word *av) C_noret;
static void C_ccall trf_1319(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1319(t0,t1);}

C_noret_decl(trf_1354)
static void C_ccall trf_1354(C_word c,C_word *av) C_noret;
static void C_ccall trf_1354(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1354(t0,t1,t2,t3);}

C_noret_decl(trf_1373)
static void C_ccall trf_1373(C_word c,C_word *av) C_noret;
static void C_ccall trf_1373(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1373(t0,t1);}

C_noret_decl(trf_1879)
static void C_ccall trf_1879(C_word c,C_word *av) C_noret;
static void C_ccall trf_1879(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1879(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1914)
static void C_ccall trf_1914(C_word c,C_word *av) C_noret;
static void C_ccall trf_1914(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1914(t0,t1,t2);}

C_noret_decl(trf_801)
static void C_ccall trf_801(C_word c,C_word *av) C_noret;
static void C_ccall trf_801(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_801(t0,t1);}

C_noret_decl(trf_813)
static void C_ccall trf_813(C_word c,C_word *av) C_noret;
static void C_ccall trf_813(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_813(t0,t1);}

C_noret_decl(trf_876)
static void C_ccall trf_876(C_word c,C_word *av) C_noret;
static void C_ccall trf_876(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_876(t0,t1);}

C_noret_decl(trf_900)
static void C_ccall trf_900(C_word c,C_word *av) C_noret;
static void C_ccall trf_900(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_900(t0,t1,t2);}

C_noret_decl(trf_932)
static void C_ccall trf_932(C_word c,C_word *av) C_noret;
static void C_ccall trf_932(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_932(t0,t1,t2);}

C_noret_decl(trf_961)
static void C_ccall trf_961(C_word c,C_word *av) C_noret;
static void C_ccall trf_961(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_961(t0,t1);}

C_noret_decl(trf_986)
static void C_ccall trf_986(C_word c,C_word *av) C_noret;
static void C_ccall trf_986(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_986(t0,t1,t2);}

/* loop in chicken.port#copy-port in k728 in k725 */
static void C_fcall f_1019(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1019,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1023,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* port.scm:193: reader */
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1021 in loop in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_1023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1023,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1032,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:195: writer */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k1030 in k1021 in loop in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_1032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1032,2,av);}
/* port.scm:196: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1019(t2,((C_word*)t0)[3]);}

/* k1039 in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_1041(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1041,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1046,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word)li14),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1046(t6,((C_word*)t0)[5],C_fix(0));}

/* loop in k1039 in chicken.port#copy-port in k728 in k725 */
static void C_fcall f_1046(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_1046,3,t0,t1,t2);}
a=C_alloc(15);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1050,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t3)[1],C_fix(1024)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1088,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* port.scm:201: chicken.io#write-string */
t6=*((C_word*)lf[28]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1024);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=t4;
f_1050(t5,C_SCHEME_UNDEFINED);}}

/* k1048 in loop in k1039 in chicken.port#copy-port in k728 in k725 */
static void C_fcall f_1050(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1050,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* port.scm:203: reader */
t3=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k1051 in k1048 in loop in k1039 in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_1053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1053,2,av);}
if(C_truep(C_eofp(t1))){
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* port.scm:206: chicken.io#write-string */
t2=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=C_fix(C_character_code(t1));
t3=C_setbyte(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],t2);
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
/* port.scm:209: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_1046(t5,((C_word*)t0)[3],t4);}}

/* k1086 in loop in k1039 in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_1088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1088,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
f_1050(t3,t2);}

/* chicken.port#copy-port in k728 in k725 */
static void C_ccall f_1091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +18,c,4)))){
C_save_and_reclaim((void*)f_1091,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+18);
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
t6=(C_truep(t5)?((C_word*)t0)[2]:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?((C_word*)t0)[3]:C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_eqp(t7,((C_word*)t0)[2]);
if(C_truep(t15)){
t16=C_eqp(t12,((C_word*)t0)[3]);
t17=(C_truep(t16)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1121,a[2]=t3,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1126,a[2]=t3,a[3]=t12,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp));
t18=t1;
t19=t2;
t20=t17;
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_956,a[2]=t20,a[3]=t19,a[4]=t18,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t21;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}
else{
t16=C_eqp(t12,((C_word*)t0)[3]);
if(C_truep(t16)){
t17=t1;
t18=t2;
t19=t3;
t20=t7;
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1041,a[2]=t19,a[3]=t20,a[4]=t18,a[5]=t17,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t21;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}
else{
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1144,a[2]=t7,a[3]=t2,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1150,a[2]=t12,a[3]=t3,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp);
t19=t1;
t20=t17;
t21=t18;
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1019,a[2]=t23,a[3]=t21,a[4]=t20,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t25=((C_word*)t23)[1];
f_1019(t25,t19);}}}

/* f_1121 in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_1121(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1121,4,av);}
/* port.scm:216: chicken.io#write-string */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* f_1126 in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_1126(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1126,4,av);}
a=C_alloc(10);
t4=t2;
t5=t3;
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[3];
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_986,a[2]=t5,a[3]=t9,a[4]=t4,a[5]=t7,a[6]=t6,a[7]=((C_word)li11),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_986(t11,t1,C_fix(0));}

/* a1143 in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_1144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1144,2,av);}
/* port.scm:222: read */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a1149 in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_1150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1150,3,av);}
/* port.scm:223: write */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* chicken.port#make-broadcast-port in k728 in k725 */
static void C_ccall f_1180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_1180,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+8);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1186,a[2]=t2,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1220,a[2]=t2,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
/* port.scm:229: make-output-port */
t5=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=*((C_word*)lf[34]+1);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* a1185 in chicken.port#make-broadcast-port in k728 in k725 */
static void C_ccall f_1186(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1186,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1188,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1197,a[2]=t6,a[3]=t3,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_1197(t8,t1,t4);}

/* g250 in a1185 in chicken.port#make-broadcast-port in k728 in k725 */
static void C_fcall f_1188(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1188,3,t0,t1,t2);}
t3=*((C_word*)lf[28]+1);
/* port.scm:230: g265 */
t4=*((C_word*)lf[28]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* for-each-loop249 in a1185 in chicken.port#make-broadcast-port in k728 in k725 */
static void C_fcall f_1197(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1197,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1207,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* port.scm:230: g250 */
t5=((C_word*)t0)[3];
f_1188(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1205 in for-each-loop249 in a1185 in chicken.port#make-broadcast-port in k728 in k725 */
static void C_ccall f_1207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1207,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1197(t3,((C_word*)t0)[4],t2);}

/* a1219 in chicken.port#make-broadcast-port in k728 in k725 */
static void C_ccall f_1220(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1220,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1226,a[2]=t4,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1226(t6,t1,t2);}

/* for-each-loop274 in a1219 in chicken.port#make-broadcast-port in k728 in k725 */
static void C_fcall f_1226(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1226,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1236,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* port.scm:232: g275 */
t5=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1234 in for-each-loop274 in a1219 in chicken.port#make-broadcast-port in k728 in k725 */
static void C_ccall f_1236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1236,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1226(t3,((C_word*)t0)[4],t2);}

/* chicken.port#make-concatenated-port in k728 in k725 */
static void C_ccall f_1249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +21,c,6)))){
C_save_and_reclaim((void*)f_1249,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+21);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1258,a[2]=t6,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1293,a[2]=t6,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1313,a[2]=t6,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1348,a[2]=t6,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
/* port.scm:237: make-input-port */
t11=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t11;
av2[1]=t1;
av2[2]=t7;
av2[3]=t8;
av2[4]=*((C_word*)lf[34]+1);
av2[5]=t9;
av2[6]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(7,av2);}}

/* a1257 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_ccall f_1258(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1258,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1264,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1264(t5,t1);}

/* loop in a1257 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_fcall f_1264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1264,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* read-char/port */
t4=*((C_word*)lf[36]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1272 in loop in a1257 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_ccall f_1274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1274,2,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* port.scm:245: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1264(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a1292 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_ccall f_1293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1293,2,av);}
t2=C_i_nullp(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_i_not(t2))){
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* port.scm:249: scheme#char-ready? */
t4=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a1312 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_ccall f_1313(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1313,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1319,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1319(t5,t1);}

/* loop in a1312 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_fcall f_1319(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1319,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* port.scm:255: scheme#peek-char */
t4=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1327 in loop in a1312 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_ccall f_1329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1329,2,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* port.scm:258: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1319(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a1347 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_ccall f_1348(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1348,6,av);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1354,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t5,a[5]=t4,a[6]=((C_word)li30),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_1354(t9,t1,t3,C_fix(0));}

/* loop in a1347 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_fcall f_1354(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_1354,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1370,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t6=C_fixnum_plus(((C_word*)t0)[4],t3);
/* port.scm:265: chicken.io#read-string! */
t7=*((C_word*)lf[29]+1);{
C_word av2[6];
av2[0]=t7;
av2[1]=t4;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
av2[4]=t5;
av2[5]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}}}

/* k1368 in loop in a1347 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_ccall f_1370(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1370,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1373,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[2]))){
t4=C_i_cdr(((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t4);
t6=t3;
f_1373(t6,t5);}
else{
t4=t3;
f_1373(t4,C_SCHEME_UNDEFINED);}}

/* k1371 in k1368 in loop in a1347 in chicken.port#make-concatenated-port in k728 in k725 */
static void C_fcall f_1373(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1373,2,t0,t1);}
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[3]);
/* port.scm:268: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1354(t4,((C_word*)t0)[6],t2,t3);}

/* chicken.port#with-input-from-port in k728 in k725 */
static void C_ccall f_1401(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1401,4,av);}
a=C_alloc(18);
t4=t2;
t5=C_i_check_port_2(t4,C_fix(1),C_SCHEME_TRUE,lf[41]);
t6=t2;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1410,a[2]=t9,a[3]=t7,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1415,a[2]=t3,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1421,a[2]=t7,a[3]=t9,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp);
/* port.scm:275: ##sys#dynamic-wind */
t13=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t1;
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* a1409 in chicken.port#with-input-from-port in k728 in k725 */
static void C_ccall f_1410(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1410,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1414 in chicken.port#with-input-from-port in k728 in k725 */
static void C_ccall f_1415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1415,2,av);}
/* port.scm:276: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1420 in chicken.port#with-input-from-port in k728 in k725 */
static void C_ccall f_1421(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1421,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-output-to-port in k728 in k725 */
static void C_ccall f_1426(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1426,4,av);}
a=C_alloc(18);
t4=t2;
t5=C_i_check_port_2(t4,C_fix(2),C_SCHEME_TRUE,lf[44]);
t6=t2;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1435,a[2]=t9,a[3]=t7,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1440,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1446,a[2]=t7,a[3]=t9,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
/* port.scm:280: ##sys#dynamic-wind */
t13=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t1;
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* a1434 in chicken.port#with-output-to-port in k728 in k725 */
static void C_ccall f_1435(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1435,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1439 in chicken.port#with-output-to-port in k728 in k725 */
static void C_ccall f_1440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1440,2,av);}
/* port.scm:281: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1445 in chicken.port#with-output-to-port in k728 in k725 */
static void C_ccall f_1446(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1446,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-error-output-to-port in k728 in k725 */
static void C_ccall f_1451(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1451,4,av);}
a=C_alloc(18);
t4=t2;
t5=C_i_check_port_2(t4,C_fix(2),C_SCHEME_TRUE,lf[47]);
t6=t2;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1460,a[2]=t9,a[3]=t7,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1465,a[2]=t3,a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1471,a[2]=t7,a[3]=t9,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
/* port.scm:285: ##sys#dynamic-wind */
t13=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t1;
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* a1459 in chicken.port#with-error-output-to-port in k728 in k725 */
static void C_ccall f_1460(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1460,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1464 in chicken.port#with-error-output-to-port in k728 in k725 */
static void C_ccall f_1465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1465,2,av);}
/* port.scm:286: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1470 in chicken.port#with-error-output-to-port in k728 in k725 */
static void C_ccall f_1471(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1471,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#call-with-input-string in k728 in k725 */
static void C_ccall f_1476(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1476,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1480,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:292: chicken.base#open-input-string */
t5=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1478 in chicken.port#call-with-input-string in k728 in k725 */
static void C_ccall f_1480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1480,2,av);}
/* port.scm:293: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* chicken.port#call-with-output-string in k728 in k725 */
static void C_ccall f_1485(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1485,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1489,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:297: chicken.base#open-output-string */
t4=*((C_word*)lf[53]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1487 in chicken.port#call-with-output-string in k728 in k725 */
static void C_ccall f_1489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1489,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1492,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:298: proc */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k1490 in k1487 in chicken.port#call-with-output-string in k728 in k725 */
static void C_ccall f_1492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1492,2,av);}
/* port.scm:299: chicken.base#get-output-string */
t2=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.port#with-input-from-string in k728 in k725 */
static void C_ccall f_1497(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1497,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1501,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:303: chicken.base#open-input-string */
t5=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1499 in chicken.port#with-input-from-string in k728 in k725 */
static void C_ccall f_1501(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1501,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1506,a[2]=t5,a[3]=t3,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1511,a[2]=((C_word*)t0)[2],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1517,a[2]=t3,a[3]=t5,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
/* port.scm:303: ##sys#dynamic-wind */
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1505 in k1499 in chicken.port#with-input-from-string in k728 in k725 */
static void C_ccall f_1506(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1506,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1510 in k1499 in chicken.port#with-input-from-string in k728 in k725 */
static void C_ccall f_1511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1511,2,av);}
/* port.scm:304: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1516 in k1499 in chicken.port#with-input-from-string in k728 in k725 */
static void C_ccall f_1517(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1517,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-output-to-string in k728 in k725 */
static void C_ccall f_1522(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1522,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1526,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:308: chicken.base#open-output-string */
t4=*((C_word*)lf[53]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1524 in chicken.port#with-output-to-string in k728 in k725 */
static void C_ccall f_1526(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1526,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1531,a[2]=t5,a[3]=t3,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1536,a[2]=((C_word*)t0)[2],a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1545,a[2]=t3,a[3]=t5,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp);
/* port.scm:308: ##sys#dynamic-wind */
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1530 in k1524 in chicken.port#with-output-to-string in k728 in k725 */
static void C_ccall f_1531(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1531,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1535 in k1524 in chicken.port#with-output-to-string in k728 in k725 */
static void C_ccall f_1536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1536,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1540,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* port.scm:309: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1538 in a1535 in k1524 in chicken.port#with-output-to-string in k728 in k725 */
static void C_ccall f_1540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1540,2,av);}
/* port.scm:310: chicken.base#get-output-string */
t2=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[45]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1544 in k1524 in chicken.port#with-output-to-string in k728 in k725 */
static void C_ccall f_1545(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1545,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-error-output-to-string in k728 in k725 */
static void C_ccall f_1550(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1550,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1554,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:314: chicken.base#open-output-string */
t4=*((C_word*)lf[53]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1552 in chicken.port#with-error-output-to-string in k728 in k725 */
static void C_ccall f_1554(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1554,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1559,a[2]=t5,a[3]=t3,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1564,a[2]=((C_word*)t0)[2],a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1573,a[2]=t3,a[3]=t5,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
/* port.scm:314: ##sys#dynamic-wind */
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1558 in k1552 in chicken.port#with-error-output-to-string in k728 in k725 */
static void C_ccall f_1559(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1559,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1563 in k1552 in chicken.port#with-error-output-to-string in k728 in k725 */
static void C_ccall f_1564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1564,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1568,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* port.scm:315: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1566 in a1563 in k1552 in chicken.port#with-error-output-to-string in k728 in k725 */
static void C_ccall f_1568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1568,2,av);}
/* port.scm:316: chicken.base#get-output-string */
t2=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[48]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1572 in k1552 in chicken.port#with-error-output-to-string in k728 in k725 */
static void C_ccall f_1573(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1573,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#make-input-port in k728 in k725 */
static void C_ccall f_1578(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +35,c,5)))){
C_save_and_reclaim((void*)f_1578,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+35);
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
C_word t29;
C_word t30;
C_word t31;
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=t7;
t9=C_i_nullp(t5);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t11=C_i_nullp(t10);
t12=(C_truep(t11)?C_SCHEME_FALSE:C_i_car(t10));
t13=C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t10));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?C_SCHEME_FALSE:C_i_car(t14));
t17=C_i_nullp(t14);
t18=(C_truep(t17)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t19=C_i_nullp(t18);
t20=(C_truep(t19)?C_SCHEME_FALSE:C_i_car(t18));
t21=C_i_nullp(t18);
t22=(C_truep(t21)?C_SCHEME_END_OF_LIST:C_i_cdr(t18));
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1617,a[2]=t8,a[3]=t2,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp);
t24=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1638,a[2]=t8,a[3]=t2,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1659,a[2]=t4,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t26=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1665,a[2]=t3,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t27=C_a_i_vector(&a,10,t23,t24,C_SCHEME_FALSE,C_SCHEME_FALSE,t25,C_SCHEME_FALSE,t26,t12,t16,t20);
t28=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t29=t28;
t30=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1612,a[2]=t1,a[3]=t29,tmp=(C_word)a,a+=4,tmp);
/* port.scm:354: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t30;
av2[2]=C_fix(1);
av2[3]=t27;
av2[4]=lf[59];
av2[5]=lf[60];
tp(6,av2);}}

/* k1610 in chicken.port#make-input-port in k728 in k725 */
static void C_ccall f_1612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1612,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1615,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:355: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1613 in k1610 in chicken.port#make-input-port in k728 in k725 */
static void C_ccall f_1615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1615,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1616 in chicken.port#make-input-port in k728 in k725 */
static void C_ccall f_1617(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1617,3,av);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* port.scm:330: read */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
if(C_truep(t3)){
t4=C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* port.scm:334: read */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}}

/* a1637 in chicken.port#make-input-port in k728 in k725 */
static void C_ccall f_1638(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1638,3,av);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* port.scm:337: peek */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1654,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:340: read */
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}}}

/* k1652 in a1637 in chicken.port#make-input-port in k728 in k725 */
static void C_ccall f_1654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1654,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a1658 in chicken.port#make-input-port in k728 in k725 */
static void C_ccall f_1659(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1659,4,av);}
/* port.scm:346: close */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a1664 in chicken.port#make-input-port in k728 in k725 */
static void C_ccall f_1665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1665,3,av);}
/* port.scm:349: ready? */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* chicken.port#make-output-port in k728 in k725 */
static void C_ccall f_1719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +32,c,5)))){
C_save_and_reclaim((void*)f_1719,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+32);
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
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1737,a[2]=t2,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1747,a[2]=t2,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1753,a[2]=t3,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1759,a[2]=t7,a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t12=C_a_i_vector(&a,9,C_SCHEME_FALSE,C_SCHEME_FALSE,t8,t9,t10,t11,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t13=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1732,a[2]=t1,a[3]=t14,tmp=(C_word)a,a+=4,tmp);
/* port.scm:376: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t15;
av2[2]=C_fix(2);
av2[3]=t12;
av2[4]=lf[61];
av2[5]=lf[60];
tp(6,av2);}}

/* k1730 in chicken.port#make-output-port in k728 in k725 */
static void C_ccall f_1732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1732,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1735,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:377: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1733 in k1730 in chicken.port#make-output-port in k728 in k725 */
static void C_ccall f_1735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1735,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1736 in chicken.port#make-output-port in k728 in k725 */
static void C_ccall f_1737(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(2,c,2)))){
C_save_and_reclaim((void *)f_1737,4,av);}
a=C_alloc(2);
t4=C_a_i_string(&a,1,t3);
/* port.scm:365: write */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* a1746 in chicken.port#make-output-port in k728 in k725 */
static void C_ccall f_1747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1747,4,av);}
/* port.scm:367: write */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1752 in chicken.port#make-output-port in k728 in k725 */
static void C_ccall f_1753(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1753,4,av);}
/* port.scm:369: close */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a1758 in chicken.port#make-output-port in k728 in k725 */
static void C_ccall f_1759(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1759,3,av);}
if(C_truep(((C_word*)t0)[2])){
/* port.scm:371: flush */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1774(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(55,c,6)))){
C_save_and_reclaim((void *)f_1774,4,av);}
a=C_alloc(55);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1790,a[2]=t2,a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1796,a[2]=t2,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1802,a[2]=t3,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1808,a[2]=t3,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1814,a[2]=t2,a[3]=t3,a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1839,a[2]=t3,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1845,a[2]=t2,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1851,a[2]=t2,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1857,a[2]=t2,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1863,a[2]=t2,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp);
t14=C_a_i_vector(&a,10,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* port.scm:404: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t15;
av2[2]=C_fix(3);
av2[3]=t14;
av2[4]=lf[68];
av2[5]=lf[69];
tp(6,av2);}}

/* k1779 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1781(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1781,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1784,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
/* port.scm:405: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k1782 in k1779 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1784,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1789 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1790,3,av);}
/* read-char/port */
t3=*((C_word*)lf[36]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1795 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1796,3,av);}
/* port.scm:385: scheme#peek-char */
t3=*((C_word*)lf[38]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1801 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1802(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1802,4,av);}
/* write-char/port */
t4=*((C_word*)lf[63]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a1807 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1808(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1808,4,av);}
/* port.scm:389: chicken.io#write-string */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a1813 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1814,4,av);}
switch(t3){
case C_fix(1):
/* port.scm:392: scheme#close-input-port */
t4=*((C_word*)lf[64]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(2):
/* port.scm:393: scheme#close-output-port */
t4=*((C_word*)lf[65]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
default:
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a1838 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1839,3,av);}
/* port.scm:395: chicken.base#flush-output */
t3=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1844 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1845,3,av);}
/* port.scm:397: scheme#char-ready? */
t3=*((C_word*)lf[37]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1850 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1851(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1851,6,av);}
/* port.scm:399: chicken.io#read-string! */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}

/* a1856 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1857(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1857,4,av);}
/* port.scm:401: chicken.io#read-line */
t4=*((C_word*)lf[66]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a1862 in chicken.port#make-bidirectional-port in k728 in k725 */
static void C_ccall f_1863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1863,2,av);}
/* port.scm:403: chicken.io#read-buffered */
t2=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.port#posix-error in k728 in k725 */
static void C_fcall f_1879(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1879,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1883,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* port.scm:413: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t6;
tp(2,av2);}}

/* k1881 in chicken.port#posix-error in k728 in k725 */
static void C_ccall f_1883(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_1883,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1894,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub512(t4,t5);
/* port.scm:410: ##sys#peek-c-string */
t7=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1888 in k1881 in chicken.port#posix-error in k728 in k725 */
static void C_ccall f_1890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1890,2,av);}{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[71]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
av2[6]=((C_word*)t0)[5];
C_apply(7,av2);}}

/* k1892 in k1881 in chicken.port#posix-error in k728 in k725 */
static void C_ccall f_1894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1894,2,av);}
/* port.scm:414: string-append */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[73];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.port#terminal-port? in k728 in k725 */
static void C_ccall f_1896(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1896,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[77]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1902,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:419: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[78]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[78]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k1900 in chicken.port#terminal-port? in k728 in k725 */
static void C_ccall f_1902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1902,2,av);}
t2=C_eqp(C_fix(0),t1);
if(C_truep(C_i_not(t2))){
t3=C_tty_portp(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.port#check-terminal! in k728 in k725 */
static void C_fcall f_1914(C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1914,3,t1,t2,t3);}
t4=t3;
t5=t2;
t6=C_i_check_port_2(t4,C_fix(0),C_SCHEME_TRUE,t5);
t7=C_slot(t3,C_fix(7));
t8=C_eqp(lf[15],t7);
t9=(C_truep(t8)?C_tty_portp(t3):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_SCHEME_UNDEFINED;
t11=t1;{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
/* port.scm:426: ##sys#error */
t10=*((C_word*)lf[9]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[80];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}

/* chicken.port#terminal-name in k728 in k725 */
static void C_ccall f_1945(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1945,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1949,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:431: check-terminal! */
f_1914(t3,lf[83],t2);}

/* k1947 in chicken.port#terminal-name in k728 in k725 */
static void C_ccall f_1949(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1949,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_port_fileno(((C_word*)t0)[3]);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
t6=stub534(t4,t5);
/* port.scm:429: ##sys#peek-c-string */
t7=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1950 in k1947 in chicken.port#terminal-name in k728 in k725 */
static void C_ccall f_1952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1952,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* port.scm:433: posix-error */
f_1879(((C_word*)t0)[2],lf[82],lf[83],lf[84],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* chicken.port#terminal-size in k728 in k725 */
static void C_ccall f_1975(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1975,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1979,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:441: check-terminal! */
f_1914(t3,lf[86],t2);}

/* k1977 in chicken.port#terminal-size in k728 in k725 */
static void C_ccall f_1979(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_1979,2,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=C_port_fileno(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2000,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* port.scm:445: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[88]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[89];
tp(6,av2);}}

/* k1998 in k1977 in chicken.port#terminal-size in k728 in k725 */
static void C_ccall f_2000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2000,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2004,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* port.scm:446: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[88]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[89];
tp(6,av2);}}

/* k2002 in k1998 in k1977 in chicken.port#terminal-size in k728 in k725 */
static void C_ccall f_2004(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2004,2,av);}
a=C_alloc(3);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=C_i_foreign_pointer_argumentp(((C_word*)t0)[3]);
t4=C_i_foreign_pointer_argumentp(t1);
t5=stub548(C_SCHEME_UNDEFINED,t2,t3,t4);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
/* port.scm:447: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[5])));
av2[3]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6])));
C_values(4,av2);}}
else{
/* port.scm:448: posix-error */
f_1879(((C_word*)t0)[4],lf[82],lf[86],lf[87],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k725 */
static void C_ccall f_727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_727,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_730,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k728 in k725 */
static void C_ccall f_730(C_word c,C_word *av){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(96,c,6)))){
C_save_and_reclaim((void *)f_730,2,av);}
a=C_alloc(96);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate((C_word*)lf[2]+1 /* (set! chicken.port#port-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_732,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[6]+1 /* (set! chicken.port#set-port-name! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_750,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[8]+1 /* (set! chicken.port#port-position ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_762,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[12]+1 /* (set! chicken.port#set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_794,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[21]+1 /* (set! chicken.port#port-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_870,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[22]+1 /* (set! chicken.port#port-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_894,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[24]+1 /* (set! chicken.port#port-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_926,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[25]+1);
t12=*((C_word*)lf[26]+1);
t13=C_mutate((C_word*)lf[27]+1 /* (set! chicken.port#copy-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1091,a[2]=t11,a[3]=t12,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[31]+1 /* (set! chicken.port#make-broadcast-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1180,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[35]+1 /* (set! chicken.port#make-concatenated-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1249,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[40]+1 /* (set! chicken.port#with-input-from-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1401,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[43]+1 /* (set! chicken.port#with-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1426,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[46]+1 /* (set! chicken.port#with-error-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1451,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[49]+1 /* (set! chicken.port#call-with-input-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1476,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[51]+1 /* (set! chicken.port#call-with-output-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1485,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[54]+1 /* (set! chicken.port#with-input-from-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1497,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[55]+1 /* (set! chicken.port#with-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1522,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[56]+1 /* (set! chicken.port#with-error-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1550,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[39]+1 /* (set! chicken.port#make-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1578,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[33]+1 /* (set! chicken.port#make-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1719,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[62]+1 /* (set! chicken.port#make-bidirectional-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1774,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate(&lf[70] /* (set! chicken.port#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1879,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[76]+1 /* (set! chicken.port#terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1896,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate(&lf[79] /* (set! chicken.port#check-terminal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1914,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[81]+1 /* (set! chicken.port#terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1945,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[85]+1 /* (set! chicken.port#terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1975,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t32=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t32;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t32+1)))(2,av2);}}

/* chicken.port#port-name in k728 in k725 */
static void C_ccall f_732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_732,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[3]+1):C_i_car(t2));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_739,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* port.scm:120: ##sys#check-port */
t7=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[5];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k737 in chicken.port#port-name in k728 in k725 */
static void C_ccall f_739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_739,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(3));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.port#set-port-name! in k728 in k725 */
static void C_ccall f_750(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_750,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_754,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* port.scm:124: ##sys#check-port */
t5=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k752 in chicken.port#set-port-name! in k728 in k725 */
static void C_ccall f_754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_754,2,av);}
t2=C_i_check_string_2(((C_word*)t0)[2],lf[7]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[4],C_fix(3),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.port#port-position in k728 in k725 */
static void C_ccall f_762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_762,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[3]+1):C_i_car(t2));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_769,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:129: ##sys#check-port */
t7=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[10];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k767 in chicken.port#port-position in k728 in k725 */
static void C_ccall f_769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_769,2,av);}
if(C_truep(C_input_portp(((C_word*)t0)[2]))){
t2=C_slot(((C_word*)t0)[2],C_fix(4));
t3=C_slot(((C_word*)t0)[2],C_fix(5));
/* port.scm:131: ##sys#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_values(4,av2);}}
else{
/* port.scm:132: ##sys#error */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[10];
av2[3]=lf[11];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.port#set-buffering-mode! in k728 in k725 */
static void C_ccall f_794(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_794,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_798,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* port.scm:135: ##sys#check-port */
t6=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[13];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k796 in chicken.port#set-buffering-mode! in k728 in k725 */
static void C_ccall f_798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_798,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_801(t4,C_u_i_car(t3));}
else{
t3=t2;
f_801(t3,C_fix((C_word)BUFSIZ));}}

/* k799 in k796 in chicken.port#set-buffering-mode! in k728 in k725 */
static void C_fcall f_801(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trf_801,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_804,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[17]);
if(C_truep(t5)){
t6=t4;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_fix((C_word)_IOFBF);
f_804(2,av2);}}
else{
t6=C_eqp(t3,lf[18]);
if(C_truep(t6)){
t7=C_fix((C_word)_IOLBF);
t8=t4;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
f_804(2,av2);}}
else{
t7=C_eqp(t3,lf[19]);
if(C_truep(t7)){
t8=t4;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_fix((C_word)_IONBF);
f_804(2,av2);}}
else{
/* port.scm:141: ##sys#error */
t8=*((C_word*)lf[9]+1);{
C_word av2[6];
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[13];
av2[3]=lf[20];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}}}}

/* k802 in k799 in k796 in chicken.port#set-buffering-mode! in k728 in k725 */
static void C_ccall f_804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_804,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* port.scm:142: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[13];
tp(4,av2);}}

/* k805 in k802 in k799 in k796 in chicken.port#set-buffering-mode! in k728 in k725 */
static void C_ccall f_807(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_807,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(7));
t4=C_eqp(lf[15],t3);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t7=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t8=stub141(C_SCHEME_UNDEFINED,t5,t6,t7);
t9=t2;
f_813(t9,C_fixnum_lessp(t8,C_fix(0)));}
else{
t5=t2;
f_813(t5,C_fixnum_lessp(C_fix(-1),C_fix(0)));}}

/* k811 in k805 in k802 in k799 in k796 in chicken.port#set-buffering-mode! in k728 in k725 */
static void C_fcall f_813(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_813,2,t0,t1);}
if(C_truep(t1)){
/* port.scm:149: ##sys#error */
t2=*((C_word*)lf[9]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[13];
av2[3]=lf[14];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.port#port-for-each in k728 in k725 */
static void C_ccall f_870(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_870,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_876,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_876(t7,t1);}

/* loop in chicken.port#port-for-each in k728 in k725 */
static void C_fcall f_876(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_876,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_880,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* port.scm:155: thunk */
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k878 in loop in chicken.port#port-for-each in k728 in k725 */
static void C_ccall f_880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_880,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_889,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:157: fn */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k887 in k878 in loop in chicken.port#port-for-each in k728 in k725 */
static void C_ccall f_889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_889,2,av);}
/* port.scm:158: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_876(t2,((C_word*)t0)[3]);}

/* chicken.port#port-map in k728 in k725 */
static void C_ccall f_894(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_894,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_900,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_900(t7,t1,C_SCHEME_END_OF_LIST);}

/* loop in chicken.port#port-map in k728 in k725 */
static void C_fcall f_900(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_900,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_904,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* port.scm:163: thunk */
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k902 in loop in chicken.port#port-map in k728 in k725 */
static void C_ccall f_904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_904,2,av);}
a=C_alloc(5);
if(C_truep(C_eofp(t1))){
/* port.scm:165: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_924,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* port.scm:166: fn */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k922 in k902 in loop in chicken.port#port-map in k728 in k725 */
static void C_ccall f_924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_924,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* port.scm:166: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_900(t3,((C_word*)t0)[4],t2);}

/* chicken.port#port-fold in k728 in k725 */
static void C_ccall f_926(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_926,5,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_932,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_932(t8,t1,t3);}

/* loop in chicken.port#port-fold in k728 in k725 */
static void C_fcall f_932(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_932,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_936,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* port.scm:170: thunk */
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k934 in loop in chicken.port#port-fold in k728 in k725 */
static void C_ccall f_936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_936,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_949,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* port.scm:173: fn */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k947 in k934 in loop in chicken.port#port-fold in k728 in k725 */
static void C_ccall f_949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_949,2,av);}
/* port.scm:173: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_932(t2,((C_word*)t0)[3],t1);}

/* k954 in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_956(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_956,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_961,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li13),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_961(t6,((C_word*)t0)[4]);}

/* loop in k954 in chicken.port#copy-port in k728 in k725 */
static void C_fcall f_961(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_961,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_965,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* port.scm:183: chicken.io#read-string! */
t3=*((C_word*)lf[29]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1024);
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k963 in loop in k954 in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_965,2,av);}
a=C_alloc(4);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_974,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:185: writer */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k972 in k963 in loop in k954 in chicken.port#copy-port in k728 in k725 */
static void C_ccall f_974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_974,2,av);}
/* port.scm:186: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_961(t2,((C_word*)t0)[3]);}

/* doloop188 */
static void C_fcall f_986(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_986,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_996,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_subbyte(((C_word*)t0)[4],t2);
t5=C_make_character(C_unfix(t4));
/* port.scm:190: writer */
t6=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k994 in doloop188 */
static void C_ccall f_996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_996,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_986(t3,((C_word*)t0)[4],t2);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_port_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("port"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_port_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(546))){
C_save(t1);
C_rereclaim2(546*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,90);
lf[0]=C_h_intern(&lf[0],4, C_text("port"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.port#"));
lf[2]=C_h_intern(&lf[2],22, C_text("chicken.port#port-name"));
lf[3]=C_h_intern(&lf[3],18, C_text("\003sysstandard-input"));
lf[4]=C_h_intern(&lf[4],14, C_text("\003syscheck-port"));
lf[5]=C_h_intern(&lf[5],9, C_text("port-name"));
lf[6]=C_h_intern(&lf[6],27, C_text("chicken.port#set-port-name!"));
lf[7]=C_h_intern(&lf[7],14, C_text("set-port-name!"));
lf[8]=C_h_intern(&lf[8],26, C_text("chicken.port#port-position"));
lf[9]=C_h_intern(&lf[9],9, C_text("\003syserror"));
lf[10]=C_h_intern(&lf[10],13, C_text("port-position"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037cannot compute position of port"));
lf[12]=C_h_intern(&lf[12],32, C_text("chicken.port#set-buffering-mode!"));
lf[13]=C_h_intern(&lf[13],19, C_text("set-buffering-mode!"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031cannot set buffering mode"));
lf[15]=C_h_intern(&lf[15],6, C_text("stream"));
lf[16]=C_h_intern(&lf[16],16, C_text("\003syscheck-fixnum"));
lf[17]=C_h_intern(&lf[17],5, C_text("\000full"));
lf[18]=C_h_intern(&lf[18],5, C_text("\000line"));
lf[19]=C_h_intern(&lf[19],5, C_text("\000none"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026invalid buffering-mode"));
lf[21]=C_h_intern(&lf[21],26, C_text("chicken.port#port-for-each"));
lf[22]=C_h_intern(&lf[22],21, C_text("chicken.port#port-map"));
lf[23]=C_h_intern(&lf[23],16, C_text("\003sysfast-reverse"));
lf[24]=C_h_intern(&lf[24],22, C_text("chicken.port#port-fold"));
lf[25]=C_h_intern(&lf[25],16, C_text("scheme#read-char"));
lf[26]=C_h_intern(&lf[26],17, C_text("scheme#write-char"));
lf[27]=C_h_intern(&lf[27],22, C_text("chicken.port#copy-port"));
lf[28]=C_h_intern(&lf[28],23, C_text("chicken.io#write-string"));
lf[29]=C_h_intern(&lf[29],23, C_text("chicken.io#read-string!"));
lf[30]=C_h_intern(&lf[30],15, C_text("\003sysmake-string"));
lf[31]=C_h_intern(&lf[31],32, C_text("chicken.port#make-broadcast-port"));
lf[32]=C_h_intern(&lf[32],25, C_text("chicken.base#flush-output"));
lf[33]=C_h_intern(&lf[33],29, C_text("chicken.port#make-output-port"));
lf[34]=C_h_intern(&lf[34],17, C_text("chicken.base#void"));
lf[35]=C_h_intern(&lf[35],35, C_text("chicken.port#make-concatenated-port"));
lf[36]=C_h_intern(&lf[36],18, C_text("\003sysread-char/port"));
lf[37]=C_h_intern(&lf[37],18, C_text("scheme#char-ready\077"));
lf[38]=C_h_intern(&lf[38],16, C_text("scheme#peek-char"));
lf[39]=C_h_intern(&lf[39],28, C_text("chicken.port#make-input-port"));
lf[40]=C_h_intern(&lf[40],33, C_text("chicken.port#with-input-from-port"));
lf[41]=C_h_intern(&lf[41],20, C_text("with-input-from-port"));
lf[42]=C_h_intern(&lf[42],16, C_text("\003sysdynamic-wind"));
lf[43]=C_h_intern(&lf[43],32, C_text("chicken.port#with-output-to-port"));
lf[44]=C_h_intern(&lf[44],19, C_text("with-output-to-port"));
lf[45]=C_h_intern(&lf[45],19, C_text("\003sysstandard-output"));
lf[46]=C_h_intern(&lf[46],38, C_text("chicken.port#with-error-output-to-port"));
lf[47]=C_h_intern(&lf[47],25, C_text("with-error-output-to-port"));
lf[48]=C_h_intern(&lf[48],18, C_text("\003sysstandard-error"));
lf[49]=C_h_intern(&lf[49],35, C_text("chicken.port#call-with-input-string"));
lf[50]=C_h_intern(&lf[50],30, C_text("chicken.base#open-input-string"));
lf[51]=C_h_intern(&lf[51],36, C_text("chicken.port#call-with-output-string"));
lf[52]=C_h_intern(&lf[52],30, C_text("chicken.base#get-output-string"));
lf[53]=C_h_intern(&lf[53],31, C_text("chicken.base#open-output-string"));
lf[54]=C_h_intern(&lf[54],35, C_text("chicken.port#with-input-from-string"));
lf[55]=C_h_intern(&lf[55],34, C_text("chicken.port#with-output-to-string"));
lf[56]=C_h_intern(&lf[56],40, C_text("chicken.port#with-error-output-to-string"));
lf[57]=C_h_intern(&lf[57],18, C_text("\003sysset-port-data!"));
lf[58]=C_h_intern(&lf[58],13, C_text("\003sysmake-port"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(custom)"));
lf[60]=C_h_intern(&lf[60],6, C_text("custom"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(custom)"));
lf[62]=C_h_intern(&lf[62],36, C_text("chicken.port#make-bidirectional-port"));
lf[63]=C_h_intern(&lf[63],19, C_text("\003syswrite-char/port"));
lf[64]=C_h_intern(&lf[64],23, C_text("scheme#close-input-port"));
lf[65]=C_h_intern(&lf[65],24, C_text("scheme#close-output-port"));
lf[66]=C_h_intern(&lf[66],20, C_text("chicken.io#read-line"));
lf[67]=C_h_intern(&lf[67],24, C_text("chicken.io#read-buffered"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017(bidirectional)"));
lf[69]=C_h_intern(&lf[69],13, C_text("bidirectional"));
lf[71]=C_h_intern(&lf[71],15, C_text("\003syssignal-hook"));
lf[72]=C_h_intern(&lf[72],20, C_text("scheme#string-append"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[74]=C_h_intern(&lf[74],17, C_text("\003syspeek-c-string"));
lf[75]=C_h_intern(&lf[75],16, C_text("\003sysupdate-errno"));
lf[76]=C_h_intern(&lf[76],27, C_text("chicken.port#terminal-port\077"));
lf[77]=C_h_intern(&lf[77],14, C_text("terminal-port\077"));
lf[78]=C_h_intern(&lf[78],25, C_text("\003syspeek-unsigned-integer"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000#port is not connected to a terminal"));
lf[81]=C_h_intern(&lf[81],26, C_text("chicken.port#terminal-name"));
lf[82]=C_h_intern(&lf[82],6, C_text("\000error"));
lf[83]=C_h_intern(&lf[83],13, C_text("terminal-name"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot determine terminal name"));
lf[85]=C_h_intern(&lf[85],26, C_text("chicken.port#terminal-size"));
lf[86]=C_h_intern(&lf[86],13, C_text("terminal-size"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot determine terminal size"));
lf[88]=C_h_intern(&lf[88],17, C_text("\003sysmake-locative"));
lf[89]=C_h_intern(&lf[89],8, C_text("location"));
C_register_lf2(lf,90,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_727,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[143] = {
{C_text("f_1019:port_2escm"),(void*)f_1019},
{C_text("f_1023:port_2escm"),(void*)f_1023},
{C_text("f_1032:port_2escm"),(void*)f_1032},
{C_text("f_1041:port_2escm"),(void*)f_1041},
{C_text("f_1046:port_2escm"),(void*)f_1046},
{C_text("f_1050:port_2escm"),(void*)f_1050},
{C_text("f_1053:port_2escm"),(void*)f_1053},
{C_text("f_1088:port_2escm"),(void*)f_1088},
{C_text("f_1091:port_2escm"),(void*)f_1091},
{C_text("f_1121:port_2escm"),(void*)f_1121},
{C_text("f_1126:port_2escm"),(void*)f_1126},
{C_text("f_1144:port_2escm"),(void*)f_1144},
{C_text("f_1150:port_2escm"),(void*)f_1150},
{C_text("f_1180:port_2escm"),(void*)f_1180},
{C_text("f_1186:port_2escm"),(void*)f_1186},
{C_text("f_1188:port_2escm"),(void*)f_1188},
{C_text("f_1197:port_2escm"),(void*)f_1197},
{C_text("f_1207:port_2escm"),(void*)f_1207},
{C_text("f_1220:port_2escm"),(void*)f_1220},
{C_text("f_1226:port_2escm"),(void*)f_1226},
{C_text("f_1236:port_2escm"),(void*)f_1236},
{C_text("f_1249:port_2escm"),(void*)f_1249},
{C_text("f_1258:port_2escm"),(void*)f_1258},
{C_text("f_1264:port_2escm"),(void*)f_1264},
{C_text("f_1274:port_2escm"),(void*)f_1274},
{C_text("f_1293:port_2escm"),(void*)f_1293},
{C_text("f_1313:port_2escm"),(void*)f_1313},
{C_text("f_1319:port_2escm"),(void*)f_1319},
{C_text("f_1329:port_2escm"),(void*)f_1329},
{C_text("f_1348:port_2escm"),(void*)f_1348},
{C_text("f_1354:port_2escm"),(void*)f_1354},
{C_text("f_1370:port_2escm"),(void*)f_1370},
{C_text("f_1373:port_2escm"),(void*)f_1373},
{C_text("f_1401:port_2escm"),(void*)f_1401},
{C_text("f_1410:port_2escm"),(void*)f_1410},
{C_text("f_1415:port_2escm"),(void*)f_1415},
{C_text("f_1421:port_2escm"),(void*)f_1421},
{C_text("f_1426:port_2escm"),(void*)f_1426},
{C_text("f_1435:port_2escm"),(void*)f_1435},
{C_text("f_1440:port_2escm"),(void*)f_1440},
{C_text("f_1446:port_2escm"),(void*)f_1446},
{C_text("f_1451:port_2escm"),(void*)f_1451},
{C_text("f_1460:port_2escm"),(void*)f_1460},
{C_text("f_1465:port_2escm"),(void*)f_1465},
{C_text("f_1471:port_2escm"),(void*)f_1471},
{C_text("f_1476:port_2escm"),(void*)f_1476},
{C_text("f_1480:port_2escm"),(void*)f_1480},
{C_text("f_1485:port_2escm"),(void*)f_1485},
{C_text("f_1489:port_2escm"),(void*)f_1489},
{C_text("f_1492:port_2escm"),(void*)f_1492},
{C_text("f_1497:port_2escm"),(void*)f_1497},
{C_text("f_1501:port_2escm"),(void*)f_1501},
{C_text("f_1506:port_2escm"),(void*)f_1506},
{C_text("f_1511:port_2escm"),(void*)f_1511},
{C_text("f_1517:port_2escm"),(void*)f_1517},
{C_text("f_1522:port_2escm"),(void*)f_1522},
{C_text("f_1526:port_2escm"),(void*)f_1526},
{C_text("f_1531:port_2escm"),(void*)f_1531},
{C_text("f_1536:port_2escm"),(void*)f_1536},
{C_text("f_1540:port_2escm"),(void*)f_1540},
{C_text("f_1545:port_2escm"),(void*)f_1545},
{C_text("f_1550:port_2escm"),(void*)f_1550},
{C_text("f_1554:port_2escm"),(void*)f_1554},
{C_text("f_1559:port_2escm"),(void*)f_1559},
{C_text("f_1564:port_2escm"),(void*)f_1564},
{C_text("f_1568:port_2escm"),(void*)f_1568},
{C_text("f_1573:port_2escm"),(void*)f_1573},
{C_text("f_1578:port_2escm"),(void*)f_1578},
{C_text("f_1612:port_2escm"),(void*)f_1612},
{C_text("f_1615:port_2escm"),(void*)f_1615},
{C_text("f_1617:port_2escm"),(void*)f_1617},
{C_text("f_1638:port_2escm"),(void*)f_1638},
{C_text("f_1654:port_2escm"),(void*)f_1654},
{C_text("f_1659:port_2escm"),(void*)f_1659},
{C_text("f_1665:port_2escm"),(void*)f_1665},
{C_text("f_1719:port_2escm"),(void*)f_1719},
{C_text("f_1732:port_2escm"),(void*)f_1732},
{C_text("f_1735:port_2escm"),(void*)f_1735},
{C_text("f_1737:port_2escm"),(void*)f_1737},
{C_text("f_1747:port_2escm"),(void*)f_1747},
{C_text("f_1753:port_2escm"),(void*)f_1753},
{C_text("f_1759:port_2escm"),(void*)f_1759},
{C_text("f_1774:port_2escm"),(void*)f_1774},
{C_text("f_1781:port_2escm"),(void*)f_1781},
{C_text("f_1784:port_2escm"),(void*)f_1784},
{C_text("f_1790:port_2escm"),(void*)f_1790},
{C_text("f_1796:port_2escm"),(void*)f_1796},
{C_text("f_1802:port_2escm"),(void*)f_1802},
{C_text("f_1808:port_2escm"),(void*)f_1808},
{C_text("f_1814:port_2escm"),(void*)f_1814},
{C_text("f_1839:port_2escm"),(void*)f_1839},
{C_text("f_1845:port_2escm"),(void*)f_1845},
{C_text("f_1851:port_2escm"),(void*)f_1851},
{C_text("f_1857:port_2escm"),(void*)f_1857},
{C_text("f_1863:port_2escm"),(void*)f_1863},
{C_text("f_1879:port_2escm"),(void*)f_1879},
{C_text("f_1883:port_2escm"),(void*)f_1883},
{C_text("f_1890:port_2escm"),(void*)f_1890},
{C_text("f_1894:port_2escm"),(void*)f_1894},
{C_text("f_1896:port_2escm"),(void*)f_1896},
{C_text("f_1902:port_2escm"),(void*)f_1902},
{C_text("f_1914:port_2escm"),(void*)f_1914},
{C_text("f_1945:port_2escm"),(void*)f_1945},
{C_text("f_1949:port_2escm"),(void*)f_1949},
{C_text("f_1952:port_2escm"),(void*)f_1952},
{C_text("f_1975:port_2escm"),(void*)f_1975},
{C_text("f_1979:port_2escm"),(void*)f_1979},
{C_text("f_2000:port_2escm"),(void*)f_2000},
{C_text("f_2004:port_2escm"),(void*)f_2004},
{C_text("f_727:port_2escm"),(void*)f_727},
{C_text("f_730:port_2escm"),(void*)f_730},
{C_text("f_732:port_2escm"),(void*)f_732},
{C_text("f_739:port_2escm"),(void*)f_739},
{C_text("f_750:port_2escm"),(void*)f_750},
{C_text("f_754:port_2escm"),(void*)f_754},
{C_text("f_762:port_2escm"),(void*)f_762},
{C_text("f_769:port_2escm"),(void*)f_769},
{C_text("f_794:port_2escm"),(void*)f_794},
{C_text("f_798:port_2escm"),(void*)f_798},
{C_text("f_801:port_2escm"),(void*)f_801},
{C_text("f_804:port_2escm"),(void*)f_804},
{C_text("f_807:port_2escm"),(void*)f_807},
{C_text("f_813:port_2escm"),(void*)f_813},
{C_text("f_870:port_2escm"),(void*)f_870},
{C_text("f_876:port_2escm"),(void*)f_876},
{C_text("f_880:port_2escm"),(void*)f_880},
{C_text("f_889:port_2escm"),(void*)f_889},
{C_text("f_894:port_2escm"),(void*)f_894},
{C_text("f_900:port_2escm"),(void*)f_900},
{C_text("f_904:port_2escm"),(void*)f_904},
{C_text("f_924:port_2escm"),(void*)f_924},
{C_text("f_926:port_2escm"),(void*)f_926},
{C_text("f_932:port_2escm"),(void*)f_932},
{C_text("f_936:port_2escm"),(void*)f_936},
{C_text("f_949:port_2escm"),(void*)f_949},
{C_text("f_956:port_2escm"),(void*)f_956},
{C_text("f_961:port_2escm"),(void*)f_961},
{C_text("f_965:port_2escm"),(void*)f_965},
{C_text("f_974:port_2escm"),(void*)f_974},
{C_text("f_986:port_2escm"),(void*)f_986},
{C_text("f_996:port_2escm"),(void*)f_996},
{C_text("toplevel:port_2escm"),(void*)C_port_toplevel},
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
o|hiding unexported module binding: chicken.port#d 
o|hiding unexported module binding: chicken.port#define-alias 
o|hiding unexported module binding: chicken.port#posix-error 
o|hiding unexported module binding: chicken.port#check-terminal! 
S|applied compiler syntax:
S|  for-each		2
o|eliminated procedure checks: 32 
o|specializations:
o|  2 (##sys#check-open-port * *)
o|  2 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  2 (##sys#check-list (or pair list) *)
o|  2 (scheme#make-string fixnum)
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  1 (scheme#car pair)
(o e)|safe calls: 161 
(o e)|assignments to immediate values: 1 
o|safe globals: (chicken.port#terminal-size chicken.port#terminal-name chicken.port#check-terminal! chicken.port#terminal-port? chicken.port#posix-error chicken.port#make-bidirectional-port chicken.port#make-output-port chicken.port#make-input-port chicken.port#with-error-output-to-string chicken.port#with-output-to-string chicken.port#with-input-from-string chicken.port#call-with-output-string chicken.port#call-with-input-string chicken.port#with-error-output-to-port chicken.port#with-output-to-port chicken.port#with-input-from-port chicken.port#make-concatenated-port chicken.port#make-broadcast-port chicken.port#copy-port chicken.port#port-fold chicken.port#port-map chicken.port#port-for-each chicken.port#set-buffering-mode! chicken.port#port-position chicken.port#set-port-name! chicken.port#port-name) 
o|inlining procedure: k770 
o|inlining procedure: k770 
o|inlining procedure: k808 
o|inlining procedure: k808 
o|inlining procedure: k818 
o|contracted procedure: "(port.scm:143) g136137" 
o|inlining procedure: k818 
o|inlining procedure: k844 
o|inlining procedure: k844 
o|substituted constant variable: a860 
o|substituted constant variable: a862 
o|substituted constant variable: a864 
o|inlining procedure: k881 
o|inlining procedure: k881 
o|inlining procedure: k905 
o|inlining procedure: k905 
o|inlining procedure: k937 
o|inlining procedure: k937 
o|inlining procedure: k1105 
o|contracted procedure: "(port.scm:213) read-buf173" 
o|inlining procedure: k966 
o|inlining procedure: k966 
o|substituted constant variable: a978 
o|contracted procedure: "(port.scm:217) write-buf174" 
o|inlining procedure: k988 
o|inlining procedure: k988 
o|inlining procedure: k1105 
o|contracted procedure: "(port.scm:219) read-and-write-buf176" 
o|inlining procedure: k1054 
o|inlining procedure: k1054 
o|substituted constant variable: a1090 
o|contracted procedure: "(port.scm:221) read-and-write175" 
o|inlining procedure: k1024 
o|inlining procedure: k1024 
o|propagated global variable: g265266 chicken.io#write-string 
o|inlining procedure: k1199 
o|inlining procedure: k1199 
o|inlining procedure: k1228 
o|inlining procedure: k1228 
o|inlining procedure: k1266 
o|inlining procedure: k1266 
o|inlining procedure: k1295 
o|inlining procedure: k1295 
o|inlining procedure: k1321 
o|inlining procedure: k1321 
o|inlining procedure: k1356 
o|inlining procedure: k1356 
o|substituted constant variable: a1404 
o|substituted constant variable: a1405 
o|substituted constant variable: a1429 
o|substituted constant variable: a1430 
o|substituted constant variable: a1454 
o|substituted constant variable: a1455 
o|inlining procedure: k1622 
o|inlining procedure: k1622 
o|inlining procedure: k1643 
o|inlining procedure: k1643 
o|inlining procedure: k1761 
o|inlining procedure: k1761 
o|inlining procedure: k1816 
o|inlining procedure: k1816 
o|substituted constant variable: a1835 
o|substituted constant variable: a1837 
o|merged explicitly consed rest parameter: args519 
o|contracted procedure: "(port.scm:414) strerror509" 
o|substituted constant variable: a1899 
o|inlining procedure: k1903 
o|inlining procedure: k1903 
o|inlining procedure: k1918 
o|inlining procedure: k1918 
o|inlining procedure: k1953 
o|inlining procedure: k1953 
o|consed rest parameter at call site: "(port.scm:433) chicken.port#posix-error" 4 
o|contracted procedure: "(port.scm:432) ttyname532" 
o|inlining procedure: k1980 
o|inlining procedure: k1980 
o|consed rest parameter at call site: "(port.scm:448) chicken.port#posix-error" 4 
o|contracted procedure: "(port.scm:444) ttysize544" 
o|replaced variables: 165 
o|removed binding forms: 110 
o|substituted constant variable: r8192011 
o|substituted constant variable: r8192011 
o|substituted constant variable: r12672035 
o|substituted constant variable: r12962038 
o|substituted constant variable: r13222039 
o|substituted constant variable: r19042052 
o|replaced variables: 3 
o|removed binding forms: 199 
o|replaced variables: 2 
o|removed binding forms: 9 
o|removed binding forms: 2 
o|simplifications: ((if . 17) (##core#call . 119)) 
o|  call simplifications:
o|    ##sys#foreign-pointer-argument	2
o|    chicken.fixnum#fx=
o|    scheme#values
o|    scheme#apply
o|    scheme#write-char
o|    scheme#string
o|    ##sys#setislot
o|    scheme#vector	6
o|    chicken.fixnum#fx<=
o|    chicken.fixnum#fx-
o|    scheme#not	2
o|    scheme#read-char	2
o|    scheme#cdr	9
o|    scheme#char->integer
o|    ##sys#setbyte
o|    chicken.fixnum#fx>=	3
o|    ##sys#byte
o|    scheme#integer->char
o|    chicken.fixnum#fx+	4
o|    scheme#cons	2
o|    scheme#eof-object?	7
o|    scheme#pair?	3
o|    scheme#eq?	12
o|    ##sys#foreign-fixnum-argument	5
o|    chicken.fixnum#fx<	3
o|    ##sys#values
o|    ##sys#check-string
o|    ##sys#setslot	2
o|    scheme#null?	19
o|    scheme#car	13
o|    ##sys#slot	11
o|contracted procedure: k743 
o|contracted procedure: k734 
o|contracted procedure: k755 
o|contracted procedure: k787 
o|contracted procedure: k764 
o|contracted procedure: k777 
o|contracted procedure: k781 
o|contracted procedure: k838 
o|contracted procedure: k821 
o|contracted procedure: k827 
o|contracted procedure: k831 
o|contracted procedure: k841 
o|contracted procedure: k847 
o|contracted procedure: k853 
o|contracted procedure: k865 
o|contracted procedure: k884 
o|contracted procedure: k908 
o|contracted procedure: k918 
o|contracted procedure: k940 
o|contracted procedure: k1173 
o|contracted procedure: k1093 
o|contracted procedure: k1167 
o|contracted procedure: k1096 
o|contracted procedure: k1161 
o|contracted procedure: k1099 
o|contracted procedure: k1155 
o|contracted procedure: k1102 
o|contracted procedure: k1108 
o|contracted procedure: k1118 
o|contracted procedure: k1115 
o|contracted procedure: k991 
o|contracted procedure: k1001 
o|contracted procedure: k1009 
o|contracted procedure: k1005 
o|contracted procedure: k969 
o|contracted procedure: k1134 
o|contracted procedure: k1057 
o|contracted procedure: k1063 
o|contracted procedure: k1080 
o|contracted procedure: k1069 
o|contracted procedure: k1076 
o|contracted procedure: k1083 
o|contracted procedure: k1027 
o|contracted procedure: k1202 
o|contracted procedure: k1212 
o|contracted procedure: k1216 
o|contracted procedure: k1231 
o|contracted procedure: k1241 
o|contracted procedure: k1245 
o|contracted procedure: k1251 
o|contracted procedure: k1269 
o|contracted procedure: k1278 
o|contracted procedure: k1282 
o|contracted procedure: k1289 
o|contracted procedure: k1309 
o|contracted procedure: k1298 
o|contracted procedure: k1305 
o|contracted procedure: k1324 
o|contracted procedure: k1333 
o|contracted procedure: k1337 
o|contracted procedure: k1344 
o|contracted procedure: k1359 
o|contracted procedure: k1365 
o|contracted procedure: k1378 
o|contracted procedure: k1382 
o|contracted procedure: k1385 
o|contracted procedure: k1389 
o|contracted procedure: k1393 
o|contracted procedure: k1397 
o|contracted procedure: k1712 
o|contracted procedure: k1580 
o|contracted procedure: k1706 
o|contracted procedure: k1583 
o|contracted procedure: k1700 
o|contracted procedure: k1586 
o|contracted procedure: k1694 
o|contracted procedure: k1589 
o|contracted procedure: k1688 
o|contracted procedure: k1592 
o|contracted procedure: k1682 
o|contracted procedure: k1595 
o|contracted procedure: k1676 
o|contracted procedure: k1598 
o|contracted procedure: k1670 
o|contracted procedure: k1601 
o|contracted procedure: k1619 
o|contracted procedure: k1631 
o|contracted procedure: k1640 
o|contracted procedure: k1655 
o|contracted procedure: k1604 
o|contracted procedure: k1607 
o|contracted procedure: k1767 
o|contracted procedure: k1721 
o|contracted procedure: k1743 
o|contracted procedure: k1724 
o|contracted procedure: k1727 
o|contracted procedure: k1819 
o|contracted procedure: k1828 
o|contracted procedure: k1776 
o|contracted procedure: k1786 
o|contracted procedure: k1876 
o|contracted procedure: k1910 
o|contracted procedure: k1906 
o|contracted procedure: k1931 
o|contracted procedure: k1927 
o|contracted procedure: k1921 
o|contracted procedure: k1942 
o|contracted procedure: k1983 
o|contracted procedure: k1964 
o|contracted procedure: k1968 
o|contracted procedure: k1972 
o|simplifications: ((let . 21)) 
o|removed binding forms: 111 
o|replaced variables: 69 
o|inlining procedure: k818 
o|removed binding forms: 38 
o|contracted procedure: k1993 
o|removed binding forms: 2 
o|customizable procedures: (chicken.port#check-terminal! chicken.port#posix-error k1371 loop314 loop302 loop293 for-each-loop274284 g250257 for-each-loop249267 loop195 k1048 loop203 loop180 doloop188189 loop166 loop158 loop151 k799 k811) 
o|calls to known targets: 40 
o|fast box initializations: 12 
o|fast global references: 4 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1879 
o|dropping unused closure argument: f_1914 
*/
/* end of file */

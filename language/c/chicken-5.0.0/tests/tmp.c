/* Generated from ../port.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: -ignore-repository ../port.scm -:s500000 -output-file tmp.c -include-path /home/jordan/Downloads/chicken-5.0.0/tests/..
   unit: port
   uses: library eval expand extras
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
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[97];
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
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,14),40,102,95,49,48,48,51,32,98,117,102,32,110,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,57,50,32,105,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,14),40,102,95,49,48,48,56,32,98,117,102,32,110,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,7),40,97,49,48,50,53,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,9),40,97,49,48,51,49,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,111,112,121,45,112,111,114,116,32,115,114,99,32,100,101,115,116,32,46,32,114,101,115,116,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,11),40,103,50,53,52,32,103,50,54,54,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,51,32,103,50,54,48,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,9),40,97,49,48,54,55,32,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,56,32,103,50,56,53,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,49,49,48,52,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,98,114,111,97,100,99,97,115,116,45,112,111,114,116,32,46,32,112,111,114,116,115,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,49,49,52,53,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,49,49,56,48,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,49,50,48,48,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,110,32,99,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,22),40,97,49,50,51,53,32,112,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,99,111,110,99,97,116,101,110,97,116,101,100,45,112,111,114,116,32,112,49,32,46,32,112,111,114,116,115,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,7),40,97,49,50,57,55,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,49,51,48,50,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,49,51,48,56,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,51,50,50,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,49,51,50,55,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,49,51,51,51,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,7),40,97,49,51,52,55,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,49,51,53,50,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,51,53,56,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,115,116,114,105,110,103,32,115,116,114,32,112,114,111,99,41,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,115,116,114,105,110,103,32,112,114,111,99,41,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,51,57,51,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,49,51,57,56,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,49,52,48,52,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,115,116,114,105,110,103,32,115,116,114,32,116,104,117,110,107,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,49,52,49,56,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,49,52,50,51,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,49,52,51,50,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,49,52,52,54,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,7),40,97,49,52,53,49,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,97,49,52,54,48,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,9),40,97,49,53,48,52,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,9),40,97,49,53,50,53,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,11),40,97,49,53,52,54,32,112,32,100,41,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,9),40,97,49,53,53,50,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,105,110,112,117,116,45,112,111,114,116,32,114,101,97,100,32,114,101,97,100,121,63,32,99,108,111,115,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,97,49,54,50,52,32,112,32,99,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,11),40,97,49,54,51,52,32,112,32,115,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,11),40,97,49,54,52,48,32,112,32,100,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,9),40,97,49,54,52,54,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,111,117,116,112,117,116,45,112,111,114,116,32,119,114,105,116,101,32,99,108,111,115,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,9),40,97,49,54,55,55,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,9),40,97,49,54,56,51,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,11),40,97,49,54,56,57,32,95,32,99,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,11),40,97,49,54,57,53,32,95,32,115,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,97,49,55,48,49,32,95,32,100,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,9),40,97,49,55,50,50,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,9),40,97,49,55,50,56,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,15),40,97,49,55,51,52,32,95,32,110,32,100,32,115,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,11),40,97,49,55,52,48,32,95,32,108,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,49,55,52,54,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,98,105,100,105,114,101,99,116,105,111,110,97,108,45,112,111,114,116,32,105,32,111,41,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,104,101,99,107,45,116,101,114,109,105,110,97,108,33,32,99,97,108,108,101,114,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,110,97,109,101,32,112,111,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k1858 */
C_regparm static C_word C_fcall stub552(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_nn(C_a1);
int *t2=(int *)C_c_pointer_nn(C_a2);
C_r=C_fix((C_word)get_tty_size(t0,t1,t2));
return C_r;}

/* from k1828 */
C_regparm static C_word C_fcall stub538(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k1760 */
C_regparm static C_word C_fcall stub516(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub145(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word p=(C_word )(C_a0);
int m=(int )C_unfix(C_a1);
int s=(int )C_unfix(C_a2);
C_return(setvbuf(C_port_file(p), NULL, m, s));
C_ret:
#undef return

return C_r;}

C_noret_decl(f_1003)
static void C_ccall f_1003(C_word c,C_word *av) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word *av) C_noret;
C_noret_decl(f_1026)
static void C_ccall f_1026(C_word c,C_word *av) C_noret;
C_noret_decl(f_1032)
static void C_ccall f_1032(C_word c,C_word *av) C_noret;
C_noret_decl(f_1062)
static void C_ccall f_1062(C_word c,C_word *av) C_noret;
C_noret_decl(f_1068)
static void C_ccall f_1068(C_word c,C_word *av) C_noret;
C_noret_decl(f_1070)
static void C_fcall f_1070(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1082)
static void C_fcall f_1082(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1092)
static void C_ccall f_1092(C_word c,C_word *av) C_noret;
C_noret_decl(f_1105)
static void C_ccall f_1105(C_word c,C_word *av) C_noret;
C_noret_decl(f_1114)
static void C_fcall f_1114(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1124)
static void C_ccall f_1124(C_word c,C_word *av) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word *av) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word *av) C_noret;
C_noret_decl(f_1152)
static void C_fcall f_1152(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word *av) C_noret;
C_noret_decl(f_1181)
static void C_ccall f_1181(C_word c,C_word *av) C_noret;
C_noret_decl(f_1201)
static void C_ccall f_1201(C_word c,C_word *av) C_noret;
C_noret_decl(f_1207)
static void C_fcall f_1207(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1217)
static void C_ccall f_1217(C_word c,C_word *av) C_noret;
C_noret_decl(f_1236)
static void C_ccall f_1236(C_word c,C_word *av) C_noret;
C_noret_decl(f_1242)
static void C_fcall f_1242(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word *av) C_noret;
C_noret_decl(f_1261)
static void C_fcall f_1261(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word *av) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word *av) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word *av) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word *av) C_noret;
C_noret_decl(f_1309)
static void C_ccall f_1309(C_word c,C_word *av) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word *av) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word *av) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word *av) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word *av) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word *av) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word *av) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343(C_word c,C_word *av) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word *av) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word *av) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word *av) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word *av) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word *av) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373(C_word c,C_word *av) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word *av) C_noret;
C_noret_decl(f_1380)
static void C_ccall f_1380(C_word c,C_word *av) C_noret;
C_noret_decl(f_1385)
static void C_ccall f_1385(C_word c,C_word *av) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word *av) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word *av) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word *av) C_noret;
C_noret_decl(f_1405)
static void C_ccall f_1405(C_word c,C_word *av) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word *av) C_noret;
C_noret_decl(f_1414)
static void C_ccall f_1414(C_word c,C_word *av) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word *av) C_noret;
C_noret_decl(f_1424)
static void C_ccall f_1424(C_word c,C_word *av) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word *av) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word *av) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word *av) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word *av) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word *av) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word *av) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word *av) C_noret;
C_noret_decl(f_1461)
static void C_ccall f_1461(C_word c,C_word *av) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word *av) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word *av) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word *av) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word *av) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word *av) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word *av) C_noret;
C_noret_decl(f_1547)
static void C_ccall f_1547(C_word c,C_word *av) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word *av) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word *av) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word *av) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word *av) C_noret;
C_noret_decl(f_1625)
static void C_ccall f_1625(C_word c,C_word *av) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word *av) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word *av) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word *av) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word *av) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word *av) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word *av) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word *av) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word *av) C_noret;
C_noret_decl(f_1690)
static void C_ccall f_1690(C_word c,C_word *av) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word *av) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word *av) C_noret;
C_noret_decl(f_1723)
static void C_ccall f_1723(C_word c,C_word *av) C_noret;
C_noret_decl(f_1729)
static void C_ccall f_1729(C_word c,C_word *av) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word *av) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word *av) C_noret;
C_noret_decl(f_1747)
static void C_ccall f_1747(C_word c,C_word *av) C_noret;
C_noret_decl(f_1763)
static void C_fcall f_1763(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word *av) C_noret;
C_noret_decl(f_1774)
static void C_ccall f_1774(C_word c,C_word *av) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778(C_word c,C_word *av) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word *av) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word *av) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word *av) C_noret;
C_noret_decl(f_1799)
static void C_fcall f_1799(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word *av) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word *av) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word *av) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word *av) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word *av) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word *av) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word *av) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word *av) C_noret;
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word *av) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word *av) C_noret;
C_noret_decl(f_612)
static void C_ccall f_612(C_word c,C_word *av) C_noret;
C_noret_decl(f_615)
static void C_ccall f_615(C_word c,C_word *av) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word *av) C_noret;
C_noret_decl(f_620)
static void C_ccall f_620(C_word c,C_word *av) C_noret;
C_noret_decl(f_627)
static void C_ccall f_627(C_word c,C_word *av) C_noret;
C_noret_decl(f_638)
static void C_ccall f_638(C_word c,C_word *av) C_noret;
C_noret_decl(f_642)
static void C_ccall f_642(C_word c,C_word *av) C_noret;
C_noret_decl(f_650)
static void C_ccall f_650(C_word c,C_word *av) C_noret;
C_noret_decl(f_657)
static void C_ccall f_657(C_word c,C_word *av) C_noret;
C_noret_decl(f_682)
static void C_ccall f_682(C_word c,C_word *av) C_noret;
C_noret_decl(f_686)
static void C_ccall f_686(C_word c,C_word *av) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692(C_word c,C_word *av) C_noret;
C_noret_decl(f_695)
static void C_ccall f_695(C_word c,C_word *av) C_noret;
C_noret_decl(f_708)
static void C_fcall f_708(C_word t0,C_word t1) C_noret;
C_noret_decl(f_754)
static void C_ccall f_754(C_word c,C_word *av) C_noret;
C_noret_decl(f_760)
static void C_fcall f_760(C_word t0,C_word t1) C_noret;
C_noret_decl(f_764)
static void C_ccall f_764(C_word c,C_word *av) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word *av) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word *av) C_noret;
C_noret_decl(f_784)
static void C_fcall f_784(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_788)
static void C_ccall f_788(C_word c,C_word *av) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word *av) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word *av) C_noret;
C_noret_decl(f_816)
static void C_fcall f_816(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word *av) C_noret;
C_noret_decl(f_833)
static void C_ccall f_833(C_word c,C_word *av) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word *av) C_noret;
C_noret_decl(f_845)
static void C_fcall f_845(C_word t0,C_word t1) C_noret;
C_noret_decl(f_849)
static void C_ccall f_849(C_word c,C_word *av) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word *av) C_noret;
C_noret_decl(f_869)
static void C_fcall f_869(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_879)
static void C_ccall f_879(C_word c,C_word *av) C_noret;
C_noret_decl(f_902)
static void C_fcall f_902(C_word t0,C_word t1) C_noret;
C_noret_decl(f_906)
static void C_ccall f_906(C_word c,C_word *av) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word *av) C_noret;
C_noret_decl(f_924)
static void C_ccall f_924(C_word c,C_word *av) C_noret;
C_noret_decl(f_929)
static void C_fcall f_929(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_933)
static void C_fcall f_933(C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word *av) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word *av) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externexport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1070)
static void C_ccall trf_1070(C_word c,C_word *av) C_noret;
static void C_ccall trf_1070(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1070(t0,t1,t2);}

C_noret_decl(trf_1082)
static void C_ccall trf_1082(C_word c,C_word *av) C_noret;
static void C_ccall trf_1082(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1082(t0,t1,t2);}

C_noret_decl(trf_1114)
static void C_ccall trf_1114(C_word c,C_word *av) C_noret;
static void C_ccall trf_1114(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1114(t0,t1,t2);}

C_noret_decl(trf_1152)
static void C_ccall trf_1152(C_word c,C_word *av) C_noret;
static void C_ccall trf_1152(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1152(t0,t1);}

C_noret_decl(trf_1207)
static void C_ccall trf_1207(C_word c,C_word *av) C_noret;
static void C_ccall trf_1207(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1207(t0,t1);}

C_noret_decl(trf_1242)
static void C_ccall trf_1242(C_word c,C_word *av) C_noret;
static void C_ccall trf_1242(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1242(t0,t1,t2,t3);}

C_noret_decl(trf_1261)
static void C_ccall trf_1261(C_word c,C_word *av) C_noret;
static void C_ccall trf_1261(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1261(t0,t1);}

C_noret_decl(trf_1763)
static void C_ccall trf_1763(C_word c,C_word *av) C_noret;
static void C_ccall trf_1763(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1763(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1799)
static void C_ccall trf_1799(C_word c,C_word *av) C_noret;
static void C_ccall trf_1799(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1799(t0,t1,t2);}

C_noret_decl(trf_708)
static void C_ccall trf_708(C_word c,C_word *av) C_noret;
static void C_ccall trf_708(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_708(t0,t1);}

C_noret_decl(trf_760)
static void C_ccall trf_760(C_word c,C_word *av) C_noret;
static void C_ccall trf_760(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_760(t0,t1);}

C_noret_decl(trf_784)
static void C_ccall trf_784(C_word c,C_word *av) C_noret;
static void C_ccall trf_784(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_784(t0,t1,t2);}

C_noret_decl(trf_816)
static void C_ccall trf_816(C_word c,C_word *av) C_noret;
static void C_ccall trf_816(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_816(t0,t1,t2);}

C_noret_decl(trf_845)
static void C_ccall trf_845(C_word c,C_word *av) C_noret;
static void C_ccall trf_845(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_845(t0,t1);}

C_noret_decl(trf_869)
static void C_ccall trf_869(C_word c,C_word *av) C_noret;
static void C_ccall trf_869(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_869(t0,t1,t2);}

C_noret_decl(trf_902)
static void C_ccall trf_902(C_word c,C_word *av) C_noret;
static void C_ccall trf_902(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_902(t0,t1);}

C_noret_decl(trf_929)
static void C_ccall trf_929(C_word c,C_word *av) C_noret;
static void C_ccall trf_929(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_929(t0,t1,t2);}

C_noret_decl(trf_933)
static void C_ccall trf_933(C_word c,C_word *av) C_noret;
static void C_ccall trf_933(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_933(t0,t1);}

/* f_1003 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1003(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1003,4,av);}
C_trace(C_text("../port.scm:216: chicken.io#write-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}

/* f_1008 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1008(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1008,4,av);}
a=C_alloc(10);
t4=t2;
t5=t3;
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[3];
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_869,a[2]=t5,a[3]=t9,a[4]=t4,a[5]=t7,a[6]=t6,a[7]=((C_word)li11),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_869(t11,t1,C_fix(0));}

/* a1025 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1026,2,av);}
C_trace(C_text("../port.scm:222: read"));
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

/* a1031 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1032,3,av);}
C_trace(C_text("../port.scm:223: write"));
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

/* chicken.port#make-broadcast-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_1062,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+8);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1068,a[2]=t2,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1105,a[2]=t2,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:229: make-output-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t1;
av2[2]=t3;
av2[3]=*((C_word*)lf[35]+1);
av2[4]=t4;
tp(5,av2);}}

/* a1067 in chicken.port#make-broadcast-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1068(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1068,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1070,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
t5=C_i_check_list_2(t4,lf[32]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1082,a[2]=t7,a[3]=t3,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1082(t9,t1,t4);}

/* g254 in a1067 in chicken.port#make-broadcast-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_1070(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1070,3,t0,t1,t2);}
t3=*((C_word*)lf[28]+1);
C_trace(C_text("../port.scm:230: g269"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
tp(5,av2);}}

/* for-each-loop253 in a1067 in chicken.port#make-broadcast-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_1082(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1082,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1092,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace(C_text("../port.scm:230: g254"));
t5=((C_word*)t0)[3];
f_1070(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1090 in for-each-loop253 in a1067 in chicken.port#make-broadcast-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1092,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1082(t3,((C_word*)t0)[4],t2);}

/* a1104 in chicken.port#make-broadcast-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1105(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1105,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[32]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1114,a[2]=t5,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1114(t7,t1,t2);}

/* for-each-loop278 in a1104 in chicken.port#make-broadcast-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_1114(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1114,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1124,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace(C_text("../port.scm:232: g279"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1122 in for-each-loop278 in a1104 in chicken.port#make-broadcast-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1124,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1114(t3,((C_word*)t0)[4],t2);}

/* chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +21,c,6)))){
C_save_and_reclaim((void*)f_1137,c,av);}
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
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1146,a[2]=t6,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1181,a[2]=t6,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1201,a[2]=t6,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1236,a[2]=t6,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:237: make-input-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t1;
av2[2]=t7;
av2[3]=t8;
av2[4]=*((C_word*)lf[35]+1);
av2[5]=t9;
av2[6]=t10;
tp(7,av2);}}

/* a1145 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1146(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1146,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1152,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1152(t5,t1);}

/* loop in a1145 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_1152(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1152,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("read-char/port"));
t4=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1160 in loop in a1145 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1162,2,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
C_trace(C_text("../port.scm:245: loop"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1152(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a1180 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1181(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1181,2,av);}
t2=C_i_nullp(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_i_not(t2))){
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("../port.scm:249: scheme#char-ready?"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a1200 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1201(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1201,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1207,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1207(t5,t1);}

/* loop in a1200 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_1207(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1207,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("../port.scm:255: scheme#peek-char"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t2;
av2[2]=t3;
tp(3,av2);}}}

/* k1215 in loop in a1200 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1217,2,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
C_trace(C_text("../port.scm:258: loop"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1207(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a1235 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1236(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1236,6,av);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1242,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t5,a[5]=t4,a[6]=((C_word)li30),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_1242(t9,t1,t3,C_fix(0));}

/* loop in a1235 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_1242(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_1242,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1258,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t5=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t6=C_fixnum_plus(((C_word*)t0)[4],t3);
C_trace(C_text("../port.scm:265: chicken.io#read-string!"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
av2[4]=t5;
av2[5]=t6;
tp(6,av2);}}}}

/* k1256 in loop in a1235 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1258(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1258,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1261,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[2]))){
t4=C_i_cdr(((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t4);
t6=t3;
f_1261(t6,t5);}
else{
t4=t3;
f_1261(t4,C_SCHEME_UNDEFINED);}}

/* k1259 in k1256 in loop in a1235 in chicken.port#make-concatenated-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_1261(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1261,2,t0,t1);}
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[3]);
C_trace(C_text("../port.scm:268: loop"));
t4=((C_word*)((C_word*)t0)[5])[1];
f_1242(t4,((C_word*)t0)[6],t2,t3);}

/* chicken.port#with-input-from-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1289(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1289,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1293,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:274: ##sys#check-input-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[43]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[43]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[44];
tp(5,av2);}}

/* k1291 in chicken.port#with-input-from-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1293(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_1293,2,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1298,a[2]=t5,a[3]=t3,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1303,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1309,a[2]=t3,a[3]=t5,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:275: ##sys#dynamic-wind"));
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1297 in k1291 in chicken.port#with-input-from-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1298(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1298,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1302 in k1291 in chicken.port#with-input-from-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1303,2,av);}
C_trace(C_text("../port.scm:276: thunk"));
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1308 in k1291 in chicken.port#with-input-from-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1309(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1309,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-output-to-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1314(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1314,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1318,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:279: ##sys#check-output-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[47]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[47]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[48];
tp(5,av2);}}

/* k1316 in chicken.port#with-output-to-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1318(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_1318,2,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1323,a[2]=t5,a[3]=t3,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1328,a[2]=((C_word*)t0)[3],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1334,a[2]=t3,a[3]=t5,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:280: ##sys#dynamic-wind"));
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1322 in k1316 in chicken.port#with-output-to-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1323(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1323,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[46]+1));
t3=C_mutate((C_word*)lf[46]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1327 in k1316 in chicken.port#with-output-to-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1328,2,av);}
C_trace(C_text("../port.scm:281: thunk"));
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1333 in k1316 in chicken.port#with-output-to-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1334(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1334,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[46]+1));
t3=C_mutate((C_word*)lf[46]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-error-output-to-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1339(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1339,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1343,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:284: ##sys#check-output-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[47]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[47]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[51];
tp(5,av2);}}

/* k1341 in chicken.port#with-error-output-to-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1343(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_1343,2,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1348,a[2]=t5,a[3]=t3,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1353,a[2]=((C_word*)t0)[3],a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1359,a[2]=t3,a[3]=t5,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:285: ##sys#dynamic-wind"));
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1347 in k1341 in chicken.port#with-error-output-to-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1348(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1348,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[50]+1));
t3=C_mutate((C_word*)lf[50]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1352 in k1341 in chicken.port#with-error-output-to-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1353,2,av);}
C_trace(C_text("../port.scm:286: thunk"));
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1358 in k1341 in chicken.port#with-error-output-to-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1359(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1359,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[50]+1));
t3=C_mutate((C_word*)lf[50]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#call-with-input-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1364(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1364,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1368,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:292: chicken.base#open-input-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[53]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[53]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k1366 in chicken.port#call-with-input-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1368,2,av);}
C_trace(C_text("../port.scm:293: proc"));
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

/* chicken.port#call-with-output-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1373(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1373,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1377,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:297: chicken.base#open-output-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
tp(2,av2);}}

/* k1375 in chicken.port#call-with-output-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1377,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1380,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:298: proc"));
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

/* k1378 in k1375 in chicken.port#call-with-output-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1380,2,av);}
C_trace(C_text("../port.scm:299: chicken.base#get-output-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.port#with-input-from-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1385(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1385,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1389,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:303: chicken.base#open-input-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[53]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[53]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k1387 in chicken.port#with-input-from-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1389(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_1389,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1394,a[2]=t5,a[3]=t3,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1399,a[2]=((C_word*)t0)[2],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1405,a[2]=t3,a[3]=t5,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:303: ##sys#dynamic-wind"));
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

/* a1393 in k1387 in chicken.port#with-input-from-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1394(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1394,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1398 in k1387 in chicken.port#with-input-from-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1399,2,av);}
C_trace(C_text("../port.scm:304: thunk"));
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1404 in k1387 in chicken.port#with-input-from-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1405(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1405,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1410(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1410,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1414,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:308: chicken.base#open-output-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
tp(2,av2);}}

/* k1412 in chicken.port#with-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1414(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_1414,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1419,a[2]=t5,a[3]=t3,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1424,a[2]=((C_word*)t0)[2],a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1433,a[2]=t3,a[3]=t5,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:308: ##sys#dynamic-wind"));
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

/* a1418 in k1412 in chicken.port#with-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1419(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1419,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[46]+1));
t3=C_mutate((C_word*)lf[46]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1423 in k1412 in chicken.port#with-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1424,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1428,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("../port.scm:309: thunk"));
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1426 in a1423 in k1412 in chicken.port#with-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1428,2,av);}
C_trace(C_text("../port.scm:310: chicken.base#get-output-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[46]+1);
tp(3,av2);}}

/* a1432 in k1412 in chicken.port#with-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1433(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1433,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[46]+1));
t3=C_mutate((C_word*)lf[46]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-error-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1438(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1438,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1442,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:314: chicken.base#open-output-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
tp(2,av2);}}

/* k1440 in chicken.port#with-error-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1442(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_1442,2,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1447,a[2]=t5,a[3]=t3,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1452,a[2]=((C_word*)t0)[2],a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1461,a[2]=t3,a[3]=t5,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:314: ##sys#dynamic-wind"));
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

/* a1446 in k1440 in chicken.port#with-error-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1447(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1447,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[50]+1));
t3=C_mutate((C_word*)lf[50]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1451 in k1440 in chicken.port#with-error-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1452,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1456,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("../port.scm:315: thunk"));
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1454 in a1451 in k1440 in chicken.port#with-error-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1456,2,av);}
C_trace(C_text("../port.scm:316: chicken.base#get-output-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[50]+1);
tp(3,av2);}}

/* a1460 in k1440 in chicken.port#with-error-output-to-string in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1461(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1461,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[50]+1));
t3=C_mutate((C_word*)lf[50]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#make-input-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1466(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_1466,c,av);}
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
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1505,a[2]=t8,a[3]=t2,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp);
t24=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1526,a[2]=t8,a[3]=t2,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1547,a[2]=t4,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t26=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1553,a[2]=t3,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t27=C_a_i_vector(&a,10,t23,t24,C_SCHEME_FALSE,C_SCHEME_FALSE,t25,C_SCHEME_FALSE,t26,t12,t16,t20);
t28=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t29=t28;
t30=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1500,a[2]=t1,a[3]=t29,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:354: ##sys#make-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[61]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[61]+1);
av2[1]=t30;
av2[2]=C_fix(1);
av2[3]=t27;
av2[4]=lf[62];
av2[5]=lf[63];
tp(6,av2);}}

/* k1498 in chicken.port#make-input-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1500,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1503,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:355: ##sys#set-port-data!"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[60]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1501 in k1498 in chicken.port#make-input-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1503,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1504 in chicken.port#make-input-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1505(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1505,3,av);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
C_trace(C_text("../port.scm:330: read"));
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
C_trace(C_text("../port.scm:334: read"));
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}}

/* a1525 in chicken.port#make-input-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1526(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1526,3,av);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
C_trace(C_text("../port.scm:337: peek"));
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1542,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:340: read"));
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}}}

/* k1540 in a1525 in chicken.port#make-input-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1542,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a1546 in chicken.port#make-input-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1547(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1547,4,av);}
C_trace(C_text("../port.scm:346: close"));
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a1552 in chicken.port#make-input-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1553,3,av);}
C_trace(C_text("../port.scm:349: ready?"));
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* chicken.port#make-output-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1607(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_1607,c,av);}
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
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1625,a[2]=t2,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1635,a[2]=t2,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1641,a[2]=t3,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1647,a[2]=t7,a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t12=C_a_i_vector(&a,9,C_SCHEME_FALSE,C_SCHEME_FALSE,t8,t9,t10,t11,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t13=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1620,a[2]=t1,a[3]=t14,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:376: ##sys#make-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[61]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[61]+1);
av2[1]=t15;
av2[2]=C_fix(2);
av2[3]=t12;
av2[4]=lf[64];
av2[5]=lf[63];
tp(6,av2);}}

/* k1618 in chicken.port#make-output-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1620,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1623,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:377: ##sys#set-port-data!"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[60]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1621 in k1618 in chicken.port#make-output-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1623,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1624 in chicken.port#make-output-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1625(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1625,4,av);}
a=C_alloc(2);
t4=C_a_i_string(&a,1,t3);
C_trace(C_text("../port.scm:365: write"));
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* a1634 in chicken.port#make-output-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1635(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1635,4,av);}
C_trace(C_text("../port.scm:367: write"));
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1640 in chicken.port#make-output-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1641(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1641,4,av);}
C_trace(C_text("../port.scm:369: close"));
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a1646 in chicken.port#make-output-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1647,3,av);}
if(C_truep(((C_word*)t0)[2])){
C_trace(C_text("../port.scm:371: flush"));
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1662(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1662,4,av);}
a=C_alloc(55);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1678,a[2]=t2,a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1684,a[2]=t2,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1690,a[2]=t3,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1696,a[2]=t3,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1702,a[2]=t2,a[3]=t3,a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1723,a[2]=t3,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1729,a[2]=t2,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1735,a[2]=t2,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1741,a[2]=t2,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1747,a[2]=t2,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp);
t14=C_a_i_vector(&a,10,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1669,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("../port.scm:404: ##sys#make-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[61]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[61]+1);
av2[1]=t15;
av2[2]=C_fix(3);
av2[3]=t14;
av2[4]=lf[71];
av2[5]=lf[72];
tp(6,av2);}}

/* k1667 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1669(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1669,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1672,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
C_trace(C_text("../port.scm:405: ##sys#set-port-data!"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[60]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k1670 in k1667 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1672,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1677 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1678,3,av);}
C_trace(C_text("read-char/port"));
t3=*((C_word*)lf[37]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1683 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1684,3,av);}
C_trace(C_text("../port.scm:385: scheme#peek-char"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* a1689 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1690(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1690,4,av);}
C_trace(C_text("write-char/port"));
t4=*((C_word*)lf[66]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a1695 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1696(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1696,4,av);}
C_trace(C_text("../port.scm:389: chicken.io#write-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t1;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}

/* a1701 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1702(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1702,4,av);}
switch(t3){
case C_fix(1):
C_trace(C_text("../port.scm:392: scheme#close-input-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}
case C_fix(2):
C_trace(C_text("../port.scm:393: scheme#close-output-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}
default:
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a1722 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1723,3,av);}
C_trace(C_text("../port.scm:395: chicken.base#flush-output"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* a1728 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1729,3,av);}
C_trace(C_text("../port.scm:397: scheme#char-ready?"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* a1734 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1735(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1735,6,av);}
C_trace(C_text("../port.scm:399: chicken.io#read-string!"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
tp(6,av2);}}

/* a1740 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1741(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1741,4,av);}
C_trace(C_text("../port.scm:401: chicken.io#read-line"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
tp(4,av2);}}

/* a1746 in chicken.port#make-bidirectional-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1747,2,av);}
C_trace(C_text("../port.scm:403: chicken.io#read-buffered"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* chicken.port#posix-error in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_1763(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1763,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1767,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("../port.scm:413: ##sys#update-errno"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[78]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[78]+1);
av2[1]=t6;
tp(2,av2);}}

/* k1765 in chicken.port#posix-error in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1767(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1767,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1778,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub516(t4,t5);
C_trace(C_text("../port.scm:410: ##sys#peek-c-string"));
t7=*((C_word*)lf[77]+1);{
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

/* k1772 in k1765 in chicken.port#posix-error in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1774,2,av);}{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[74]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
av2[6]=((C_word*)t0)[5];
C_apply(7,av2);}}

/* k1776 in k1765 in chicken.port#posix-error in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1778,2,av);}
C_trace(C_text("../port.scm:414: string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[76];
av2[4]=t1;
tp(5,av2);}}

/* chicken.port#terminal-port? in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1780(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1780,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1784,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:418: ##sys#check-open-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[81]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[82];
tp(4,av2);}}

/* k1782 in chicken.port#terminal-port? in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1784,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:419: ##sys#peek-unsigned-integer"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[80]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[80]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
tp(4,av2);}}

/* k1785 in k1782 in chicken.port#terminal-port? in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1787,2,av);}
t2=C_eqp(C_fix(0),t1);
t3=C_i_not(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_tty_portp(((C_word*)t0)[3]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#check-terminal! in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_1799(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1799,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1803,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:423: ##sys#check-open-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[81]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=t2;
tp(4,av2);}}

/* k1801 in chicken.port#check-terminal! in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1803(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1803,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(lf[15],t2);
t4=(C_truep(t3)?C_tty_portp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
C_trace(C_text("../port.scm:426: ##sys#error"));
t5=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[84];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* chicken.port#terminal-name in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1831(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1831,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1835,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:431: check-terminal!"));
f_1799(t3,lf[87],t2);}

/* k1833 in chicken.port#terminal-name in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1835(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1835,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_port_fileno(((C_word*)t0)[3]);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
t6=stub538(t4,t5);
C_trace(C_text("../port.scm:429: ##sys#peek-c-string"));
t7=*((C_word*)lf[77]+1);{
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

/* k1836 in k1833 in chicken.port#terminal-name in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1838,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("../port.scm:433: posix-error"));
f_1763(((C_word*)t0)[2],lf[86],lf[87],lf[88],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* chicken.port#terminal-size in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1861(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1861,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1865,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:441: check-terminal!"));
f_1799(t3,lf[90],t2);}

/* k1863 in chicken.port#terminal-size in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1865(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1865,2,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=C_port_fileno(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1886,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("../port.scm:445: ##sys#make-locative"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[92]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[93];
tp(6,av2);}}

/* k1884 in k1863 in chicken.port#terminal-size in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1886,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("../port.scm:446: ##sys#make-locative"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[92]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[93];
tp(6,av2);}}

/* k1888 in k1884 in k1863 in chicken.port#terminal-size in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_1890(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1890,2,av);}
a=C_alloc(3);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=C_i_foreign_pointer_argumentp(((C_word*)t0)[3]);
t4=C_i_foreign_pointer_argumentp(t1);
t5=stub552(C_SCHEME_UNDEFINED,t2,t3,t4);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
C_trace(C_text("../port.scm:447: scheme#values"));{
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
C_trace(C_text("../port.scm:448: posix-error"));
f_1763(((C_word*)t0)[4],lf[86],lf[90],lf[91],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k604 */
static void C_ccall f_606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_606,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k607 in k604 */
static void C_ccall f_609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_609,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k610 in k607 in k604 */
static void C_ccall f_612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_612,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k613 in k610 in k607 in k604 */
static void C_ccall f_615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,7)))){
C_save_and_reclaim((void *)f_615,2,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("../port.scm:39: ##sys#register-compiled-module"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[94]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t4;
av2[2]=lf[95];
av2[3]=lf[0];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[96];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_618(C_word c,C_word *av){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(80,c,6)))){
C_save_and_reclaim((void *)f_618,2,av);}
a=C_alloc(80);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.port#port-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_620,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[6]+1 /* (set! chicken.port#set-port-name! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_638,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! chicken.port#port-position ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_650,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[12]+1 /* (set! chicken.port#set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_682,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[21]+1 /* (set! chicken.port#port-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_754,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[22]+1 /* (set! chicken.port#port-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_778,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[24]+1 /* (set! chicken.port#port-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_810,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t9=*((C_word*)lf[25]+1);
t10=*((C_word*)lf[26]+1);
t11=C_mutate((C_word*)lf[27]+1 /* (set! chicken.port#copy-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_973,a[2]=t9,a[3]=t10,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[31]+1 /* (set! chicken.port#make-broadcast-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1062,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[36]+1 /* (set! chicken.port#make-concatenated-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1137,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[41]+1 /* (set! chicken.port#with-input-from-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1289,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[45]+1 /* (set! chicken.port#with-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1314,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[49]+1 /* (set! chicken.port#with-error-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1339,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[52]+1 /* (set! chicken.port#call-with-input-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1364,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[54]+1 /* (set! chicken.port#call-with-output-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1373,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[57]+1 /* (set! chicken.port#with-input-from-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1385,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[58]+1 /* (set! chicken.port#with-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1410,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[59]+1 /* (set! chicken.port#with-error-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1438,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[40]+1 /* (set! chicken.port#make-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1466,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[34]+1 /* (set! chicken.port#make-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1607,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[65]+1 /* (set! chicken.port#make-bidirectional-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1662,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate(&lf[73] /* (set! chicken.port#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1763,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[79]+1 /* (set! chicken.port#terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1780,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate(&lf[83] /* (set! chicken.port#check-terminal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1799,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[85]+1 /* (set! chicken.port#terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1831,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[89]+1 /* (set! chicken.port#terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1861,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t30=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t30;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t30+1)))(2,av2);}}

/* chicken.port#port-name in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_620,c,av);}
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_627,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:120: ##sys#check-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[4]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[5];
tp(4,av2);}}

/* k625 in chicken.port#port-name in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_627,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(3));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.port#set-port-name! in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_638(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_638,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_642,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:124: ##sys#check-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[4]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[7];
tp(4,av2);}}

/* k640 in chicken.port#set-port-name! in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_642,2,av);}
t2=C_i_check_string_2(((C_word*)t0)[2],lf[7]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[4],C_fix(3),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.port#port-position in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_650,c,av);}
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_657,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:129: ##sys#check-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[4]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[10];
tp(4,av2);}}

/* k655 in chicken.port#port-position in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_657,2,av);}
if(C_truep(C_input_portp(((C_word*)t0)[2]))){
t2=C_slot(((C_word*)t0)[2],C_fix(4));
t3=C_slot(((C_word*)t0)[2],C_fix(5));
C_trace(C_text("../port.scm:131: ##sys#values"));{
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
C_trace(C_text("../port.scm:132: ##sys#error"));
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

/* chicken.port#set-buffering-mode! in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_682(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_682,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_686,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("../port.scm:135: ##sys#check-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[4]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[13];
tp(4,av2);}}

/* k684 in chicken.port#set-buffering-mode! in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_686(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_686,2,av);}
a=C_alloc(5);
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[2]):C_fix((C_word)BUFSIZ));
t4=t3;
t5=((C_word*)t0)[3];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_692,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(t5,lf[17]);
if(C_truep(t7)){
t8=t6;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_fix((C_word)_IOFBF);
f_692(2,av2);}}
else{
t8=C_eqp(t5,lf[18]);
if(C_truep(t8)){
t9=t6;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_fix((C_word)_IOLBF);
f_692(2,av2);}}
else{
t9=C_eqp(t5,lf[19]);
if(C_truep(t9)){
t10=t6;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_fix((C_word)_IONBF);
f_692(2,av2);}}
else{
C_trace(C_text("../port.scm:141: ##sys#error"));
t10=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t10;
av2[1]=t6;
av2[2]=lf[13];
av2[3]=lf[20];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t10+1)))(6,av2);}}}}}

/* k690 in k684 in chicken.port#set-buffering-mode! in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_692,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("../port.scm:142: ##sys#check-fixnum"));
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

/* k693 in k690 in k684 in chicken.port#set-buffering-mode! in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_695(C_word c,C_word *av){
C_word tmp;
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
C_save_and_reclaim((void *)f_695,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(7));
t4=C_eqp(lf[15],t3);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t7=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t8=t2;
f_708(t8,stub145(C_SCHEME_UNDEFINED,t5,t6,t7));}
else{
t5=t2;
f_708(t5,C_fix(-1));}}

/* k706 in k693 in k690 in k684 in chicken.port#set-buffering-mode! in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_708(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_708,2,t0,t1);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
C_trace(C_text("../port.scm:149: ##sys#error"));
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
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.port#port-for-each in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_754(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_754,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_760,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_760(t7,t1);}

/* loop in chicken.port#port-for-each in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_760(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_760,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_764,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:155: thunk"));
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k762 in loop in chicken.port#port-for-each in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_764,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_773,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:157: fn"));
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

/* k771 in k762 in loop in chicken.port#port-for-each in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_773,2,av);}
C_trace(C_text("../port.scm:158: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_760(t2,((C_word*)t0)[3]);}

/* chicken.port#port-map in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_778(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_778,4,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_784,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_784(t7,t1,C_SCHEME_END_OF_LIST);}

/* loop in chicken.port#port-map in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_784(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_784,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_788,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("../port.scm:163: thunk"));
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k786 in loop in chicken.port#port-map in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_788,2,av);}
a=C_alloc(5);
if(C_truep(C_eofp(t1))){
C_trace(C_text("../port.scm:165: ##sys#fast-reverse"));
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
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_808,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:166: fn"));
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

/* k806 in k786 in loop in chicken.port#port-map in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_808,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("../port.scm:166: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_784(t3,((C_word*)t0)[4],t2);}

/* chicken.port#port-fold in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_810(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_810,5,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_816,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_816(t8,t1,t3);}

/* loop in chicken.port#port-fold in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_816(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_816,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_820,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("../port.scm:170: thunk"));
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k818 in loop in chicken.port#port-fold in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_820,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_833,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:173: fn"));
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
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k831 in k818 in loop in chicken.port#port-fold in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_833,2,av);}
C_trace(C_text("../port.scm:173: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_816(t2,((C_word*)t0)[3],t1);}

/* k838 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_840(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_840,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_845,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li13),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_845(t6,((C_word*)t0)[4]);}

/* loop in k838 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_845(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_845,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_849,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("../port.scm:183: chicken.io#read-string!"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t2;
av2[2]=C_fix(1024);
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}

/* k847 in loop in k838 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_849,2,av);}
a=C_alloc(4);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_858,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:185: writer"));
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

/* k856 in k847 in loop in k838 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_858,2,av);}
C_trace(C_text("../port.scm:186: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_845(t2,((C_word*)t0)[3]);}

/* doloop192 */
static void C_fcall f_869(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_869,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_879,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_subbyte(((C_word*)t0)[4],t2);
t5=C_make_character(C_unfix(t4));
C_trace(C_text("../port.scm:190: writer"));
t6=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k877 in doloop192 */
static void C_ccall f_879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_879,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_869(t3,((C_word*)t0)[4],t2);}

/* loop in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_902(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_902,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_906,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:193: reader"));
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k904 in loop in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_906,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_915,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:195: writer"));
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

/* k913 in k904 in loop in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_915,2,av);}
C_trace(C_text("../port.scm:196: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_902(t2,((C_word*)t0)[3]);}

/* k922 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_924(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_924,2,av);}
a=C_alloc(10);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_929,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word)li14),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_929(t6,((C_word*)t0)[5],C_fix(0));}

/* loop in k922 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_929(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_929,3,t0,t1,t2);}
a=C_alloc(15);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_933,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t3)[1],C_fix(1024)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_971,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("../port.scm:201: chicken.io#write-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1024);
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t5=t4;
f_933(t5,C_SCHEME_UNDEFINED);}}

/* k931 in loop in k922 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_fcall f_933(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_933,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("../port.scm:203: reader"));
t3=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k934 in k931 in loop in k922 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_936(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_936,2,av);}
if(C_truep(C_eofp(t1))){
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
C_trace(C_text("../port.scm:206: chicken.io#write-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}
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
C_trace(C_text("../port.scm:209: loop"));
t5=((C_word*)((C_word*)t0)[6])[1];
f_929(t5,((C_word*)t0)[3],t4);}}

/* k969 in loop in k922 in chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_971,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
f_933(t3,t2);}

/* chicken.port#copy-port in k616 in k613 in k610 in k607 in k604 */
static void C_ccall f_973(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_973,c,av);}
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
t17=(C_truep(t16)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1003,a[2]=t3,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1008,a[2]=t3,a[3]=t12,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp));
t18=t1;
t19=t2;
t20=t17;
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_840,a[2]=t20,a[3]=t19,a[4]=t18,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("../port.scm:181: scheme#make-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t21;
av2[2]=C_fix(1024);
tp(3,av2);}}
else{
t16=C_eqp(t12,((C_word*)t0)[3]);
if(C_truep(t16)){
t17=t1;
t18=t2;
t19=t3;
t20=t7;
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_924,a[2]=t19,a[3]=t20,a[4]=t18,a[5]=t17,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("../port.scm:198: scheme#make-string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t21;
av2[2]=C_fix(1024);
tp(3,av2);}}
else{
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1026,a[2]=t7,a[3]=t2,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1032,a[2]=t12,a[3]=t3,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp);
t19=t1;
t20=t17;
t21=t18;
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_902,a[2]=t23,a[3]=t21,a[4]=t20,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t25=((C_word*)t23)[1];
f_902(t25,t19);}}}

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
if(C_unlikely(!C_demand_2(1068))){
C_save(t1);
C_rereclaim2(1068*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,97);
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
lf[30]=C_h_intern(&lf[30],18, C_text("scheme#make-string"));
lf[31]=C_h_intern(&lf[31],32, C_text("chicken.port#make-broadcast-port"));
lf[32]=C_h_intern(&lf[32],8, C_text("for-each"));
lf[33]=C_h_intern(&lf[33],25, C_text("chicken.base#flush-output"));
lf[34]=C_h_intern(&lf[34],29, C_text("chicken.port#make-output-port"));
lf[35]=C_h_intern(&lf[35],17, C_text("chicken.base#void"));
lf[36]=C_h_intern(&lf[36],35, C_text("chicken.port#make-concatenated-port"));
lf[37]=C_h_intern(&lf[37],18, C_text("\003sysread-char/port"));
lf[38]=C_h_intern(&lf[38],18, C_text("scheme#char-ready\077"));
lf[39]=C_h_intern(&lf[39],16, C_text("scheme#peek-char"));
lf[40]=C_h_intern(&lf[40],28, C_text("chicken.port#make-input-port"));
lf[41]=C_h_intern(&lf[41],33, C_text("chicken.port#with-input-from-port"));
lf[42]=C_h_intern(&lf[42],16, C_text("\003sysdynamic-wind"));
lf[43]=C_h_intern(&lf[43],20, C_text("\003syscheck-input-port"));
lf[44]=C_h_intern(&lf[44],20, C_text("with-input-from-port"));
lf[45]=C_h_intern(&lf[45],32, C_text("chicken.port#with-output-to-port"));
lf[46]=C_h_intern(&lf[46],19, C_text("\003sysstandard-output"));
lf[47]=C_h_intern(&lf[47],21, C_text("\003syscheck-output-port"));
lf[48]=C_h_intern(&lf[48],19, C_text("with-output-to-port"));
lf[49]=C_h_intern(&lf[49],38, C_text("chicken.port#with-error-output-to-port"));
lf[50]=C_h_intern(&lf[50],18, C_text("\003sysstandard-error"));
lf[51]=C_h_intern(&lf[51],25, C_text("with-error-output-to-port"));
lf[52]=C_h_intern(&lf[52],35, C_text("chicken.port#call-with-input-string"));
lf[53]=C_h_intern(&lf[53],30, C_text("chicken.base#open-input-string"));
lf[54]=C_h_intern(&lf[54],36, C_text("chicken.port#call-with-output-string"));
lf[55]=C_h_intern(&lf[55],30, C_text("chicken.base#get-output-string"));
lf[56]=C_h_intern(&lf[56],31, C_text("chicken.base#open-output-string"));
lf[57]=C_h_intern(&lf[57],35, C_text("chicken.port#with-input-from-string"));
lf[58]=C_h_intern(&lf[58],34, C_text("chicken.port#with-output-to-string"));
lf[59]=C_h_intern(&lf[59],40, C_text("chicken.port#with-error-output-to-string"));
lf[60]=C_h_intern(&lf[60],18, C_text("\003sysset-port-data!"));
lf[61]=C_h_intern(&lf[61],13, C_text("\003sysmake-port"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(custom)"));
lf[63]=C_h_intern(&lf[63],6, C_text("custom"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(custom)"));
lf[65]=C_h_intern(&lf[65],36, C_text("chicken.port#make-bidirectional-port"));
lf[66]=C_h_intern(&lf[66],19, C_text("\003syswrite-char/port"));
lf[67]=C_h_intern(&lf[67],23, C_text("scheme#close-input-port"));
lf[68]=C_h_intern(&lf[68],24, C_text("scheme#close-output-port"));
lf[69]=C_h_intern(&lf[69],20, C_text("chicken.io#read-line"));
lf[70]=C_h_intern(&lf[70],24, C_text("chicken.io#read-buffered"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017(bidirectional)"));
lf[72]=C_h_intern(&lf[72],13, C_text("bidirectional"));
lf[74]=C_h_intern(&lf[74],15, C_text("\003syssignal-hook"));
lf[75]=C_h_intern(&lf[75],20, C_text("scheme#string-append"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[77]=C_h_intern(&lf[77],17, C_text("\003syspeek-c-string"));
lf[78]=C_h_intern(&lf[78],16, C_text("\003sysupdate-errno"));
lf[79]=C_h_intern(&lf[79],27, C_text("chicken.port#terminal-port\077"));
lf[80]=C_h_intern(&lf[80],25, C_text("\003syspeek-unsigned-integer"));
lf[81]=C_h_intern(&lf[81],19, C_text("\003syscheck-open-port"));
lf[82]=C_h_intern(&lf[82],14, C_text("terminal-port\077"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000#port is not connected to a terminal"));
lf[85]=C_h_intern(&lf[85],26, C_text("chicken.port#terminal-name"));
lf[86]=C_h_intern(&lf[86],6, C_text("\000error"));
lf[87]=C_h_intern(&lf[87],13, C_text("terminal-name"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot determine terminal name"));
lf[89]=C_h_intern(&lf[89],26, C_text("chicken.port#terminal-size"));
lf[90]=C_h_intern(&lf[90],13, C_text("terminal-size"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot determine terminal size"));
lf[92]=C_h_intern(&lf[92],17, C_text("\003sysmake-locative"));
lf[93]=C_h_intern(&lf[93],8, C_text("location"));
lf[94]=C_h_intern(&lf[94],28, C_text("\003sysregister-compiled-module"));
lf[95]=C_h_intern(&lf[95],12, C_text("chicken.port"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026call-with-input-string\376\001\000\000#chicken.port#call-with-input-string\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\027call-with-output-string\376\001\000\000$chicken.port#call-with-output-string\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\011copy-port\376\001\000\000\026chicken.port#copy-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017make-input-port\376\001\000"
"\000\034chicken.port#make-input-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020make-output-port\376\001\000\000\035chicken.port#m"
"ake-output-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011port-fold\376\001\000\000\026chicken.port#port-fold\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\015port-for-each\376\001\000\000\032chicken.port#port-for-each\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010port-map\376\001\000\000\025chicken"
".port#port-map\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011port-name\376\001\000\000\026chicken.port#port-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015"
"port-position\376\001\000\000\032chicken.port#port-position\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027make-bidirectional-po"
"rt\376\001\000\000$chicken.port#make-bidirectional-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023make-broadcast-port\376\001\000"
"\000 chicken.port#make-broadcast-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026make-concatenated-port\376\001\000\000#chic"
"ken.port#make-concatenated-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023set-buffering-mode!\376\001\000\000 chicken.po"
"rt#set-buffering-mode!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016set-port-name!\376\001\000\000\033chicken.port#set-port-na"
"me!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015terminal-name\376\001\000\000\032chicken.port#terminal-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016ter"
"minal-port\077\376\001\000\000\033chicken.port#terminal-port\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015terminal-size\376\001\000\000\032chic"
"ken.port#terminal-size\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031with-error-output-to-port\376\001\000\000&chicken.port#"
"with-error-output-to-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024with-input-from-port\376\001\000\000!chicken.port#wi"
"th-input-from-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026with-input-from-string\376\001\000\000#chicken.port#with-in"
"put-from-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023with-output-to-port\376\001\000\000 chicken.port#with-output-t"
"o-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025with-output-to-string\376\001\000\000\042chicken.port#with-output-to-strin"
"g\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033with-error-output-to-string\376\001\000\000(chicken.port#with-error-output-t"
"o-string\376\377\016"));
C_register_lf2(lf,97,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_606,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[150] = {
{C_text("f_1003:_2e_2e_2fport_2escm"),(void*)f_1003},
{C_text("f_1008:_2e_2e_2fport_2escm"),(void*)f_1008},
{C_text("f_1026:_2e_2e_2fport_2escm"),(void*)f_1026},
{C_text("f_1032:_2e_2e_2fport_2escm"),(void*)f_1032},
{C_text("f_1062:_2e_2e_2fport_2escm"),(void*)f_1062},
{C_text("f_1068:_2e_2e_2fport_2escm"),(void*)f_1068},
{C_text("f_1070:_2e_2e_2fport_2escm"),(void*)f_1070},
{C_text("f_1082:_2e_2e_2fport_2escm"),(void*)f_1082},
{C_text("f_1092:_2e_2e_2fport_2escm"),(void*)f_1092},
{C_text("f_1105:_2e_2e_2fport_2escm"),(void*)f_1105},
{C_text("f_1114:_2e_2e_2fport_2escm"),(void*)f_1114},
{C_text("f_1124:_2e_2e_2fport_2escm"),(void*)f_1124},
{C_text("f_1137:_2e_2e_2fport_2escm"),(void*)f_1137},
{C_text("f_1146:_2e_2e_2fport_2escm"),(void*)f_1146},
{C_text("f_1152:_2e_2e_2fport_2escm"),(void*)f_1152},
{C_text("f_1162:_2e_2e_2fport_2escm"),(void*)f_1162},
{C_text("f_1181:_2e_2e_2fport_2escm"),(void*)f_1181},
{C_text("f_1201:_2e_2e_2fport_2escm"),(void*)f_1201},
{C_text("f_1207:_2e_2e_2fport_2escm"),(void*)f_1207},
{C_text("f_1217:_2e_2e_2fport_2escm"),(void*)f_1217},
{C_text("f_1236:_2e_2e_2fport_2escm"),(void*)f_1236},
{C_text("f_1242:_2e_2e_2fport_2escm"),(void*)f_1242},
{C_text("f_1258:_2e_2e_2fport_2escm"),(void*)f_1258},
{C_text("f_1261:_2e_2e_2fport_2escm"),(void*)f_1261},
{C_text("f_1289:_2e_2e_2fport_2escm"),(void*)f_1289},
{C_text("f_1293:_2e_2e_2fport_2escm"),(void*)f_1293},
{C_text("f_1298:_2e_2e_2fport_2escm"),(void*)f_1298},
{C_text("f_1303:_2e_2e_2fport_2escm"),(void*)f_1303},
{C_text("f_1309:_2e_2e_2fport_2escm"),(void*)f_1309},
{C_text("f_1314:_2e_2e_2fport_2escm"),(void*)f_1314},
{C_text("f_1318:_2e_2e_2fport_2escm"),(void*)f_1318},
{C_text("f_1323:_2e_2e_2fport_2escm"),(void*)f_1323},
{C_text("f_1328:_2e_2e_2fport_2escm"),(void*)f_1328},
{C_text("f_1334:_2e_2e_2fport_2escm"),(void*)f_1334},
{C_text("f_1339:_2e_2e_2fport_2escm"),(void*)f_1339},
{C_text("f_1343:_2e_2e_2fport_2escm"),(void*)f_1343},
{C_text("f_1348:_2e_2e_2fport_2escm"),(void*)f_1348},
{C_text("f_1353:_2e_2e_2fport_2escm"),(void*)f_1353},
{C_text("f_1359:_2e_2e_2fport_2escm"),(void*)f_1359},
{C_text("f_1364:_2e_2e_2fport_2escm"),(void*)f_1364},
{C_text("f_1368:_2e_2e_2fport_2escm"),(void*)f_1368},
{C_text("f_1373:_2e_2e_2fport_2escm"),(void*)f_1373},
{C_text("f_1377:_2e_2e_2fport_2escm"),(void*)f_1377},
{C_text("f_1380:_2e_2e_2fport_2escm"),(void*)f_1380},
{C_text("f_1385:_2e_2e_2fport_2escm"),(void*)f_1385},
{C_text("f_1389:_2e_2e_2fport_2escm"),(void*)f_1389},
{C_text("f_1394:_2e_2e_2fport_2escm"),(void*)f_1394},
{C_text("f_1399:_2e_2e_2fport_2escm"),(void*)f_1399},
{C_text("f_1405:_2e_2e_2fport_2escm"),(void*)f_1405},
{C_text("f_1410:_2e_2e_2fport_2escm"),(void*)f_1410},
{C_text("f_1414:_2e_2e_2fport_2escm"),(void*)f_1414},
{C_text("f_1419:_2e_2e_2fport_2escm"),(void*)f_1419},
{C_text("f_1424:_2e_2e_2fport_2escm"),(void*)f_1424},
{C_text("f_1428:_2e_2e_2fport_2escm"),(void*)f_1428},
{C_text("f_1433:_2e_2e_2fport_2escm"),(void*)f_1433},
{C_text("f_1438:_2e_2e_2fport_2escm"),(void*)f_1438},
{C_text("f_1442:_2e_2e_2fport_2escm"),(void*)f_1442},
{C_text("f_1447:_2e_2e_2fport_2escm"),(void*)f_1447},
{C_text("f_1452:_2e_2e_2fport_2escm"),(void*)f_1452},
{C_text("f_1456:_2e_2e_2fport_2escm"),(void*)f_1456},
{C_text("f_1461:_2e_2e_2fport_2escm"),(void*)f_1461},
{C_text("f_1466:_2e_2e_2fport_2escm"),(void*)f_1466},
{C_text("f_1500:_2e_2e_2fport_2escm"),(void*)f_1500},
{C_text("f_1503:_2e_2e_2fport_2escm"),(void*)f_1503},
{C_text("f_1505:_2e_2e_2fport_2escm"),(void*)f_1505},
{C_text("f_1526:_2e_2e_2fport_2escm"),(void*)f_1526},
{C_text("f_1542:_2e_2e_2fport_2escm"),(void*)f_1542},
{C_text("f_1547:_2e_2e_2fport_2escm"),(void*)f_1547},
{C_text("f_1553:_2e_2e_2fport_2escm"),(void*)f_1553},
{C_text("f_1607:_2e_2e_2fport_2escm"),(void*)f_1607},
{C_text("f_1620:_2e_2e_2fport_2escm"),(void*)f_1620},
{C_text("f_1623:_2e_2e_2fport_2escm"),(void*)f_1623},
{C_text("f_1625:_2e_2e_2fport_2escm"),(void*)f_1625},
{C_text("f_1635:_2e_2e_2fport_2escm"),(void*)f_1635},
{C_text("f_1641:_2e_2e_2fport_2escm"),(void*)f_1641},
{C_text("f_1647:_2e_2e_2fport_2escm"),(void*)f_1647},
{C_text("f_1662:_2e_2e_2fport_2escm"),(void*)f_1662},
{C_text("f_1669:_2e_2e_2fport_2escm"),(void*)f_1669},
{C_text("f_1672:_2e_2e_2fport_2escm"),(void*)f_1672},
{C_text("f_1678:_2e_2e_2fport_2escm"),(void*)f_1678},
{C_text("f_1684:_2e_2e_2fport_2escm"),(void*)f_1684},
{C_text("f_1690:_2e_2e_2fport_2escm"),(void*)f_1690},
{C_text("f_1696:_2e_2e_2fport_2escm"),(void*)f_1696},
{C_text("f_1702:_2e_2e_2fport_2escm"),(void*)f_1702},
{C_text("f_1723:_2e_2e_2fport_2escm"),(void*)f_1723},
{C_text("f_1729:_2e_2e_2fport_2escm"),(void*)f_1729},
{C_text("f_1735:_2e_2e_2fport_2escm"),(void*)f_1735},
{C_text("f_1741:_2e_2e_2fport_2escm"),(void*)f_1741},
{C_text("f_1747:_2e_2e_2fport_2escm"),(void*)f_1747},
{C_text("f_1763:_2e_2e_2fport_2escm"),(void*)f_1763},
{C_text("f_1767:_2e_2e_2fport_2escm"),(void*)f_1767},
{C_text("f_1774:_2e_2e_2fport_2escm"),(void*)f_1774},
{C_text("f_1778:_2e_2e_2fport_2escm"),(void*)f_1778},
{C_text("f_1780:_2e_2e_2fport_2escm"),(void*)f_1780},
{C_text("f_1784:_2e_2e_2fport_2escm"),(void*)f_1784},
{C_text("f_1787:_2e_2e_2fport_2escm"),(void*)f_1787},
{C_text("f_1799:_2e_2e_2fport_2escm"),(void*)f_1799},
{C_text("f_1803:_2e_2e_2fport_2escm"),(void*)f_1803},
{C_text("f_1831:_2e_2e_2fport_2escm"),(void*)f_1831},
{C_text("f_1835:_2e_2e_2fport_2escm"),(void*)f_1835},
{C_text("f_1838:_2e_2e_2fport_2escm"),(void*)f_1838},
{C_text("f_1861:_2e_2e_2fport_2escm"),(void*)f_1861},
{C_text("f_1865:_2e_2e_2fport_2escm"),(void*)f_1865},
{C_text("f_1886:_2e_2e_2fport_2escm"),(void*)f_1886},
{C_text("f_1890:_2e_2e_2fport_2escm"),(void*)f_1890},
{C_text("f_606:_2e_2e_2fport_2escm"),(void*)f_606},
{C_text("f_609:_2e_2e_2fport_2escm"),(void*)f_609},
{C_text("f_612:_2e_2e_2fport_2escm"),(void*)f_612},
{C_text("f_615:_2e_2e_2fport_2escm"),(void*)f_615},
{C_text("f_618:_2e_2e_2fport_2escm"),(void*)f_618},
{C_text("f_620:_2e_2e_2fport_2escm"),(void*)f_620},
{C_text("f_627:_2e_2e_2fport_2escm"),(void*)f_627},
{C_text("f_638:_2e_2e_2fport_2escm"),(void*)f_638},
{C_text("f_642:_2e_2e_2fport_2escm"),(void*)f_642},
{C_text("f_650:_2e_2e_2fport_2escm"),(void*)f_650},
{C_text("f_657:_2e_2e_2fport_2escm"),(void*)f_657},
{C_text("f_682:_2e_2e_2fport_2escm"),(void*)f_682},
{C_text("f_686:_2e_2e_2fport_2escm"),(void*)f_686},
{C_text("f_692:_2e_2e_2fport_2escm"),(void*)f_692},
{C_text("f_695:_2e_2e_2fport_2escm"),(void*)f_695},
{C_text("f_708:_2e_2e_2fport_2escm"),(void*)f_708},
{C_text("f_754:_2e_2e_2fport_2escm"),(void*)f_754},
{C_text("f_760:_2e_2e_2fport_2escm"),(void*)f_760},
{C_text("f_764:_2e_2e_2fport_2escm"),(void*)f_764},
{C_text("f_773:_2e_2e_2fport_2escm"),(void*)f_773},
{C_text("f_778:_2e_2e_2fport_2escm"),(void*)f_778},
{C_text("f_784:_2e_2e_2fport_2escm"),(void*)f_784},
{C_text("f_788:_2e_2e_2fport_2escm"),(void*)f_788},
{C_text("f_808:_2e_2e_2fport_2escm"),(void*)f_808},
{C_text("f_810:_2e_2e_2fport_2escm"),(void*)f_810},
{C_text("f_816:_2e_2e_2fport_2escm"),(void*)f_816},
{C_text("f_820:_2e_2e_2fport_2escm"),(void*)f_820},
{C_text("f_833:_2e_2e_2fport_2escm"),(void*)f_833},
{C_text("f_840:_2e_2e_2fport_2escm"),(void*)f_840},
{C_text("f_845:_2e_2e_2fport_2escm"),(void*)f_845},
{C_text("f_849:_2e_2e_2fport_2escm"),(void*)f_849},
{C_text("f_858:_2e_2e_2fport_2escm"),(void*)f_858},
{C_text("f_869:_2e_2e_2fport_2escm"),(void*)f_869},
{C_text("f_879:_2e_2e_2fport_2escm"),(void*)f_879},
{C_text("f_902:_2e_2e_2fport_2escm"),(void*)f_902},
{C_text("f_906:_2e_2e_2fport_2escm"),(void*)f_906},
{C_text("f_915:_2e_2e_2fport_2escm"),(void*)f_915},
{C_text("f_924:_2e_2e_2fport_2escm"),(void*)f_924},
{C_text("f_929:_2e_2e_2fport_2escm"),(void*)f_929},
{C_text("f_933:_2e_2e_2fport_2escm"),(void*)f_933},
{C_text("f_936:_2e_2e_2fport_2escm"),(void*)f_936},
{C_text("f_971:_2e_2e_2fport_2escm"),(void*)f_971},
{C_text("f_973:_2e_2e_2fport_2escm"),(void*)f_973},
{C_text("toplevel:_2e_2e_2fport_2escm"),(void*)C_port_toplevel},
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
(o e)|assignments to immediate values: 1 
o|contracted procedure: "(../port.scm:143) g140141" 
o|contracted procedure: "(../port.scm:213) read-buf177" 
o|contracted procedure: "(../port.scm:217) write-buf178" 
o|contracted procedure: "(../port.scm:219) read-and-write-buf180" 
o|contracted procedure: "(../port.scm:221) read-and-write179" 
o|propagated global variable: g269270 chicken.io#write-string 
o|merged explicitly consed rest parameter: args523 
o|contracted procedure: "(../port.scm:414) strerror513" 
o|consed rest parameter at call site: "(../port.scm:433) chicken.port#posix-error" 4 
o|contracted procedure: "(../port.scm:432) ttyname536" 
o|consed rest parameter at call site: "(../port.scm:448) chicken.port#posix-error" 4 
o|contracted procedure: "(../port.scm:444) ttysize548" 
o|replaced variables: 212 
o|removed binding forms: 116 
o|replaced variables: 3 
o|removed binding forms: 182 
o|replaced variables: 2 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|simplifications: ((if . 19) (##core#call . 124)) 
o|  call simplifications:
o|    scheme#list	3
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
o|    ##sys#check-list	2
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
o|    scheme#eqv?	5
o|    scheme#eq?	7
o|    ##sys#foreign-fixnum-argument	5
o|    chicken.fixnum#fx<	2
o|    ##sys#values
o|    ##sys#check-string
o|    ##sys#setslot	2
o|    scheme#null?	19
o|    scheme#car	14
o|    ##sys#slot	11
o|contracted procedure: k631 
o|contracted procedure: k622 
o|contracted procedure: k643 
o|contracted procedure: k675 
o|contracted procedure: k652 
o|contracted procedure: k665 
o|contracted procedure: k669 
o|contracted procedure: k747 
o|contracted procedure: k687 
o|contracted procedure: k699 
o|contracted procedure: k726 
o|contracted procedure: k709 
o|contracted procedure: k715 
o|contracted procedure: k719 
o|contracted procedure: k729 
o|contracted procedure: k735 
o|contracted procedure: k741 
o|contracted procedure: k768 
o|contracted procedure: k792 
o|contracted procedure: k802 
o|contracted procedure: k824 
o|contracted procedure: k1055 
o|contracted procedure: k975 
o|contracted procedure: k1049 
o|contracted procedure: k978 
o|contracted procedure: k1043 
o|contracted procedure: k981 
o|contracted procedure: k1037 
o|contracted procedure: k984 
o|contracted procedure: k990 
o|contracted procedure: k1000 
o|contracted procedure: k997 
o|contracted procedure: k874 
o|contracted procedure: k884 
o|contracted procedure: k892 
o|contracted procedure: k888 
o|contracted procedure: k853 
o|contracted procedure: k1016 
o|contracted procedure: k940 
o|contracted procedure: k946 
o|contracted procedure: k963 
o|contracted procedure: k952 
o|contracted procedure: k959 
o|contracted procedure: k966 
o|contracted procedure: k910 
o|contracted procedure: k1075 
o|contracted procedure: k1087 
o|contracted procedure: k1097 
o|contracted procedure: k1101 
o|contracted procedure: k1107 
o|contracted procedure: k1119 
o|contracted procedure: k1129 
o|contracted procedure: k1133 
o|contracted procedure: k1139 
o|contracted procedure: k1157 
o|contracted procedure: k1166 
o|contracted procedure: k1170 
o|contracted procedure: k1177 
o|contracted procedure: k1197 
o|contracted procedure: k1186 
o|contracted procedure: k1193 
o|contracted procedure: k1212 
o|contracted procedure: k1221 
o|contracted procedure: k1225 
o|contracted procedure: k1232 
o|contracted procedure: k1247 
o|contracted procedure: k1253 
o|contracted procedure: k1266 
o|contracted procedure: k1270 
o|contracted procedure: k1273 
o|contracted procedure: k1277 
o|contracted procedure: k1281 
o|contracted procedure: k1285 
o|contracted procedure: k1600 
o|contracted procedure: k1468 
o|contracted procedure: k1594 
o|contracted procedure: k1471 
o|contracted procedure: k1588 
o|contracted procedure: k1474 
o|contracted procedure: k1582 
o|contracted procedure: k1477 
o|contracted procedure: k1576 
o|contracted procedure: k1480 
o|contracted procedure: k1570 
o|contracted procedure: k1483 
o|contracted procedure: k1564 
o|contracted procedure: k1486 
o|contracted procedure: k1558 
o|contracted procedure: k1489 
o|contracted procedure: k1507 
o|contracted procedure: k1519 
o|contracted procedure: k1528 
o|contracted procedure: k1543 
o|contracted procedure: k1492 
o|contracted procedure: k1495 
o|contracted procedure: k1655 
o|contracted procedure: k1609 
o|contracted procedure: k1631 
o|contracted procedure: k1612 
o|contracted procedure: k1615 
o|contracted procedure: k1707 
o|contracted procedure: k1716 
o|contracted procedure: k1664 
o|contracted procedure: k1674 
o|contracted procedure: k1760 
o|contracted procedure: k1795 
o|contracted procedure: k1791 
o|contracted procedure: k1817 
o|contracted procedure: k1813 
o|contracted procedure: k1807 
o|contracted procedure: k1828 
o|contracted procedure: k1869 
o|contracted procedure: k1850 
o|contracted procedure: k1854 
o|contracted procedure: k1858 
o|contracted procedure: k1892 
o|contracted procedure: k1896 
o|contracted procedure: k1900 
o|simplifications: ((let . 20)) 
o|removed binding forms: 118 
o|substituted constant variable: r1893 
o|substituted constant variable: r1897 
o|substituted constant variable: r1893 
o|substituted constant variable: r1897 
o|substituted constant variable: r1901 
o|replaced variables: 69 
o|removed binding forms: 43 
o|contracted procedure: k1879 
o|removed binding forms: 1 
o|customizable procedures: (chicken.port#check-terminal! chicken.port#posix-error k1259 loop318 loop306 loop297 for-each-loop278288 g254261 for-each-loop253271 loop199 k931 loop207 loop184 doloop192193 loop170 loop162 loop155 k706) 
o|calls to known targets: 38 
o|fast box initializations: 12 
o|fast global references: 4 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1763 
o|dropping unused closure argument: f_1799 
*/
/* end of file */

/* Generated from scheduler.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: scheduler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file scheduler.c
   unit: scheduler
*/

#include "chicken.h"

#ifdef HAVE_ERRNO_H
# include <errno.h>
# define C_signal_interrupted_p     C_mk_bool(errno == EINTR)
#else
# define C_signal_interrupted_p     C_SCHEME_FALSE
#endif

#ifdef _WIN32
/* TODO: Winsock select() only works for sockets */
# include <winsock2.h>
/* Beware: winsock2.h must come BEFORE windows.h */
# define C_msleep(n)     (Sleep(C_unfix(n)), C_SCHEME_TRUE)
#else
# include <sys/time.h>
static C_word C_msleep(C_word ms);
C_word C_msleep(C_word ms) {
#ifdef __CYGWIN__
  if(usleep(C_unfix(ms) * 1000) == -1) return C_SCHEME_FALSE;
#else
  struct timespec ts;
  unsigned long mss = C_unfix(ms);
  ts.tv_sec = mss / 1000;
  ts.tv_nsec = (mss % 1000) * 1000000;
  
  if(nanosleep(&ts, NULL) == -1) return C_SCHEME_FALSE;
#endif
  return C_SCHEME_TRUE;
}
#endif

#ifdef NO_POSIX_POLL

/* Shouldn't we include <sys/select.h> here? */
static fd_set C_fdset_input, C_fdset_output;

#define C_fd_input_ready(fd,pos)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_input))
#define C_fd_output_ready(fd,pos)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_output))

C_inline int C_ready_fds_timeout(int to, double tm) {
  struct timeval timeout;
  timeout.tv_sec = tm / 1000;
  timeout.tv_usec = fmod(tm, 1000) * 1000;
  /* we use FD_SETSIZE, but really should use max fd */
  return select(FD_SETSIZE, &C_fdset_input, &C_fdset_output, NULL, to ? &timeout : NULL);
}

C_inline void C_prepare_fdset(int length) {
  FD_ZERO(&C_fdset_input);
  FD_ZERO(&C_fdset_output);
}

C_inline void C_fdset_add(int fd, int input, int output) {
  if (input) FD_SET(fd, &C_fdset_input);
  if (output) FD_SET(fd, &C_fdset_output);
}

#else
#  include <poll.h>
#  include <assert.h>

static int C_fdset_nfds;
static struct pollfd *C_fdset_set = NULL;

C_inline int C_fd_ready(int fd, int pos, int what) {
  assert(fd == C_fdset_set[pos].fd); /* Must match position in ##sys#fd-list! */
  return(C_fdset_set[pos].revents & what);
}

#define C_fd_input_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLIN|POLLERR|POLLHUP|POLLNVAL))
#define C_fd_output_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLOUT|POLLERR|POLLHUP|POLLNVAL))

C_inline int C_ready_fds_timeout(int to, double tm) {
  return poll(C_fdset_set, C_fdset_nfds, to ? (int)tm : -1);
}

C_inline void C_prepare_fdset(int length) {
  /* TODO: Only realloc when needed? */
  C_fdset_set = realloc(C_fdset_set, sizeof(struct pollfd) * length);
  if (C_fdset_set == NULL)
    C_halt(C_SCHEME_FALSE); /* Ugly: no message */
  C_fdset_nfds = 0;
}

/* This *must* be called in order, so position will match ##sys#fd-list */
C_inline void C_fdset_add(int fd, int input, int output) {
  C_fdset_set[C_fdset_nfds].events = ((input ? POLLIN : 0) | (output ? POLLOUT : 0));
  C_fdset_set[C_fdset_nfds++].fd = fd;
}
#endif

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[66];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,50,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,116,104,114,101,97,100,115,53,48,54,32,107,101,101,112,53,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,110,52,57,50,32,112,111,115,52,57,51,32,108,115,116,52,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,103,51,54,51,32,116,51,55,50,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,54,50,32,103,51,54,57,52,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,53,54,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,51,54,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,49,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,35,35,115,121,115,35,115,99,104,101,100,117,108,101,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,102,111,114,99,101,45,112,114,105,109,111,114,100,105,97,108,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,19),40,35,35,115,121,115,35,114,101,97,100,121,45,113,117,101,117,101,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,97,100,100,45,116,111,45,114,101,97,100,121,45,113,117,101,117,101,32,116,104,114,101,97,100,49,55,48,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,7),40,97,49,50,57,51,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,50,48,49,32,115,116,97,116,101,50,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,118,50,49,49,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,114,101,109,111,118,101,45,102,114,111,109,45,116,105,109,101,111,117,116,45,108,105,115,116,32,116,50,48,56,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,116,108,50,51,49,32,112,114,101,118,50,51,50,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,105,109,101,111,117,116,33,32,116,50,49,54,32,116,109,50,49,55,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,101,114,109,105,110,97,116,105,111,110,33,32,116,50,52,50,32,116,50,50,52,51,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,12),40,103,51,48,53,32,116,50,51,49,52,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,48,52,32,103,51,49,49,51,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,48,32,103,50,55,55,50,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,54,32,103,50,54,51,50,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,116,104,114,101,97,100,45,107,105,108,108,33,32,116,50,57,52,32,115,50,57,53,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,97,115,105,99,45,117,110,98,108,111,99,107,33,32,116,51,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,49,55,49,50,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,100,101,102,97,117,108,116,45,101,120,99,101,112,116,105,111,110,45,104,97,110,100,108,101,114,32,97,114,103,51,51,51,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,52,54,50,41,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,105,47,111,33,32,116,52,53,56,32,102,100,52,53,57,32,105,47,111,52,54,48,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,53,52,48,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,99,108,101,97,114,45,105,47,111,45,115,116,97,116,101,45,102,111,114,45,116,104,114,101,97,100,33,32,116,53,51,55,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,39),40,102,95,50,52,57,48,32,113,117,101,117,101,53,54,52,32,97,114,103,53,54,53,32,118,97,108,53,54,54,32,105,110,105,116,53,54,55,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,53,55,56,41,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,56,49,32,105,53,56,50,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,55,52,32,105,53,55,53,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,53,55,49,32,105,53,55,50,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,97,108,108,45,116,104,114,101,97,100,115,32,46,32,116,109,112,53,53,52,53,53,53,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,101,116,99,104,45,97,110,100,45,99,108,101,97,114,45,116,104,114,101,97,100,115,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,114,101,115,116,111,114,101,45,116,104,114,101,97,100,115,32,118,101,99,53,57,51,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,116,104,114,101,97,100,45,117,110,98,108,111,99,107,33,32,116,53,57,56,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,14),40,115,117,115,112,101,110,100,32,116,54,48,56,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,11),40,103,54,49,52,32,97,54,50,51,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,52,51,32,103,54,53,48,54,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,11),40,103,54,51,49,32,97,54,52,48,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,51,48,32,103,54,51,55,54,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,49,51,32,103,54,50,48,54,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,107,105,108,108,45,111,116,104,101,114,45,116,104,114,101,97,100,115,32,116,104,117,110,107,54,48,53,41,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from g476 */
C_regparm static C_word C_fcall stub480(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_truep(C_a0);
double t1=(double )C_c_double(C_a1);
C_r=C_fix((C_word)C_ready_fds_timeout(t0,t1));
return C_r;}

/* from g407 */
C_regparm static C_word C_fcall stub412(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_truep(C_a1);
int t2=(int )C_truep(C_a2);
C_fdset_add(t0,t1,t2);
return C_r;}

/* from g349 */
C_regparm static C_word C_fcall stub352(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_prepare_fdset(t0);
return C_r;}

C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word *av) C_noret;
C_noret_decl(f_1540)
static void C_fcall f_1540(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_994)
static void C_ccall f_994(C_word c,C_word *av) C_noret;
C_noret_decl(f_999)
static void C_fcall f_999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word *av) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word *av) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externexport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word *av) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word *av) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word *av) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word *av) C_noret;
C_noret_decl(f_2080)
static void C_fcall f_2080(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word *av) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word *av) C_noret;
C_noret_decl(f_1573)
static void C_fcall f_1573(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word *av) C_noret;
C_noret_decl(f_1579)
static void C_ccall f_1579(C_word c,C_word *av) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word *av) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word *av) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word *av) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word *av) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word *av) C_noret;
C_noret_decl(f_1953)
static void C_ccall f_1953(C_word c,C_word *av) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word *av) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word *av) C_noret;
C_noret_decl(f_1431)
static void C_ccall f_1431(C_word c,C_word *av) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word *av) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word *av) C_noret;
C_noret_decl(f_2644)
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1968)
static void C_fcall f_1968(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word *av) C_noret;
C_noret_decl(f_2667)
static void C_fcall f_2667(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word *av) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word *av) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word *av) C_noret;
C_noret_decl(f_1276)
static void C_ccall f_1276(C_word c,C_word *av) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word *av) C_noret;
C_noret_decl(f_2373)
static void C_fcall f_2373(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word *av) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word *av) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word *av) C_noret;
C_noret_decl(f_2302)
static void C_fcall f_2302(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2420)
static void C_fcall f_2420(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2601)
static void C_fcall f_2601(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word *av) C_noret;
C_noret_decl(f_1931)
static void C_ccall f_1931(C_word c,C_word *av) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word *av) C_noret;
C_noret_decl(f_2396)
static void C_fcall f_2396(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1845)
static void C_fcall f_1845(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2610)
static void C_fcall f_2610(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2445)
static void C_fcall f_2445(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word *av) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word *av) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word *av) C_noret;
C_noret_decl(f_1163)
static void C_ccall f_1163(C_word c,C_word *av) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word *av) C_noret;
C_noret_decl(f_1177)
static void C_ccall f_1177(C_word c,C_word *av) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word *av) C_noret;
C_noret_decl(f_1174)
static void C_ccall f_1174(C_word c,C_word *av) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word *av) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833(C_word c,C_word *av) C_noret;
C_noret_decl(f_1109)
static void C_fcall f_1109(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1294)
static void C_ccall f_1294(C_word c,C_word *av) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word *av) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word *av) C_noret;
C_noret_decl(f_1003)
static void C_fcall f_1003(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word *av) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word *av) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word *av) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word *av) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word *av) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word *av) C_noret;
C_noret_decl(f_1925)
static void C_ccall f_1925(C_word c,C_word *av) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word *av) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word *av) C_noret;
C_noret_decl(f_1623)
static void C_fcall f_1623(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1355)
static void C_ccall f_1355(C_word c,C_word *av) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word *av) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word *av) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word *av) C_noret;
C_noret_decl(f_1366)
static void C_fcall f_1366(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1604)
static void C_fcall f_1604(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word *av) C_noret;
C_noret_decl(f_1800)
static void C_ccall f_1800(C_word c,C_word *av) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word *av) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word *av) C_noret;
C_noret_decl(f_1376)
static void C_fcall f_1376(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word *av) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word *av) C_noret;
C_noret_decl(f_2190)
static void C_ccall f_2190(C_word c,C_word *av) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word *av) C_noret;
C_noret_decl(f_1060)
static void C_fcall f_1060(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1812)
static void C_ccall f_1812(C_word c,C_word *av) C_noret;
C_noret_decl(f_1737)
static void C_fcall f_1737(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word *av) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word *av) C_noret;
C_noret_decl(f_1307)
static C_word C_fcall f_1307(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2119)
static void C_ccall f_2119(C_word c,C_word *av) C_noret;
C_noret_decl(f_1748)
static void C_fcall f_1748(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word *av) C_noret;
C_noret_decl(f_1514)
static void C_fcall f_1514(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2051)
static void C_fcall f_2051(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word *av) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word *av) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216(C_word c,C_word *av) C_noret;
C_noret_decl(f_2210)
static void C_ccall f_2210(C_word c,C_word *av) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word *av) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word *av) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word *av) C_noret;
C_noret_decl(f_987)
static void C_fcall f_987(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word *av) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word *av) C_noret;
C_noret_decl(f_2538)
static void C_fcall f_2538(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word *av) C_noret;
C_noret_decl(f_1346)
static void C_fcall f_1346(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_fcall f_2286(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2025)
static void C_fcall f_2025(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word *av) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word *av) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word *av) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word *av) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word *av) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word *av) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word *av) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word *av) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word *av) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word *av) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word *av) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word *av) C_noret;
C_noret_decl(f_2589)
static void C_fcall f_2589(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_1540)
static void C_ccall trf_1540(C_word c,C_word *av) C_noret;
static void C_ccall trf_1540(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1540(t0,t1,t2);}

C_noret_decl(trf_999)
static void C_ccall trf_999(C_word c,C_word *av) C_noret;
static void C_ccall trf_999(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_999(t0,t1);}

C_noret_decl(trf_2080)
static void C_ccall trf_2080(C_word c,C_word *av) C_noret;
static void C_ccall trf_2080(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2080(t0,t1,t2,t3);}

C_noret_decl(trf_1573)
static void C_ccall trf_1573(C_word c,C_word *av) C_noret;
static void C_ccall trf_1573(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1573(t0,t1);}

C_noret_decl(trf_2644)
static void C_ccall trf_2644(C_word c,C_word *av) C_noret;
static void C_ccall trf_2644(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2644(t0,t1,t2);}

C_noret_decl(trf_1968)
static void C_ccall trf_1968(C_word c,C_word *av) C_noret;
static void C_ccall trf_1968(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1968(t0,t1,t2);}

C_noret_decl(trf_2667)
static void C_ccall trf_2667(C_word c,C_word *av) C_noret;
static void C_ccall trf_2667(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2667(t0,t1,t2);}

C_noret_decl(trf_2373)
static void C_ccall trf_2373(C_word c,C_word *av) C_noret;
static void C_ccall trf_2373(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2373(t0,t1,t2,t3);}

C_noret_decl(trf_2302)
static void C_ccall trf_2302(C_word c,C_word *av) C_noret;
static void C_ccall trf_2302(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2302(t0,t1,t2);}

C_noret_decl(trf_2420)
static void C_ccall trf_2420(C_word c,C_word *av) C_noret;
static void C_ccall trf_2420(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2420(t0,t1,t2);}

C_noret_decl(trf_2601)
static void C_ccall trf_2601(C_word c,C_word *av) C_noret;
static void C_ccall trf_2601(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2601(t0,t1,t2);}

C_noret_decl(trf_2396)
static void C_ccall trf_2396(C_word c,C_word *av) C_noret;
static void C_ccall trf_2396(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2396(t0,t1,t2,t3);}

C_noret_decl(trf_1845)
static void C_ccall trf_1845(C_word c,C_word *av) C_noret;
static void C_ccall trf_1845(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1845(t0,t1,t2);}

C_noret_decl(trf_2610)
static void C_ccall trf_2610(C_word c,C_word *av) C_noret;
static void C_ccall trf_2610(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2610(t0,t1,t2);}

C_noret_decl(trf_2445)
static void C_ccall trf_2445(C_word c,C_word *av) C_noret;
static void C_ccall trf_2445(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2445(t0,t1,t2,t3);}

C_noret_decl(trf_1109)
static void C_ccall trf_1109(C_word c,C_word *av) C_noret;
static void C_ccall trf_1109(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1109(t0,t1);}

C_noret_decl(trf_1003)
static void C_ccall trf_1003(C_word c,C_word *av) C_noret;
static void C_ccall trf_1003(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1003(t0,t1);}

C_noret_decl(trf_1623)
static void C_ccall trf_1623(C_word c,C_word *av) C_noret;
static void C_ccall trf_1623(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1623(t0,t1,t2);}

C_noret_decl(trf_1366)
static void C_ccall trf_1366(C_word c,C_word *av) C_noret;
static void C_ccall trf_1366(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1366(t0,t1,t2,t3);}

C_noret_decl(trf_1604)
static void C_ccall trf_1604(C_word c,C_word *av) C_noret;
static void C_ccall trf_1604(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1604(t0,t1,t2);}

C_noret_decl(trf_1376)
static void C_ccall trf_1376(C_word c,C_word *av) C_noret;
static void C_ccall trf_1376(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1376(t0,t1);}

C_noret_decl(trf_1060)
static void C_ccall trf_1060(C_word c,C_word *av) C_noret;
static void C_ccall trf_1060(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1060(t0,t1,t2);}

C_noret_decl(trf_1737)
static void C_ccall trf_1737(C_word c,C_word *av) C_noret;
static void C_ccall trf_1737(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1737(t0,t1,t2);}

C_noret_decl(trf_1748)
static void C_ccall trf_1748(C_word c,C_word *av) C_noret;
static void C_ccall trf_1748(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1748(t0,t1,t2);}

C_noret_decl(trf_1514)
static void C_ccall trf_1514(C_word c,C_word *av) C_noret;
static void C_ccall trf_1514(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1514(t0,t1,t2);}

C_noret_decl(trf_2051)
static void C_ccall trf_2051(C_word c,C_word *av) C_noret;
static void C_ccall trf_2051(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2051(t0,t1,t2,t3,t4);}

C_noret_decl(trf_987)
static void C_ccall trf_987(C_word c,C_word *av) C_noret;
static void C_ccall trf_987(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_987(t0,t1);}

C_noret_decl(trf_2538)
static void C_ccall trf_2538(C_word c,C_word *av) C_noret;
static void C_ccall trf_2538(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2538(t0,t1);}

C_noret_decl(trf_1346)
static void C_ccall trf_1346(C_word c,C_word *av) C_noret;
static void C_ccall trf_1346(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1346(t0,t1);}

C_noret_decl(trf_2286)
static void C_ccall trf_2286(C_word c,C_word *av) C_noret;
static void C_ccall trf_2286(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2286(t0,t1);}

C_noret_decl(trf_2025)
static void C_ccall trf_2025(C_word c,C_word *av) C_noret;
static void C_ccall trf_2025(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2025(t0,t1);}

C_noret_decl(trf_2589)
static void C_ccall trf_2589(C_word c,C_word *av) C_noret;
static void C_ccall trf_2589(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2589(t0,t1,t2);}

/* k989 in loop1 in k980 in schedule */
static void C_ccall f_991(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_991,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_994,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* scheduler.scm:211: ##sys#force-primordial */
t3=*((C_word*)lf[16]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(*((C_word*)lf[12]+1)))){
t3=C_SCHEME_UNDEFINED;
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
f_994(2,av2);}}
else{
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2016,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1870,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:391: ##sys#length */
t7=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=*((C_word*)lf[12]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* for-each-loop256 in thread-kill! */
static void C_fcall f_1540(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_1540,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1550,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_set_i_slot(t6,C_fix(2),C_SCHEME_FALSE);
t8=C_i_set_i_slot(t6,C_fix(4),C_SCHEME_TRUE);
t9=C_i_set_i_slot(t6,C_fix(5),C_SCHEME_FALSE);
t10=C_slot(t6,C_fix(3));
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1498,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t10))){
t12=t5;{
C_word av2[2];
av2[0]=t12;
av2[1]=C_i_set_i_slot(t6,C_fix(3),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1514,a[2]=t13,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp));
t15=((C_word*)t13)[1];
f_1514(t15,t11,t10);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k992 in k989 in loop1 in k980 in schedule */
static void C_ccall f_994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_994,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_999,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_999(t5,((C_word*)t0)[3]);}

/* loop2 in k992 in k989 in loop1 in k980 in schedule */
static void C_fcall f_999(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_999,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1003,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=lf[14];
if(C_truep(C_i_nullp(lf[14]))){
t4=t2;
f_1003(t4,C_SCHEME_FALSE);}
else{
t4=C_slot(t3,C_fix(1));
t5=C_mutate2(&lf[14] /* (set! ready-queue-head ...) */,t4);
t6=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
t7=lf[15] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t8=C_u_i_car(t3);
t9=t2;
f_1003(t9,t8);}
else{
t7=C_u_i_car(t3);
t8=t2;
f_1003(t8,t7);}}}

/* k2047 in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2049,2,av);}
t2=C_mutate2((C_word*)lf[12]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#restore-threads */
static void C_ccall f_2509(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2509,3,av);}
t3=C_slot(t2,C_fix(0));
t4=C_mutate2(&lf[14] /* (set! ready-queue-head ...) */,t3);
t5=C_slot(t2,C_fix(1));
t6=C_mutate2(&lf[15] /* (set! ready-queue-tail ...) */,t5);
t7=C_slot(t2,C_fix(2));
t8=C_mutate2((C_word*)lf[12]+1 /* (set! ##sys#fd-list ...) */,t7);
t9=C_slot(t2,C_fix(3));
t10=C_mutate2(&lf[11] /* (set! ##sys#timeout-list ...) */,t9);
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_scheduler_toplevel(C_word c,C_word *av){
C_word tmp;
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
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("scheduler_toplevel"));
C_check_nursery_minimum(C_calculate_demand(56,c,5));
if(C_unlikely(!C_demand(C_calculate_demand(56,c,5)))){
C_save_and_reclaim((void*)C_scheduler_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(361))){
C_save(t1);
C_rereclaim2(361*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(56);
C_initialize_lf(lf,66);
lf[0]=C_h_intern(&lf[0],12,"\003sysschedule");
lf[1]=C_h_intern(&lf[1],18,"\003syscurrent-thread");
lf[2]=C_h_intern(&lf[2],17,"\003sysdynamic-winds");
lf[3]=C_h_intern(&lf[3],18,"\003sysstandard-input");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],18,"\003sysstandard-error");
lf[6]=C_h_intern(&lf[6],29,"\003syscurrent-exception-handler");
lf[7]=C_h_intern(&lf[7],28,"\003syscurrent-parameter-vector");
lf[8]=C_h_intern(&lf[8],5,"ready");
lf[9]=C_h_intern(&lf[9],7,"running");
lf[10]=C_h_intern(&lf[10],21,"\003syscall-with-cthulhu");
lf[12]=C_h_intern(&lf[12],11,"\003sysfd-list");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\010deadlock");
lf[16]=C_h_intern(&lf[16],20,"\003sysforce-primordial");
lf[17]=C_h_intern(&lf[17],25,"\003systhread-basic-unblock!");
lf[18]=C_h_intern(&lf[18],28,"\003sysremove-from-timeout-list");
lf[19]=C_h_intern(&lf[19],6,"\000input");
lf[20]=C_h_intern(&lf[20],7,"\000output");
lf[21]=C_h_intern(&lf[21],4,"\000all");
lf[22]=C_h_intern(&lf[22],7,"sprintf");
lf[23]=C_h_intern(&lf[23],17,"get-output-string");
lf[24]=C_h_intern(&lf[24],16,"\003syswrite-char-0");
lf[25]=C_h_intern(&lf[25],9,"\003sysprint");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\006, o = ");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\006 (i = ");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000#fdset-test: invalid i/o direction: ");
lf[29]=C_h_intern(&lf[29],18,"open-output-string");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\013 (expected ");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\0009thread is registered for I/O on unknown file-descriptor: ");
lf[32]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\007 (fd = ");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000%create-fdset: invalid i/o direction: ");
lf[35]=C_h_intern(&lf[35],10,"\003syslength");
lf[37]=C_h_intern(&lf[37],22,"\003sysadd-to-ready-queue");
lf[38]=C_h_intern(&lf[38],21,"\003sysprimordial-thread");
lf[39]=C_h_intern(&lf[39],19,"\003systhread-unblock!");
lf[40]=C_h_intern(&lf[40],15,"\003sysready-queue");
lf[41]=C_h_intern(&lf[41],18,"\003sysinterrupt-hook");
lf[42]=C_h_intern(&lf[42],29,"\003systhread-block-for-timeout!");
lf[43]=C_h_intern(&lf[43],7,"blocked");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\0002##sys#thread-block-for-timeout!: invalid timeout: ");
lf[45]=C_h_intern(&lf[45],33,"\003systhread-block-for-termination!");
lf[46]=C_h_intern(&lf[46],4,"dead");
lf[47]=C_h_intern(&lf[47],10,"terminated");
lf[48]=C_h_intern(&lf[48],16,"\003systhread-kill!");
lf[49]=C_h_intern(&lf[49],18,"condition-variable");
lf[50]=C_h_intern(&lf[50],8,"\003sysdelq");
lf[51]=C_h_intern(&lf[51],6,"thread");
lf[52]=C_h_intern(&lf[52],29,"\003sysdefault-exception-handler");
lf[53]=C_h_intern(&lf[53],10,"\003syssignal");
lf[54]=C_h_intern(&lf[54],26,"\003sysshow-exception-warning");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\011in thread");
lf[56]=C_h_intern(&lf[56],25,"\003systhread-block-for-i/o!");
lf[57]=C_h_intern(&lf[57],15,"\003sysall-threads");
lf[58]=C_h_intern(&lf[58],3,"i/o");
lf[59]=C_h_intern(&lf[59],7,"timeout");
lf[60]=C_h_intern(&lf[60],27,"\003sysfetch-and-clear-threads");
lf[61]=C_h_intern(&lf[61],19,"\003sysrestore-threads");
lf[62]=C_h_intern(&lf[62],8,"sleeping");
lf[63]=C_h_intern(&lf[63],4,"exit");
lf[64]=C_h_intern(&lf[64],22,"\003syskill-other-threads");
lf[65]=C_h_intern(&lf[65],9,"suspended");
C_register_lf2(lf,66,create_ptable());{}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##sys#schedule ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_951,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[16]+1 /* (set! ##sys#force-primordial ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1163,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t4=lf[14] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t5=lf[15] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t6=C_mutate2((C_word*)lf[40]+1 /* (set! ##sys#ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1174,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[37]+1 /* (set! ##sys#add-to-ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1177,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[41]+1);
t9=C_mutate2((C_word*)lf[41]+1 /* (set! ##sys#interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1276,a[2]=t8,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t10=lf[11] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t11=C_mutate2((C_word*)lf[18]+1 /* (set! ##sys#remove-from-timeout-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1301,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[42]+1 /* (set! ##sys#thread-block-for-timeout! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1342,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[45]+1 /* (set! ##sys#thread-block-for-termination! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1433,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[48]+1 /* (set! ##sys#thread-kill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1563,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[17]+1 /* (set! ##sys#thread-basic-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1677,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[52]+1 /* (set! ##sys#default-exception-handler ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1689,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(lf[12] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t18=C_mutate2((C_word*)lf[56]+1 /* (set! ##sys#thread-block-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1949,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2(&lf[36] /* (set! ##sys#clear-i/o-state-for-thread! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2286,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[57]+1 /* (set! ##sys#all-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2355,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[60]+1 /* (set! ##sys#fetch-and-clear-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2499,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate2((C_word*)lf[61]+1 /* (set! ##sys#restore-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2509,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate2((C_word*)lf[39]+1 /* (set! ##sys#thread-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2528,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t24=*((C_word*)lf[63]+1);
t25=C_mutate2((C_word*)lf[64]+1 /* (set! ##sys#kill-other-threads ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2560,a[2]=t24,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp));
t26=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t26;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t26+1)))(2,av2);}}

/* ##sys#fetch-and-clear-threads */
static void C_ccall f_2499(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_2499,2,av);}
a=C_alloc(5);
t2=C_a_i_vector4(&a,4,lf[14],lf[15],*((C_word*)lf[12]+1),lf[11]);
t3=lf[14] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[15] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_set_block_item(lf[12] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t6=lf[11] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* f_2490 in all-threads */
static void C_ccall f_2490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2490,6,av);}
a=C_alloc(3);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,t4,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k1652 in k1565 in thread-kill! */
static void C_ccall f_1654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1654,2,av);}
t2=((C_word*)t0)[2];
f_1573(t2,C_i_setslot(((C_word*)t0)[3],C_fix(2),t1));}

/* ##sys#schedule */
static void C_ccall f_951(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_951,2,av);}
a=C_alloc(6);
t2=*((C_word*)lf[1]+1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_slot(*((C_word*)lf[1]+1),C_fix(3));
t6=C_slot(*((C_word*)lf[1]+1),C_fix(5));
t7=C_i_setslot(t6,C_fix(0),*((C_word*)lf[2]+1));
t8=C_i_setslot(t6,C_fix(1),*((C_word*)lf[3]+1));
t9=C_i_setslot(t6,C_fix(2),*((C_word*)lf[4]+1));
t10=C_i_setslot(t6,C_fix(3),*((C_word*)lf[5]+1));
t11=C_i_setslot(t6,C_fix(4),*((C_word*)lf[6]+1));
t12=C_i_setslot(t6,C_fix(5),*((C_word*)lf[7]+1));
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_982,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t14=C_eqp(t5,lf[9]);
t15=(C_truep(t14)?t14:C_eqp(t5,lf[8]));
if(C_truep(t15)){
t16=C_i_set_i_slot(*((C_word*)lf[1]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:172: ##sys#add-to-ready-queue */
t17=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t17;
av2[1]=t13;
av2[2]=*((C_word*)lf[1]+1);
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}
else{
t16=t13;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_SCHEME_UNDEFINED;
f_982(2,av2);}}}

/* loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_fcall f_2080(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t24;
C_word t25;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_2080,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t6=C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm:478: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_2051(t7,t1,t4,t5,t6);}
else{
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2119,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t8=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t9=C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm:480: loop */
t10=((C_word*)((C_word*)t0)[5])[1];
f_2051(t10,t6,t7,t8,t9);}}
else{
t4=C_u_i_car(t2);
t5=t4;
t6=C_slot(t5,C_fix(11));
t7=t6;
if(C_truep(C_slot(t5,C_fix(13)))){
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:486: loop2 */
t23=t1;
t24=t9;
t25=t3;
t1=t23;
t2=t24;
t3=t25;
goto loop;}
else{
if(C_truep(C_i_pairp(t7))){
t8=C_u_i_car(t7);
t9=C_eqp(((C_word*)t0)[6],t8);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2210,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t11=C_u_i_cdr(t7);
t12=t10;
t13=((C_word*)t0)[8];
t14=((C_word*)t0)[9];
t15=t11;
t16=C_eqp(t15,C_SCHEME_TRUE);
t17=(C_truep(t16)?t16:C_eqp(t15,lf[19]));
if(C_truep(t17)){
t18=t12;{
C_word av2[2];
av2[0]=t18;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}
else{
t18=C_eqp(t15,C_SCHEME_FALSE);
t19=(C_truep(t18)?t18:C_eqp(t15,lf[20]));
if(C_truep(t19)){
t20=t12;{
C_word av2[2];
av2[0]=t20;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}
else{
t20=C_eqp(t15,lf[21]);
if(C_truep(t20)){
t21=t12;{
C_word av2[2];
av2[0]=t21;
av2[1]=(C_truep(t13)?t13:t14);
((C_proc)(void*)(*((C_word*)t21+1)))(2,av2);}}
else{
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1904,a[2]=t12,a[3]=t14,a[4]=t13,a[5]=t15,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:427: open-output-string */
t22=*((C_word*)lf[29]+1);{
C_word av2[2];
av2[0]=t22;
av2[1]=t21;
((C_proc)(void*)(*((C_word*)t22+1)))(2,av2);}}}}}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2181,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:495: open-output-string */
t11=*((C_word*)lf[29]+1);{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2157,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(t5,C_fix(4)))){
/* scheduler.scm:491: ##sys#remove-from-timeout-list */
t9=*((C_word*)lf[18]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_2157(2,av2);}}}}}}

/* ##sys#kill-other-threads */
static void C_ccall f_2560(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2560,3,av);}
a=C_alloc(13);
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2563,a[2]=t3,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
t5=C_mutate2((C_word*)lf[38]+1 /* (set! ##sys#primordial-thread ...) */,*((C_word*)lf[1]+1));
t6=C_a_i_list1(&a,1,*((C_word*)lf[1]+1));
t7=C_mutate2(&lf[14] /* (set! ready-queue-head ...) */,t6);
t8=C_mutate2(&lf[15] /* (set! ready-queue-tail ...) */,lf[14]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2588,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:594: suspend */
t10=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=*((C_word*)lf[1]+1);
f_2563(3,av2);}}

/* suspend in kill-other-threads */
static void C_ccall f_2563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2563,3,av);}
t3=C_eqp(t2,((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_UNDEFINED:C_i_setslot(t2,C_fix(3),lf[65]));
t5=C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_set_i_slot(t2,C_fix(12),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k1571 in k1565 in thread-kill! */
static void C_fcall f_1573(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1573,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:344: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1574 in k1571 in k1565 in thread-kill! */
static void C_ccall f_1576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1576,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:345: ##sys#clear-i/o-state-for-thread! */
f_2286(t2,((C_word*)t0)[2]);}

/* k1577 in k1574 in k1571 in k1565 in thread-kill! */
static void C_ccall f_1579(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_1579,2,av);}
a=C_alloc(15);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),((C_word*)t0)[3]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_FALSE);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(11),C_SCHEME_FALSE);
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_END_OF_LIST);
t6=C_slot(((C_word*)t0)[2],C_fix(12));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1597,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
t8=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_i_set_i_slot(((C_word*)t0)[2],C_fix(12),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[2],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1623,a[2]=t10,a[3]=t8,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1623(t12,t7,t6);}}

/* k1423 in k1417 in thread-block-for-timeout! */
static void C_ccall f_1425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1425,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:295: ##sys#print */
t3=*((C_word*)lf[25]+1);{
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
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1417 in thread-block-for-timeout! */
static void C_ccall f_1419(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1419,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1425,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:295: ##sys#print */
t6=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[44];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1496 in for-each-loop256 in thread-kill! */
static void C_ccall f_1498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1498,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],C_fix(3),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1426 in k1423 in k1417 in thread-block-for-timeout! */
static void C_ccall f_1428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1428,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1431,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:295: get-output-string */
t3=*((C_word*)lf[23]+1);{
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

/* k2618 in for-each-loop643 in g631 in k2598 in k2586 in kill-other-threads */
static void C_ccall f_2620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2620,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2610(t3,((C_word*)t0)[4],t2);}

/* k1951 in thread-block-for-i/o! */
static void C_ccall f_1953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1953,2,av);}
a=C_alloc(3);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[43]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(11),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k2637 in k2632 in k2598 in k2586 in kill-other-threads */
static void C_ccall f_2639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2639,2,av);}
/* scheduler.scm:600: exit */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2632 in k2598 in k2586 in kill-other-threads */
static void C_ccall f_2634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2634,2,av);}
a=C_alloc(4);
t2=lf[11] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t3=C_set_block_item(lf[12] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:599: thunk */
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1429 in k1426 in k1423 in k1417 in thread-block-for-timeout! */
static void C_ccall f_1431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1431,2,av);}
t2=((C_word*)t0)[2];
f_1346(t2,C_halt(t1));}

/* ##sys#thread-block-for-termination! */
static void C_ccall f_1433(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1433,4,av);}
a=C_alloc(3);
t4=C_slot(t3,C_fix(3));
t5=C_eqp(t4,lf[46]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[47]));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_slot(t3,C_fix(12));
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_i_setslot(t3,C_fix(12),t8);
t10=C_i_setslot(t2,C_fix(3),lf[43]);
t11=C_i_set_i_slot(t2,C_fix(13),C_SCHEME_FALSE);
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=C_i_setslot(t2,C_fix(11),t3);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* k1278 in interrupt-hook */
static void C_ccall f_1280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1280,2,av);}
/* scheduler.scm:275: oldhook */
t2=((C_word*)t0)[2];{
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
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop630 in k2598 in k2586 in kill-other-threads */
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2644,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2654,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:596: g631 */
t5=((C_word*)t0)[3];
f_2601(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in thread-block-for-i/o! */
static void C_fcall f_1968(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1968,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,*((C_word*)lf[12]+1));
t5=C_mutate2((C_word*)lf[12]+1 /* (set! ##sys#fd-list ...) */,t4);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=C_u_i_cdr(t3);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_i_setslot(t3,C_fix(1),t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=t2;
t7=C_u_i_cdr(t6);
/* scheduler.scm:440: loop */
t9=t1;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}}

/* k2652 in for-each-loop630 in k2598 in k2586 in kill-other-threads */
static void C_ccall f_2654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2654,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2644(t3,((C_word*)t0)[4],t2);}

/* for-each-loop613 in k2586 in kill-other-threads */
static void C_fcall f_2667(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2667,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2677,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:595: g614 */
t5=((C_word*)t0)[3];
f_2589(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1902 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1904(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1904,2,av);}
a=C_alloc(8);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1910,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* scheduler.scm:427: ##sys#print */
t6=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[28];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2459 in loop in loop in loop in all-threads */
static void C_ccall f_2461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2461,2,av);}
/* scheduler.scm:545: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2445(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2675 in for-each-loop613 in k2586 in kill-other-threads */
static void C_ccall f_2677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2677,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2667(t3,((C_word*)t0)[4],t2);}

/* ##sys#interrupt-hook */
static void C_ccall f_1276(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1276,4,av);}
a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1280,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(t2,C_fix(255));
if(C_truep(t5)){
t6=*((C_word*)lf[1]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1294,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp);
t8=C_i_setslot(*((C_word*)lf[1]+1),C_fix(1),t7);
/* scheduler.scm:274: ##sys#schedule */
t9=*((C_word*)lf[0]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* scheduler.scm:275: oldhook */
t6=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k2413 in loop in loop in all-threads */
static void C_ccall f_2415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2415,2,av);}
/* scheduler.scm:538: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2396(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in all-threads */
static void C_fcall f_2373(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_2373,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2389,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_car(t7);
/* scheduler.scm:535: cns */
t9=((C_word*)t0)[3];{
C_word av2[6];
av2[0]=t9;
av2[1]=t6;
av2[2]=lf[8];
av2[3]=C_SCHEME_FALSE;
av2[4]=t8;
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(6,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2396,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2396(t7,t1,*((C_word*)lf[12]+1),t3);}}

/* k1868 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1870(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1870,2,av);}
a=C_alloc(6);
t2=stub352(C_SCHEME_UNDEFINED,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1737,a[2]=t4,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1737(t6,((C_word*)t0)[2],*((C_word*)lf[12]+1));}

/* k2387 in loop in all-threads */
static void C_ccall f_2389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2389,2,av);}
/* scheduler.scm:535: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2373(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2298 in clear-i/o-state-for-thread! */
static void C_ccall f_2300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2300,2,av);}
t2=C_mutate2((C_word*)lf[12]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in clear-i/o-state-for-thread! */
static void C_fcall f_2302(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2302,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_car(t2);
t4=t3;
t5=C_u_i_car(t4);
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2324,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=C_u_i_cdr(t4);
/* scheduler.scm:517: ##sys#delq */
t9=*((C_word*)lf[50]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=((C_word*)t0)[3];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2343,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:522: loop */
t11=t7;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}}

/* loop in loop in loop in all-threads */
static void C_fcall f_2420(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2420,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[2];
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_u_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2438,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* scheduler.scm:542: loop */
t9=t5;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}

/* g631 in k2598 in k2586 in kill-other-threads */
static void C_fcall f_2601(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2601,3,t0,t1,t2);}
a=C_alloc(7);
t3=((C_word*)t0)[2];
t4=C_slot(t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2610,a[2]=t6,a[3]=t3,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2610(t8,t1,t4);}

/* k2598 in k2586 in kill-other-threads */
static void C_ccall f_2600(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_2600,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2601,a[2]=((C_word*)t0)[2],a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t3=*((C_word*)lf[12]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2644,a[2]=t6,a[3]=t2,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2644(t8,t4,*((C_word*)lf[12]+1));}

/* k1929 in k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1902 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1931,2,av);}
t2=C_halt(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2436 in loop in loop in loop in all-threads */
static void C_ccall f_2438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2438,2,av);}
/* scheduler.scm:542: cns */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[58];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* loop in loop in all-threads */
static void C_fcall f_2396(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_2396,4,t0,t1,t2,t3);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_u_i_caar(t2);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2415,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=t2;
t10=C_u_i_car(t9);
t11=C_u_i_cdr(t10);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2420,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t13,a[6]=((C_word)li32),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_2420(t15,t8,t11);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2445,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2445(t7,t1,lf[11],t3);}}

/* for-each-loop362 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_fcall f_1845(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1845,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1855,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:394: g363 */
t5=((C_word*)t0)[3];
f_1748(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* for-each-loop643 in g631 in k2598 in k2586 in kill-other-threads */
static void C_fcall f_2610(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2610,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2620,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:596: g644 */
t5=((C_word*)t0)[3];{
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

/* loop in loop in loop in all-threads */
static void C_fcall f_2445(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trf_2445,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2461,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_caar(t2);
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_cdr(t9);
/* scheduler.scm:545: cns */
t11=((C_word*)t0)[3];{
C_word av2[6];
av2[0]=t11;
av2[1]=t6;
av2[2]=lf[59];
av2[3]=t7;
av2[4]=t10;
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t11+1)))(6,av2);}}
else{
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2322 in loop in clear-i/o-state-for-thread! */
static void C_ccall f_2324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2324,2,av);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_setslot(((C_word*)t0)[4],C_fix(1),t1);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2155 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2157,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:492: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);{
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

/* ##sys#thread-block-for-i/o! */
static void C_ccall f_1949(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_1949,5,av);}
a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1953,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1968,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=((C_word)li27),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1968(t9,t5,*((C_word*)lf[12]+1));}

/* ##sys#force-primordial */
static void C_ccall f_1163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1163,2,av);}
t2=C_i_set_i_slot(*((C_word*)lf[38]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:227: ##sys#thread-unblock! */
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=*((C_word*)lf[38]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1853 in for-each-loop362 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1855,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1845(t3,((C_word*)t0)[4],t2);}

/* ##sys#add-to-ready-queue */
static void C_ccall f_1177(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1177,3,av);}
a=C_alloc(3);
t3=C_i_setslot(t2,C_fix(3),lf[8]);
t4=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=C_eqp(C_SCHEME_END_OF_LIST,lf[14]);
if(C_truep(t5)){
t6=C_mutate2(&lf[14] /* (set! ready-queue-head ...) */,t4);
t7=C_mutate2(&lf[15] /* (set! ready-queue-tail ...) */,t4);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=C_i_setslot(lf[15],C_fix(1),t4);
t7=C_mutate2(&lf[15] /* (set! ready-queue-tail ...) */,t4);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2158 in k2155 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2160,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:493: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2080(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* ##sys#ready-queue */
static void C_ccall f_1174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1174,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=lf[14];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2341 in loop in clear-i/o-state-for-thread! */
static void C_ccall f_2343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2343,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1831 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1833(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1833,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=stub412(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,t3);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* scheduler.scm:419: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_1737(t7,((C_word*)t0)[7],t6);}

/* k1107 in loop in loop1 in k980 in schedule */
static void C_fcall f_1109(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,1)))){
C_save_and_reclaim_args((void *)trf_1109,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_u_i_caar(lf[11]);
t3=C_a_i_flonum_difference(&a,2,t2,((C_word*)t0)[2]);
t4=C_quickflonumtruncate(t3);
t5=C_i_fixnum_max(C_fix(0),t4);
if(C_truep(C_msleep(t5))){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t7=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_mk_bool(C_signal_interrupted_p);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t6);
t8=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a1293 in interrupt-hook */
static void C_ccall f_1294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1294,2,av);}
/* scheduler.scm:273: oldhook */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2185 in k2179 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2187,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_i_car(((C_word*)t0)[6]);
/* scheduler.scm:495: ##sys#print */
t4=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2179 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2181(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2181,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2187,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:495: ##sys#print */
t6=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[31];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1001 in loop2 in k992 in k989 in loop1 in k980 in schedule */
static void C_fcall f_1003(C_word t0,C_word t1){
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
C_word t24;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1003,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(t1,C_fix(3));
t3=C_eqp(t2,lf[8]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=t1;
t6=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#current-thread ...) */,t5);
t7=C_i_setslot(t5,C_fix(3),lf[9]);
t8=C_slot(t5,C_fix(5));
t9=C_slot(t8,C_fix(0));
t10=C_mutate2((C_word*)lf[2]+1 /* (set! ##sys#dynamic-winds ...) */,t9);
t11=C_slot(t8,C_fix(1));
t12=C_mutate2((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,t11);
t13=C_slot(t8,C_fix(2));
t14=C_mutate2((C_word*)lf[4]+1 /* (set! ##sys#standard-output ...) */,t13);
t15=C_slot(t8,C_fix(3));
t16=C_mutate2((C_word*)lf[5]+1 /* (set! ##sys#standard-error ...) */,t15);
t17=C_slot(t8,C_fix(4));
t18=C_mutate2((C_word*)lf[6]+1 /* (set! ##sys#current-exception-handler ...) */,t17);
t19=C_slot(t8,C_fix(5));
t20=C_mutate2((C_word*)lf[7]+1 /* (set! ##sys#current-parameter-vector ...) */,t19);
t21=C_slot(t5,C_fix(9));
t22=C_set_initial_timer_interrupt_period(t21);
t23=C_slot(t5,C_fix(1));
/* scheduler.scm:163: ##sys#call-with-cthulhu */
t24=*((C_word*)lf[10]+1);{
C_word av2[3];
av2[0]=t24;
av2[1]=t4;
av2[2]=t23;
((C_proc)(void*)(*((C_word*)t24+1)))(3,av2);}}
else{
/* scheduler.scm:222: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_999(t4,((C_word*)t0)[2]);}}
else{
if(C_truep(C_i_nullp(lf[11]))){
if(C_truep(C_i_nullp(*((C_word*)lf[12]+1)))){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_halt(lf[13]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* scheduler.scm:220: loop1 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_987(t2,((C_word*)t0)[2]);}}
else{
/* scheduler.scm:220: loop1 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_987(t2,((C_word*)t0)[2]);}}}

/* k1911 in k1908 in k1902 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1913,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:427: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[27];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1908 in k1902 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1910,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:427: ##sys#print */
t3=*((C_word*)lf[25]+1);{
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
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1917 in k1914 in k1911 in k1908 in k1902 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1919,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:427: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[26];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1914 in k1911 in k1908 in k1902 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1916,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:427: ##sys#print */
t3=*((C_word*)lf[25]+1);{
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
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1920 in k1917 in k1914 in k1911 in k1908 in k1902 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1922,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:427: ##sys#print */
t3=*((C_word*)lf[25]+1);{
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

/* k1926 in k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1902 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1928,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1931,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:427: get-output-string */
t3=*((C_word*)lf[23]+1);{
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

/* k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1902 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1925,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:427: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* ##sys#default-exception-handler */
static void C_ccall f_1689(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1689,3,av);}
a=C_alloc(10);
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1693,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_abort_on_thread_exceptions))){
t5=*((C_word*)lf[38]+1);
t6=C_slot(*((C_word*)lf[38]+1),C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1713,a[2]=t7,a[3]=t2,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp);
t9=C_i_setslot(*((C_word*)lf[38]+1),C_fix(1),t8);
/* scheduler.scm:378: ##sys#thread-unblock! */
t10=*((C_word*)lf[39]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t4;
av2[2]=*((C_word*)lf[38]+1);
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
/* scheduler.scm:380: ##sys#show-exception-warning */
t5=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[55];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k1691 in default-exception-handler */
static void C_ccall f_1693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1693,2,av);}
a=C_alloc(3);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(7),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1699,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:382: ##sys#thread-kill! */
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[47];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1697 in k1691 in default-exception-handler */
static void C_ccall f_1699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1699,2,av);}
/* scheduler.scm:383: ##sys#schedule */
t2=*((C_word*)lf[0]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop304 in k1577 in k1574 in k1571 in k1565 in thread-kill! */
static void C_fcall f_1623(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1623,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1633,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:352: g305 */
t5=((C_word*)t0)[3];
f_1604(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1353 in k1344 in thread-block-for-timeout! */
static void C_ccall f_1355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1355,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[43]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(4),((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1631 in for-each-loop304 in k1577 in k1574 in k1571 in k1565 in thread-kill! */
static void C_ccall f_1633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1633,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1623(t3,((C_word*)t0)[4],t2);}

/* ##sys#thread-basic-unblock! */
static void C_ccall f_1677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1677,3,av);}
t3=C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t4=C_i_set_i_slot(t2,C_fix(4),C_SCHEME_FALSE);
/* scheduler.scm:364: ##sys#add-to-ready-queue */
t5=*((C_word*)lf[37]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1669 in k1565 in thread-kill! */
static void C_ccall f_1671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1671,2,av);}
t2=((C_word*)t0)[2];
f_1573(t2,C_i_setslot(((C_word*)t0)[3],C_fix(12),t1));}

/* loop in k1344 in thread-block-for-timeout! */
static void C_fcall f_1366(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1366,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_nullp(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1376,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_1376(t6,t4);}
else{
t6=C_u_i_caar(t2);
t7=t5;
f_1376(t7,C_flonum_lessp(((C_word*)t0)[2],t6));}}

/* g305 in k1577 in k1574 in k1571 in k1565 in thread-kill! */
static void C_fcall f_1604(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1604,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(11));
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
/* scheduler.scm:356: ##sys#thread-basic-unblock! */
t5=*((C_word*)lf[17]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* ##sys#all-threads */
static void C_ccall f_2355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +10,c,6)))){
C_save_and_reclaim((void*)f_2355,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+10);
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
C_word t13;
C_word t14;
C_word t15;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2490,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp):C_u_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_slot(t2,C_fix(1)));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_u_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_slot(t7,C_fix(1)));
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2373,a[2]=t13,a[3]=t5,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_2373(t15,t1,lf[14],t9);}

/* k1798 in k1795 in k1789 in g363 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1800,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:414: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[33];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1801 in k1798 in k1795 in k1789 in g363 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1803,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:414: ##sys#print */
t3=*((C_word*)lf[25]+1);{
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

/* k1804 in k1801 in k1798 in k1795 in k1789 in g363 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1806,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:414: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1374 in loop in k1344 in thread-block-for-timeout! */
static void C_fcall f_1376(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1376,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(1),t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=C_mutate2(&lf[11] /* (set! ##sys#timeout-list ...) */,t3);
t5=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* scheduler.scm:303: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1366(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5]);}}

/* k2194 in k2191 in k2188 in k2185 in k2179 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2196,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:495: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2197 in k2194 in k2191 in k2188 in k2185 in k2179 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2199,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2202,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:495: get-output-string */
t3=*((C_word*)lf[23]+1);{
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

/* k2188 in k2185 in k2179 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2190,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:495: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[30];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2191 in k2188 in k2185 in k2179 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2193,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:495: ##sys#print */
t3=*((C_word*)lf[25]+1);{
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

/* loop in loop1 in k980 in schedule */
static void C_fcall f_1060(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1060,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=lf[11] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_u_i_caar(t2);
t4=t2;
t5=C_u_i_car(t4);
t6=C_u_i_cdr(t5);
t7=C_slot(t6,C_fix(4));
if(C_truep(C_i_equalp(t3,t7))){
if(C_truep(C_flonum_greater_or_equal_p(((C_word*)t0)[2],t3))){
t8=C_i_set_i_slot(t6,C_fix(13),C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1094,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:188: ##sys#clear-i/o-state-for-thread! */
f_2286(t9,t6);}
else{
t8=C_mutate2(&lf[11] /* (set! ##sys#timeout-list ...) */,t2);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[14]))){
t10=C_i_nullp(*((C_word*)lf[12]+1));
t11=t9;
f_1109(t11,(C_truep(t10)?C_i_pairp(lf[11]):C_SCHEME_FALSE));}
else{
t10=t9;
f_1109(t10,C_SCHEME_FALSE);}}}
else{
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:208: loop */
t12=t1;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}}

/* k1810 in k1807 in k1804 in k1801 in k1798 in k1795 in k1789 in g363 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1812,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_halt(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_fcall f_1737(C_word t0,C_word t1,C_word t2){
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
C_word t17;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_1737,3,t0,t1,t2);}
a=C_alloc(25);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_u_i_caar(t2);
t4=t3;
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1748,a[2]=t6,a[3]=t8,a[4]=t4,a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp);
t10=t2;
t11=C_u_i_car(t10);
t12=C_u_i_cdr(t11);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1833,a[2]=t6,a[3]=t8,a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1845,a[2]=t15,a[3]=t9,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_1845(t17,t13,t12);}}

/* k1807 in k1804 in k1801 in k1798 in k1795 in k1789 in g363 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1809,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1812,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:414: get-output-string */
t3=*((C_word*)lf[23]+1);{
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

/* ##sys#remove-from-timeout-list */
static void C_ccall f_1301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1301,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1307,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  f_1307(t3,lf[11],C_SCHEME_FALSE)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in remove-from-timeout-list */
static C_word C_fcall f_1307(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
loop:{}
if(C_truep(C_i_nullp(t1))){
t3=t1;
return(t3);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_slot(t3,C_fix(1));
t6=C_eqp(t5,((C_word*)t0)[2]);
if(C_truep(t6)){
if(C_truep(t2)){
return(C_i_setslot(t2,C_fix(1),t4));}
else{
t7=C_mutate2(&lf[11] /* (set! ##sys#timeout-list ...) */,t4);
return(t7);}}
else{
t9=t4;
t10=t1;
t1=t9;
t2=t10;
goto loop;}}}

/* k2117 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2119,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g363 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_fcall f_1748(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1748,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(t3);
t5=C_eqp(t4,C_SCHEME_TRUE);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[19]));
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(t4,C_SCHEME_FALSE);
t8=(C_truep(t7)?t7:C_eqp(t4,lf[20]));
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=C_eqp(t4,lf[21]);
if(C_truep(t9)){
t10=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t11=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t12=t1;{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1791,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:414: open-output-string */
t11=*((C_word*)lf[29]+1);{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1595 in k1577 in k1574 in k1571 in k1565 in thread-kill! */
static void C_ccall f_1597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1597,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],C_fix(12),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop270 in for-each-loop256 in thread-kill! */
static void C_fcall f_1514(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1514,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1524,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:330: ##sys#thread-unblock! */
t5=*((C_word*)lf[39]+1);{
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

/* loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_fcall f_2051(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t21;
C_word t22;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(13,0,4)))){
C_save_and_reclaim_args((void *)trf_2051,5,t0,t1,t2,t3,t4);}
a=C_alloc(13);
t5=C_i_zerop(t2);
t6=(C_truep(t5)?t5:C_i_nullp(t4));
if(C_truep(t6)){
t7=t4;
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_u_i_car(t4);
t8=t7;
t9=C_u_i_car(t8);
t10=t9;
t11=C_fd_input_ready(t10,t3);
t12=C_fd_output_ready(t10,t3);
t13=(C_truep(t11)?t11:t12);
if(C_truep(t13)){
t14=C_u_i_cdr(t8);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2080,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t10,a[7]=t16,a[8]=t11,a[9]=t12,a[10]=((C_word)li1),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_2080(t18,t1,t14,C_SCHEME_END_OF_LIST);}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2257,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t15=C_a_i_plus(&a,2,t3,C_fix(1));
t16=t4;
t17=C_u_i_cdr(t16);
/* scheduler.scm:502: loop */
t19=t14;
t20=t2;
t21=t15;
t22=t17;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}}}

/* ##sys#thread-kill! */
static void C_ccall f_1563(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1563,4,av);}
a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1567,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_slot(t5,C_fix(8));
if(C_truep(C_i_nullp(t6))){
t7=C_SCHEME_UNDEFINED;
t8=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
f_1567(2,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1540,a[2]=t8,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1540(t10,t4,t6);}}

/* k1565 in thread-kill! */
static void C_ccall f_1567(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1567,2,av);}
a=C_alloc(9);
t2=C_slot(((C_word*)t0)[2],C_fix(11));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(t3,lf[49]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1654,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t3,C_fix(2));
/* scheduler.scm:341: ##sys#delq */
t7=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep(C_i_structurep(t3,lf[51]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1671,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t3,C_fix(12));
/* scheduler.scm:343: ##sys#delq */
t7=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_1573(t6,t5);}}}

/* k2214 in k2211 in k2208 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2216,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:500: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2080(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* k2208 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2210,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(((C_word*)t0)[6],C_fix(4)))){
/* scheduler.scm:498: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);{
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
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2213(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* scheduler.scm:501: loop2 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2080(t5,((C_word*)t0)[4],t3,t4);}}

/* k2211 in k2208 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2213,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:499: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);{
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

/* ##sys#thread-unblock! */
static void C_ccall f_2528(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2528,3,av);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(3));
t4=C_eqp(lf[43],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2538,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_2538(t6,t4);}
else{
t6=C_slot(t2,C_fix(3));
t7=t5;
f_2538(t7,C_eqp(lf[62],t6));}}

/* k980 in schedule */
static void C_ccall f_982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_982,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_987,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_987(t5,((C_word*)t0)[3]);}

/* loop1 in k980 in schedule */
static void C_fcall f_987(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_987,2,t0,t1);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_991,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[11]))){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_991(2,av2);}}
else{
t3=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1060,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1060(t7,t2,lf[11]);}}

/* k2539 in k2536 in thread-unblock! */
static void C_ccall f_2541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2541,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:575: ##sys#clear-i/o-state-for-thread! */
f_2286(t2,((C_word*)t0)[3]);}

/* k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2016(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_2016,2,av);}
a=C_alloc(13);
t2=C_i_pairp(lf[11]);
t3=t2;
t4=C_i_pairp(lf[14]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2025,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=(C_truep(t3)?C_i_not(t5):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_u_i_caar(lf[11]);
t9=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t10=C_a_i_flonum_difference(&a,2,t8,t9);
t11=t6;
f_2025(t11,C_i_flonum_max(lf[32],t10));}
else{
t8=t6;
f_2025(t8,lf[32]);}}

/* k2536 in thread-unblock! */
static void C_fcall f_2538(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2538,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:574: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[18]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#thread-block-for-timeout! */
static void C_ccall f_1342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1342,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1346,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_flonump(t3))){
t5=t4;
f_1346(t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1419,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:295: open-output-string */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1344 in thread-block-for-timeout! */
static void C_fcall f_1346(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,4)))){
C_save_and_reclaim_args((void *)trf_1346,2,t0,t1);}
a=C_alloc(13);
if(C_truep(C_flonum_greaterp(((C_word*)t0)[2],lf[32]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1355,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1366(t6,t2,lf[11],C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#clear-i/o-state-for-thread! */
static void C_fcall f_2286(C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_2286,2,t1,t2);}
a=C_alloc(11);
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_slot(t2,C_fix(11));
t5=C_u_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2300,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2302,a[2]=t6,a[3]=t2,a[4]=t9,a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2302(t11,t7,*((C_word*)lf[12]+1));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_fcall f_2025(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_2025,2,t0,t1);}
a=C_alloc(9);
t2=(C_truep(((C_word*)t0)[2])?stub480(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t1):stub480(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1));
t3=C_eqp(C_fix(-1),t2);
if(C_truep(t3)){
/* scheduler.scm:461: ##sys#force-primordial */
t4=*((C_word*)lf[16]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2049,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2051,a[2]=t6,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2051(t8,t4,t2,C_fix(0),*((C_word*)lf[12]+1));}
else{
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k1795 in k1789 in g363 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1797,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:414: ##sys#print */
t3=*((C_word*)lf[25]+1);{
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
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2542 in k2539 in k2536 in thread-unblock! */
static void C_ccall f_2544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2544,2,av);}
/* scheduler.scm:576: ##sys#thread-basic-unblock! */
t2=*((C_word*)lf[17]+1);{
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

/* k1548 in for-each-loop256 in thread-kill! */
static void C_ccall f_1550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1550,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1540(t3,((C_word*)t0)[4],t2);}

/* k1789 in g363 in loop in k1868 in k989 in loop1 in k980 in schedule */
static void C_ccall f_1791(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1791,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1797,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:414: ##sys#print */
t6=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[34];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a1712 in default-exception-handler */
static void C_ccall f_1713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1713,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1717,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:376: ##sys#signal */
t3=*((C_word*)lf[53]+1);{
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

/* k1715 in a1712 in default-exception-handler */
static void C_ccall f_1717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1717,2,av);}
/* scheduler.scm:377: ptx */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2255 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2257,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2200 in k2197 in k2194 in k2191 in k2188 in k2185 in k2179 in loop2 in loop in k2023 in k2014 in k989 in loop1 in k980 in schedule */
static void C_ccall f_2202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2202,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_halt(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1522 in for-each-loop270 in for-each-loop256 in thread-kill! */
static void C_ccall f_1524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1524,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1514(t3,((C_word*)t0)[4],t2);}

/* k1092 in loop in loop1 in k980 in schedule */
static void C_ccall f_1094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1094,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:189: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[17]+1);{
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

/* k1095 in k1092 in loop in loop1 in k980 in schedule */
static void C_ccall f_1097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1097,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:190: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1060(t4,((C_word*)t0)[4],t3);}

/* k2586 in kill-other-threads */
static void C_ccall f_2588(C_word c,C_word *av){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2588,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2589,a[2]=((C_word*)t0)[2],a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t3=lf[11];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2667,a[2]=t6,a[3]=t2,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2667(t8,t4,lf[11]);}

/* g614 in k2586 in kill-other-threads */
static void C_fcall f_2589(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_2589,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
/* scheduler.scm:595: suspend */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
f_2563(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[132] = {
{"f_991:scheduler_2escm",(void*)f_991},
{"f_1540:scheduler_2escm",(void*)f_1540},
{"f_994:scheduler_2escm",(void*)f_994},
{"f_999:scheduler_2escm",(void*)f_999},
{"f_2049:scheduler_2escm",(void*)f_2049},
{"f_2509:scheduler_2escm",(void*)f_2509},
{"toplevel:scheduler_2escm",(void*)C_scheduler_toplevel},
{"f_2499:scheduler_2escm",(void*)f_2499},
{"f_2490:scheduler_2escm",(void*)f_2490},
{"f_1654:scheduler_2escm",(void*)f_1654},
{"f_951:scheduler_2escm",(void*)f_951},
{"f_2080:scheduler_2escm",(void*)f_2080},
{"f_2560:scheduler_2escm",(void*)f_2560},
{"f_2563:scheduler_2escm",(void*)f_2563},
{"f_1573:scheduler_2escm",(void*)f_1573},
{"f_1576:scheduler_2escm",(void*)f_1576},
{"f_1579:scheduler_2escm",(void*)f_1579},
{"f_1425:scheduler_2escm",(void*)f_1425},
{"f_1419:scheduler_2escm",(void*)f_1419},
{"f_1498:scheduler_2escm",(void*)f_1498},
{"f_1428:scheduler_2escm",(void*)f_1428},
{"f_2620:scheduler_2escm",(void*)f_2620},
{"f_1953:scheduler_2escm",(void*)f_1953},
{"f_2639:scheduler_2escm",(void*)f_2639},
{"f_2634:scheduler_2escm",(void*)f_2634},
{"f_1431:scheduler_2escm",(void*)f_1431},
{"f_1433:scheduler_2escm",(void*)f_1433},
{"f_1280:scheduler_2escm",(void*)f_1280},
{"f_2644:scheduler_2escm",(void*)f_2644},
{"f_1968:scheduler_2escm",(void*)f_1968},
{"f_2654:scheduler_2escm",(void*)f_2654},
{"f_2667:scheduler_2escm",(void*)f_2667},
{"f_1904:scheduler_2escm",(void*)f_1904},
{"f_2461:scheduler_2escm",(void*)f_2461},
{"f_2677:scheduler_2escm",(void*)f_2677},
{"f_1276:scheduler_2escm",(void*)f_1276},
{"f_2415:scheduler_2escm",(void*)f_2415},
{"f_2373:scheduler_2escm",(void*)f_2373},
{"f_1870:scheduler_2escm",(void*)f_1870},
{"f_2389:scheduler_2escm",(void*)f_2389},
{"f_2300:scheduler_2escm",(void*)f_2300},
{"f_2302:scheduler_2escm",(void*)f_2302},
{"f_2420:scheduler_2escm",(void*)f_2420},
{"f_2601:scheduler_2escm",(void*)f_2601},
{"f_2600:scheduler_2escm",(void*)f_2600},
{"f_1931:scheduler_2escm",(void*)f_1931},
{"f_2438:scheduler_2escm",(void*)f_2438},
{"f_2396:scheduler_2escm",(void*)f_2396},
{"f_1845:scheduler_2escm",(void*)f_1845},
{"f_2610:scheduler_2escm",(void*)f_2610},
{"f_2445:scheduler_2escm",(void*)f_2445},
{"f_2324:scheduler_2escm",(void*)f_2324},
{"f_2157:scheduler_2escm",(void*)f_2157},
{"f_1949:scheduler_2escm",(void*)f_1949},
{"f_1163:scheduler_2escm",(void*)f_1163},
{"f_1855:scheduler_2escm",(void*)f_1855},
{"f_1177:scheduler_2escm",(void*)f_1177},
{"f_2160:scheduler_2escm",(void*)f_2160},
{"f_1174:scheduler_2escm",(void*)f_1174},
{"f_2343:scheduler_2escm",(void*)f_2343},
{"f_1833:scheduler_2escm",(void*)f_1833},
{"f_1109:scheduler_2escm",(void*)f_1109},
{"f_1294:scheduler_2escm",(void*)f_1294},
{"f_2187:scheduler_2escm",(void*)f_2187},
{"f_2181:scheduler_2escm",(void*)f_2181},
{"f_1003:scheduler_2escm",(void*)f_1003},
{"f_1913:scheduler_2escm",(void*)f_1913},
{"f_1910:scheduler_2escm",(void*)f_1910},
{"f_1919:scheduler_2escm",(void*)f_1919},
{"f_1916:scheduler_2escm",(void*)f_1916},
{"f_1922:scheduler_2escm",(void*)f_1922},
{"f_1928:scheduler_2escm",(void*)f_1928},
{"f_1925:scheduler_2escm",(void*)f_1925},
{"f_1689:scheduler_2escm",(void*)f_1689},
{"f_1693:scheduler_2escm",(void*)f_1693},
{"f_1699:scheduler_2escm",(void*)f_1699},
{"f_1623:scheduler_2escm",(void*)f_1623},
{"f_1355:scheduler_2escm",(void*)f_1355},
{"f_1633:scheduler_2escm",(void*)f_1633},
{"f_1677:scheduler_2escm",(void*)f_1677},
{"f_1671:scheduler_2escm",(void*)f_1671},
{"f_1366:scheduler_2escm",(void*)f_1366},
{"f_1604:scheduler_2escm",(void*)f_1604},
{"f_2355:scheduler_2escm",(void*)f_2355},
{"f_1800:scheduler_2escm",(void*)f_1800},
{"f_1803:scheduler_2escm",(void*)f_1803},
{"f_1806:scheduler_2escm",(void*)f_1806},
{"f_1376:scheduler_2escm",(void*)f_1376},
{"f_2196:scheduler_2escm",(void*)f_2196},
{"f_2199:scheduler_2escm",(void*)f_2199},
{"f_2190:scheduler_2escm",(void*)f_2190},
{"f_2193:scheduler_2escm",(void*)f_2193},
{"f_1060:scheduler_2escm",(void*)f_1060},
{"f_1812:scheduler_2escm",(void*)f_1812},
{"f_1737:scheduler_2escm",(void*)f_1737},
{"f_1809:scheduler_2escm",(void*)f_1809},
{"f_1301:scheduler_2escm",(void*)f_1301},
{"f_1307:scheduler_2escm",(void*)f_1307},
{"f_2119:scheduler_2escm",(void*)f_2119},
{"f_1748:scheduler_2escm",(void*)f_1748},
{"f_1597:scheduler_2escm",(void*)f_1597},
{"f_1514:scheduler_2escm",(void*)f_1514},
{"f_2051:scheduler_2escm",(void*)f_2051},
{"f_1563:scheduler_2escm",(void*)f_1563},
{"f_1567:scheduler_2escm",(void*)f_1567},
{"f_2216:scheduler_2escm",(void*)f_2216},
{"f_2210:scheduler_2escm",(void*)f_2210},
{"f_2213:scheduler_2escm",(void*)f_2213},
{"f_2528:scheduler_2escm",(void*)f_2528},
{"f_982:scheduler_2escm",(void*)f_982},
{"f_987:scheduler_2escm",(void*)f_987},
{"f_2541:scheduler_2escm",(void*)f_2541},
{"f_2016:scheduler_2escm",(void*)f_2016},
{"f_2538:scheduler_2escm",(void*)f_2538},
{"f_1342:scheduler_2escm",(void*)f_1342},
{"f_1346:scheduler_2escm",(void*)f_1346},
{"f_2286:scheduler_2escm",(void*)f_2286},
{"f_2025:scheduler_2escm",(void*)f_2025},
{"f_1797:scheduler_2escm",(void*)f_1797},
{"f_2544:scheduler_2escm",(void*)f_2544},
{"f_1550:scheduler_2escm",(void*)f_1550},
{"f_1791:scheduler_2escm",(void*)f_1791},
{"f_1713:scheduler_2escm",(void*)f_1713},
{"f_1717:scheduler_2escm",(void*)f_1717},
{"f_2257:scheduler_2escm",(void*)f_2257},
{"f_2202:scheduler_2escm",(void*)f_2202},
{"f_1524:scheduler_2escm",(void*)f_1524},
{"f_1094:scheduler_2escm",(void*)f_1094},
{"f_1097:scheduler_2escm",(void*)f_1097},
{"f_2588:scheduler_2escm",(void*)f_2588},
{"f_2589:scheduler_2escm",(void*)f_2589},
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
S|  for-each		6
S|  ##sys#for-each		1
S|  sprintf		4
o|eliminated procedure checks: 126 
o|specializations:
o|  1 (fpmax float float)
o|  10 (eqv? * (not float))
o|  4 (##sys#check-output-port * * *)
o|  3 (car pair)
o|  20 (cdr pair)
o|  4 (cdar (pair pair *))
(o e)|safe calls: 186 
(o e)|assignments to immediate values: 12 
o|Removed `not' forms: 5 
o|contracted procedure: k1007 
o|inlining procedure: k1004 
o|contracted procedure: "(scheduler.scm:221) switch120" 
o|contracted procedure: "(scheduler.scm:158) restore-thread-state-buffer" 
o|inlining procedure: k1004 
o|contracted procedure: "(scheduler.scm:216) remove-from-ready-queue" 
o|contracted procedure: k1202 
o|inlining procedure: k1199 
o|inlining procedure: k1199 
o|propagated global variable: first-pair179 ready-queue-head 
o|inlining procedure: k1044 
o|inlining procedure: k1044 
o|contracted procedure: "(scheduler.scm:213) unblock-threads-for-i/o" 
o|inlining procedure: k2031 
o|inlining procedure: k2031 
o|inlining procedure: k2053 
o|inlining procedure: k2053 
o|inlining procedure: k2082 
o|inlining procedure: k2082 
o|contracted procedure: k2152 
o|inlining procedure: k2149 
o|contracted procedure: k2175 
o|inlining procedure: k2205 
o|inlining procedure: k2205 
o|contracted procedure: "(scheduler.scm:496) fdset-test" 
o|inlining procedure: k1874 
o|inlining procedure: k1874 
o|inlining procedure: k1892 
o|substituted constant variable: a1906 
o|substituted constant variable: a1907 
o|inlining procedure: k1892 
o|substituted constant variable: a1933 
o|substituted constant variable: a1938 
o|substituted constant variable: a1940 
o|substituted constant variable: a1945 
o|substituted constant variable: a1947 
o|substituted constant variable: a2183 
o|substituted constant variable: a2184 
o|inlining procedure: k2149 
o|contracted procedure: "(scheduler.scm:456) g476477" 
o|substituted constant variable: a2277 
o|contracted procedure: "(scheduler.scm:447) create-fdset" 
o|inlining procedure: k1739 
o|inlining procedure: k1753 
o|inlining procedure: k1770 
o|inlining procedure: k1770 
o|substituted constant variable: a1793 
o|substituted constant variable: a1794 
o|substituted constant variable: a1814 
o|substituted constant variable: a1819 
o|substituted constant variable: a1821 
o|substituted constant variable: a1826 
o|substituted constant variable: a1828 
o|inlining procedure: k1753 
o|inlining procedure: k1739 
o|contracted procedure: "(scheduler.scm:394) g407408" 
o|inlining procedure: k1847 
o|inlining procedure: k1847 
o|contracted procedure: "(scheduler.scm:390) g349350" 
o|inlining procedure: k1062 
o|inlining procedure: k1062 
o|inlining procedure: k1083 
o|inlining procedure: k1083 
o|contracted procedure: k1117 
o|inlining procedure: k1114 
o|inlining procedure: k1114 
o|inlining procedure: k1133 
o|inlining procedure: k1133 
o|contracted procedure: "(scheduler.scm:168) update-thread-state-buffer" 
o|propagated global variable: ct126 ##sys#current-thread 
o|inlining procedure: k1185 
o|inlining procedure: k1185 
o|inlining procedure: k1278 
o|propagated global variable: ct203 ##sys#current-thread 
o|inlining procedure: k1278 
o|inlining procedure: k1309 
o|inlining procedure: k1309 
o|inlining procedure: k1327 
o|inlining procedure: k1327 
o|inlining procedure: k1347 
o|inlining procedure: k1368 
o|inlining procedure: k1368 
o|inlining procedure: k1347 
o|substituted constant variable: a1421 
o|substituted constant variable: a1422 
o|inlining procedure: k1438 
o|inlining procedure: k1438 
o|inlining procedure: k1595 
o|inlining procedure: k1606 
o|inlining procedure: k1606 
o|inlining procedure: k1595 
o|inlining procedure: k1625 
o|inlining procedure: k1625 
o|inlining procedure: k1659 
o|inlining procedure: k1659 
o|contracted procedure: "(scheduler.scm:337) abandon-mutexes" 
o|inlining procedure: k1476 
o|inlining procedure: k1476 
o|inlining procedure: k1542 
o|contracted procedure: "(scheduler.scm:320) g257264" 
o|inlining procedure: k1496 
o|inlining procedure: k1496 
o|inlining procedure: k1516 
o|contracted procedure: "(scheduler.scm:327) g271278" 
o|inlining procedure: k1516 
o|inlining procedure: k1542 
o|propagated global variable: pt340 ##sys#primordial-thread 
o|inlining procedure: k1970 
o|inlining procedure: k1970 
o|inlining procedure: k2288 
o|inlining procedure: k2304 
o|inlining procedure: k2304 
o|inlining procedure: k2325 
o|inlining procedure: k2325 
o|inlining procedure: k2288 
o|inlining procedure: k2375 
o|inlining procedure: k2375 
o|inlining procedure: k2398 
o|inlining procedure: k2422 
o|inlining procedure: k2422 
o|inlining procedure: k2398 
o|inlining procedure: k2447 
o|inlining procedure: k2447 
o|inlining procedure: k2530 
o|inlining procedure: k2530 
o|propagated global variable: primordial606 ##sys#current-thread 
o|inlining procedure: k2612 
o|inlining procedure: k2612 
o|inlining procedure: k2646 
o|inlining procedure: k2646 
o|propagated global variable: g637639 ##sys#fd-list 
o|inlining procedure: k2669 
o|inlining procedure: k2669 
o|propagated global variable: g620622 ##sys#timeout-list 
o|propagated global variable: primordial606 ##sys#current-thread 
o|replaced variables: 261 
o|removed binding forms: 179 
o|substituted constant variable: r12002691 
o|inlining procedure: k1209 
o|inlining procedure: k1209 
o|inlining procedure: k2268 
o|inlining procedure: k2268 
o|substituted constant variable: r11152721 
o|substituted constant variable: r11342726 
o|substituted constant variable: r23052788 
o|converted assignments to bindings: (suspend607) 
o|simplifications: ((let . 1)) 
o|replaced variables: 20 
o|removed binding forms: 288 
o|inlining procedure: k1013 
o|inlining procedure: k1836 
o|replaced variables: 14 
o|removed binding forms: 33 
o|substituted constant variable: r10142900 
o|contracted procedure: k1730 
o|simplifications: ((let . 1)) 
o|replaced variables: 2 
o|removed binding forms: 16 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 17) (##core#call . 234)) 
o|  call simplifications:
o|    vector
o|    list	2
o|    ##sys#structure?	2
o|    flonum?
o|    fp>
o|    fp<
o|    fx=	2
o|    set-cdr!	3
o|    equal?
o|    fp>=
o|    fxmax
o|    ##sys#setislot	18
o|    not
o|    caar	7
o|    fp-	2
o|    fx>
o|    zero?
o|    pair?	16
o|    car	12
o|    cons	15
o|    sub1	2
o|    add1	3
o|    cdr	8
o|    null?	25
o|    eq?	25
o|    ##sys#setslot	29
o|    ##sys#slot	53
o|contracted procedure: k974 
o|contracted procedure: k1038 
o|contracted procedure: k1028 
o|contracted procedure: k957 
o|contracted procedure: k964 
o|contracted procedure: k971 
o|contracted procedure: k1248 
o|contracted procedure: k1252 
o|contracted procedure: k1256 
o|contracted procedure: k1260 
o|contracted procedure: k1264 
o|contracted procedure: k1268 
o|contracted procedure: k1272 
o|contracted procedure: k1019 
o|contracted procedure: k1013 
o|contracted procedure: k1218 
o|contracted procedure: k1205 
o|contracted procedure: k1213 
o|contracted procedure: k1047 
o|contracted procedure: k2017 
o|contracted procedure: k2020 
o|contracted procedure: k2028 
o|contracted procedure: k2034 
o|contracted procedure: k2043 
o|contracted procedure: k2056 
o|contracted procedure: k2059 
o|contracted procedure: k2062 
o|contracted procedure: k2065 
o|contracted procedure: k2071 
o|contracted procedure: k2085 
o|contracted procedure: k2091 
o|contracted procedure: k2098 
o|contracted procedure: k2102 
o|contracted procedure: k2106 
o|contracted procedure: k2113 
o|contracted procedure: k2121 
o|contracted procedure: k2125 
o|contracted procedure: k2129 
o|contracted procedure: k2132 
o|contracted procedure: k2135 
o|contracted procedure: k2141 
o|contracted procedure: k2248 
o|contracted procedure: k2244 
o|contracted procedure: k2240 
o|contracted procedure: k2222 
o|contracted procedure: k2234 
o|contracted procedure: k1877 
o|contracted procedure: k1880 
o|contracted procedure: k1886 
o|contracted procedure: k1889 
o|contracted procedure: k1895 
o|contracted procedure: k2166 
o|contracted procedure: k2259 
o|contracted procedure: k2271 
o|contracted procedure: k2274 
o|contracted procedure: k2279 
o|contracted procedure: k1742 
o|contracted procedure: k1745 
o|contracted procedure: k1750 
o|contracted procedure: k1756 
o|contracted procedure: k1763 
o|contracted procedure: k1766 
o|contracted procedure: k1773 
o|contracted procedure: k1776 
o|contracted procedure: k1783 
o|contracted procedure: k1850 
o|contracted procedure: k1860 
o|contracted procedure: k1864 
o|contracted procedure: k1053 
o|contracted procedure: k1065 
o|contracted procedure: k1069 
o|contracted procedure: k1074 
o|contracted procedure: k1080 
o|contracted procedure: k1086 
o|contracted procedure: k1089 
o|contracted procedure: k1110 
o|contracted procedure: k1127 
o|contracted procedure: k1122 
o|contracted procedure: k1130 
o|contracted procedure: k1136 
o|contracted procedure: k1147 
o|contracted procedure: k1150 
o|contracted procedure: k1153 
o|contracted procedure: k1224 
o|propagated global variable: ct126 ##sys#current-thread 
o|contracted procedure: k1227 
o|contracted procedure: k1230 
o|contracted procedure: k1233 
o|contracted procedure: k1236 
o|contracted procedure: k1239 
o|contracted procedure: k1165 
o|contracted procedure: k1179 
o|contracted procedure: k1182 
o|contracted procedure: k1189 
o|contracted procedure: k1185 
o|contracted procedure: k1284 
o|contracted procedure: k1287 
o|contracted procedure: k1312 
o|contracted procedure: k1315 
o|contracted procedure: k1318 
o|contracted procedure: k1338 
o|contracted procedure: k1324 
o|contracted procedure: k1350 
o|contracted procedure: k1356 
o|contracted procedure: k1359 
o|contracted procedure: k1371 
o|contracted procedure: k1388 
o|contracted procedure: k1384 
o|contracted procedure: k1396 
o|contracted procedure: k1392 
o|contracted procedure: k1403 
o|contracted procedure: k1410 
o|contracted procedure: k1413 
o|contracted procedure: k1435 
o|contracted procedure: k1441 
o|contracted procedure: k1444 
o|contracted procedure: k1464 
o|contracted procedure: k1460 
o|contracted procedure: k1447 
o|contracted procedure: k1450 
o|contracted procedure: k1453 
o|contracted procedure: k1568 
o|contracted procedure: k1580 
o|contracted procedure: k1583 
o|contracted procedure: k1586 
o|contracted procedure: k1589 
o|contracted procedure: k1592 
o|contracted procedure: k1601 
o|contracted procedure: k1616 
o|contracted procedure: k1609 
o|contracted procedure: k1628 
o|contracted procedure: k1638 
o|contracted procedure: k1642 
o|contracted procedure: k1645 
o|contracted procedure: k1656 
o|contracted procedure: k1662 
o|contracted procedure: k1673 
o|contracted procedure: k1473 
o|contracted procedure: k1479 
o|contracted procedure: k1545 
o|contracted procedure: k1555 
o|contracted procedure: k1559 
o|contracted procedure: k1484 
o|contracted procedure: k1487 
o|contracted procedure: k1490 
o|contracted procedure: k1493 
o|contracted procedure: k1502 
o|contracted procedure: k1519 
o|contracted procedure: k1529 
o|contracted procedure: k1533 
o|contracted procedure: k1679 
o|contracted procedure: k1682 
o|contracted procedure: k1694 
o|contracted procedure: k1703 
o|contracted procedure: k1706 
o|propagated global variable: pt340 ##sys#primordial-thread 
o|propagated global variable: pt340 ##sys#primordial-thread 
o|contracted procedure: k1954 
o|contracted procedure: k1957 
o|contracted procedure: k1964 
o|contracted procedure: k1973 
o|contracted procedure: k1981 
o|contracted procedure: k1977 
o|contracted procedure: k1984 
o|contracted procedure: k2008 
o|contracted procedure: k1990 
o|contracted procedure: k1997 
o|contracted procedure: k2351 
o|contracted procedure: k2291 
o|contracted procedure: k2347 
o|contracted procedure: k2294 
o|contracted procedure: k2307 
o|contracted procedure: k2310 
o|contracted procedure: k2313 
o|contracted procedure: k2319 
o|contracted procedure: k2328 
o|contracted procedure: k2332 
o|contracted procedure: k2487 
o|contracted procedure: k2357 
o|contracted procedure: k2481 
o|contracted procedure: k2360 
o|contracted procedure: k2475 
o|contracted procedure: k2363 
o|contracted procedure: k2469 
o|contracted procedure: k2366 
o|contracted procedure: k2378 
o|contracted procedure: k2401 
o|contracted procedure: k2410 
o|contracted procedure: k2425 
o|contracted procedure: k2432 
o|contracted procedure: k2450 
o|contracted procedure: k2463 
o|contracted procedure: k2501 
o|contracted procedure: k2512 
o|contracted procedure: k2516 
o|contracted procedure: k2520 
o|contracted procedure: k2524 
o|contracted procedure: k2556 
o|contracted procedure: k2533 
o|contracted procedure: k2552 
o|contracted procedure: k2574 
o|contracted procedure: k2565 
o|contracted procedure: k2568 
o|contracted procedure: k2582 
o|contracted procedure: k2595 
o|contracted procedure: k2603 
o|contracted procedure: k2615 
o|contracted procedure: k2625 
o|contracted procedure: k2629 
o|contracted procedure: k2649 
o|contracted procedure: k2659 
o|contracted procedure: k2663 
o|contracted procedure: k2672 
o|contracted procedure: k2682 
o|contracted procedure: k2686 
o|propagated global variable: primordial606 ##sys#current-thread 
o|simplifications: ((let . 41)) 
o|removed binding forms: 212 
o|replaced variables: 73 
o|removed binding forms: 28 
o|contracted procedure: k977 
o|contracted procedure: k960 
o|propagated global variable: ct126 ##sys#current-thread 
o|propagated global variable: ct126 ##sys#current-thread 
o|removed binding forms: 2 
o|replaced variables: 2 
o|removed binding forms: 1 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop209 0 
o|converted assignments to bindings: (loop209) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (g614621 for-each-loop613624 g631638 for-each-loop630657 for-each-loop643653 k2536 loop580 loop577 loop573 loop570 loop539 loop461 for-each-loop270281 for-each-loop256289 k1571 g305312 for-each-loop304315 k1344 k1374 loop230 k1107 ##sys#clear-i/o-state-for-thread! loop135 g363370 for-each-loop362403 loop355 k2023 loop2505 loop491 k1001 loop1133 loop2150) 
o|calls to known targets: 78 
o|identified direct recursive calls: f_2080 1 
o|identified direct recursive calls: f_2051 1 
o|identified direct recursive calls: f_1060 1 
o|identified direct recursive calls: f_1307 1 
o|identified direct recursive calls: f_1968 1 
o|identified direct recursive calls: f_2302 1 
o|identified direct recursive calls: f_2420 1 
o|fast box initializations: 20 
o|fast global references: 27 
o|fast global assignments: 22 
o|dropping unused closure argument: f_2286 
*/
/* end of file */

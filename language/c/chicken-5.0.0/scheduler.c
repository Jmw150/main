/* Generated from scheduler.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: scheduler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file scheduler.c
   unit: scheduler
   uses: extras library
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
# define C_msleep(n)   (Sleep((DWORD)C_num_to_uint64(n)), C_SCHEME_TRUE)
#else
# include <sys/time.h>
static C_word C_msleep(C_word ms);
C_word C_msleep(C_word ms) {
#ifdef __CYGWIN__
  if(usleep((useconds_t)C_num_to_uint64(ms) * 1000) == -1) return C_SCHEME_FALSE;
#else
  struct timespec ts;
  C_word ab[C_SIZEOF_FIX_BIGNUM], *a = ab,
         sec = C_s_a_u_i_integer_quotient(&a, 2, ms, C_fix(1000)),
         msec = C_s_a_u_i_integer_remainder(&a, 2, ms, C_fix(1000));
  ts.tv_sec = (time_t)C_num_to_uint64(sec);
  ts.tv_nsec = (long)C_unfix(msec) * 1000000;
  
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

inline static int C_ready_fds_timeout(int to, unsigned int tm) {
  struct timeval timeout;
  timeout.tv_sec = tm / 1000;
  timeout.tv_usec = fmod(tm, 1000) * 1000;
  /* we use FD_SETSIZE, but really should use max fd */
  return select(FD_SETSIZE, &C_fdset_input, &C_fdset_output, NULL, to ? &timeout : NULL);
}

inline static void C_prepare_fdset(int length) {
  FD_ZERO(&C_fdset_input);
  FD_ZERO(&C_fdset_output);
}

inline static void C_fdset_add(int fd, int input, int output) {
  if (input) FD_SET(fd, &C_fdset_input);
  if (output) FD_SET(fd, &C_fdset_output);
}

#else
#  include <poll.h>
#  include <assert.h>

static int C_fdset_nfds;
static struct pollfd *C_fdset_set = NULL;

inline static int C_fd_ready(int fd, int pos, int what) {
  assert(fd == C_fdset_set[pos].fd); /* Must match position in ##sys#fd-list! */
  return(C_fdset_set[pos].revents & what);
}

#define C_fd_input_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLIN|POLLERR|POLLHUP|POLLNVAL))
#define C_fd_output_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLOUT|POLLERR|POLLHUP|POLLNVAL))

inline static int C_ready_fds_timeout(int to, unsigned int tm) {
  return poll(C_fdset_set, C_fdset_nfds, to ? tm : -1);
}

inline static void C_prepare_fdset(int length) {
  /* TODO: Only realloc when needed? */
  C_fdset_set = realloc(C_fdset_set, sizeof(struct pollfd) * length);
  if (C_fdset_set == NULL)
    C_halt(C_SCHEME_FALSE); /* Ugly: no message */
  C_fdset_nfds = 0;
}

/* This *must* be called in order, so position will match ##sys#fd-list */
inline static void C_fdset_add(int fd, int input, int output) {
  C_fdset_set[C_fdset_nfds].events = ((input ? POLLIN : 0) | (output ? POLLOUT : 0));
  C_fdset_set[C_fdset_nfds++].fd = fd;
}
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[71];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,12),40,100,101,108,113,32,120,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,50,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,50,32,116,104,114,101,97,100,115,32,107,101,101,112,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,32,112,111,115,32,108,115,116,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,8),40,103,51,57,51,32,116,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,57,50,32,103,51,57,57,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,49,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,35,35,115,121,115,35,115,99,104,101,100,117,108,101,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,102,111,114,99,101,45,112,114,105,109,111,114,100,105,97,108,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,19),40,35,35,115,121,115,35,114,101,97,100,121,45,113,117,101,117,101,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,97,100,100,45,116,111,45,114,101,97,100,121,45,113,117,101,117,101,32,116,104,114,101,97,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,50,57,56,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,32,115,116,97,116,101,41,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,112,114,101,118,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,114,101,109,111,118,101,45,102,114,111,109,45,116,105,109,101,111,117,116,45,108,105,115,116,32,116,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,116,108,32,112,114,101,118,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,105,109,101,111,117,116,33,32,116,32,116,109,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,101,114,109,105,110,97,116,105,111,110,33,32,116,32,116,50,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,9),40,103,51,51,53,32,116,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,51,52,32,103,51,52,49,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,48,48,32,103,51,48,55,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,56,54,32,103,50,57,51,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,116,104,114,101,97,100,45,107,105,108,108,33,32,116,32,115,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,97,115,105,99,45,117,110,98,108,111,99,107,33,32,116,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,49,54,57,50,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,100,101,102,97,117,108,116,45,101,120,99,101,112,116,105,111,110,45,104,97,110,100,108,101,114,32,97,114,103,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,105,47,111,33,32,116,32,102,100,32,105,47,111,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,99,108,101,97,114,45,105,47,111,45,115,116,97,116,101,45,102,111,114,45,116,104,114,101,97,100,33,32,116,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,27),40,102,95,50,52,54,54,32,113,117,101,117,101,32,97,114,103,32,118,97,108,32,105,110,105,116,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,108,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,26),40,35,35,115,121,115,35,97,108,108,45,116,104,114,101,97,100,115,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,101,116,99,104,45,97,110,100,45,99,108,101,97,114,45,116,104,114,101,97,100,115,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,114,101,115,116,111,114,101,45,116,104,114,101,97,100,115,32,118,101,99,41,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,25),40,35,35,115,121,115,35,116,104,114,101,97,100,45,117,110,98,108,111,99,107,33,32,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,50,53,53,51,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,14),40,97,50,53,52,49,32,114,101,116,117,114,110,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,116,104,114,101,97,100,45,115,108,101,101,112,33,32,116,109,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,98,97,115,101,35,115,108,101,101,112,45,104,111,111,107,32,110,41,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,11),40,115,117,115,112,101,110,100,32,116,41,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,8),40,103,54,52,54,32,97,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,55,56,32,103,54,56,53,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,8),40,103,54,53,54,32,97,41};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,53,53,32,103,54,54,50,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,52,53,32,103,54,53,50,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,107,105,108,108,45,111,116,104,101,114,45,116,104,114,101,97,100,115,32,116,104,117,110,107,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from g505 */
C_regparm static C_word C_fcall stub509(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_truep(C_a0);
unsigned int t1=(unsigned int )C_num_to_unsigned_int(C_a1);
C_r=C_fix((C_word)C_ready_fds_timeout(t0,t1));
return C_r;}

/* from g436 */
C_regparm static C_word C_fcall stub441(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_truep(C_a1);
int t2=(int )C_truep(C_a2);
C_fdset_add(t0,t1,t2);
return C_r;}

/* from g379 */
C_regparm static C_word C_fcall stub382(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_prepare_fdset(t0);
return C_r;}

C_noret_decl(f_1000)
static void C_fcall f_1000(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1004)
static void C_fcall f_1004(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1061)
static void C_fcall f_1061(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word *av) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word *av) C_noret;
C_noret_decl(f_1109)
static void C_fcall f_1109(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word *av) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word *av) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word *av) C_noret;
C_noret_decl(f_1168)
static void C_ccall f_1168(C_word c,C_word *av) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word *av) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word *av) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word *av) C_noret;
C_noret_decl(f_1285)
static void C_ccall f_1285(C_word c,C_word *av) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word *av) C_noret;
C_noret_decl(f_1306)
static void C_ccall f_1306(C_word c,C_word *av) C_noret;
C_noret_decl(f_1312)
static C_word C_fcall f_1312(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word *av) C_noret;
C_noret_decl(f_1356)
static void C_ccall f_1356(C_word c,C_word *av) C_noret;
C_noret_decl(f_1367)
static void C_fcall f_1367(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1377)
static void C_fcall f_1377(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1413)
static void C_ccall f_1413(C_word c,C_word *av) C_noret;
C_noret_decl(f_1478)
static void C_ccall f_1478(C_word c,C_word *av) C_noret;
C_noret_decl(f_1494)
static void C_fcall f_1494(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1504)
static void C_ccall f_1504(C_word c,C_word *av) C_noret;
C_noret_decl(f_1520)
static void C_fcall f_1520(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word *av) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word *av) C_noret;
C_noret_decl(f_1547)
static void C_ccall f_1547(C_word c,C_word *av) C_noret;
C_noret_decl(f_1553)
static void C_fcall f_1553(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1556)
static void C_ccall f_1556(C_word c,C_word *av) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word *av) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577(C_word c,C_word *av) C_noret;
C_noret_decl(f_1584)
static void C_fcall f_1584(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1603)
static void C_fcall f_1603(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1613)
static void C_ccall f_1613(C_word c,C_word *av) C_noret;
C_noret_decl(f_1634)
static void C_ccall f_1634(C_word c,C_word *av) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word *av) C_noret;
C_noret_decl(f_1657)
static void C_ccall f_1657(C_word c,C_word *av) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word *av) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word *av) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word *av) C_noret;
C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word *av) C_noret;
C_noret_decl(f_1697)
static void C_ccall f_1697(C_word c,C_word *av) C_noret;
C_noret_decl(f_1717)
static void C_fcall f_1717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1728)
static void C_fcall f_1728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word *av) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word *av) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word *av) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783(C_word c,C_word *av) C_noret;
C_noret_decl(f_1786)
static void C_ccall f_1786(C_word c,C_word *av) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word *av) C_noret;
C_noret_decl(f_1792)
static void C_ccall f_1792(C_word c,C_word *av) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word *av) C_noret;
C_noret_decl(f_1825)
static void C_fcall f_1825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word *av) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word *av) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word *av) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word *av) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word *av) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word *av) C_noret;
C_noret_decl(f_1899)
static void C_ccall f_1899(C_word c,C_word *av) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word *av) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word *av) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word *av) C_noret;
C_noret_decl(f_1911)
static void C_ccall f_1911(C_word c,C_word *av) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word *av) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word *av) C_noret;
C_noret_decl(f_1948)
static void C_fcall f_1948(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word *av) C_noret;
C_noret_decl(f_2005)
static void C_ccall f_2005(C_word c,C_word *av) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029(C_word c,C_word *av) C_noret;
C_noret_decl(f_2031)
static void C_fcall f_2031(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2058)
static void C_fcall f_2058(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word *av) C_noret;
C_noret_decl(f_2127)
static void C_ccall f_2127(C_word c,C_word *av) C_noret;
C_noret_decl(f_2130)
static void C_ccall f_2130(C_word c,C_word *av) C_noret;
C_noret_decl(f_2151)
static void C_ccall f_2151(C_word c,C_word *av) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word *av) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word *av) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word *av) C_noret;
C_noret_decl(f_2166)
static void C_ccall f_2166(C_word c,C_word *av) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word *av) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word *av) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word *av) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word *av) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word *av) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word *av) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word *av) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word *av) C_noret;
C_noret_decl(f_2262)
static void C_fcall f_2262(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2276)
static void C_ccall f_2276(C_word c,C_word *av) C_noret;
C_noret_decl(f_2278)
static void C_fcall f_2278(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word *av) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word *av) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331(C_word c,C_word *av) C_noret;
C_noret_decl(f_2349)
static void C_fcall f_2349(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word *av) C_noret;
C_noret_decl(f_2372)
static void C_fcall f_2372(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word *av) C_noret;
C_noret_decl(f_2396)
static void C_fcall f_2396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word *av) C_noret;
C_noret_decl(f_2421)
static void C_fcall f_2421(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word *av) C_noret;
C_noret_decl(f_2466)
static void C_ccall f_2466(C_word c,C_word *av) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word *av) C_noret;
C_noret_decl(f_2485)
static void C_ccall f_2485(C_word c,C_word *av) C_noret;
C_noret_decl(f_2504)
static void C_ccall f_2504(C_word c,C_word *av) C_noret;
C_noret_decl(f_2514)
static void C_fcall f_2514(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word *av) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word *av) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word *av) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542(C_word c,C_word *av) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word *av) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word *av) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word *av) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word *av) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word *av) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word *av) C_noret;
C_noret_decl(f_2600)
static void C_fcall f_2600(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word *av) C_noret;
C_noret_decl(f_2612)
static void C_fcall f_2612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2621)
static void C_fcall f_2621(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word *av) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word *av) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word *av) C_noret;
C_noret_decl(f_2655)
static void C_fcall f_2655(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2665)
static void C_ccall f_2665(C_word c,C_word *av) C_noret;
C_noret_decl(f_2678)
static void C_fcall f_2678(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word *av) C_noret;
C_noret_decl(f_904)
static void C_ccall f_904(C_word c,C_word *av) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word *av) C_noret;
C_noret_decl(f_909)
static void C_fcall f_909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_915)
static void C_fcall f_915(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word *av) C_noret;
C_noret_decl(f_952)
static void C_ccall f_952(C_word c,C_word *av) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word *av) C_noret;
C_noret_decl(f_988)
static void C_fcall f_988(C_word t0,C_word t1) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word *av) C_noret;
C_noret_decl(f_995)
static void C_ccall f_995(C_word c,C_word *av) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externexport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1000)
static void C_ccall trf_1000(C_word c,C_word *av) C_noret;
static void C_ccall trf_1000(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1000(t0,t1);}

C_noret_decl(trf_1004)
static void C_ccall trf_1004(C_word c,C_word *av) C_noret;
static void C_ccall trf_1004(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1004(t0,t1);}

C_noret_decl(trf_1061)
static void C_ccall trf_1061(C_word c,C_word *av) C_noret;
static void C_ccall trf_1061(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1061(t0,t1,t2);}

C_noret_decl(trf_1109)
static void C_ccall trf_1109(C_word c,C_word *av) C_noret;
static void C_ccall trf_1109(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1109(t0,t1);}

C_noret_decl(trf_1367)
static void C_ccall trf_1367(C_word c,C_word *av) C_noret;
static void C_ccall trf_1367(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1367(t0,t1,t2,t3);}

C_noret_decl(trf_1377)
static void C_ccall trf_1377(C_word c,C_word *av) C_noret;
static void C_ccall trf_1377(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1377(t0,t1);}

C_noret_decl(trf_1494)
static void C_ccall trf_1494(C_word c,C_word *av) C_noret;
static void C_ccall trf_1494(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1494(t0,t1,t2);}

C_noret_decl(trf_1520)
static void C_ccall trf_1520(C_word c,C_word *av) C_noret;
static void C_ccall trf_1520(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1520(t0,t1,t2);}

C_noret_decl(trf_1553)
static void C_ccall trf_1553(C_word c,C_word *av) C_noret;
static void C_ccall trf_1553(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1553(t0,t1);}

C_noret_decl(trf_1584)
static void C_ccall trf_1584(C_word c,C_word *av) C_noret;
static void C_ccall trf_1584(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1584(t0,t1,t2);}

C_noret_decl(trf_1603)
static void C_ccall trf_1603(C_word c,C_word *av) C_noret;
static void C_ccall trf_1603(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1603(t0,t1,t2);}

C_noret_decl(trf_1717)
static void C_ccall trf_1717(C_word c,C_word *av) C_noret;
static void C_ccall trf_1717(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1717(t0,t1,t2);}

C_noret_decl(trf_1728)
static void C_ccall trf_1728(C_word c,C_word *av) C_noret;
static void C_ccall trf_1728(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1728(t0,t1,t2);}

C_noret_decl(trf_1825)
static void C_ccall trf_1825(C_word c,C_word *av) C_noret;
static void C_ccall trf_1825(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1825(t0,t1,t2);}

C_noret_decl(trf_1948)
static void C_ccall trf_1948(C_word c,C_word *av) C_noret;
static void C_ccall trf_1948(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1948(t0,t1,t2);}

C_noret_decl(trf_2031)
static void C_ccall trf_2031(C_word c,C_word *av) C_noret;
static void C_ccall trf_2031(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2031(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2058)
static void C_ccall trf_2058(C_word c,C_word *av) C_noret;
static void C_ccall trf_2058(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2058(t0,t1,t2,t3);}

C_noret_decl(trf_2262)
static void C_ccall trf_2262(C_word c,C_word *av) C_noret;
static void C_ccall trf_2262(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2262(t0,t1);}

C_noret_decl(trf_2278)
static void C_ccall trf_2278(C_word c,C_word *av) C_noret;
static void C_ccall trf_2278(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2278(t0,t1,t2);}

C_noret_decl(trf_2349)
static void C_ccall trf_2349(C_word c,C_word *av) C_noret;
static void C_ccall trf_2349(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2349(t0,t1,t2,t3);}

C_noret_decl(trf_2372)
static void C_ccall trf_2372(C_word c,C_word *av) C_noret;
static void C_ccall trf_2372(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2372(t0,t1,t2,t3);}

C_noret_decl(trf_2396)
static void C_ccall trf_2396(C_word c,C_word *av) C_noret;
static void C_ccall trf_2396(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2396(t0,t1,t2);}

C_noret_decl(trf_2421)
static void C_ccall trf_2421(C_word c,C_word *av) C_noret;
static void C_ccall trf_2421(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2421(t0,t1,t2,t3);}

C_noret_decl(trf_2514)
static void C_ccall trf_2514(C_word c,C_word *av) C_noret;
static void C_ccall trf_2514(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2514(t0,t1);}

C_noret_decl(trf_2600)
static void C_ccall trf_2600(C_word c,C_word *av) C_noret;
static void C_ccall trf_2600(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2600(t0,t1,t2);}

C_noret_decl(trf_2612)
static void C_ccall trf_2612(C_word c,C_word *av) C_noret;
static void C_ccall trf_2612(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2612(t0,t1,t2);}

C_noret_decl(trf_2621)
static void C_ccall trf_2621(C_word c,C_word *av) C_noret;
static void C_ccall trf_2621(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2621(t0,t1,t2);}

C_noret_decl(trf_2655)
static void C_ccall trf_2655(C_word c,C_word *av) C_noret;
static void C_ccall trf_2655(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2655(t0,t1,t2);}

C_noret_decl(trf_2678)
static void C_ccall trf_2678(C_word c,C_word *av) C_noret;
static void C_ccall trf_2678(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2678(t0,t1,t2);}

C_noret_decl(trf_909)
static void C_ccall trf_909(C_word c,C_word *av) C_noret;
static void C_ccall trf_909(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_909(t0,t1,t2);}

C_noret_decl(trf_915)
static void C_ccall trf_915(C_word c,C_word *av) C_noret;
static void C_ccall trf_915(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_915(t0,t1,t2);}

C_noret_decl(trf_988)
static void C_ccall trf_988(C_word c,C_word *av) C_noret;
static void C_ccall trf_988(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_988(t0,t1);}

/* loop2 in k993 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_fcall f_1000(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1000,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1004,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=lf[16];
t4=C_i_nullp(lf[16]);
if(C_truep(C_i_not(t4))){
t5=C_slot(lf[16],C_fix(1));
t6=C_mutate(&lf[16] /* (set! ready-queue-head ...) */,t5);
t7=C_eqp(C_SCHEME_END_OF_LIST,t5);
if(C_truep(t7)){
t8=lf[17] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t9=C_u_i_car(t3);
t10=t2;
f_1004(t10,t9);}
else{
t8=C_u_i_car(t3);
t9=t2;
f_1004(t9,t8);}}
else{
t5=t2;
f_1004(t5,C_SCHEME_FALSE);}}

/* k1002 in loop2 in k993 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_fcall f_1004(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_1004,2,t0,t1);}
if(C_truep(C_i_not(t1))){
if(C_truep(C_i_nullp(lf[10]))){
if(C_truep(C_i_nullp(*((C_word*)lf[11]+1)))){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_halt(lf[12]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* scheduler.scm:231: loop1 */
t2=((C_word*)((C_word*)t0)[3])[1];
f_988(t2,((C_word*)t0)[2]);}}
else{
/* scheduler.scm:231: loop1 */
t2=((C_word*)((C_word*)t0)[3])[1];
f_988(t2,((C_word*)t0)[2]);}}
else{
t2=C_slot(t1,C_fix(3));
t3=C_eqp(t2,lf[13]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=t1;
t6=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#current-thread ...) */,t5);
t7=C_i_setslot(t5,C_fix(3),lf[14]);
t8=C_slot(t5,C_fix(5));
t9=C_slot(t8,C_fix(0));
t10=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#dynamic-winds ...) */,t9);
t11=C_slot(t8,C_fix(1));
t12=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#standard-input ...) */,t11);
t13=C_slot(t8,C_fix(2));
t14=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#standard-output ...) */,t13);
t15=C_slot(t8,C_fix(3));
t16=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#standard-error ...) */,t15);
t17=C_slot(t8,C_fix(4));
t18=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#current-exception-handler ...) */,t17);
t19=C_slot(t8,C_fix(5));
t20=C_mutate((C_word*)lf[9]+1 /* (set! ##sys#current-parameter-vector ...) */,t19);
t21=C_slot(t5,C_fix(9));
t22=C_set_initial_timer_interrupt_period(t21);
t23=C_slot(t5,C_fix(1));
/* scheduler.scm:175: ##sys#call-with-cthulhu */
t24=*((C_word*)lf[15]+1);{
C_word av2[3];
av2[0]=t24;
av2[1]=t4;
av2[2]=t23;
((C_proc)(void*)(*((C_word*)t24+1)))(3,av2);}}
else{
/* scheduler.scm:233: loop2 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1000(t4,((C_word*)t0)[2]);}}}

/* loop in loop1 in k981 in schedule in k905 in k902 */
static void C_fcall f_1061(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1061,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
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
if(C_truep(C_i_greater_or_equalp(((C_word*)t0)[2],t3))){
t8=C_i_set_i_slot(t6,C_fix(13),C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1094,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:200: ##sys#clear-i/o-state-for-thread! */
f_2262(t9,t6);}
else{
t8=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t2);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1109,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[16]))){
t10=C_i_nullp(*((C_word*)lf[11]+1));
t11=t9;
f_1109(t11,(C_truep(t10)?C_i_pairp(lf[10]):C_SCHEME_FALSE));}
else{
t10=t9;
f_1109(t10,C_SCHEME_FALSE);}}}
else{
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:219: loop */
t12=t1;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}}

/* k1092 in loop in loop1 in k981 in schedule in k905 in k902 */
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
/* scheduler.scm:201: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1095 in k1092 in loop in loop1 in k981 in schedule in k905 in k902 */
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
/* scheduler.scm:202: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1061(t4,((C_word*)t0)[4],t3);}

/* k1107 in loop in loop1 in k981 in schedule in k905 in k902 */
static void C_fcall f_1109(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1109,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_u_i_caar(lf[10]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1134,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:212: scheme#round */
t5=*((C_word*)lf[36]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1113 in k1107 in loop in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_1115,2,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_s_a_i_minus(&a,2,t1,((C_word*)t0)[4]);
/* scheduler.scm:216: scheme#max */
t4=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_fix(0);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1125 in k1113 in k1107 in loop in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1127,2,av);}
t2=C_msleep(t1);
if(C_truep(C_i_not(t2))){
t3=C_mk_bool(C_signal_interrupted_p);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1132 in k1107 in loop in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1134,2,av);}
/* scheduler.scm:212: scheme#inexact->exact */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* ##sys#force-primordial in k905 in k902 */
static void C_ccall f_1168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1168,2,av);}
t2=C_i_set_i_slot(*((C_word*)lf[42]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:238: ##sys#thread-unblock! */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=*((C_word*)lf[42]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* ##sys#ready-queue in k905 in k902 */
static void C_ccall f_1179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1179,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[16];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#add-to-ready-queue in k905 in k902 */
static void C_ccall f_1182(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1182,3,av);}
a=C_alloc(3);
t3=C_i_setslot(t2,C_fix(3),lf[13]);
t4=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=C_eqp(C_SCHEME_END_OF_LIST,lf[16]);
if(C_truep(t5)){
t6=C_mutate(&lf[16] /* (set! ready-queue-head ...) */,t4);
t7=C_mutate(&lf[17] /* (set! ready-queue-tail ...) */,t4);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=C_i_setslot(lf[17],C_fix(1),t4);
t7=C_mutate(&lf[17] /* (set! ready-queue-tail ...) */,t4);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* ##sys#interrupt-hook in k905 in k902 */
static void C_ccall f_1281(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1281,4,av);}
a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1285,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(t2,C_fix(255));
if(C_truep(t5)){
t6=*((C_word*)lf[3]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1299,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp);
t8=C_i_setslot(*((C_word*)lf[3]+1),C_fix(1),t7);
/* scheduler.scm:285: ##sys#schedule */
t9=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* scheduler.scm:286: oldhook */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1283 in interrupt-hook in k905 in k902 */
static void C_ccall f_1285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1285,2,av);}
/* scheduler.scm:286: oldhook */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a1298 in interrupt-hook in k905 in k902 */
static void C_ccall f_1299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1299,2,av);}
/* scheduler.scm:284: oldhook */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##sys#remove-from-timeout-list in k905 in k902 */
static void C_ccall f_1306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1306,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1312,a[2]=t2,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_1312(t3,lf[10],C_SCHEME_FALSE)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in remove-from-timeout-list in k905 in k902 */
static C_word C_fcall f_1312(C_word t0,C_word t1,C_word t2){
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
t7=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t4);
return(t7);}}
else{
t9=t4;
t10=t1;
t1=t9;
t2=t10;
goto loop;}}}

/* ##sys#thread-block-for-timeout! in k905 in k902 */
static void C_ccall f_1347(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1347,4,av);}
a=C_alloc(13);
t4=t3;
if(C_truep(C_i_greaterp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1356,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1367,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1367(t9,t5,lf[10],C_SCHEME_FALSE);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1354 in thread-block-for-timeout! in k905 in k902 */
static void C_ccall f_1356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1356,2,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[47]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(4),((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in thread-block-for-timeout! in k905 in k902 */
static void C_fcall f_1367(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1367,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_nullp(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1377,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_1377(t6,t4);}
else{
t6=((C_word*)t0)[2];
t7=C_u_i_caar(t2);
t8=t5;
f_1377(t8,C_i_lessp(t6,t7));}}

/* k1375 in loop in thread-block-for-timeout! in k905 in k902 */
static void C_fcall f_1377(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1377,2,t0,t1);}
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
t4=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t3);
t5=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=C_slot(((C_word*)t0)[5],C_fix(1));
/* scheduler.scm:311: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1367(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5]);}}

/* ##sys#thread-block-for-termination! in k905 in k902 */
static void C_ccall f_1413(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1413,4,av);}
a=C_alloc(3);
t4=C_slot(t3,C_fix(3));
t5=C_eqp(t4,lf[49]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[50]));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_slot(t3,C_fix(12));
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_i_setslot(t3,C_fix(12),t8);
t10=C_i_setslot(t2,C_fix(3),lf[47]);
t11=C_i_set_i_slot(t2,C_fix(13),C_SCHEME_FALSE);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_i_setslot(t2,C_fix(11),t3);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* k1476 in for-each-loop286 in thread-kill! in k905 in k902 */
static void C_ccall f_1478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1478,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],C_fix(3),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop300 in for-each-loop286 in thread-kill! in k905 in k902 */
static void C_fcall f_1494(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1494,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1504,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:338: ##sys#thread-unblock! */
t5=*((C_word*)lf[43]+1);{
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

/* k1502 in for-each-loop300 in for-each-loop286 in thread-kill! in k905 in k902 */
static void C_ccall f_1504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1504,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1494(t3,((C_word*)t0)[4],t2);}

/* for-each-loop286 in thread-kill! in k905 in k902 */
static void C_fcall f_1520(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1520,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1530,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_set_i_slot(t6,C_fix(2),C_SCHEME_FALSE);
t8=C_i_set_i_slot(t6,C_fix(4),C_SCHEME_TRUE);
t9=C_i_set_i_slot(t6,C_fix(5),C_SCHEME_FALSE);
t10=C_slot(t6,C_fix(3));
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1478,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t10))){
t12=t5;{
C_word av2[2];
av2[0]=t12;
av2[1]=C_i_set_i_slot(t6,C_fix(3),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1494,a[2]=t13,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp));
t15=((C_word*)t13)[1];
f_1494(t15,t11,t10);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1528 in for-each-loop286 in thread-kill! in k905 in k902 */
static void C_ccall f_1530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1530,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1520(t3,((C_word*)t0)[4],t2);}

/* ##sys#thread-kill! in k905 in k902 */
static void C_ccall f_1543(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1543,4,av);}
a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1547,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_slot(t5,C_fix(8));
if(C_truep(C_i_nullp(t6))){
t7=C_SCHEME_UNDEFINED;
t8=t4;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
f_1547(2,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1520,a[2]=t8,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1520(t10,t4,t6);}}

/* k1545 in thread-kill! in k905 in k902 */
static void C_ccall f_1547(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1547,2,av);}
a=C_alloc(9);
t2=C_slot(((C_word*)t0)[2],C_fix(11));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(t3,lf[52]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1634,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t3,C_fix(2));
/* scheduler.scm:349: delq */
f_909(t5,((C_word*)t0)[2],t6);}
else{
if(C_truep(C_i_structurep(t3,lf[53]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1651,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(t3,C_fix(12));
/* scheduler.scm:351: delq */
f_909(t5,((C_word*)t0)[2],t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_1553(t6,t5);}}}

/* k1551 in k1545 in thread-kill! in k905 in k902 */
static void C_fcall f_1553(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1553,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:352: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[20]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1554 in k1551 in k1545 in thread-kill! in k905 in k902 */
static void C_ccall f_1556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1556,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:353: ##sys#clear-i/o-state-for-thread! */
f_2262(t2,((C_word*)t0)[2]);}

/* k1557 in k1554 in k1551 in k1545 in thread-kill! in k905 in k902 */
static void C_ccall f_1559(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1559,2,av);}
a=C_alloc(15);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),((C_word*)t0)[3]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_FALSE);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(11),C_SCHEME_FALSE);
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_END_OF_LIST);
t6=C_slot(((C_word*)t0)[2],C_fix(12));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1577,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
t8=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_set_i_slot(((C_word*)t0)[2],C_fix(12),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1584,a[2]=((C_word*)t0)[2],a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1603,a[2]=t10,a[3]=t8,a[4]=((C_word)li22),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1603(t12,t7,t6);}}

/* k1575 in k1557 in k1554 in k1551 in k1545 in thread-kill! in k905 in k902 */
static void C_ccall f_1577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1577,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],C_fix(12),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g335 in k1557 in k1554 in k1551 in k1545 in thread-kill! in k905 in k902 */
static void C_fcall f_1584(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1584,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(11));
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
/* scheduler.scm:364: ##sys#thread-basic-unblock! */
t5=*((C_word*)lf[19]+1);{
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

/* for-each-loop334 in k1557 in k1554 in k1551 in k1545 in thread-kill! in k905 in k902 */
static void C_fcall f_1603(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1603,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1613,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:360: g335 */
t5=((C_word*)t0)[3];
f_1584(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1611 in for-each-loop334 in k1557 in k1554 in k1551 in k1545 in thread-kill! in k905 in k902 */
static void C_ccall f_1613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1613,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1603(t3,((C_word*)t0)[4],t2);}

/* k1632 in k1545 in thread-kill! in k905 in k902 */
static void C_ccall f_1634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1634,2,av);}
t2=((C_word*)t0)[2];
f_1553(t2,C_i_setslot(((C_word*)t0)[3],C_fix(2),t1));}

/* k1649 in k1545 in thread-kill! in k905 in k902 */
static void C_ccall f_1651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1651,2,av);}
t2=((C_word*)t0)[2];
f_1553(t2,C_i_setslot(((C_word*)t0)[3],C_fix(12),t1));}

/* ##sys#thread-basic-unblock! in k905 in k902 */
static void C_ccall f_1657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1657,3,av);}
t3=C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t4=C_i_set_i_slot(t2,C_fix(4),C_SCHEME_FALSE);
/* scheduler.scm:372: ##sys#add-to-ready-queue */
t5=*((C_word*)lf[41]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* ##sys#default-exception-handler in k905 in k902 */
static void C_ccall f_1669(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1669,3,av);}
a=C_alloc(10);
t3=*((C_word*)lf[3]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1673,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_abort_on_thread_exceptions))){
t5=*((C_word*)lf[42]+1);
t6=C_slot(*((C_word*)lf[42]+1),C_fix(1));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1693,a[2]=t7,a[3]=t2,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp);
t9=C_i_setslot(*((C_word*)lf[42]+1),C_fix(1),t8);
/* scheduler.scm:386: ##sys#thread-unblock! */
t10=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t4;
av2[2]=*((C_word*)lf[42]+1);
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
/* scheduler.scm:388: ##sys#show-exception-warning */
t5=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[57];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k1671 in default-exception-handler in k905 in k902 */
static void C_ccall f_1673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1673,2,av);}
a=C_alloc(3);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(7),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1679,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:390: ##sys#thread-kill! */
t4=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[50];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1677 in k1671 in default-exception-handler in k905 in k902 */
static void C_ccall f_1679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1679,2,av);}
/* scheduler.scm:391: ##sys#schedule */
t2=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1692 in default-exception-handler in k905 in k902 */
static void C_ccall f_1693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1693,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1697,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:384: chicken.condition#signal */
t3=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1695 in a1692 in default-exception-handler in k905 in k902 */
static void C_ccall f_1697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1697,2,av);}
/* scheduler.scm:385: ptx */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_fcall f_1717(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1717,3,t0,t1,t2);}
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
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1728,a[2]=t6,a[3]=t8,a[4]=t4,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp);
t10=t2;
t11=C_u_i_car(t10);
t12=C_u_i_cdr(t11);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1813,a[2]=t6,a[3]=t8,a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1825,a[2]=t15,a[3]=t9,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_1825(t17,t13,t12);}}

/* g393 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_fcall f_1728(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1728,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(t3);
t5=C_eqp(t4,C_SCHEME_TRUE);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[28]));
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(t4,C_SCHEME_FALSE);
t8=(C_truep(t7)?t7:C_eqp(t4,lf[29]));
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=C_eqp(t4,lf[30]);
if(C_truep(t9)){
t10=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t11=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t12=t1;{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1771,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:422: chicken.base#open-output-string */
t11=*((C_word*)lf[27]+1);{
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

/* k1769 in g393 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1771(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1771,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1777,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:422: ##sys#print */
t6=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[38];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1775 in k1769 in g393 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1777,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:422: ##sys#print */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1778 in k1775 in k1769 in g393 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1780,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:422: ##sys#print */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[37];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1781 in k1778 in k1775 in k1769 in g393 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1783,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:422: ##sys#print */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1784 in k1781 in k1778 in k1775 in k1769 in g393 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1786,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:422: ##sys#write-char-0 */
t3=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1787 in k1784 in k1781 in k1778 in k1775 in k1769 in g393 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1789,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1792,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:422: chicken.base#get-output-string */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1790 in k1787 in k1784 in k1781 in k1778 in k1775 in k1769 in g393 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1792,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_halt(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1811 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1813(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1813,2,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=stub441(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,t3);
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* scheduler.scm:427: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_1717(t7,((C_word*)t0)[7],t6);}

/* for-each-loop392 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_fcall f_1825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1825,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1835,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:405: g393 */
t5=((C_word*)t0)[3];
f_1728(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1833 in for-each-loop392 in loop in k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1835,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1825(t3,((C_word*)t0)[4],t2);}

/* k1848 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1850(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1850,2,av);}
a=C_alloc(6);
t2=stub382(C_SCHEME_UNDEFINED,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1717,a[2]=t4,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1717(t6,((C_word*)t0)[2],*((C_word*)lf[11]+1));}

/* k1882 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1884(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1884,2,av);}
a=C_alloc(8);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* scheduler.scm:435: ##sys#print */
t6=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[33];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k1888 in k1882 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1890,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:435: ##sys#print */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1891 in k1888 in k1882 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1893,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:435: ##sys#print */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[32];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1894 in k1891 in k1888 in k1882 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1896,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:435: ##sys#print */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1897 in k1894 in k1891 in k1888 in k1882 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1899,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:435: ##sys#print */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[31];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1900 in k1897 in k1894 in k1891 in k1888 in k1882 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1902,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:435: ##sys#print */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1903 in k1900 in k1897 in k1894 in k1891 in k1888 in k1882 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1905,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:435: ##sys#write-char-0 */
t3=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1906 in k1903 in k1900 in k1897 in k1894 in k1891 in k1888 in k1882 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1908,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:435: chicken.base#get-output-string */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1909 in k1906 in k1903 in k1900 in k1897 in k1894 in k1891 in k1888 in k1882 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1911,2,av);}
t2=C_halt(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#thread-block-for-i/o! in k905 in k902 */
static void C_ccall f_1929(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1929,5,av);}
a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1933,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1948,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1948(t9,t5,*((C_word*)lf[11]+1));}

/* k1931 in thread-block-for-i/o! in k905 in k902 */
static void C_ccall f_1933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1933,2,av);}
a=C_alloc(3);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[47]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(11),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in thread-block-for-i/o! in k905 in k902 */
static void C_fcall f_1948(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1948,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,*((C_word*)lf[11]+1));
t5=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t4);
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
/* scheduler.scm:448: loop */
t9=t1;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}}

/* k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_1996(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1996,2,av);}
a=C_alloc(11);
t2=C_i_pairp(lf[10]);
t3=t2;
t4=C_i_pairp(lf[16]);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2005,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=(C_truep(t3)?C_i_not(t5):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_u_i_caar(lf[10]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2247,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2257,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:460: scheme#round */
t11=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t8=t6;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_fix(0);
f_2005(2,av2);}}}

/* k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2005(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_2005,2,av);}
a=C_alloc(9);
t2=(C_truep(((C_word*)t0)[2])?stub509(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t1):stub509(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1));
t3=C_eqp(C_fix(-1),t2);
if(C_truep(t3)){
/* scheduler.scm:470: ##sys#force-primordial */
t4=*((C_word*)lf[18]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2029,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2031,a[2]=t6,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2031(t8,t4,t2,C_fix(0),*((C_word*)lf[11]+1));}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k2027 in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2029,2,av);}
t2=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_fcall f_2031(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t23;
C_word t24;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_2031,5,t0,t1,t2,t3,t4);}
a=C_alloc(33);
t5=t2;
t6=C_i_zerop(t5);
t7=(C_truep(t6)?t6:C_i_nullp(t4));
if(C_truep(t7)){
t8=t4;
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_u_i_car(t4);
t9=t8;
t10=C_u_i_car(t9);
t11=t10;
t12=C_fd_input_ready(t11,t3);
t13=C_fd_output_ready(t11,t3);
t14=(C_truep(t12)?t12:t13);
if(C_truep(t14)){
t15=C_u_i_cdr(t9);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2058,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t11,a[7]=t17,a[8]=t12,a[9]=t13,a[10]=((C_word)li3),tmp=(C_word)a,a+=11,tmp));
t19=((C_word*)t17)[1];
f_2058(t19,t1,t15,C_SCHEME_END_OF_LIST);}
else{
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2227,a[2]=t1,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t16=t3;
t17=C_s_a_i_plus(&a,2,t16,C_fix(1));
t18=t4;
t19=C_u_i_cdr(t18);
/* scheduler.scm:511: loop */
t21=t15;
t22=t2;
t23=t17;
t24=t19;
t1=t21;
t2=t22;
t3=t23;
t4=t24;
goto loop;}}}

/* loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_fcall f_2058(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t26;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(65,0,4)))){
C_save_and_reclaim_args((void *)trf_2058,4,t0,t1,t2,t3);}
a=C_alloc(65);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=((C_word*)t0)[2];
t5=C_s_a_i_minus(&a,2,t4,C_fix(1));
t6=((C_word*)t0)[3];
t7=C_s_a_i_plus(&a,2,t6,C_fix(1));
t8=C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm:487: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_2031(t9,t1,t5,t7,t8);}
else{
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2093,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=((C_word*)t0)[2];
t8=C_s_a_i_minus(&a,2,t7,C_fix(1));
t9=((C_word*)t0)[3];
t10=C_s_a_i_plus(&a,2,t9,C_fix(1));
t11=C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm:489: loop */
t12=((C_word*)((C_word*)t0)[5])[1];
f_2031(t12,t6,t8,t10,t11);}}
else{
t4=C_u_i_car(t2);
t5=t4;
t6=C_slot(t5,C_fix(11));
t7=t6;
if(C_truep(C_slot(t5,C_fix(13)))){
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:495: loop2 */
t24=t1;
t25=t9;
t26=t3;
t1=t24;
t2=t25;
t3=t26;
goto loop;}
else{
t8=C_i_pairp(t7);
if(C_truep(C_i_not(t8))){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2127,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(t5,C_fix(4)))){
/* scheduler.scm:500: ##sys#remove-from-timeout-list */
t10=*((C_word*)lf[20]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t10=t9;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_2127(2,av2);}}}
else{
t9=C_u_i_car(t7);
t10=C_eqp(((C_word*)t0)[6],t9);
if(C_truep(C_i_not(t10))){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2151,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:504: chicken.base#open-output-string */
t12=*((C_word*)lf[27]+1);{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2180,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t12=C_u_i_cdr(t7);
t13=t11;
t14=((C_word*)t0)[8];
t15=((C_word*)t0)[9];
t16=t12;
t17=C_eqp(t16,C_SCHEME_TRUE);
t18=(C_truep(t17)?t17:C_eqp(t16,lf[28]));
if(C_truep(t18)){
t19=t13;{
C_word av2[2];
av2[0]=t19;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}
else{
t19=C_eqp(t16,C_SCHEME_FALSE);
t20=(C_truep(t19)?t19:C_eqp(t16,lf[29]));
if(C_truep(t20)){
t21=t13;{
C_word av2[2];
av2[0]=t21;
av2[1]=t15;
((C_proc)(void*)(*((C_word*)t21+1)))(2,av2);}}
else{
t21=C_eqp(t16,lf[30]);
if(C_truep(t21)){
t22=t13;{
C_word av2[2];
av2[0]=t22;
av2[1]=(C_truep(t14)?t14:t15);
((C_proc)(void*)(*((C_word*)t22+1)))(2,av2);}}
else{
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1884,a[2]=t13,a[3]=t15,a[4]=t14,a[5]=t16,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:435: chicken.base#open-output-string */
t23=*((C_word*)lf[27]+1);{
C_word av2[2];
av2[0]=t23;
av2[1]=t22;
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}}}}}}}}

/* k2091 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2093,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2125 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2127,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:501: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2128 in k2125 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2130,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:502: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2058(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* k2149 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2151(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2151,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2157,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:504: ##sys#print */
t6=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[26];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2155 in k2149 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2157,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_i_car(((C_word*)t0)[6]);
/* scheduler.scm:504: ##sys#print */
t4=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2158 in k2155 in k2149 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2160,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:504: ##sys#print */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[25];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2161 in k2158 in k2155 in k2149 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2163,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:504: ##sys#print */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2164 in k2161 in k2158 in k2155 in k2149 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2166,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:504: ##sys#write-char-0 */
t3=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2167 in k2164 in k2161 in k2158 in k2155 in k2149 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2169,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2172,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:504: chicken.base#get-output-string */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2170 in k2167 in k2164 in k2161 in k2158 in k2155 in k2149 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2172,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_halt(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2178 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2180,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(((C_word*)t0)[6],C_fix(4)))){
/* scheduler.scm:507: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2183(2,av2);}}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* scheduler.scm:510: loop2 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2058(t5,((C_word*)t0)[4],t3,t4);}}

/* k2181 in k2178 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2183,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:508: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2184 in k2181 in k2178 in loop2 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2186,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* scheduler.scm:509: loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2058(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* k2225 in loop in k2003 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2227,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2245 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_2247,2,av);}
a=C_alloc(36);
t2=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t3=C_s_a_i_minus(&a,2,t1,t2);
/* scheduler.scm:462: scheme#max */
t4=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2255 in k1994 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_2257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2257,2,av);}
/* scheduler.scm:460: scheme#inexact->exact */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* ##sys#clear-i/o-state-for-thread! in k905 in k902 */
static void C_fcall f_2262(C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2262,2,t1,t2);}
a=C_alloc(11);
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_slot(t2,C_fix(11));
t5=C_u_i_car(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2276,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2278,a[2]=t6,a[3]=t2,a[4]=t9,a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2278(t11,t7,*((C_word*)lf[11]+1));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2274 in clear-i/o-state-for-thread! in k905 in k902 */
static void C_ccall f_2276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2276,2,av);}
t2=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in clear-i/o-state-for-thread! in k905 in k902 */
static void C_fcall f_2278(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2278,3,t0,t1,t2);}
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
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2300,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=C_u_i_cdr(t4);
/* scheduler.scm:526: delq */
f_909(t7,((C_word*)t0)[3],t8);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2319,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
/* scheduler.scm:531: loop */
t11=t7;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}}

/* k2298 in loop in clear-i/o-state-for-thread! in k905 in k902 */
static void C_ccall f_2300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2300,2,av);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_setslot(((C_word*)t0)[4],C_fix(1),t1);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2317 in loop in clear-i/o-state-for-thread! in k905 in k902 */
static void C_ccall f_2319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2319,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#all-threads in k905 in k902 */
static void C_ccall f_2331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +10,c,6)))){
C_save_and_reclaim((void*)f_2331,c,av);}
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
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2466,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp):C_u_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_slot(t2,C_fix(1)));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_u_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_slot(t7,C_fix(1)));
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2349,a[2]=t13,a[3]=t5,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_2349(t15,t1,lf[16],t9);}

/* loop in all-threads in k905 in k902 */
static void C_fcall f_2349(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_2349,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=C_u_i_car(t7);
/* scheduler.scm:544: cns */
t9=((C_word*)t0)[3];{
C_word av2[6];
av2[0]=t9;
av2[1]=t6;
av2[2]=lf[13];
av2[3]=C_SCHEME_FALSE;
av2[4]=t8;
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(6,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2372,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2372(t7,t1,*((C_word*)lf[11]+1),t3);}}

/* k2363 in loop in all-threads in k905 in k902 */
static void C_ccall f_2365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2365,2,av);}
/* scheduler.scm:544: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2349(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in loop in all-threads in k905 in k902 */
static void C_fcall f_2372(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_2372,4,t0,t1,t2,t3);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_u_i_caar(t2);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2391,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=t2;
t10=C_u_i_car(t9);
t11=C_u_i_cdr(t10);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2396,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=t13,a[6]=((C_word)li34),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_2396(t15,t8,t11);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2421,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2421(t7,t1,lf[10],t3);}}

/* k2389 in loop in loop in all-threads in k905 in k902 */
static void C_ccall f_2391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2391,2,av);}
/* scheduler.scm:547: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2372(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in loop in loop in all-threads in k905 in k902 */
static void C_fcall f_2396(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2396,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* scheduler.scm:551: loop */
t9=t5;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}

/* k2412 in loop in loop in loop in all-threads in k905 in k902 */
static void C_ccall f_2414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2414,2,av);}
/* scheduler.scm:551: cns */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[60];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* loop in loop in loop in all-threads in k905 in k902 */
static void C_fcall f_2421(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_2421,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2437,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_caar(t2);
t8=t2;
t9=C_u_i_car(t8);
t10=C_u_i_cdr(t9);
/* scheduler.scm:554: cns */
t11=((C_word*)t0)[3];{
C_word av2[6];
av2[0]=t11;
av2[1]=t6;
av2[2]=lf[61];
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

/* k2435 in loop in loop in loop in all-threads in k905 in k902 */
static void C_ccall f_2437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2437,2,av);}
/* scheduler.scm:554: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2421(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_2466 in all-threads in k905 in k902 */
static void C_ccall f_2466(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2466,6,av);}
a=C_alloc(3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,t4,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* ##sys#fetch-and-clear-threads in k905 in k902 */
static void C_ccall f_2475(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2475,2,av);}
a=C_alloc(5);
t2=C_a_i_vector4(&a,4,lf[16],lf[17],*((C_word*)lf[11]+1),lf[10]);
t3=lf[16] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[17] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_set_block_item(lf[11] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t6=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* ##sys#restore-threads in k905 in k902 */
static void C_ccall f_2485(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2485,3,av);}
t3=C_slot(t2,C_fix(0));
t4=C_mutate(&lf[16] /* (set! ready-queue-head ...) */,t3);
t5=C_slot(t2,C_fix(1));
t6=C_mutate(&lf[17] /* (set! ready-queue-tail ...) */,t5);
t7=C_slot(t2,C_fix(2));
t8=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#fd-list ...) */,t7);
t9=C_slot(t2,C_fix(3));
t10=C_mutate(&lf[10] /* (set! ##sys#timeout-list ...) */,t9);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* ##sys#thread-unblock! in k905 in k902 */
static void C_ccall f_2504(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2504,3,av);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(3));
t4=C_eqp(lf[47],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2514,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_2514(t6,t4);}
else{
t6=C_slot(t2,C_fix(3));
t7=t5;
f_2514(t7,C_eqp(lf[64],t6));}}

/* k2512 in thread-unblock! in k905 in k902 */
static void C_fcall f_2514(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2514,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:583: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[20]+1);{
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

/* k2515 in k2512 in thread-unblock! in k905 in k902 */
static void C_ccall f_2517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2517,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:584: ##sys#clear-i/o-state-for-thread! */
f_2262(t2,((C_word*)t0)[3]);}

/* k2518 in k2515 in k2512 in thread-unblock! in k905 in k902 */
static void C_ccall f_2520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2520,2,av);}
/* scheduler.scm:585: ##sys#thread-basic-unblock! */
t2=*((C_word*)lf[19]+1);{
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

/* ##sys#thread-sleep! in k905 in k902 */
static void C_ccall f_2536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2536,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2542,a[2]=t2,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:591: ##sys#call-with-current-continuation */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
C_call_cc(3,av2);}}

/* a2541 in thread-sleep! in k905 in k902 */
static void C_ccall f_2542(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2542,3,av);}
a=C_alloc(7);
t3=*((C_word*)lf[3]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2554,a[2]=t2,a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(*((C_word*)lf[3]+1),C_fix(1),t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2549,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:595: ##sys#thread-block-for-timeout! */
t7=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=*((C_word*)lf[3]+1);
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2547 in a2541 in thread-sleep! in k905 in k902 */
static void C_ccall f_2549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2549,2,av);}
/* scheduler.scm:596: ##sys#schedule */
t2=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2553 in a2541 in thread-sleep! in k905 in k902 */
static void C_ccall f_2554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2554,2,av);}
/* scheduler.scm:594: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.base#sleep-hook in k905 in k902 */
static void C_ccall f_2560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(69,c,2)))){
C_save_and_reclaim((void *)f_2560,3,av);}
a=C_alloc(69);
t3=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t4=C_s_a_i_times(&a,2,lf[67],t2);
t5=C_s_a_i_plus(&a,2,t3,t4);
/* scheduler.scm:603: ##sys#thread-sleep! */
t6=*((C_word*)lf[65]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* ##sys#kill-other-threads in k905 in k902 */
static void C_ccall f_2571(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2571,3,av);}
a=C_alloc(13);
t3=*((C_word*)lf[3]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2574,a[2]=t3,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
t5=C_mutate((C_word*)lf[42]+1 /* (set! ##sys#primordial-thread ...) */,*((C_word*)lf[3]+1));
t6=C_a_i_list1(&a,1,*((C_word*)lf[3]+1));
t7=C_mutate(&lf[16] /* (set! ready-queue-head ...) */,t6);
t8=C_mutate(&lf[17] /* (set! ready-queue-tail ...) */,lf[16]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2599,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:623: suspend */
t10=t4;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=*((C_word*)lf[3]+1);
f_2574(3,av2);}}

/* suspend in kill-other-threads in k905 in k902 */
static void C_ccall f_2574(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2574,3,av);}
t3=C_eqp(t2,((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_UNDEFINED:C_i_setslot(t2,C_fix(3),lf[70]));
t5=C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_set_i_slot(t2,C_fix(12),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2597 in kill-other-threads in k905 in k902 */
static void C_ccall f_2599(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2599,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[2],a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp);
t3=lf[10];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2678,a[2]=t6,a[3]=t2,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2678(t8,t4,lf[10]);}

/* g646 in k2597 in kill-other-threads in k905 in k902 */
static void C_fcall f_2600(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_2600,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
/* scheduler.scm:624: suspend */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
f_2574(3,av2);}}

/* k2609 in k2597 in kill-other-threads in k905 in k902 */
static void C_ccall f_2611(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2611,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[2],a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2645,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2655,a[2]=t6,a[3]=t2,a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2655(t8,t4,*((C_word*)lf[11]+1));}

/* g656 in k2609 in k2597 in kill-other-threads in k905 in k902 */
static void C_fcall f_2612(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2612,3,t0,t1,t2);}
a=C_alloc(7);
t3=((C_word*)t0)[2];
t4=C_slot(t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2621,a[2]=t6,a[3]=t3,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2621(t8,t1,t4);}

/* for-each-loop678 in g656 in k2609 in k2597 in kill-other-threads in k905 in k902 */
static void C_fcall f_2621(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2621,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2631,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:625: g679 */
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

/* k2629 in for-each-loop678 in g656 in k2609 in k2597 in kill-other-threads in k905 in k902 */
static void C_ccall f_2631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2631,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2621(t3,((C_word*)t0)[4],t2);}

/* k2643 in k2609 in k2597 in kill-other-threads in k905 in k902 */
static void C_ccall f_2645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2645,2,av);}
a=C_alloc(4);
t2=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t3=C_set_block_item(lf[11] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:628: thunk */
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k2648 in k2643 in k2609 in k2597 in kill-other-threads in k905 in k902 */
static void C_ccall f_2650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2650,2,av);}
/* scheduler.scm:629: exit */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop655 in k2609 in k2597 in kill-other-threads in k905 in k902 */
static void C_fcall f_2655(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2655,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2665,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:625: g656 */
t5=((C_word*)t0)[3];
f_2612(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2663 in for-each-loop655 in k2609 in k2597 in kill-other-threads in k905 in k902 */
static void C_ccall f_2665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2665,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2655(t3,((C_word*)t0)[4],t2);}

/* for-each-loop645 in k2597 in kill-other-threads in k905 in k902 */
static void C_fcall f_2678(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2678,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2688,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* scheduler.scm:624: g646 */
t5=((C_word*)t0)[3];
f_2600(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2686 in for-each-loop645 in k2597 in kill-other-threads in k905 in k902 */
static void C_ccall f_2688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2688,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2678(t3,((C_word*)t0)[4],t2);}

/* k902 */
static void C_ccall f_904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_904,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_907,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k905 in k902 */
static void C_ccall f_907(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(73,c,5)))){
C_save_and_reclaim((void *)f_907,2,av);}
a=C_alloc(73);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_mutate(&lf[1] /* (set! delq ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_909,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#schedule ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_952,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#force-primordial ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1168,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t6=lf[16] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t7=lf[17] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t8=C_mutate((C_word*)lf[44]+1 /* (set! ##sys#ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1179,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[41]+1 /* (set! ##sys#add-to-ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1182,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t10=*((C_word*)lf[45]+1);
t11=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1281,a[2]=t10,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t12=lf[10] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t13=C_mutate((C_word*)lf[20]+1 /* (set! ##sys#remove-from-timeout-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1306,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[46]+1 /* (set! ##sys#thread-block-for-timeout! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1347,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#thread-block-for-termination! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1413,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[51]+1 /* (set! ##sys#thread-kill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1543,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#thread-basic-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1657,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[54]+1 /* (set! ##sys#default-exception-handler ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1669,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t19=C_set_block_item(lf[11] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t20=C_mutate((C_word*)lf[58]+1 /* (set! ##sys#thread-block-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1929,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate(&lf[40] /* (set! ##sys#clear-i/o-state-for-thread! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2262,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[59]+1 /* (set! ##sys#all-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2331,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[62]+1 /* (set! ##sys#fetch-and-clear-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2475,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[63]+1 /* (set! ##sys#restore-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2485,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[43]+1 /* (set! ##sys#thread-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2504,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[65]+1 /* (set! ##sys#thread-sleep! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2536,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[66]+1 /* (set! chicken.base#sleep-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2560,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t28=*((C_word*)lf[68]+1);
t29=C_mutate((C_word*)lf[69]+1 /* (set! ##sys#kill-other-threads ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2571,a[2]=t28,a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp));
t30=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t30;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t30+1)))(2,av2);}}

/* delq in k905 in k902 */
static void C_fcall f_909(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_909,3,t1,t2,t3);}
a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_915,a[2]=t2,a[3]=t5,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_915(t7,t1,t3);}

/* loop in delq in k905 in k902 */
static void C_fcall f_915(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_915,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_slot(t2,C_fix(0));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_942,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_slot(t2,C_fix(1));
/* scheduler.scm:162: loop */
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}}

/* k940 in loop in delq in k905 in k902 */
static void C_ccall f_942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_942,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#schedule in k905 in k902 */
static void C_ccall f_952(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_952,2,av);}
a=C_alloc(6);
t2=*((C_word*)lf[3]+1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_slot(*((C_word*)lf[3]+1),C_fix(3));
t6=C_slot(*((C_word*)lf[3]+1),C_fix(5));
t7=C_i_setslot(t6,C_fix(0),*((C_word*)lf[4]+1));
t8=C_i_setslot(t6,C_fix(1),*((C_word*)lf[5]+1));
t9=C_i_setslot(t6,C_fix(2),*((C_word*)lf[6]+1));
t10=C_i_setslot(t6,C_fix(3),*((C_word*)lf[7]+1));
t11=C_i_setslot(t6,C_fix(4),*((C_word*)lf[8]+1));
t12=C_i_setslot(t6,C_fix(5),*((C_word*)lf[9]+1));
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_983,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t14=C_eqp(t5,lf[14]);
t15=(C_truep(t14)?t14:C_eqp(t5,lf[13]));
if(C_truep(t15)){
t16=C_i_set_i_slot(*((C_word*)lf[3]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:184: ##sys#add-to-ready-queue */
t17=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t17;
av2[1]=t13;
av2[2]=*((C_word*)lf[3]+1);
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}
else{
t16=t13;{
C_word *av2=av;
av2[0]=t16;
av2[1]=C_SCHEME_UNDEFINED;
f_983(2,av2);}}}

/* k981 in schedule in k905 in k902 */
static void C_ccall f_983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_983,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_988,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_988(t5,((C_word*)t0)[3]);}

/* loop1 in k981 in schedule in k905 in k902 */
static void C_fcall f_988(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,3)))){
C_save_and_reclaim_args((void *)trf_988,2,t0,t1);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_992,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[10]))){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_992(2,av2);}}
else{
t3=C_a_i_current_milliseconds(&a,1,C_SCHEME_FALSE);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1061,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1061(t7,t2,lf[10]);}}

/* k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_992(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_992,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* scheduler.scm:222: ##sys#force-primordial */
t3=*((C_word*)lf[18]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(*((C_word*)lf[11]+1)))){
t3=C_SCHEME_UNDEFINED;
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_995(2,av2);}}
else{
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1996,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1850,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:399: ##sys#length */
t7=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=*((C_word*)lf[11]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* k993 in k990 in loop1 in k981 in schedule in k905 in k902 */
static void C_ccall f_995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_995,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1000,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li2),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1000(t5,((C_word*)t0)[3]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_scheduler_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("scheduler"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_scheduler_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(396))){
C_save(t1);
C_rereclaim2(396*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,71);
lf[0]=C_h_intern(&lf[0],9, C_text("scheduler"));
lf[2]=C_h_intern(&lf[2],12, C_text("\003sysschedule"));
lf[3]=C_h_intern(&lf[3],18, C_text("\003syscurrent-thread"));
lf[4]=C_h_intern(&lf[4],17, C_text("\003sysdynamic-winds"));
lf[5]=C_h_intern(&lf[5],18, C_text("\003sysstandard-input"));
lf[6]=C_h_intern(&lf[6],19, C_text("\003sysstandard-output"));
lf[7]=C_h_intern(&lf[7],18, C_text("\003sysstandard-error"));
lf[8]=C_h_intern(&lf[8],29, C_text("\003syscurrent-exception-handler"));
lf[9]=C_h_intern(&lf[9],28, C_text("\003syscurrent-parameter-vector"));
lf[11]=C_h_intern(&lf[11],11, C_text("\003sysfd-list"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010deadlock"));
lf[13]=C_h_intern(&lf[13],5, C_text("ready"));
lf[14]=C_h_intern(&lf[14],7, C_text("running"));
lf[15]=C_h_intern(&lf[15],21, C_text("\003syscall-with-cthulhu"));
lf[18]=C_h_intern(&lf[18],20, C_text("\003sysforce-primordial"));
lf[19]=C_h_intern(&lf[19],25, C_text("\003systhread-basic-unblock!"));
lf[20]=C_h_intern(&lf[20],28, C_text("\003sysremove-from-timeout-list"));
lf[21]=C_h_intern(&lf[21],6, C_text("format"));
lf[22]=C_h_intern(&lf[22],30, C_text("chicken.base#get-output-string"));
lf[23]=C_h_intern(&lf[23],16, C_text("\003syswrite-char-0"));
lf[24]=C_h_intern(&lf[24],9, C_text("\003sysprint"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013 (expected "));
lf[26]=C_decode_literal(C_heaptop,C_text("\376B\000\0009thread is registered for I/O on unknown file-descriptor: "));
lf[27]=C_h_intern(&lf[27],31, C_text("chicken.base#open-output-string"));
lf[28]=C_h_intern(&lf[28],6, C_text("\000input"));
lf[29]=C_h_intern(&lf[29],7, C_text("\000output"));
lf[30]=C_h_intern(&lf[30],4, C_text("\000all"));
lf[31]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006, o = "));
lf[32]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006 (i = "));
lf[33]=C_decode_literal(C_heaptop,C_text("\376B\000\000#fdset-test: invalid i/o direction: "));
lf[34]=C_h_intern(&lf[34],10, C_text("scheme#max"));
lf[35]=C_h_intern(&lf[35],21, C_text("scheme#inexact->exact"));
lf[36]=C_h_intern(&lf[36],12, C_text("scheme#round"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007 (fd = "));
lf[38]=C_decode_literal(C_heaptop,C_text("\376B\000\000%create-fdset: invalid i/o direction: "));
lf[39]=C_h_intern(&lf[39],10, C_text("\003syslength"));
lf[41]=C_h_intern(&lf[41],22, C_text("\003sysadd-to-ready-queue"));
lf[42]=C_h_intern(&lf[42],21, C_text("\003sysprimordial-thread"));
lf[43]=C_h_intern(&lf[43],19, C_text("\003systhread-unblock!"));
lf[44]=C_h_intern(&lf[44],15, C_text("\003sysready-queue"));
lf[45]=C_h_intern(&lf[45],18, C_text("\003sysinterrupt-hook"));
lf[46]=C_h_intern(&lf[46],29, C_text("\003systhread-block-for-timeout!"));
lf[47]=C_h_intern(&lf[47],7, C_text("blocked"));
lf[48]=C_h_intern(&lf[48],33, C_text("\003systhread-block-for-termination!"));
lf[49]=C_h_intern(&lf[49],4, C_text("dead"));
lf[50]=C_h_intern(&lf[50],10, C_text("terminated"));
lf[51]=C_h_intern(&lf[51],16, C_text("\003systhread-kill!"));
lf[52]=C_h_intern(&lf[52],18, C_text("condition-variable"));
lf[53]=C_h_intern(&lf[53],6, C_text("thread"));
lf[54]=C_h_intern(&lf[54],29, C_text("\003sysdefault-exception-handler"));
lf[55]=C_h_intern(&lf[55],24, C_text("chicken.condition#signal"));
lf[56]=C_h_intern(&lf[56],26, C_text("\003sysshow-exception-warning"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011in thread"));
lf[58]=C_h_intern(&lf[58],25, C_text("\003systhread-block-for-i/o!"));
lf[59]=C_h_intern(&lf[59],15, C_text("\003sysall-threads"));
lf[60]=C_h_intern(&lf[60],3, C_text("i/o"));
lf[61]=C_h_intern(&lf[61],7, C_text("timeout"));
lf[62]=C_h_intern(&lf[62],27, C_text("\003sysfetch-and-clear-threads"));
lf[63]=C_h_intern(&lf[63],19, C_text("\003sysrestore-threads"));
lf[64]=C_h_intern(&lf[64],8, C_text("sleeping"));
lf[65]=C_h_intern(&lf[65],17, C_text("\003systhread-sleep!"));
lf[66]=C_h_intern(&lf[66],23, C_text("chicken.base#sleep-hook"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376U1000.0\000"));
lf[68]=C_h_intern(&lf[68],17, C_text("chicken.base#exit"));
lf[69]=C_h_intern(&lf[69],22, C_text("\003syskill-other-threads"));
lf[70]=C_h_intern(&lf[70],9, C_text("suspended"));
C_register_lf2(lf,71,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_904,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[142] = {
{C_text("f_1000:scheduler_2escm"),(void*)f_1000},
{C_text("f_1004:scheduler_2escm"),(void*)f_1004},
{C_text("f_1061:scheduler_2escm"),(void*)f_1061},
{C_text("f_1094:scheduler_2escm"),(void*)f_1094},
{C_text("f_1097:scheduler_2escm"),(void*)f_1097},
{C_text("f_1109:scheduler_2escm"),(void*)f_1109},
{C_text("f_1115:scheduler_2escm"),(void*)f_1115},
{C_text("f_1127:scheduler_2escm"),(void*)f_1127},
{C_text("f_1134:scheduler_2escm"),(void*)f_1134},
{C_text("f_1168:scheduler_2escm"),(void*)f_1168},
{C_text("f_1179:scheduler_2escm"),(void*)f_1179},
{C_text("f_1182:scheduler_2escm"),(void*)f_1182},
{C_text("f_1281:scheduler_2escm"),(void*)f_1281},
{C_text("f_1285:scheduler_2escm"),(void*)f_1285},
{C_text("f_1299:scheduler_2escm"),(void*)f_1299},
{C_text("f_1306:scheduler_2escm"),(void*)f_1306},
{C_text("f_1312:scheduler_2escm"),(void*)f_1312},
{C_text("f_1347:scheduler_2escm"),(void*)f_1347},
{C_text("f_1356:scheduler_2escm"),(void*)f_1356},
{C_text("f_1367:scheduler_2escm"),(void*)f_1367},
{C_text("f_1377:scheduler_2escm"),(void*)f_1377},
{C_text("f_1413:scheduler_2escm"),(void*)f_1413},
{C_text("f_1478:scheduler_2escm"),(void*)f_1478},
{C_text("f_1494:scheduler_2escm"),(void*)f_1494},
{C_text("f_1504:scheduler_2escm"),(void*)f_1504},
{C_text("f_1520:scheduler_2escm"),(void*)f_1520},
{C_text("f_1530:scheduler_2escm"),(void*)f_1530},
{C_text("f_1543:scheduler_2escm"),(void*)f_1543},
{C_text("f_1547:scheduler_2escm"),(void*)f_1547},
{C_text("f_1553:scheduler_2escm"),(void*)f_1553},
{C_text("f_1556:scheduler_2escm"),(void*)f_1556},
{C_text("f_1559:scheduler_2escm"),(void*)f_1559},
{C_text("f_1577:scheduler_2escm"),(void*)f_1577},
{C_text("f_1584:scheduler_2escm"),(void*)f_1584},
{C_text("f_1603:scheduler_2escm"),(void*)f_1603},
{C_text("f_1613:scheduler_2escm"),(void*)f_1613},
{C_text("f_1634:scheduler_2escm"),(void*)f_1634},
{C_text("f_1651:scheduler_2escm"),(void*)f_1651},
{C_text("f_1657:scheduler_2escm"),(void*)f_1657},
{C_text("f_1669:scheduler_2escm"),(void*)f_1669},
{C_text("f_1673:scheduler_2escm"),(void*)f_1673},
{C_text("f_1679:scheduler_2escm"),(void*)f_1679},
{C_text("f_1693:scheduler_2escm"),(void*)f_1693},
{C_text("f_1697:scheduler_2escm"),(void*)f_1697},
{C_text("f_1717:scheduler_2escm"),(void*)f_1717},
{C_text("f_1728:scheduler_2escm"),(void*)f_1728},
{C_text("f_1771:scheduler_2escm"),(void*)f_1771},
{C_text("f_1777:scheduler_2escm"),(void*)f_1777},
{C_text("f_1780:scheduler_2escm"),(void*)f_1780},
{C_text("f_1783:scheduler_2escm"),(void*)f_1783},
{C_text("f_1786:scheduler_2escm"),(void*)f_1786},
{C_text("f_1789:scheduler_2escm"),(void*)f_1789},
{C_text("f_1792:scheduler_2escm"),(void*)f_1792},
{C_text("f_1813:scheduler_2escm"),(void*)f_1813},
{C_text("f_1825:scheduler_2escm"),(void*)f_1825},
{C_text("f_1835:scheduler_2escm"),(void*)f_1835},
{C_text("f_1850:scheduler_2escm"),(void*)f_1850},
{C_text("f_1884:scheduler_2escm"),(void*)f_1884},
{C_text("f_1890:scheduler_2escm"),(void*)f_1890},
{C_text("f_1893:scheduler_2escm"),(void*)f_1893},
{C_text("f_1896:scheduler_2escm"),(void*)f_1896},
{C_text("f_1899:scheduler_2escm"),(void*)f_1899},
{C_text("f_1902:scheduler_2escm"),(void*)f_1902},
{C_text("f_1905:scheduler_2escm"),(void*)f_1905},
{C_text("f_1908:scheduler_2escm"),(void*)f_1908},
{C_text("f_1911:scheduler_2escm"),(void*)f_1911},
{C_text("f_1929:scheduler_2escm"),(void*)f_1929},
{C_text("f_1933:scheduler_2escm"),(void*)f_1933},
{C_text("f_1948:scheduler_2escm"),(void*)f_1948},
{C_text("f_1996:scheduler_2escm"),(void*)f_1996},
{C_text("f_2005:scheduler_2escm"),(void*)f_2005},
{C_text("f_2029:scheduler_2escm"),(void*)f_2029},
{C_text("f_2031:scheduler_2escm"),(void*)f_2031},
{C_text("f_2058:scheduler_2escm"),(void*)f_2058},
{C_text("f_2093:scheduler_2escm"),(void*)f_2093},
{C_text("f_2127:scheduler_2escm"),(void*)f_2127},
{C_text("f_2130:scheduler_2escm"),(void*)f_2130},
{C_text("f_2151:scheduler_2escm"),(void*)f_2151},
{C_text("f_2157:scheduler_2escm"),(void*)f_2157},
{C_text("f_2160:scheduler_2escm"),(void*)f_2160},
{C_text("f_2163:scheduler_2escm"),(void*)f_2163},
{C_text("f_2166:scheduler_2escm"),(void*)f_2166},
{C_text("f_2169:scheduler_2escm"),(void*)f_2169},
{C_text("f_2172:scheduler_2escm"),(void*)f_2172},
{C_text("f_2180:scheduler_2escm"),(void*)f_2180},
{C_text("f_2183:scheduler_2escm"),(void*)f_2183},
{C_text("f_2186:scheduler_2escm"),(void*)f_2186},
{C_text("f_2227:scheduler_2escm"),(void*)f_2227},
{C_text("f_2247:scheduler_2escm"),(void*)f_2247},
{C_text("f_2257:scheduler_2escm"),(void*)f_2257},
{C_text("f_2262:scheduler_2escm"),(void*)f_2262},
{C_text("f_2276:scheduler_2escm"),(void*)f_2276},
{C_text("f_2278:scheduler_2escm"),(void*)f_2278},
{C_text("f_2300:scheduler_2escm"),(void*)f_2300},
{C_text("f_2319:scheduler_2escm"),(void*)f_2319},
{C_text("f_2331:scheduler_2escm"),(void*)f_2331},
{C_text("f_2349:scheduler_2escm"),(void*)f_2349},
{C_text("f_2365:scheduler_2escm"),(void*)f_2365},
{C_text("f_2372:scheduler_2escm"),(void*)f_2372},
{C_text("f_2391:scheduler_2escm"),(void*)f_2391},
{C_text("f_2396:scheduler_2escm"),(void*)f_2396},
{C_text("f_2414:scheduler_2escm"),(void*)f_2414},
{C_text("f_2421:scheduler_2escm"),(void*)f_2421},
{C_text("f_2437:scheduler_2escm"),(void*)f_2437},
{C_text("f_2466:scheduler_2escm"),(void*)f_2466},
{C_text("f_2475:scheduler_2escm"),(void*)f_2475},
{C_text("f_2485:scheduler_2escm"),(void*)f_2485},
{C_text("f_2504:scheduler_2escm"),(void*)f_2504},
{C_text("f_2514:scheduler_2escm"),(void*)f_2514},
{C_text("f_2517:scheduler_2escm"),(void*)f_2517},
{C_text("f_2520:scheduler_2escm"),(void*)f_2520},
{C_text("f_2536:scheduler_2escm"),(void*)f_2536},
{C_text("f_2542:scheduler_2escm"),(void*)f_2542},
{C_text("f_2549:scheduler_2escm"),(void*)f_2549},
{C_text("f_2554:scheduler_2escm"),(void*)f_2554},
{C_text("f_2560:scheduler_2escm"),(void*)f_2560},
{C_text("f_2571:scheduler_2escm"),(void*)f_2571},
{C_text("f_2574:scheduler_2escm"),(void*)f_2574},
{C_text("f_2599:scheduler_2escm"),(void*)f_2599},
{C_text("f_2600:scheduler_2escm"),(void*)f_2600},
{C_text("f_2611:scheduler_2escm"),(void*)f_2611},
{C_text("f_2612:scheduler_2escm"),(void*)f_2612},
{C_text("f_2621:scheduler_2escm"),(void*)f_2621},
{C_text("f_2631:scheduler_2escm"),(void*)f_2631},
{C_text("f_2645:scheduler_2escm"),(void*)f_2645},
{C_text("f_2650:scheduler_2escm"),(void*)f_2650},
{C_text("f_2655:scheduler_2escm"),(void*)f_2655},
{C_text("f_2665:scheduler_2escm"),(void*)f_2665},
{C_text("f_2678:scheduler_2escm"),(void*)f_2678},
{C_text("f_2688:scheduler_2escm"),(void*)f_2688},
{C_text("f_904:scheduler_2escm"),(void*)f_904},
{C_text("f_907:scheduler_2escm"),(void*)f_907},
{C_text("f_909:scheduler_2escm"),(void*)f_909},
{C_text("f_915:scheduler_2escm"),(void*)f_915},
{C_text("f_942:scheduler_2escm"),(void*)f_942},
{C_text("f_952:scheduler_2escm"),(void*)f_952},
{C_text("f_983:scheduler_2escm"),(void*)f_983},
{C_text("f_988:scheduler_2escm"),(void*)f_988},
{C_text("f_992:scheduler_2escm"),(void*)f_992},
{C_text("f_995:scheduler_2escm"),(void*)f_995},
{C_text("toplevel:scheduler_2escm"),(void*)C_scheduler_toplevel},
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
S|  sprintf		3
S|  for-each		6
S|  ##sys#for-each		1
o|eliminated procedure checks: 136 
o|specializations:
o|  1 (scheme#+ * *)
o|  1 (scheme#* * *)
o|  3 (chicken.base#add1 *)
o|  2 (chicken.base#sub1 *)
o|  1 (scheme#zero? *)
o|  3 (##sys#check-output-port * * *)
o|  10 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  1 (scheme#< * *)
o|  1 (scheme#> * *)
o|  3 (scheme#car pair)
o|  2 (scheme#- * *)
o|  20 (scheme#cdr pair)
o|  1 (scheme#>= * *)
o|  4 (scheme#cdar (pair pair *))
(o e)|safe calls: 242 
(o e)|assignments to immediate values: 12 
o|inlining procedure: k917 
o|inlining procedure: k917 
o|inlining procedure: k1005 
o|inlining procedure: k1005 
o|contracted procedure: "(scheduler.scm:232) switch162" 
o|contracted procedure: "(scheduler.scm:170) restore-thread-state-buffer" 
o|contracted procedure: "(scheduler.scm:227) remove-from-ready-queue" 
o|inlining procedure: k1204 
o|inlining procedure: k1204 
o|propagated global variable: first-pair222 ready-queue-head 
o|inlining procedure: k1045 
o|inlining procedure: k1045 
o|contracted procedure: "(scheduler.scm:224) unblock-threads-for-i/o" 
o|inlining procedure: k2011 
o|inlining procedure: k2011 
o|inlining procedure: k2033 
o|inlining procedure: k2033 
o|inlining procedure: k2060 
o|inlining procedure: k2060 
o|inlining procedure: k2119 
o|inlining procedure: k2119 
o|substituted constant variable: a2153 
o|substituted constant variable: a2154 
o|inlining procedure: k2175 
o|inlining procedure: k2175 
o|contracted procedure: "(scheduler.scm:505) fdset-test" 
o|inlining procedure: k1854 
o|inlining procedure: k1854 
o|inlining procedure: k1872 
o|substituted constant variable: a1886 
o|substituted constant variable: a1887 
o|inlining procedure: k1872 
o|substituted constant variable: a1913 
o|substituted constant variable: a1918 
o|substituted constant variable: a1920 
o|substituted constant variable: a1925 
o|substituted constant variable: a1927 
o|contracted procedure: "(scheduler.scm:465) g505506" 
o|contracted procedure: "(scheduler.scm:455) create-fdset" 
o|inlining procedure: k1719 
o|inlining procedure: k1733 
o|inlining procedure: k1750 
o|inlining procedure: k1750 
o|substituted constant variable: a1773 
o|substituted constant variable: a1774 
o|substituted constant variable: a1794 
o|substituted constant variable: a1799 
o|substituted constant variable: a1801 
o|substituted constant variable: a1806 
o|substituted constant variable: a1808 
o|inlining procedure: k1733 
o|inlining procedure: k1719 
o|contracted procedure: "(scheduler.scm:402) g436437" 
o|inlining procedure: k1827 
o|inlining procedure: k1827 
o|contracted procedure: "(scheduler.scm:398) g379380" 
o|inlining procedure: k1063 
o|inlining procedure: k1063 
o|inlining procedure: k1084 
o|inlining procedure: k1084 
o|inlining procedure: k1117 
o|inlining procedure: k1117 
o|inlining procedure: k1138 
o|inlining procedure: k1138 
o|contracted procedure: "(scheduler.scm:180) update-thread-state-buffer" 
o|propagated global variable: ct168 ##sys#current-thread 
o|inlining procedure: k1190 
o|inlining procedure: k1190 
o|inlining procedure: k1283 
o|propagated global variable: ct246 ##sys#current-thread 
o|inlining procedure: k1283 
o|inlining procedure: k1314 
o|inlining procedure: k1314 
o|inlining procedure: k1332 
o|inlining procedure: k1332 
o|substituted constant variable: a1353 
o|inlining procedure: k1349 
o|inlining procedure: k1369 
o|inlining procedure: k1369 
o|inlining procedure: k1349 
o|inlining procedure: k1418 
o|inlining procedure: k1418 
o|inlining procedure: k1575 
o|inlining procedure: k1586 
o|inlining procedure: k1586 
o|inlining procedure: k1575 
o|inlining procedure: k1605 
o|inlining procedure: k1605 
o|inlining procedure: k1639 
o|inlining procedure: k1639 
o|contracted procedure: "(scheduler.scm:345) abandon-mutexes" 
o|inlining procedure: k1456 
o|inlining procedure: k1456 
o|inlining procedure: k1522 
o|contracted procedure: "(scheduler.scm:328) g287294" 
o|inlining procedure: k1476 
o|inlining procedure: k1476 
o|inlining procedure: k1496 
o|contracted procedure: "(scheduler.scm:335) g301308" 
o|inlining procedure: k1496 
o|inlining procedure: k1522 
o|propagated global variable: pt370 ##sys#primordial-thread 
o|inlining procedure: k1950 
o|inlining procedure: k1950 
o|inlining procedure: k2264 
o|inlining procedure: k2280 
o|inlining procedure: k2280 
o|inlining procedure: k2301 
o|inlining procedure: k2301 
o|inlining procedure: k2264 
o|inlining procedure: k2351 
o|inlining procedure: k2351 
o|inlining procedure: k2374 
o|inlining procedure: k2398 
o|inlining procedure: k2398 
o|inlining procedure: k2374 
o|inlining procedure: k2423 
o|inlining procedure: k2423 
o|inlining procedure: k2506 
o|inlining procedure: k2506 
o|propagated global variable: ct635 ##sys#current-thread 
o|substituted constant variable: a2568 
o|propagated global variable: primordial641 ##sys#current-thread 
o|inlining procedure: k2623 
o|inlining procedure: k2623 
o|inlining procedure: k2657 
o|inlining procedure: k2657 
o|propagated global variable: g662674 ##sys#fd-list 
o|inlining procedure: k2680 
o|inlining procedure: k2680 
o|propagated global variable: g652667 ##sys#timeout-list 
o|propagated global variable: primordial641 ##sys#current-thread 
o|replaced variables: 277 
o|removed binding forms: 179 
o|inlining procedure: k1214 
o|inlining procedure: k1214 
o|substituted constant variable: r12052705 
o|inlining procedure: k2236 
o|inlining procedure: k2236 
o|substituted constant variable: r11182736 
o|substituted constant variable: r11392739 
o|substituted constant variable: r22812801 
o|converted assignments to bindings: (suspend642) 
o|simplifications: ((let . 1)) 
o|replaced variables: 18 
o|removed binding forms: 304 
o|inlining procedure: k1014 
o|inlining procedure: k1816 
o|replaced variables: 11 
o|removed binding forms: 31 
o|substituted constant variable: r10152919 
o|contracted procedure: k1710 
o|replaced variables: 2 
o|removed binding forms: 13 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 17) (##core#call . 235)) 
o|  call simplifications:
o|    ##sys#call-with-current-continuation
o|    scheme#vector
o|    scheme#list	2
o|    ##sys#structure?	2
o|    chicken.fixnum#fx=	2
o|    scheme#set-cdr!	3
o|    scheme#equal?
o|    ##sys#setislot	18
o|    scheme#caar	7
o|    chicken.fixnum#fx>
o|    scheme#pair?	16
o|    scheme#car	12
o|    scheme#cdr	8
o|    scheme#not	6
o|    ##sys#setslot	30
o|    scheme#null?	26
o|    scheme#eq?	26
o|    scheme#cons	16
o|    ##sys#slot	57
o|contracted procedure: k920 
o|contracted procedure: k948 
o|contracted procedure: k926 
o|contracted procedure: k936 
o|contracted procedure: k944 
o|contracted procedure: k975 
o|contracted procedure: k1008 
o|contracted procedure: k1020 
o|contracted procedure: k1014 
o|contracted procedure: k1039 
o|contracted procedure: k1029 
o|contracted procedure: k958 
o|contracted procedure: k965 
o|contracted procedure: k972 
o|contracted procedure: k1253 
o|contracted procedure: k1257 
o|contracted procedure: k1261 
o|contracted procedure: k1265 
o|contracted procedure: k1269 
o|contracted procedure: k1273 
o|contracted procedure: k1277 
o|contracted procedure: k1223 
o|contracted procedure: k1207 
o|contracted procedure: k1210 
o|propagated global variable: first-pair222 ready-queue-head 
o|contracted procedure: k1218 
o|contracted procedure: k1048 
o|contracted procedure: k1997 
o|contracted procedure: k2000 
o|contracted procedure: k2008 
o|contracted procedure: k2014 
o|contracted procedure: k2023 
o|contracted procedure: k2037 
o|contracted procedure: k2040 
o|contracted procedure: k2043 
o|contracted procedure: k2049 
o|contracted procedure: k2063 
o|contracted procedure: k2069 
o|contracted procedure: k2080 
o|contracted procedure: k2087 
o|contracted procedure: k2099 
o|contracted procedure: k2102 
o|contracted procedure: k2105 
o|contracted procedure: k2111 
o|contracted procedure: k2218 
o|contracted procedure: k2122 
o|contracted procedure: k2136 
o|contracted procedure: k2214 
o|contracted procedure: k2210 
o|contracted procedure: k2145 
o|contracted procedure: k2192 
o|contracted procedure: k2204 
o|contracted procedure: k1857 
o|contracted procedure: k1860 
o|contracted procedure: k1866 
o|contracted procedure: k1869 
o|contracted procedure: k1875 
o|contracted procedure: k2239 
o|contracted procedure: k2242 
o|contracted procedure: k1722 
o|contracted procedure: k1725 
o|contracted procedure: k1730 
o|contracted procedure: k1736 
o|contracted procedure: k1743 
o|contracted procedure: k1746 
o|contracted procedure: k1753 
o|contracted procedure: k1756 
o|contracted procedure: k1763 
o|contracted procedure: k1830 
o|contracted procedure: k1840 
o|contracted procedure: k1844 
o|contracted procedure: k1054 
o|contracted procedure: k1066 
o|contracted procedure: k1070 
o|contracted procedure: k1075 
o|contracted procedure: k1081 
o|contracted procedure: k1089 
o|contracted procedure: k1110 
o|contracted procedure: k1120 
o|contracted procedure: k1135 
o|contracted procedure: k1141 
o|contracted procedure: k1152 
o|contracted procedure: k1155 
o|contracted procedure: k1158 
o|contracted procedure: k1229 
o|propagated global variable: ct168 ##sys#current-thread 
o|contracted procedure: k1232 
o|contracted procedure: k1235 
o|contracted procedure: k1238 
o|contracted procedure: k1241 
o|contracted procedure: k1244 
o|contracted procedure: k1170 
o|contracted procedure: k1184 
o|contracted procedure: k1187 
o|contracted procedure: k1194 
o|contracted procedure: k1190 
o|contracted procedure: k1289 
o|contracted procedure: k1292 
o|contracted procedure: k1317 
o|contracted procedure: k1320 
o|contracted procedure: k1323 
o|contracted procedure: k1343 
o|contracted procedure: k1329 
o|contracted procedure: k1357 
o|contracted procedure: k1360 
o|contracted procedure: k1372 
o|contracted procedure: k1389 
o|contracted procedure: k1385 
o|contracted procedure: k1397 
o|contracted procedure: k1393 
o|contracted procedure: k1404 
o|contracted procedure: k1409 
o|contracted procedure: k1415 
o|contracted procedure: k1421 
o|contracted procedure: k1424 
o|contracted procedure: k1444 
o|contracted procedure: k1440 
o|contracted procedure: k1427 
o|contracted procedure: k1430 
o|contracted procedure: k1433 
o|contracted procedure: k1548 
o|contracted procedure: k1560 
o|contracted procedure: k1563 
o|contracted procedure: k1566 
o|contracted procedure: k1569 
o|contracted procedure: k1572 
o|contracted procedure: k1581 
o|contracted procedure: k1596 
o|contracted procedure: k1589 
o|contracted procedure: k1608 
o|contracted procedure: k1618 
o|contracted procedure: k1622 
o|contracted procedure: k1625 
o|contracted procedure: k1636 
o|contracted procedure: k1642 
o|contracted procedure: k1653 
o|contracted procedure: k1453 
o|contracted procedure: k1459 
o|contracted procedure: k1525 
o|contracted procedure: k1535 
o|contracted procedure: k1539 
o|contracted procedure: k1464 
o|contracted procedure: k1467 
o|contracted procedure: k1470 
o|contracted procedure: k1473 
o|contracted procedure: k1482 
o|contracted procedure: k1499 
o|contracted procedure: k1509 
o|contracted procedure: k1513 
o|contracted procedure: k1659 
o|contracted procedure: k1662 
o|contracted procedure: k1674 
o|contracted procedure: k1683 
o|contracted procedure: k1686 
o|propagated global variable: pt370 ##sys#primordial-thread 
o|propagated global variable: pt370 ##sys#primordial-thread 
o|contracted procedure: k1934 
o|contracted procedure: k1937 
o|contracted procedure: k1944 
o|contracted procedure: k1953 
o|contracted procedure: k1961 
o|contracted procedure: k1957 
o|contracted procedure: k1964 
o|contracted procedure: k1988 
o|contracted procedure: k1970 
o|contracted procedure: k1977 
o|contracted procedure: k2327 
o|contracted procedure: k2267 
o|contracted procedure: k2323 
o|contracted procedure: k2270 
o|contracted procedure: k2283 
o|contracted procedure: k2286 
o|contracted procedure: k2289 
o|contracted procedure: k2295 
o|contracted procedure: k2304 
o|contracted procedure: k2308 
o|contracted procedure: k2463 
o|contracted procedure: k2333 
o|contracted procedure: k2457 
o|contracted procedure: k2336 
o|contracted procedure: k2451 
o|contracted procedure: k2339 
o|contracted procedure: k2445 
o|contracted procedure: k2342 
o|contracted procedure: k2354 
o|contracted procedure: k2377 
o|contracted procedure: k2386 
o|contracted procedure: k2401 
o|contracted procedure: k2408 
o|contracted procedure: k2426 
o|contracted procedure: k2439 
o|contracted procedure: k2477 
o|contracted procedure: k2488 
o|contracted procedure: k2492 
o|contracted procedure: k2496 
o|contracted procedure: k2500 
o|contracted procedure: k2532 
o|contracted procedure: k2509 
o|contracted procedure: k2528 
o|contracted procedure: k2544 
o|propagated global variable: ct635 ##sys#current-thread 
o|contracted procedure: k2585 
o|contracted procedure: k2576 
o|contracted procedure: k2579 
o|contracted procedure: k2593 
o|contracted procedure: k2606 
o|contracted procedure: k2614 
o|contracted procedure: k2626 
o|contracted procedure: k2636 
o|contracted procedure: k2640 
o|contracted procedure: k2660 
o|contracted procedure: k2670 
o|contracted procedure: k2674 
o|contracted procedure: k2683 
o|contracted procedure: k2693 
o|contracted procedure: k2697 
o|propagated global variable: primordial641 ##sys#current-thread 
o|simplifications: ((let . 42)) 
o|removed binding forms: 211 
o|replaced variables: 69 
o|removed binding forms: 24 
o|contracted procedure: k978 
o|contracted procedure: k961 
o|propagated global variable: ct168 ##sys#current-thread 
o|propagated global variable: ct168 ##sys#current-thread 
o|removed binding forms: 2 
o|replaced variables: 2 
o|removed binding forms: 1 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop252 0 
o|converted assignments to bindings: (loop252) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (g646666 for-each-loop645669 g656673 for-each-loop655692 for-each-loop678688 k2512 loop608 loop605 loop601 loop598 loop567 loop489 for-each-loop300311 for-each-loop286319 delq k1551 g335342 for-each-loop334345 k1375 loop261 k1107 ##sys#clear-i/o-state-for-thread! loop177 g393400 for-each-loop392432 loop385 loop2534 loop520 k1002 loop2193 loop1175 loop154) 
o|calls to known targets: 80 
o|identified direct recursive calls: f_915 1 
o|identified direct recursive calls: f_2058 1 
o|identified direct recursive calls: f_2031 1 
o|identified direct recursive calls: f_1061 1 
o|identified direct recursive calls: f_1312 1 
o|identified direct recursive calls: f_1948 1 
o|identified direct recursive calls: f_2278 1 
o|identified direct recursive calls: f_2396 1 
o|fast box initializations: 21 
o|fast global references: 31 
o|fast global assignments: 23 
o|dropping unused closure argument: f_2262 
o|dropping unused closure argument: f_909 
*/
/* end of file */

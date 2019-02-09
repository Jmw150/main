/* Generated from tcp.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: tcp.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file tcp.c
   unit: tcp
*/

#include "chicken.h"

#ifdef _WIN32
# include <winsock2.h>
# include <ws2tcpip.h>
/* Beware: winsock2.h must come BEFORE windows.h */
# define socklen_t	 int
static WSADATA wsa;
# ifndef SHUT_RD
#  define SHUT_RD	  SD_RECEIVE
# endif
# ifndef SHUT_WR
#  define SHUT_WR	  SD_SEND
# endif

# define typecorrect_getsockopt(socket, level, optname, optval, optlen)	\
    getsockopt(socket, level, optname, (char *)optval, optlen)

static C_word make_socket_nonblocking (C_word sock) {
  int fd = C_unfix(sock);
  C_return(C_mk_bool(ioctlsocket(fd, FIONBIO, (void *)&fd) != SOCKET_ERROR)) ;
}

/* This is a bit of a hack, but it keeps things simple */
static C_TLS char *last_wsa_errorstring = NULL;

static char *errormsg_from_code(int code) {
  int bufsize;
  if (last_wsa_errorstring != NULL) {
    LocalFree(last_wsa_errorstring);
    last_wsa_errorstring = NULL;
  }
  bufsize = FormatMessage(
	FORMAT_MESSAGE_ALLOCATE_BUFFER |
	FORMAT_MESSAGE_FROM_SYSTEM |
	FORMAT_MESSAGE_IGNORE_INSERTS,
	NULL, code, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
	(LPTSTR) &last_wsa_errorstring, 0, NULL);
  if (bufsize == 0) return "ERROR WHILE FETCHING ERROR";
  return last_wsa_errorstring;
}

# define get_last_socket_error()  WSAGetLastError()
# define should_retry_call()      (WSAGetLastError() == WSAEWOULDBLOCK)
/* Not EINPROGRESS in winsock.  Nonblocking connect returns EWOULDBLOCK... */
# define call_in_progress()       (WSAGetLastError() == WSAEWOULDBLOCK)
# define call_was_interrupted()   (WSAGetLastError() == WSAEINTR) /* ? */

#else
# include <errno.h>
# include <fcntl.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <netinet/in.h>
# include <netdb.h>
# include <signal.h>
# define closesocket     close
# define INVALID_SOCKET  -1
# define SOCKET_ERROR    -1
# define typecorrect_getsockopt getsockopt

static C_word make_socket_nonblocking (C_word sock) {
  int fd = C_unfix(sock);
  int val = fcntl(fd, F_GETFL, 0);
  if(val == -1) C_return(C_SCHEME_FALSE);
  C_return(C_mk_bool(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1));
}

# define get_last_socket_error()  errno
# define errormsg_from_code(e)    strerror(e)

# define should_retry_call()      (errno == EAGAIN || errno == EWOULDBLOCK)
# define call_was_interrupted()   (errno == EINTR)
# define call_in_progress()       (errno == EINPROGRESS)
#endif

#ifdef ECOS
#include <sys/sockio.h>
#endif

#ifndef h_addr
# define h_addr  h_addr_list[ 0 ]
#endif

static char addr_buffer[ 20 ];

static int C_set_socket_options(int socket)
{
  int yes = 1; 
  int r;

  r = setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (const char *)&yes, sizeof(int));
  
  if(r != 0) return r;

#ifdef SO_NOSIGPIPE
  /*
   * Avoid SIGPIPE (iOS uses *only* SIGPIPE otherwise, not returning EPIPE).
   * For consistency we do this everywhere the option is supported.
   */
  r = setsockopt(socket, SOL_SOCKET, SO_NOSIGPIPE, (const char *)&yes, sizeof(int));
#endif

  return r;
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[94];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,53),40,35,35,110,101,116,35,103,101,116,104,111,115,116,97,100,100,114,32,115,97,100,100,114,50,49,57,50,50,54,32,104,111,115,116,50,50,48,50,50,55,32,112,111,114,116,50,50,49,50,50,56,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,32),40,116,99,112,45,108,105,115,116,101,110,32,112,111,114,116,51,55,57,32,46,32,116,109,112,51,55,56,51,56,48,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,108,105,115,116,101,110,101,114,63,32,120,52,48,54,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,19),40,116,99,112,45,99,108,111,115,101,32,116,99,112,108,52,48,57,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,49,50,32,120,52,50,50,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,14),40,99,104,101,99,107,32,108,111,99,52,50,49,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,114,101,97,100,45,105,110,112,117,116,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,97,49,56,50,54,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,30),40,108,111,111,112,32,108,101,110,53,51,53,32,111,102,102,115,101,116,53,51,54,32,100,108,119,53,51,55,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,13),40,111,117,116,112,117,116,32,115,53,51,50,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,48,57,32,115,53,54,51,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,13),40,102,95,50,48,50,57,32,115,53,54,54,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,7),40,97,49,57,50,50,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,102,95,49,57,57,51,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,7),40,97,50,48,52,52,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,50,48,54,54,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,7),40,97,50,49,48,56,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,97,50,49,53,56,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,110,52,57,52,32,109,52,57,53,32,115,116,97,114,116,52,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,34),40,97,50,49,55,54,32,112,52,56,57,32,110,52,57,48,32,100,101,115,116,52,57,49,32,115,116,97,114,116,52,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,14),40,97,50,50,54,57,32,112,111,115,53,49,51,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,50,50,53,57,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,37),40,97,50,51,49,53,32,110,101,120,116,53,50,49,32,108,105,110,101,53,50,50,32,102,117,108,108,45,108,105,110,101,63,53,50,51,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,21),40,97,50,50,52,49,32,112,53,48,55,32,108,105,109,105,116,53,48,56,41,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,12),40,97,50,51,54,52,32,112,53,50,56,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,29),40,35,35,110,101,116,35,105,111,45,112,111,114,116,115,32,108,111,99,52,51,49,32,102,100,52,51,50,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,97,99,99,101,112,116,32,116,99,112,108,53,56,53,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,27),40,116,99,112,45,97,99,99,101,112,116,45,114,101,97,100,121,63,32,116,99,112,108,54,48,53,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,51,51,57,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,50,56,49,48,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,29),40,97,50,56,49,54,32,104,111,115,116,54,50,56,54,51,48,32,112,111,114,116,54,50,57,54,51,49,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,31),40,116,99,112,45,99,111,110,110,101,99,116,32,104,111,115,116,54,49,55,32,46,32,109,111,114,101,54,49,56,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,116,99,112,45,112,111,114,116,45,62,102,105,108,101,110,111,32,112,54,56,54,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,97,100,100,114,101,115,115,101,115,32,112,54,56,57,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,23),40,116,99,112,45,112,111,114,116,45,110,117,109,98,101,114,115,32,112,55,48,51,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,27),40,116,99,112,45,108,105,115,116,101,110,101,114,45,112,111,114,116,32,116,99,112,108,55,49,53,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,23),40,116,99,112,45,97,98,97,110,100,111,110,45,112,111,114,116,32,112,55,50,51,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,26),40,116,99,112,45,108,105,115,116,101,110,101,114,45,102,105,108,101,110,111,32,108,55,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub613(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int err, optlen;optlen = sizeof(err);if (typecorrect_getsockopt(socket, SOL_SOCKET, SO_ERROR, &err, (socklen_t *)&optlen) == SOCKET_ERROR)  C_return(SOCKET_ERROR);C_return(err);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub350(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a1);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons(port);addr->sin_addr.s_addr = htonl(INADDR_ANY);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub222(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
char * host=(char * )C_string_or_null(C_a1);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a2);
struct hostent *he = gethostbyname(host);struct sockaddr_in *addr = (struct sockaddr_in *)saddr;if(he == NULL) C_return(0);memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons((short)port);addr->sin_addr = *((struct in_addr *)he->h_addr);C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub210(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * serv=(char * )C_string_or_null(C_a0);
char * proto=(char * )C_string_or_null(C_a1);
struct servent *se;
     if((se = getservbyname(serv, proto)) == NULL) C_return(0);
     else C_return(ntohs(se->s_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub205(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
#ifdef _WIN32
     C_return(WSAStartup(MAKEWORD(1, 1), &wsa) == 0);
#else
     signal(SIGPIPE, SIG_IGN);
     C_return(1);
#endif
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub200(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;unsigned int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, ((socklen_t *)&len)) != 0) C_return(NULL);ptr = (unsigned char *)&sa.sin_addr;C_snprintf(addr_buffer, sizeof(addr_buffer), "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub195(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub190(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub184(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)&len) != 0) C_return(NULL);ptr = (unsigned char *)&sa.sin_addr;C_snprintf(addr_buffer, sizeof(addr_buffer), "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub173(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
void * msg=(void * )C_data_pointer_or_null(C_a1);
int offset=(int )C_unfix(C_a2);
int len=(int )C_unfix(C_a3);
int flags=(int )C_unfix(C_a4);
C_return(send(s, (char *)msg+offset, len, flags));
C_ret:
#undef return

return C_r;}

/* from k1142 */
C_regparm static C_word C_fcall stub164(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_set_socket_options(t0));
return C_r;}

/* from k1135 */
C_regparm static C_word C_fcall stub159(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_check_fd_ready(t0));
return C_r;}

/* from k1125 */
C_regparm static C_word C_fcall stub150(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)connect(t0,t1,t2));
return C_r;}

/* from k1110 */
C_regparm static C_word C_fcall stub142(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)shutdown(t0,t1));
return C_r;}

/* from k1096 */
C_regparm static C_word C_fcall stub131(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)recv(t0,t1,t2,t3));
return C_r;}

/* from k1077 */
C_regparm static C_word C_fcall stub123(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)closesocket(t0));
return C_r;}

/* from k1064 */
C_regparm static C_word C_fcall stub112(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
C_r=C_fix((C_word)accept(t0,t1,t2));
return C_r;}

/* from k1049 */
C_regparm static C_word C_fcall stub104(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)listen(t0,t1));
return C_r;}

/* from k1035 */
C_regparm static C_word C_fcall stub94(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)bind(t0,t1,t2));
return C_r;}

/* from k1020 */
C_regparm static C_word C_fcall stub85(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)socket(t0,t1,t2));
return C_r;}

/* from ##net#interrupted? */
C_regparm static C_word C_fcall stub79(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(call_was_interrupted());
return C_r;}

/* from ##net#in-progress? */
C_regparm static C_word C_fcall stub76(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(call_in_progress());
return C_r;}

/* from ##net#retry? */
C_regparm static C_word C_fcall stub73(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(should_retry_call());
return C_r;}

/* from k996 */
C_regparm static C_word C_fcall stub68(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)errormsg_from_code(t0));
return C_r;}

/* from ##net#last-error-code */
C_regparm static C_word C_fcall stub64(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)get_last_socket_error());
return C_r;}

C_noret_decl(f_2183)
static void C_fcall f_2183(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word *av) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word *av) C_noret;
C_noret_decl(f_1923)
static void C_ccall f_1923(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word *av) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word *av) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word *av) C_noret;
C_noret_decl(f_1931)
static void C_fcall f_1931(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_fcall f_1934(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760(C_word c,C_word *av) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word *av) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947(C_word c,C_word *av) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word *av) C_noret;
C_noret_decl(f_1940)
static void C_fcall f_1940(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473(C_word c,C_word *av) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word *av) C_noret;
C_noret_decl(f_1734)
static void C_ccall f_1734(C_word c,C_word *av) C_noret;
C_noret_decl(f_1730)
static void C_ccall f_1730(C_word c,C_word *av) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word *av) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word *av) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word *av) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word *av) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word *av) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word *av) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word *av) C_noret;
C_noret_decl(f_1756)
static void C_fcall f_1756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word *av) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word *av) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word *av) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word *av) C_noret;
C_noret_decl(f_1977)
static void C_fcall f_1977(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word *av) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word *av) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word *av) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word *av) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word *av) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word *av) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word *av) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word *av) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726(C_word c,C_word *av) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645(C_word c,C_word *av) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word *av) C_noret;
C_noret_decl(f_1641)
static void C_fcall f_1641(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word *av) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externexport void C_ccall C_tcp_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1911)
static void C_ccall f_1911(C_word c,C_word *av) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word *av) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word *av) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word *av) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word *av) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word *av) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word *av) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word *av) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word *av) C_noret;
C_noret_decl(f_1657)
static void C_fcall f_1657(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1658)
static void C_fcall f_1658(C_word t0,C_word t1) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word *av) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word *av) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word *av) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word *av) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word *av) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word *av) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word *av) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word *av) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word *av) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word *av) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word *av) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word *av) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word *av) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word *av) C_noret;
C_noret_decl(f_2246)
static void C_ccall f_2246(C_word c,C_word *av) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word *av) C_noret;
C_noret_decl(f_1239)
static void C_fcall f_1239(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word *av) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word *av) C_noret;
C_noret_decl(f_2255)
static void C_fcall f_2255(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word *av) C_noret;
C_noret_decl(f_1212)
static void C_ccall f_1212(C_word c,C_word *av) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word *av) C_noret;
C_noret_decl(f_1665)
static void C_fcall f_1665(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word *av) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word *av) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word *av) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word *av) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word *av) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word *av) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word *av) C_noret;
C_noret_decl(f_1804)
static void C_ccall f_1804(C_word c,C_word *av) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f_2908)
static void C_ccall f_2908(C_word c,C_word *av) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word *av) C_noret;
C_noret_decl(f_1306)
static void C_ccall f_1306(C_word c,C_word *av) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word *av) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word *av) C_noret;
C_noret_decl(f_1300)
static void C_ccall f_1300(C_word c,C_word *av) C_noret;
C_noret_decl(f_1316)
static void C_ccall f_1316(C_word c,C_word *av) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word *av) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word *av) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word *av) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word *av) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word *av) C_noret;
C_noret_decl(f_2920)
static void C_ccall f_2920(C_word c,C_word *av) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word *av) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word *av) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word *av) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word *av) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word *av) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word *av) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word *av) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word *av) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word *av) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word *av) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word *av) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word *av) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word *av) C_noret;
C_noret_decl(f_2526)
static void C_ccall f_2526(C_word c,C_word *av) C_noret;
C_noret_decl(f_1771)
static void C_fcall f_1771(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static void C_fcall f_1773(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word *av) C_noret;
C_noret_decl(f_2436)
static void C_ccall f_2436(C_word c,C_word *av) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word *av) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word *av) C_noret;
C_noret_decl(f_1273)
static void C_fcall f_1273(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word *av) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word *av) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word *av) C_noret;
C_noret_decl(f_1248)
static void C_ccall f_1248(C_word c,C_word *av) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word *av) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word *av) C_noret;
C_noret_decl(f_2421)
static void C_fcall f_2421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word *av) C_noret;
C_noret_decl(f_1610)
static void C_fcall f_1610(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word *av) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word *av) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word *av) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word *av) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word *av) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word *av) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word *av) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word *av) C_noret;
C_noret_decl(f_1698)
static void C_ccall f_1698(C_word c,C_word *av) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word *av) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word *av) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word *av) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word *av) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word *av) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word *av) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word *av) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word *av) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word *av) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word *av) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word *av) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word *av) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word *av) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word *av) C_noret;
C_noret_decl(f_2563)
static void C_fcall f_2563(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word *av) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word *av) C_noret;
C_noret_decl(f_1582)
static void C_ccall f_1582(C_word c,C_word *av) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word *av) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373(C_word c,C_word *av) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word *av) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029(C_word c,C_word *av) C_noret;
C_noret_decl(f_1376)
static void C_ccall f_1376(C_word c,C_word *av) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word *av) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word *av) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word *av) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word *av) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word *av) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word *av) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word *av) C_noret;
C_noret_decl(f_2672)
static void C_ccall f_2672(C_word c,C_word *av) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word *av) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word *av) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word *av) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word *av) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word *av) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word *av) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word *av) C_noret;
C_noret_decl(f_1842)
static void C_ccall f_1842(C_word c,C_word *av) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word *av) C_noret;
C_noret_decl(f_2138)
static void C_ccall f_2138(C_word c,C_word *av) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word *av) C_noret;
C_noret_decl(f_2130)
static void C_ccall f_2130(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word *av) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word *av) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word *av) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word *av) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word *av) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word *av) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word *av) C_noret;
C_noret_decl(f_2123)
static void C_fcall f_2123(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2117)
static void C_fcall f_2117(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word *av) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word *av) C_noret;
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word *av) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word *av) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word *av) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word *av) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word *av) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word *av) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1424)
static void C_ccall f_1424(C_word c,C_word *av) C_noret;
C_noret_decl(f_1420)
static void C_ccall f_1420(C_word c,C_word *av) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word *av) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word *av) C_noret;
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2183)
static void C_ccall trf_2183(C_word c,C_word *av) C_noret;
static void C_ccall trf_2183(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2183(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1931)
static void C_ccall trf_1931(C_word c,C_word *av) C_noret;
static void C_ccall trf_1931(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1931(t0,t1);}

C_noret_decl(trf_1934)
static void C_ccall trf_1934(C_word c,C_word *av) C_noret;
static void C_ccall trf_1934(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1934(t0,t1);}

C_noret_decl(trf_1940)
static void C_ccall trf_1940(C_word c,C_word *av) C_noret;
static void C_ccall trf_1940(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1940(t0,t1);}

C_noret_decl(trf_1756)
static void C_ccall trf_1756(C_word c,C_word *av) C_noret;
static void C_ccall trf_1756(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1756(t0,t1,t2);}

C_noret_decl(trf_1977)
static void C_ccall trf_1977(C_word c,C_word *av) C_noret;
static void C_ccall trf_1977(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1977(t0,t1);}

C_noret_decl(trf_1641)
static void C_ccall trf_1641(C_word c,C_word *av) C_noret;
static void C_ccall trf_1641(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1641(t0,t1,t2,t3);}

C_noret_decl(trf_1657)
static void C_ccall trf_1657(C_word c,C_word *av) C_noret;
static void C_ccall trf_1657(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1657(t0,t1);}

C_noret_decl(trf_1658)
static void C_ccall trf_1658(C_word c,C_word *av) C_noret;
static void C_ccall trf_1658(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1658(t0,t1);}

C_noret_decl(trf_1239)
static void C_ccall trf_1239(C_word c,C_word *av) C_noret;
static void C_ccall trf_1239(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1239(t0,t1,t2,t3);}

C_noret_decl(trf_2255)
static void C_ccall trf_2255(C_word c,C_word *av) C_noret;
static void C_ccall trf_2255(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2255(t0,t1);}

C_noret_decl(trf_1665)
static void C_ccall trf_1665(C_word c,C_word *av) C_noret;
static void C_ccall trf_1665(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1665(t0,t1);}

C_noret_decl(trf_1771)
static void C_ccall trf_1771(C_word c,C_word *av) C_noret;
static void C_ccall trf_1771(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1771(t0,t1);}

C_noret_decl(trf_1773)
static void C_ccall trf_1773(C_word c,C_word *av) C_noret;
static void C_ccall trf_1773(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1773(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1273)
static void C_ccall trf_1273(C_word c,C_word *av) C_noret;
static void C_ccall trf_1273(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1273(t0,t1,t2);}

C_noret_decl(trf_2421)
static void C_ccall trf_2421(C_word c,C_word *av) C_noret;
static void C_ccall trf_2421(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2421(t0,t1);}

C_noret_decl(trf_1610)
static void C_ccall trf_1610(C_word c,C_word *av) C_noret;
static void C_ccall trf_1610(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1610(t0,t1);}

C_noret_decl(trf_2563)
static void C_ccall trf_2563(C_word c,C_word *av) C_noret;
static void C_ccall trf_2563(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2563(t0,t1);}

C_noret_decl(trf_2123)
static void C_ccall trf_2123(C_word c,C_word *av) C_noret;
static void C_ccall trf_2123(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2123(t0,t1);}

C_noret_decl(trf_2117)
static void C_ccall trf_2117(C_word c,C_word *av) C_noret;
static void C_ccall trf_2117(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2117(t0,t1);}

/* loop in a2176 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_2183(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2183,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=t3;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t6=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t10=C_substring_copy(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1],t9,t4);
t11=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t12=C_set_block_item(((C_word*)t0)[2],0,t11);
t13=C_fixnum_difference(t2,t8);
t14=C_fixnum_plus(t3,t8);
t15=C_fixnum_plus(t4,t8);
/* tcp.scm:431: loop */
t17=t1;
t18=t13;
t19=t14;
t20=t15;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2231,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:433: read-input */
t7=((C_word*)t0)[7];
f_1658(t7,t6);}}}

/* k2795 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2797,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2578(2,av2);}}
else{
/* tcp.scm:589: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[64];
av2[4]=lf[71];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k1398 in k1394 in k1371 in k1368 in k1362 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1400,2,av);}
/* tcp.scm:310: string-append */
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

/* a1922 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1923(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1923,2,av);}
a=C_alloc(11);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1931,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1977,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t5=C_block_size(((C_word*)((C_word*)t0)[6])[1]);
t6=t4;
f_1977(t6,C_fixnum_greaterp(t5,C_fix(0)));}
else{
t5=t4;
f_1977(t5,C_SCHEME_FALSE);}}}

/* k2728 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2730,2,av);}
/* tcp.scm:596: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[64];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2853(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2853,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[80]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2859,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:625: ##sys#tcp-port->fileno */
t6=*((C_word*)lf[76]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2859(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2859,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t2);
t6=stub184(t4,t5);
/* tcp.scm:185: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1793 in loop in k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1795,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* tcp.scm:488: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[28]+1);
av2[3]=((C_word*)t0)[8];
av2[4]=lf[39];
tp(5,av2);}}

/* k1796 in k1793 in loop in k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1798,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* tcp.scm:489: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t2;
tp(2,av2);}}

/* k1929 in a1922 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1931(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1931,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(2)))){
t3=t2;
f_1934(t3,C_SCHEME_UNDEFINED);}
else{
t3=((C_word*)t0)[3];
t4=C_fix((C_word)SHUT_WR);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t2;
f_1934(t7,stub142(C_SCHEME_UNDEFINED,t5,t6));}}

/* k1932 in k1929 in a1922 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1934(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1934,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub123(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_1940(t6,C_eqp(C_fix((C_word)SOCKET_ERROR),t5));}
else{
t3=t2;
f_1940(t3,C_SCHEME_FALSE);}}

/* k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1760(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1760,2,av);}
a=C_alloc(11);
t2=t1;
t3=C_block_size(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1771,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1893,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:480: current-milliseconds */
t7=*((C_word*)lf[37]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t5;
f_1771(t6,C_SCHEME_FALSE);}}

/* k2736 in k2732 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2738,2,av);}
/* tcp.scm:596: string-append */
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

/* k1945 in k1938 in k1932 in k1929 in a1922 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1947,2,av);}
/* tcp.scm:525: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2732 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2734(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2734,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1938 in k1932 in k1929 in a1922 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1940(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1940,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1951,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t3;
av2[2]=lf[46];
av2[3]=lf[10];
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1473(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1473,2,av);}
a=C_alloc(11);
t2=C_i_check_exact(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1479,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=t3;
t5=C_fix((C_word)SOCK_STREAM);
t6=((C_word*)t0)[5];
t7=((C_word*)t0)[4];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1361,a[2]=t5,a[3]=t4,a[4]=t6,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:296: make-string */
t9=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_fix((C_word)sizeof(struct sockaddr_in));
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k1477 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1479(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_1479,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1482,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub104(C_SCHEME_UNDEFINED,t4,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
t8=stub64(C_SCHEME_UNDEFINED);
t9=t8;
t10=C_i_foreign_fixnum_argumentp(t2);
t11=stub123(C_SCHEME_UNDEFINED,t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1501,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1505,a[2]=t12,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t13;
av2[2]=lf[9];
av2[3]=lf[10];
tp(4,av2);}}
else{
t8=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_a_i_record2(&a,2,lf[3],t2);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k1732 in k1728 in loop in k1663 in k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1734,2,av);}
/* tcp.scm:388: string-append */
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

/* k1728 in loop in k1663 in k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1730(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1730,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1734,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1836 in loop in k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1838,2,av);}
/* tcp.scm:499: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1480 in k1477 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1482,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_record2(&a,2,lf[3],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2758 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2760(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2760,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2764,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2754 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2756,2,av);}
/* tcp.scm:594: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[64];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2229 in loop in a2176 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2231,2,av);}
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* tcp.scm:436: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2183(t3,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* k1588 in k1584 in tcp-close in k1210 in k982 in k979 in k976 */
static void C_ccall f_1590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1590,2,av);}
/* tcp.scm:333: string-append */
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

/* k1884 in loop in k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1886,2,av);}
a=C_alloc(4);
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* tcp.scm:501: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1773(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1756(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1756,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1760,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:477: tcp-write-timeout */
t4=*((C_word*)lf[24]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1755(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_1755,2,av);}
a=C_alloc(29);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1756,a[2]=((C_word*)t0)[2],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1896,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(C_truep(((C_word*)((C_word*)t0)[5])[1])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2009,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2029,a[2]=t3,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1923,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word)li13),tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1993,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:507: make-output-port */
t8=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
/* tcp.scm:507: make-output-port */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* a2158 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2159,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:419: read-input */
t3=((C_word*)t0)[5];
f_1658(t3,t2);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2163(2,av2);}}}

/* k1750 in k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_1752,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
f_1665(t2,C_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* k2762 in k2758 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2764,2,av);}
/* tcp.scm:594: string-append */
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

/* k1975 in a1922 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1977(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1977,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:521: output */
t3=((C_word*)t0)[4];
f_1756(t3,t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=((C_word*)t0)[3];
f_1931(t2,C_SCHEME_UNDEFINED);}}

/* k1894 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1896(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1896,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[41]);
t4=C_i_setslot(t2,C_fix(3),lf[42]);
t5=C_i_setslot(((C_word*)t0)[2],C_fix(7),lf[43]);
t6=C_i_setslot(t2,C_fix(7),lf[43]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1911,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:535: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k1891 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_1893,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
f_1771(t2,C_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2811(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2811,2,av);}
a=C_alloc(8);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_block_size(t2);
t4=t3;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1273,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1273(t8,t1,C_fix(0));}

/* a2816 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2817(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2817,4,av);}
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t3);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2161 in a2158 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2163,2,av);}
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=C_subchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1978 in k1975 in a1922 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1980,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,lf[47]);
t3=((C_word*)t0)[3];
f_1931(t3,t2);}

/* a2176 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2177(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2177,6,av);}
a=C_alloc(11);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=((C_word)li19),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_2183(t9,t1,t3,C_fix(0),t5);}

/* k2801 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2803,2,av);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2572(2,av2);}}
else{
/* tcp.scm:586: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[17];
av2[3]=lf[64];
av2[4]=lf[72];
av2[5]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k1724 in loop in k1663 in k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1726,2,av);}
/* tcp.scm:388: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1645,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t2;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k2284 in a2269 in a2259 in k2253 in k2244 in a2241 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2286,2,av);}
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
t3=C_set_block_item(((C_word*)t0)[2],0,t2);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]))){
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[2])[1]);
t5=C_i_fixnum_min(((C_word*)((C_word*)t0)[5])[1],t4);
/* tcp.scm:455: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=t5;
C_values(5,av2);}}
else{
/* tcp.scm:458: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* ##net#io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1641(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_1641,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1645,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(make_socket_nonblocking(t3))){
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1645(2,av2);}}
else{
t5=stub64(C_SCHEME_UNDEFINED);
t6=t5;
t7=t3;
t8=C_i_foreign_fixnum_argumentp(t7);
t9=stub123(C_SCHEME_UNDEFINED,t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2396,a[2]=t4,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2400,a[2]=t10,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t11;
av2[2]=lf[58];
av2[3]=lf[10];
tp(4,av2);}}}

/* k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1648(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_1648,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_a_i_vector5(&a,5,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t2,C_fix(0));
t4=t3;
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fix(0);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1654,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t6,a[5]=t4,a[6]=t8,a[7]=((C_word*)t0)[3],a[8]=t12,a[9]=t10,tmp=(C_word)a,a+=10,tmp);
/* tcp.scm:365: tbs */
t14=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_tcp_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("tcp_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_tcp_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(343))){
C_save(t1);
C_rereclaim2(343*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,94);
lf[1]=C_h_intern(&lf[1],17,"\003sysmake-c-string");
lf[2]=C_h_intern(&lf[2],10,"tcp-listen");
lf[3]=C_h_intern(&lf[3],12,"tcp-listener");
lf[4]=C_h_intern(&lf[4],15,"\003syssignal-hook");
lf[5]=C_h_intern(&lf[5],14,"\000network-error");
lf[6]=C_h_intern(&lf[6],13,"string-append");
lf[7]=C_h_intern(&lf[7],17,"\003syspeek-c-string");
lf[8]=C_h_intern(&lf[8],17,"\003sysstring-append");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot listen on socket");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot bind to socket");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\035error while setting up socket");
lf[13]=C_h_intern(&lf[13],9,"\003syserror");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot create socket");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\037getting listener host IP failed");
lf[16]=C_h_intern(&lf[16],11,"make-string");
lf[17]=C_h_intern(&lf[17],13,"\000domain-error");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid port number");
lf[19]=C_h_intern(&lf[19],13,"tcp-listener\077");
lf[20]=C_h_intern(&lf[20],9,"tcp-close");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot close TCP socket");
lf[22]=C_h_intern(&lf[22],15,"tcp-buffer-size");
lf[23]=C_h_intern(&lf[23],16,"tcp-read-timeout");
lf[24]=C_h_intern(&lf[24],17,"tcp-write-timeout");
lf[25]=C_h_intern(&lf[25],19,"tcp-connect-timeout");
lf[26]=C_h_intern(&lf[26],18,"tcp-accept-timeout");
lf[28]=C_h_intern(&lf[28],18,"\003syscurrent-thread");
lf[29]=C_h_intern(&lf[29],22,"\000network-timeout-error");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\030read operation timed out");
lf[31]=C_h_intern(&lf[31],17,"\003systhread-yield!");
lf[32]=C_h_intern(&lf[32],25,"\003systhread-block-for-i/o!");
lf[33]=C_h_intern(&lf[33],6,"\000input");
lf[34]=C_h_intern(&lf[34],29,"\003systhread-block-for-timeout!");
lf[35]=C_h_intern(&lf[35],22,"\003sysdispatch-interrupt");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot read from socket");
lf[37]=C_h_intern(&lf[37],20,"current-milliseconds");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\031write operation timed out");
lf[39]=C_h_intern(&lf[39],7,"\000output");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot write to socket");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\005(tcp)");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\005(tcp)");
lf[43]=C_h_intern(&lf[43],6,"socket");
lf[44]=C_h_intern(&lf[44],18,"\003sysset-port-data!");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot close socket output port");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[49]=C_h_intern(&lf[49],16,"make-output-port");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot check socket for input");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\036cannot close socket input port");
lf[52]=C_h_intern(&lf[52],20,"\003sysscan-buffer-line");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[54]=C_h_intern(&lf[54],13,"\003syssubstring");
lf[55]=C_h_intern(&lf[55],15,"make-input-port");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[57]=C_h_intern(&lf[57],15,"\003sysmake-string");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create TCP ports");
lf[59]=C_h_intern(&lf[59],10,"tcp-accept");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\036could not accept from listener");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\032accept operation timed out");
lf[62]=C_h_intern(&lf[62],17,"tcp-accept-ready\077");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot check socket for input");
lf[64]=C_h_intern(&lf[64],11,"tcp-connect");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\023getsockopt() failed");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot create socket");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot connect to socket");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\016fcntl() failed");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\035error while setting up socket");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot create socket");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot find host address");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\021no port specified");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000 cannot compute port from service");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\003tcp");
lf[75]=C_h_intern(&lf[75],9,"substring");
lf[76]=C_h_intern(&lf[76],20,"\003systcp-port->fileno");
lf[77]=C_h_intern(&lf[77],5,"error");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000)argument does not appear to be a TCP port");
lf[79]=C_h_intern(&lf[79],13,"\003sysport-data");
lf[80]=C_h_intern(&lf[80],13,"tcp-addresses");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot compute remote address");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot compute local address");
lf[83]=C_h_intern(&lf[83],16,"tcp-port-numbers");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot compute remote port");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot compute local port");
lf[86]=C_h_intern(&lf[86],17,"tcp-listener-port");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot obtain listener port");
lf[88]=C_h_intern(&lf[88],16,"tcp-abandon-port");
lf[89]=C_h_intern(&lf[89],19,"tcp-listener-fileno");
lf[90]=C_h_intern(&lf[90],14,"make-parameter");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot initialize Winsock");
lf[92]=C_h_intern(&lf[92],17,"register-feature!");
lf[93]=C_h_intern(&lf[93],3,"tcp");
C_register_lf2(lf,94,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_978,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_ports_toplevel(2,av2);}}

/* k1909 in k1894 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1911,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:536: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k2867 in k2864 in k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2869(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2869,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2873,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t6=stub200(t4,t5);
/* tcp.scm:209: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2864 in k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2866,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
f_2869(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2904,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2908,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t4;
av2[2]=lf[82];
av2[3]=lf[10];
tp(4,av2);}}}

/* k1912 in k1909 in k1894 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1914,2,av);}
/* tcp.scm:537: values */{
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

/* k2953 in k2933 in k2924 in tcp-port-numbers in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2955(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2955,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2959,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2957 in k2953 in k2933 in k2924 in tcp-port-numbers in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2959,2,av);}
/* tcp.scm:640: string-append */
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

/* k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1654,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
t4=C_fixnum_greaterp(t2,C_fix(0));
t5=t3;
f_1657(t5,(C_truep(t4)?lf[56]:C_SCHEME_FALSE));}
else{
t4=t3;
f_1657(t4,C_SCHEME_FALSE);}}

/* k2949 in k2933 in k2924 in tcp-port-numbers in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2951,2,av);}
/* tcp.scm:640: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[83];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* tcp-listener-fileno in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3049,3,av);}
t3=C_i_check_structure_2(t2,lf[3],lf[89]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1657(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(66,0,8)))){
C_save_and_reclaim_args((void *)trf_1657,2,t0,t1);}
a=C_alloc(66);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2045,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li15),tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2067,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2109,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word)li17),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2159,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li18),tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2177,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2242,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:394: make-input-port */
t13=*((C_word*)lf[55]+1);{
C_word av2[9];
av2[0]=t13;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
av2[5]=t9;
av2[6]=t10;
av2[7]=t11;
av2[8]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(9,av2);}}

/* read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1658(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1658,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:369: tcp-read-timeout */
t3=*((C_word*)lf[23]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k982 in k979 in k976 */
static void C_ccall f_984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_984,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(stub205(C_SCHEME_UNDEFINED))){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1212(2,av2);}}
else{
/* tcp.scm:230: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[5];
av2[3]=lf[91];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k979 in k976 */
static void C_ccall f_981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_981,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:145: register-feature! */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2874 in k2871 in k2867 in k2864 in k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2876,2,av);}
/* tcp.scm:626: values */{
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

/* k2871 in k2867 in k2864 in k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2873,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
/* tcp.scm:626: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
C_values(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2883,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2887,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t4;
av2[2]=lf[81];
av2[3]=lf[10];
tp(4,av2);}}}

/* k3058 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3060,2,av);}
/* tcp.scm:352: make-parameter */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3062 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3064,2,av);}
/* tcp.scm:351: make-parameter */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1949 in k1938 in k1932 in k1929 in a1922 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1951(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1951,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1955,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1953 in k1949 in k1938 in k1932 in k1929 in a1922 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1955,2,av);}
/* tcp.scm:525: string-append */
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

/* k1221 in k1217 in k1298 in k1294 in loop in a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1223,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=stub210(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2885 in k2871 in k2867 in k2864 in k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2887(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2887,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2891,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2881 in k2871 in k2867 in k2864 in k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2883,2,av);}
/* tcp.scm:629: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[80];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1635,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[25]+1 /* (set! tcp-connect-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3060,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:352: check */
f_1610(t4,lf[26]);}

/* k3070 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3072,2,av);}
/* tcp.scm:349: make-parameter */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(60000);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1631,2,av);}
a=C_alloc(7);
t2=C_mutate2((C_word*)lf[24]+1 /* (set! tcp-write-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1635,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3064,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:351: check */
f_1610(t4,lf[25]);}

/* k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1639(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_1639,2,av);}
a=C_alloc(31);
t2=C_mutate2((C_word*)lf[26]+1 /* (set! tcp-accept-timeout ...) */,t1);
t3=*((C_word*)lf[22]+1);
t4=C_mutate2(&lf[27] /* (set! ##net#io-ports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1641,a[2]=t3,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate2((C_word*)lf[59]+1 /* (set! tcp-accept ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2408,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[62]+1 /* (set! tcp-accept-ready? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2503,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[64]+1 /* (set! tcp-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2553,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[76]+1 /* (set! ##sys#tcp-port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2835,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[80]+1 /* (set! tcp-addresses ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2853,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[83]+1 /* (set! tcp-port-numbers ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2920,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[86]+1 /* (set! tcp-listener-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2991,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[88]+1 /* (set! tcp-abandon-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[89]+1 /* (set! tcp-listener-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t14=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}

/* k3066 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3068,2,av);}
/* tcp.scm:350: make-parameter */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(60000);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2889 in k2885 in k2871 in k2867 in k2864 in k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2891,2,av);}
/* tcp.scm:629: string-append */
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

/* k2244 in a2241 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2246,2,av);}
a=C_alloc(8);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_2255(t4,t2);}
else{
t4=C_fudge(C_fix(21));
t5=t3;
f_2255(t5,C_fixnum_difference(t4,((C_word*)((C_word*)t0)[2])[1]));}}}

/* a2241 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2242,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:439: read-input */
t5=((C_word*)t0)[5];
f_1658(t5,t4);}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2246(2,av2);}}}

/* ##net#gethostaddr in k1210 in k982 in k979 in k976 */
static void C_fcall f_1239(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1239,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1248,a[2]=t4,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t8=C_i_foreign_string_argumentp(t3);
/* tcp.scm:239: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}
else{
t8=C_i_foreign_fixnum_argumentp(t4);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=stub222(C_SCHEME_UNDEFINED,t6,C_SCHEME_FALSE,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k2778 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2780,2,av);}
/* tcp.scm:592: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[64];
av2[4]=t1;
av2[5]=((C_word*)((C_word*)t0)[3])[1];
av2[6]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k2825 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2827,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
f_2563(t2,C_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* k2253 in k2244 in a2241 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_2255(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,5)))){
C_save_and_reclaim_args((void *)trf_2255,2,t0,t1);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2260,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li22),tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:442: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[7];
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* ##sys#tcp-port->fileno in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2835,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2839,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:618: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k1210 in k982 in k979 in k976 */
static void C_ccall f_1212(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_1212,2,av);}
a=C_alloc(15);
t2=C_mutate2(&lf[0] /* (set! ##net#gethostaddr ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1239,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[2]+1 /* (set! tcp-listen ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1454,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[19]+1 /* (set! tcp-listener? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1553,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[20]+1 /* (set! tcp-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1562,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:338: make-parameter */
t7=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k2837 in tcp-port->fileno in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2839,2,av);}
if(C_truep(C_i_vectorp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* tcp.scm:621: error */
t2=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[76];
av2[3]=lf[78];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k1663 in k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1665(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1665,2,t0,t1);}
a=C_alloc(13);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li6),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];{
C_word av2[2];
av2[0]=t6;
av2[1]=((C_word*)t0)[8];
f_1670(2,av2);}}

/* k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_1662,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1665,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1752,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:370: current-milliseconds */
t5=*((C_word*)lf[37]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_1665(t4,C_SCHEME_FALSE);}}

/* a2259 in k2253 in k2244 in a2241 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2260,2,av);}
a=C_alloc(8);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li21),tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:444: ##sys#scan-buffer-line */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[52]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)((C_word*)t0)[2])[1];
av2[5]=t4;
tp(6,av2);}}

/* k1217 in k1298 in k1294 in loop in a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1219,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1223,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[3]);
/* tcp.scm:233: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub210(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a2269 in a2259 in k2253 in k2244 in a2241 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2270(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2270,3,av);}
a=C_alloc(8);
t3=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
t4=t3;
if(C_truep(C_fixnum_greater_or_equal_p(t4,((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:451: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=t2;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2286,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:452: read-input */
t6=((C_word*)t0)[6];
f_1658(t6,t5);}}

/* k2910 in k2906 in k2864 in k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2912,2,av);}
/* tcp.scm:627: string-append */
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

/* k3038 in tcp-abandon-port in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3040,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(t2)?C_i_set_i_slot(t1,C_fix(1),C_SCHEME_TRUE):C_i_set_i_slot(t1,C_fix(2),C_SCHEME_TRUE));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1799 in k1796 in k1793 in loop in k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 in ... */
static void C_ccall f_1801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1801,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(*((C_word*)lf[28]+1),C_fix(13)))){
/* tcp.scm:491: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[29];
av2[3]=lf[38];
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* tcp.scm:494: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1773(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k1802 in k1799 in k1796 in k1793 in loop in k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in ... */
static void C_ccall f_1804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1804,2,av);}
/* tcp.scm:494: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1773(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2902 in k2864 in k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2904,2,av);}
/* tcp.scm:627: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[80];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2906 in k2864 in k2857 in tcp-addresses in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2908(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2908,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2394 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2396,2,av);}
/* tcp.scm:358: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2977 in k2924 in tcp-port-numbers in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2979(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2979,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2973 in k2924 in tcp-port-numbers in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2975,2,av);}
/* tcp.scm:638: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[83];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1304 in k1301 in k1298 in k1294 in loop in a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1306,2,av);}
/* tcp.scm:278: values */{
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

/* k1301 in k1298 in k1294 in loop in a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1303(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1303,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1316,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1320,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t6;
av2[2]=lf[73];
av2[3]=lf[10];
tp(4,av2);}}
else{
/* tcp.scm:278: values */{
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
C_values(4,av2);}}}

/* k2981 in k2977 in k2924 in tcp-port-numbers in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2983,2,av);}
/* tcp.scm:638: string-append */
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

/* k1298 in k1294 in loop in a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1300(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1300,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=t3;
t5=lf[74];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1219,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t7=C_i_foreign_string_argumentp(t2);
/* tcp.scm:233: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t6;
av2[2]=t7;
tp(3,av2);}}
else{
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_1219(2,av2);}}}

/* k1314 in k1301 in k1298 in k1294 in loop in a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1316,2,av);}
/* tcp.scm:283: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[64];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* tcp-listener-port in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2991(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2991,3,av);}
a=C_alloc(12);
t3=C_i_check_structure_2(t2,lf[3],lf[86]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_i_foreign_fixnum_argumentp(t5);
t7=stub190(C_SCHEME_UNDEFINED,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3004,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_eqp(C_fix(-1),t8);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3014,a[2]=t9,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t12;
av2[2]=lf[87];
av2[3]=lf[10];
tp(4,av2);}}
else{
t11=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}

/* k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2418,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2501,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:543: current-milliseconds */
t5=*((C_word*)lf[37]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_2421(t4,C_SCHEME_FALSE);}}

/* k1322 in k1318 in k1301 in k1298 in k1294 in loop in a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1324,2,av);}
/* tcp.scm:283: string-append */
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

/* k2924 in tcp-port-numbers in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2926(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2926,2,av);}
a=C_alloc(13);
t2=C_i_foreign_fixnum_argumentp(t1);
t3=stub190(C_SCHEME_UNDEFINED,t2);
t4=t3;
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub195(C_SCHEME_UNDEFINED,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2935,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t7,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=C_eqp(C_fix(-1),t4);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2975,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t11;
av2[2]=lf[85];
av2[3]=lf[10];
tp(4,av2);}}
else{
t10=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_2935(2,av2);}}}

/* k1318 in k1301 in k1298 in k1294 in loop in a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1320(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1320,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1324,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* tcp-port-numbers in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2920(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2920,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[83]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2926,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:634: ##sys#tcp-port->fileno */
t6=*((C_word*)lf[76]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2408(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2408,3,av);}
a=C_alloc(5);
t3=C_i_check_structure(t2,lf[3]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2418,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:542: tcp-accept-timeout */
t7=*((C_word*)lf[26]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k2398 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2400(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2400,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2933 in k2924 in tcp-port-numbers in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2935,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2951,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2955,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t5;
av2[2]=lf[84];
av2[3]=lf[10];
tp(4,av2);}}
else{
/* tcp.scm:641: values */{
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
C_values(4,av2);}}}

/* k2402 in k2398 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2404,2,av);}
/* tcp.scm:358: string-append */
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

/* k2936 in k2933 in k2924 in tcp-port-numbers in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2938,2,av);}
/* tcp.scm:641: values */{
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

/* a2364 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2365,3,av);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[53];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:471: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[54]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
tp(5,av2);}}}

/* k2373 in a2364 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2375,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2465 in k2437 in k2434 in k2431 in k2428 in loop in k2419 in k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2467,2,av);}
/* tcp.scm:560: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[59];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2473 in k2469 in k2437 in k2434 in k2431 in k2428 in loop in k2419 in k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2475,2,av);}
/* tcp.scm:560: string-append */
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

/* tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,5)))){
C_save_and_reclaim((void*)f_1454,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(100):C_i_car(t3));
t6=t5;
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=t10;
t12=C_i_nullp(t8);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t14=C_i_check_exact(t2);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1473,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
t16=C_fixnum_lessp(t2,C_fix(0));
if(C_truep(t16)){
if(C_truep(t16)){
/* tcp.scm:318: ##sys#signal-hook */
t17=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=lf[17];
av2[3]=lf[2];
av2[4]=lf[18];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t17+1)))(6,av2);}}
else{
t17=t15;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t17;
av2[1]=C_SCHEME_UNDEFINED;
f_1473(2,av2);}}}
else{
if(C_truep(C_fixnum_greaterp(t2,C_fix(65535)))){
/* tcp.scm:318: ##sys#signal-hook */
t17=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=lf[17];
av2[3]=lf[2];
av2[4]=lf[18];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t17+1)))(6,av2);}}
else{
t17=t15;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t17;
av2[1]=C_SCHEME_UNDEFINED;
f_1473(2,av2);}}}}

/* k2469 in k2437 in k2434 in k2431 in k2428 in loop in k2419 in k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2471(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2471,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2475,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1294 in loop in a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1296,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1300,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:280: substring */
t4=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1444 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1446,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_1364(2,av2);}}
else{
/* tcp.scm:299: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[2];
av2[4]=lf[15];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}}

/* k2524 in tcp-accept-ready? in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2526,2,av);}
/* tcp.scm:567: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[62];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1771(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1771,2,t0,t1);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1773(t5,((C_word*)t0)[5],((C_word*)t0)[6],C_fix(0),t1);}

/* loop in k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1773(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t25;
C_word t26;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1773,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_i_fixnum_min(C_fix(8192),t2);
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[3];
t8=t3;
t9=C_i_foreign_fixnum_argumentp(t6);
t10=(C_truep(t7)?C_i_foreign_block_argumentp(t7):C_SCHEME_FALSE);
t11=C_i_foreign_fixnum_argumentp(t8);
t12=C_i_foreign_fixnum_argumentp(t5);
t13=C_i_foreign_fixnum_argumentp(C_fix(0));
t14=stub173(C_SCHEME_UNDEFINED,t9,t10,t11,t12,t13);
t15=C_eqp(C_fix((C_word)SOCKET_ERROR),t14);
if(C_truep(t15)){
if(C_truep(stub73(C_SCHEME_UNDEFINED))){
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1795,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
/* tcp.scm:486: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t16;
av2[2]=*((C_word*)lf[28]+1);
av2[3]=t4;
tp(4,av2);}}
else{
t17=t16;{
C_word av2[2];
av2[0]=t17;
av2[1]=C_SCHEME_UNDEFINED;
f_1795(2,av2);}}}
else{
if(C_truep(stub79(C_SCHEME_UNDEFINED))){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1827,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:496: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t1;
av2[2]=t16;
tp(3,av2);}}
else{
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1838,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1842,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t17;
av2[2]=lf[40];
av2[3]=lf[10];
tp(4,av2);}}}}
else{
if(C_truep(C_fixnum_lessp(t14,t2))){
t16=C_fixnum_difference(t2,t14);
t17=t16;
t18=C_fixnum_plus(t3,t14);
t19=t18;
t20=C_eqp(t14,C_fix(0));
if(C_truep(t20)){
/* tcp.scm:501: loop */
t23=t1;
t24=t17;
t25=t19;
t26=((C_word*)t0)[5];
t1=t23;
t2=t24;
t3=t25;
t4=t26;
goto loop;}
else{
if(C_truep(((C_word*)t0)[5])){
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1886,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t17,a[6]=t19,tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:505: current-milliseconds */
t22=*((C_word*)lf[37]+1);{
C_word av2[2];
av2[0]=t22;
av2[1]=t21;
((C_proc)(void*)(*((C_word*)t22+1)))(2,av2);}}
else{
/* tcp.scm:501: loop */
t23=t1;
t24=t17;
t25=t19;
t26=C_SCHEME_FALSE;
t1=t23;
t2=t24;
t3=t25;
t4=t26;
goto loop;}}}
else{
t16=t1;{
C_word av2[2];
av2[0]=t16;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}}

/* k2437 in k2434 in k2431 in k2428 in loop in k2419 in k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2439(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2439,2,av);}
a=C_alloc(7);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub112(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=C_eqp(C_fix((C_word)INVALID_SOCKET),t3);
if(C_truep(t4)){
if(C_truep(stub79(C_SCHEME_UNDEFINED))){
/* tcp.scm:558: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2467,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2471,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t6;
av2[2]=lf[60];
av2[3]=lf[10];
tp(4,av2);}}}
else{
/* tcp.scm:556: ##net#io-ports */
t5=lf[27];
f_1641(t5,((C_word*)t0)[3],lf[59],t3);}}

/* k2434 in k2431 in k2428 in loop in k2419 in k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_2436,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_slot(*((C_word*)lf[28]+1),C_fix(13)))){
/* tcp.scm:550: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[29];
av2[3]=lf[59];
av2[4]=lf[61];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2439(2,av2);}}}

/* k2431 in k2428 in loop in k2419 in k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2433,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:548: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t2;
tp(2,av2);}}

/* k976 */
static void C_ccall f_978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_978,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_981,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scheduler_toplevel(2,av2);}}

/* loop in a2810 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1273(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1273,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* tcp.scm:275: values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
t3=C_subchar(((C_word*)t0)[3],t2);
if(C_truep(C_i_char_equalp(t3,C_make_character(58)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1296,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* tcp.scm:279: substring */
t6=*((C_word*)lf[75]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t5;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* tcp.scm:285: loop */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}}

/* k2428 in loop in k2419 in k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2430,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:547: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[28]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[33];
tp(5,av2);}}

/* k2499 in k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2501,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
f_2421(t2,C_a_i_plus(&a,2,((C_word*)t0)[3],t1));}

/* tcp-accept-ready? in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2503(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2503,3,av);}
a=C_alloc(11);
t3=C_i_check_structure_2(t2,lf[3],lf[62]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub159(C_SCHEME_UNDEFINED,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2513,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_eqp(C_fix((C_word)SOCKET_ERROR),t7);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2526,a[2]=t8,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2530,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t11;
av2[2]=lf[63];
av2[3]=lf[10];
tp(4,av2);}}
else{
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_eqp(C_fix(1),t7);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k1246 in gethostaddr in k1210 in k982 in k979 in k976 */
static void C_ccall f_1248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1248,2,av);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=stub222(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1604(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1604,2,av);}
a=C_alloc(10);
t2=C_mutate2((C_word*)lf[22]+1 /* (set! tcp-buffer-size ...) */,t1);
t3=C_set_block_item(lf[23] /* tcp-read-timeout */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[24] /* tcp-write-timeout */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[25] /* tcp-connect-timeout */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[26] /* tcp-accept-timeout */,0,C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1610,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1627,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3072,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:349: check */
f_1610(t9,lf[23]);}

/* loop in k2419 in k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2426,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm:546: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[28]+1);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2430(2,av2);}}}

/* k2419 in k2416 in tcp-accept in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_2421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_2421,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2426,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word)li27),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];{
C_word av2[2];
av2[0]=t6;
av2[1]=((C_word*)t0)[5];
f_2426(2,av2);}}

/* f_1612 in check in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1612,3,av);}
if(C_truep(t2)){
t3=C_i_check_exact_2(t2,((C_word*)t0)[2]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* check in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_1610(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1610,2,t1,t2);}
a=C_alloc(4);
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1612,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2587(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_2587,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(make_socket_nonblocking(((C_word*)t0)[2]))){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2590(2,av2);}}
else{
t3=stub64(C_SCHEME_UNDEFINED);
t4=t3;
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t6=stub123(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2730,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2734,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t8;
av2[2]=lf[68];
av2[3]=lf[10];
tp(4,av2);}}}

/* k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2584(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_2584,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=stub164(C_SCHEME_UNDEFINED,t3);
t5=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t5)){
t6=stub64(C_SCHEME_UNDEFINED);
t7=t6;
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t9=stub123(C_SCHEME_UNDEFINED,t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2756,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2760,a[2]=t10,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t11;
av2[2]=lf[69];
av2[3]=lf[10];
tp(4,av2);}}
else{
t6=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_2587(2,av2);}}}

/* k2709 in k2705 in loop in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2711,2,av);}
/* tcp.scm:607: string-append */
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

/* k1394 in k1371 in k1368 in k1362 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1396(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1396,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1400,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1390 in k1371 in k1368 in k1362 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1392,2,av);}
/* tcp.scm:310: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[2];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_2553,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_i_nullp(t3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t3));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2560,a[2]=t4,a[3]=t8,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:580: tcp-connect-timeout */
t10=*((C_word*)lf[25]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k2705 in loop in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2707(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2707,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2701 in loop in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_2703,2,av);}
/* tcp.scm:607: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[64];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)((C_word*)t0)[4])[1];
av2[7]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k1687 in loop in k1663 in k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1689,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:378: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[28]+1);
av2[3]=((C_word*)t0)[5];
av2[4]=lf[33];
tp(5,av2);}}

/* k1690 in k1687 in loop in k1663 in k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1692,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:379: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t2;
tp(2,av2);}}

/* k1693 in k1690 in k1687 in loop in k1663 in k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_1695,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(*((C_word*)lf[28]+1),C_fix(13)))){
/* tcp.scm:381: ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[29];
av2[3]=lf[30];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* tcp.scm:384: loop */
t3=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
f_1670(2,av2);}}}

/* k1696 in k1693 in k1690 in k1687 in loop in k1663 in k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 in ... */
static void C_ccall f_1698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1698,2,av);}
/* tcp.scm:384: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_1670(2,av2);}}

/* k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2578(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_2578,2,av);}
a=C_alloc(16);
t2=C_fix((C_word)AF_INET);
t3=C_fix((C_word)SOCK_STREAM);
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=C_i_foreign_fixnum_argumentp(C_fix(0));
t7=stub85(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2584,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t10=C_eqp(C_fix((C_word)INVALID_SOCKET),t8);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2780,a[2]=t9,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2784,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t12;
av2[2]=lf[70];
av2[3]=lf[10];
tp(4,av2);}}
else{
t11=t9;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_2584(2,av2);}}}

/* k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_2572,2,av);}
a=C_alloc(11);
t2=C_i_check_exact(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2797,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:588: ##net#gethostaddr */
f_1239(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k2624 in k2620 in k2591 in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2626,2,av);}
/* tcp.scm:611: string-append */
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

/* tcp-listener? in k1210 in k982 in k979 in k976 */
static void C_ccall f_1553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1553,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_structurep(t2,lf[3]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2620 in k2591 in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2622(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2622,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1627,2,av);}
a=C_alloc(7);
t2=C_mutate2((C_word*)lf[23]+1 /* (set! tcp-read-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3068,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:350: check */
f_1610(t4,lf[24]);}

/* k2012 */
static void C_ccall f_2014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2014,2,av);}
a=C_alloc(4);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:512: output */
t5=((C_word*)t0)[5];
f_1756(t5,t4,((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* loop in k1663 in k1660 in read-input in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1670(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1670,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(t2);
t4=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(C_fix(1024));
t6=C_i_foreign_fixnum_argumentp(C_fix(0));
t7=stub131(C_SCHEME_UNDEFINED,t3,t4,t5,t6);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t7);
if(C_truep(t8)){
if(C_truep(stub73(C_SCHEME_UNDEFINED))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm:376: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t9;
av2[2]=*((C_word*)lf[28]+1);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t10=t9;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_1689(2,av2);}}}
else{
if(C_truep(stub79(C_SCHEME_UNDEFINED))){
/* tcp.scm:386: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1726,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1730,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t10;
av2[2]=lf[36];
av2[3]=lf[10];
tp(4,av2);}}}}
else{
t9=C_set_block_item(((C_word*)t0)[7],0,t7);
t10=C_i_set_i_slot(((C_word*)t0)[8],C_fix(4),t7);
t11=C_set_block_item(((C_word*)t0)[9],0,C_fix(0));
t12=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* k2616 in k2591 in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2618,2,av);}
/* tcp.scm:611: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[64];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* tcp-close in k1210 in k982 in k979 in k976 */
static void C_ccall f_1562(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1562,3,av);}
a=C_alloc(7);
t3=C_i_check_structure(t2,lf[3]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub123(C_SCHEME_UNDEFINED,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1582,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1586,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t9;
av2[2]=lf[21];
av2[3]=lf[10];
tp(4,av2);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* f_2009 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2009,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:510: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=t2;
tp(4,av2);}}

/* k2001 */
static void C_ccall f_2003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2003,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,lf[48]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1361,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1446,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:298: ##net#gethostaddr */
f_1239(t4,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t4=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=stub350(C_SCHEME_UNDEFINED,t4,t5);
f_1364(2,av2);}}}

/* k1362 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1364(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1364,2,av);}
a=C_alloc(7);
t2=C_fix((C_word)AF_INET);
t3=C_i_foreign_fixnum_argumentp(t2);
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t5=C_i_foreign_fixnum_argumentp(C_fix(0));
t6=stub85(C_SCHEME_UNDEFINED,t3,t4,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1370,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_eqp(C_fix((C_word)INVALID_SOCKET),t7);
if(C_truep(t9)){
/* tcp.scm:305: ##sys#error */
t10=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=lf[14];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t10=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_1370(2,av2);}}}

/* k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_2563(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2563,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:582: make-string */
t4=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix((C_word)sizeof(struct sockaddr_in));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2566(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_2566,2,av);}
a=C_alloc(21);
t2=t1;
t3=C_i_check_string(((C_word*)((C_word*)t0)[2])[1]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2572,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2572(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[2],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:585: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}}

/* k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2560,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2827,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:581: current-milliseconds */
t5=*((C_word*)lf[37]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_2563(t4,C_SCHEME_FALSE);}}

/* k1580 in tcp-close in k1210 in k982 in k979 in k976 */
static void C_ccall f_1582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1582,2,av);}
/* tcp.scm:333: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[20];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1584 in tcp-close in k1210 in k982 in k979 in k976 */
static void C_ccall f_1586(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1586,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1590,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1371 in k1368 in k1362 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1373(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_1373,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fix((C_word)sizeof(struct sockaddr_in));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=(C_truep(((C_word*)t0)[4])?C_i_foreign_block_argumentp(((C_word*)t0)[4]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=stub94(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t7);
if(C_truep(t8)){
t9=stub64(C_SCHEME_UNDEFINED);
t10=t9;
t11=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t12=stub123(C_SCHEME_UNDEFINED,t11);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1392,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1396,a[2]=t13,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t14;
av2[2]=lf[11];
av2[3]=lf[10];
tp(4,av2);}}
else{
t9=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k1368 in k1362 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1370(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_1370,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=stub164(C_SCHEME_UNDEFINED,t3);
t5=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1416,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1420,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t7;
av2[2]=lf[12];
av2[3]=lf[10];
tp(4,av2);}}
else{
t6=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_1373(2,av2);}}}

/* f_2029 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2029,3,av);}
t3=C_block_size(t2);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
/* tcp.scm:516: output */
t4=((C_word*)t0)[2];
f_1756(t4,t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1374 in k1371 in k1368 in k1362 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1376,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2532 in k2528 in tcp-accept-ready? in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2534,2,av);}
/* tcp.scm:567: string-append */
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

/* k2021 in k2012 */
static void C_ccall f_2023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2023,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,lf[45]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2528 in tcp-accept-ready? in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2530(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2530,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2534,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2511 in tcp-accept-ready? in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2513,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2078 in a2066 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2080,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2673 in k2670 in loop in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2675,2,av);}
/* tcp.scm:603: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* k2095 in a2066 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
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
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2097,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2101,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2670 in loop in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2672,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2675,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:602: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[28]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=lf[39];
tp(5,av2);}}

/* k2091 in a2066 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2093,2,av);}
/* tcp.scm:409: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3002 in tcp-listener-port in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3004,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2646 in k2591 in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2648(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2648,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2642 in k2591 in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2644,2,av);}
/* tcp.scm:614: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[64];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1844 in k1840 in loop in k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1846,2,av);}
/* tcp.scm:499: string-append */
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

/* a2315 in k2253 in k2244 in a2241 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2316(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2316,5,av);}
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[2],C_fix(4));
t6=C_fixnum_plus(t5,C_fix(1));
t7=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t6);
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_fix(0));
t9=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t5=C_slot(((C_word*)t0)[2],C_fix(5));
t6=C_block_size(t3);
t7=C_fixnum_plus(t5,t6);
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t7);
t9=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k3016 in tcp-listener-port in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3018(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3018,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1840 in loop in k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1842(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1842,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1846,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k3012 in tcp-listener-port in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3014,2,av);}
/* tcp.scm:648: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[86];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* tcp-abandon-port in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3030(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3030,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[88]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3040,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:654: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t5;
av2[2]=t2;
tp(3,av2);}}

/* k2136 in k2132 in k2121 in k2115 in a2108 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2138,2,av);}
/* tcp.scm:416: string-append */
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

/* k2132 in k2121 in k2115 in a2108 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2134(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2134,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2138,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2128 in k2121 in k2115 in a2108 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2130,2,av);}
/* tcp.scm:416: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3020 in k3016 in tcp-listener-port in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_3022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3022,2,av);}
/* tcp.scm:648: string-append */
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

/* k2597 in k2591 in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2599,2,av);}
/* tcp.scm:615: ##net#io-ports */
t2=lf[27];
f_1641(t2,((C_word*)t0)[2],lf[64],((C_word*)t0)[3]);}

/* k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2590,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li30),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t2;
f_2656(2,av2);}}

/* k2591 in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2593,2,av);}
a=C_alloc(12);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub613(C_SCHEME_UNDEFINED,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2599,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t6)){
t7=stub64(C_SCHEME_UNDEFINED);
t8=t7;
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t10=stub123(C_SCHEME_UNDEFINED,t9);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2618,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2622,a[2]=t11,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t12;
av2[2]=lf[65];
av2[3]=lf[10];
tp(4,av2);}}
else{
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t7=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t8=stub123(C_SCHEME_UNDEFINED,t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2644,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2648,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t10;
av2[2]=lf[66];
av2[3]=lf[10];
tp(4,av2);}}
else{
/* tcp.scm:615: ##net#io-ports */
t7=lf[27];
f_1641(t7,((C_word*)t0)[3],lf[64],((C_word*)t0)[2]);}}}

/* a2044 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2045,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:397: read-input */
t3=((C_word*)t0)[5];
f_1658(t3,t2);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2049(2,av2);}}}

/* k2047 in a2044 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2049,2,av);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_subchar(((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1]);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_set_block_item(((C_word*)t0)[2],0,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a1826 in loop in k1769 in k1758 in output in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1827,2,av);}
/* tcp.scm:497: g555 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1773(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2121 in k2115 in a2108 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_2123(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2123,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2134,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t3;
av2[2]=lf[51];
av2[3]=lf[10];
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2115 in a2108 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_fcall f_2117(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2117,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub123(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_2123(t6,C_eqp(C_fix((C_word)SOCKET_ERROR),t5));}
else{
t3=t2;
f_2123(t3,C_SCHEME_FALSE);}}

/* a2066 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2067(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2067,2,av);}
a=C_alloc(11);
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=((C_word*)t0)[4];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub159(C_SCHEME_UNDEFINED,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2080,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2093,a[2]=t7,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2097,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t10;
av2[2]=lf[50];
av2[3]=lf[10];
tp(4,av2);}}
else{
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_eqp(t6,C_fix(1));
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* a2108 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2109(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2109,2,av);}
a=C_alloc(5);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2117,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(1)))){
t4=t3;
f_2117(t4,C_SCHEME_UNDEFINED);}
else{
t4=((C_word*)t0)[3];
t5=C_fix((C_word)SHUT_RD);
t6=C_i_foreign_fixnum_argumentp(t4);
t7=C_i_foreign_fixnum_argumentp(t5);
t8=t3;
f_2117(t8,stub142(C_SCHEME_UNDEFINED,t6,t7));}}}

/* k2099 in k2095 in a2066 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2101,2,av);}
/* tcp.scm:409: string-append */
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

/* loop in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2656(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2656,2,av);}
a=C_alloc(10);
t2=C_fix((C_word)sizeof(struct sockaddr_in));
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(t2);
t6=stub150(C_SCHEME_UNDEFINED,t3,t4,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
if(C_truep(stub76(C_SCHEME_UNDEFINED))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2672,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* tcp.scm:601: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t8;
av2[2]=*((C_word*)lf[28]+1);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t9=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_2672(2,av2);}}}
else{
if(C_truep(stub79(C_SCHEME_UNDEFINED))){
/* tcp.scm:605: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
tp(3,av2);}}
else{
t8=stub64(C_SCHEME_UNDEFINED);
t9=t8;
t10=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t11=stub123(C_SCHEME_UNDEFINED,t10);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2703,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2707,a[2]=t12,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t13;
av2[2]=lf[67];
av2[3]=lf[10];
tp(4,av2);}}}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k1414 in k1368 in k1362 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1416,2,av);}
/* tcp.scm:308: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[2];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2650 in k2646 in k2591 in k2588 in k2585 in k2582 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2652,2,av);}
/* tcp.scm:614: string-append */
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

/* k1503 in k1477 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1505(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1505,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1509,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub68(t4,t5);
/* tcp.scm:163: ##sys#peek-c-string */
t7=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t6;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1507 in k1503 in k1477 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1509,2,av);}
/* tcp.scm:322: string-append */
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

/* k1499 in k1477 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1501,2,av);}
/* tcp.scm:322: ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[5];
av2[3]=lf[2];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k1422 in k1418 in k1368 in k1362 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1424,2,av);}
/* tcp.scm:308: string-append */
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

/* k1418 in k1368 in k1362 in k1359 in k1471 in tcp-listen in k1210 in k982 in k979 in k976 */
static void C_ccall f_1420(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1420,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1424,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2782 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2784(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2784,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2788,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub64(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub68(t5,t6);
/* tcp.scm:163: ##sys#peek-c-string */
t8=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2786 in k2782 in k2576 in k2570 in k2564 in k2561 in k2558 in tcp-connect in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_2788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2788,2,av);}
/* tcp.scm:592: string-append */
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

/* f_1993 in k1753 in k1655 in k1652 in k1646 in k1643 in io-ports in k1637 in k1633 in k1629 in k1625 in k1602 in k1210 in k982 in k979 in k976 */
static void C_ccall f_1993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1993,2,av);}
a=C_alloc(4);
t2=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2003,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:529: output */
t4=((C_word*)t0)[3];
f_1756(t4,t3,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[219] = {
{"f_2183:tcp_2escm",(void*)f_2183},
{"f_2797:tcp_2escm",(void*)f_2797},
{"f_1400:tcp_2escm",(void*)f_1400},
{"f_1923:tcp_2escm",(void*)f_1923},
{"f_2730:tcp_2escm",(void*)f_2730},
{"f_2853:tcp_2escm",(void*)f_2853},
{"f_2859:tcp_2escm",(void*)f_2859},
{"f_1795:tcp_2escm",(void*)f_1795},
{"f_1798:tcp_2escm",(void*)f_1798},
{"f_1931:tcp_2escm",(void*)f_1931},
{"f_1934:tcp_2escm",(void*)f_1934},
{"f_1760:tcp_2escm",(void*)f_1760},
{"f_2738:tcp_2escm",(void*)f_2738},
{"f_1947:tcp_2escm",(void*)f_1947},
{"f_2734:tcp_2escm",(void*)f_2734},
{"f_1940:tcp_2escm",(void*)f_1940},
{"f_1473:tcp_2escm",(void*)f_1473},
{"f_1479:tcp_2escm",(void*)f_1479},
{"f_1734:tcp_2escm",(void*)f_1734},
{"f_1730:tcp_2escm",(void*)f_1730},
{"f_1838:tcp_2escm",(void*)f_1838},
{"f_1482:tcp_2escm",(void*)f_1482},
{"f_2760:tcp_2escm",(void*)f_2760},
{"f_2756:tcp_2escm",(void*)f_2756},
{"f_2231:tcp_2escm",(void*)f_2231},
{"f_1590:tcp_2escm",(void*)f_1590},
{"f_1886:tcp_2escm",(void*)f_1886},
{"f_1756:tcp_2escm",(void*)f_1756},
{"f_1755:tcp_2escm",(void*)f_1755},
{"f_2159:tcp_2escm",(void*)f_2159},
{"f_1752:tcp_2escm",(void*)f_1752},
{"f_2764:tcp_2escm",(void*)f_2764},
{"f_1977:tcp_2escm",(void*)f_1977},
{"f_1896:tcp_2escm",(void*)f_1896},
{"f_1893:tcp_2escm",(void*)f_1893},
{"f_2811:tcp_2escm",(void*)f_2811},
{"f_2817:tcp_2escm",(void*)f_2817},
{"f_2163:tcp_2escm",(void*)f_2163},
{"f_1980:tcp_2escm",(void*)f_1980},
{"f_2177:tcp_2escm",(void*)f_2177},
{"f_2803:tcp_2escm",(void*)f_2803},
{"f_1726:tcp_2escm",(void*)f_1726},
{"f_1645:tcp_2escm",(void*)f_1645},
{"f_2286:tcp_2escm",(void*)f_2286},
{"f_1641:tcp_2escm",(void*)f_1641},
{"f_1648:tcp_2escm",(void*)f_1648},
{"toplevel:tcp_2escm",(void*)C_tcp_toplevel},
{"f_1911:tcp_2escm",(void*)f_1911},
{"f_2869:tcp_2escm",(void*)f_2869},
{"f_2866:tcp_2escm",(void*)f_2866},
{"f_1914:tcp_2escm",(void*)f_1914},
{"f_2955:tcp_2escm",(void*)f_2955},
{"f_2959:tcp_2escm",(void*)f_2959},
{"f_1654:tcp_2escm",(void*)f_1654},
{"f_2951:tcp_2escm",(void*)f_2951},
{"f_3049:tcp_2escm",(void*)f_3049},
{"f_1657:tcp_2escm",(void*)f_1657},
{"f_1658:tcp_2escm",(void*)f_1658},
{"f_984:tcp_2escm",(void*)f_984},
{"f_981:tcp_2escm",(void*)f_981},
{"f_2876:tcp_2escm",(void*)f_2876},
{"f_2873:tcp_2escm",(void*)f_2873},
{"f_3060:tcp_2escm",(void*)f_3060},
{"f_3064:tcp_2escm",(void*)f_3064},
{"f_1951:tcp_2escm",(void*)f_1951},
{"f_1955:tcp_2escm",(void*)f_1955},
{"f_1223:tcp_2escm",(void*)f_1223},
{"f_2887:tcp_2escm",(void*)f_2887},
{"f_2883:tcp_2escm",(void*)f_2883},
{"f_1635:tcp_2escm",(void*)f_1635},
{"f_3072:tcp_2escm",(void*)f_3072},
{"f_1631:tcp_2escm",(void*)f_1631},
{"f_1639:tcp_2escm",(void*)f_1639},
{"f_3068:tcp_2escm",(void*)f_3068},
{"f_2891:tcp_2escm",(void*)f_2891},
{"f_2246:tcp_2escm",(void*)f_2246},
{"f_2242:tcp_2escm",(void*)f_2242},
{"f_1239:tcp_2escm",(void*)f_1239},
{"f_2780:tcp_2escm",(void*)f_2780},
{"f_2827:tcp_2escm",(void*)f_2827},
{"f_2255:tcp_2escm",(void*)f_2255},
{"f_2835:tcp_2escm",(void*)f_2835},
{"f_1212:tcp_2escm",(void*)f_1212},
{"f_2839:tcp_2escm",(void*)f_2839},
{"f_1665:tcp_2escm",(void*)f_1665},
{"f_1662:tcp_2escm",(void*)f_1662},
{"f_2260:tcp_2escm",(void*)f_2260},
{"f_1219:tcp_2escm",(void*)f_1219},
{"f_2270:tcp_2escm",(void*)f_2270},
{"f_2912:tcp_2escm",(void*)f_2912},
{"f_3040:tcp_2escm",(void*)f_3040},
{"f_1801:tcp_2escm",(void*)f_1801},
{"f_1804:tcp_2escm",(void*)f_1804},
{"f_2904:tcp_2escm",(void*)f_2904},
{"f_2908:tcp_2escm",(void*)f_2908},
{"f_2396:tcp_2escm",(void*)f_2396},
{"f_2979:tcp_2escm",(void*)f_2979},
{"f_2975:tcp_2escm",(void*)f_2975},
{"f_1306:tcp_2escm",(void*)f_1306},
{"f_1303:tcp_2escm",(void*)f_1303},
{"f_2983:tcp_2escm",(void*)f_2983},
{"f_1300:tcp_2escm",(void*)f_1300},
{"f_1316:tcp_2escm",(void*)f_1316},
{"f_2991:tcp_2escm",(void*)f_2991},
{"f_2418:tcp_2escm",(void*)f_2418},
{"f_1324:tcp_2escm",(void*)f_1324},
{"f_2926:tcp_2escm",(void*)f_2926},
{"f_1320:tcp_2escm",(void*)f_1320},
{"f_2920:tcp_2escm",(void*)f_2920},
{"f_2408:tcp_2escm",(void*)f_2408},
{"f_2400:tcp_2escm",(void*)f_2400},
{"f_2935:tcp_2escm",(void*)f_2935},
{"f_2404:tcp_2escm",(void*)f_2404},
{"f_2938:tcp_2escm",(void*)f_2938},
{"f_2365:tcp_2escm",(void*)f_2365},
{"f_2375:tcp_2escm",(void*)f_2375},
{"f_2467:tcp_2escm",(void*)f_2467},
{"f_2475:tcp_2escm",(void*)f_2475},
{"f_1454:tcp_2escm",(void*)f_1454},
{"f_2471:tcp_2escm",(void*)f_2471},
{"f_1296:tcp_2escm",(void*)f_1296},
{"f_1446:tcp_2escm",(void*)f_1446},
{"f_2526:tcp_2escm",(void*)f_2526},
{"f_1771:tcp_2escm",(void*)f_1771},
{"f_1773:tcp_2escm",(void*)f_1773},
{"f_2439:tcp_2escm",(void*)f_2439},
{"f_2436:tcp_2escm",(void*)f_2436},
{"f_2433:tcp_2escm",(void*)f_2433},
{"f_978:tcp_2escm",(void*)f_978},
{"f_1273:tcp_2escm",(void*)f_1273},
{"f_2430:tcp_2escm",(void*)f_2430},
{"f_2501:tcp_2escm",(void*)f_2501},
{"f_2503:tcp_2escm",(void*)f_2503},
{"f_1248:tcp_2escm",(void*)f_1248},
{"f_1604:tcp_2escm",(void*)f_1604},
{"f_2426:tcp_2escm",(void*)f_2426},
{"f_2421:tcp_2escm",(void*)f_2421},
{"f_1612:tcp_2escm",(void*)f_1612},
{"f_1610:tcp_2escm",(void*)f_1610},
{"f_2587:tcp_2escm",(void*)f_2587},
{"f_2584:tcp_2escm",(void*)f_2584},
{"f_2711:tcp_2escm",(void*)f_2711},
{"f_1396:tcp_2escm",(void*)f_1396},
{"f_1392:tcp_2escm",(void*)f_1392},
{"f_2553:tcp_2escm",(void*)f_2553},
{"f_2707:tcp_2escm",(void*)f_2707},
{"f_2703:tcp_2escm",(void*)f_2703},
{"f_1689:tcp_2escm",(void*)f_1689},
{"f_1692:tcp_2escm",(void*)f_1692},
{"f_1695:tcp_2escm",(void*)f_1695},
{"f_1698:tcp_2escm",(void*)f_1698},
{"f_2578:tcp_2escm",(void*)f_2578},
{"f_2572:tcp_2escm",(void*)f_2572},
{"f_2626:tcp_2escm",(void*)f_2626},
{"f_1553:tcp_2escm",(void*)f_1553},
{"f_2622:tcp_2escm",(void*)f_2622},
{"f_1627:tcp_2escm",(void*)f_1627},
{"f_2014:tcp_2escm",(void*)f_2014},
{"f_1670:tcp_2escm",(void*)f_1670},
{"f_2618:tcp_2escm",(void*)f_2618},
{"f_1562:tcp_2escm",(void*)f_1562},
{"f_2009:tcp_2escm",(void*)f_2009},
{"f_2003:tcp_2escm",(void*)f_2003},
{"f_1361:tcp_2escm",(void*)f_1361},
{"f_1364:tcp_2escm",(void*)f_1364},
{"f_2563:tcp_2escm",(void*)f_2563},
{"f_2566:tcp_2escm",(void*)f_2566},
{"f_2560:tcp_2escm",(void*)f_2560},
{"f_1582:tcp_2escm",(void*)f_1582},
{"f_1586:tcp_2escm",(void*)f_1586},
{"f_1373:tcp_2escm",(void*)f_1373},
{"f_1370:tcp_2escm",(void*)f_1370},
{"f_2029:tcp_2escm",(void*)f_2029},
{"f_1376:tcp_2escm",(void*)f_1376},
{"f_2534:tcp_2escm",(void*)f_2534},
{"f_2023:tcp_2escm",(void*)f_2023},
{"f_2530:tcp_2escm",(void*)f_2530},
{"f_2513:tcp_2escm",(void*)f_2513},
{"f_2080:tcp_2escm",(void*)f_2080},
{"f_2675:tcp_2escm",(void*)f_2675},
{"f_2097:tcp_2escm",(void*)f_2097},
{"f_2672:tcp_2escm",(void*)f_2672},
{"f_2093:tcp_2escm",(void*)f_2093},
{"f_3004:tcp_2escm",(void*)f_3004},
{"f_2648:tcp_2escm",(void*)f_2648},
{"f_2644:tcp_2escm",(void*)f_2644},
{"f_1846:tcp_2escm",(void*)f_1846},
{"f_2316:tcp_2escm",(void*)f_2316},
{"f_3018:tcp_2escm",(void*)f_3018},
{"f_1842:tcp_2escm",(void*)f_1842},
{"f_3014:tcp_2escm",(void*)f_3014},
{"f_3030:tcp_2escm",(void*)f_3030},
{"f_2138:tcp_2escm",(void*)f_2138},
{"f_2134:tcp_2escm",(void*)f_2134},
{"f_2130:tcp_2escm",(void*)f_2130},
{"f_3022:tcp_2escm",(void*)f_3022},
{"f_2599:tcp_2escm",(void*)f_2599},
{"f_2590:tcp_2escm",(void*)f_2590},
{"f_2593:tcp_2escm",(void*)f_2593},
{"f_2045:tcp_2escm",(void*)f_2045},
{"f_2049:tcp_2escm",(void*)f_2049},
{"f_1827:tcp_2escm",(void*)f_1827},
{"f_2123:tcp_2escm",(void*)f_2123},
{"f_2117:tcp_2escm",(void*)f_2117},
{"f_2067:tcp_2escm",(void*)f_2067},
{"f_2109:tcp_2escm",(void*)f_2109},
{"f_2101:tcp_2escm",(void*)f_2101},
{"f_2656:tcp_2escm",(void*)f_2656},
{"f_1416:tcp_2escm",(void*)f_1416},
{"f_2652:tcp_2escm",(void*)f_2652},
{"f_1505:tcp_2escm",(void*)f_1505},
{"f_1509:tcp_2escm",(void*)f_1509},
{"f_1501:tcp_2escm",(void*)f_1501},
{"f_1424:tcp_2escm",(void*)f_1424},
{"f_1420:tcp_2escm",(void*)f_1420},
{"f_2784:tcp_2escm",(void*)f_2784},
{"f_2788:tcp_2escm",(void*)f_2788},
{"f_1993:tcp_2escm",(void*)f_1993},
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
o|eliminated procedure checks: 166 
o|specializations:
o|  3 (##sys#check-open-port * *)
o|  1 (make-string fixnum)
o|  24 (string-append string string)
(o e)|safe calls: 336 
(o e)|assignments to immediate values: 6 
o|Removed `not' forms: 1 
o|inlining procedure: k1275 
o|inlining procedure: k1275 
o|inlining procedure: k1304 
o|inlining procedure: "(tcp.scm:283) last-error-code" 
o|substituted constant variable: a1329 
o|substituted constant variable: a1330 
o|inlining procedure: k1304 
o|contracted procedure: "(tcp.scm:281) getservbyname" 
o|inlining procedure: k1221 
o|inlining procedure: k1221 
o|inlining procedure: k1480 
o|substituted constant variable: a1510 
o|substituted constant variable: a1511 
o|inlining procedure: "(tcp.scm:322) close" 
o|inlining procedure: "(tcp.scm:322) last-error-code" 
o|inlining procedure: k1480 
o|contracted procedure: "(tcp.scm:321) listen" 
o|contracted procedure: "(tcp.scm:320) bind-socket" 
o|inlining procedure: k1374 
o|substituted constant variable: a1401 
o|substituted constant variable: a1402 
o|inlining procedure: "(tcp.scm:310) close" 
o|inlining procedure: "(tcp.scm:310) last-error-code" 
o|inlining procedure: k1374 
o|contracted procedure: "(tcp.scm:309) bind" 
o|inlining procedure: "(tcp.scm:308) last-error-code" 
o|substituted constant variable: a1429 
o|substituted constant variable: a1430 
o|inlining procedure: "(tcp.scm:307) set-socket-options" 
o|inlining procedure: k1441 
o|inlining procedure: k1441 
o|contracted procedure: "(tcp.scm:302) fresh-addr" 
o|inlining procedure: k1555 
o|inlining procedure: k1555 
o|inlining procedure: k1570 
o|inlining procedure: "(tcp.scm:333) last-error-code" 
o|substituted constant variable: a1595 
o|substituted constant variable: a1596 
o|inlining procedure: k1570 
o|inlining procedure: "(tcp.scm:332) close" 
o|inlining procedure: k1614 
o|inlining procedure: k1614 
o|inlining procedure: k1675 
o|inlining procedure: k1696 
o|inlining procedure: k1696 
o|inlining procedure: k1711 
o|inlining procedure: k1711 
o|inlining procedure: "(tcp.scm:388) last-error-code" 
o|substituted constant variable: a1739 
o|substituted constant variable: a1740 
o|inlining procedure: "(tcp.scm:385) interrupted?" 
o|inlining procedure: "(tcp.scm:374) retry?" 
o|inlining procedure: k1675 
o|contracted procedure: "(tcp.scm:372) recv" 
o|inlining procedure: k1781 
o|inlining procedure: k1817 
o|inlining procedure: k1817 
o|inlining procedure: "(tcp.scm:499) last-error-code" 
o|substituted constant variable: a1851 
o|substituted constant variable: a1852 
o|inlining procedure: "(tcp.scm:495) interrupted?" 
o|inlining procedure: "(tcp.scm:484) retry?" 
o|inlining procedure: k1781 
o|inlining procedure: k1871 
o|inlining procedure: k1871 
o|contracted procedure: "(tcp.scm:482) send" 
o|inlining procedure: k1925 
o|inlining procedure: k1925 
o|inlining procedure: "(tcp.scm:525) last-error-code" 
o|substituted constant variable: a1960 
o|substituted constant variable: a1961 
o|inlining procedure: "(tcp.scm:524) close" 
o|inlining procedure: k1990 
o|inlining procedure: k1995 
o|inlining procedure: k1995 
o|inlining procedure: k1990 
o|inlining procedure: k2015 
o|inlining procedure: k2015 
o|inlining procedure: k2031 
o|inlining procedure: k2031 
o|inlining procedure: k2050 
o|inlining procedure: k2050 
o|inlining procedure: k2072 
o|inlining procedure: k2072 
o|inlining procedure: "(tcp.scm:409) last-error-code" 
o|substituted constant variable: a2106 
o|substituted constant variable: a2107 
o|inlining procedure: "(tcp.scm:407) check-fd-ready" 
o|inlining procedure: k2111 
o|inlining procedure: k2111 
o|inlining procedure: "(tcp.scm:416) last-error-code" 
o|substituted constant variable: a2143 
o|substituted constant variable: a2144 
o|inlining procedure: "(tcp.scm:415) close" 
o|inlining procedure: k2164 
o|inlining procedure: k2164 
o|inlining procedure: k2185 
o|inlining procedure: k2185 
o|inlining procedure: k2232 
o|inlining procedure: k2232 
o|inlining procedure: k2247 
o|inlining procedure: k2247 
o|inlining procedure: k2275 
o|inlining procedure: k2275 
o|inlining procedure: k2318 
o|inlining procedure: k2318 
o|inlining procedure: k2367 
o|inlining procedure: k2367 
o|inlining procedure: k2377 
o|inlining procedure: k2377 
o|substituted constant variable: a2383 
o|substituted constant variable: a2405 
o|substituted constant variable: a2406 
o|inlining procedure: "(tcp.scm:358) close" 
o|inlining procedure: "(tcp.scm:358) last-error-code" 
o|contracted procedure: k2446 
o|inlining procedure: k2443 
o|inlining procedure: "(tcp.scm:560) last-error-code" 
o|substituted constant variable: a2480 
o|substituted constant variable: a2481 
o|inlining procedure: "(tcp.scm:557) interrupted?" 
o|inlining procedure: k2443 
o|contracted procedure: "(tcp.scm:554) accept" 
o|inlining procedure: k1064 
o|inlining procedure: k1064 
o|inlining procedure: k2511 
o|inlining procedure: "(tcp.scm:567) last-error-code" 
o|substituted constant variable: a2539 
o|substituted constant variable: a2540 
o|inlining procedure: k2511 
o|inlining procedure: "(tcp.scm:565) check-fd-ready" 
o|inlining procedure: k2597 
o|substituted constant variable: a2627 
o|substituted constant variable: a2628 
o|inlining procedure: "(tcp.scm:611) close" 
o|inlining procedure: "(tcp.scm:611) last-error-code" 
o|inlining procedure: k2597 
o|substituted constant variable: a2653 
o|substituted constant variable: a2654 
o|inlining procedure: "(tcp.scm:613) close" 
o|contracted procedure: "(tcp.scm:609) get-socket-error" 
o|inlining procedure: k2658 
o|inlining procedure: k2682 
o|inlining procedure: k2682 
o|substituted constant variable: a2712 
o|substituted constant variable: a2713 
o|inlining procedure: "(tcp.scm:607) close" 
o|inlining procedure: "(tcp.scm:607) last-error-code" 
o|inlining procedure: "(tcp.scm:604) interrupted?" 
o|contracted procedure: "(tcp.scm:599) in-progress?" 
o|inlining procedure: k2658 
o|contracted procedure: "(tcp.scm:598) connect" 
o|substituted constant variable: a2739 
o|substituted constant variable: a2740 
o|inlining procedure: "(tcp.scm:596) close" 
o|inlining procedure: "(tcp.scm:596) last-error-code" 
o|substituted constant variable: a2765 
o|substituted constant variable: a2766 
o|inlining procedure: "(tcp.scm:594) close" 
o|inlining procedure: "(tcp.scm:594) last-error-code" 
o|inlining procedure: "(tcp.scm:593) set-socket-options" 
o|inlining procedure: "(tcp.scm:592) last-error-code" 
o|substituted constant variable: a2793 
o|substituted constant variable: a2794 
o|inlining procedure: k2804 
o|inlining procedure: k2804 
o|inlining procedure: k2840 
o|inlining procedure: k2840 
o|substituted constant variable: a2856 
o|inlining procedure: k2874 
o|inlining procedure: k2874 
o|inlining procedure: "(tcp.scm:629) last-error-code" 
o|substituted constant variable: a2896 
o|substituted constant variable: a2897 
o|contracted procedure: "(tcp.scm:629) getpeername" 
o|inlining procedure: "(tcp.scm:627) last-error-code" 
o|substituted constant variable: a2917 
o|substituted constant variable: a2918 
o|contracted procedure: "(tcp.scm:627) getsockname" 
o|substituted constant variable: a2923 
o|inlining procedure: k2936 
o|inlining procedure: "(tcp.scm:640) last-error-code" 
o|substituted constant variable: a2964 
o|substituted constant variable: a2965 
o|inlining procedure: k2936 
o|inlining procedure: "(tcp.scm:638) last-error-code" 
o|substituted constant variable: a2988 
o|substituted constant variable: a2989 
o|contracted procedure: "(tcp.scm:636) getpeerport" 
o|inlining procedure: "(tcp.scm:635) getsockport" 
o|inlining procedure: k3002 
o|inlining procedure: "(tcp.scm:648) last-error-code" 
o|substituted constant variable: a3027 
o|substituted constant variable: a3028 
o|inlining procedure: k3002 
o|inlining procedure: "(tcp.scm:646) getsockport" 
o|substituted constant variable: a3033 
o|inlining procedure: k3042 
o|inlining procedure: k3042 
o|folded constant expression: (fx* (quote 60) (quote 1000)) 
o|contracted procedure: "(tcp.scm:229) startup" 
o|replaced variables: 303 
o|removed binding forms: 146 
o|removed side-effect free assignment to unused variable: ##net#last-error-code 
o|removed side-effect free assignment to unused variable: ##net#retry? 
o|removed side-effect free assignment to unused variable: ##net#interrupted? 
o|removed side-effect free assignment to unused variable: ##net#close 
o|removed side-effect free assignment to unused variable: ##net#check-fd-ready 
o|removed side-effect free assignment to unused variable: ##net#set-socket-options 
o|removed side-effect free assignment to unused variable: ##net#getsockport 
o|substituted constant variable: r15563130 
o|contracted procedure: k1621 
o|substituted constant variable: int130137 
o|substituted constant variable: int129136 
o|inlining procedure: k1871 
o|substituted constant variable: flags172180 
o|substituted constant variable: r19913185 
o|substituted constant variable: r19913185 
o|substituted constant variable: r20513191 
o|inlining procedure: k2078 
o|substituted constant variable: r21653212 
o|substituted constant variable: r22483217 
o|substituted constant variable: r23683229 
o|substituted constant variable: r23783231 
o|substituted constant variable: r23783232 
o|substituted constant variable: c-pointer110117 
o|substituted constant variable: c-pointer111118 
o|substituted constant variable: c-pointer111118 
o|substituted constant variable: c-pointer111118 
o|substituted constant variable: r10653246 
o|substituted constant variable: r10653246 
o|substituted constant variable: c-pointer110117 
o|substituted constant variable: c-pointer110117 
o|inlining procedure: k2597 
o|contracted procedure: "(tcp.scm:585) parse-host" 
o|substituted constant variable: r12223090 
o|substituted constant variable: r12223090 
o|substituted constant variable: r30433360 
o|substituted constant variable: r30433360 
o|substituted constant variable: r30433362 
o|substituted constant variable: r30433362 
o|replaced variables: 94 
o|removed binding forms: 366 
o|removed conditional forms: 2 
o|inlining procedure: k1426 
o|inlining procedure: k1519 
o|inlining procedure: k1592 
o|substituted constant variable: r1622 
o|inlining procedure: k1736 
o|inlining procedure: k1802 
o|inlining procedure: k1848 
o|substituted constant variable: r18723368 
o|inlining procedure: k1957 
o|inlining procedure: k2103 
o|inlining procedure: k2140 
o|inlining procedure: k2477 
o|contracted procedure: k1060 
o|inlining procedure: k2536 
o|inlining procedure: k2790 
o|inlining procedure: k1326 
o|substituted constant variable: proto336 
o|inlining procedure: k2893 
o|inlining procedure: k2914 
o|inlining procedure: k2961 
o|inlining procedure: k2985 
o|inlining procedure: k3024 
o|inlining procedure: k3073 
o|replaced variables: 6 
o|removed binding forms: 134 
o|contracted procedure: k1489 
o|contracted procedure: k1380 
o|contracted procedure: k1684 
o|contracted procedure: k1714 
o|contracted procedure: k1790 
o|contracted procedure: k1820 
o|contracted procedure: k2384 
o|contracted procedure: k2455 
o|substituted constant variable: r1061 
o|substituted constant variable: r1061 
o|contracted procedure: k2606 
o|contracted procedure: k2667 
o|contracted procedure: k2685 
o|contracted procedure: k2691 
o|contracted procedure: k2718 
o|contracted procedure: k2744 
o|substituted constant variable: minute420 
o|substituted constant variable: minute420 
o|simplifications: ((let . 8)) 
o|replaced variables: 1 
o|removed binding forms: 40 
o|removed side-effect free assignment to unused variable: minute420 
o|removed binding forms: 3 
o|converted assignments to bindings: (check419) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|simplifications: ((if . 16) (##core#call . 198)) 
o|  call simplifications:
o|    vector?
o|    ##sys#check-string
o|    char=?
o|    vector
o|    ##sys#fudge
o|    ##sys#call-with-values	2
o|    fx>=	9
o|    ##sys#setslot	4
o|    values	11
o|    ##sys#size	7
o|    fxmin	3
o|    fx-	6
o|    fx+	12
o|    fx=
o|    +	5
o|    ##sys#setislot	6
o|    ##sys#check-structure	5
o|    ##sys#slot	14
o|    ##sys#structure?
o|    car	3
o|    null?	5
o|    cdr	2
o|    fx<	7
o|    fx>	6
o|    ##sys#check-exact	4
o|    eq?	26
o|    ##sys#make-structure	2
o|    ##sys#foreign-block-argument	6
o|    ##sys#foreign-string-argument	3
o|    ##sys#foreign-fixnum-argument	43
o|contracted procedure: k996 
o|contracted procedure: k1012 
o|contracted procedure: k1016 
o|contracted procedure: k1020 
o|contracted procedure: k1106 
o|contracted procedure: k1110 
o|contracted procedure: k1242 
o|contracted procedure: k1250 
o|contracted procedure: k1257 
o|contracted procedure: k1546 
o|contracted procedure: k1456 
o|contracted procedure: k1540 
o|contracted procedure: k1459 
o|contracted procedure: k1534 
o|contracted procedure: k1462 
o|contracted procedure: k1528 
o|contracted procedure: k1465 
o|contracted procedure: k1468 
o|contracted procedure: k1474 
o|contracted procedure: k1486 
o|contracted procedure: k10773102 
o|contracted procedure: k1045 
o|contracted procedure: k1049 
o|contracted procedure: k1377 
o|contracted procedure: k10773116 
o|contracted procedure: k1027 
o|contracted procedure: k1031 
o|contracted procedure: k1035 
o|contracted procedure: k1407 
o|contracted procedure: k11423126 
o|contracted procedure: k1435 
o|contracted procedure: k1346 
o|contracted procedure: k1350 
o|contracted procedure: k1516 
o|contracted procedure: k1519 
o|contracted procedure: k1564 
o|contracted procedure: k1567 
o|contracted procedure: k1573 
o|contracted procedure: k10773139 
o|contracted procedure: k1614 
o|contracted procedure: k1649 
o|contracted procedure: k1678 
o|contracted procedure: k1702 
o|contracted procedure: k1742 
o|contracted procedure: k1084 
o|contracted procedure: k1088 
o|contracted procedure: k1092 
o|contracted procedure: k1096 
o|contracted procedure: k1765 
o|contracted procedure: k1775 
o|contracted procedure: k1784 
o|contracted procedure: k1808 
o|contracted procedure: k1856 
o|contracted procedure: k1863 
o|contracted procedure: k1867 
o|contracted procedure: k1874 
o|contracted procedure: k1871 
o|contracted procedure: k1149 
o|contracted procedure: k1153 
o|contracted procedure: k1157 
o|contracted procedure: k1161 
o|contracted procedure: k1165 
o|contracted procedure: k1897 
o|contracted procedure: k1900 
o|contracted procedure: k1903 
o|contracted procedure: k1906 
o|contracted procedure: k1919 
o|contracted procedure: k2026 
o|contracted procedure: k2018 
o|contracted procedure: k2041 
o|contracted procedure: k2034 
o|contracted procedure: k10773180 
o|contracted procedure: k1969 
o|contracted procedure: k1986 
o|contracted procedure: k2006 
o|contracted procedure: k1998 
o|contracted procedure: k2053 
o|contracted procedure: k2057 
o|contracted procedure: k2060 
o|contracted procedure: k2069 
o|contracted procedure: k2084 
o|contracted procedure: k11353201 
o|contracted procedure: k10773210 
o|contracted procedure: k2152 
o|contracted procedure: k2167 
o|contracted procedure: k2170 
o|contracted procedure: k2188 
o|contracted procedure: k2194 
o|contracted procedure: k2197 
o|contracted procedure: k2226 
o|contracted procedure: k2200 
o|contracted procedure: k2204 
o|contracted procedure: k2208 
o|contracted procedure: k2215 
o|contracted procedure: k2219 
o|contracted procedure: k2223 
o|contracted procedure: k2235 
o|contracted procedure: k2250 
o|contracted procedure: k2312 
o|contracted procedure: k2266 
o|contracted procedure: k2272 
o|contracted procedure: k2278 
o|contracted procedure: k2288 
o|contracted procedure: k2294 
o|contracted procedure: k2305 
o|contracted procedure: k2301 
o|contracted procedure: k2333 
o|contracted procedure: k2329 
o|contracted procedure: k2322 
o|inlining procedure: k2318 
o|contracted procedure: k2344 
o|contracted procedure: k2348 
o|contracted procedure: k2340 
o|inlining procedure: k2318 
o|contracted procedure: k2355 
o|contracted procedure: k2358 
o|contracted procedure: k2370 
o|contracted procedure: k2380 
o|contracted procedure: k10773238 
o|contracted procedure: k2410 
o|contracted procedure: k2413 
o|contracted procedure: k2483 
o|contracted procedure: k1056 
o|contracted procedure: k2486 
o|contracted procedure: k2505 
o|contracted procedure: k2517 
o|contracted procedure: k2542 
o|contracted procedure: k11353264 
o|contracted procedure: k2828 
o|contracted procedure: k2555 
o|contracted procedure: k2567 
o|contracted procedure: k2573 
o|contracted procedure: k2603 
o|contracted procedure: k10773275 
o|contracted procedure: k2632 
o|contracted procedure: k10773287 
o|contracted procedure: k2549 
o|contracted procedure: k2661 
o|contracted procedure: k10773296 
o|contracted procedure: k1117 
o|contracted procedure: k1121 
o|contracted procedure: k1125 
o|contracted procedure: k10773305 
o|contracted procedure: k2741 
o|contracted procedure: k10773312 
o|contracted procedure: k11423319 
o|contracted procedure: k2771 
o|contracted procedure: k1266 
o|contracted procedure: k1278 
o|contracted procedure: k1287 
o|contracted procedure: k1307 
o|contracted procedure: k1228 
o|contracted procedure: k1235 
o|contracted procedure: k1332 
o|contracted procedure: k1339 
o|contracted procedure: k2843 
o|contracted procedure: k1204 
o|contracted procedure: k1179 
o|contracted procedure: k2942 
o|contracted procedure: k2966 
o|contracted procedure: k1193 
o|contracted procedure: k11863348 
o|contracted procedure: k2993 
o|contracted procedure: k2996 
o|contracted procedure: k3005 
o|contracted procedure: k11863359 
o|contracted procedure: k3045 
o|contracted procedure: k3051 
o|simplifications: ((let . 24)) 
o|removed binding forms: 166 
o|inlining procedure: k1246 
o|inlining procedure: "(tcp.scm:322) error-code->message" 
o|inlining procedure: "(tcp.scm:310) error-code->message" 
o|inlining procedure: "(tcp.scm:308) error-code->message" 
o|inlining procedure: "(tcp.scm:333) error-code->message" 
o|inlining procedure: "(tcp.scm:388) error-code->message" 
o|inlining procedure: "(tcp.scm:499) error-code->message" 
o|inlining procedure: "(tcp.scm:525) error-code->message" 
o|inlining procedure: "(tcp.scm:523) shutdown" 
o|inlining procedure: "(tcp.scm:409) error-code->message" 
o|inlining procedure: "(tcp.scm:416) error-code->message" 
o|inlining procedure: "(tcp.scm:414) shutdown" 
o|inlining procedure: "(tcp.scm:358) error-code->message" 
o|inlining procedure: "(tcp.scm:560) error-code->message" 
o|inlining procedure: "(tcp.scm:567) error-code->message" 
o|inlining procedure: "(tcp.scm:611) error-code->message" 
o|inlining procedure: "(tcp.scm:614) error-code->message" 
o|inlining procedure: "(tcp.scm:607) error-code->message" 
o|inlining procedure: "(tcp.scm:596) error-code->message" 
o|inlining procedure: "(tcp.scm:594) error-code->message" 
o|inlining procedure: "(tcp.scm:592) error-code->message" 
o|inlining procedure: "(tcp.scm:283) error-code->message" 
o|inlining procedure: "(tcp.scm:629) error-code->message" 
o|inlining procedure: "(tcp.scm:627) error-code->message" 
o|inlining procedure: "(tcp.scm:640) error-code->message" 
o|inlining procedure: "(tcp.scm:638) error-code->message" 
o|inlining procedure: "(tcp.scm:648) error-code->message" 
o|replaced variables: 93 
o|removed binding forms: 1 
o|removed side-effect free assignment to unused variable: ##net#error-code->message 
o|removed side-effect free assignment to unused variable: ##net#shutdown 
o|substituted constant variable: r12473505 
o|substituted constant variable: r12473505 
o|inlining procedure: k1966 
o|inlining procedure: k2149 
o|replaced variables: 52 
o|removed binding forms: 67 
o|contracted procedure: k1513 
o|contracted procedure: k1492 
o|contracted procedure: k1404 
o|contracted procedure: k1383 
o|contracted procedure: k1432 
o|inlining procedure: "(tcp.scm:303) socket" 
o|contracted procedure: k1598 
o|contracted procedure: k1672 
o|contracted procedure: k1778 
o|contracted procedure: k2075 
o|contracted procedure: k2387 
o|contracted procedure: k2440 
o|contracted procedure: k2508 
o|contracted procedure: k2594 
o|contracted procedure: k2609 
o|contracted procedure: k2635 
o|contracted procedure: k2715 
o|contracted procedure: k2694 
o|contracted procedure: k2721 
o|contracted procedure: k2768 
o|contracted procedure: k2747 
o|inlining procedure: "(tcp.scm:590) socket" 
o|contracted procedure: k2927 
o|contracted procedure: k2930 
o|contracted procedure: k2999 
o|removed binding forms: 81 
o|removed side-effect free assignment to unused variable: ##net#socket 
o|substituted constant variable: int84893669 
o|substituted constant variable: int84893686 
o|replaced variables: 5 
o|removed binding forms: 7 
o|contracted procedure: k1365 
o|contracted procedure: k2579 
o|removed binding forms: 2 
o|customizable procedures: (check419 k2561 loop338 k2419 ##net#io-ports k1655 k2253 loop493 k2115 k2121 read-input449 k1975 k1929 k1932 k1938 output531 k1769 loop534 k1663 ##net#gethostaddr) 
o|calls to known targets: 84 
o|identified direct recursive calls: f_1773 2 
o|identified direct recursive calls: f_2183 1 
o|identified direct recursive calls: f_1273 1 
o|fast box initializations: 6 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1239 
o|dropping unused closure argument: f_1610 
*/
/* end of file */

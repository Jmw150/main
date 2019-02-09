/* Generated from tcp.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: tcp.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file tcp.c -emit-import-library chicken.tcp
   unit: tcp
   uses: port scheduler library
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
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[109];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,116,99,112,35,103,101,116,104,111,115,116,97,100,100,114,32,115,97,100,100,114,50,54,48,32,104,111,115,116,50,54,49,32,112,111,114,116,50,54,50,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,32,112,111,114,116,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,101,114,63,32,120,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,99,108,111,115,101,32,116,99,112,108,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,10),40,102,95,49,54,50,52,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,11),40,99,104,101,99,107,32,108,111,99,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,114,101,97,100,45,105,110,112,117,116,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,97,49,56,51,54,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,108,101,110,32,111,102,102,115,101,116,32,100,108,119,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,10),40,111,117,116,112,117,116,32,115,41,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,10),40,102,95,50,48,49,53,32,115,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,10),40,102,95,50,48,51,53,32,115,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,7),40,97,49,57,50,56,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,102,95,49,57,57,57,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,7),40,97,50,48,53,48,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,50,48,55,50,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,7),40,97,50,49,49,52,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,97,50,49,54,52,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,32,109,32,115,116,97,114,116,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,22),40,97,50,49,56,50,32,112,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,11),40,97,50,50,55,53,32,112,111,115,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,50,50,54,53,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,28),40,97,50,51,50,49,32,110,101,120,116,32,108,105,110,101,32,102,117,108,108,45,108,105,110,101,63,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,15),40,97,50,50,52,55,32,112,32,108,105,109,105,116,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,9),40,97,50,51,54,54,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,116,99,112,35,105,111,45,112,111,114,116,115,32,108,111,99,32,102,100,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,99,99,101,112,116,32,116,99,112,108,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,99,99,101,112,116,45,114,101,97,100,121,63,32,116,99,112,108,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,50,56,49,48,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,23),40,97,50,56,49,54,32,104,111,115,116,55,48,48,32,112,111,114,116,55,48,49,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,99,111,110,110,101,99,116,32,104,111,115,116,32,46,32,109,111,114,101,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,112,111,114,116,45,62,102,105,108,101,110,111,32,112,32,108,111,99,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,100,100,114,101,115,115,101,115,32,112,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,112,111,114,116,45,110,117,109,98,101,114,115,32,112,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,101,114,45,112,111,114,116,32,116,99,112,108,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,98,97,110,100,111,110,45,112,111,114,116,32,112,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,101,114,45,102,105,108,101,110,111,32,108,41,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub685(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int err, optlen;
optlen = sizeof(err);
if (typecorrect_getsockopt(socket, SOL_SOCKET, SO_ERROR, &err, (socklen_t *)&optlen) == SOCKET_ERROR)
  C_return(SOCKET_ERROR);
C_return(err);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub394(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a1);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;
memset(addr, 0, sizeof(struct sockaddr_in));
addr->sin_family = AF_INET;
addr->sin_port = htons(port);
addr->sin_addr.s_addr = htonl(INADDR_ANY);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub263(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
char * host=(char * )C_string_or_null(C_a1);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a2);
struct hostent *he = gethostbyname(host);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;
if(he == NULL) C_return(0);
memset(addr, 0, sizeof(struct sockaddr_in));
addr->sin_family = AF_INET;
addr->sin_port = htons((short)port);
addr->sin_addr = *((struct in_addr *)he->h_addr);
C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub251(C_word C_buf,C_word C_a0,C_word C_a1){
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
C_regparm static C_word C_fcall stub246(C_word C_buf){
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
C_regparm static C_word C_fcall stub241(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
unsigned char *ptr;
unsigned int len = sizeof(struct sockaddr_in);
if(getpeername(s, (struct sockaddr *)&sa, ((socklen_t *)&len)) != 0) C_return(NULL);
ptr = (unsigned char *)&sa.sin_addr;
C_snprintf(addr_buffer, sizeof(addr_buffer), "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);
C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub236(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
int len = sizeof(struct sockaddr_in);
if(getpeername(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);
else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub231(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
int len = sizeof(struct sockaddr_in);
if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);
else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub225(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
unsigned char *ptr;
int len = sizeof(struct sockaddr_in);
if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)&len) != 0) C_return(NULL);
ptr = (unsigned char *)&sa.sin_addr;
C_snprintf(addr_buffer, sizeof(addr_buffer), "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);
C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub214(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
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

/* from k1151 */
C_regparm static C_word C_fcall stub205(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_set_socket_options(t0));
return C_r;}

/* from k1144 */
C_regparm static C_word C_fcall stub200(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_check_fd_ready(t0));
return C_r;}

/* from k1134 */
C_regparm static C_word C_fcall stub191(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)connect(t0,t1,t2));
return C_r;}

/* from k1119 */
C_regparm static C_word C_fcall stub183(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)shutdown(t0,t1));
return C_r;}

/* from k1105 */
C_regparm static C_word C_fcall stub172(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)recv(t0,t1,t2,t3));
return C_r;}

/* from k1086 */
C_regparm static C_word C_fcall stub164(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)closesocket(t0));
return C_r;}

/* from k1073 */
C_regparm static C_word C_fcall stub153(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
C_r=C_fix((C_word)accept(t0,t1,t2));
return C_r;}

/* from k1058 */
C_regparm static C_word C_fcall stub145(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)listen(t0,t1));
return C_r;}

/* from k1044 */
C_regparm static C_word C_fcall stub135(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)bind(t0,t1,t2));
return C_r;}

/* from k1029 */
C_regparm static C_word C_fcall stub126(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)socket(t0,t1,t2));
return C_r;}

/* from chicken.tcp#interrupted? */
C_regparm static C_word C_fcall stub120(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(call_was_interrupted());
return C_r;}

/* from chicken.tcp#in-progress? */
C_regparm static C_word C_fcall stub117(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(call_in_progress());
return C_r;}

/* from chicken.tcp#retry? */
C_regparm static C_word C_fcall stub114(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(should_retry_call());
return C_r;}

/* from k1005 */
C_regparm static C_word C_fcall stub109(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)errormsg_from_code(t0));
return C_r;}

/* from chicken.tcp#last-error-code */
C_regparm static C_word C_fcall stub105(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)get_last_socket_error());
return C_r;}

C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word *av) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word *av) C_noret;
C_noret_decl(f_1232)
static void C_ccall f_1232(C_word c,C_word *av) C_noret;
C_noret_decl(f_1248)
static void C_fcall f_1248(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word *av) C_noret;
C_noret_decl(f_1283)
static void C_fcall f_1283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1306)
static void C_ccall f_1306(C_word c,C_word *av) C_noret;
C_noret_decl(f_1310)
static void C_ccall f_1310(C_word c,C_word *av) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word *av) C_noret;
C_noret_decl(f_1316)
static void C_ccall f_1316(C_word c,C_word *av) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word *av) C_noret;
C_noret_decl(f_1330)
static void C_ccall f_1330(C_word c,C_word *av) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word *av) C_noret;
C_noret_decl(f_1372)
static void C_ccall f_1372(C_word c,C_word *av) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word *av) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word *av) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word *av) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word *av) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word *av) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word *av) C_noret;
C_noret_decl(f_1411)
static void C_ccall f_1411(C_word c,C_word *av) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word *av) C_noret;
C_noret_decl(f_1431)
static void C_ccall f_1431(C_word c,C_word *av) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word *av) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word *av) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word *av) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word *av) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word *av) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word *av) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word *av) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word *av) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word *av) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word *av) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word *av) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word *av) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word *av) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word *av) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word *av) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word *av) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word *av) C_noret;
C_noret_decl(f_1622)
static void C_fcall f_1622(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word *av) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word *av) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word *av) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word *av) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word *av) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word *av) C_noret;
C_noret_decl(f_1653)
static void C_fcall f_1653(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1657)
static void C_ccall f_1657(C_word c,C_word *av) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word *av) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word *av) C_noret;
C_noret_decl(f_1669)
static void C_fcall f_1669(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1670)
static void C_fcall f_1670(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word *av) C_noret;
C_noret_decl(f_1677)
static void C_fcall f_1677(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word *av) C_noret;
C_noret_decl(f_1701)
static void C_ccall f_1701(C_word c,C_word *av) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word *av) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word *av) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word *av) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word *av) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742(C_word c,C_word *av) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word *av) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word *av) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word *av) C_noret;
C_noret_decl(f_1766)
static void C_fcall f_1766(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1770)
static void C_ccall f_1770(C_word c,C_word *av) C_noret;
C_noret_decl(f_1781)
static void C_fcall f_1781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1783)
static void C_fcall f_1783(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word *av) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word *av) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word *av) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word *av) C_noret;
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word *av) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word *av) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word *av) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word *av) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word *av) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word *av) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word *av) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word *av) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word *av) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word *av) C_noret;
C_noret_decl(f_1937)
static void C_fcall f_1937(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1940)
static void C_fcall f_1940(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_fcall f_1946(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1953)
static void C_ccall f_1953(C_word c,C_word *av) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word *av) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word *av) C_noret;
C_noret_decl(f_1983)
static void C_fcall f_1983(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1986)
static void C_ccall f_1986(C_word c,C_word *av) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word *av) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word *av) C_noret;
C_noret_decl(f_2015)
static void C_ccall f_2015(C_word c,C_word *av) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word *av) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029(C_word c,C_word *av) C_noret;
C_noret_decl(f_2035)
static void C_ccall f_2035(C_word c,C_word *av) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word *av) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word *av) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word *av) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word *av) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word *av) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word *av) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word *av) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word *av) C_noret;
C_noret_decl(f_2123)
static void C_fcall f_2123(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_fcall f_2129(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word *av) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word *av) C_noret;
C_noret_decl(f_2144)
static void C_ccall f_2144(C_word c,C_word *av) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word *av) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word *av) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word *av) C_noret;
C_noret_decl(f_2189)
static void C_fcall f_2189(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word *av) C_noret;
C_noret_decl(f_2248)
static void C_ccall f_2248(C_word c,C_word *av) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word *av) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word *av) C_noret;
C_noret_decl(f_2276)
static void C_ccall f_2276(C_word c,C_word *av) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word *av) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word *av) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word *av) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word *av) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word *av) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word *av) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word *av) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word *av) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word *av) C_noret;
C_noret_decl(f_2423)
static void C_fcall f_2423(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2428)
static void C_ccall f_2428(C_word c,C_word *av) C_noret;
C_noret_decl(f_2432)
static void C_ccall f_2432(C_word c,C_word *av) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word *av) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word *av) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word *av) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word *av) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word *av) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word *av) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word *av) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word *av) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word *av) C_noret;
C_noret_decl(f_2526)
static void C_ccall f_2526(C_word c,C_word *av) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word *av) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word *av) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word *av) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word *av) C_noret;
C_noret_decl(f_2563)
static void C_fcall f_2563(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word *av) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word *av) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word *av) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word *av) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word *av) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word *av) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word *av) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word *av) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word *av) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word *av) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word *av) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word *av) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word *av) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word *av) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word *av) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word *av) C_noret;
C_noret_decl(f_2672)
static void C_ccall f_2672(C_word c,C_word *av) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word *av) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word *av) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word *av) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word *av) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word *av) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word *av) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word *av) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word *av) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word *av) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word *av) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word *av) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word *av) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word *av) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word *av) C_noret;
C_noret_decl(f_2834)
static void C_fcall f_2834(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word *av) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word *av) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word *av) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word *av) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word *av) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word *av) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word *av) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word *av) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word *av) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word *av) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word *av) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word *av) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word *av) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word *av) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word *av) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word *av) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word *av) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word *av) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word *av) C_noret;
C_noret_decl(f_2958)
static void C_ccall f_2958(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word *av) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word *av) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word *av) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word *av) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word *av) C_noret;
C_noret_decl(f_3021)
static void C_ccall f_3021(C_word c,C_word *av) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word *av) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word *av) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word *av) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word *av) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word *av) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word *av) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word *av) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externexport void C_ccall C_tcp_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1248)
static void C_ccall trf_1248(C_word c,C_word *av) C_noret;
static void C_ccall trf_1248(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1248(t0,t1,t2,t3);}

C_noret_decl(trf_1283)
static void C_ccall trf_1283(C_word c,C_word *av) C_noret;
static void C_ccall trf_1283(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1283(t0,t1,t2);}

C_noret_decl(trf_1622)
static void C_ccall trf_1622(C_word c,C_word *av) C_noret;
static void C_ccall trf_1622(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1622(t0,t1);}

C_noret_decl(trf_1653)
static void C_ccall trf_1653(C_word c,C_word *av) C_noret;
static void C_ccall trf_1653(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1653(t0,t1,t2,t3);}

C_noret_decl(trf_1669)
static void C_ccall trf_1669(C_word c,C_word *av) C_noret;
static void C_ccall trf_1669(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1669(t0,t1);}

C_noret_decl(trf_1670)
static void C_ccall trf_1670(C_word c,C_word *av) C_noret;
static void C_ccall trf_1670(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1670(t0,t1);}

C_noret_decl(trf_1677)
static void C_ccall trf_1677(C_word c,C_word *av) C_noret;
static void C_ccall trf_1677(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1677(t0,t1);}

C_noret_decl(trf_1766)
static void C_ccall trf_1766(C_word c,C_word *av) C_noret;
static void C_ccall trf_1766(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1766(t0,t1,t2);}

C_noret_decl(trf_1781)
static void C_ccall trf_1781(C_word c,C_word *av) C_noret;
static void C_ccall trf_1781(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1781(t0,t1);}

C_noret_decl(trf_1783)
static void C_ccall trf_1783(C_word c,C_word *av) C_noret;
static void C_ccall trf_1783(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1783(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1937)
static void C_ccall trf_1937(C_word c,C_word *av) C_noret;
static void C_ccall trf_1937(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1937(t0,t1);}

C_noret_decl(trf_1940)
static void C_ccall trf_1940(C_word c,C_word *av) C_noret;
static void C_ccall trf_1940(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1940(t0,t1);}

C_noret_decl(trf_1946)
static void C_ccall trf_1946(C_word c,C_word *av) C_noret;
static void C_ccall trf_1946(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1946(t0,t1);}

C_noret_decl(trf_1983)
static void C_ccall trf_1983(C_word c,C_word *av) C_noret;
static void C_ccall trf_1983(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1983(t0,t1);}

C_noret_decl(trf_2123)
static void C_ccall trf_2123(C_word c,C_word *av) C_noret;
static void C_ccall trf_2123(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2123(t0,t1);}

C_noret_decl(trf_2129)
static void C_ccall trf_2129(C_word c,C_word *av) C_noret;
static void C_ccall trf_2129(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2129(t0,t1);}

C_noret_decl(trf_2189)
static void C_ccall trf_2189(C_word c,C_word *av) C_noret;
static void C_ccall trf_2189(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2189(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2423)
static void C_ccall trf_2423(C_word c,C_word *av) C_noret;
static void C_ccall trf_2423(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2423(t0,t1);}

C_noret_decl(trf_2563)
static void C_ccall trf_2563(C_word c,C_word *av) C_noret;
static void C_ccall trf_2563(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2563(t0,t1);}

C_noret_decl(trf_2834)
static void C_ccall trf_2834(C_word c,C_word *av) C_noret;
static void C_ccall trf_2834(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2834(t0,t1,t2);}

/* k1219 in k991 in k988 in k985 */
static void C_ccall f_1221(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1221,2,av);}
a=C_alloc(15);
t2=C_mutate(&lf[2] /* (set! chicken.tcp#gethostaddr ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1248,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! chicken.tcp#tcp-listen ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1466,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[23]+1 /* (set! chicken.tcp#tcp-listener? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1565,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[24]+1 /* (set! chicken.tcp#tcp-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1574,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:345: chicken.base#make-parameter */
t7=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k1226 in k1308 in k1304 in loop in a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1228,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1232,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[3]);
/* tcp.scm:240: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub251(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1230 in k1226 in k1308 in k1304 in loop in a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1232,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub251(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.tcp#gethostaddr in k1219 in k991 in k988 in k985 */
static void C_fcall f_1248(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1248,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1257,a[2]=t4,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t8=C_i_foreign_string_argumentp(t3);
/* tcp.scm:246: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}
else{
t8=C_fix((C_word)sizeof(unsigned short) * CHAR_BIT);
t9=C_i_foreign_unsigned_ranged_integer_argumentp(t4,t8);
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=stub263(C_SCHEME_UNDEFINED,t6,C_SCHEME_FALSE,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k1255 in chicken.tcp#gethostaddr in k1219 in k991 in k988 in k985 */
static void C_ccall f_1257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1257,2,av);}
t2=C_fix((C_word)sizeof(unsigned short) * CHAR_BIT);
t3=C_i_foreign_unsigned_ranged_integer_argumentp(((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub263(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1283(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1283,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* tcp.scm:282: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
t3=C_subchar(((C_word*)t0)[3],t2);
if(C_truep(C_i_char_equalp(t3,C_make_character(58)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1306,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* tcp.scm:286: substring */
t6=*((C_word*)lf[83]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t5;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* tcp.scm:292: loop */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}}

/* k1304 in loop in a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1306,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1310,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:287: substring */
t4=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1308 in k1304 in loop in a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1310(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1310,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=t3;
t5=lf[82];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1228,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t7=C_i_foreign_string_argumentp(t2);
/* tcp.scm:240: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t6;
av2[2]=t7;
tp(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_1228(2,av2);}}}

/* k1311 in k1308 in k1304 in loop in a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1313(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1313,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1326,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1330,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=lf[81];
av2[3]=lf[13];
tp(4,av2);}}
else{
/* tcp.scm:285: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_values(4,av2);}}}

/* k1314 in k1311 in k1308 in k1304 in loop in a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1316,2,av);}
/* tcp.scm:285: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_values(4,av2);}}

/* k1324 in k1311 in k1308 in k1304 in loop in a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1326,2,av);}
/* tcp.scm:290: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1328 in k1311 in k1308 in k1304 in loop in a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1330(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1330,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1334,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1332 in k1328 in k1311 in k1308 in k1304 in loop in a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1334,2,av);}
/* tcp.scm:290: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1372(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1372,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1457,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:305: gethostaddr */
f_1248(t4,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t4=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t5=C_fix((C_word)sizeof(unsigned short) * CHAR_BIT);
t6=C_i_foreign_unsigned_ranged_integer_argumentp(((C_word*)t0)[5],t5);
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=stub394(C_SCHEME_UNDEFINED,t4,t6);
f_1375(2,av2);}}}

/* k1373 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1375(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1375,2,av);}
a=C_alloc(7);
t2=C_fix((C_word)AF_INET);
t3=C_i_foreign_fixnum_argumentp(t2);
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t5=C_i_foreign_fixnum_argumentp(C_fix(0));
t6=stub126(C_SCHEME_UNDEFINED,t3,t4,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1381,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t9=C_eqp(C_fix((C_word)INVALID_SOCKET),t7);
if(C_truep(t9)){
/* tcp.scm:312: ##sys#error */
t10=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=lf[17];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t10=t8;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_1381(2,av2);}}}

/* k1379 in k1373 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1381(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1381,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=stub205(C_SCHEME_UNDEFINED,t3);
t5=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1427,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1431,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t7;
av2[2]=lf[15];
av2[3]=lf[13];
tp(4,av2);}}
else{
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_1384(2,av2);}}}

/* k1382 in k1379 in k1373 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1384(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1384,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fix((C_word)sizeof(struct sockaddr_in));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=(C_truep(((C_word*)t0)[4])?C_i_foreign_block_argumentp(((C_word*)t0)[4]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=stub135(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t7);
if(C_truep(t8)){
t9=stub105(C_SCHEME_UNDEFINED);
t10=t9;
t11=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t12=stub164(C_SCHEME_UNDEFINED,t11);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1403,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1407,a[2]=t13,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t14;
av2[2]=lf[14];
av2[3]=lf[13];
tp(4,av2);}}
else{
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k1385 in k1382 in k1379 in k1373 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1387,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1401 in k1382 in k1379 in k1373 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1403,2,av);}
/* tcp.scm:317: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k1405 in k1382 in k1379 in k1373 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1407(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1407,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1411,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub109(t4,t5);
/* tcp.scm:171: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
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

/* k1409 in k1405 in k1382 in k1379 in k1373 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1411,2,av);}
/* tcp.scm:317: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1425 in k1379 in k1373 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1427,2,av);}
/* tcp.scm:315: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1429 in k1379 in k1373 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1431(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1431,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1435,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1433 in k1429 in k1379 in k1373 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1435,2,av);}
/* tcp.scm:315: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1455 in k1370 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1457,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_1375(2,av2);}}
else{
/* tcp.scm:306: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=lf[18];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}}

/* chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_1466,c,av);}
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
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1482,a[2]=t1,a[3]=t6,a[4]=t2,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:323: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t14;
av2[2]=t2;
tp(3,av2);}}

/* k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_1482,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_lessp(((C_word*)t0)[4],C_fix(0));
if(C_truep(t3)){
if(C_truep(t3)){
/* tcp.scm:325: ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[21];
av2[3]=lf[8];
av2[4]=lf[22];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1485(2,av2);}}}
else{
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[4],C_fix(65535)))){
/* tcp.scm:325: ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[21];
av2[3]=lf[8];
av2[4]=lf[22];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1485(2,av2);}}}}

/* k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1485,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:326: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1488(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1488,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=t2;
t4=C_fix((C_word)SOCK_STREAM);
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1372,a[2]=t4,a[3]=t3,a[4]=t5,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=C_fix((C_word)sizeof(struct sockaddr_in));
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t7;
av2[2]=t8;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1489 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1491(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1491,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1494,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub145(C_SCHEME_UNDEFINED,t4,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
t8=stub105(C_SCHEME_UNDEFINED);
t9=t8;
t10=C_i_foreign_fixnum_argumentp(t2);
t11=stub164(C_SCHEME_UNDEFINED,t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1513,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1517,a[2]=t12,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t13;
av2[2]=lf[12];
av2[3]=lf[13];
tp(4,av2);}}
else{
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_record2(&a,2,lf[5],t2);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k1492 in k1489 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1494,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_record2(&a,2,lf[5],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1511 in k1489 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1513,2,av);}
/* tcp.scm:329: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k1515 in k1489 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1517(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1517,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1521,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub109(t4,t5);
/* tcp.scm:171: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
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

/* k1519 in k1515 in k1489 in k1486 in k1483 in k1480 in chicken.tcp#tcp-listen in k1219 in k991 in k988 in k985 */
static void C_ccall f_1521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1521,2,av);}
/* tcp.scm:329: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.tcp#tcp-listener? in k1219 in k991 in k988 in k985 */
static void C_ccall f_1565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1565,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_structurep(t2,lf[5]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.tcp#tcp-close in k1219 in k991 in k988 in k985 */
static void C_ccall f_1574(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1574,3,av);}
a=C_alloc(7);
t3=C_i_check_structure(t2,lf[5]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub164(C_SCHEME_UNDEFINED,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1594,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1598,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[26];
av2[3]=lf[13];
tp(4,av2);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k1592 in chicken.tcp#tcp-close in k1219 in k991 in k988 in k985 */
static void C_ccall f_1594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1594,2,av);}
/* tcp.scm:340: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[25];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1596 in chicken.tcp#tcp-close in k1219 in k991 in k988 in k985 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1598,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1602,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1600 in k1596 in chicken.tcp#tcp-close in k1219 in k991 in k988 in k985 */
static void C_ccall f_1602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1602,2,av);}
/* tcp.scm:340: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1616(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_1616,2,av);}
a=C_alloc(16);
t2=C_mutate((C_word*)lf[27]+1 /* (set! chicken.tcp#tcp-buffer-size ...) */,t1);
t3=C_set_block_item(lf[28] /* chicken.tcp#tcp-read-timeout */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[29] /* chicken.tcp#tcp-write-timeout */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[30] /* chicken.tcp#tcp-connect-timeout */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[31] /* chicken.tcp#tcp-accept-timeout */,0,C_SCHEME_UNDEFINED);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1622,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t12=C_fixnum_times(C_fix(60),C_fix(1000));
t13=C_set_block_item(t10,0,t12);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1639,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3068,a[2]=t14,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:356: check */
f_1622(t15,lf[107]);}

/* check in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1622(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1622,2,t1,t2);}
a=C_alloc(4);
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1624,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_1624 in check in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1624,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1628,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
/* tcp.scm:353: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1626 */
static void C_ccall f_1628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1628,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1639,2,av);}
a=C_alloc(8);
t2=C_mutate((C_word*)lf[28]+1 /* (set! chicken.tcp#tcp-read-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3064,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:357: check */
f_1622(t4,lf[106]);}

/* k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1643,2,av);}
a=C_alloc(7);
t2=C_mutate((C_word*)lf[29]+1 /* (set! chicken.tcp#tcp-write-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3060,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:358: check */
f_1622(t4,lf[105]);}

/* k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1647,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[30]+1 /* (set! chicken.tcp#tcp-connect-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1651,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:359: check */
f_1622(t4,lf[104]);}

/* k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1651(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1651,2,av);}
a=C_alloc(31);
t2=C_mutate((C_word*)lf[31]+1 /* (set! chicken.tcp#tcp-accept-timeout ...) */,t1);
t3=*((C_word*)lf[27]+1);
t4=C_mutate(&lf[32] /* (set! chicken.tcp#io-ports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1653,a[2]=t3,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[64]+1 /* (set! chicken.tcp#tcp-accept ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2410,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[68]+1 /* (set! chicken.tcp#tcp-accept-ready? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2503,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[71]+1 /* (set! chicken.tcp#tcp-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2553,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[84] /* (set! chicken.tcp#tcp-port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2834,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[88]+1 /* (set! chicken.tcp#tcp-addresses ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2852,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[92]+1 /* (set! chicken.tcp#tcp-port-numbers ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2919,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[96]+1 /* (set! chicken.tcp#tcp-listener-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[99]+1 /* (set! chicken.tcp#tcp-abandon-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3029,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[101]+1 /* (set! chicken.tcp#tcp-listener-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t14=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}

/* chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1653(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_1653,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1657,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(make_socket_nonblocking(t3))){
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1657(2,av2);}}
else{
t5=stub105(C_SCHEME_UNDEFINED);
t6=t5;
t7=t3;
t8=C_i_foreign_fixnum_argumentp(t7);
t9=stub164(C_SCHEME_UNDEFINED,t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2398,a[2]=t4,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2402,a[2]=t10,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t11;
av2[2]=lf[63];
av2[3]=lf[13];
tp(4,av2);}}}

/* k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1657,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t2;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1660(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1660,2,av);}
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
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1666,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t6,a[5]=t4,a[6]=t8,a[7]=((C_word*)t0)[3],a[8]=t12,a[9]=t10,tmp=(C_word)a,a+=10,tmp);
/* tcp.scm:372: tbs */
t14=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}

/* k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1666,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1669,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
t4=C_fixnum_greaterp(t2,C_fix(0));
t5=t3;
f_1669(t5,(C_truep(t4)?lf[62]:C_SCHEME_FALSE));}
else{
t4=t3;
f_1669(t4,C_SCHEME_FALSE);}}

/* k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1669(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_1669,2,t0,t1);}
a=C_alloc(66);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2051,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li15),tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2073,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2115,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word)li17),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2165,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li18),tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2248,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:401: chicken.port#make-input-port */
t13=*((C_word*)lf[61]+1);{
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

/* read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1670(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1670,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1674,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:376: tcp-read-timeout */
t3=*((C_word*)lf[28]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_1674,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1761,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:377: chicken.time#current-milliseconds */
t5=*((C_word*)lf[42]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_1677(t4,C_SCHEME_FALSE);}}

/* k1675 in k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1677(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1677,2,t0,t1);}
a=C_alloc(13);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li6),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];{
C_word av2[2];
av2[0]=t6;
av2[1]=((C_word*)t0)[8];
f_1682(2,av2);}}

/* loop in k1675 in k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1682(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1682,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(t2);
t4=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(C_fix(1024));
t6=C_i_foreign_fixnum_argumentp(C_fix(0));
t7=stub172(C_SCHEME_UNDEFINED,t3,t4,t5,t6);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t7);
if(C_truep(t8)){
if(C_truep(stub114(C_SCHEME_UNDEFINED))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1701,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm:383: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t9;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t10=t9;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_1701(2,av2);}}}
else{
if(C_truep(stub120(C_SCHEME_UNDEFINED))){
/* tcp.scm:393: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1738,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1742,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[41];
av2[3]=lf[13];
tp(4,av2);}}}}
else{
t9=C_set_block_item(((C_word*)t0)[7],0,t7);
t10=C_i_set_i_slot(((C_word*)t0)[8],C_fix(4),t7);
t11=C_set_block_item(((C_word*)t0)[9],0,C_fix(0));
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* k1699 in loop in k1675 in k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1701,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:385: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[5];
av2[4]=lf[38];
tp(5,av2);}}

/* k1702 in k1699 in loop in k1675 in k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1704,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:386: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
tp(2,av2);}}

/* k1705 in k1702 in k1699 in loop in k1675 in k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_1707,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(*((C_word*)lf[33]+1),C_fix(13)))){
/* tcp.scm:388: ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[34];
av2[3]=lf[35];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* tcp.scm:391: loop */
t3=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
f_1682(2,av2);}}}

/* k1708 in k1705 in k1702 in k1699 in loop in k1675 in k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 in ... */
static void C_ccall f_1710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1710,2,av);}
/* tcp.scm:391: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_1682(2,av2);}}

/* k1736 in loop in k1675 in k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1738,2,av);}
/* tcp.scm:395: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1740 in loop in k1675 in k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1742(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1742,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1746,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1744 in k1740 in loop in k1675 in k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1746,2,av);}
/* tcp.scm:395: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1759 in k1672 in read-input in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_1761,2,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_1677(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1765(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1765,2,av);}
a=C_alloc(29);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1766,a[2]=((C_word*)t0)[2],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1902,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(C_truep(((C_word*)((C_word*)t0)[5])[1])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2015,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2035,a[2]=t3,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1929,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word)li13),tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1999,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:514: chicken.port#make-output-port */
t8=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
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
/* tcp.scm:514: chicken.port#make-output-port */
t7=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1766(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1766,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1770,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:484: tcp-write-timeout */
t4=*((C_word*)lf[29]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1770(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1770,2,av);}
a=C_alloc(11);
t2=t1;
t3=C_block_size(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1781,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1898,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:487: chicken.time#current-milliseconds */
t7=*((C_word*)lf[42]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t5;
f_1781(t6,C_SCHEME_FALSE);}}

/* k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1781(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1781,2,t0,t1);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1783(t5,((C_word*)t0)[5],((C_word*)t0)[6],C_fix(0),t1);}

/* loop in k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1783(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_1783,5,t0,t1,t2,t3,t4);}
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
t14=stub214(C_SCHEME_UNDEFINED,t9,t10,t11,t12,t13);
t15=C_eqp(C_fix((C_word)SOCKET_ERROR),t14);
if(C_truep(t15)){
if(C_truep(stub114(C_SCHEME_UNDEFINED))){
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1805,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
/* tcp.scm:493: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t16;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=t4;
tp(4,av2);}}
else{
t17=t16;{
C_word av2[2];
av2[0]=t17;
av2[1]=C_SCHEME_UNDEFINED;
f_1805(2,av2);}}}
else{
if(C_truep(stub120(C_SCHEME_UNDEFINED))){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1837,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:503: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t1;
av2[2]=t16;
tp(3,av2);}}
else{
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1848,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1852,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t17;
av2[2]=lf[45];
av2[3]=lf[13];
tp(4,av2);}}}}
else{
if(C_truep(C_fixnum_lessp(t14,t2))){
t16=C_fixnum_difference(t2,t14);
t17=t16;
t18=C_fixnum_plus(t3,t14);
t19=t18;
t20=C_eqp(t14,C_fix(0));
if(C_truep(t20)){
/* tcp.scm:508: loop */
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
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t17,a[6]=t19,tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:512: chicken.time#current-milliseconds */
t22=*((C_word*)lf[42]+1);{
C_word av2[2];
av2[0]=t22;
av2[1]=t21;
((C_proc)(void*)(*((C_word*)t22+1)))(2,av2);}}
else{
/* tcp.scm:508: loop */
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

/* k1803 in loop in k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1805,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* tcp.scm:495: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[8];
av2[4]=lf[44];
tp(5,av2);}}

/* k1806 in k1803 in loop in k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1808,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* tcp.scm:496: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
tp(2,av2);}}

/* k1809 in k1806 in k1803 in loop in k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 in ... */
static void C_ccall f_1811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1811,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(*((C_word*)lf[33]+1),C_fix(13)))){
/* tcp.scm:498: ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[34];
av2[3]=lf[43];
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* tcp.scm:501: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1783(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k1812 in k1809 in k1806 in k1803 in loop in k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in ... */
static void C_ccall f_1814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1814,2,av);}
/* tcp.scm:501: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1783(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* a1836 in loop in k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1837,2,av);}
/* tcp.scm:504: g619 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1783(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1846 in loop in k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1848,2,av);}
/* tcp.scm:506: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1850 in loop in k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1852(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1852,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1856,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1854 in k1850 in loop in k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1856,2,av);}
/* tcp.scm:506: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1891 in loop in k1779 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_1893,2,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* tcp.scm:508: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1783(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k1896 in k1768 in output in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_1898,2,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_1781(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* k1900 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1902(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1902,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[46]);
t4=C_i_setslot(t2,C_fix(3),lf[47]);
t5=C_i_setslot(((C_word*)t0)[2],C_fix(7),lf[48]);
t6=C_i_setslot(t2,C_fix(7),lf[48]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1917,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:542: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[49]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k1915 in k1900 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1917,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:543: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[49]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k1918 in k1915 in k1900 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1920,2,av);}
/* tcp.scm:544: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_values(4,av2);}}

/* a1928 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1929(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1929,2,av);}
a=C_alloc(11);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1937,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1983,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t5=C_block_size(((C_word*)((C_word*)t0)[6])[1]);
t6=t4;
f_1983(t6,C_fixnum_greaterp(t5,C_fix(0)));}
else{
t5=t4;
f_1983(t5,C_SCHEME_FALSE);}}}

/* k1935 in a1928 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1937(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1937,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(2)))){
t3=t2;
f_1940(t3,C_SCHEME_UNDEFINED);}
else{
t3=((C_word*)t0)[3];
t4=C_fix((C_word)SHUT_WR);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t2;
f_1940(t7,stub183(C_SCHEME_UNDEFINED,t5,t6));}}

/* k1938 in k1935 in a1928 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1940(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1940,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub164(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_1946(t6,C_eqp(C_fix((C_word)SOCKET_ERROR),t5));}
else{
t3=t2;
f_1946(t3,C_SCHEME_FALSE);}}

/* k1944 in k1938 in k1935 in a1928 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1946(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1946,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1957,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=lf[51];
av2[3]=lf[13];
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1951 in k1944 in k1938 in k1935 in a1928 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1953,2,av);}
/* tcp.scm:532: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1955 in k1944 in k1938 in k1935 in a1928 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1957(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1957,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1961,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k1959 in k1955 in k1944 in k1938 in k1935 in a1928 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1961,2,av);}
/* tcp.scm:532: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1981 in a1928 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_1983(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1983,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:528: output */
t3=((C_word*)t0)[4];
f_1766(t3,t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=((C_word*)t0)[3];
f_1937(t2,C_SCHEME_UNDEFINED);}}

/* k1984 in k1981 in a1928 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1986,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[52]);
t3=((C_word*)t0)[3];
f_1937(t3,t2);}

/* f_1999 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_1999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1999,2,av);}
a=C_alloc(4);
t2=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2009,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:536: output */
t4=((C_word*)t0)[3];
f_1766(t4,t3,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2007 */
static void C_ccall f_2009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2009,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[53]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_2015 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2015,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:517: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=t2;
tp(4,av2);}}

/* k2018 */
static void C_ccall f_2020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2020,2,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:519: output */
t5=((C_word*)t0)[5];
f_1766(t5,t4,((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2027 in k2018 */
static void C_ccall f_2029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2029,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[50]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_2035 in k1763 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2035(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2035,3,av);}
t3=C_block_size(t2);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
/* tcp.scm:523: output */
t4=((C_word*)t0)[2];
f_1766(t4,t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a2050 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2051,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:404: read-input */
t3=((C_word*)t0)[5];
f_1670(t3,t2);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2055(2,av2);}}}

/* k2053 in a2050 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2055,2,av);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_subchar(((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1]);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_set_block_item(((C_word*)t0)[2],0,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a2072 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2073(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2073,2,av);}
a=C_alloc(11);
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=((C_word*)t0)[4];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub200(C_SCHEME_UNDEFINED,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2086,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2099,a[2]=t7,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2103,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[55];
av2[3]=lf[13];
tp(4,av2);}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_eqp(t6,C_fix(1));
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* k2084 in a2072 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2086,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2097 in a2072 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2099,2,av);}
/* tcp.scm:416: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2101 in a2072 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2103(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2103,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2107,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2105 in k2101 in a2072 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2107,2,av);}
/* tcp.scm:416: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a2114 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2115(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2115,2,av);}
a=C_alloc(5);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2123,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(1)))){
t4=t3;
f_2123(t4,C_SCHEME_UNDEFINED);}
else{
t4=((C_word*)t0)[3];
t5=C_fix((C_word)SHUT_RD);
t6=C_i_foreign_fixnum_argumentp(t4);
t7=C_i_foreign_fixnum_argumentp(t5);
t8=t3;
f_2123(t8,stub183(C_SCHEME_UNDEFINED,t6,t7));}}}

/* k2121 in a2114 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_2123(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2123,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t3);
t5=stub164(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_2129(t6,C_eqp(C_fix((C_word)SOCKET_ERROR),t5));}
else{
t3=t2;
f_2129(t3,C_SCHEME_FALSE);}}

/* k2127 in k2121 in a2114 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_2129(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2129,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2136,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2140,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=lf[56];
av2[3]=lf[13];
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2134 in k2127 in k2121 in a2114 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2136,2,av);}
/* tcp.scm:423: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2138 in k2127 in k2121 in a2114 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2140(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2140,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2144,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2142 in k2138 in k2127 in k2121 in a2114 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2144,2,av);}
/* tcp.scm:423: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a2164 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2165,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:426: read-input */
t3=((C_word*)t0)[5];
f_1670(t3,t2);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2169(2,av2);}}}

/* k2167 in a2164 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2169,2,av);}
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=C_subchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a2182 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2183(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2183,6,av);}
a=C_alloc(11);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=((C_word)li19),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_2189(t9,t1,t3,C_fix(0),t5);}

/* loop in a2182 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_2189(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_2189,5,t0,t1,t2,t3,t4);}
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
/* tcp.scm:438: loop */
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2237,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:440: read-input */
t7=((C_word*)t0)[7];
f_1670(t7,t6);}}}

/* k2235 in loop in a2182 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2237,2,av);}
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* tcp.scm:443: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2189(t3,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* a2247 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2248,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:446: read-input */
t5=((C_word*)t0)[5];
f_1670(t5,t4);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2252(2,av2);}}}

/* k2250 in a2247 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2252(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_2252,2,av);}
a=C_alloc(15);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];
t3=(C_truep(t2)?t2:C_fixnum_difference(*((C_word*)lf[57]+1),((C_word*)((C_word*)t0)[2])[1]));
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2266,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li22),tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:450: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}}

/* a2265 in k2250 in a2247 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2266(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2266,2,av);}
a=C_alloc(8);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li21),tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:451: ##sys#scan-buffer-line */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)((C_word*)t0)[2])[1];
av2[5]=t4;
tp(6,av2);}}

/* a2275 in a2265 in k2250 in a2247 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2276(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2276,3,av);}
a=C_alloc(8);
t3=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
t4=t3;
if(C_truep(C_fixnum_greater_or_equal_p(t4,((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:458: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
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
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2292,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:459: read-input */
t6=((C_word*)t0)[6];
f_1670(t6,t5);}}

/* k2290 in a2275 in a2265 in k2250 in a2247 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2292(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2292,2,av);}
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
t3=C_set_block_item(((C_word*)t0)[2],0,t2);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]))){
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[2])[1]);
t5=C_i_fixnum_min(((C_word*)((C_word*)t0)[5])[1],t4);
/* tcp.scm:462: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
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
/* tcp.scm:465: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* a2321 in k2250 in a2247 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2322(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2322,5,av);}
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[2],C_fix(4));
t6=C_fixnum_plus(t5,C_fix(1));
t7=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t6);
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_fix(0));
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t5=C_slot(((C_word*)t0)[2],C_fix(5));
t6=C_block_size(t3);
t7=C_fixnum_plus(t5,t6);
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* a2366 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2367,3,av);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:478: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[60]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
tp(5,av2);}}}

/* k2375 in a2366 in k1667 in k1664 in k1658 in k1655 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2377,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2396 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2398,2,av);}
/* tcp.scm:365: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2400 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2402(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2402,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2406,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=stub109(t4,t5);
/* tcp.scm:171: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
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

/* k2404 in k2400 in chicken.tcp#io-ports in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2406,2,av);}
/* tcp.scm:365: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2410(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2410,3,av);}
a=C_alloc(5);
t3=C_i_check_structure(t2,lf[5]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2420,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:549: tcp-accept-timeout */
t7=*((C_word*)lf[31]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2420,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t2;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2501,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:550: chicken.time#current-milliseconds */
t6=*((C_word*)lf[42]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=t3;
f_2423(t4,C_SCHEME_FALSE);}}

/* k2421 in k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_2423(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_2423,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2428,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word)li27),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];{
C_word av2[2];
av2[0]=t6;
av2[1]=((C_word*)t0)[5];
f_2428(2,av2);}}

/* loop in k2421 in k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2428,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2432,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm:553: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2432(2,av2);}}}

/* k2430 in loop in k2421 in k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2432,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:554: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[38];
tp(5,av2);}}

/* k2433 in k2430 in loop in k2421 in k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2435,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:555: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
tp(2,av2);}}

/* k2436 in k2433 in k2430 in loop in k2421 in k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_2438,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_slot(*((C_word*)lf[33]+1),C_fix(13)))){
/* tcp.scm:557: ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[34];
av2[3]=lf[65];
av2[4]=lf[67];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2441(2,av2);}}}

/* k2439 in k2436 in k2433 in k2430 in loop in k2421 in k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2441(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2441,2,av);}
a=C_alloc(7);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub153(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=C_eqp(C_fix((C_word)INVALID_SOCKET),t3);
if(C_truep(C_i_not(t4))){
/* tcp.scm:563: io-ports */
t5=lf[32];
f_1653(t5,((C_word*)t0)[3],lf[65],t3);}
else{
if(C_truep(stub120(C_SCHEME_UNDEFINED))){
/* tcp.scm:565: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2469,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2473,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=lf[66];
av2[3]=lf[13];
tp(4,av2);}}}}

/* k2467 in k2439 in k2436 in k2433 in k2430 in loop in k2421 in k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2469,2,av);}
/* tcp.scm:567: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[65];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2471 in k2439 in k2436 in k2433 in k2430 in loop in k2421 in k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2473(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2473,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2477,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2475 in k2471 in k2439 in k2436 in k2433 in k2430 in loop in k2421 in k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2477,2,av);}
/* tcp.scm:567: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2499 in k2418 in chicken.tcp#tcp-accept in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_2501,2,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_2423(t2,C_s_a_i_plus(&a,2,((C_word*)t0)[3],t1));}

/* chicken.tcp#tcp-accept-ready? in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t3=C_i_check_structure_2(t2,lf[5],lf[69]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub200(C_SCHEME_UNDEFINED,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2513,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_eqp(C_fix((C_word)SOCKET_ERROR),t7);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2526,a[2]=t8,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2530,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t11;
av2[2]=lf[70];
av2[3]=lf[13];
tp(4,av2);}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_eqp(C_fix(1),t7);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k2511 in chicken.tcp#tcp-accept-ready? in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2513,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2524 in chicken.tcp#tcp-accept-ready? in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2526,2,av);}
/* tcp.scm:574: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[69];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2528 in chicken.tcp#tcp-accept-ready? in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2532 in k2528 in chicken.tcp#tcp-accept-ready? in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2534,2,av);}
/* tcp.scm:574: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2560,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:587: tcp-connect-timeout */
t10=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2825,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:588: chicken.time#current-milliseconds */
t5=*((C_word*)lf[42]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_2563(t4,C_SCHEME_FALSE);}}

/* k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_2563(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2563,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_fix((C_word)sizeof(struct sockaddr_in));
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2572,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2572(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[2],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:592: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}}

/* k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2572,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:594: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
tp(3,av2);}}

/* k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_2575,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2797,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:595: gethostaddr */
f_1248(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[6])[1]);}

/* k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t7=stub126(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2584,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t10=C_eqp(C_fix((C_word)INVALID_SOCKET),t8);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2780,a[2]=t9,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2784,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t12;
av2[2]=lf[78];
av2[3]=lf[13];
tp(4,av2);}}
else{
t11=t9;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_2584(2,av2);}}}

/* k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t4=stub205(C_SCHEME_UNDEFINED,t3);
t5=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t5)){
t6=stub105(C_SCHEME_UNDEFINED);
t7=t6;
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t9=stub164(C_SCHEME_UNDEFINED,t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2756,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2760,a[2]=t10,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t11;
av2[2]=lf[77];
av2[3]=lf[13];
tp(4,av2);}}
else{
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_2587(2,av2);}}}

/* k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2590(2,av2);}}
else{
t3=stub105(C_SCHEME_UNDEFINED);
t4=t3;
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t6=stub164(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2730,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2734,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t8;
av2[2]=lf[76];
av2[3]=lf[13];
tp(4,av2);}}}

/* k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
f_2656(2,av2);}}

/* k2591 in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t3=stub685(C_SCHEME_UNDEFINED,t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2599,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t6)){
t7=stub105(C_SCHEME_UNDEFINED);
t8=t7;
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t10=stub164(C_SCHEME_UNDEFINED,t9);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2618,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2622,a[2]=t11,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t12;
av2[2]=lf[73];
av2[3]=lf[13];
tp(4,av2);}}
else{
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t7=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t8=stub164(C_SCHEME_UNDEFINED,t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2644,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2648,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[74];
av2[3]=lf[13];
tp(4,av2);}}
else{
/* tcp.scm:622: io-ports */
t7=lf[32];
f_1653(t7,((C_word*)t0)[3],lf[72],((C_word*)t0)[2]);}}}

/* k2597 in k2591 in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2599,2,av);}
/* tcp.scm:622: io-ports */
t2=lf[32];
f_1653(t2,((C_word*)t0)[2],lf[72],((C_word*)t0)[3]);}

/* k2616 in k2591 in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2618,2,av);}
/* tcp.scm:618: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2620 in k2591 in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t6=stub109(t4,t5);
/* tcp.scm:171: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
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

/* k2624 in k2620 in k2591 in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 in ... */
static void C_ccall f_2626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2626,2,av);}
/* tcp.scm:618: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2642 in k2591 in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2644,2,av);}
/* tcp.scm:621: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2646 in k2591 in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t6=stub109(t4,t5);
/* tcp.scm:171: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
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

/* k2650 in k2646 in k2591 in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 in ... */
static void C_ccall f_2652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2652,2,av);}
/* tcp.scm:621: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* loop in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t6=stub191(C_SCHEME_UNDEFINED,t3,t4,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
if(C_truep(stub117(C_SCHEME_UNDEFINED))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2672,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* tcp.scm:608: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t8;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_2672(2,av2);}}}
else{
if(C_truep(stub120(C_SCHEME_UNDEFINED))){
/* tcp.scm:612: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
tp(3,av2);}}
else{
t8=stub105(C_SCHEME_UNDEFINED);
t9=t8;
t10=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t11=stub164(C_SCHEME_UNDEFINED,t10);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2703,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2707,a[2]=t12,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t13;
av2[2]=lf[75];
av2[3]=lf[13];
tp(4,av2);}}}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k2670 in loop in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
/* tcp.scm:609: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=lf[44];
tp(5,av2);}}

/* k2673 in k2670 in loop in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 in ... */
static void C_ccall f_2675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2675,2,av);}
/* tcp.scm:610: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* k2701 in loop in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_2703,2,av);}
/* tcp.scm:614: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)((C_word*)t0)[4])[1];
av2[7]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k2705 in loop in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t6=stub109(t4,t5);
/* tcp.scm:171: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
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

/* k2709 in k2705 in loop in k2588 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 in ... */
static void C_ccall f_2711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2711,2,av);}
/* tcp.scm:614: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2728 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2730,2,av);}
/* tcp.scm:603: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2732 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t6=stub109(t4,t5);
/* tcp.scm:171: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
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

/* k2736 in k2732 in k2585 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2738,2,av);}
/* tcp.scm:603: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2754 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2756,2,av);}
/* tcp.scm:601: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2758 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t6=stub109(t4,t5);
/* tcp.scm:171: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
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

/* k2762 in k2758 in k2582 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2764,2,av);}
/* tcp.scm:601: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2778 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2780,2,av);}
/* tcp.scm:599: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)((C_word*)t0)[3])[1];
av2[6]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k2782 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2786 in k2782 in k2576 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2788,2,av);}
/* tcp.scm:599: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2795 in k2573 in k2570 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2578(2,av2);}}
else{
/* tcp.scm:596: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=lf[79];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k2801 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2572(2,av2);}}
else{
/* tcp.scm:593: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=lf[72];
av2[4]=lf[80];
av2[5]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* a2810 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1283,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1283(t8,t1,C_fix(0));}

/* a2816 in k2564 in k2561 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2823 in k2558 in chicken.tcp#tcp-connect in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_2825,2,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_2563(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* chicken.tcp#tcp-port->fileno in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_fcall f_2834(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2834,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2838,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:625: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[87]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k2836 in chicken.tcp#tcp-port->fileno in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2838,2,av);}
if(C_truep(C_i_vectorp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* tcp.scm:628: chicken.base#error */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[86];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2852(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2852,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[89]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2858,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:632: tcp-port->fileno */
f_2834(t5,t2,lf[89]);}

/* k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2858,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t2);
t6=stub225(t4,t5);
/* tcp.scm:192: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
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

/* k2863 in k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2865,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_2868(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2903,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2907,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=lf[91];
av2[3]=lf[13];
tp(4,av2);}}}

/* k2866 in k2863 in k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2868(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2868,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t6=stub241(t4,t5);
/* tcp.scm:216: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
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

/* k2870 in k2866 in k2863 in k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2872,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
/* tcp.scm:633: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
C_values(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2882,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2886,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=lf[90];
av2[3]=lf[13];
tp(4,av2);}}}

/* k2873 in k2870 in k2866 in k2863 in k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2875,2,av);}
/* tcp.scm:633: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_values(4,av2);}}

/* k2880 in k2870 in k2866 in k2863 in k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2882,2,av);}
/* tcp.scm:637: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[89];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2884 in k2870 in k2866 in k2863 in k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2886(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2886,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2890,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2888 in k2884 in k2870 in k2866 in k2863 in k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2890,2,av);}
/* tcp.scm:637: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2901 in k2863 in k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2903,2,av);}
/* tcp.scm:635: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[89];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2905 in k2863 in k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2907(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2907,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2911,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2909 in k2905 in k2863 in k2856 in chicken.tcp#tcp-addresses in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2911,2,av);}
/* tcp.scm:635: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.tcp#tcp-port-numbers in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2919(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2919,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[93]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2925,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:641: tcp-port->fileno */
f_2834(t5,t2,lf[93]);}

/* k2923 in chicken.tcp#tcp-port-numbers in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2925(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2925,2,av);}
a=C_alloc(13);
t2=C_i_foreign_fixnum_argumentp(t1);
t3=stub231(C_SCHEME_UNDEFINED,t2);
t4=t3;
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub236(C_SCHEME_UNDEFINED,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2934,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t7,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=C_eqp(C_fix(-1),t4);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2974,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2978,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t11;
av2[2]=lf[95];
av2[3]=lf[13];
tp(4,av2);}}
else{
t10=t8;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_2934(2,av2);}}}

/* k2932 in k2923 in chicken.tcp#tcp-port-numbers in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2934(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2934,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2950,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2954,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t5;
av2[2]=lf[94];
av2[3]=lf[13];
tp(4,av2);}}
else{
/* tcp.scm:648: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_values(4,av2);}}}

/* k2935 in k2932 in k2923 in chicken.tcp#tcp-port-numbers in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2937,2,av);}
/* tcp.scm:648: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_values(4,av2);}}

/* k2948 in k2932 in k2923 in chicken.tcp#tcp-port-numbers in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2950,2,av);}
/* tcp.scm:647: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[93];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2952 in k2932 in k2923 in chicken.tcp#tcp-port-numbers in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2954(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2954,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2958,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2956 in k2952 in k2932 in k2923 in chicken.tcp#tcp-port-numbers in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2958,2,av);}
/* tcp.scm:647: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2972 in k2923 in chicken.tcp#tcp-port-numbers in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2974,2,av);}
/* tcp.scm:645: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[93];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2976 in k2923 in chicken.tcp#tcp-port-numbers in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2978(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2978,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k2980 in k2976 in k2923 in chicken.tcp#tcp-port-numbers in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2982,2,av);}
/* tcp.scm:645: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.tcp#tcp-listener-port in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_2990(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2990,3,av);}
a=C_alloc(12);
t3=C_i_check_structure_2(t2,lf[5],lf[97]);
t4=C_slot(t2,C_fix(1));
t5=t4;
t6=C_i_foreign_fixnum_argumentp(t5);
t7=stub231(C_SCHEME_UNDEFINED,t6);
t8=t7;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3003,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_eqp(C_fix(-1),t8);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3013,a[2]=t9,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3017,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t12;
av2[2]=lf[98];
av2[3]=lf[13];
tp(4,av2);}}
else{
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}

/* k3001 in chicken.tcp#tcp-listener-port in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_3003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3003,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3011 in chicken.tcp#tcp-listener-port in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_3013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3013,2,av);}
/* tcp.scm:655: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[97];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k3015 in chicken.tcp#tcp-listener-port in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
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
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3017,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3021,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=stub105(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub109(t5,t6);
/* tcp.scm:171: ##sys#peek-c-string */
t8=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k3019 in k3015 in chicken.tcp#tcp-listener-port in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_3021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3021,2,av);}
/* tcp.scm:655: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.tcp#tcp-abandon-port in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_3029(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3029,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[100]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3039,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:660: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[87]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t5;
av2[2]=t2;
tp(3,av2);}}

/* k3037 in chicken.tcp#tcp-abandon-port in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_3039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3039,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_set_i_slot(t1,t2,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.tcp#tcp-listener-fileno in k1649 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_3045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3045,3,av);}
t3=C_i_check_structure_2(t2,lf[5],lf[102]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3054 in k1645 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_3056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3056,2,av);}
/* tcp.scm:359: chicken.base#make-parameter */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3058 in k1641 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_3060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3060,2,av);}
/* tcp.scm:358: chicken.base#make-parameter */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3062 in k1637 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_3064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3064,2,av);}
/* tcp.scm:357: chicken.base#make-parameter */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3066 in k1614 in k1219 in k991 in k988 in k985 */
static void C_ccall f_3068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3068,2,av);}
/* tcp.scm:356: chicken.base#make-parameter */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k985 */
static void C_ccall f_987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_987,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scheduler_toplevel(2,av2);}}

/* k988 in k985 */
static void C_ccall f_990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_990,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k991 in k988 in k985 */
static void C_ccall f_993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_993,2,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1221,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(stub246(C_SCHEME_UNDEFINED))){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1221(2,av2);}}
else{
/* tcp.scm:237: ##sys#signal-hook */
t5=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[7];
av2[3]=lf[108];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

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
else C_toplevel_entry(C_text("tcp"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_tcp_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(441))){
C_save(t1);
C_rereclaim2(441*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,109);
lf[0]=C_h_intern(&lf[0],3, C_text("tcp"));
lf[1]=C_h_intern(&lf[1],12, C_text("chicken.tcp#"));
lf[3]=C_h_intern(&lf[3],17, C_text("\003sysmake-c-string"));
lf[4]=C_h_intern(&lf[4],22, C_text("chicken.tcp#tcp-listen"));
lf[5]=C_h_intern(&lf[5],12, C_text("tcp-listener"));
lf[6]=C_h_intern(&lf[6],15, C_text("\003syssignal-hook"));
lf[7]=C_h_intern(&lf[7],14, C_text("\000network-error"));
lf[8]=C_h_intern(&lf[8],10, C_text("tcp-listen"));
lf[9]=C_h_intern(&lf[9],20, C_text("scheme#string-append"));
lf[10]=C_h_intern(&lf[10],17, C_text("\003syspeek-c-string"));
lf[11]=C_h_intern(&lf[11],17, C_text("\003sysstring-append"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot listen on socket"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[14]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot bind to socket"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035error while setting up socket"));
lf[16]=C_h_intern(&lf[16],9, C_text("\003syserror"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot create socket"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037getting listener host IP failed"));
lf[19]=C_h_intern(&lf[19],15, C_text("\003sysmake-string"));
lf[20]=C_h_intern(&lf[20],16, C_text("\003syscheck-fixnum"));
lf[21]=C_h_intern(&lf[21],13, C_text("\000domain-error"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid port number"));
lf[23]=C_h_intern(&lf[23],25, C_text("chicken.tcp#tcp-listener\077"));
lf[24]=C_h_intern(&lf[24],21, C_text("chicken.tcp#tcp-close"));
lf[25]=C_h_intern(&lf[25],9, C_text("tcp-close"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot close TCP socket"));
lf[27]=C_h_intern(&lf[27],27, C_text("chicken.tcp#tcp-buffer-size"));
lf[28]=C_h_intern(&lf[28],28, C_text("chicken.tcp#tcp-read-timeout"));
lf[29]=C_h_intern(&lf[29],29, C_text("chicken.tcp#tcp-write-timeout"));
lf[30]=C_h_intern(&lf[30],31, C_text("chicken.tcp#tcp-connect-timeout"));
lf[31]=C_h_intern(&lf[31],30, C_text("chicken.tcp#tcp-accept-timeout"));
lf[33]=C_h_intern(&lf[33],18, C_text("\003syscurrent-thread"));
lf[34]=C_h_intern(&lf[34],22, C_text("\000network-timeout-error"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030read operation timed out"));
lf[36]=C_h_intern(&lf[36],17, C_text("\003systhread-yield!"));
lf[37]=C_h_intern(&lf[37],25, C_text("\003systhread-block-for-i/o!"));
lf[38]=C_h_intern(&lf[38],6, C_text("\000input"));
lf[39]=C_h_intern(&lf[39],29, C_text("\003systhread-block-for-timeout!"));
lf[40]=C_h_intern(&lf[40],22, C_text("\003sysdispatch-interrupt"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot read from socket"));
lf[42]=C_h_intern(&lf[42],33, C_text("chicken.time#current-milliseconds"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031write operation timed out"));
lf[44]=C_h_intern(&lf[44],7, C_text("\000output"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026cannot write to socket"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005(tcp)"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005(tcp)"));
lf[48]=C_h_intern(&lf[48],6, C_text("socket"));
lf[49]=C_h_intern(&lf[49],18, C_text("\003sysset-port-data!"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037cannot close socket output port"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[54]=C_h_intern(&lf[54],29, C_text("chicken.port#make-output-port"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035cannot check socket for input"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot close socket input port"));
lf[57]=C_h_intern(&lf[57],35, C_text("chicken.fixnum#most-positive-fixnum"));
lf[58]=C_h_intern(&lf[58],20, C_text("\003sysscan-buffer-line"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[60]=C_h_intern(&lf[60],13, C_text("\003syssubstring"));
lf[61]=C_h_intern(&lf[61],28, C_text("chicken.port#make-input-port"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot create TCP ports"));
lf[64]=C_h_intern(&lf[64],22, C_text("chicken.tcp#tcp-accept"));
lf[65]=C_h_intern(&lf[65],10, C_text("tcp-accept"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036could not accept from listener"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032accept operation timed out"));
lf[68]=C_h_intern(&lf[68],29, C_text("chicken.tcp#tcp-accept-ready\077"));
lf[69]=C_h_intern(&lf[69],17, C_text("tcp-accept-ready\077"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035cannot check socket for input"));
lf[71]=C_h_intern(&lf[71],23, C_text("chicken.tcp#tcp-connect"));
lf[72]=C_h_intern(&lf[72],11, C_text("tcp-connect"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023getsockopt() failed"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot create socket"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030cannot connect to socket"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016fcntl() failed"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035error while setting up socket"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot create socket"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030cannot find host address"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021no port specified"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot compute port from service"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003tcp"));
lf[83]=C_h_intern(&lf[83],16, C_text("scheme#substring"));
lf[85]=C_h_intern(&lf[85],18, C_text("chicken.base#error"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000)argument does not appear to be a TCP port"));
lf[87]=C_h_intern(&lf[87],13, C_text("\003sysport-data"));
lf[88]=C_h_intern(&lf[88],25, C_text("chicken.tcp#tcp-addresses"));
lf[89]=C_h_intern(&lf[89],13, C_text("tcp-addresses"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035cannot compute remote address"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034cannot compute local address"));
lf[92]=C_h_intern(&lf[92],28, C_text("chicken.tcp#tcp-port-numbers"));
lf[93]=C_h_intern(&lf[93],16, C_text("tcp-port-numbers"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032cannot compute remote port"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031cannot compute local port"));
lf[96]=C_h_intern(&lf[96],29, C_text("chicken.tcp#tcp-listener-port"));
lf[97]=C_h_intern(&lf[97],17, C_text("tcp-listener-port"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033cannot obtain listener port"));
lf[99]=C_h_intern(&lf[99],28, C_text("chicken.tcp#tcp-abandon-port"));
lf[100]=C_h_intern(&lf[100],16, C_text("tcp-abandon-port"));
lf[101]=C_h_intern(&lf[101],31, C_text("chicken.tcp#tcp-listener-fileno"));
lf[102]=C_h_intern(&lf[102],19, C_text("tcp-listener-fileno"));
lf[103]=C_h_intern(&lf[103],27, C_text("chicken.base#make-parameter"));
lf[104]=C_h_intern(&lf[104],18, C_text("tcp-accept-timeout"));
lf[105]=C_h_intern(&lf[105],19, C_text("tcp-connect-timeout"));
lf[106]=C_h_intern(&lf[106],17, C_text("tcp-write-timeout"));
lf[107]=C_h_intern(&lf[107],16, C_text("tcp-read-timeout"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031cannot initialize Winsock"));
C_register_lf2(lf,109,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_987,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[222] = {
{C_text("f_1221:tcp_2escm"),(void*)f_1221},
{C_text("f_1228:tcp_2escm"),(void*)f_1228},
{C_text("f_1232:tcp_2escm"),(void*)f_1232},
{C_text("f_1248:tcp_2escm"),(void*)f_1248},
{C_text("f_1257:tcp_2escm"),(void*)f_1257},
{C_text("f_1283:tcp_2escm"),(void*)f_1283},
{C_text("f_1306:tcp_2escm"),(void*)f_1306},
{C_text("f_1310:tcp_2escm"),(void*)f_1310},
{C_text("f_1313:tcp_2escm"),(void*)f_1313},
{C_text("f_1316:tcp_2escm"),(void*)f_1316},
{C_text("f_1326:tcp_2escm"),(void*)f_1326},
{C_text("f_1330:tcp_2escm"),(void*)f_1330},
{C_text("f_1334:tcp_2escm"),(void*)f_1334},
{C_text("f_1372:tcp_2escm"),(void*)f_1372},
{C_text("f_1375:tcp_2escm"),(void*)f_1375},
{C_text("f_1381:tcp_2escm"),(void*)f_1381},
{C_text("f_1384:tcp_2escm"),(void*)f_1384},
{C_text("f_1387:tcp_2escm"),(void*)f_1387},
{C_text("f_1403:tcp_2escm"),(void*)f_1403},
{C_text("f_1407:tcp_2escm"),(void*)f_1407},
{C_text("f_1411:tcp_2escm"),(void*)f_1411},
{C_text("f_1427:tcp_2escm"),(void*)f_1427},
{C_text("f_1431:tcp_2escm"),(void*)f_1431},
{C_text("f_1435:tcp_2escm"),(void*)f_1435},
{C_text("f_1457:tcp_2escm"),(void*)f_1457},
{C_text("f_1466:tcp_2escm"),(void*)f_1466},
{C_text("f_1482:tcp_2escm"),(void*)f_1482},
{C_text("f_1485:tcp_2escm"),(void*)f_1485},
{C_text("f_1488:tcp_2escm"),(void*)f_1488},
{C_text("f_1491:tcp_2escm"),(void*)f_1491},
{C_text("f_1494:tcp_2escm"),(void*)f_1494},
{C_text("f_1513:tcp_2escm"),(void*)f_1513},
{C_text("f_1517:tcp_2escm"),(void*)f_1517},
{C_text("f_1521:tcp_2escm"),(void*)f_1521},
{C_text("f_1565:tcp_2escm"),(void*)f_1565},
{C_text("f_1574:tcp_2escm"),(void*)f_1574},
{C_text("f_1594:tcp_2escm"),(void*)f_1594},
{C_text("f_1598:tcp_2escm"),(void*)f_1598},
{C_text("f_1602:tcp_2escm"),(void*)f_1602},
{C_text("f_1616:tcp_2escm"),(void*)f_1616},
{C_text("f_1622:tcp_2escm"),(void*)f_1622},
{C_text("f_1624:tcp_2escm"),(void*)f_1624},
{C_text("f_1628:tcp_2escm"),(void*)f_1628},
{C_text("f_1639:tcp_2escm"),(void*)f_1639},
{C_text("f_1643:tcp_2escm"),(void*)f_1643},
{C_text("f_1647:tcp_2escm"),(void*)f_1647},
{C_text("f_1651:tcp_2escm"),(void*)f_1651},
{C_text("f_1653:tcp_2escm"),(void*)f_1653},
{C_text("f_1657:tcp_2escm"),(void*)f_1657},
{C_text("f_1660:tcp_2escm"),(void*)f_1660},
{C_text("f_1666:tcp_2escm"),(void*)f_1666},
{C_text("f_1669:tcp_2escm"),(void*)f_1669},
{C_text("f_1670:tcp_2escm"),(void*)f_1670},
{C_text("f_1674:tcp_2escm"),(void*)f_1674},
{C_text("f_1677:tcp_2escm"),(void*)f_1677},
{C_text("f_1682:tcp_2escm"),(void*)f_1682},
{C_text("f_1701:tcp_2escm"),(void*)f_1701},
{C_text("f_1704:tcp_2escm"),(void*)f_1704},
{C_text("f_1707:tcp_2escm"),(void*)f_1707},
{C_text("f_1710:tcp_2escm"),(void*)f_1710},
{C_text("f_1738:tcp_2escm"),(void*)f_1738},
{C_text("f_1742:tcp_2escm"),(void*)f_1742},
{C_text("f_1746:tcp_2escm"),(void*)f_1746},
{C_text("f_1761:tcp_2escm"),(void*)f_1761},
{C_text("f_1765:tcp_2escm"),(void*)f_1765},
{C_text("f_1766:tcp_2escm"),(void*)f_1766},
{C_text("f_1770:tcp_2escm"),(void*)f_1770},
{C_text("f_1781:tcp_2escm"),(void*)f_1781},
{C_text("f_1783:tcp_2escm"),(void*)f_1783},
{C_text("f_1805:tcp_2escm"),(void*)f_1805},
{C_text("f_1808:tcp_2escm"),(void*)f_1808},
{C_text("f_1811:tcp_2escm"),(void*)f_1811},
{C_text("f_1814:tcp_2escm"),(void*)f_1814},
{C_text("f_1837:tcp_2escm"),(void*)f_1837},
{C_text("f_1848:tcp_2escm"),(void*)f_1848},
{C_text("f_1852:tcp_2escm"),(void*)f_1852},
{C_text("f_1856:tcp_2escm"),(void*)f_1856},
{C_text("f_1893:tcp_2escm"),(void*)f_1893},
{C_text("f_1898:tcp_2escm"),(void*)f_1898},
{C_text("f_1902:tcp_2escm"),(void*)f_1902},
{C_text("f_1917:tcp_2escm"),(void*)f_1917},
{C_text("f_1920:tcp_2escm"),(void*)f_1920},
{C_text("f_1929:tcp_2escm"),(void*)f_1929},
{C_text("f_1937:tcp_2escm"),(void*)f_1937},
{C_text("f_1940:tcp_2escm"),(void*)f_1940},
{C_text("f_1946:tcp_2escm"),(void*)f_1946},
{C_text("f_1953:tcp_2escm"),(void*)f_1953},
{C_text("f_1957:tcp_2escm"),(void*)f_1957},
{C_text("f_1961:tcp_2escm"),(void*)f_1961},
{C_text("f_1983:tcp_2escm"),(void*)f_1983},
{C_text("f_1986:tcp_2escm"),(void*)f_1986},
{C_text("f_1999:tcp_2escm"),(void*)f_1999},
{C_text("f_2009:tcp_2escm"),(void*)f_2009},
{C_text("f_2015:tcp_2escm"),(void*)f_2015},
{C_text("f_2020:tcp_2escm"),(void*)f_2020},
{C_text("f_2029:tcp_2escm"),(void*)f_2029},
{C_text("f_2035:tcp_2escm"),(void*)f_2035},
{C_text("f_2051:tcp_2escm"),(void*)f_2051},
{C_text("f_2055:tcp_2escm"),(void*)f_2055},
{C_text("f_2073:tcp_2escm"),(void*)f_2073},
{C_text("f_2086:tcp_2escm"),(void*)f_2086},
{C_text("f_2099:tcp_2escm"),(void*)f_2099},
{C_text("f_2103:tcp_2escm"),(void*)f_2103},
{C_text("f_2107:tcp_2escm"),(void*)f_2107},
{C_text("f_2115:tcp_2escm"),(void*)f_2115},
{C_text("f_2123:tcp_2escm"),(void*)f_2123},
{C_text("f_2129:tcp_2escm"),(void*)f_2129},
{C_text("f_2136:tcp_2escm"),(void*)f_2136},
{C_text("f_2140:tcp_2escm"),(void*)f_2140},
{C_text("f_2144:tcp_2escm"),(void*)f_2144},
{C_text("f_2165:tcp_2escm"),(void*)f_2165},
{C_text("f_2169:tcp_2escm"),(void*)f_2169},
{C_text("f_2183:tcp_2escm"),(void*)f_2183},
{C_text("f_2189:tcp_2escm"),(void*)f_2189},
{C_text("f_2237:tcp_2escm"),(void*)f_2237},
{C_text("f_2248:tcp_2escm"),(void*)f_2248},
{C_text("f_2252:tcp_2escm"),(void*)f_2252},
{C_text("f_2266:tcp_2escm"),(void*)f_2266},
{C_text("f_2276:tcp_2escm"),(void*)f_2276},
{C_text("f_2292:tcp_2escm"),(void*)f_2292},
{C_text("f_2322:tcp_2escm"),(void*)f_2322},
{C_text("f_2367:tcp_2escm"),(void*)f_2367},
{C_text("f_2377:tcp_2escm"),(void*)f_2377},
{C_text("f_2398:tcp_2escm"),(void*)f_2398},
{C_text("f_2402:tcp_2escm"),(void*)f_2402},
{C_text("f_2406:tcp_2escm"),(void*)f_2406},
{C_text("f_2410:tcp_2escm"),(void*)f_2410},
{C_text("f_2420:tcp_2escm"),(void*)f_2420},
{C_text("f_2423:tcp_2escm"),(void*)f_2423},
{C_text("f_2428:tcp_2escm"),(void*)f_2428},
{C_text("f_2432:tcp_2escm"),(void*)f_2432},
{C_text("f_2435:tcp_2escm"),(void*)f_2435},
{C_text("f_2438:tcp_2escm"),(void*)f_2438},
{C_text("f_2441:tcp_2escm"),(void*)f_2441},
{C_text("f_2469:tcp_2escm"),(void*)f_2469},
{C_text("f_2473:tcp_2escm"),(void*)f_2473},
{C_text("f_2477:tcp_2escm"),(void*)f_2477},
{C_text("f_2501:tcp_2escm"),(void*)f_2501},
{C_text("f_2503:tcp_2escm"),(void*)f_2503},
{C_text("f_2513:tcp_2escm"),(void*)f_2513},
{C_text("f_2526:tcp_2escm"),(void*)f_2526},
{C_text("f_2530:tcp_2escm"),(void*)f_2530},
{C_text("f_2534:tcp_2escm"),(void*)f_2534},
{C_text("f_2553:tcp_2escm"),(void*)f_2553},
{C_text("f_2560:tcp_2escm"),(void*)f_2560},
{C_text("f_2563:tcp_2escm"),(void*)f_2563},
{C_text("f_2566:tcp_2escm"),(void*)f_2566},
{C_text("f_2572:tcp_2escm"),(void*)f_2572},
{C_text("f_2575:tcp_2escm"),(void*)f_2575},
{C_text("f_2578:tcp_2escm"),(void*)f_2578},
{C_text("f_2584:tcp_2escm"),(void*)f_2584},
{C_text("f_2587:tcp_2escm"),(void*)f_2587},
{C_text("f_2590:tcp_2escm"),(void*)f_2590},
{C_text("f_2593:tcp_2escm"),(void*)f_2593},
{C_text("f_2599:tcp_2escm"),(void*)f_2599},
{C_text("f_2618:tcp_2escm"),(void*)f_2618},
{C_text("f_2622:tcp_2escm"),(void*)f_2622},
{C_text("f_2626:tcp_2escm"),(void*)f_2626},
{C_text("f_2644:tcp_2escm"),(void*)f_2644},
{C_text("f_2648:tcp_2escm"),(void*)f_2648},
{C_text("f_2652:tcp_2escm"),(void*)f_2652},
{C_text("f_2656:tcp_2escm"),(void*)f_2656},
{C_text("f_2672:tcp_2escm"),(void*)f_2672},
{C_text("f_2675:tcp_2escm"),(void*)f_2675},
{C_text("f_2703:tcp_2escm"),(void*)f_2703},
{C_text("f_2707:tcp_2escm"),(void*)f_2707},
{C_text("f_2711:tcp_2escm"),(void*)f_2711},
{C_text("f_2730:tcp_2escm"),(void*)f_2730},
{C_text("f_2734:tcp_2escm"),(void*)f_2734},
{C_text("f_2738:tcp_2escm"),(void*)f_2738},
{C_text("f_2756:tcp_2escm"),(void*)f_2756},
{C_text("f_2760:tcp_2escm"),(void*)f_2760},
{C_text("f_2764:tcp_2escm"),(void*)f_2764},
{C_text("f_2780:tcp_2escm"),(void*)f_2780},
{C_text("f_2784:tcp_2escm"),(void*)f_2784},
{C_text("f_2788:tcp_2escm"),(void*)f_2788},
{C_text("f_2797:tcp_2escm"),(void*)f_2797},
{C_text("f_2803:tcp_2escm"),(void*)f_2803},
{C_text("f_2811:tcp_2escm"),(void*)f_2811},
{C_text("f_2817:tcp_2escm"),(void*)f_2817},
{C_text("f_2825:tcp_2escm"),(void*)f_2825},
{C_text("f_2834:tcp_2escm"),(void*)f_2834},
{C_text("f_2838:tcp_2escm"),(void*)f_2838},
{C_text("f_2852:tcp_2escm"),(void*)f_2852},
{C_text("f_2858:tcp_2escm"),(void*)f_2858},
{C_text("f_2865:tcp_2escm"),(void*)f_2865},
{C_text("f_2868:tcp_2escm"),(void*)f_2868},
{C_text("f_2872:tcp_2escm"),(void*)f_2872},
{C_text("f_2875:tcp_2escm"),(void*)f_2875},
{C_text("f_2882:tcp_2escm"),(void*)f_2882},
{C_text("f_2886:tcp_2escm"),(void*)f_2886},
{C_text("f_2890:tcp_2escm"),(void*)f_2890},
{C_text("f_2903:tcp_2escm"),(void*)f_2903},
{C_text("f_2907:tcp_2escm"),(void*)f_2907},
{C_text("f_2911:tcp_2escm"),(void*)f_2911},
{C_text("f_2919:tcp_2escm"),(void*)f_2919},
{C_text("f_2925:tcp_2escm"),(void*)f_2925},
{C_text("f_2934:tcp_2escm"),(void*)f_2934},
{C_text("f_2937:tcp_2escm"),(void*)f_2937},
{C_text("f_2950:tcp_2escm"),(void*)f_2950},
{C_text("f_2954:tcp_2escm"),(void*)f_2954},
{C_text("f_2958:tcp_2escm"),(void*)f_2958},
{C_text("f_2974:tcp_2escm"),(void*)f_2974},
{C_text("f_2978:tcp_2escm"),(void*)f_2978},
{C_text("f_2982:tcp_2escm"),(void*)f_2982},
{C_text("f_2990:tcp_2escm"),(void*)f_2990},
{C_text("f_3003:tcp_2escm"),(void*)f_3003},
{C_text("f_3013:tcp_2escm"),(void*)f_3013},
{C_text("f_3017:tcp_2escm"),(void*)f_3017},
{C_text("f_3021:tcp_2escm"),(void*)f_3021},
{C_text("f_3029:tcp_2escm"),(void*)f_3029},
{C_text("f_3039:tcp_2escm"),(void*)f_3039},
{C_text("f_3045:tcp_2escm"),(void*)f_3045},
{C_text("f_3056:tcp_2escm"),(void*)f_3056},
{C_text("f_3060:tcp_2escm"),(void*)f_3060},
{C_text("f_3064:tcp_2escm"),(void*)f_3064},
{C_text("f_3068:tcp_2escm"),(void*)f_3068},
{C_text("f_987:tcp_2escm"),(void*)f_987},
{C_text("f_990:tcp_2escm"),(void*)f_990},
{C_text("f_993:tcp_2escm"),(void*)f_993},
{C_text("toplevel:tcp_2escm"),(void*)C_tcp_toplevel},
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
o|hiding unexported module binding: chicken.tcp#d 
o|hiding unexported module binding: chicken.tcp#define-alias 
o|hiding unexported module binding: chicken.tcp#last-error-code 
o|hiding unexported module binding: chicken.tcp#error-code->message 
o|hiding unexported module binding: chicken.tcp#retry? 
o|hiding unexported module binding: chicken.tcp#in-progress? 
o|hiding unexported module binding: chicken.tcp#interrupted? 
o|hiding unexported module binding: chicken.tcp#socket 
o|hiding unexported module binding: chicken.tcp#bind 
o|hiding unexported module binding: chicken.tcp#listen 
o|hiding unexported module binding: chicken.tcp#accept 
o|hiding unexported module binding: chicken.tcp#close 
o|hiding unexported module binding: chicken.tcp#recv 
o|hiding unexported module binding: chicken.tcp#shutdown 
o|hiding unexported module binding: chicken.tcp#connect 
o|hiding unexported module binding: chicken.tcp#check-fd-ready 
o|hiding unexported module binding: chicken.tcp#set-socket-options 
o|hiding unexported module binding: chicken.tcp#send 
o|hiding unexported module binding: chicken.tcp#getsockname 
o|hiding unexported module binding: chicken.tcp#getsockport 
o|hiding unexported module binding: chicken.tcp#getpeerport 
o|hiding unexported module binding: chicken.tcp#getpeername 
o|hiding unexported module binding: chicken.tcp#startup 
o|hiding unexported module binding: chicken.tcp#getservbyname 
o|hiding unexported module binding: chicken.tcp#gethostaddr 
o|hiding unexported module binding: chicken.tcp#network-error 
o|hiding unexported module binding: chicken.tcp#network-error/close 
o|hiding unexported module binding: chicken.tcp#network-error/code 
o|hiding unexported module binding: chicken.tcp#parse-host 
o|hiding unexported module binding: chicken.tcp#fresh-addr 
o|hiding unexported module binding: chicken.tcp#bind-socket 
o|hiding unexported module binding: chicken.tcp#io-ports 
o|hiding unexported module binding: chicken.tcp#get-socket-error 
o|hiding unexported module binding: chicken.tcp#tcp-port->fileno 
o|eliminated procedure checks: 64 
o|specializations:
o|  3 (##sys#check-open-port * *)
o|  5 (scheme#+ * *)
o|  3 (scheme#make-string fixnum)
o|  24 (scheme#string-append string string)
(o e)|safe calls: 338 
(o e)|assignments to immediate values: 6 
o|safe globals: (chicken.tcp#startup chicken.tcp#getpeername chicken.tcp#getpeerport chicken.tcp#getsockport chicken.tcp#getsockname chicken.tcp#send chicken.tcp#set-socket-options chicken.tcp#check-fd-ready chicken.tcp#connect chicken.tcp#shutdown chicken.tcp#recv chicken.tcp#close chicken.tcp#accept chicken.tcp#listen chicken.tcp#bind chicken.tcp#socket chicken.tcp#interrupted? chicken.tcp#in-progress? chicken.tcp#retry? chicken.tcp#error-code->message chicken.tcp#last-error-code) 
o|inlining procedure: k1285 
o|inlining procedure: k1285 
o|inlining procedure: k1314 
o|inlining procedure: "(tcp.scm:290) chicken.tcp#last-error-code" 
o|substituted constant variable: a1339 
o|substituted constant variable: a1340 
o|inlining procedure: k1314 
o|contracted procedure: "(tcp.scm:288) chicken.tcp#getservbyname" 
o|inlining procedure: k1230 
o|inlining procedure: k1230 
o|inlining procedure: k1492 
o|substituted constant variable: a1522 
o|substituted constant variable: a1523 
o|inlining procedure: "(tcp.scm:329) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:329) chicken.tcp#last-error-code" 
o|inlining procedure: k1492 
o|contracted procedure: "(tcp.scm:328) chicken.tcp#listen" 
o|contracted procedure: "(tcp.scm:327) chicken.tcp#bind-socket" 
o|inlining procedure: k1385 
o|substituted constant variable: a1412 
o|substituted constant variable: a1413 
o|inlining procedure: "(tcp.scm:317) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:317) chicken.tcp#last-error-code" 
o|inlining procedure: k1385 
o|contracted procedure: "(tcp.scm:316) chicken.tcp#bind" 
o|inlining procedure: "(tcp.scm:315) chicken.tcp#last-error-code" 
o|substituted constant variable: a1440 
o|substituted constant variable: a1441 
o|inlining procedure: "(tcp.scm:314) chicken.tcp#set-socket-options" 
o|inlining procedure: k1452 
o|inlining procedure: k1452 
o|contracted procedure: "(tcp.scm:309) chicken.tcp#fresh-addr" 
o|inlining procedure: k1567 
o|inlining procedure: k1567 
o|inlining procedure: k1582 
o|inlining procedure: "(tcp.scm:340) chicken.tcp#last-error-code" 
o|substituted constant variable: a1607 
o|substituted constant variable: a1608 
o|inlining procedure: k1582 
o|inlining procedure: "(tcp.scm:339) chicken.tcp#close" 
o|inlining procedure: k1626 
o|inlining procedure: k1626 
o|inlining procedure: k1687 
o|inlining procedure: k1708 
o|inlining procedure: k1708 
o|inlining procedure: k1723 
o|inlining procedure: k1723 
o|inlining procedure: "(tcp.scm:395) chicken.tcp#last-error-code" 
o|substituted constant variable: a1751 
o|substituted constant variable: a1752 
o|inlining procedure: "(tcp.scm:392) chicken.tcp#interrupted?" 
o|inlining procedure: "(tcp.scm:381) chicken.tcp#retry?" 
o|inlining procedure: k1687 
o|contracted procedure: "(tcp.scm:379) chicken.tcp#recv" 
o|inlining procedure: k1791 
o|inlining procedure: k1827 
o|inlining procedure: k1827 
o|inlining procedure: "(tcp.scm:506) chicken.tcp#last-error-code" 
o|substituted constant variable: a1861 
o|substituted constant variable: a1862 
o|inlining procedure: "(tcp.scm:502) chicken.tcp#interrupted?" 
o|inlining procedure: "(tcp.scm:491) chicken.tcp#retry?" 
o|inlining procedure: k1791 
o|inlining procedure: k1881 
o|inlining procedure: k1881 
o|contracted procedure: "(tcp.scm:489) chicken.tcp#send" 
o|inlining procedure: k1931 
o|inlining procedure: k1931 
o|inlining procedure: "(tcp.scm:532) chicken.tcp#last-error-code" 
o|substituted constant variable: a1966 
o|substituted constant variable: a1967 
o|inlining procedure: "(tcp.scm:531) chicken.tcp#close" 
o|inlining procedure: k1996 
o|inlining procedure: k2001 
o|inlining procedure: k2001 
o|inlining procedure: k1996 
o|inlining procedure: k2021 
o|inlining procedure: k2021 
o|inlining procedure: k2037 
o|inlining procedure: k2037 
o|inlining procedure: k2056 
o|inlining procedure: k2056 
o|inlining procedure: k2078 
o|inlining procedure: k2078 
o|inlining procedure: "(tcp.scm:416) chicken.tcp#last-error-code" 
o|substituted constant variable: a2112 
o|substituted constant variable: a2113 
o|inlining procedure: "(tcp.scm:414) chicken.tcp#check-fd-ready" 
o|inlining procedure: k2117 
o|inlining procedure: k2117 
o|inlining procedure: "(tcp.scm:423) chicken.tcp#last-error-code" 
o|substituted constant variable: a2149 
o|substituted constant variable: a2150 
o|inlining procedure: "(tcp.scm:422) chicken.tcp#close" 
o|inlining procedure: k2170 
o|inlining procedure: k2170 
o|inlining procedure: k2191 
o|inlining procedure: k2191 
o|inlining procedure: k2238 
o|inlining procedure: k2238 
o|inlining procedure: k2253 
o|inlining procedure: k2253 
o|inlining procedure: k2281 
o|inlining procedure: k2281 
o|inlining procedure: k2324 
o|inlining procedure: k2324 
o|inlining procedure: k2369 
o|inlining procedure: k2369 
o|inlining procedure: k2379 
o|inlining procedure: k2379 
o|substituted constant variable: a2385 
o|substituted constant variable: a2407 
o|substituted constant variable: a2408 
o|inlining procedure: "(tcp.scm:365) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:365) chicken.tcp#last-error-code" 
o|inlining procedure: k2445 
o|inlining procedure: k2445 
o|inlining procedure: "(tcp.scm:567) chicken.tcp#last-error-code" 
o|substituted constant variable: a2482 
o|substituted constant variable: a2483 
o|inlining procedure: "(tcp.scm:564) chicken.tcp#interrupted?" 
o|contracted procedure: "(tcp.scm:561) chicken.tcp#accept" 
o|inlining procedure: k1073 
o|inlining procedure: k1073 
o|inlining procedure: k2511 
o|inlining procedure: "(tcp.scm:574) chicken.tcp#last-error-code" 
o|substituted constant variable: a2539 
o|substituted constant variable: a2540 
o|inlining procedure: k2511 
o|inlining procedure: "(tcp.scm:572) chicken.tcp#check-fd-ready" 
o|inlining procedure: k2597 
o|substituted constant variable: a2627 
o|substituted constant variable: a2628 
o|inlining procedure: "(tcp.scm:618) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:618) chicken.tcp#last-error-code" 
o|inlining procedure: k2597 
o|substituted constant variable: a2653 
o|substituted constant variable: a2654 
o|inlining procedure: "(tcp.scm:620) chicken.tcp#close" 
o|contracted procedure: "(tcp.scm:616) chicken.tcp#get-socket-error" 
o|inlining procedure: k2658 
o|inlining procedure: k2682 
o|inlining procedure: k2682 
o|substituted constant variable: a2712 
o|substituted constant variable: a2713 
o|inlining procedure: "(tcp.scm:614) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:614) chicken.tcp#last-error-code" 
o|inlining procedure: "(tcp.scm:611) chicken.tcp#interrupted?" 
o|contracted procedure: "(tcp.scm:606) chicken.tcp#in-progress?" 
o|inlining procedure: k2658 
o|contracted procedure: "(tcp.scm:605) chicken.tcp#connect" 
o|substituted constant variable: a2739 
o|substituted constant variable: a2740 
o|inlining procedure: "(tcp.scm:603) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:603) chicken.tcp#last-error-code" 
o|substituted constant variable: a2765 
o|substituted constant variable: a2766 
o|inlining procedure: "(tcp.scm:601) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:601) chicken.tcp#last-error-code" 
o|inlining procedure: "(tcp.scm:600) chicken.tcp#set-socket-options" 
o|inlining procedure: "(tcp.scm:599) chicken.tcp#last-error-code" 
o|substituted constant variable: a2793 
o|substituted constant variable: a2794 
o|inlining procedure: k2804 
o|inlining procedure: k2804 
o|inlining procedure: k2839 
o|inlining procedure: k2839 
o|substituted constant variable: a2855 
o|inlining procedure: k2873 
o|inlining procedure: k2873 
o|inlining procedure: "(tcp.scm:637) chicken.tcp#last-error-code" 
o|substituted constant variable: a2895 
o|substituted constant variable: a2896 
o|contracted procedure: "(tcp.scm:636) chicken.tcp#getpeername" 
o|inlining procedure: "(tcp.scm:635) chicken.tcp#last-error-code" 
o|substituted constant variable: a2916 
o|substituted constant variable: a2917 
o|contracted procedure: "(tcp.scm:634) chicken.tcp#getsockname" 
o|substituted constant variable: a2922 
o|inlining procedure: k2935 
o|inlining procedure: "(tcp.scm:647) chicken.tcp#last-error-code" 
o|substituted constant variable: a2963 
o|substituted constant variable: a2964 
o|inlining procedure: k2935 
o|inlining procedure: "(tcp.scm:645) chicken.tcp#last-error-code" 
o|substituted constant variable: a2987 
o|substituted constant variable: a2988 
o|contracted procedure: "(tcp.scm:643) chicken.tcp#getpeerport" 
o|inlining procedure: "(tcp.scm:642) chicken.tcp#getsockport" 
o|inlining procedure: k3001 
o|inlining procedure: "(tcp.scm:655) chicken.tcp#last-error-code" 
o|substituted constant variable: a3026 
o|substituted constant variable: a3027 
o|inlining procedure: k3001 
o|inlining procedure: "(tcp.scm:653) chicken.tcp#getsockport" 
o|substituted constant variable: a3032 
o|contracted procedure: "(tcp.scm:236) chicken.tcp#startup" 
o|replaced variables: 299 
o|removed binding forms: 145 
o|removed side-effect free assignment to unused variable: chicken.tcp#last-error-code 
o|removed side-effect free assignment to unused variable: chicken.tcp#retry? 
o|removed side-effect free assignment to unused variable: chicken.tcp#interrupted? 
o|removed side-effect free assignment to unused variable: chicken.tcp#close 
o|removed side-effect free assignment to unused variable: chicken.tcp#check-fd-ready 
o|removed side-effect free assignment to unused variable: chicken.tcp#set-socket-options 
o|removed side-effect free assignment to unused variable: chicken.tcp#getsockport 
o|substituted constant variable: r15683126 
o|substituted constant variable: int171178 
o|substituted constant variable: int170177 
o|inlining procedure: k1881 
o|inlining procedure: k1881 
o|substituted constant variable: flags213221 
o|substituted constant variable: r19973181 
o|substituted constant variable: r19973181 
o|substituted constant variable: r20573187 
o|inlining procedure: k2084 
o|substituted constant variable: r21713208 
o|substituted constant variable: r22543213 
o|substituted constant variable: r23703225 
o|substituted constant variable: r23803227 
o|substituted constant variable: r23803228 
o|substituted constant variable: c-pointer151158 
o|substituted constant variable: c-pointer152159 
o|substituted constant variable: c-pointer152159 
o|substituted constant variable: c-pointer152159 
o|substituted constant variable: r10743242 
o|substituted constant variable: r10743242 
o|substituted constant variable: c-pointer151158 
o|substituted constant variable: c-pointer151158 
o|inlining procedure: k2597 
o|contracted procedure: "(tcp.scm:592) chicken.tcp#parse-host" 
o|substituted constant variable: r12313086 
o|substituted constant variable: r12313086 
o|replaced variables: 94 
o|removed binding forms: 363 
o|removed conditional forms: 2 
o|inlining procedure: k1437 
o|inlining procedure: k1531 
o|inlining procedure: k1604 
o|inlining procedure: k1748 
o|inlining procedure: k1812 
o|inlining procedure: k1858 
o|substituted constant variable: r18823362 
o|inlining procedure: k1963 
o|inlining procedure: k2109 
o|inlining procedure: k2146 
o|inlining procedure: k2479 
o|contracted procedure: k1069 
o|inlining procedure: k2536 
o|inlining procedure: k2790 
o|inlining procedure: k1336 
o|substituted constant variable: proto378 
o|inlining procedure: k2892 
o|inlining procedure: k2913 
o|inlining procedure: k2960 
o|inlining procedure: k2984 
o|inlining procedure: k3023 
o|inlining procedure: k3069 
o|replaced variables: 5 
o|removed binding forms: 132 
o|contracted procedure: k1501 
o|contracted procedure: k1391 
o|contracted procedure: k1696 
o|contracted procedure: k1726 
o|contracted procedure: k1800 
o|contracted procedure: k1830 
o|contracted procedure: k2386 
o|contracted procedure: k2457 
o|substituted constant variable: r1070 
o|substituted constant variable: r1070 
o|contracted procedure: k2606 
o|contracted procedure: k2667 
o|contracted procedure: k2685 
o|contracted procedure: k2691 
o|contracted procedure: k2718 
o|contracted procedure: k2744 
o|simplifications: ((let . 8)) 
o|replaced variables: 1 
o|removed binding forms: 38 
o|removed binding forms: 3 
o|simplifications: ((if . 16) (##core#call . 189)) 
o|  call simplifications:
o|    chicken.fixnum#fx*
o|    scheme#vector?
o|    ##sys#check-string
o|    scheme#char=?
o|    scheme#not
o|    scheme#vector
o|    ##sys#call-with-values	2
o|    chicken.fixnum#fx>=	9
o|    ##sys#setslot	4
o|    scheme#values	11
o|    ##sys#size	7
o|    chicken.fixnum#fxmin	3
o|    chicken.fixnum#fx-	6
o|    chicken.fixnum#fx+	12
o|    chicken.fixnum#fx=
o|    ##sys#setislot	5
o|    ##sys#check-structure	5
o|    ##sys#slot	14
o|    ##sys#structure?
o|    scheme#car	3
o|    scheme#null?	5
o|    scheme#cdr	2
o|    chicken.fixnum#fx<	7
o|    chicken.fixnum#fx>	6
o|    scheme#eq?	26
o|    ##sys#make-structure	2
o|    ##sys#foreign-block-argument	6
o|    ##sys#foreign-string-argument	3
o|    ##sys#foreign-unsigned-ranged-integer-argument	2
o|    ##sys#foreign-fixnum-argument	41
o|contracted procedure: k1005 
o|contracted procedure: k1021 
o|contracted procedure: k1025 
o|contracted procedure: k1029 
o|contracted procedure: k1115 
o|contracted procedure: k1119 
o|contracted procedure: k1251 
o|contracted procedure: k1259 
o|contracted procedure: k1267 
o|contracted procedure: k1558 
o|contracted procedure: k1468 
o|contracted procedure: k1552 
o|contracted procedure: k1471 
o|contracted procedure: k1546 
o|contracted procedure: k1474 
o|contracted procedure: k1540 
o|contracted procedure: k1477 
o|contracted procedure: k1498 
o|contracted procedure: k10863098 
o|contracted procedure: k1054 
o|contracted procedure: k1058 
o|contracted procedure: k1388 
o|contracted procedure: k10863112 
o|contracted procedure: k1036 
o|contracted procedure: k1040 
o|contracted procedure: k1044 
o|contracted procedure: k1418 
o|contracted procedure: k11513122 
o|contracted procedure: k1446 
o|contracted procedure: k1356 
o|contracted procedure: k1360 
o|contracted procedure: k1528 
o|contracted procedure: k1531 
o|contracted procedure: k1576 
o|contracted procedure: k1579 
o|contracted procedure: k1585 
o|contracted procedure: k10863135 
o|contracted procedure: k1633 
o|contracted procedure: k1661 
o|contracted procedure: k1690 
o|contracted procedure: k1714 
o|contracted procedure: k1754 
o|contracted procedure: k1093 
o|contracted procedure: k1097 
o|contracted procedure: k1101 
o|contracted procedure: k1105 
o|contracted procedure: k1775 
o|contracted procedure: k1785 
o|contracted procedure: k1794 
o|contracted procedure: k1818 
o|contracted procedure: k1866 
o|contracted procedure: k1873 
o|contracted procedure: k1877 
o|contracted procedure: k1884 
o|contracted procedure: k1158 
o|contracted procedure: k1162 
o|contracted procedure: k1166 
o|contracted procedure: k1170 
o|contracted procedure: k1174 
o|contracted procedure: k1903 
o|contracted procedure: k1906 
o|contracted procedure: k1909 
o|contracted procedure: k1912 
o|contracted procedure: k1925 
o|contracted procedure: k2032 
o|contracted procedure: k2024 
o|contracted procedure: k2047 
o|contracted procedure: k2040 
o|contracted procedure: k10863176 
o|contracted procedure: k1975 
o|contracted procedure: k1992 
o|contracted procedure: k2012 
o|contracted procedure: k2004 
o|contracted procedure: k2059 
o|contracted procedure: k2063 
o|contracted procedure: k2066 
o|contracted procedure: k2075 
o|contracted procedure: k2090 
o|contracted procedure: k11443197 
o|contracted procedure: k10863206 
o|contracted procedure: k2158 
o|contracted procedure: k2173 
o|contracted procedure: k2176 
o|contracted procedure: k2194 
o|contracted procedure: k2200 
o|contracted procedure: k2203 
o|contracted procedure: k2232 
o|contracted procedure: k2206 
o|contracted procedure: k2210 
o|contracted procedure: k2214 
o|contracted procedure: k2221 
o|contracted procedure: k2225 
o|contracted procedure: k2229 
o|contracted procedure: k2241 
o|contracted procedure: k2256 
o|contracted procedure: k2259 
o|contracted procedure: k2318 
o|contracted procedure: k2272 
o|contracted procedure: k2278 
o|contracted procedure: k2284 
o|contracted procedure: k2294 
o|contracted procedure: k2300 
o|contracted procedure: k2311 
o|contracted procedure: k2307 
o|contracted procedure: k2339 
o|contracted procedure: k2335 
o|contracted procedure: k2328 
o|inlining procedure: k2324 
o|contracted procedure: k2350 
o|contracted procedure: k2354 
o|contracted procedure: k2346 
o|inlining procedure: k2324 
o|contracted procedure: k2360 
o|contracted procedure: k2372 
o|contracted procedure: k2382 
o|contracted procedure: k10863234 
o|contracted procedure: k2412 
o|contracted procedure: k2415 
o|contracted procedure: k2485 
o|contracted procedure: k2448 
o|contracted procedure: k1065 
o|contracted procedure: k2488 
o|contracted procedure: k2505 
o|contracted procedure: k2517 
o|contracted procedure: k2542 
o|contracted procedure: k11443260 
o|contracted procedure: k2827 
o|contracted procedure: k2555 
o|contracted procedure: k2567 
o|contracted procedure: k2603 
o|contracted procedure: k10863271 
o|contracted procedure: k2632 
o|contracted procedure: k10863283 
o|contracted procedure: k2549 
o|contracted procedure: k2661 
o|contracted procedure: k10863292 
o|contracted procedure: k1126 
o|contracted procedure: k1130 
o|contracted procedure: k1134 
o|contracted procedure: k10863301 
o|contracted procedure: k2741 
o|contracted procedure: k10863308 
o|contracted procedure: k11513315 
o|contracted procedure: k2771 
o|contracted procedure: k1276 
o|contracted procedure: k1288 
o|contracted procedure: k1297 
o|contracted procedure: k1317 
o|contracted procedure: k1237 
o|contracted procedure: k1244 
o|contracted procedure: k1342 
o|contracted procedure: k1349 
o|contracted procedure: k2842 
o|contracted procedure: k1213 
o|contracted procedure: k1188 
o|contracted procedure: k2941 
o|contracted procedure: k2965 
o|contracted procedure: k1202 
o|contracted procedure: k11953344 
o|contracted procedure: k2992 
o|contracted procedure: k2995 
o|contracted procedure: k3004 
o|contracted procedure: k11953355 
o|contracted procedure: k3041 
o|contracted procedure: k3047 
o|simplifications: ((let . 25)) 
o|removed binding forms: 163 
o|inlining procedure: k1255 
o|inlining procedure: "(tcp.scm:329) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:317) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:315) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:340) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:395) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:506) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:532) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:530) chicken.tcp#shutdown" 
o|inlining procedure: "(tcp.scm:416) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:423) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:421) chicken.tcp#shutdown" 
o|inlining procedure: "(tcp.scm:365) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:567) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:574) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:618) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:621) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:614) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:603) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:601) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:599) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:290) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:637) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:635) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:647) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:645) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:655) chicken.tcp#error-code->message" 
o|replaced variables: 92 
o|removed binding forms: 1 
o|removed side-effect free assignment to unused variable: chicken.tcp#error-code->message 
o|removed side-effect free assignment to unused variable: chicken.tcp#shutdown 
o|substituted constant variable: r12563486 
o|substituted constant variable: r12563486 
o|inlining procedure: k1972 
o|inlining procedure: k2155 
o|replaced variables: 52 
o|removed binding forms: 67 
o|contracted procedure: k1525 
o|contracted procedure: k1504 
o|contracted procedure: k1415 
o|contracted procedure: k1394 
o|contracted procedure: k1443 
o|inlining procedure: "(tcp.scm:310) chicken.tcp#socket" 
o|contracted procedure: k1610 
o|contracted procedure: k1684 
o|contracted procedure: k1788 
o|contracted procedure: k2081 
o|contracted procedure: k2389 
o|contracted procedure: k2442 
o|contracted procedure: k2508 
o|contracted procedure: k2594 
o|contracted procedure: k2609 
o|contracted procedure: k2635 
o|contracted procedure: k2715 
o|contracted procedure: k2694 
o|contracted procedure: k2721 
o|contracted procedure: k2768 
o|contracted procedure: k2747 
o|inlining procedure: "(tcp.scm:597) chicken.tcp#socket" 
o|contracted procedure: k2926 
o|contracted procedure: k2929 
o|contracted procedure: k2998 
o|removed binding forms: 81 
o|removed side-effect free assignment to unused variable: chicken.tcp#socket 
o|substituted constant variable: int1251303651 
o|substituted constant variable: int1251303668 
o|replaced variables: 5 
o|removed binding forms: 7 
o|contracted procedure: k1376 
o|contracted procedure: k2579 
o|removed binding forms: 2 
o|customizable procedures: (check474 chicken.tcp#tcp-port->fileno k2561 loop380 k2421 chicken.tcp#io-ports k1667 loop557 k2121 k2127 read-input507 k1981 k1935 k1938 k1944 output595 k1779 loop598 k1675 chicken.tcp#gethostaddr) 
o|calls to known targets: 84 
o|identified direct recursive calls: f_1783 2 
o|identified direct recursive calls: f_2189 1 
o|identified direct recursive calls: f_1283 1 
o|fast box initializations: 7 
o|fast global references: 7 
o|fast global assignments: 3 
o|dropping unused closure argument: f_1248 
o|dropping unused closure argument: f_1622 
o|dropping unused closure argument: f_2834 
*/
/* end of file */

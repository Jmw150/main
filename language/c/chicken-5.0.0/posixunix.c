/* Generated from posix.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: posix.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file posixunix.c -feature platform-unix -emit-import-library chicken.errno -emit-import-library chicken.file.posix -emit-import-library chicken.time.posix -emit-import-library chicken.process -emit-import-library chicken.process.signal -emit-import-library chicken.process-context.posix -no-module-registration
   unit: posix
   uses: scheduler pathname extras port lolevel library
*/
#include "chicken.h"


#include <signal.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

static C_TLS struct stat C_statbuf;

#define C_stat_type         (C_statbuf.st_mode & S_IFMT)
#define C_stat_perm         (C_statbuf.st_mode & ~S_IFMT)

#define C_u_i_stat(fn)      C_fix(C_stat(C_c_string(fn), &C_statbuf))
#define C_u_i_fstat(fd)     C_fix(fstat(C_unfix(fd), &C_statbuf))

#ifndef S_IFSOCK
# define S_IFSOCK           0140000
#endif

#define cpy_tmvec_to_tmstc08(ptm, v) \
    ((ptm)->tm_sec = C_unfix(C_block_item((v), 0)), \
    (ptm)->tm_min = C_unfix(C_block_item((v), 1)), \
    (ptm)->tm_hour = C_unfix(C_block_item((v), 2)), \
    (ptm)->tm_mday = C_unfix(C_block_item((v), 3)), \
    (ptm)->tm_mon = C_unfix(C_block_item((v), 4)), \
    (ptm)->tm_year = C_unfix(C_block_item((v), 5)), \
    (ptm)->tm_wday = C_unfix(C_block_item((v), 6)), \
    (ptm)->tm_yday = C_unfix(C_block_item((v), 7)), \
    (ptm)->tm_isdst = (C_block_item((v), 8) != C_SCHEME_FALSE))

#define cpy_tmvec_to_tmstc9(ptm, v) \
    (((struct tm *)ptm)->tm_gmtoff = -C_unfix(C_block_item((v), 9)))

#define C_tm_set_08(v, tm)  cpy_tmvec_to_tmstc08( (tm), (v) )
#define C_tm_set_9(v, tm)   cpy_tmvec_to_tmstc9( (tm), (v) )

static struct tm *
C_tm_set( C_word v, void *tm )
{
  C_tm_set_08( v, (struct tm *)tm );
#if defined(C_GNU_ENV) && !defined(__CYGWIN__) && !defined(__uClinux__)
  C_tm_set_9( v, (struct tm *)tm );
#endif
  return tm;
}

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

#define C_strftime(v, f, tm) \
        (strftime(C_time_string, sizeof(C_time_string), C_c_string(f), C_tm_set((v), (tm))) ? C_time_string : NULL)
#define C_a_mktime(ptr, c, v, tm)  C_int64_to_num(ptr, mktime(C_tm_set((v), C_data_pointer(tm))))
#define C_asctime(v, tm)    (asctime(C_tm_set((v), (tm))))

#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_dup(x)            C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)        C_fix(dup2(C_unfix(x), C_unfix(y)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(a, n, p)    C_int64_to_num(a, ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int64(n), C_unfix(w)))
#define C_lseek(fd, o, w)     C_fix(lseek(C_unfix(fd), C_num_to_int64(o), C_unfix(w)))

#ifndef S_IFLNK
#define S_IFLNK S_IFREG
#endif

#ifndef S_IFREG
#define S_IFREG S_IFREG
#endif

#ifndef S_IFDIR
#define S_IFDIR S_IFREG
#endif

#ifndef S_IFCHR
#define S_IFCHR S_IFREG
#endif

#ifndef S_IFBLK
#define S_IFBLK S_IFREG
#endif

#ifndef S_IFSOCK
#define S_IFSOCK S_IFREG
#endif

#ifndef S_IFIFO
#define S_IFIFO S_IFREG
#endif



static C_TLS int C_wait_status;

#include <sys/time.h>
#include <sys/wait.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <utime.h>

#if defined(__sun) && defined(__SVR4)
# include <sys/tty.h>
# include <termios.h>
#endif

#include <sys/mman.h>
#include <poll.h>

#ifndef O_FSYNC
# define O_FSYNC O_SYNC
#endif

#ifndef PIPE_BUF
# ifdef __CYGWIN__
#  define PIPE_BUF       _POSIX_PIPE_BUF
# else
#  define PIPE_BUF 1024
# endif
#endif

#ifndef O_BINARY
# define O_BINARY        0
#endif
#ifndef O_TEXT
# define O_TEXT          0
#endif

#ifndef MAP_FILE
# define MAP_FILE    0
#endif

#ifndef MAP_ANON
# define MAP_ANON    0
#endif

#ifndef FILENAME_MAX
# define FILENAME_MAX          1024
#endif

static C_TLS struct flock C_flock;
static C_TLS DIR *temphandle;
static C_TLS struct passwd *C_user;

/* Android doesn't provide pw_gecos in the passwd struct */
#ifdef __ANDROID__
# define C_PW_GECOS ("")
#else
# define C_PW_GECOS (C_user->pw_gecos)
#endif

static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct timeval C_timeval;
static C_TLS struct stat C_statbuf;

#define C_fchdir(fd)        C_fix(fchdir(C_unfix(fd)))

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(pclose(C_port_file(p)))

#define C_fork              fork
#define C_waitpid(id, o)    C_fix(waitpid(C_unfix(id), &C_wait_status, C_unfix(o)))
#define C_getppid           getppid
#define C_kill(id, s)       C_fix(kill(C_unfix(id), C_unfix(s)))
#define C_getuid            getuid
#define C_getgid            getgid
#define C_geteuid           geteuid
#define C_getegid           getegid
#define C_chown(fn, u, g)   C_fix(chown(C_c_string(fn), C_unfix(u), C_unfix(g)))
#define C_fchown(fd, u, g)  C_fix(fchown(C_unfix(fd), C_unfix(u), C_unfix(g)))
#define C_chmod(fn, m)      C_fix(chmod(C_c_string(fn), C_unfix(m)))
#define C_fchmod(fd, m)     C_fix(fchmod(C_unfix(fd), C_unfix(m)))
#define C_setuid(id)        C_fix(setuid(C_unfix(id)))
#define C_setgid(id)        C_fix(setgid(C_unfix(id)))
#define C_seteuid(id)       C_fix(seteuid(C_unfix(id)))
#define C_setegid(id)       C_fix(setegid(C_unfix(id)))
#define C_setsid(dummy)     C_fix(setsid())
#define C_setpgid(x, y)     C_fix(setpgid(C_unfix(x), C_unfix(y)))
#define C_getpgid(x)        C_fix(getpgid(C_unfix(x)))
#define C_symlink(o, n)     C_fix(symlink(C_c_string(o), C_c_string(n)))
#define C_do_readlink(f, b) C_fix(readlink(C_c_string(f), C_c_string(b), FILENAME_MAX))
#define C_getpwnam(n)       C_mk_bool((C_user = getpwnam(C_c_string(n))) != NULL)
#define C_getpwuid(u)       C_mk_bool((C_user = getpwuid(C_unfix(u))) != NULL)
#define C_pipe(d)           C_fix(pipe(C_pipefds))
#define C_truncate(f, n)    C_fix(truncate(C_c_string(f), C_num_to_int(n)))
#define C_ftruncate(f, n)   C_fix(ftruncate(C_unfix(f), C_num_to_int(n)))
#define C_alarm             alarm
#define C_close(fd)         C_fix(close(C_unfix(fd)))
#define C_umask(m)          C_fix(umask(C_unfix(m)))

#define C_u_i_lstat(fn)     C_fix(lstat(C_c_string(fn), &C_statbuf))

#define C_u_i_execvp(f,a)   C_fix(execvp(C_c_string(f), (char *const *)C_c_pointer_vector_or_null(a)))
#define C_u_i_execve(f,a,e) C_fix(execve(C_c_string(f), (char *const *)C_c_pointer_vector_or_null(a), (char *const *)C_c_pointer_vector_or_null(e)))

#if defined(__FreeBSD__) || defined(C_MACOSX) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__sgi__) || defined(sgi) || defined(__DragonFly__) || defined(__SUNPRO_C)
static C_TLS int C_uw;
# define C_WIFEXITED(n)      (C_uw = C_unfix(n), C_mk_bool(WIFEXITED(C_uw)))
# define C_WIFSIGNALED(n)    (C_uw = C_unfix(n), C_mk_bool(WIFSIGNALED(C_uw)))
# define C_WIFSTOPPED(n)     (C_uw = C_unfix(n), C_mk_bool(WIFSTOPPED(C_uw)))
# define C_WEXITSTATUS(n)    (C_uw = C_unfix(n), C_fix(WEXITSTATUS(C_uw)))
# define C_WTERMSIG(n)       (C_uw = C_unfix(n), C_fix(WTERMSIG(C_uw)))
# define C_WSTOPSIG(n)       (C_uw = C_unfix(n), C_fix(WSTOPSIG(C_uw)))
#else
# define C_WIFEXITED(n)      C_mk_bool(WIFEXITED(C_unfix(n)))
# define C_WIFSIGNALED(n)    C_mk_bool(WIFSIGNALED(C_unfix(n)))
# define C_WIFSTOPPED(n)     C_mk_bool(WIFSTOPPED(C_unfix(n)))
# define C_WEXITSTATUS(n)    C_fix(WEXITSTATUS(C_unfix(n)))
# define C_WTERMSIG(n)       C_fix(WTERMSIG(C_unfix(n)))
# define C_WSTOPSIG(n)       C_fix(WSTOPSIG(C_unfix(n)))
#endif

#ifdef __CYGWIN__
# define C_mkfifo(fn, m)    C_fix(-1);
#else
# define C_mkfifo(fn, m)    C_fix(mkfifo(C_c_string(fn), C_unfix(m)))
#endif

#define C_flock_setup(t, s, n) (C_flock.l_type = C_unfix(t), C_flock.l_start = C_num_to_int(s), C_flock.l_whence = SEEK_SET, C_flock.l_len = C_num_to_int(n), C_SCHEME_UNDEFINED)
#define C_flock_test(p)     (fcntl(fileno(C_port_file(p)), F_GETLK, &C_flock) >= 0 ? (C_flock.l_type == F_UNLCK ? C_fix(0) : C_fix(C_flock.l_pid)) : C_SCHEME_FALSE)
#define C_flock_lock(p)     C_fix(fcntl(fileno(C_port_file(p)), F_SETLK, &C_flock))
#define C_flock_lockw(p)    C_fix(fcntl(fileno(C_port_file(p)), F_SETLKW, &C_flock))

static C_TLS sigset_t C_sigset;
#define C_sigemptyset(d)    (sigemptyset(&C_sigset), C_SCHEME_UNDEFINED)
#define C_sigaddset(s)      (sigaddset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigdelset(s)      (sigdelset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigismember(s)    C_mk_bool(sigismember(&C_sigset, C_unfix(s)))
#define C_sigprocmask_set(d)        C_fix(sigprocmask(SIG_SETMASK, &C_sigset, NULL))
#define C_sigprocmask_block(d)      C_fix(sigprocmask(SIG_BLOCK, &C_sigset, NULL))
#define C_sigprocmask_unblock(d)    C_fix(sigprocmask(SIG_UNBLOCK, &C_sigset, NULL))
#define C_sigprocmask_get(d)        C_fix(sigprocmask(SIG_SETMASK, NULL, &C_sigset))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)        C_fix(mkstemp(C_c_string(t)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#if defined(__SVR4) || defined(C_MACOSX) || defined(__ANDROID__) || defined(_AIX)
/* Seen here: http://lists.samba.org/archive/samba-technical/2002-November/025571.html */

static time_t C_timegm(struct tm *t)
{
  time_t tl, tb;
  struct tm *tg;

  tl = mktime (t);
  if (tl == -1)
    {
      t->tm_hour--;
      tl = mktime (t);
      if (tl == -1)
        return -1; /* can't deal with output from strptime */
      tl += 3600;
    }
  tg = gmtime (&tl);
  tg->tm_isdst = 0;
  tb = mktime (tg);
  if (tb == -1)
    {
      tg->tm_hour--;
      tb = mktime (tg);
      if (tb == -1)
        return -1; /* can't deal with output from gmtime */
      tb += 3600;
    }
  return (tl - (tb - tl));
}
#else
#define C_timegm timegm
#endif

#define C_a_timegm(ptr, c, v, tm)  C_int64_to_num(ptr, C_timegm(C_tm_set((v), C_data_pointer(tm))))

#ifdef __linux__
extern char *strptime(const char *s, const char *format, struct tm *tm);
extern pid_t getpgid(pid_t pid);
#endif

/* tm_get could be in posix-common, but it's only used in here */
#define cpy_tmstc08_to_tmvec(v, ptm) \
    (C_set_block_item((v), 0, C_fix(((struct tm *)ptm)->tm_sec)), \
    C_set_block_item((v), 1, C_fix((ptm)->tm_min)), \
    C_set_block_item((v), 2, C_fix((ptm)->tm_hour)), \
    C_set_block_item((v), 3, C_fix((ptm)->tm_mday)), \
    C_set_block_item((v), 4, C_fix((ptm)->tm_mon)), \
    C_set_block_item((v), 5, C_fix((ptm)->tm_year)), \
    C_set_block_item((v), 6, C_fix((ptm)->tm_wday)), \
    C_set_block_item((v), 7, C_fix((ptm)->tm_yday)), \
    C_set_block_item((v), 8, ((ptm)->tm_isdst ? C_SCHEME_TRUE : C_SCHEME_FALSE)))

#define cpy_tmstc9_to_tmvec(v, ptm) \
    (C_set_block_item((v), 9, C_fix(-(ptm)->tm_gmtoff)))

#define C_tm_get_08(v, tm)  cpy_tmstc08_to_tmvec( (v), (tm) )
#define C_tm_get_9(v, tm)   cpy_tmstc9_to_tmvec( (v), (tm) )

static C_word
C_tm_get( C_word v, void *tm )
{
  C_tm_get_08( v, (struct tm *)tm );
#if defined(C_GNU_ENV) && !defined(__CYGWIN__) && !defined(__uClinux__)
  C_tm_get_9( v, (struct tm *)tm );
#endif
  return v;
}

#define C_strptime(s, f, v, stm) \
        (strptime(C_c_string(s), C_c_string(f), ((struct tm *)(stm))) ? C_tm_get((v), (stm)) : C_SCHEME_FALSE)

static int set_file_mtime(char *filename, C_word atime, C_word mtime)
{
  struct stat sb;
  struct utimbuf tb;

  /* Only lstat if needed */
  if (atime == C_SCHEME_FALSE || mtime == C_SCHEME_FALSE) {
    if (lstat(filename, &sb) == -1) return -1;
  }

  if (atime == C_SCHEME_FALSE) {
    tb.actime = sb.st_atime;
  } else {
    tb.actime = C_num_to_int64(atime);
  }
  if (mtime == C_SCHEME_FALSE) {
    tb.modtime = sb.st_mtime;
  } else {
    tb.modtime = C_num_to_int64(mtime);
  }
  return utime(filename, &tb);
}



static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externimport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[493];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,115,121,115,116,101,109,32,99,109,100,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,115,121,115,116,101,109,42,32,115,116,114,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,8),40,103,50,53,54,32,99,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,50,53,48,32,103,50,54,50,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,113,115,32,115,116,114,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,46,32,97,114,103,115,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,115,116,97,116,32,102,105,108,101,32,108,105,110,107,32,101,114,114,32,108,111,99,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,116,97,116,32,102,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,112,101,114,109,105,115,115,105,111,110,115,33,32,102,32,112,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,109,111,100,105,102,105,99,97,116,105,111,110,45,116,105,109,101,32,102,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,97,99,99,101,115,115,45,116,105,109,101,32,102,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,104,97,110,103,101,45,116,105,109,101,32,102,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,116,105,109,101,115,33,32,102,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,105,122,101,32,102,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,111,119,110,101,114,33,32,102,32,117,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,103,114,111,117,112,33,32,102,32,103,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,121,112,101,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,114,101,103,117,108,97,114,45,102,105,108,101,63,32,102,105,108,101,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,105,108,101,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,98,108,111,99,107,45,100,101,118,105,99,101,63,32,102,105,108,101,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,104,97,114,97,99,116,101,114,45,100,101,118,105,99,101,63,32,102,105,108,101,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,102,111,63,32,102,105,108,101,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,111,99,107,101,116,63,32,102,105,108,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,100,105,114,101,99,116,111,114,121,63,32,102,105,108,101,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,57),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,32,112,111,115,32,46,32,119,104,101,110,99,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,16),40,109,111,100,101,32,105,110,112,32,109,32,108,111,99,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,20),40,99,104,101,99,107,32,108,111,99,32,102,100,32,105,110,112,32,114,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,32,46,32,109,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,32,46,32,109,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,32,46,32,110,101,119,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,42,32,102,100,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,45,104,111,111,107,32,100,105,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),67,95,100,101,99,111,100,101,95,115,101,99,111,110,100,115};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,32,116,109,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,32,112,114,111,99,41,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,108,101,101,112,32,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,51,56,56,54,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,24),40,97,51,56,57,50,32,101,112,105,100,32,101,110,111,114,109,32,101,99,111,100,101,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,51,57,54,49,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,11),40,97,51,57,53,53,32,101,120,110,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,57,48,32,115,108,32,105,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,50,53,50,56,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,52,48,51,53,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,116,109,112,50,50,53,50,57,32,97,114,103,115,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,51,57,55,48,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,9),40,97,51,57,52,57,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,61),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,108,105,115,116,45,62,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,115,116,114,105,110,103,45,108,105,115,116,32,99,111,110,118,101,114,116,32,108,111,99,41,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,49,48,48,57,32,105,41,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,102,114,101,101,45,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,98,117,102,102,101,114,45,97,114,114,97,121,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,103,49,48,50,50,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,50,49,41,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,101,99,107,45,101,110,118,105,114,111,110,109,101,110,116,45,108,105,115,116,32,108,115,116,32,108,111,99,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,7),40,110,111,112,32,120,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,7),40,97,52,49,54,51,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,11),40,97,52,49,53,55,32,101,120,110,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,54,53,32,103,49,48,55,55,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,7),40,97,52,49,56,52,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,97,52,50,54,53,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,14),40,97,52,50,53,57,32,46,32,97,114,103,115,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,7),40,97,52,49,55,56,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,9),40,97,52,49,53,49,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,77),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,97,108,108,45,119,105,116,104,45,101,120,101,99,45,97,114,103,115,32,108,111,99,32,102,105,108,101,110,97,109,101,32,97,114,103,99,111,110,118,32,97,114,103,108,105,115,116,32,101,110,118,108,105,115,116,32,112,114,111,99,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,21),40,99,104,101,99,107,32,108,111,99,32,99,109,100,32,105,110,112,32,114,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,97,52,52,50,56,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,17),40,97,52,52,51,57,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,7),40,97,52,52,51,51,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,52,52,52,56,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,7),40,97,52,52,54,50,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,17),40,97,52,52,54,56,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,97,52,52,56,54,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,17),40,97,52,52,57,50,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,97,52,53,49,48,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,17),40,97,52,53,50,49,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,7),40,97,52,53,49,53,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,7),40,97,52,53,51,48,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,102,105,108,101,45,110,111,110,98,108,111,99,107,105,110,103,33,32,102,100,49,50,54,52,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,108,101,45,115,101,108,101,99,116,45,111,110,101,32,105,110,116,49,50,54,57,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,111,110,116,114,111,108,32,102,100,32,99,109,100,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,32,102,108,97,103,115,32,46,32,109,111,100,101,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,108,111,115,101,32,102,100,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,114,101,97,100,32,102,100,32,115,105,122,101,32,46,32,98,117,102,102,101,114,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,119,114,105,116,101,32,102,100,32,98,117,102,102,101,114,32,46,32,115,105,122,101,41};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,41,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,51,54,51,32,102,100,115,114,108,41,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,51,54,52,32,102,100,115,119,108,41,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,14),40,108,112,32,105,32,114,101,115,32,102,100,115,41,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,14),40,108,112,32,105,32,114,101,115,32,102,100,115,41,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,101,108,101,99,116,32,102,100,115,114,32,102,100,115,119,32,46,32,116,105,109,101,111,117,116,41,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,114,101,97,116,101,45,112,105,112,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,52,55,55,32,103,49,52,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,115,41,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,115,105,103,41,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,115,105,103,41,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,60),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,117,115,101,114,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,59),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,111,119,110,32,108,111,99,32,102,32,117,105,100,32,103,105,100,41,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,101,115,115,105,111,110,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,111,108,100,32,110,101,119,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,32,108,111,99,97,116,105,111,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,7),40,97,53,53,51,54,41,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,99,111,109,112,111,110,101,110,116,115,32,114,101,115,117,108,116,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,55),40,97,53,53,52,50,32,98,97,115,101,45,111,114,105,103,105,110,32,98,97,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,101,99,116,111,114,121,45,99,111,109,112,111,110,101,110,116,115,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,105,110,107,32,111,108,100,32,110,101,119,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,8),40,114,101,97,100,121,63,41};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,7),40,102,101,116,99,104,41,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,7),40,97,53,56,51,56,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,7),40,97,53,56,54,51,41,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,7),40,97,53,56,55,53,41,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,7),40,97,53,56,57,49,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,32,109,32,115,116,97,114,116,41};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,25),40,97,53,57,48,54,32,112,111,114,116,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,11),40,97,54,48,49,48,32,112,111,115,41,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,7),40,97,54,48,48,48,41,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,28),40,97,54,48,53,54,32,110,101,120,116,32,108,105,110,101,32,102,117,108,108,45,108,105,110,101,63,41,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,15),40,97,53,57,56,50,32,112,32,108,105,109,105,116,41,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,12),40,97,54,49,48,49,32,112,111,114,116,41,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,99,117,115,116,111,109,45,105,110,112,117,116,45,112,111,114,116,32,108,111,99,32,110,97,109,32,102,100,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,18),40,112,111,107,101,49,55,54,50,32,115,116,114,32,108,101,110,41,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,11),40,97,54,50,55,55,32,115,116,114,41,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,7),40,97,54,50,56,51,41,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,7),40,97,54,50,57,57,41,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,12),40,102,95,54,51,48,56,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,114,101,109,32,115,116,97,114,116,32,108,101,110,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,12),40,102,95,54,51,50,51,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,99,117,115,116,111,109,45,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,32,110,97,109,32,102,100,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,114,117,110,99,97,116,101,32,102,110,97,109,101,32,111,102,102,41,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,21),40,115,101,116,117,112,32,112,111,114,116,32,97,114,103,115,32,108,111,99,41,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,18),40,101,114,114,32,109,115,103,32,108,111,99,107,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,32,112,111,114,116,32,46,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,112,111,114,116,32,46,32,97,114,103,115,41,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,112,111,114,116,32,46,32,97,114,103,115,41,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,7),40,97,54,54,54,55,41,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,117,110,108,111,99,107,32,108,111,99,107,41,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,102,105,102,111,32,102,110,97,109,101,32,46,32,109,111,100,101,41,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,116,114,105,110,103,45,62,116,105,109,101,32,116,105,109,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,41,0,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,97,108,97,114,109,33,32,105,110,116,49,57,50,53,41,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,14),40,102,95,54,56,53,56,32,116,104,117,110,107,41,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,7),40,97,54,56,52,57,41,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,7),40,97,54,56,52,51,41,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,9),40,97,54,57,50,49,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,25),40,97,54,57,50,52,32,112,114,103,32,97,114,103,98,117,102,32,101,110,118,98,117,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,7),40,97,54,57,57,49,41,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,119,97,105,116,45,105,109,112,108,32,112,105,100,32,110,111,104,97,110,103,41,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,105,100,32,46,32,115,105,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,114,117,110,32,102,32,46,32,97,114,103,115,41,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,7),40,97,55,49,50,55,41,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,17),40,97,55,49,51,51,32,95,32,102,108,103,32,99,111,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,8),40,102,95,55,49,49,51,41};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,44),40,109,97,107,101,45,111,110,45,99,108,111,115,101,32,108,111,99,32,112,105,100,32,99,108,115,118,101,99,32,105,100,120,32,105,100,120,97,32,105,100,120,98,41,0,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,7),40,97,55,49,53,54,41,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,11),40,97,55,49,54,50,32,105,32,111,41,0,0,0,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,18),40,110,101,101,100,101,100,45,112,105,112,101,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,26),40,99,111,110,110,101,99,116,45,112,97,114,101,110,116,32,112,105,112,101,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,31),40,99,111,110,110,101,99,116,45,99,104,105,108,100,32,112,105,112,101,32,112,111,114,116,32,115,116,100,102,100,41,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,14),40,115,119,97,112,112,101,100,45,101,110,100,115,41,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,7),40,97,55,50,51,49,41,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,43),40,115,112,97,119,110,32,99,109,100,32,97,114,103,115,32,101,110,118,32,115,116,100,111,117,116,102,32,115,116,100,105,110,102,32,115,116,100,101,114,114,102,41,0,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,39),40,105,110,112,117,116,45,112,111,114,116,32,108,111,99,32,99,109,100,32,112,105,112,101,32,115,116,100,102,32,111,110,45,99,108,111,115,101,41,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,40),40,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,32,99,109,100,32,112,105,112,101,32,115,116,100,102,32,111,110,45,99,108,111,115,101,41};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,7),40,97,55,50,56,49,41,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,34),40,97,55,50,56,55,32,105,110,112,105,112,101,32,111,117,116,112,105,112,101,32,101,114,114,112,105,112,101,32,112,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,68),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,105,109,112,108,32,108,111,99,32,99,109,100,32,97,114,103,115,32,101,110,118,32,115,116,100,111,117,116,102,32,115,116,100,105,110,102,32,115,116,100,101,114,114,102,41,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,7),40,103,50,49,50,49,41,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,50,48,41,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,15),40,99,104,107,115,116,114,108,115,116,32,108,115,116,41,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,7),40,97,55,51,56,50,41,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,34),40,37,112,114,111,99,101,115,115,32,108,111,99,32,101,114,114,63,32,99,109,100,32,97,114,103,115,32,101,110,118,32,107,41,0,0,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,15),40,97,55,52,50,54,32,105,32,111,32,112,32,101,41,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,42,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,100,105,114,41,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,112,97,119,110,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,21),40,99,104,105,99,107,101,110,46,101,114,114,110,111,35,101,114,114,110,111,41,0,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,11),40,97,55,54,49,53,32,112,105,100,41,0,0,0,0,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,16),40,97,55,54,51,51,32,112,105,100,32,112,103,105,100,41};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,7),40,97,55,54,53,53,41,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,10),40,97,55,54,53,56,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,7),40,97,55,54,55,52,41,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,10),40,97,55,54,55,55,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,7),40,97,55,54,57,51,41,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,10),40,97,55,54,57,54,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,7),40,97,55,55,49,50,41,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,10),40,97,55,55,49,53,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,115,105,103,115,32,109,97,115,107,41};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,7),40,97,55,55,51,49,41,0};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,11),40,97,55,55,54,49,32,115,105,103,41,0,0,0,0,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,14),40,97,55,55,55,48,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,10),40,97,55,55,57,53,32,117,109,41,0,0,0,0,0,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,12),40,97,55,56,48,49,32,112,111,114,116,41,0,0,0,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,9),40,97,55,56,51,55,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,9),40,97,55,56,52,51,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,9),40,97,55,56,52,57,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k7532 in chicken.process-context.posix#set-root-directory! in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
C_regparm static C_word C_fcall stub2191(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from chicken.process-context.posix#parent-process-id in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
C_regparm static C_word C_fcall stub1996(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from k6816 */
C_regparm static C_word C_fcall stub1950(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_r=C_fix((C_word)C_fflush(t0));
return C_r;}

/* from fork */
C_regparm static C_word C_fcall stub1930(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

/* from k6793 */
C_regparm static C_word C_fcall stub1926(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1922(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;

#if !defined(__CYGWIN__) && !defined(__SVR4) && !defined(__uClinux__) && !defined(__hpux__) && !defined(_AIX)

time_t clock = time(NULL);
struct tm *ltm = C_localtime(&clock);
char *z = ltm ? (char *)ltm->tm_zone : 0;

#else

char *z = (daylight ? tzname[1] : tzname[0]);

#endif

C_return(z);
C_ret:
#undef return

return C_r;}

/* from k6722 */
C_regparm static C_word C_fcall stub1895(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
void * t3=(void * )C_data_pointer_or_null(C_a3);
C_r=((C_word)C_strptime(t0,t1,t2,t3));
return C_r;}

/* from k5626 in k5622 in chicken.file.posix#file-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
C_regparm static C_word C_fcall stub1611(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from a7655 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
C_regparm static C_word C_fcall stub1527(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from a7674 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
C_regparm static C_word C_fcall stub1523(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from a7693 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
C_regparm static C_word C_fcall stub1519(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from a7712 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
C_regparm static C_word C_fcall stub1515(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1449(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
void * p=(void * )C_data_pointer_or_null(C_a1);
struct pollfd *fds = p;
C_return(fds[i].revents & (POLLOUT|POLLERR|POLLHUP|POLLNVAL));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1430(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
void * p=(void * )C_data_pointer_or_null(C_a1);
struct pollfd *fds = p;
C_return(fds[i].revents & (POLLIN|POLLERR|POLLHUP|POLLNVAL));
C_ret:
#undef return

return C_r;}

/* from k4828 */
C_regparm static C_word C_fcall stub1405(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)poll(t0,t1,t2));
return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1390(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
int fd=(int )C_unfix(C_a1);
void * p=(void * )C_data_pointer_or_null(C_a2);
struct pollfd *fds = p;
fds[i].fd = fd; fds[i].events = POLLOUT;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1373(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
int fd=(int )C_unfix(C_a1);
void * p=(void * )C_data_pointer_or_null(C_a2);
struct pollfd *fds = p;
fds[i].fd = fd; fds[i].events = POLLIN;
C_ret:
#undef return

return C_r;}

/* from k4579 */
C_regparm static C_word C_fcall stub1277(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

/* from k4546 */
C_regparm static C_word C_fcall stub1270(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_check_fd_ready(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1265(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);
if(val == -1) C_return(0);
C_return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub973(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word o=(C_word )(C_a0);
char *ptr = C_malloc(C_header_size(o)); 

if (ptr != NULL) {

  C_memcpy(ptr, C_data_pointer(o), C_header_size(o)); 

}

C_return(ptr);
C_ret:
#undef return

return C_r;}

/* from k3772 */
C_regparm static C_word C_fcall stub916(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_data_pointer_or_null(C_a2);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1,t2));
return C_r;}

/* from k3759 */
C_regparm static C_word C_fcall stub906(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0,t1));
return C_r;}

/* from k3692 */
C_regparm static C_word C_fcall stub879(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from chicken.process-context.posix#current-process-id in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
C_regparm static C_word C_fcall stub823(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k3109 in k3103 in k3100 in k3088 in chicken.file.posix#set-file-times! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
C_regparm static C_word C_fcall stub707(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
C_r=C_fix((C_word)set_file_mtime(t0,t1,t2));
return C_r;}

/* from k2939 */
C_regparm static C_word C_fcall stub633(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word *av) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word *av) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word *av) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word *av) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word *av) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word *av) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word *av) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word *av) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word *av) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word *av) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word *av) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word *av) C_noret;
C_noret_decl(f_2769)
static void C_fcall f_2769(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word *av) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word *av) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word *av) C_noret;
C_noret_decl(f_2810)
static void C_fcall f_2810(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word *av) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word *av) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word *av) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word *av) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word *av) C_noret;
C_noret_decl(f_2960)
static void C_fcall f_2960(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word *av) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word *av) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word *av) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word *av) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word *av) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word *av) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word *av) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word *av) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word *av) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word *av) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word *av) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word *av) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word *av) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word *av) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word *av) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word *av) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word *av) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word *av) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word *av) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word *av) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word *av) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word *av) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word *av) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word *av) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word *av) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word *av) C_noret;
C_noret_decl(f_3290)
static void C_ccall f_3290(C_word c,C_word *av) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word *av) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word *av) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word *av) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word *av) C_noret;
C_noret_decl(f_3312)
static void C_ccall f_3312(C_word c,C_word *av) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word *av) C_noret;
C_noret_decl(f_3322)
static void C_ccall f_3322(C_word c,C_word *av) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word *av) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word *av) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word *av) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word *av) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word *av) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word *av) C_noret;
C_noret_decl(f_3359)
static void C_fcall f_3359(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word *av) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word *av) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word *av) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word *av) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word *av) C_noret;
C_noret_decl(f_3432)
static void C_fcall f_3432(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word *av) C_noret;
C_noret_decl(f_3469)
static void C_fcall f_3469(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word *av) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word *av) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word *av) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word *av) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word *av) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word *av) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word *av) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word *av) C_noret;
C_noret_decl(f_3532)
static void C_ccall f_3532(C_word c,C_word *av) C_noret;
C_noret_decl(f_3541)
static void C_ccall f_3541(C_word c,C_word *av) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word *av) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word *av) C_noret;
C_noret_decl(f_3565)
static void C_ccall f_3565(C_word c,C_word *av) C_noret;
C_noret_decl(f_3568)
static void C_fcall f_3568(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word *av) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586(C_word c,C_word *av) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word *av) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word *av) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word *av) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word *av) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word *av) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_3624)
static void C_fcall f_3624(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word *av) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word *av) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word *av) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word *av) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word *av) C_noret;
C_noret_decl(f_3671)
static void C_ccall f_3671(C_word c,C_word *av) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word *av) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word *av) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word *av) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706(C_word c,C_word *av) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word *av) C_noret;
C_noret_decl(f_3738)
static void C_ccall f_3738(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word *av) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word *av) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word *av) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word *av) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word *av) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word *av) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word *av) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word *av) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word *av) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word *av) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word *av) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word *av) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word *av) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word *av) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word *av) C_noret;
C_noret_decl(f_3934)
static void C_fcall f_3934(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word *av) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word *av) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word *av) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word *av) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word *av) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word *av) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word *av) C_noret;
C_noret_decl(f_3973)
static void C_fcall f_3973(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word *av) C_noret;
C_noret_decl(f_3979)
static void C_fcall f_3979(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word *av) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word *av) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word *av) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020(C_word c,C_word *av) C_noret;
C_noret_decl(f_4030)
static void C_fcall f_4030(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4051)
static void C_fcall f_4051(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word *av) C_noret;
C_noret_decl(f_4060)
static void C_fcall f_4060(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word *av) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word *av) C_noret;
C_noret_decl(f_4085)
static void C_fcall f_4085(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4090)
static C_word C_fcall f_4090(C_word t0,C_word t1);
C_noret_decl(f_4109)
static C_word C_fcall f_4109(C_word t0,C_word t1);
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word *av) C_noret;
C_noret_decl(f_4134)
static void C_fcall f_4134(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word *av) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word *av) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word *av) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word *av) C_noret;
C_noret_decl(f_4158)
static void C_ccall f_4158(C_word c,C_word *av) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word *av) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word *av) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word *av) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179(C_word c,C_word *av) C_noret;
C_noret_decl(f_4185)
static void C_ccall f_4185(C_word c,C_word *av) C_noret;
C_noret_decl(f_4189)
static void C_fcall f_4189(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word *av) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word *av) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word *av) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word *av) C_noret;
C_noret_decl(f_4226)
static void C_fcall f_4226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word *av) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word *av) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word *av) C_noret;
C_noret_decl(f_4291)
static void C_fcall f_4291(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304(C_word c,C_word *av) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word *av) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word *av) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word *av) C_noret;
C_noret_decl(f_4341)
static void C_ccall f_4341(C_word c,C_word *av) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word *av) C_noret;
C_noret_decl(f_4364)
static void C_ccall f_4364(C_word c,C_word *av) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word *av) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word *av) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word *av) C_noret;
C_noret_decl(f_4397)
static void C_ccall f_4397(C_word c,C_word *av) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word *av) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word *av) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word *av) C_noret;
C_noret_decl(f_4424)
static void C_ccall f_4424(C_word c,C_word *av) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word *av) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word *av) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word *av) C_noret;
C_noret_decl(f_4444)
static void C_ccall f_4444(C_word c,C_word *av) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word *av) C_noret;
C_noret_decl(f_4454)
static void C_ccall f_4454(C_word c,C_word *av) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word *av) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word *av) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word *av) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word *av) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word *av) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word *av) C_noret;
C_noret_decl(f_4487)
static void C_ccall f_4487(C_word c,C_word *av) C_noret;
C_noret_decl(f_4493)
static void C_ccall f_4493(C_word c,C_word *av) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4502)
static void C_ccall f_4502(C_word c,C_word *av) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word *av) C_noret;
C_noret_decl(f_4511)
static void C_ccall f_4511(C_word c,C_word *av) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word *av) C_noret;
C_noret_decl(f_4522)
static void C_ccall f_4522(C_word c,C_word *av) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word *av) C_noret;
C_noret_decl(f_4531)
static void C_ccall f_4531(C_word c,C_word *av) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word *av) C_noret;
C_noret_decl(f_4543)
static void C_ccall f_4543(C_word c,C_word *av) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word *av) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word *av) C_noret;
C_noret_decl(f_4593)
static void C_ccall f_4593(C_word c,C_word *av) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word *av) C_noret;
C_noret_decl(f_4621)
static void C_fcall f_4621(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4627)
static void C_ccall f_4627(C_word c,C_word *av) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word *av) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word *av) C_noret;
C_noret_decl(f_4637)
static void C_ccall f_4637(C_word c,C_word *av) C_noret;
C_noret_decl(f_4649)
static void C_ccall f_4649(C_word c,C_word *av) C_noret;
C_noret_decl(f_4653)
static void C_ccall f_4653(C_word c,C_word *av) C_noret;
C_noret_decl(f_4658)
static void C_ccall f_4658(C_word c,C_word *av) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word *av) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word *av) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word *av) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word *av) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word *av) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word *av) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word *av) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word *av) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word *av) C_noret;
C_noret_decl(f_4730)
static void C_fcall f_4730(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word *av) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word *av) C_noret;
C_noret_decl(f_4757)
static void C_ccall f_4757(C_word c,C_word *av) C_noret;
C_noret_decl(f_4764)
static void C_ccall f_4764(C_word c,C_word *av) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word *av) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word *av) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word *av) C_noret;
C_noret_decl(f_4793)
static void C_fcall f_4793(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4796)
static void C_fcall f_4796(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_fcall f_4799(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4807)
static void C_ccall f_4807(C_word c,C_word *av) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word *av) C_noret;
C_noret_decl(f_4871)
static void C_ccall f_4871(C_word c,C_word *av) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word *av) C_noret;
C_noret_decl(f_4881)
static void C_fcall f_4881(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_fcall f_4911(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4940)
static void C_fcall f_4940(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4970)
static void C_fcall f_4970(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4999)
static void C_fcall f_4999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5031)
static void C_fcall f_5031(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word *av) C_noret;
C_noret_decl(f_5038)
static C_word C_fcall f_5038(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5080)
static C_word C_fcall f_5080(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word *av) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word *av) C_noret;
C_noret_decl(f_5220)
static void C_ccall f_5220(C_word c,C_word *av) C_noret;
C_noret_decl(f_5229)
static void C_ccall f_5229(C_word c,C_word *av) C_noret;
C_noret_decl(f_5232)
static void C_ccall f_5232(C_word c,C_word *av) C_noret;
C_noret_decl(f_5244)
static void C_fcall f_5244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5254)
static void C_ccall f_5254(C_word c,C_word *av) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_5271)
static void C_ccall f_5271(C_word c,C_word *av) C_noret;
C_noret_decl(f_5275)
static void C_ccall f_5275(C_word c,C_word *av) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word *av) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281(C_word c,C_word *av) C_noret;
C_noret_decl(f_5293)
static void C_ccall f_5293(C_word c,C_word *av) C_noret;
C_noret_decl(f_5297)
static void C_ccall f_5297(C_word c,C_word *av) C_noret;
C_noret_decl(f_5311)
static void C_ccall f_5311(C_word c,C_word *av) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word *av) C_noret;
C_noret_decl(f_5319)
static void C_ccall f_5319(C_word c,C_word *av) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word *av) C_noret;
C_noret_decl(f_5325)
static void C_ccall f_5325(C_word c,C_word *av) C_noret;
C_noret_decl(f_5332)
static void C_fcall f_5332(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5345)
static void C_ccall f_5345(C_word c,C_word *av) C_noret;
C_noret_decl(f_5349)
static void C_ccall f_5349(C_word c,C_word *av) C_noret;
C_noret_decl(f_5353)
static void C_ccall f_5353(C_word c,C_word *av) C_noret;
C_noret_decl(f_5357)
static void C_ccall f_5357(C_word c,C_word *av) C_noret;
C_noret_decl(f_5361)
static void C_ccall f_5361(C_word c,C_word *av) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word *av) C_noret;
C_noret_decl(f_5379)
static void C_ccall f_5379(C_word c,C_word *av) C_noret;
C_noret_decl(f_5387)
static void C_ccall f_5387(C_word c,C_word *av) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word *av) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word *av) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word *av) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word *av) C_noret;
C_noret_decl(f_5407)
static void C_fcall f_5407(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411(C_word c,C_word *av) C_noret;
C_noret_decl(f_5414)
static void C_ccall f_5414(C_word c,C_word *av) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word *av) C_noret;
C_noret_decl(f_5429)
static void C_ccall f_5429(C_word c,C_word *av) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word *av) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word *av) C_noret;
C_noret_decl(f_5454)
static void C_ccall f_5454(C_word c,C_word *av) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word *av) C_noret;
C_noret_decl(f_5464)
static void C_ccall f_5464(C_word c,C_word *av) C_noret;
C_noret_decl(f_5471)
static void C_ccall f_5471(C_word c,C_word *av) C_noret;
C_noret_decl(f_5473)
static void C_ccall f_5473(C_word c,C_word *av) C_noret;
C_noret_decl(f_5494)
static void C_ccall f_5494(C_word c,C_word *av) C_noret;
C_noret_decl(f_5498)
static void C_ccall f_5498(C_word c,C_word *av) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word *av) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word *av) C_noret;
C_noret_decl(f_5508)
static void C_ccall f_5508(C_word c,C_word *av) C_noret;
C_noret_decl(f_5522)
static void C_ccall f_5522(C_word c,C_word *av) C_noret;
C_noret_decl(f_5537)
static void C_ccall f_5537(C_word c,C_word *av) C_noret;
C_noret_decl(f_5543)
static void C_ccall f_5543(C_word c,C_word *av) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word *av) C_noret;
C_noret_decl(f_5553)
static void C_fcall f_5553(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word *av) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word *av) C_noret;
C_noret_decl(f_5578)
static void C_ccall f_5578(C_word c,C_word *av) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word *av) C_noret;
C_noret_decl(f_5584)
static void C_ccall f_5584(C_word c,C_word *av) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word *av) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word *av) C_noret;
C_noret_decl(f_5628)
static void C_ccall f_5628(C_word c,C_word *av) C_noret;
C_noret_decl(f_5643)
static void C_ccall f_5643(C_word c,C_word *av) C_noret;
C_noret_decl(f_5663)
static void C_ccall f_5663(C_word c,C_word *av) C_noret;
C_noret_decl(f_5665)
static void C_ccall f_5665(C_word c,C_word *av) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word *av) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word *av) C_noret;
C_noret_decl(f_5700)
static void C_fcall f_5700(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5704)
static void C_ccall f_5704(C_word c,C_word *av) C_noret;
C_noret_decl(f_5729)
static C_word C_fcall f_5729(C_word t0);
C_noret_decl(f_5737)
static void C_fcall f_5737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5743)
static void C_ccall f_5743(C_word c,C_word *av) C_noret;
C_noret_decl(f_5762)
static void C_ccall f_5762(C_word c,C_word *av) C_noret;
C_noret_decl(f_5765)
static void C_ccall f_5765(C_word c,C_word *av) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word *av) C_noret;
C_noret_decl(f_5798)
static void C_ccall f_5798(C_word c,C_word *av) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word *av) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word *av) C_noret;
C_noret_decl(f_5839)
static void C_ccall f_5839(C_word c,C_word *av) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word *av) C_noret;
C_noret_decl(f_5864)
static void C_ccall f_5864(C_word c,C_word *av) C_noret;
C_noret_decl(f_5876)
static void C_ccall f_5876(C_word c,C_word *av) C_noret;
C_noret_decl(f_5880)
static void C_ccall f_5880(C_word c,C_word *av) C_noret;
C_noret_decl(f_5892)
static void C_ccall f_5892(C_word c,C_word *av) C_noret;
C_noret_decl(f_5896)
static void C_ccall f_5896(C_word c,C_word *av) C_noret;
C_noret_decl(f_5907)
static void C_ccall f_5907(C_word c,C_word *av) C_noret;
C_noret_decl(f_5915)
static void C_fcall f_5915(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5917)
static void C_fcall f_5917(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5965)
static void C_ccall f_5965(C_word c,C_word *av) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word *av) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word *av) C_noret;
C_noret_decl(f_6001)
static void C_ccall f_6001(C_word c,C_word *av) C_noret;
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word *av) C_noret;
C_noret_decl(f_6031)
static void C_ccall f_6031(C_word c,C_word *av) C_noret;
C_noret_decl(f_6057)
static void C_ccall f_6057(C_word c,C_word *av) C_noret;
C_noret_decl(f_6102)
static void C_ccall f_6102(C_word c,C_word *av) C_noret;
C_noret_decl(f_6112)
static void C_ccall f_6112(C_word c,C_word *av) C_noret;
C_noret_decl(f_6178)
static void C_ccall f_6178(C_word c,C_word *av) C_noret;
C_noret_decl(f_6200)
static void C_ccall f_6200(C_word c,C_word *av) C_noret;
C_noret_decl(f_6201)
static void C_ccall f_6201(C_word c,C_word *av) C_noret;
C_noret_decl(f_6207)
static void C_ccall f_6207(C_word c,C_word *av) C_noret;
C_noret_decl(f_6226)
static void C_ccall f_6226(C_word c,C_word *av) C_noret;
C_noret_decl(f_6257)
static void C_ccall f_6257(C_word c,C_word *av) C_noret;
C_noret_decl(f_6267)
static void C_fcall f_6267(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6272)
static void C_ccall f_6272(C_word c,C_word *av) C_noret;
C_noret_decl(f_6278)
static void C_ccall f_6278(C_word c,C_word *av) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word *av) C_noret;
C_noret_decl(f_6288)
static void C_ccall f_6288(C_word c,C_word *av) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word *av) C_noret;
C_noret_decl(f_6308)
static void C_ccall f_6308(C_word c,C_word *av) C_noret;
C_noret_decl(f_6322)
static void C_ccall f_6322(C_word c,C_word *av) C_noret;
C_noret_decl(f_6323)
static void C_ccall f_6323(C_word c,C_word *av) C_noret;
C_noret_decl(f_6340)
static void C_fcall f_6340(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6350)
static void C_ccall f_6350(C_word c,C_word *av) C_noret;
C_noret_decl(f_6433)
static void C_ccall f_6433(C_word c,C_word *av) C_noret;
C_noret_decl(f_6437)
static void C_ccall f_6437(C_word c,C_word *av) C_noret;
C_noret_decl(f_6443)
static void C_fcall f_6443(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6450)
static void C_ccall f_6450(C_word c,C_word *av) C_noret;
C_noret_decl(f_6457)
static void C_ccall f_6457(C_word c,C_word *av) C_noret;
C_noret_decl(f_6468)
static void C_fcall f_6468(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6486)
static void C_ccall f_6486(C_word c,C_word *av) C_noret;
C_noret_decl(f_6489)
static void C_ccall f_6489(C_word c,C_word *av) C_noret;
C_noret_decl(f_6532)
static void C_fcall f_6532(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6550)
static void C_ccall f_6550(C_word c,C_word *av) C_noret;
C_noret_decl(f_6556)
static void C_ccall f_6556(C_word c,C_word *av) C_noret;
C_noret_decl(f_6560)
static void C_ccall f_6560(C_word c,C_word *av) C_noret;
C_noret_decl(f_6581)
static void C_ccall f_6581(C_word c,C_word *av) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word *av) C_noret;
C_noret_decl(f_6591)
static void C_ccall f_6591(C_word c,C_word *av) C_noret;
C_noret_decl(f_6612)
static void C_ccall f_6612(C_word c,C_word *av) C_noret;
C_noret_decl(f_6616)
static void C_ccall f_6616(C_word c,C_word *av) C_noret;
C_noret_decl(f_6639)
static void C_ccall f_6639(C_word c,C_word *av) C_noret;
C_noret_decl(f_6668)
static void C_ccall f_6668(C_word c,C_word *av) C_noret;
C_noret_decl(f_6682)
static void C_ccall f_6682(C_word c,C_word *av) C_noret;
C_noret_decl(f_6689)
static void C_fcall f_6689(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6692)
static void C_ccall f_6692(C_word c,C_word *av) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word *av) C_noret;
C_noret_decl(f_6728)
static void C_ccall f_6728(C_word c,C_word *av) C_noret;
C_noret_decl(f_6745)
static void C_ccall f_6745(C_word c,C_word *av) C_noret;
C_noret_decl(f_6749)
static void C_ccall f_6749(C_word c,C_word *av) C_noret;
C_noret_decl(f_6757)
static void C_ccall f_6757(C_word c,C_word *av) C_noret;
C_noret_decl(f_6765)
static void C_ccall f_6765(C_word c,C_word *av) C_noret;
C_noret_decl(f_6769)
static void C_ccall f_6769(C_word c,C_word *av) C_noret;
C_noret_decl(f_6773)
static void C_ccall f_6773(C_word c,C_word *av) C_noret;
C_noret_decl(f_6783)
static void C_ccall f_6783(C_word c,C_word *av) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word *av) C_noret;
C_noret_decl(f_6799)
static void C_ccall f_6799(C_word c,C_word *av) C_noret;
C_noret_decl(f_6830)
static void C_ccall f_6830(C_word c,C_word *av) C_noret;
C_noret_decl(f_6844)
static void C_ccall f_6844(C_word c,C_word *av) C_noret;
C_noret_decl(f_6850)
static void C_ccall f_6850(C_word c,C_word *av) C_noret;
C_noret_decl(f_6854)
static void C_ccall f_6854(C_word c,C_word *av) C_noret;
C_noret_decl(f_6858)
static void C_ccall f_6858(C_word c,C_word *av) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word *av) C_noret;
C_noret_decl(f_6922)
static void C_ccall f_6922(C_word c,C_word *av) C_noret;
C_noret_decl(f_6925)
static void C_ccall f_6925(C_word c,C_word *av) C_noret;
C_noret_decl(f_6976)
static void C_fcall f_6976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6992)
static void C_ccall f_6992(C_word c,C_word *av) C_noret;
C_noret_decl(f_7014)
static void C_ccall f_7014(C_word c,C_word *av) C_noret;
C_noret_decl(f_7017)
static void C_ccall f_7017(C_word c,C_word *av) C_noret;
C_noret_decl(f_7021)
static void C_fcall f_7021(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7024)
static void C_ccall f_7024(C_word c,C_word *av) C_noret;
C_noret_decl(f_7027)
static void C_ccall f_7027(C_word c,C_word *av) C_noret;
C_noret_decl(f_7042)
static void C_fcall f_7042(C_word t0) C_noret;
C_noret_decl(f_7046)
static void C_ccall f_7046(C_word c,C_word *av) C_noret;
C_noret_decl(f_7057)
static void C_ccall f_7057(C_word c,C_word *av) C_noret;
C_noret_decl(f_7061)
static void C_fcall f_7061(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7064)
static void C_ccall f_7064(C_word c,C_word *av) C_noret;
C_noret_decl(f_7083)
static void C_ccall f_7083(C_word c,C_word *av) C_noret;
C_noret_decl(f_7107)
static void C_ccall f_7107(C_word c,C_word *av) C_noret;
C_noret_decl(f_7111)
static void C_fcall f_7111(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7113)
static void C_ccall f_7113(C_word c,C_word *av) C_noret;
C_noret_decl(f_7128)
static void C_ccall f_7128(C_word c,C_word *av) C_noret;
C_noret_decl(f_7134)
static void C_ccall f_7134(C_word c,C_word *av) C_noret;
C_noret_decl(f_7148)
static void C_fcall f_7148(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7157)
static void C_ccall f_7157(C_word c,C_word *av) C_noret;
C_noret_decl(f_7163)
static void C_ccall f_7163(C_word c,C_word *av) C_noret;
C_noret_decl(f_7168)
static void C_fcall f_7168(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7179)
static void C_ccall f_7179(C_word c,C_word *av) C_noret;
C_noret_decl(f_7180)
static void C_fcall f_7180(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7191)
static void C_ccall f_7191(C_word c,C_word *av) C_noret;
C_noret_decl(f_7195)
static C_word C_fcall f_7195(C_word *a,C_word t0);
C_noret_decl(f_7209)
static void C_fcall f_7209(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7213)
static void C_ccall f_7213(C_word c,C_word *av) C_noret;
C_noret_decl(f_7216)
static void C_ccall f_7216(C_word c,C_word *av) C_noret;
C_noret_decl(f_7219)
static void C_ccall f_7219(C_word c,C_word *av) C_noret;
C_noret_decl(f_7230)
static void C_ccall f_7230(C_word c,C_word *av) C_noret;
C_noret_decl(f_7232)
static void C_ccall f_7232(C_word c,C_word *av) C_noret;
C_noret_decl(f_7236)
static void C_ccall f_7236(C_word c,C_word *av) C_noret;
C_noret_decl(f_7239)
static void C_ccall f_7239(C_word c,C_word *av) C_noret;
C_noret_decl(f_7242)
static void C_ccall f_7242(C_word c,C_word *av) C_noret;
C_noret_decl(f_7254)
static void C_fcall f_7254(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7258)
static void C_ccall f_7258(C_word c,C_word *av) C_noret;
C_noret_decl(f_7265)
static void C_fcall f_7265(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7269)
static void C_ccall f_7269(C_word c,C_word *av) C_noret;
C_noret_decl(f_7276)
static void C_fcall f_7276(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_7282)
static void C_ccall f_7282(C_word c,C_word *av) C_noret;
C_noret_decl(f_7288)
static void C_ccall f_7288(C_word c,C_word *av) C_noret;
C_noret_decl(f_7299)
static void C_ccall f_7299(C_word c,C_word *av) C_noret;
C_noret_decl(f_7303)
static void C_ccall f_7303(C_word c,C_word *av) C_noret;
C_noret_decl(f_7307)
static void C_ccall f_7307(C_word c,C_word *av) C_noret;
C_noret_decl(f_7311)
static void C_ccall f_7311(C_word c,C_word *av) C_noret;
C_noret_decl(f_7315)
static void C_ccall f_7315(C_word c,C_word *av) C_noret;
C_noret_decl(f_7319)
static void C_ccall f_7319(C_word c,C_word *av) C_noret;
C_noret_decl(f_7332)
static void C_fcall f_7332(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7334)
static void C_fcall f_7334(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7339)
static C_word C_fcall f_7339(C_word t0,C_word t1);
C_noret_decl(f_7348)
static C_word C_fcall f_7348(C_word t0,C_word t1);
C_noret_decl(f_7375)
static void C_ccall f_7375(C_word c,C_word *av) C_noret;
C_noret_decl(f_7378)
static void C_ccall f_7378(C_word c,C_word *av) C_noret;
C_noret_decl(f_7383)
static void C_ccall f_7383(C_word c,C_word *av) C_noret;
C_noret_decl(f_7401)
static void C_ccall f_7401(C_word c,C_word *av) C_noret;
C_noret_decl(f_7403)
static void C_ccall f_7403(C_word c,C_word *av) C_noret;
C_noret_decl(f_7427)
static void C_ccall f_7427(C_word c,C_word *av) C_noret;
C_noret_decl(f_7469)
static void C_ccall f_7469(C_word c,C_word *av) C_noret;
C_noret_decl(f_7534)
static void C_ccall f_7534(C_word c,C_word *av) C_noret;
C_noret_decl(f_7542)
static void C_ccall f_7542(C_word c,C_word *av) C_noret;
C_noret_decl(f_7559)
static void C_ccall f_7559(C_word c,C_word *av) C_noret;
C_noret_decl(f_7561)
static void C_ccall f_7561(C_word c,C_word *av) C_noret;
C_noret_decl(f_7567)
static void C_ccall f_7567(C_word c,C_word *av) C_noret;
C_noret_decl(f_7616)
static void C_ccall f_7616(C_word c,C_word *av) C_noret;
C_noret_decl(f_7620)
static void C_ccall f_7620(C_word c,C_word *av) C_noret;
C_noret_decl(f_7623)
static void C_ccall f_7623(C_word c,C_word *av) C_noret;
C_noret_decl(f_7629)
static void C_ccall f_7629(C_word c,C_word *av) C_noret;
C_noret_decl(f_7634)
static void C_ccall f_7634(C_word c,C_word *av) C_noret;
C_noret_decl(f_7638)
static void C_ccall f_7638(C_word c,C_word *av) C_noret;
C_noret_decl(f_7641)
static void C_ccall f_7641(C_word c,C_word *av) C_noret;
C_noret_decl(f_7650)
static void C_ccall f_7650(C_word c,C_word *av) C_noret;
C_noret_decl(f_7656)
static void C_ccall f_7656(C_word c,C_word *av) C_noret;
C_noret_decl(f_7659)
static void C_ccall f_7659(C_word c,C_word *av) C_noret;
C_noret_decl(f_7669)
static void C_ccall f_7669(C_word c,C_word *av) C_noret;
C_noret_decl(f_7675)
static void C_ccall f_7675(C_word c,C_word *av) C_noret;
C_noret_decl(f_7678)
static void C_ccall f_7678(C_word c,C_word *av) C_noret;
C_noret_decl(f_7688)
static void C_ccall f_7688(C_word c,C_word *av) C_noret;
C_noret_decl(f_7694)
static void C_ccall f_7694(C_word c,C_word *av) C_noret;
C_noret_decl(f_7697)
static void C_ccall f_7697(C_word c,C_word *av) C_noret;
C_noret_decl(f_7707)
static void C_ccall f_7707(C_word c,C_word *av) C_noret;
C_noret_decl(f_7713)
static void C_ccall f_7713(C_word c,C_word *av) C_noret;
C_noret_decl(f_7716)
static void C_ccall f_7716(C_word c,C_word *av) C_noret;
C_noret_decl(f_7726)
static void C_ccall f_7726(C_word c,C_word *av) C_noret;
C_noret_decl(f_7732)
static void C_ccall f_7732(C_word c,C_word *av) C_noret;
C_noret_decl(f_7738)
static void C_fcall f_7738(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7762)
static void C_ccall f_7762(C_word c,C_word *av) C_noret;
C_noret_decl(f_7766)
static void C_ccall f_7766(C_word c,C_word *av) C_noret;
C_noret_decl(f_7771)
static void C_ccall f_7771(C_word c,C_word *av) C_noret;
C_noret_decl(f_7778)
static void C_ccall f_7778(C_word c,C_word *av) C_noret;
C_noret_decl(f_7796)
static void C_ccall f_7796(C_word c,C_word *av) C_noret;
C_noret_decl(f_7800)
static void C_ccall f_7800(C_word c,C_word *av) C_noret;
C_noret_decl(f_7802)
static void C_ccall f_7802(C_word c,C_word *av) C_noret;
C_noret_decl(f_7806)
static void C_ccall f_7806(C_word c,C_word *av) C_noret;
C_noret_decl(f_7809)
static void C_ccall f_7809(C_word c,C_word *av) C_noret;
C_noret_decl(f_7817)
static void C_ccall f_7817(C_word c,C_word *av) C_noret;
C_noret_decl(f_7838)
static void C_ccall f_7838(C_word c,C_word *av) C_noret;
C_noret_decl(f_7842)
static void C_ccall f_7842(C_word c,C_word *av) C_noret;
C_noret_decl(f_7844)
static void C_ccall f_7844(C_word c,C_word *av) C_noret;
C_noret_decl(f_7848)
static void C_ccall f_7848(C_word c,C_word *av) C_noret;
C_noret_decl(f_7850)
static void C_ccall f_7850(C_word c,C_word *av) C_noret;
C_noret_decl(f_7854)
static void C_ccall f_7854(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2769)
static void C_ccall trf_2769(C_word c,C_word *av) C_noret;
static void C_ccall trf_2769(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2769(t0,t1,t2);}

C_noret_decl(trf_2810)
static void C_ccall trf_2810(C_word c,C_word *av) C_noret;
static void C_ccall trf_2810(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2810(t0,t1,t2);}

C_noret_decl(trf_2960)
static void C_ccall trf_2960(C_word c,C_word *av) C_noret;
static void C_ccall trf_2960(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2960(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3359)
static void C_ccall trf_3359(C_word c,C_word *av) C_noret;
static void C_ccall trf_3359(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3359(t0,t1);}

C_noret_decl(trf_3432)
static void C_ccall trf_3432(C_word c,C_word *av) C_noret;
static void C_ccall trf_3432(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3432(t0,t1,t2,t3);}

C_noret_decl(trf_3469)
static void C_ccall trf_3469(C_word c,C_word *av) C_noret;
static void C_ccall trf_3469(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3469(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3568)
static void C_ccall trf_3568(C_word c,C_word *av) C_noret;
static void C_ccall trf_3568(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3568(t0,t1);}

C_noret_decl(trf_3624)
static void C_ccall trf_3624(C_word c,C_word *av) C_noret;
static void C_ccall trf_3624(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3624(t0,t1,t2);}

C_noret_decl(trf_3934)
static void C_ccall trf_3934(C_word c,C_word *av) C_noret;
static void C_ccall trf_3934(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3934(t0,t1,t2,t3);}

C_noret_decl(trf_3973)
static void C_ccall trf_3973(C_word c,C_word *av) C_noret;
static void C_ccall trf_3973(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3973(t0,t1);}

C_noret_decl(trf_3979)
static void C_ccall trf_3979(C_word c,C_word *av) C_noret;
static void C_ccall trf_3979(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3979(t0,t1,t2,t3);}

C_noret_decl(trf_4030)
static void C_ccall trf_4030(C_word c,C_word *av) C_noret;
static void C_ccall trf_4030(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4030(t0,t1,t2);}

C_noret_decl(trf_4051)
static void C_ccall trf_4051(C_word c,C_word *av) C_noret;
static void C_ccall trf_4051(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4051(t0,t1);}

C_noret_decl(trf_4060)
static void C_ccall trf_4060(C_word c,C_word *av) C_noret;
static void C_ccall trf_4060(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4060(t0,t1,t2);}

C_noret_decl(trf_4085)
static void C_ccall trf_4085(C_word c,C_word *av) C_noret;
static void C_ccall trf_4085(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4085(t0,t1,t2);}

C_noret_decl(trf_4134)
static void C_ccall trf_4134(C_word c,C_word *av) C_noret;
static void C_ccall trf_4134(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_4134(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_4189)
static void C_ccall trf_4189(C_word c,C_word *av) C_noret;
static void C_ccall trf_4189(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4189(t0,t1);}

C_noret_decl(trf_4226)
static void C_ccall trf_4226(C_word c,C_word *av) C_noret;
static void C_ccall trf_4226(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4226(t0,t1,t2);}

C_noret_decl(trf_4291)
static void C_ccall trf_4291(C_word c,C_word *av) C_noret;
static void C_ccall trf_4291(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4291(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4621)
static void C_ccall trf_4621(C_word c,C_word *av) C_noret;
static void C_ccall trf_4621(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4621(t0,t1);}

C_noret_decl(trf_4730)
static void C_ccall trf_4730(C_word c,C_word *av) C_noret;
static void C_ccall trf_4730(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4730(t0,t1);}

C_noret_decl(trf_4793)
static void C_ccall trf_4793(C_word c,C_word *av) C_noret;
static void C_ccall trf_4793(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4793(t0,t1);}

C_noret_decl(trf_4796)
static void C_ccall trf_4796(C_word c,C_word *av) C_noret;
static void C_ccall trf_4796(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4796(t0,t1);}

C_noret_decl(trf_4799)
static void C_ccall trf_4799(C_word c,C_word *av) C_noret;
static void C_ccall trf_4799(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4799(t0,t1);}

C_noret_decl(trf_4881)
static void C_ccall trf_4881(C_word c,C_word *av) C_noret;
static void C_ccall trf_4881(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4881(t0,t1);}

C_noret_decl(trf_4911)
static void C_ccall trf_4911(C_word c,C_word *av) C_noret;
static void C_ccall trf_4911(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4911(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4940)
static void C_ccall trf_4940(C_word c,C_word *av) C_noret;
static void C_ccall trf_4940(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4940(t0,t1);}

C_noret_decl(trf_4970)
static void C_ccall trf_4970(C_word c,C_word *av) C_noret;
static void C_ccall trf_4970(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4970(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4999)
static void C_ccall trf_4999(C_word c,C_word *av) C_noret;
static void C_ccall trf_4999(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4999(t0,t1);}

C_noret_decl(trf_5031)
static void C_ccall trf_5031(C_word c,C_word *av) C_noret;
static void C_ccall trf_5031(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5031(t0,t1);}

C_noret_decl(trf_5244)
static void C_ccall trf_5244(C_word c,C_word *av) C_noret;
static void C_ccall trf_5244(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5244(t0,t1,t2);}

C_noret_decl(trf_5332)
static void C_ccall trf_5332(C_word c,C_word *av) C_noret;
static void C_ccall trf_5332(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5332(t0,t1);}

C_noret_decl(trf_5407)
static void C_ccall trf_5407(C_word c,C_word *av) C_noret;
static void C_ccall trf_5407(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5407(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5553)
static void C_ccall trf_5553(C_word c,C_word *av) C_noret;
static void C_ccall trf_5553(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5553(t0,t1,t2,t3);}

C_noret_decl(trf_5700)
static void C_ccall trf_5700(C_word c,C_word *av) C_noret;
static void C_ccall trf_5700(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5700(t0,t1);}

C_noret_decl(trf_5737)
static void C_ccall trf_5737(C_word c,C_word *av) C_noret;
static void C_ccall trf_5737(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5737(t0,t1);}

C_noret_decl(trf_5915)
static void C_ccall trf_5915(C_word c,C_word *av) C_noret;
static void C_ccall trf_5915(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5915(t0,t1);}

C_noret_decl(trf_5917)
static void C_ccall trf_5917(C_word c,C_word *av) C_noret;
static void C_ccall trf_5917(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5917(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6267)
static void C_ccall trf_6267(C_word c,C_word *av) C_noret;
static void C_ccall trf_6267(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6267(t0,t1);}

C_noret_decl(trf_6340)
static void C_ccall trf_6340(C_word c,C_word *av) C_noret;
static void C_ccall trf_6340(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6340(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6443)
static void C_ccall trf_6443(C_word c,C_word *av) C_noret;
static void C_ccall trf_6443(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6443(t0,t1);}

C_noret_decl(trf_6468)
static void C_ccall trf_6468(C_word c,C_word *av) C_noret;
static void C_ccall trf_6468(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6468(t0,t1,t2,t3);}

C_noret_decl(trf_6532)
static void C_ccall trf_6532(C_word c,C_word *av) C_noret;
static void C_ccall trf_6532(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6532(t0,t1,t2,t3);}

C_noret_decl(trf_6689)
static void C_ccall trf_6689(C_word c,C_word *av) C_noret;
static void C_ccall trf_6689(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6689(t0,t1);}

C_noret_decl(trf_6976)
static void C_ccall trf_6976(C_word c,C_word *av) C_noret;
static void C_ccall trf_6976(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6976(t0,t1,t2);}

C_noret_decl(trf_7021)
static void C_ccall trf_7021(C_word c,C_word *av) C_noret;
static void C_ccall trf_7021(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7021(t0,t1);}

C_noret_decl(trf_7042)
static void C_ccall trf_7042(C_word c,C_word *av) C_noret;
static void C_ccall trf_7042(C_word c,C_word *av){
C_word t0=av[0];
f_7042(t0);}

C_noret_decl(trf_7061)
static void C_ccall trf_7061(C_word c,C_word *av) C_noret;
static void C_ccall trf_7061(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7061(t0,t1);}

C_noret_decl(trf_7111)
static void C_ccall trf_7111(C_word c,C_word *av) C_noret;
static void C_ccall trf_7111(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_7111(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7148)
static void C_ccall trf_7148(C_word c,C_word *av) C_noret;
static void C_ccall trf_7148(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7148(t0,t1);}

C_noret_decl(trf_7168)
static void C_ccall trf_7168(C_word c,C_word *av) C_noret;
static void C_ccall trf_7168(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7168(t0,t1,t2);}

C_noret_decl(trf_7180)
static void C_ccall trf_7180(C_word c,C_word *av) C_noret;
static void C_ccall trf_7180(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7180(t0,t1,t2,t3);}

C_noret_decl(trf_7209)
static void C_ccall trf_7209(C_word c,C_word *av) C_noret;
static void C_ccall trf_7209(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_7209(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7254)
static void C_ccall trf_7254(C_word c,C_word *av) C_noret;
static void C_ccall trf_7254(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_7254(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7265)
static void C_ccall trf_7265(C_word c,C_word *av) C_noret;
static void C_ccall trf_7265(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_7265(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7276)
static void C_ccall trf_7276(C_word c,C_word *av) C_noret;
static void C_ccall trf_7276(C_word c,C_word *av){
C_word t0=av[8];
C_word t1=av[7];
C_word t2=av[6];
C_word t3=av[5];
C_word t4=av[4];
C_word t5=av[3];
C_word t6=av[2];
C_word t7=av[1];
C_word t8=av[0];
f_7276(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_7332)
static void C_ccall trf_7332(C_word c,C_word *av) C_noret;
static void C_ccall trf_7332(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_7332(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7334)
static void C_ccall trf_7334(C_word c,C_word *av) C_noret;
static void C_ccall trf_7334(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7334(t0,t1,t2);}

C_noret_decl(trf_7738)
static void C_ccall trf_7738(C_word c,C_word *av) C_noret;
static void C_ccall trf_7738(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7738(t0,t1,t2,t3);}

/* k2618 */
static void C_ccall f_2620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2620,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2623,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2621 in k2618 */
static void C_ccall f_2623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2623,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2624 in k2621 in k2618 */
static void C_ccall f_2626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2626,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2629,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2632,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2632,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2635(C_word c,C_word *av){
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
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word t150;
C_word t151;
C_word t152;
C_word t153;
C_word t154;
C_word t155;
C_word t156;
C_word t157;
C_word t158;
C_word t159;
C_word t160;
C_word t161;
C_word t162;
C_word t163;
C_word t164;
C_word t165;
C_word t166;
C_word t167;
C_word t168;
C_word t169;
C_word t170;
C_word t171;
C_word t172;
C_word t173;
C_word t174;
C_word t175;
C_word t176;
C_word t177;
C_word t178;
C_word t179;
C_word t180;
C_word t181;
C_word t182;
C_word t183;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(104,c,6)))){
C_save_and_reclaim((void *)f_2635,2,av);}
a=C_alloc(104);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_set_block_item(lf[2] /* chicken.file.posix#create-fifo */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[3] /* chicken.file.posix#create-symbolic-link */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[4] /* chicken.file.posix#read-symbolic-link */,0,C_SCHEME_UNDEFINED);
t7=C_set_block_item(lf[5] /* chicken.file.posix#duplicate-fileno */,0,C_SCHEME_UNDEFINED);
t8=C_set_block_item(lf[6] /* chicken.file.posix#fcntl/dupfd */,0,C_SCHEME_UNDEFINED);
t9=C_set_block_item(lf[7] /* chicken.file.posix#fcntl/getfd */,0,C_SCHEME_UNDEFINED);
t10=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/getfl */,0,C_SCHEME_UNDEFINED);
t11=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/setfd */,0,C_SCHEME_UNDEFINED);
t12=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/setfl */,0,C_SCHEME_UNDEFINED);
t13=C_set_block_item(lf[11] /* chicken.file.posix#file-close */,0,C_SCHEME_UNDEFINED);
t14=C_set_block_item(lf[12] /* chicken.file.posix#file-control */,0,C_SCHEME_UNDEFINED);
t15=C_set_block_item(lf[13] /* chicken.file.posix#file-creation-mode */,0,C_SCHEME_UNDEFINED);
t16=C_set_block_item(lf[14] /* chicken.file.posix#file-group */,0,C_SCHEME_UNDEFINED);
t17=C_set_block_item(lf[15] /* chicken.file.posix#file-link */,0,C_SCHEME_UNDEFINED);
t18=C_set_block_item(lf[16] /* chicken.file.posix#file-lock */,0,C_SCHEME_UNDEFINED);
t19=C_set_block_item(lf[17] /* chicken.file.posix#file-lock/blocking */,0,C_SCHEME_UNDEFINED);
t20=C_set_block_item(lf[18] /* chicken.file.posix#file-mkstemp */,0,C_SCHEME_UNDEFINED);
t21=C_set_block_item(lf[19] /* chicken.file.posix#file-open */,0,C_SCHEME_UNDEFINED);
t22=C_set_block_item(lf[20] /* chicken.file.posix#file-owner */,0,C_SCHEME_UNDEFINED);
t23=C_set_block_item(lf[21] /* chicken.file.posix#file-permissions */,0,C_SCHEME_UNDEFINED);
t24=C_set_block_item(lf[22] /* chicken.file.posix#file-position */,0,C_SCHEME_UNDEFINED);
t25=C_set_block_item(lf[23] /* chicken.file.posix#file-read */,0,C_SCHEME_UNDEFINED);
t26=C_set_block_item(lf[24] /* chicken.file.posix#file-select */,0,C_SCHEME_UNDEFINED);
t27=C_set_block_item(lf[25] /* chicken.file.posix#file-test-lock */,0,C_SCHEME_UNDEFINED);
t28=C_set_block_item(lf[26] /* chicken.file.posix#file-truncate */,0,C_SCHEME_UNDEFINED);
t29=C_set_block_item(lf[27] /* chicken.file.posix#file-unlock */,0,C_SCHEME_UNDEFINED);
t30=C_set_block_item(lf[28] /* chicken.file.posix#file-write */,0,C_SCHEME_UNDEFINED);
t31=C_set_block_item(lf[29] /* chicken.file.posix#file-type */,0,C_SCHEME_UNDEFINED);
t32=C_set_block_item(lf[30] /* chicken.file.posix#block-device? */,0,C_SCHEME_UNDEFINED);
t33=C_set_block_item(lf[31] /* chicken.file.posix#character-device? */,0,C_SCHEME_UNDEFINED);
t34=C_set_block_item(lf[32] /* chicken.file.posix#directory? */,0,C_SCHEME_UNDEFINED);
t35=C_set_block_item(lf[33] /* chicken.file.posix#fifo? */,0,C_SCHEME_UNDEFINED);
t36=C_set_block_item(lf[34] /* chicken.file.posix#regular-file? */,0,C_SCHEME_UNDEFINED);
t37=C_set_block_item(lf[35] /* chicken.file.posix#socket? */,0,C_SCHEME_UNDEFINED);
t38=C_set_block_item(lf[36] /* chicken.file.posix#symbolic-link? */,0,C_SCHEME_UNDEFINED);
t39=C_set_block_item(lf[37] /* chicken.file.posix#fileno/stderr */,0,C_SCHEME_UNDEFINED);
t40=C_set_block_item(lf[38] /* chicken.file.posix#fileno/stdin */,0,C_SCHEME_UNDEFINED);
t41=C_set_block_item(lf[39] /* chicken.file.posix#fileno/stdout */,0,C_SCHEME_UNDEFINED);
t42=C_set_block_item(lf[40] /* chicken.file.posix#open-input-file* */,0,C_SCHEME_UNDEFINED);
t43=C_set_block_item(lf[41] /* chicken.file.posix#open-output-file* */,0,C_SCHEME_UNDEFINED);
t44=C_set_block_item(lf[42] /* chicken.file.posix#open/append */,0,C_SCHEME_UNDEFINED);
t45=C_set_block_item(lf[43] /* chicken.file.posix#open/binary */,0,C_SCHEME_UNDEFINED);
t46=C_set_block_item(lf[44] /* chicken.file.posix#open/creat */,0,C_SCHEME_UNDEFINED);
t47=C_set_block_item(lf[45] /* chicken.file.posix#open/excl */,0,C_SCHEME_UNDEFINED);
t48=C_set_block_item(lf[46] /* chicken.file.posix#open/fsync */,0,C_SCHEME_UNDEFINED);
t49=C_set_block_item(lf[47] /* chicken.file.posix#open/noctty */,0,C_SCHEME_UNDEFINED);
t50=C_set_block_item(lf[48] /* chicken.file.posix#open/noinherit */,0,C_SCHEME_UNDEFINED);
t51=C_set_block_item(lf[49] /* chicken.file.posix#open/nonblock */,0,C_SCHEME_UNDEFINED);
t52=C_set_block_item(lf[50] /* chicken.file.posix#open/rdonly */,0,C_SCHEME_UNDEFINED);
t53=C_set_block_item(lf[51] /* chicken.file.posix#open/rdwr */,0,C_SCHEME_UNDEFINED);
t54=C_set_block_item(lf[52] /* chicken.file.posix#open/read */,0,C_SCHEME_UNDEFINED);
t55=C_set_block_item(lf[53] /* chicken.file.posix#open/sync */,0,C_SCHEME_UNDEFINED);
t56=C_set_block_item(lf[54] /* chicken.file.posix#open/text */,0,C_SCHEME_UNDEFINED);
t57=C_set_block_item(lf[55] /* chicken.file.posix#open/trunc */,0,C_SCHEME_UNDEFINED);
t58=C_set_block_item(lf[56] /* chicken.file.posix#open/write */,0,C_SCHEME_UNDEFINED);
t59=C_set_block_item(lf[57] /* chicken.file.posix#open/wronly */,0,C_SCHEME_UNDEFINED);
t60=C_set_block_item(lf[58] /* chicken.file.posix#perm/irgrp */,0,C_SCHEME_UNDEFINED);
t61=C_set_block_item(lf[59] /* chicken.file.posix#perm/iroth */,0,C_SCHEME_UNDEFINED);
t62=C_set_block_item(lf[60] /* chicken.file.posix#perm/irusr */,0,C_SCHEME_UNDEFINED);
t63=C_set_block_item(lf[61] /* chicken.file.posix#perm/irwxg */,0,C_SCHEME_UNDEFINED);
t64=C_set_block_item(lf[62] /* chicken.file.posix#perm/irwxo */,0,C_SCHEME_UNDEFINED);
t65=C_set_block_item(lf[63] /* chicken.file.posix#perm/irwxu */,0,C_SCHEME_UNDEFINED);
t66=C_set_block_item(lf[64] /* chicken.file.posix#perm/isgid */,0,C_SCHEME_UNDEFINED);
t67=C_set_block_item(lf[65] /* chicken.file.posix#perm/isuid */,0,C_SCHEME_UNDEFINED);
t68=C_set_block_item(lf[66] /* chicken.file.posix#perm/isvtx */,0,C_SCHEME_UNDEFINED);
t69=C_set_block_item(lf[67] /* chicken.file.posix#perm/iwgrp */,0,C_SCHEME_UNDEFINED);
t70=C_set_block_item(lf[68] /* chicken.file.posix#perm/iwoth */,0,C_SCHEME_UNDEFINED);
t71=C_set_block_item(lf[69] /* chicken.file.posix#perm/iwusr */,0,C_SCHEME_UNDEFINED);
t72=C_set_block_item(lf[70] /* chicken.file.posix#perm/ixgrp */,0,C_SCHEME_UNDEFINED);
t73=C_set_block_item(lf[71] /* chicken.file.posix#perm/ixoth */,0,C_SCHEME_UNDEFINED);
t74=C_set_block_item(lf[72] /* chicken.file.posix#perm/ixusr */,0,C_SCHEME_UNDEFINED);
t75=C_set_block_item(lf[73] /* chicken.file.posix#port->fileno */,0,C_SCHEME_UNDEFINED);
t76=C_set_block_item(lf[74] /* chicken.file.posix#seek/cur */,0,C_SCHEME_UNDEFINED);
t77=C_set_block_item(lf[75] /* chicken.file.posix#seek/end */,0,C_SCHEME_UNDEFINED);
t78=C_set_block_item(lf[76] /* chicken.file.posix#seek/set */,0,C_SCHEME_UNDEFINED);
t79=C_set_block_item(lf[77] /* chicken.file.posix#set-file-position! */,0,C_SCHEME_UNDEFINED);
t80=C_a_i_provide(&a,1,lf[78]);
t81=C_set_block_item(lf[79] /* chicken.time.posix#seconds->utc-time */,0,C_SCHEME_UNDEFINED);
t82=C_set_block_item(lf[80] /* chicken.time.posix#utc-time->seconds */,0,C_SCHEME_UNDEFINED);
t83=C_set_block_item(lf[81] /* chicken.time.posix#seconds->local-time */,0,C_SCHEME_UNDEFINED);
t84=C_set_block_item(lf[82] /* chicken.time.posix#seconds->string */,0,C_SCHEME_UNDEFINED);
t85=C_set_block_item(lf[83] /* chicken.time.posix#local-time->seconds */,0,C_SCHEME_UNDEFINED);
t86=C_set_block_item(lf[84] /* chicken.time.posix#string->time */,0,C_SCHEME_UNDEFINED);
t87=C_set_block_item(lf[85] /* chicken.time.posix#time->string */,0,C_SCHEME_UNDEFINED);
t88=C_set_block_item(lf[86] /* chicken.time.posix#local-timezone-abbreviation */,0,C_SCHEME_UNDEFINED);
t89=C_a_i_provide(&a,1,lf[87]);
t90=C_mutate((C_word*)lf[88]+1 /* (set! chicken.process#system ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2721,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t91=C_mutate((C_word*)lf[94]+1 /* (set! chicken.process#system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2739,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t92=C_mutate((C_word*)lf[97]+1 /* (set! chicken.process#qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2755,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t93=C_set_block_item(lf[107] /* chicken.process#process-execute */,0,C_SCHEME_UNDEFINED);
t94=C_set_block_item(lf[108] /* chicken.process#process-fork */,0,C_SCHEME_UNDEFINED);
t95=C_set_block_item(lf[109] /* chicken.process#process-run */,0,C_SCHEME_UNDEFINED);
t96=C_set_block_item(lf[110] /* chicken.process#process-signal */,0,C_SCHEME_UNDEFINED);
t97=C_set_block_item(lf[111] /* chicken.process#process-spawn */,0,C_SCHEME_UNDEFINED);
t98=C_set_block_item(lf[112] /* chicken.process#process-wait */,0,C_SCHEME_UNDEFINED);
t99=C_set_block_item(lf[113] /* chicken.process#call-with-input-pipe */,0,C_SCHEME_UNDEFINED);
t100=C_set_block_item(lf[114] /* chicken.process#call-with-output-pipe */,0,C_SCHEME_UNDEFINED);
t101=C_set_block_item(lf[115] /* chicken.process#close-input-pipe */,0,C_SCHEME_UNDEFINED);
t102=C_set_block_item(lf[116] /* chicken.process#close-output-pipe */,0,C_SCHEME_UNDEFINED);
t103=C_set_block_item(lf[117] /* chicken.process#create-pipe */,0,C_SCHEME_UNDEFINED);
t104=C_set_block_item(lf[118] /* chicken.process#open-input-pipe */,0,C_SCHEME_UNDEFINED);
t105=C_set_block_item(lf[119] /* chicken.process#open-output-pipe */,0,C_SCHEME_UNDEFINED);
t106=C_set_block_item(lf[120] /* chicken.process#with-input-from-pipe */,0,C_SCHEME_UNDEFINED);
t107=C_set_block_item(lf[121] /* chicken.process#with-output-to-pipe */,0,C_SCHEME_UNDEFINED);
t108=C_set_block_item(lf[122] /* chicken.process#process */,0,C_SCHEME_UNDEFINED);
t109=C_set_block_item(lf[123] /* chicken.process#process* */,0,C_SCHEME_UNDEFINED);
t110=C_set_block_item(lf[124] /* chicken.process#process-sleep */,0,C_SCHEME_UNDEFINED);
t111=C_set_block_item(lf[125] /* chicken.process#pipe/buf */,0,C_SCHEME_UNDEFINED);
t112=C_set_block_item(lf[126] /* chicken.process#spawn/overlay */,0,C_SCHEME_UNDEFINED);
t113=C_set_block_item(lf[127] /* chicken.process#spawn/wait */,0,C_SCHEME_UNDEFINED);
t114=C_set_block_item(lf[128] /* chicken.process#spawn/nowait */,0,C_SCHEME_UNDEFINED);
t115=C_set_block_item(lf[129] /* chicken.process#spawn/nowaito */,0,C_SCHEME_UNDEFINED);
t116=C_set_block_item(lf[130] /* chicken.process#spawn/detach */,0,C_SCHEME_UNDEFINED);
t117=C_a_i_provide(&a,1,lf[131]);
t118=C_set_block_item(lf[132] /* chicken.process.signal#set-alarm! */,0,C_SCHEME_UNDEFINED);
t119=C_set_block_item(lf[133] /* chicken.process.signal#set-signal-handler! */,0,C_SCHEME_UNDEFINED);
t120=C_set_block_item(lf[134] /* chicken.process.signal#set-signal-mask! */,0,C_SCHEME_UNDEFINED);
t121=C_set_block_item(lf[135] /* chicken.process.signal#signal-handler */,0,C_SCHEME_UNDEFINED);
t122=C_set_block_item(lf[136] /* chicken.process.signal#signal-mask */,0,C_SCHEME_UNDEFINED);
t123=C_set_block_item(lf[137] /* chicken.process.signal#signal-mask! */,0,C_SCHEME_UNDEFINED);
t124=C_set_block_item(lf[138] /* chicken.process.signal#signal-masked? */,0,C_SCHEME_UNDEFINED);
t125=C_set_block_item(lf[139] /* chicken.process.signal#signal-unmask! */,0,C_SCHEME_UNDEFINED);
t126=C_set_block_item(lf[140] /* chicken.process.signal#signal/abrt */,0,C_SCHEME_UNDEFINED);
t127=C_set_block_item(lf[141] /* chicken.process.signal#signal/alrm */,0,C_SCHEME_UNDEFINED);
t128=C_set_block_item(lf[142] /* chicken.process.signal#signal/break */,0,C_SCHEME_UNDEFINED);
t129=C_set_block_item(lf[143] /* chicken.process.signal#signal/bus */,0,C_SCHEME_UNDEFINED);
t130=C_set_block_item(lf[144] /* chicken.process.signal#signal/chld */,0,C_SCHEME_UNDEFINED);
t131=C_set_block_item(lf[145] /* chicken.process.signal#signal/cont */,0,C_SCHEME_UNDEFINED);
t132=C_set_block_item(lf[146] /* chicken.process.signal#signal/fpe */,0,C_SCHEME_UNDEFINED);
t133=C_set_block_item(lf[147] /* chicken.process.signal#signal/hup */,0,C_SCHEME_UNDEFINED);
t134=C_set_block_item(lf[148] /* chicken.process.signal#signal/ill */,0,C_SCHEME_UNDEFINED);
t135=C_set_block_item(lf[149] /* chicken.process.signal#signal/int */,0,C_SCHEME_UNDEFINED);
t136=C_set_block_item(lf[150] /* chicken.process.signal#signal/io */,0,C_SCHEME_UNDEFINED);
t137=C_set_block_item(lf[151] /* chicken.process.signal#signal/kill */,0,C_SCHEME_UNDEFINED);
t138=C_set_block_item(lf[152] /* chicken.process.signal#signal/pipe */,0,C_SCHEME_UNDEFINED);
t139=C_set_block_item(lf[153] /* chicken.process.signal#signal/prof */,0,C_SCHEME_UNDEFINED);
t140=C_set_block_item(lf[154] /* chicken.process.signal#signal/quit */,0,C_SCHEME_UNDEFINED);
t141=C_set_block_item(lf[155] /* chicken.process.signal#signal/segv */,0,C_SCHEME_UNDEFINED);
t142=C_set_block_item(lf[156] /* chicken.process.signal#signal/stop */,0,C_SCHEME_UNDEFINED);
t143=C_set_block_item(lf[157] /* chicken.process.signal#signal/term */,0,C_SCHEME_UNDEFINED);
t144=C_set_block_item(lf[158] /* chicken.process.signal#signal/trap */,0,C_SCHEME_UNDEFINED);
t145=C_set_block_item(lf[159] /* chicken.process.signal#signal/tstp */,0,C_SCHEME_UNDEFINED);
t146=C_set_block_item(lf[160] /* chicken.process.signal#signal/urg */,0,C_SCHEME_UNDEFINED);
t147=C_set_block_item(lf[161] /* chicken.process.signal#signal/usr1 */,0,C_SCHEME_UNDEFINED);
t148=C_set_block_item(lf[162] /* chicken.process.signal#signal/usr2 */,0,C_SCHEME_UNDEFINED);
t149=C_set_block_item(lf[163] /* chicken.process.signal#signal/vtalrm */,0,C_SCHEME_UNDEFINED);
t150=C_set_block_item(lf[164] /* chicken.process.signal#signal/winch */,0,C_SCHEME_UNDEFINED);
t151=C_set_block_item(lf[165] /* chicken.process.signal#signal/xcpu */,0,C_SCHEME_UNDEFINED);
t152=C_set_block_item(lf[166] /* chicken.process.signal#signal/xfsz */,0,C_SCHEME_UNDEFINED);
t153=C_set_block_item(lf[167] /* chicken.process.signal#signals-list */,0,C_SCHEME_UNDEFINED);
t154=C_a_i_provide(&a,1,lf[168]);
t155=C_set_block_item(lf[169] /* chicken.process-context.posix#change-directory* */,0,C_SCHEME_UNDEFINED);
t156=C_set_block_item(lf[170] /* chicken.process-context.posix#set-root-directory! */,0,C_SCHEME_UNDEFINED);
t157=C_set_block_item(lf[171] /* chicken.process-context.posix#current-effective-group-id */,0,C_SCHEME_UNDEFINED);
t158=C_set_block_item(lf[172] /* chicken.process-context.posix#current-effective-user-id */,0,C_SCHEME_UNDEFINED);
t159=C_set_block_item(lf[173] /* chicken.process-context.posix#current-group-id */,0,C_SCHEME_UNDEFINED);
t160=C_set_block_item(lf[174] /* chicken.process-context.posix#current-user-id */,0,C_SCHEME_UNDEFINED);
t161=C_set_block_item(lf[175] /* chicken.process-context.posix#current-process-id */,0,C_SCHEME_UNDEFINED);
t162=C_set_block_item(lf[176] /* chicken.process-context.posix#parent-process-id */,0,C_SCHEME_UNDEFINED);
t163=C_set_block_item(lf[177] /* chicken.process-context.posix#current-user-name */,0,C_SCHEME_UNDEFINED);
t164=C_set_block_item(lf[178] /* chicken.process-context.posix#current-effective-user-name */,0,C_SCHEME_UNDEFINED);
t165=C_set_block_item(lf[179] /* chicken.process-context.posix#create-session */,0,C_SCHEME_UNDEFINED);
t166=C_set_block_item(lf[180] /* chicken.process-context.posix#process-group-id */,0,C_SCHEME_UNDEFINED);
t167=C_set_block_item(lf[181] /* chicken.process-context.posix#user-information */,0,C_SCHEME_UNDEFINED);
t168=C_a_i_provide(&a,1,lf[182]);
t169=C_mutate(&lf[183] /* (set! chicken.posix#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2942,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t170=C_mutate((C_word*)lf[186]+1 /* (set! ##sys#posix-error ...) */,lf[183]);
t171=C_mutate(&lf[187] /* (set! chicken.posix#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2960,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t172=C_mutate((C_word*)lf[194]+1 /* (set! chicken.file.posix#file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3006,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t173=C_mutate((C_word*)lf[196]+1 /* (set! chicken.file.posix#set-file-permissions! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3024,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t174=C_mutate((C_word*)lf[202]+1 /* (set! chicken.file.posix#file-modification-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3068,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t175=C_mutate((C_word*)lf[204]+1 /* (set! chicken.file.posix#file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3074,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t176=C_mutate((C_word*)lf[206]+1 /* (set! chicken.file.posix#file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3080,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t177=C_mutate((C_word*)lf[208]+1 /* (set! chicken.file.posix#set-file-times! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3086,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t178=C_mutate((C_word*)lf[213]+1 /* (set! chicken.file.posix#file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3165,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t179=C_mutate((C_word*)lf[215]+1 /* (set! chicken.file.posix#set-file-owner! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3171,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t180=C_mutate((C_word*)lf[218]+1 /* (set! chicken.file.posix#set-file-group! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3177,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t181=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3185,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t182=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7850,a[2]=((C_word)li221),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:282: chicken.base#getter-with-setter */
t183=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t183;
av2[1]=t181;
av2[2]=t182;
av2[3]=*((C_word*)lf[215]+1);
av2[4]=lf[492];
((C_proc)(void*)(*((C_word*)t183+1)))(5,av2);}}

/* chicken.process#system in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2721(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2721,3,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[89]);
t4=C_execute_shell_command(t2);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2734,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:202: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2732 in chicken.process#system in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2734,2,av);}
/* posix.scm:203: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[91];
av2[3]=lf[89];
av2[4]=lf[92];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.process#system* in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2739,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2743,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:209: system */
t4=*((C_word*)lf[88]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2741 in chicken.process#system* in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2743,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* posix.scm:211: ##sys#error */
t3=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[96];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.process#qs in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_2755,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2759,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* posix.scm:216: chicken.platform#software-version */
t5=*((C_word*)lf[106]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_2759(2,av2);}}}

/* k2757 in chicken.process#qs in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2759(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_2759,2,av);}
a=C_alloc(18);
t2=C_eqp(t1,lf[98]);
t3=(C_truep(t2)?C_make_character(34):C_make_character(39));
t4=t3;
t5=C_eqp(t1,lf[98]);
t6=(C_truep(t5)?lf[99]:lf[100]);
t7=t6;
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2769,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2790,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t10,a[5]=t12,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
/* string->list */
t14=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t13;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}

/* g256 in k2757 in chicken.process#qs in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_2769(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,4)))){
C_save_and_reclaim_args((void *)trf_2769,3,t0,t1,t2);}
a=C_alloc(2);
if(C_truep(C_i_char_equalp(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;
if(C_truep(C_u_i_char_equalp(t3,C_make_character(0)))){
/* posix.scm:224: chicken.base#error */
t4=*((C_word*)lf[101]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[102];
av2[3]=lf[103];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k2788 in k2757 in chicken.process#qs in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2790,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2810,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li3),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2810(t6,t2,t1);}

/* k2791 in k2788 in k2757 in chicken.process#qs in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2793,2,av);}
a=C_alloc(7);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[104]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* k2802 in k2791 in k2788 in k2757 in chicken.process#qs in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_2804,2,av);}
a=C_alloc(2);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
/* posix.scm:227: scheme#string-append */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* map-loop250 in k2788 in k2757 in chicken.process#qs in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_2810(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2810,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* posix.scm:220: g256 */
t5=((C_word*)t0)[4];
f_2769(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2833 in map-loop250 in k2788 in k2757 in chicken.process#qs in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2835(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2835,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2810(t6,((C_word*)t0)[5],t5);}

/* chicken.posix#posix-error in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_2942,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+7);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2946,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:161: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2944 in chicken.posix#posix-error in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2946(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2946,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2957,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub633(t4,t5);
/* posix-common.scm:158: ##sys#peek-c-string */
t7=*((C_word*)lf[185]+1);{
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

/* k2951 in k2944 in chicken.posix#posix-error in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2953,2,av);}{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[90]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
av2[6]=((C_word*)t0)[5];
C_apply(7,av2);}}

/* k2955 in k2944 in chicken.posix#posix-error in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2957,2,av);}
/* posix-common.scm:162: string-append */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[184];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.posix#stat in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_2960(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2960,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2964,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_u_i_fstat(t2);
f_2964(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2985,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:205: chicken.base#port? */
t8=*((C_word*)lf[193]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k2962 in chicken.posix#stat in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2964,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:216: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[189];
av2[5]=((C_word*)t0)[5];
f_2942(6,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2983 in chicken.posix#stat in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2985,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2989,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:205: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[73]+1);{
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
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2998,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:207: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}
else{
/* posix-common.scm:212: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[191];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[192];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k2987 in k2983 in chicken.posix#stat in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2989,2,av);}
t2=C_u_i_fstat(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2964(2,av2);}}

/* k2996 in k2983 in chicken.posix#stat in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_2998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2998,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_u_i_lstat(t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2964(2,av2);}}
else{
t2=C_u_i_stat(t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2964(2,av2);}}}

/* chicken.file.posix#file-stat in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_3006,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3013,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:222: stat */
f_2960(t6,t2,t5,C_SCHEME_TRUE,lf[195]);}

/* k3011 in chicken.file.posix#file-stat in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_3013,2,av);}
a=C_alloc(42);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_int64_to_num(&a,C_statbuf.st_size),C_int64_to_num(&a,C_statbuf.st_atime),C_int64_to_num(&a,C_statbuf.st_ctime),C_int64_to_num(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blocks));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-permissions! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3024,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3028,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:231: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[197];
tp(4,av2);}}

/* k3026 in chicken.file.posix#set-file-permissions! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3028,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_fchmod(((C_word*)t0)[3],((C_word*)t0)[4]);
f_3031(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:233: chicken.base#port? */
t4=*((C_word*)lf[193]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3029 in k3026 in chicken.file.posix#set-file-permissions! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3031,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:242: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=lf[197];
av2[4]=lf[198];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2942(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3047 in k3026 in chicken.file.posix#set-file-permissions! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3049,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:233: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:236: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[197];
tp(4,av2);}}
else{
/* posix-common.scm:238: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[191];
av2[3]=lf[199];
av2[4]=lf[200];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3051 in k3047 in k3026 in chicken.file.posix#set-file-permissions! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3053,2,av);}
t2=C_fchmod(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_3031(2,av2);}}

/* k3061 in k3047 in k3026 in chicken.file.posix#set-file-permissions! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3063,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_chmod(t1,((C_word*)t0)[3]);
f_3031(2,av2);}}

/* chicken.file.posix#file-modification-time in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3068,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3072,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:246: stat */
f_2960(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[203]);}

/* k3070 in chicken.file.posix#file-modification-time in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3072,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_mtime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-access-time in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3074,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3078,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:250: stat */
f_2960(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[205]);}

/* k3076 in chicken.file.posix#file-access-time in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3078,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_atime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-change-time in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3080,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3084,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:254: stat */
f_2960(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[207]);}

/* k3082 in chicken.file.posix#file-change-time in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3084,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_ctime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-times! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_3086,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3090,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t4))){
/* posix-common.scm:259: chicken.time#current-seconds */
t6=*((C_word*)lf[212]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_car(t4);
f_3090(2,av2);}}}

/* k3088 in chicken.file.posix#set-file-times! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3090(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3090,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?t2:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
/* posix-common.scm:260: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[209];
tp(4,av2);}}
else{
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_3102(2,av2);}}}

/* k3100 in k3088 in chicken.file.posix#set-file-times! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3102,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posix-common.scm:261: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[209];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_3105(2,av2);}}}

/* k3103 in k3100 in k3088 in chicken.file.posix#set-file-times! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3105(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3105,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=t2;
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3111,a[2]=t3,a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t8=C_i_foreign_string_argumentp(t4);
/* posix-common.scm:262: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t3;{
C_word *av2=av;
av2[0]=t8;
av2[1]=stub707(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t5,t6);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3109 in k3103 in k3100 in k3088 in chicken.file.posix#set-file-times! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3111,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub707(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3119 in k3103 in k3100 in k3088 in chicken.file.posix#set-file-times! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3121,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[183];
av2[3]=lf[188];
av2[4]=lf[209];
av2[5]=lf[210];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[4];
C_apply(8,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.file.posix#file-size in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3165,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3169,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:271: stat */
f_2960(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[214]);}

/* k3167 in chicken.file.posix#file-size in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3169,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_size);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-owner! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3171,4,av);}
/* posix-common.scm:275: chown */
f_5407(t1,lf[217],t2,t3,C_fix(-1));}

/* chicken.file.posix#set-file-group! in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3177,4,av);}
/* posix-common.scm:279: chown */
f_5407(t1,lf[219],t2,C_fix(-1),t3);}

/* k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3185,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[20]+1 /* (set! chicken.file.posix#file-owner ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7844,a[2]=((C_word)li220),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:288: chicken.base#getter-with-setter */
t5=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[218]+1);
av2[4]=lf[490];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3189,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[14]+1 /* (set! chicken.file.posix#file-group ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3193,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7838,a[2]=((C_word)li219),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:294: chicken.base#getter-with-setter */
t5=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[196]+1);
av2[4]=lf[488];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3193(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_3193,2,av);}
a=C_alloc(33);
t2=C_mutate((C_word*)lf[21]+1 /* (set! chicken.file.posix#file-permissions ...) */,t1);
t3=C_mutate((C_word*)lf[29]+1 /* (set! chicken.file.posix#file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3195,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[34]+1 /* (set! chicken.file.posix#regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3282,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[36]+1 /* (set! chicken.file.posix#symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3292,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[30]+1 /* (set! chicken.file.posix#block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3302,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[31]+1 /* (set! chicken.file.posix#character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3312,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[33]+1 /* (set! chicken.file.posix#fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3322,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[35]+1 /* (set! chicken.file.posix#socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3332,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[32]+1 /* (set! chicken.file.posix#directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3342,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(lf[76] /* chicken.file.posix#seek/set */,0,C_fix((C_word)SEEK_SET));
t12=C_set_block_item(lf[75] /* chicken.file.posix#seek/end */,0,C_fix((C_word)SEEK_END));
t13=C_set_block_item(lf[74] /* chicken.file.posix#seek/cur */,0,C_fix((C_word)SEEK_CUR));
t14=C_mutate((C_word*)lf[77]+1 /* (set! chicken.file.posix#set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3355,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7802,a[2]=((C_word)li218),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:369: chicken.base#getter-with-setter */
t17=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=t16;
av2[3]=*((C_word*)lf[77]+1);
av2[4]=lf[487];
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* chicken.file.posix#file-type in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_3195,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_TRUE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:303: stat */
f_2960(t12,t2,t5,t9,lf[227]);}

/* k3212 in chicken.file.posix#file-type in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3214(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3214,2,av);}
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
t3=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=lf[220];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK));
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[221];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[222];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR));
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[223];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[224];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO));
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=lf[225];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t10=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t10;
av2[1]=(C_truep(t9)?lf[226]:lf[220]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}}}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file.posix#regular-file? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3282,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3290,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:317: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3288 in chicken.file.posix#regular-file? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3290,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[220],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#symbolic-link? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3292,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3300,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:321: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3298 in chicken.file.posix#symbolic-link? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3300,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[221],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#block-device? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3302,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3310,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:325: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3308 in chicken.file.posix#block-device? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3310,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[224],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#character-device? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3312,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3320,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:329: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3318 in chicken.file.posix#character-device? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3320,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[223],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#fifo? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3322,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3330,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:333: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3328 in chicken.file.posix#fifo? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3330,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[225],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#socket? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3332,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3340,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:337: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3338 in chicken.file.posix#socket? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3340,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[226],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#directory? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3342,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3350,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:341: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3348 in chicken.file.posix#directory? in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3350,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[222],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-position! in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_3355,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3359,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_3359(t7,C_u_i_car(t6));}
else{
t6=t5;
f_3359(t6,C_fix((C_word)SEEK_SET));}}

/* k3357 in chicken.file.posix#set-file-position! in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_3359(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3359,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:357: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[228];
tp(4,av2);}}

/* k3360 in k3357 in chicken.file.posix#set-file-position! in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3362,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:358: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[228];
tp(4,av2);}}

/* k3363 in k3360 in k3357 in chicken.file.posix#set-file-position! in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3365,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:359: chicken.base#port? */
t4=*((C_word*)lf[193]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3369 in k3363 in k3360 in k3357 in chicken.file.posix#set-file-position! in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3371,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posix-common.scm:366: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=lf[228];
av2[4]=lf[229];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2942(7,av2);}}}

/* k3375 in k3363 in k3360 in k3357 in chicken.file.posix#set-file-position! in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3377,2,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[230]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_3371(2,av2);}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3371(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_3371(2,av2);}}
else{
/* posix-common.scm:365: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[191];
av2[3]=lf[228];
av2[4]=lf[231];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3404(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(45,c,6)))){
C_save_and_reclaim((void *)f_3404,2,av);}
a=C_alloc(45);
t2=C_mutate((C_word*)lf[22]+1 /* (set! chicken.file.posix#file-position ...) */,t1);
t3=C_set_block_item(lf[38] /* chicken.file.posix#fileno/stdin */,0,C_fix((C_word)STDIN_FILENO));
t4=C_set_block_item(lf[39] /* chicken.file.posix#fileno/stdout */,0,C_fix((C_word)STDOUT_FILENO));
t5=C_set_block_item(lf[37] /* chicken.file.posix#fileno/stderr */,0,C_fix((C_word)STDERR_FILENO));
t6=C_set_block_item(lf[50] /* chicken.file.posix#open/rdonly */,0,C_fix((C_word)O_RDONLY));
t7=C_set_block_item(lf[57] /* chicken.file.posix#open/wronly */,0,C_fix((C_word)O_WRONLY));
t8=C_set_block_item(lf[51] /* chicken.file.posix#open/rdwr */,0,C_fix((C_word)O_RDWR));
t9=C_set_block_item(lf[52] /* chicken.file.posix#open/read */,0,C_fix((C_word)O_RDONLY));
t10=C_set_block_item(lf[56] /* chicken.file.posix#open/write */,0,C_fix((C_word)O_WRONLY));
t11=C_set_block_item(lf[44] /* chicken.file.posix#open/creat */,0,C_fix((C_word)O_CREAT));
t12=C_set_block_item(lf[42] /* chicken.file.posix#open/append */,0,C_fix((C_word)O_APPEND));
t13=C_set_block_item(lf[45] /* chicken.file.posix#open/excl */,0,C_fix((C_word)O_EXCL));
t14=C_set_block_item(lf[55] /* chicken.file.posix#open/trunc */,0,C_fix((C_word)O_TRUNC));
t15=C_set_block_item(lf[43] /* chicken.file.posix#open/binary */,0,C_fix((C_word)O_BINARY));
t16=C_set_block_item(lf[54] /* chicken.file.posix#open/text */,0,C_fix((C_word)O_TEXT));
t17=C_set_block_item(lf[60] /* chicken.file.posix#perm/irusr */,0,C_fix((C_word)S_IREAD));
t18=C_set_block_item(lf[69] /* chicken.file.posix#perm/iwusr */,0,C_fix((C_word)S_IWRITE));
t19=C_set_block_item(lf[72] /* chicken.file.posix#perm/ixusr */,0,C_fix((C_word)S_IEXEC));
t20=C_set_block_item(lf[58] /* chicken.file.posix#perm/irgrp */,0,C_fix((C_word)S_IREAD));
t21=C_set_block_item(lf[67] /* chicken.file.posix#perm/iwgrp */,0,C_fix((C_word)S_IWRITE));
t22=C_set_block_item(lf[70] /* chicken.file.posix#perm/ixgrp */,0,C_fix((C_word)S_IEXEC));
t23=C_set_block_item(lf[59] /* chicken.file.posix#perm/iroth */,0,C_fix((C_word)S_IREAD));
t24=C_set_block_item(lf[68] /* chicken.file.posix#perm/iwoth */,0,C_fix((C_word)S_IWRITE));
t25=C_set_block_item(lf[71] /* chicken.file.posix#perm/ixoth */,0,C_fix((C_word)S_IEXEC));
t26=C_set_block_item(lf[63] /* chicken.file.posix#perm/irwxu */,0,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t27=C_set_block_item(lf[61] /* chicken.file.posix#perm/irwxg */,0,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t28=C_set_block_item(lf[62] /* chicken.file.posix#perm/irwxo */,0,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3432,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3469,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[40]+1 /* (set! chicken.file.posix#open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3488,a[2]=t32,a[3]=t30,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[41]+1 /* (set! chicken.file.posix#open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3502,a[2]=t32,a[3]=t30,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t37=C_mutate((C_word*)lf[73]+1 /* (set! chicken.file.posix#port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3516,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[5]+1 /* (set! chicken.file.posix#duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3561,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[175]+1 /* (set! chicken.process-context.posix#current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3588,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[169]+1 /* (set! chicken.process-context.posix#change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3591,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t41=*((C_word*)lf[253]+1);
t42=C_mutate((C_word*)lf[253]+1 /* (set! ##sys#change-directory-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3607,a[2]=t41,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7771,a[2]=((C_word)li216),tmp=(C_word)a,a+=3,tmp);
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7796,a[2]=((C_word)li217),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:528: chicken.base#getter-with-setter */
t46=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t46;
av2[1]=t43;
av2[2]=t44;
av2[3]=t45;
av2[4]=lf[483];
((C_proc)(void*)(*((C_word*)t46+1)))(5,av2);}}

/* mode in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_3432(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3432,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3440,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[232]);
if(C_truep(t8)){
if(C_truep(C_i_not(t2))){
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t1;
av2[2]=lf[233];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:454: ##sys#error */
t9=*((C_word*)lf[95]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t5;
av2[2]=lf[234];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}
else{
/* posix-common.scm:455: ##sys#error */
t9=*((C_word*)lf[95]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t5;
av2[2]=lf[235];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}
else{
if(C_truep(t2)){
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t1;
av2[2]=lf[236];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t1;
av2[2]=lf[237];
av2[3]=t4;
tp(4,av2);}}}}

/* k3438 in mode in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3440,2,av);}
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* check in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_3469(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3469,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:461: posix-error */
t6=lf[183];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=t2;
av2[4]=lf[238];
av2[5]=t3;
f_2942(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3482,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* posix-common.scm:462: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[239]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t6;
av2[2]=C_fix(1);
av2[3]=*((C_word*)lf[240]+1);
av2[4]=lf[241];
av2[5]=lf[230];
tp(6,av2);}}
else{
/* posix-common.scm:462: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[239]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t6;
av2[2]=C_fix(2);
av2[3]=*((C_word*)lf[240]+1);
av2[4]=lf[241];
av2[5]=lf[230];
tp(6,av2);}}}}

/* k3480 in check in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3482,2,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.file.posix#open-input-file* in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3488,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3492,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:467: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[242];
tp(4,av2);}}

/* k3490 in chicken.file.posix#open-input-file* in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3492,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:468: mode */
f_3432(t2,C_SCHEME_TRUE,((C_word*)t0)[6],lf[242]);}

/* k3498 in k3490 in chicken.file.posix#open-input-file* in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3500,2,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:468: check */
f_3469(((C_word*)t0)[4],lf[242],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* chicken.file.posix#open-output-file* in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3502,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3506,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:471: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[243];
tp(4,av2);}}

/* k3504 in chicken.file.posix#open-output-file* in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3506,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:472: mode */
f_3432(t2,C_SCHEME_FALSE,((C_word*)t0)[6],lf[243]);}

/* k3512 in k3504 in chicken.file.posix#open-output-file* in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3514,2,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:472: check */
f_3469(((C_word*)t0)[4],lf[243],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* chicken.file.posix#port->fileno in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3516(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3516,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[244]);
t5=C_slot(t2,C_fix(7));
t6=C_eqp(lf[226],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3532,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:482: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[245]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[245]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3555,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:483: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[248]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[248]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}}

/* k3530 in chicken.file.posix#port->fileno in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3532,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3539 in k3553 in chicken.file.posix#port->fileno in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3541,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3553 in chicken.file.posix#port->fileno in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3555,2,av);}
a=C_alloc(4);
t2=C_i_zerop(t1);
if(C_truep(C_i_not(t2))){
t3=C_port_fileno(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3541,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posix-common.scm:486: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[188];
av2[3]=lf[244];
av2[4]=lf[246];
av2[5]=((C_word*)t0)[2];
f_2942(6,av2);}}
else{
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
/* posix-common.scm:488: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[191];
av2[3]=lf[244];
av2[4]=lf[247];
av2[5]=((C_word*)t0)[2];
f_2942(6,av2);}}}

/* chicken.file.posix#duplicate-fileno in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3561,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3565,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:492: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[249];
tp(4,av2);}}

/* k3563 in chicken.file.posix#duplicate-fileno in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3565(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3565,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t3=t2;
f_3568(t3,C_dup(((C_word*)t0)[3]));}
else{
t3=C_i_car(((C_word*)t0)[4]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3586,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:496: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[249];
tp(4,av2);}}}

/* k3566 in k3563 in chicken.file.posix#duplicate-fileno in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_3568(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3568,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3571,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:499: posix-error */
t4=lf[183];{
C_word av2[6];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[188];
av2[3]=lf[249];
av2[4]=lf[250];
av2[5]=((C_word*)t0)[3];
f_2942(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3569 in k3566 in k3563 in chicken.file.posix#duplicate-fileno in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3571,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3584 in k3563 in chicken.file.posix#duplicate-fileno in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3586,2,av);}
t2=((C_word*)t0)[2];
f_3568(t2,C_dup2(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* chicken.process-context.posix#current-process-id in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3588,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub823(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process-context.posix#change-directory* in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3591,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3595,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:513: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[251];
tp(4,av2);}}

/* k3593 in chicken.process-context.posix#change-directory* in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3595,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fchdir(((C_word*)t0)[3]);
t4=C_eqp(C_fix(0),t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* posix-common.scm:515: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=lf[251];
av2[4]=lf[252];
av2[5]=((C_word*)t0)[3];
f_2942(6,av2);}}}

/* k3596 in k3593 in chicken.process-context.posix#change-directory* in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3598,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#change-directory-hook in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3607(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3607,3,av);}
if(C_truep(C_fixnump(t2))){
t3=*((C_word*)lf[169]+1);
t4=*((C_word*)lf[169]+1);
/* posix-common.scm:520: g830 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[169]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[169]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
/* posix-common.scm:520: g830 */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3621(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_3621,2,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[13]+1 /* (set! chicken.file.posix#file-creation-mode ...) */,t1);
t3=C_mutate(&lf[254] /* (set! chicken.posix#decode-seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_decode_seconds,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[255] /* (set! chicken.posix#check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3624,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[81]+1 /* (set! chicken.time.posix#seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3643,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[79]+1 /* (set! chicken.time.posix#seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3664,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[82]+1 /* (set! chicken.time.posix#seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3696,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t8=C_fix((C_word)sizeof(struct tm));
t9=C_mutate((C_word*)lf[83]+1 /* (set! chicken.time.posix#local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3734,a[2]=t8,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t10=C_fix((C_word)sizeof(struct tm));
t11=C_mutate((C_word*)lf[85]+1 /* (set! chicken.time.posix#time->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3778,a[2]=t10,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[133]+1 /* (set! chicken.process.signal#set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3840,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7762,a[2]=((C_word)li215),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:603: chicken.base#getter-with-setter */
t15=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=*((C_word*)lf[133]+1);
av2[4]=lf[481];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* chicken.posix#check-time-vector in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_3624(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3624,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:547: ##sys#error */
t6=*((C_word*)lf[95]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[256];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* chicken.time.posix#seconds->local-time in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3643,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3647,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:550: chicken.time#current-seconds */
t4=*((C_word*)lf[212]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_car(t2);
f_3647(2,av2);}}}

/* k3645 in chicken.time.posix#seconds->local-time in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3647,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:551: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[257];
tp(4,av2);}}

/* k3648 in k3645 in chicken.time.posix#seconds->local-time in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3650,2,av);}
/* posix-common.scm:552: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[254]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[254];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* chicken.time.posix#seconds->utc-time in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3664,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:555: chicken.time#current-seconds */
t4=*((C_word*)lf[212]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_car(t2);
f_3668(2,av2);}}}

/* k3666 in chicken.time.posix#seconds->utc-time in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3668,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3671,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:556: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[258];
tp(4,av2);}}

/* k3669 in k3666 in chicken.time.posix#seconds->utc-time in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3671,2,av);}
/* posix-common.scm:557: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[254]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[254];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* chicken.time.posix#seconds->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3696,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3700,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:561: chicken.time#current-seconds */
t4=*((C_word*)lf[212]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_car(t2);
f_3700(2,av2);}}}

/* k3698 in chicken.time.posix#seconds->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3700,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3703,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:562: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[260];
tp(4,av2);}}

/* k3701 in k3698 in chicken.time.posix#seconds->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3703(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3703,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_fix((C_word)sizeof(int) * CHAR_BIT);
t5=C_i_foreign_ranged_integer_argumentp(((C_word*)t0)[3],t4);
t6=stub879(t3,t5);
/* posix-common.scm:560: ##sys#peek-c-string */
t7=*((C_word*)lf[185]+1);{
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

/* k3704 in k3701 in k3698 in chicken.time.posix#seconds->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3706,2,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:565: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
/* posix-common.scm:566: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[260];
av2[3]=lf[261];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.time.posix#local-time->seconds in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3734,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3738,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:571: check-time-vector */
f_3624(t3,lf[262],t2);}

/* k3736 in chicken.time.posix#local-time->seconds in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3738,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:572: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3740 in k3736 in chicken.time.posix#local-time->seconds in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3742,2,av);}
a=C_alloc(7);
t2=C_a_mktime(&a,2,((C_word*)t0)[2],t1);
if(C_truep(C_i_nequalp(C_fix(-1),t2))){
/* posix-common.scm:574: ##sys#error */
t3=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[262];
av2[3]=lf[263];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#time->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_3778,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3785,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:582: check-time-vector */
f_3624(t7,lf[265],t2);}

/* k3783 in chicken.time.posix#time->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3785,2,av);}
a=C_alloc(9);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[265]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3794,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3804,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:586: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[265];
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3811,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3832,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:588: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_make_character(0);
tp(4,av2);}}}

/* k3792 in k3783 in chicken.time.posix#time->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3794,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* posix-common.scm:587: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[265];
av2[3]=lf[266];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3802 in k3783 in chicken.time.posix#time->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3804,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3808,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:586: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3806 in k3802 in k3783 in chicken.time.posix#time->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3808,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub916(t3,t2,((C_word*)t0)[3],t4);
/* posix-common.scm:579: ##sys#peek-c-string */
t6=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=t5;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=stub916(t3,t2,((C_word*)t0)[3],C_SCHEME_FALSE);
/* posix-common.scm:579: ##sys#peek-c-string */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k3809 in k3783 in chicken.time.posix#time->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3811,2,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:590: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
/* posix-common.scm:591: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[265];
av2[3]=lf[267];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3830 in k3783 in chicken.time.posix#time->string in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3832,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub906(t3,t2,t4);
/* posix-common.scm:578: ##sys#peek-c-string */
t6=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=t5;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=stub906(t3,t2,C_SCHEME_FALSE);
/* posix-common.scm:578: ##sys#peek-c-string */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* chicken.process.signal#set-signal-handler! in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3840,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3844,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:598: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[269];
tp(4,av2);}}

/* k3842 in chicken.process.signal#set-signal-handler! in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3844,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
t3=C_establish_signal_handler(((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_vector_set(*((C_word*)lf[268]+1),((C_word*)t0)[3],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_establish_signal_handler(((C_word*)t0)[3],C_SCHEME_FALSE);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_vector_set(*((C_word*)lf[268]+1),((C_word*)t0)[3],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3855(C_word c,C_word *av){
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
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(170,c,8)))){
C_save_and_reclaim((void *)f_3855,2,av);}
a=C_alloc(170);
t2=C_mutate((C_word*)lf[135]+1 /* (set! chicken.process.signal#signal-handler ...) */,t1);
t3=C_mutate((C_word*)lf[124]+1 /* (set! chicken.process#process-sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3857,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[112]+1 /* (set! chicken.process#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3863,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[274] /* (set! chicken.posix#list->c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3934,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[276] /* (set! chicken.posix#free-c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4051,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[285] /* (set! chicken.posix#check-environment-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4085,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[286]+1);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4132,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
t10=C_mutate(&lf[287] /* (set! chicken.posix#call-with-exec-args ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4134,a[2]=t9,a[3]=t8,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t11=C_set_block_item(lf[125] /* chicken.process#pipe/buf */,0,C_fix((C_word)PIPE_BUF));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4291,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t13=C_mutate((C_word*)lf[118]+1 /* (set! chicken.process#open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4310,a[2]=t12,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate((C_word*)lf[119]+1 /* (set! chicken.process#open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4350,a[2]=t12,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[115]+1 /* (set! chicken.process#close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4390,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[116]+1 /* (set! chicken.process#close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4405,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[120]+1 /* (set! chicken.process#with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4420,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[114]+1 /* (set! chicken.process#call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4454,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[113]+1 /* (set! chicken.process#call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4478,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[121]+1 /* (set! chicken.process#with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4502,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[305]+1 /* (set! ##sys#file-nonblocking! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4536,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[306]+1 /* (set! ##sys#file-select-one ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4543,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(lf[6] /* chicken.file.posix#fcntl/dupfd */,0,C_fix((C_word)F_DUPFD));
t24=C_set_block_item(lf[7] /* chicken.file.posix#fcntl/getfd */,0,C_fix((C_word)F_GETFD));
t25=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/setfd */,0,C_fix((C_word)F_SETFD));
t26=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/getfl */,0,C_fix((C_word)F_GETFL));
t27=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/setfl */,0,C_fix((C_word)F_SETFL));
t28=C_set_block_item(lf[49] /* chicken.file.posix#open/nonblock */,0,C_fix((C_word)O_NONBLOCK));
t29=C_set_block_item(lf[47] /* chicken.file.posix#open/noctty */,0,C_fix((C_word)O_NOCTTY));
t30=C_set_block_item(lf[46] /* chicken.file.posix#open/fsync */,0,C_fix((C_word)O_FSYNC));
t31=C_set_block_item(lf[53] /* chicken.file.posix#open/sync */,0,C_fix((C_word)O_SYNC));
t32=C_set_block_item(lf[48] /* chicken.file.posix#open/noinherit */,0,C_fix(0));
t33=C_set_block_item(lf[126] /* chicken.process#spawn/overlay */,0,C_fix(0));
t34=C_set_block_item(lf[127] /* chicken.process#spawn/wait */,0,C_fix(0));
t35=C_set_block_item(lf[128] /* chicken.process#spawn/nowait */,0,C_fix(0));
t36=C_set_block_item(lf[129] /* chicken.process#spawn/nowaito */,0,C_fix(0));
t37=C_set_block_item(lf[130] /* chicken.process#spawn/detach */,0,C_fix(0));
t38=C_set_block_item(lf[66] /* chicken.file.posix#perm/isvtx */,0,C_fix((C_word)S_ISVTX));
t39=C_set_block_item(lf[65] /* chicken.file.posix#perm/isuid */,0,C_fix((C_word)S_ISUID));
t40=C_set_block_item(lf[64] /* chicken.file.posix#perm/isgid */,0,C_fix((C_word)S_ISGID));
t41=C_mutate((C_word*)lf[12]+1 /* (set! chicken.file.posix#file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4583,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t42=C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC);
t43=C_fix((C_word)S_IREAD);
t44=C_fix((C_word)S_IREAD);
t45=C_u_fixnum_or(t43,t44);
t46=C_u_fixnum_or(t42,t45);
t47=C_mutate((C_word*)lf[19]+1 /* (set! chicken.file.posix#file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4617,a[2]=t46,a[3]=((C_word)li94),tmp=(C_word)a,a+=4,tmp));
t48=C_mutate((C_word*)lf[11]+1 /* (set! chicken.file.posix#file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4649,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[23]+1 /* (set! chicken.file.posix#file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4680,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[28]+1 /* (set! chicken.file.posix#file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4720,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[18]+1 /* (set! chicken.file.posix#file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4757,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[24]+1 /* (set! chicken.file.posix#file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4789,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[117]+1 /* (set! chicken.process#create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5164,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t54=C_set_block_item(lf[157] /* chicken.process.signal#signal/term */,0,C_fix((C_word)SIGTERM));
t55=C_set_block_item(lf[151] /* chicken.process.signal#signal/kill */,0,C_fix((C_word)SIGKILL));
t56=C_set_block_item(lf[149] /* chicken.process.signal#signal/int */,0,C_fix((C_word)SIGINT));
t57=C_set_block_item(lf[147] /* chicken.process.signal#signal/hup */,0,C_fix((C_word)SIGHUP));
t58=C_set_block_item(lf[146] /* chicken.process.signal#signal/fpe */,0,C_fix((C_word)SIGFPE));
t59=C_set_block_item(lf[148] /* chicken.process.signal#signal/ill */,0,C_fix((C_word)SIGILL));
t60=C_set_block_item(lf[155] /* chicken.process.signal#signal/segv */,0,C_fix((C_word)SIGSEGV));
t61=C_set_block_item(lf[140] /* chicken.process.signal#signal/abrt */,0,C_fix((C_word)SIGABRT));
t62=C_set_block_item(lf[158] /* chicken.process.signal#signal/trap */,0,C_fix((C_word)SIGTRAP));
t63=C_set_block_item(lf[154] /* chicken.process.signal#signal/quit */,0,C_fix((C_word)SIGQUIT));
t64=C_set_block_item(lf[141] /* chicken.process.signal#signal/alrm */,0,C_fix((C_word)SIGALRM));
t65=C_set_block_item(lf[163] /* chicken.process.signal#signal/vtalrm */,0,C_fix((C_word)SIGVTALRM));
t66=C_set_block_item(lf[153] /* chicken.process.signal#signal/prof */,0,C_fix((C_word)SIGPROF));
t67=C_set_block_item(lf[150] /* chicken.process.signal#signal/io */,0,C_fix((C_word)SIGIO));
t68=C_set_block_item(lf[160] /* chicken.process.signal#signal/urg */,0,C_fix((C_word)SIGURG));
t69=C_set_block_item(lf[144] /* chicken.process.signal#signal/chld */,0,C_fix((C_word)SIGCHLD));
t70=C_set_block_item(lf[145] /* chicken.process.signal#signal/cont */,0,C_fix((C_word)SIGCONT));
t71=C_set_block_item(lf[156] /* chicken.process.signal#signal/stop */,0,C_fix((C_word)SIGSTOP));
t72=C_set_block_item(lf[159] /* chicken.process.signal#signal/tstp */,0,C_fix((C_word)SIGTSTP));
t73=C_set_block_item(lf[152] /* chicken.process.signal#signal/pipe */,0,C_fix((C_word)SIGPIPE));
t74=C_set_block_item(lf[165] /* chicken.process.signal#signal/xcpu */,0,C_fix((C_word)SIGXCPU));
t75=C_set_block_item(lf[166] /* chicken.process.signal#signal/xfsz */,0,C_fix((C_word)SIGXFSZ));
t76=C_set_block_item(lf[161] /* chicken.process.signal#signal/usr1 */,0,C_fix((C_word)SIGUSR1));
t77=C_set_block_item(lf[162] /* chicken.process.signal#signal/usr2 */,0,C_fix((C_word)SIGUSR2));
t78=C_set_block_item(lf[164] /* chicken.process.signal#signal/winch */,0,C_fix((C_word)SIGWINCH));
t79=C_set_block_item(lf[143] /* chicken.process.signal#signal/bus */,0,C_fix((C_word)SIGBUS));
t80=C_set_block_item(lf[142] /* chicken.process.signal#signal/break */,0,C_fix(0));
t81=C_a_i_list(&a,26,*((C_word*)lf[157]+1),*((C_word*)lf[151]+1),*((C_word*)lf[149]+1),*((C_word*)lf[147]+1),*((C_word*)lf[146]+1),*((C_word*)lf[148]+1),*((C_word*)lf[155]+1),*((C_word*)lf[140]+1),*((C_word*)lf[158]+1),*((C_word*)lf[154]+1),*((C_word*)lf[141]+1),*((C_word*)lf[163]+1),*((C_word*)lf[153]+1),*((C_word*)lf[150]+1),*((C_word*)lf[160]+1),*((C_word*)lf[144]+1),*((C_word*)lf[145]+1),*((C_word*)lf[156]+1),*((C_word*)lf[159]+1),*((C_word*)lf[152]+1),*((C_word*)lf[165]+1),*((C_word*)lf[166]+1),*((C_word*)lf[161]+1),*((C_word*)lf[162]+1),*((C_word*)lf[164]+1),*((C_word*)lf[143]+1));
t82=C_mutate((C_word*)lf[167]+1 /* (set! chicken.process.signal#signals-list ...) */,t81);
t83=C_mutate((C_word*)lf[134]+1 /* (set! chicken.process.signal#set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5220,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t84=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5269,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t85=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7732,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:573: chicken.base#getter-with-setter */
t86=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t86;
av2[1]=t84;
av2[2]=t85;
av2[3]=*((C_word*)lf[134]+1);
av2[4]=lf[479];
((C_proc)(void*)(*((C_word*)t86+1)))(5,av2);}}

/* chicken.process#process-sleep in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3857,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3861,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:615: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[270];
tp(4,av2);}}

/* k3859 in chicken.process#process-sleep in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3861,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_process_sleep(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#process-wait in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3863,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
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
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=t8;
t10=C_i_nullp(t6);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
t12=(C_truep(t4)?t4:C_fix(-1));
t13=t12;
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3882,a[2]=t13,a[3]=t9,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:622: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t14;
av2[2]=t13;
av2[3]=lf[272];
tp(4,av2);}}

/* k3880 in chicken.process#process-wait in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_3882,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[2],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:623: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a3886 in k3880 in chicken.process#process-wait in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3887,2,av);}
/* posix-common.scm:623: process-wait-impl */
f_6976(t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a3892 in k3880 in chicken.process#process-wait in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3893(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3893,5,av);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posix-common.scm:625: posix-error */
t6=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[91];
av2[3]=lf[272];
av2[4]=lf[273];
av2[5]=((C_word*)t0)[2];
f_2942(6,av2);}}
else{
/* posix-common.scm:626: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}}

/* chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_3934(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_3934,4,t1,t2,t3,t4);}
a=C_alloc(12);
t5=C_i_check_list_2(t2,t4);
t6=t2;
t7=C_u_i_length(t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3942,a[2]=t1,a[3]=t7,a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t9=C_a_i_fixnum_plus(&a,2,t7,C_fix(1));
/* posix-common.scm:642: chicken.memory#make-pointer-vector */
t10=*((C_word*)lf[281]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3942,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3950,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li53),tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:644: scheme#call-with-current-continuation */
t5=*((C_word*)lf[280]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3943 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3945,2,av);}
/* posix-common.scm:640: g985 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3950,3,av);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3956,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word)li52),tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:644: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[279]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a3955 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3956,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3962,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:644: k982 */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3961 in a3955 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3962,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3966,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:646: free-c-string-buffer */
f_4051(t2,((C_word*)t0)[3]);}

/* k3964 in a3961 in a3955 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3966,2,av);}
/* posix-common.scm:646: chicken.condition#signal */
t2=*((C_word*)lf[275]+1);{
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

/* a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_3971,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li49),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[7],a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4047,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12528 */
t5=t2;
f_3973(t5,t4);}

/* tmp12528 in a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_3973(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_3973,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3977,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3979(t6,t2,((C_word*)t0)[6],C_fix(0));}

/* k3975 in tmp12528 in a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3977,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop990 in tmp12528 in a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_3979(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3979,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_nullp(t2);
t5=(C_truep(t4)?t4:C_eqp(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_i_car(t2);
t7=C_i_check_string_2(t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3995,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4020,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=C_u_i_car(t10);
/* posix-common.scm:655: convert */
t12=((C_word*)t0)[6];{
C_word av2[3];
av2[0]=t12;
av2[1]=t9;
av2[2]=t11;
((C_proc)C_fast_retrieve_proc(t12))(3,av2);}}}

/* k3993 in doloop990 in tmp12528 in a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_3995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3995,2,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub973(t2,t1);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_4001(2,av2);}}
else{
/* posix-common.scm:657: chicken.base#error */
t6=*((C_word*)lf[101]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[278];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3999 in k3993 in doloop990 in tmp12528 in a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4001,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:658: chicken.memory#pointer-vector-set! */
t3=*((C_word*)lf[277]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4002 in k3999 in k3993 in doloop990 in tmp12528 in a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4004,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_3979(t5,((C_word*)t0)[5],t3,t4);}

/* k4018 in doloop990 in tmp12528 in a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4020,2,av);}
/* posix-common.scm:655: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* tmp22529 in a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4030(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4030,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4036,a[2]=t2,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:644: k982 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4035 in tmp22529 in a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4036,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k4045 in a3970 in a3949 in k3940 in chicken.posix#list->c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4047,2,av);}
a=C_alloc(3);
/* tmp22529 */
t2=((C_word*)t0)[2];
f_4030(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* chicken.posix#free-c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4051(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4051,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4055,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:663: chicken.memory#pointer-vector-length */
t4=*((C_word*)lf[284]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4053 in chicken.posix#free-c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4055(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4055,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4060,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4060(t6,((C_word*)t0)[3],C_fix(0));}

/* doloop1009 in k4053 in chicken.posix#free-c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4060(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4060,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4070,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:666: chicken.memory#pointer-vector-ref */
t5=*((C_word*)lf[283]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4068 in doloop1009 in k4053 in chicken.posix#free-c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4070,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
/* posix-common.scm:667: chicken.memory#free */
t3=*((C_word*)lf[282]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4060(t4,((C_word*)t0)[4],t3);}}

/* k4071 in k4068 in doloop1009 in k4053 in chicken.posix#free-c-string-buffer in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4073,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4060(t3,((C_word*)t0)[4],t2);}

/* chicken.posix#check-environment-list in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4085(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4085,3,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_check_list_2(t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4090,a[2]=t3,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4109,a[2]=t5,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=(
  f_4109(t7,t6)
);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* g1022 in chicken.posix#check-environment-list in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static C_word C_fcall f_4090(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t2=C_i_check_pair_2(t1,((C_word*)t0)[2]);
t3=t1;
t4=C_u_i_car(t3);
t5=C_i_check_string_2(t4,((C_word*)t0)[2]);
t6=t1;
t7=C_u_i_cdr(t6);
return(C_i_check_string_2(t7,((C_word*)t0)[2]));}

/* for-each-loop1021 in chicken.posix#check-environment-list in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static C_word C_fcall f_4109(C_word t0,C_word t1){
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
  /* posix-common.scm:672: g1022 */
  f_4090(((C_word*)t0)[2],t2)
);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* nop in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4132,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4134(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4134,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(10);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4138,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t3,a[6]=t2,a[7]=t6,a[8]=((C_word*)t0)[2],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:683: pathname-strip-directory */
t9=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_4138,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4144,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:685: list->c-string-buffer */
f_3934(t3,t2,((C_word*)t0)[9],((C_word*)t0)[6]);}

/* k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4144(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4144,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4147,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4152,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li68),tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:688: scheme#call-with-current-continuation */
t7=*((C_word*)lf[280]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k4145 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4147,2,av);}
/* posix-common.scm:683: g1057 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_4152,3,av);}
a=C_alloc(17);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4179,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word)li67),tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:688: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[279]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a4157 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4158,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4164,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:688: k1054 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4163 in a4157 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4164,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4168,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:690: free-c-string-buffer */
f_4051(t2,((C_word*)t0)[4]);}

/* k4166 in a4163 in a4157 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4168,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* posix-common.scm:691: free-c-string-buffer */
f_4051(t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* posix-common.scm:692: chicken.condition#signal */
t3=*((C_word*)lf[275]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4169 in k4166 in a4163 in a4157 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4171,2,av);}
/* posix-common.scm:692: chicken.condition#signal */
t2=*((C_word*)lf[275]+1);{
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

/* a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4179,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li64),tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4260,a[2]=((C_word*)t0)[9],a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:688: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a4184 in a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4185,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4189,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4199,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:696: check-environment-list */
f_4085(t3,((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t3=t2;
f_4189(t3,C_SCHEME_UNDEFINED);}}

/* k4187 in a4184 in a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4189(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4189,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:702: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* k4194 in k4187 in a4184 in a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4196,2,av);}
/* posix-common.scm:702: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k4197 in a4184 in a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4199(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_4199,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[4];
t8=C_i_check_list_2(t7,lf[288]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4224,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4226,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4226(t13,t9,t7);}

/* k4201 in k4197 in a4184 in a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4203,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4189(t3,t2);}

/* k4222 in k4197 in a4184 in a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4224,2,av);}
/* posix-common.scm:698: list->c-string-buffer */
f_3934(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* map-loop1065 in k4197 in a4184 in a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4226(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4226,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4251,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=C_u_i_cdr(t4);
/* posix-common.scm:699: scheme#string-append */
t7=*((C_word*)lf[104]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[289];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4249 in map-loop1065 in k4197 in a4184 in a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4251(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4251,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4226(t6,((C_word*)t0)[5],t5);}

/* a4259 in a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4260,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4266,a[2]=t2,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:688: k1054 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4265 in a4259 in a4178 in a4151 in k4142 in k4136 in chicken.posix#call-with-exec-args in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4266,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* check in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4291(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_4291,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:714: posix-error */
t6=lf[183];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=t2;
av2[4]=lf[290];
av2[5]=t3;
f_2942(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4304,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* posix-common.scm:715: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[239]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t6;
av2[2]=C_fix(1);
av2[3]=*((C_word*)lf[240]+1);
av2[4]=lf[291];
av2[5]=lf[230];
tp(6,av2);}}
else{
/* posix-common.scm:715: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[239]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t6;
av2[2]=C_fix(2);
av2[3]=*((C_word*)lf[240]+1);
av2[4]=lf[291];
av2[5]=lf[230];
tp(6,av2);}}}}

/* k4302 in check in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4304,2,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#open-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_4310,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_check_string_2(t2,lf[292]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[293]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4324,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[293]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4331,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:726: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[292];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[294]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4341,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:727: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[292];
tp(4,av2);}}
else{
/* posix-common.scm:711: ##sys#error */
t10=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[295];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k4322 in chicken.process#open-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4324,2,av);}
/* posix-common.scm:722: check */
f_4291(((C_word*)t0)[3],lf[292],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* k4329 in chicken.process#open-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4331,2,av);}
a=C_alloc(2);
t2=open_text_input_pipe(&a,1,t1);
/* posix-common.scm:722: check */
f_4291(((C_word*)t0)[3],lf[292],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k4339 in chicken.process#open-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4341,2,av);}
a=C_alloc(2);
t2=open_binary_input_pipe(&a,1,t1);
/* posix-common.scm:722: check */
f_4291(((C_word*)t0)[3],lf[292],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* chicken.process#open-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_4350,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_check_string_2(t2,lf[296]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[293]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4364,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[293]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4371,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:737: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[296];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[294]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:738: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[296];
tp(4,av2);}}
else{
/* posix-common.scm:711: ##sys#error */
t10=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[295];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k4362 in chicken.process#open-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4364,2,av);}
/* posix-common.scm:733: check */
f_4291(((C_word*)t0)[3],lf[296],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* k4369 in chicken.process#open-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4371,2,av);}
a=C_alloc(2);
t2=open_text_output_pipe(&a,1,t1);
/* posix-common.scm:733: check */
f_4291(((C_word*)t0)[3],lf[296],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k4379 in chicken.process#open-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4381,2,av);}
a=C_alloc(2);
t2=open_binary_output_pipe(&a,1,t1);
/* posix-common.scm:733: check */
f_4291(((C_word*)t0)[3],lf[296],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* chicken.process#close-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4390(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4390,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(1),C_SCHEME_TRUE,lf[297]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4397,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posix-common.scm:745: posix-error */
t8=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[188];
av2[3]=lf[297];
av2[4]=lf[298];
av2[5]=t2;
f_2942(6,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k4395 in chicken.process#close-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4397,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#close-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4405(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4405,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[299]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4412,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posix-common.scm:752: posix-error */
t8=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[188];
av2[3]=lf[299];
av2[4]=lf[300];
av2[5]=t2;
f_2942(6,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k4410 in chicken.process#close-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4412,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#with-input-from-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4420,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4424,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[118]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4422 in chicken.process#with-input-from-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4424(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_4424,2,av);}
a=C_alloc(19);
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4429,a[2]=t6,a[3]=t4,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4434,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4449,a[2]=t4,a[3]=t6,a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:758: ##sys#dynamic-wind */
t10=*((C_word*)lf[303]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=((C_word*)t0)[3];
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* a4428 in k4422 in chicken.process#with-input-from-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4429,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[301]+1));
t3=C_mutate((C_word*)lf[301]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4433 in k4422 in chicken.process#with-input-from-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4434,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4440,a[2]=((C_word*)t0)[2],a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:759: scheme#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_call_with_values(4,av2);}}

/* a4439 in a4433 in k4422 in chicken.process#with-input-from-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4440,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4444,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:761: chicken.process#close-input-pipe */
t4=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4442 in a4439 in a4433 in k4422 in chicken.process#with-input-from-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4444,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[302]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a4448 in k4422 in chicken.process#with-input-from-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4449,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[301]+1));
t3=C_mutate((C_word*)lf[301]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#call-with-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4454,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4458,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[119]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4456 in chicken.process#call-with-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4458,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4463,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li80),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4469,a[2]=t2,a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:767: scheme#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a4462 in k4456 in chicken.process#call-with-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4463,2,av);}
/* posix-common.scm:768: proc */
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

/* a4468 in k4456 in chicken.process#call-with-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4469,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4473,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:770: chicken.process#close-output-pipe */
t4=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4471 in a4468 in k4456 in chicken.process#call-with-output-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4473,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[302]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#call-with-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4478,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4482,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[118]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4480 in chicken.process#call-with-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4482,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4487,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4493,a[2]=t2,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:776: scheme#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a4486 in k4480 in chicken.process#call-with-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4487,2,av);}
/* posix-common.scm:777: proc */
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

/* a4492 in k4480 in chicken.process#call-with-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4493,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4497,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:779: chicken.process#close-input-pipe */
t4=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4495 in a4492 in k4480 in chicken.process#call-with-input-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4497,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[302]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#with-output-to-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4502,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4506,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[119]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4504 in chicken.process#with-output-to-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4506(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_4506,2,av);}
a=C_alloc(19);
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4511,a[2]=t6,a[3]=t4,a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4516,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4531,a[2]=t4,a[3]=t6,a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:785: ##sys#dynamic-wind */
t10=*((C_word*)lf[303]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=((C_word*)t0)[3];
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* a4510 in k4504 in chicken.process#with-output-to-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4511,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[304]+1));
t3=C_mutate((C_word*)lf[304]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4515 in k4504 in chicken.process#with-output-to-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4516,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4522,a[2]=((C_word*)t0)[2],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:786: scheme#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_call_with_values(4,av2);}}

/* a4521 in a4515 in k4504 in chicken.process#with-output-to-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4522,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4526,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:788: chicken.process#close-output-pipe */
t4=*((C_word*)lf[116]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4524 in a4521 in a4515 in k4504 in chicken.process#with-output-to-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4526,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[302]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a4530 in k4504 in chicken.process#with-output-to-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4531,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[304]+1));
t3=C_mutate((C_word*)lf[304]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#file-nonblocking! in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4536,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub1265(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#file-select-one in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4543,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub1270(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.file.posix#file-control in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4583,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4590,a[2]=t2,a[3]=t3,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:339: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t8;
av2[2]=t2;
av2[3]=lf[307];
tp(4,av2);}}

/* k4588 in chicken.file.posix#file-control in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4590,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:340: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[307];
tp(4,av2);}}

/* k4591 in k4588 in chicken.file.posix#file-control in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4593,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=C_fix((C_word)sizeof(long) * CHAR_BIT);
t7=C_i_foreign_ranged_integer_argumentp(((C_word*)t0)[4],t6);
t8=stub1277(C_SCHEME_UNDEFINED,t4,t5,t7);
t9=C_eqp(t8,C_fix(-1));
if(C_truep(t9)){
/* posixunix.scm:343: posix-error */
t10=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t10;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[188];
av2[3]=lf[307];
av2[4]=lf[308];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[3];
f_2942(7,av2);}}
else{
t10=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t10;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* chicken.file.posix#file-open in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4617,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4621,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_4621(t7,C_u_i_car(t6));}
else{
t6=t5;
f_4621(t6,((C_word*)t0)[2]);}}

/* k4619 in chicken.file.posix#file-open in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4621(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4621,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=C_i_check_string_2(((C_word*)t0)[2],lf[309]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4627,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:351: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[309];
tp(4,av2);}}

/* k4625 in k4619 in chicken.file.posix#file-open in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4627,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:352: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[309];
tp(4,av2);}}

/* k4628 in k4625 in k4619 in chicken.file.posix#file-open in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4630,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:353: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[309];
tp(4,av2);}}

/* k4632 in k4628 in k4625 in k4619 in chicken.file.posix#file-open in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_4634,2,av);}
a=C_alloc(4);
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4637,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:355: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[188];
av2[3]=lf[309];
av2[4]=lf[310];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[2];
av2[7]=((C_word*)t0)[3];
f_2942(8,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4635 in k4632 in k4628 in k4625 in k4619 in chicken.file.posix#file-open in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4637,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-close in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4649,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4653,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:360: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[312];
tp(4,av2);}}

/* k4651 in chicken.file.posix#file-close in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4653,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4658,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
f_4658(2,av2);}}

/* loop in k4651 in chicken.file.posix#file-close in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4658,2,av);}
t2=C_close(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t3)){
/* posixunix.scm:364: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[311]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
tp(3,av2);}}
else{
/* posixunix.scm:366: posix-error */
t4=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=lf[312];
av2[4]=lf[313];
av2[5]=((C_word*)t0)[2];
f_2942(6,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* chicken.file.posix#file-read in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4680,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4684,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:370: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[314];
tp(4,av2);}}

/* k4682 in chicken.file.posix#file-read in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4684,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:371: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[314];
tp(4,av2);}}

/* k4685 in k4682 in chicken.file.posix#file-read in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4687,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_car(t3);
f_4690(2,av2);}}
else{
/* posixunix.scm:372: scheme#make-string */
t3=*((C_word*)lf[317]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4688 in k4685 in k4682 in chicken.file.posix#file-read in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4690,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4693,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4693(2,av2);}}
else{
/* posixunix.scm:374: ##sys#signal-hook */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[191];
av2[3]=lf[314];
av2[4]=lf[316];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}
else{
/* posixunix.scm:374: ##sys#signal-hook */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[191];
av2[3]=lf[314];
av2[4]=lf[316];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k4691 in k4688 in k4685 in k4682 in chicken.file.posix#file-read in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,6)))){
C_save_and_reclaim((void *)f_4693,2,av);}
a=C_alloc(11);
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4696,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:377: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[188];
av2[3]=lf[314];
av2[4]=lf[315];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[4];
f_2942(7,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4694 in k4691 in k4688 in k4685 in k4682 in chicken.file.posix#file-read in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4696,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-write in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4720,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4724,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:382: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[318];
tp(4,av2);}}

/* k4722 in chicken.file.posix#file-write in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4724,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)t0)[3]))){
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4727(2,av2);}}
else{
/* posixunix.scm:384: ##sys#signal-hook */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
av2[3]=lf[318];
av2[4]=lf[320];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}
else{
/* posixunix.scm:384: ##sys#signal-hook */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
av2[3]=lf[318];
av2[4]=lf[320];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k4725 in k4722 in chicken.file.posix#file-write in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4727,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_4730(t4,C_u_i_car(t3));}
else{
t3=t2;
f_4730(t3,C_block_size(((C_word*)t0)[3]));}}

/* k4728 in k4725 in k4722 in chicken.file.posix#file-write in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4730(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4730,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:386: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[318];
tp(4,av2);}}

/* k4731 in k4728 in k4725 in k4722 in chicken.file.posix#file-write in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_4733,2,av);}
a=C_alloc(4);
t2=C_write(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4736,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:389: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[188];
av2[3]=lf[318];
av2[4]=lf[319];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[4];
f_2942(7,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4734 in k4731 in k4728 in k4725 in k4722 in chicken.file.posix#file-write in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4736,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-mkstemp in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4757,3,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[321]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4764,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:395: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[321];
tp(4,av2);}}

/* k4762 in chicken.file.posix#file-mkstemp in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4764(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4764,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_mkstemp(t2);
t4=C_block_size(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4770,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(C_fix(-1),t3);
if(C_truep(t7)){
/* posixunix.scm:399: posix-error */
t8=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[188];
av2[3]=lf[321];
av2[4]=lf[322];
av2[5]=((C_word*)t0)[3];
f_2942(6,av2);}}
else{
t8=t6;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_4770(2,av2);}}}

/* k4768 in k4762 in chicken.file.posix#file-mkstemp in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4770,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* posixunix.scm:400: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}

/* k4775 in k4768 in k4762 in chicken.file.posix#file-mkstemp in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4777,2,av);}
/* posixunix.scm:400: scheme#values */{
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

/* chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4789,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4793,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_4793(t7,C_u_i_car(t6));}
else{
t6=t5;
f_4793(t6,C_SCHEME_FALSE);}}

/* k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4793(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4793,2,t0,t1);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_not(((C_word*)t0)[3]))){
t4=t3;
f_4796(t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t4=t3;
f_4796(t4,C_a_i_list1(&a,1,((C_word*)t0)[3]));}
else{
t4=C_i_check_list_2(((C_word*)t0)[3],lf[323]);
t5=((C_word*)t0)[3];
t6=t3;
f_4796(t6,t5);}}}

/* k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4796(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4796,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4799,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_not(((C_word*)t0)[4]))){
t4=t3;
f_4799(t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[4]))){
t4=t3;
f_4799(t4,C_a_i_list1(&a,1,((C_word*)t0)[4]));}
else{
t4=C_i_check_list_2(((C_word*)t0)[4],lf[323]);
t5=((C_word*)t0)[4];
t6=t3;
f_4799(t6,t5);}}}

/* k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4799(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4799,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=C_u_i_length(((C_word*)t0)[2]);
t4=C_u_i_length(t2);
t5=C_fixnum_plus(t3,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4807,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t8=C_fix((C_word)sizeof(struct pollfd));
t9=C_fixnum_times(t6,t8);
/* posixunix.scm:419: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[327]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[327]+1);
av2[1]=t7;
av2[2]=t9;
tp(3,av2);}}

/* k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4807,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4810,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[9])){
/* posixunix.scm:421: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4810(2,av2);}}}

/* k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4810(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_4810,2,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5080,a[2]=((C_word*)t0)[2],a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
t3=(
  f_5080(t2,C_fix(0),((C_word*)t0)[3])
);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5038,a[2]=((C_word*)t0)[2],a[3]=((C_word)li101),tmp=(C_word)a,a+=4,tmp);
t5=(
  f_5038(t4,((C_word*)t0)[4],((C_word*)t0)[5])
);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5035,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:435: scheme#max */
t8=*((C_word*)lf[326]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_fix(0);
av2[3]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t7=t6;
f_5031(t7,C_fix(-1));}}

/* k4869 in k5029 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4871(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_4871,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4911,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4911(t7,t3,((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}

/* k4872 in k4869 in k5029 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_4874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4874,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4881,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(C_fixnump(((C_word*)t0)[4]))){
t4=C_i_memq(((C_word*)t0)[4],((C_word*)t0)[5]);
t5=t3;
f_4881(t5,(C_truep(t4)?((C_word*)t0)[4]:C_SCHEME_FALSE));}
else{
t4=t3;
f_4881(t4,((C_word*)t0)[5]);}}
else{
t4=t3;
f_4881(t4,C_SCHEME_FALSE);}}

/* k4879 in k4872 in k4869 in k5029 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_fcall f_4881(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4881,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
if(C_truep(C_i_memq(((C_word*)t0)[2],((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
/* posixunix.scm:456: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t2;
C_values(4,av2);}}
else{
/* posixunix.scm:456: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
/* posixunix.scm:456: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
C_values(4,av2);}}}
else{
/* posixunix.scm:456: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* lp in k4869 in k5029 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4911(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4911,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t4))){
/* posixunix.scm:449: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[325]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[325]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4940,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=t2;
t7=C_i_foreign_fixnum_argumentp(t6);
if(C_truep(((C_word*)t0)[3])){
t8=C_i_foreign_block_argumentp(((C_word*)t0)[3]);
t9=t5;
f_4940(t9,stub1449(C_SCHEME_UNDEFINED,t7,t8));}
else{
t8=t5;
f_4940(t8,stub1449(C_SCHEME_UNDEFINED,t7,C_SCHEME_FALSE));}}}

/* k4938 in lp in k4869 in k5029 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_fcall f_4940(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4940,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* posixunix.scm:454: lp */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4911(t7,((C_word*)t0)[6],t2,t4,t6);}
else{
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[3]);
/* posixunix.scm:455: lp */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4911(t4,((C_word*)t0)[6],t2,((C_word*)t0)[4],t3);}}

/* lp in k5029 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4970(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4970,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t4))){
/* posixunix.scm:441: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[325]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[325]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4999,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=t2;
t7=C_i_foreign_fixnum_argumentp(t6);
if(C_truep(((C_word*)t0)[3])){
t8=C_i_foreign_block_argumentp(((C_word*)t0)[3]);
t9=t5;
f_4999(t9,stub1430(C_SCHEME_UNDEFINED,t7,t8));}
else{
t8=t5;
f_4999(t8,stub1430(C_SCHEME_UNDEFINED,t7,C_SCHEME_FALSE));}}}

/* k4997 in lp in k5029 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_4999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4999,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* posixunix.scm:446: lp */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4970(t7,((C_word*)t0)[6],t2,t4,t6);}
else{
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[3]);
/* posixunix.scm:447: lp */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4970(t4,((C_word*)t0)[6],t2,((C_word*)t0)[4],t3);}}

/* k5029 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_5031(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,6)))){
C_save_and_reclaim_args((void *)trf_5031,2,t0,t1);}
a=C_alloc(15);
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_block_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=stub1405(C_SCHEME_UNDEFINED,t2,t3,t4);
if(C_truep(C_fixnum_lessp(t5,C_fix(0)))){
/* posixunix.scm:437: posix-error */
t6=lf[183];{
C_word av2[7];
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[188];
av2[3]=lf[323];
av2[4]=lf[324];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
f_2942(7,av2);}}
else{
t6=C_eqp(t5,C_fix(0));
if(C_truep(t6)){
t7=C_i_pairp(((C_word*)t0)[5]);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
/* posixunix.scm:438: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t8;
av2[3]=C_SCHEME_END_OF_LIST;
C_values(4,av2);}}
else{
/* posixunix.scm:438: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4871,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4970,a[2]=t9,a[3]=((C_word*)t0)[2],a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4970(t11,t7,C_fix(0),C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);}}}

/* k5033 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_5035,2,av);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
f_5031(t2,C_s_a_i_times(&a,2,t1,C_fix(1000)));}

/* doloop1364 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static C_word C_fcall f_5038(C_word t0,C_word t1,C_word t2){
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
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_car(t2);
t4=t1;
t5=C_i_foreign_fixnum_argumentp(t4);
t6=C_i_foreign_fixnum_argumentp(t3);
if(C_truep(((C_word*)t0)[2])){
t7=C_i_foreign_block_argumentp(((C_word*)t0)[2]);
t8=stub1390(C_SCHEME_UNDEFINED,t5,t6,t7);
t9=C_fixnum_plus(t1,C_fix(1));
t10=t2;
t11=C_u_i_cdr(t10);
t13=t9;
t14=t11;
t1=t13;
t2=t14;
goto loop;}
else{
t7=stub1390(C_SCHEME_UNDEFINED,t5,t6,C_SCHEME_FALSE);
t8=C_fixnum_plus(t1,C_fix(1));
t9=t2;
t10=C_u_i_cdr(t9);
t13=t8;
t14=t10;
t1=t13;
t2=t14;
goto loop;}}}

/* doloop1363 in k4808 in k4805 in k4797 in k4794 in k4791 in chicken.file.posix#file-select in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static C_word C_fcall f_5080(C_word t0,C_word t1,C_word t2){
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
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_car(t2);
t4=t1;
t5=C_i_foreign_fixnum_argumentp(t4);
t6=C_i_foreign_fixnum_argumentp(t3);
if(C_truep(((C_word*)t0)[2])){
t7=C_i_foreign_block_argumentp(((C_word*)t0)[2]);
t8=stub1373(C_SCHEME_UNDEFINED,t5,t6,t7);
t9=C_fixnum_plus(t1,C_fix(1));
t10=t2;
t11=C_u_i_cdr(t10);
t13=t9;
t14=t11;
t1=t13;
t2=t14;
goto loop;}
else{
t7=stub1373(C_SCHEME_UNDEFINED,t5,t6,C_SCHEME_FALSE);
t8=C_fixnum_plus(t1,C_fix(1));
t9=t2;
t10=C_u_i_cdr(t9);
t13=t8;
t14=t10;
t1=t13;
t2=t14;
goto loop;}}}

/* chicken.process#create-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,4)))){
C_save_and_reclaim((void*)f_5164,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5171,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_pipe(C_SCHEME_FALSE);
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
/* posixunix.scm:469: posix-error */
t7=lf[183];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[188];
av2[3]=lf[328];
av2[4]=lf[329];
f_2942(5,av2);}}
else{
/* posixunix.scm:470: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix((C_word)C_pipefds[ 0 ]);
av2[3]=C_fix((C_word)C_pipefds[ 1 ]);
C_values(4,av2);}}}

/* k5169 in chicken.process#create-pipe in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5171,2,av);}
/* posixunix.scm:470: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix((C_word)C_pipefds[ 0 ]);
av2[3]=C_fix((C_word)C_pipefds[ 1 ]);
C_values(4,av2);}}

/* chicken.process.signal#set-signal-mask! in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5220(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5220,3,av);}
a=C_alloc(9);
t3=C_i_check_list_2(t2,lf[330]);
t4=C_sigemptyset(C_fix(0));
t5=t2;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5232,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5244,a[2]=t8,a[3]=((C_word)li106),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_5244(t10,t6,t5);}

/* k5227 in for-each-loop1477 in chicken.process.signal#set-signal-mask! in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5229,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_sigaddset(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5230 in chicken.process.signal#set-signal-mask! in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5232,2,av);}
t2=C_sigprocmask_set(C_fix(0));
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:570: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[91];
av2[3]=lf[330];
av2[4]=lf[331];
f_2942(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* for-each-loop1477 in chicken.process.signal#set-signal-mask! in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_5244(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5244,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5254,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5229,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:566: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[330];
tp(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5252 in for-each-loop1477 in chicken.process.signal#set-signal-mask! in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5254,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5244(t3,((C_word*)t0)[4],t2);}

/* k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5269(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_5269,2,av);}
a=C_alloc(18);
t2=C_mutate((C_word*)lf[136]+1 /* (set! chicken.process.signal#signal-mask ...) */,t1);
t3=C_mutate((C_word*)lf[138]+1 /* (set! chicken.process.signal#signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5271,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[137]+1 /* (set! chicken.process.signal#signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5277,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[139]+1 /* (set! chicken.process.signal#signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5293,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5311,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7713,a[2]=((C_word)li211),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7716,a[2]=((C_word)li212),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:611: chicken.base#getter-with-setter */
t9=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=lf[478];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* chicken.process.signal#signal-masked? in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5271,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5275,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:587: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[332];
tp(4,av2);}}

/* k5273 in chicken.process.signal#signal-masked? in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5275,2,av);}
t2=C_sigprocmask_get(C_fix(0));
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_sigismember(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process.signal#signal-mask! in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5277,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5281,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:593: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[333];
tp(4,av2);}}

/* k5279 in chicken.process.signal#signal-mask! in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5281(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5281,2,av);}
t2=C_sigemptyset(C_fix(0));
t3=C_sigaddset(((C_word*)t0)[2]);
t4=C_sigprocmask_block(C_fix(0));
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* posixunix.scm:597: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[91];
av2[3]=lf[333];
av2[4]=lf[334];
f_2942(5,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* chicken.process.signal#signal-unmask! in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5293,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5297,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:601: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[335];
tp(4,av2);}}

/* k5295 in chicken.process.signal#signal-unmask! in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5297(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5297,2,av);}
t2=C_sigemptyset(C_fix(0));
t3=C_sigaddset(((C_word*)t0)[2]);
t4=C_sigprocmask_unblock(C_fix(0));
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* posixunix.scm:605: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[91];
av2[3]=lf[335];
av2[4]=lf[336];
f_2942(5,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5311,2,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[174]+1 /* (set! chicken.process-context.posix#current-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7694,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7697,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:620: chicken.base#getter-with-setter */
t6=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=lf[475];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5315,2,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[172]+1 /* (set! chicken.process-context.posix#current-effective-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7675,a[2]=((C_word)li207),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7678,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:630: chicken.base#getter-with-setter */
t6=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=lf[472];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5319,2,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[173]+1 /* (set! chicken.process-context.posix#current-group-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5323,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7656,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7659,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:639: chicken.base#getter-with-setter */
t6=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=lf[469];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5323(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,6)))){
C_save_and_reclaim((void *)f_5323,2,av);}
a=C_alloc(24);
t2=C_mutate((C_word*)lf[171]+1 /* (set! chicken.process-context.posix#current-effective-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[181]+1 /* (set! chicken.process-context.posix#user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5325,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[177]+1 /* (set! chicken.process-context.posix#current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5379,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[178]+1 /* (set! chicken.process-context.posix#current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5393,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[216] /* (set! chicken.posix#chown ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5407,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[179]+1 /* (set! chicken.process-context.posix#create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5454,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5471,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7616,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7634,a[2]=((C_word)li204),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:710: chicken.base#getter-with-setter */
t11=*((C_word*)lf[465]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
av2[4]=lf[466];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* chicken.process-context.posix#user-information in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_5325,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5332,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t8=t7;
f_5332(t8,C_getpwuid(t2));}
else{
t8=C_i_check_string_2(t2,lf[340]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5371,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:662: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[340];
tp(4,av2);}}}

/* k5330 in chicken.process-context.posix#user-information in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_5332(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5332,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?*((C_word*)lf[337]+1):*((C_word*)lf[338]+1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5345,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t5=*((C_word*)lf[339]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_user->pw_name);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5343 in k5330 in chicken.process-context.posix#user-information in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5345,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[339]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_user->pw_passwd);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5347 in k5343 in k5330 in chicken.process-context.posix#user-information in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5349,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[339]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_PW_GECOS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5351 in k5347 in k5343 in k5330 in chicken.process-context.posix#user-information in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_5353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5353,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_user->pw_dir);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5355 in k5351 in k5347 in k5343 in k5330 in chicken.process-context.posix#user-information in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_5357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_5357,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_user->pw_shell);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5359 in k5355 in k5351 in k5347 in k5343 in k5330 in chicken.process-context.posix#user-information in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_5361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_5361,2,av);}
/* posixunix.scm:663: g1545 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=C_fix((C_word)C_user->pw_uid);
av2[5]=C_fix((C_word)C_user->pw_gid);
av2[6]=((C_word*)t0)[6];
av2[7]=((C_word*)t0)[7];
av2[8]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}

/* k5369 in chicken.process-context.posix#user-information in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5371,2,av);}
t2=((C_word*)t0)[2];
f_5332(t2,C_getpwnam(t1));}

/* chicken.process-context.posix#current-user-name in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5379,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5387,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5391,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:676: chicken.process-context.posix#current-user-id */
t4=*((C_word*)lf[174]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5385 in chicken.process-context.posix#current-user-name in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5387,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_car(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5389 in chicken.process-context.posix#current-user-name in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5391,2,av);}
/* posixunix.scm:675: chicken.process-context.posix#user-information */
t2=*((C_word*)lf[181]+1);{
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

/* chicken.process-context.posix#current-effective-user-name in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5393,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5401,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5405,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:681: chicken.process-context.posix#current-effective-user-id */
t4=*((C_word*)lf[172]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5399 in chicken.process-context.posix#current-effective-user-name in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5401,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_car(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5403 in chicken.process-context.posix#current-effective-user-name in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5405,2,av);}
/* posixunix.scm:680: chicken.process-context.posix#user-information */
t2=*((C_word*)lf[181]+1);{
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

/* chicken.posix#chown in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_5407(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5407,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5411,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:685: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=t2;
tp(4,av2);}}

/* k5409 in chicken.posix#chown in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5411,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:686: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k5412 in k5409 in chicken.posix#chown in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5414,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5429,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:688: chicken.base#port? */
t4=*((C_word*)lf[193]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5415 in k5412 in k5409 in chicken.posix#chown in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5417,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:699: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[341];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
av2[7]=((C_word*)t0)[6];
f_2942(8,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5427 in k5412 in k5409 in chicken.posix#chown in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5429,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:689: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[73]+1);{
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
else{
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
t2=C_fchown(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_5417(2,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:694: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
/* posixunix.scm:695: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[191];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[342];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}}

/* k5431 in k5427 in k5412 in k5409 in chicken.posix#chown in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_5433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5433,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fchown(t1,((C_word*)t0)[3],((C_word*)t0)[4]);
f_5417(2,av2);}}

/* k5447 in k5427 in k5412 in k5409 in chicken.posix#chown in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_5449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5449,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_chown(t1,((C_word*)t0)[3],((C_word*)t0)[4]);
f_5417(2,av2);}}

/* chicken.process-context.posix#create-session in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5454,2,av);}
a=C_alloc(7);
t2=C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5458,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5464,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:705: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5456 in chicken.process-context.posix#create-session in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5458,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5462 in chicken.process-context.posix#create-session in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5464,2,av);}
/* posixunix.scm:706: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[343];
av2[3]=lf[344];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5471(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5471,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[180]+1 /* (set! chicken.process-context.posix#process-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[3]+1 /* (set! chicken.file.posix#create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5473,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5502,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t4;
av2[2]=t5;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* chicken.file.posix#create-symbolic-link in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5473(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5473,4,av);}
a=C_alloc(5);
t4=C_i_check_string_2(t2,lf[345]);
t5=C_i_check_string_2(t3,lf[345]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5494,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:735: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[345];
tp(4,av2);}}

/* k5492 in chicken.file.posix#create-symbolic-link in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5494,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5498,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:736: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[345];
tp(4,av2);}}

/* k5496 in k5492 in chicken.file.posix#create-symbolic-link in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5498,2,av);}
t2=C_symlink(((C_word*)t0)[2],t1);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:738: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=lf[346];
av2[4]=lf[347];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
f_2942(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5502(C_word c,C_word *av){
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
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(149,c,9)))){
C_save_and_reclaim((void *)f_5502,2,av);}
a=C_alloc(149);
t2=t1;
t3=C_mutate((C_word*)lf[348]+1 /* (set! ##sys#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5503,a[2]=t2,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! chicken.file.posix#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5522,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[15]+1 /* (set! chicken.file.posix#file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5643,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[362]+1 /* (set! ##sys#custom-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5665,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[376]+1 /* (set! ##sys#custom-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6178,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[26]+1 /* (set! chicken.file.posix#file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6433,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6468,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t14=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6532,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[16]+1 /* (set! chicken.file.posix#file-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6550,a[2]=t12,a[3]=t10,a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp));
t16=C_mutate((C_word*)lf[17]+1 /* (set! chicken.file.posix#file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6581,a[2]=t12,a[3]=t10,a[4]=((C_word)li153),tmp=(C_word)a,a+=5,tmp));
t17=C_mutate((C_word*)lf[25]+1 /* (set! chicken.file.posix#file-test-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6612,a[2]=t12,a[3]=t10,a[4]=((C_word)li154),tmp=(C_word)a,a+=5,tmp));
t18=C_mutate((C_word*)lf[27]+1 /* (set! chicken.file.posix#file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6639,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[2]+1 /* (set! chicken.file.posix#create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6682,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t20=C_fix((C_word)sizeof(struct tm));
t21=C_mutate((C_word*)lf[84]+1 /* (set! chicken.time.posix#string->time ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6728,a[2]=t20,a[3]=((C_word)li158),tmp=(C_word)a,a+=4,tmp));
t22=C_fix((C_word)sizeof(struct tm));
t23=C_mutate((C_word*)lf[80]+1 /* (set! chicken.time.posix#utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6765,a[2]=t22,a[3]=((C_word)li159),tmp=(C_word)a,a+=4,tmp));
t24=C_mutate((C_word*)lf[86]+1 /* (set! chicken.time.posix#local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6783,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[132]+1 /* (set! chicken.process.signal#set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6790,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[108]+1 /* (set! chicken.process#process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6799,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[107]+1 /* (set! chicken.process#process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6898,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate(&lf[271] /* (set! chicken.posix#process-wait-impl ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6976,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[176]+1 /* (set! chicken.process-context.posix#parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7014,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[110]+1 /* (set! chicken.process#process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7017,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate(&lf[407] /* (set! chicken.posix#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7042,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[109]+1 /* (set! chicken.process#process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7057,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7111,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp);
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7148,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp);
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7168,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp);
t36=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7180,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp);
t37=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7195,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp);
t38=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7209,a[2]=t37,a[3]=t36,a[4]=t34,a[5]=((C_word)li186),tmp=(C_word)a,a+=6,tmp);
t39=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7254,a[2]=t35,a[3]=((C_word)li187),tmp=(C_word)a,a+=4,tmp);
t40=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7265,a[2]=t35,a[3]=((C_word)li188),tmp=(C_word)a,a+=4,tmp);
t41=C_mutate(&lf[413] /* (set! chicken.posix#process-impl ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7276,a[2]=t38,a[3]=t39,a[4]=t33,a[5]=t40,a[6]=((C_word)li191),tmp=(C_word)a,a+=7,tmp));
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7332,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp);
t43=C_mutate((C_word*)lf[122]+1 /* (set! chicken.process#process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7403,a[2]=t42,a[3]=((C_word)li198),tmp=(C_word)a,a+=4,tmp));
t44=C_mutate((C_word*)lf[123]+1 /* (set! chicken.process#process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7469,a[2]=t42,a[3]=((C_word)li199),tmp=(C_word)a,a+=4,tmp));
t45=C_mutate((C_word*)lf[170]+1 /* (set! chicken.process-context.posix#set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7542,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[111]+1 /* (set! chicken.process#process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7561,a[2]=((C_word)li201),tmp=(C_word)a,a+=3,tmp));
t47=C_a_i_provide(&a,1,lf[419]);
t48=C_mutate((C_word*)lf[420]+1 /* (set! chicken.errno#errno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7567,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t49=C_set_block_item(lf[422] /* chicken.errno#errno/2big */,0,C_fix((C_word)E2BIG));
t50=C_set_block_item(lf[423] /* chicken.errno#errno/acces */,0,C_fix((C_word)EACCES));
t51=C_set_block_item(lf[424] /* chicken.errno#errno/again */,0,C_fix((C_word)EAGAIN));
t52=C_set_block_item(lf[425] /* chicken.errno#errno/badf */,0,C_fix((C_word)EBADF));
t53=C_set_block_item(lf[426] /* chicken.errno#errno/busy */,0,C_fix((C_word)EBUSY));
t54=C_set_block_item(lf[427] /* chicken.errno#errno/child */,0,C_fix((C_word)ECHILD));
t55=C_set_block_item(lf[428] /* chicken.errno#errno/deadlk */,0,C_fix((C_word)EDEADLK));
t56=C_set_block_item(lf[429] /* chicken.errno#errno/dom */,0,C_fix((C_word)EDOM));
t57=C_set_block_item(lf[430] /* chicken.errno#errno/exist */,0,C_fix((C_word)EEXIST));
t58=C_set_block_item(lf[431] /* chicken.errno#errno/fault */,0,C_fix((C_word)EFAULT));
t59=C_set_block_item(lf[432] /* chicken.errno#errno/fbig */,0,C_fix((C_word)EFBIG));
t60=C_set_block_item(lf[433] /* chicken.errno#errno/ilseq */,0,C_fix((C_word)EILSEQ));
t61=C_set_block_item(lf[434] /* chicken.errno#errno/intr */,0,C_fix((C_word)EINTR));
t62=C_set_block_item(lf[435] /* chicken.errno#errno/inval */,0,C_fix((C_word)EINVAL));
t63=C_set_block_item(lf[436] /* chicken.errno#errno/io */,0,C_fix((C_word)EIO));
t64=C_set_block_item(lf[437] /* chicken.errno#errno/isdir */,0,C_fix((C_word)EISDIR));
t65=C_set_block_item(lf[438] /* chicken.errno#errno/mfile */,0,C_fix((C_word)EMFILE));
t66=C_set_block_item(lf[439] /* chicken.errno#errno/mlink */,0,C_fix((C_word)EMLINK));
t67=C_set_block_item(lf[440] /* chicken.errno#errno/nametoolong */,0,C_fix((C_word)ENAMETOOLONG));
t68=C_set_block_item(lf[441] /* chicken.errno#errno/nfile */,0,C_fix((C_word)ENFILE));
t69=C_set_block_item(lf[442] /* chicken.errno#errno/nodev */,0,C_fix((C_word)ENODEV));
t70=C_set_block_item(lf[443] /* chicken.errno#errno/noent */,0,C_fix((C_word)ENOENT));
t71=C_set_block_item(lf[444] /* chicken.errno#errno/noexec */,0,C_fix((C_word)ENOEXEC));
t72=C_set_block_item(lf[445] /* chicken.errno#errno/nolck */,0,C_fix((C_word)ENOLCK));
t73=C_set_block_item(lf[446] /* chicken.errno#errno/nomem */,0,C_fix((C_word)ENOMEM));
t74=C_set_block_item(lf[447] /* chicken.errno#errno/nospc */,0,C_fix((C_word)ENOSPC));
t75=C_set_block_item(lf[448] /* chicken.errno#errno/nosys */,0,C_fix((C_word)ENOSYS));
t76=C_set_block_item(lf[449] /* chicken.errno#errno/notdir */,0,C_fix((C_word)ENOTDIR));
t77=C_set_block_item(lf[450] /* chicken.errno#errno/notempty */,0,C_fix((C_word)ENOTEMPTY));
t78=C_set_block_item(lf[451] /* chicken.errno#errno/notty */,0,C_fix((C_word)ENOTTY));
t79=C_set_block_item(lf[452] /* chicken.errno#errno/nxio */,0,C_fix((C_word)ENXIO));
t80=C_set_block_item(lf[453] /* chicken.errno#errno/perm */,0,C_fix((C_word)EPERM));
t81=C_set_block_item(lf[454] /* chicken.errno#errno/pipe */,0,C_fix((C_word)EPIPE));
t82=C_set_block_item(lf[455] /* chicken.errno#errno/range */,0,C_fix((C_word)ERANGE));
t83=C_set_block_item(lf[456] /* chicken.errno#errno/rofs */,0,C_fix((C_word)EROFS));
t84=C_set_block_item(lf[457] /* chicken.errno#errno/spipe */,0,C_fix((C_word)ESPIPE));
t85=C_set_block_item(lf[458] /* chicken.errno#errno/srch */,0,C_fix((C_word)ESRCH));
t86=C_set_block_item(lf[459] /* chicken.errno#errno/wouldblock */,0,C_fix((C_word)EWOULDBLOCK));
t87=C_set_block_item(lf[460] /* chicken.errno#errno/xdev */,0,C_fix((C_word)EXDEV));
t88=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t88;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t88+1)))(2,av2);}}

/* ##sys#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5503,4,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5508,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:747: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* k5506 in read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5508,2,av);}
t2=C_do_readlink(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:749: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[349];
av2[5]=((C_word*)t0)[5];
f_2942(6,av2);}}
else{
/* posixunix.scm:750: scheme#substring */
t3=*((C_word*)lf[350]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,5)))){
C_save_and_reclaim((void*)f_5522,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_check_string_2(t2,lf[351]);
if(C_truep(t5)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5537,a[2]=t2,a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5543,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:756: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t7;
av2[3]=t8;
C_call_with_values(4,av2);}}
else{
/* posixunix.scm:771: ##sys#read-symbolic-link */
t7=*((C_word*)lf[348]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[351];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* a5536 in chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5537,2,av);}
/* posixunix.scm:756: chicken.pathname#decompose-directory */
t2=*((C_word*)lf[352]+1);{
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

/* a5542 in chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5543(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5543,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5551,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_truep(t2)?t2:lf[357]);
if(C_truep(t3)){
/* posixunix.scm:758: scheme#string-append */
t7=*((C_word*)lf[104]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* posixunix.scm:758: scheme#string-append */
t7=*((C_word*)lf[104]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[358];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k5549 in a5542 in chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_5551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5551,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5553,a[2]=t3,a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5553(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* loop in k5549 in a5542 in chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_fcall f_5553(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5553,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5563,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
/* posixunix.scm:761: chicken.pathname#make-pathname */
t6=*((C_word*)lf[353]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t4;
av2[2]=t3;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k5561 in loop in k5549 in a5542 in chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_5563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_5563,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:762: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[356]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[356]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[351];
tp(6,av2);}}

/* k5567 in k5561 in loop in k5549 in a5542 in chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in ... */
static void C_ccall f_5569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_5569,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5578,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5581,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:764: chicken.file.posix#symbolic-link? */
t6=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* posixunix.scm:770: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[188];
av2[3]=lf[351];
av2[4]=lf[355];
av2[5]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k5576 in k5567 in k5561 in loop in k5549 in a5542 in chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in ... */
static void C_ccall f_5578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5578,2,av);}
/* posixunix.scm:763: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5553(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5579 in k5567 in k5561 in loop in k5549 in a5542 in chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in ... */
static void C_ccall f_5581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5581,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:765: ##sys#read-symbolic-link */
t3=*((C_word*)lf[348]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[351];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* posixunix.scm:763: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5553(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* k5582 in k5579 in k5567 in k5561 in loop in k5549 in a5542 in chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in ... */
static void C_ccall f_5584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5584,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:766: chicken.pathname#absolute-pathname? */
t4=*((C_word*)lf[354]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5588 in k5582 in k5579 in k5567 in k5561 in loop in k5549 in a5542 in chicken.file.posix#read-symbolic-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in ... */
static void C_ccall f_5590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5590,2,av);}
if(C_truep(t1)){
/* posixunix.scm:763: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5553(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* posixunix.scm:768: chicken.pathname#make-pathname */
t2=*((C_word*)lf[353]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k5622 in chicken.file.posix#file-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5624,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5628,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[3]);
/* posixunix.scm:774: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub1611(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5626 in k5622 in chicken.file.posix#file-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_5628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5628,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1611(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5643(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5643,4,av);}
a=C_alloc(9);
t4=C_i_check_string_2(t2,lf[359]);
t5=C_i_check_string_2(t3,lf[359]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5663,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t2;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5624,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t8)){
t11=C_i_foreign_string_argumentp(t8);
/* posixunix.scm:774: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t10;
av2[2]=t11;
tp(3,av2);}}
else{
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
f_5624(2,av2);}}}

/* k5661 in chicken.file.posix#file-link in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5663,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:779: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=lf[360];
av2[4]=lf[361];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2942(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_5665,c,av);}
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
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(1):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?*((C_word*)lf[363]+1):C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_i_nullp(t19);
t21=(C_truep(t20)?C_SCHEME_FALSE:C_i_car(t19));
t22=t21;
t23=C_i_nullp(t19);
t24=(C_truep(t23)?C_SCHEME_END_OF_LIST:C_i_cdr(t19));
t25=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5693,a[2]=t12,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t22,a[7]=t1,a[8]=t17,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t7)){
/* posixunix.scm:784: ##sys#file-nonblocking! */
t26=*((C_word*)lf[305]+1);{
C_word *av2=av;
av2[0]=t26;
av2[1]=t25;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t26+1)))(3,av2);}}
else{
t26=t25;{
C_word *av2=av;
av2[0]=t26;
av2[1]=C_SCHEME_UNDEFINED;
f_5693(2,av2);}}}

/* k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_5693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5693,2,av);}
a=C_alloc(9);
t2=C_fixnump(((C_word*)t0)[2]);
t3=(C_truep(t2)?((C_word*)t0)[2]:C_block_size(((C_word*)t0)[2]));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5699,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
/* posixunix.scm:786: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
f_5699(2,av2);}}}

/* k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_5699(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(80,c,8)))){
C_save_and_reclaim((void *)f_5699,2,av);}
a=C_alloc(80);
t2=t1;
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li123),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5729,a[2]=t6,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5737,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=t6,a[10]=((C_word)li125),tmp=(C_word)a,a+=11,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5833,a[2]=t11,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5839,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=t9,a[6]=((C_word)li126),tmp=(C_word)a,a+=7,tmp);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5864,a[2]=t6,a[3]=t4,a[4]=t7,a[5]=((C_word)li127),tmp=(C_word)a,a+=6,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5876,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word)li128),tmp=(C_word)a,a+=7,tmp);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5892,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=t9,a[6]=((C_word)li129),tmp=(C_word)a,a+=7,tmp);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5907,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t9,a[6]=((C_word)li131),tmp=(C_word)a,a+=7,tmp);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5983,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t9,a[6]=((C_word)li135),tmp=(C_word)a,a+=7,tmp);
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6102,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=((C_word)li136),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:836: chicken.port#make-input-port */
t20=*((C_word*)lf[375]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t20;
av2[1]=t12;
av2[2]=t13;
av2[3]=t14;
av2[4]=t15;
av2[5]=t16;
av2[6]=t17;
av2[7]=t18;
av2[8]=t19;
((C_proc)(void*)(*((C_word*)t20+1)))(9,av2);}}

/* ready? in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_fcall f_5700(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5700,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5704,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:791: ##sys#file-select-one */
t3=*((C_word*)lf[306]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5702 in ready? in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_5704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5704,2,av);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t4=(C_truep(t3)?t3:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* posixunix.scm:796: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[364];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
f_2942(7,av2);}}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_eqp(C_fix(1),t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* peek in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static C_word C_fcall f_5729(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;{}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
return(C_SCHEME_END_OF_FILE);}
else{
t1=C_subchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
return(t1);}}

/* fetch in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_fcall f_5737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_5737,2,t0,t1);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word)li124),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];{
C_word av2[2];
av2[0]=t5;
av2[1]=t1;
f_5743(2,av2);}}

/* loop in fetch in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_5743(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,6)))){
C_save_and_reclaim((void *)f_5743,2,av);}
a=C_alloc(11);
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t5=(C_truep(t4)?t4:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5762,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:811: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[366]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[366]+1);
av2[1]=t6;
av2[2]=*((C_word*)lf[367]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[368];
tp(5,av2);}}
else{
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t6)){
/* posixunix.scm:815: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[311]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
tp(3,av2);}}
else{
/* posixunix.scm:816: posix-error */
t7=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[369];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[7];
f_2942(7,av2);}}}}
else{
t4=(C_truep(((C_word*)t0)[8])?C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5795,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:820: more? */
t6=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[9])+1,t2);
t6=C_set_block_item(((C_word*)t0)[10],0,C_fix(0));
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* k5760 in loop in fetch in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in ... */
static void C_ccall f_5762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5762,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:812: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[365]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[365]+1);
av2[1]=t2;
tp(2,av2);}}

/* k5763 in k5760 in loop in fetch in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in ... */
static void C_ccall f_5765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5765,2,av);}
/* posixunix.scm:813: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_5743(2,av2);}}

/* k5793 in loop in fetch in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in ... */
static void C_ccall f_5795(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_5795,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:822: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[365]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[365]+1);
av2[1]=t2;
tp(2,av2);}}
else{
t2=C_read(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5804,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(((C_word*)t3)[1],C_fix(-1));
if(C_truep(t5)){
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t7=(C_truep(t6)?t6:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t7)){
t8=C_set_block_item(t3,0,C_fix(0));
t9=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t3)[1]);
t10=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t11=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
/* posixunix.scm:829: posix-error */
t8=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[188];
av2[3]=((C_word*)t0)[9];
av2[4]=lf[370];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[10];
f_2942(7,av2);}}}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t3)[1]);
t7=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k5796 in k5793 in loop in fetch in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in ... */
static void C_ccall f_5798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5798,2,av);}
/* posixunix.scm:823: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_5743(2,av2);}}

/* k5802 in k5793 in loop in fetch in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in ... */
static void C_ccall f_5804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5804,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5831 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_5833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5833,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(3),((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5838 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_5839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5839,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5843,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm:839: fetch */
t3=((C_word*)t0)[5];
f_5737(t3,t2);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5843(2,av2);}}}

/* k5841 in a5838 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_5843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5843,2,av);}
t2=(
  /* posixunix.scm:840: peek */
  f_5729(((C_word*)t0)[2])
);
if(C_truep(C_eofp(t2))){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t4=C_set_block_item(((C_word*)t0)[4],0,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a5863 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_5864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5864,2,av);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posixunix.scm:845: ready? */
t3=((C_word*)t0)[4];
f_5700(t3,t1);}}

/* a5875 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_5876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_5876,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5880,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_close(((C_word*)t0)[3]);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:848: posix-error */
t4=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[371];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[5];
f_2942(7,av2);}}
else{
/* posixunix.scm:849: on-close */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}

/* k5878 in a5875 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_5880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5880,2,av);}
/* posixunix.scm:849: on-close */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a5891 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_5892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5892,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5896,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm:852: fetch */
t3=((C_word*)t0)[5];
f_5737(t3,t2);}
else{
/* posixunix.scm:853: peek */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  /* posixunix.scm:853: peek */
  f_5729(((C_word*)t0)[2])
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5894 in a5891 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_5896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5896,2,av);}
/* posixunix.scm:853: peek */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
  /* posixunix.scm:853: peek */
  f_5729(((C_word*)t0)[3])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5906 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_5907(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5907,6,av);}
a=C_alloc(9);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t7=t6;
f_5915(t7,t3);}
else{
t7=C_block_size(t4);
t8=t6;
f_5915(t8,C_fixnum_difference(t7,t5));}}

/* k5913 in a5906 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_fcall f_5915(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,5)))){
C_save_and_reclaim_args((void *)trf_5915,2,t0,t1);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word)li130),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_5917(t5,((C_word*)t0)[7],t1,C_fix(0),((C_word*)t0)[8]);}

/* loop in k5913 in a5906 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in ... */
static void C_fcall f_5917(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_5917,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_eqp(C_fix(0),t2);
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
/* posixunix.scm:862: loop */
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5965,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:864: fetch */
t7=((C_word*)t0)[7];
f_5737(t7,t6);}}}

/* k5963 in loop in k5913 in a5906 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in ... */
static void C_ccall f_5965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5965,2,av);}
t2=C_eqp(C_fix(0),((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* posixunix.scm:867: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5917(t3,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* a5982 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_5983(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5983,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:870: fetch */
t5=((C_word*)t0)[5];
f_5737(t5,t4);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5987(2,av2);}}}

/* k5985 in a5982 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_5987(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5987,2,av);}
a=C_alloc(15);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];
t3=(C_truep(t2)?t2:C_fixnum_difference(*((C_word*)lf[372]+1),((C_word*)((C_word*)t0)[2])[1]));
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6001,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li133),tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6057,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word)li134),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:874: ##sys#call-with-values */{
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

/* a6000 in k5985 in a5982 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in ... */
static void C_ccall f_6001(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6001,2,av);}
a=C_alloc(8);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li132),tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:875: ##sys#scan-buffer-line */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[373]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[373]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)((C_word*)t0)[2])[1];
av2[5]=t4;
tp(6,av2);}}

/* a6010 in a6000 in k5985 in a5982 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in ... */
static void C_ccall f_6011(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6011,3,av);}
a=C_alloc(7);
t3=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:882: scheme#values */{
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
t4=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],t3);
t5=C_set_block_item(((C_word*)t0)[3],0,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:885: fetch */
t7=((C_word*)t0)[6];
f_5737(t7,t6);}}

/* k6029 in a6010 in a6000 in k5985 in a5982 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in ... */
static void C_ccall f_6031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6031,2,av);}
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[3])[1],t2);
/* posixunix.scm:887: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=t3;
C_values(5,av2);}}
else{
/* posixunix.scm:890: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* a6056 in k5985 in a5982 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in ... */
static void C_ccall f_6057(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6057,5,av);}
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

/* a6101 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_6102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6102,3,av);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[374];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:903: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
tp(5,av2);}}}

/* k6110 in a6101 in k5697 in k5691 in custom-input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_6112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6112,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_6178,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+8);
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
t6=C_i_nullp(t5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_i_car(t5));
t8=C_i_nullp(t5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(0):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_nullp(t14);
t16=(C_truep(t15)?*((C_word*)lf[363]+1):C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6200,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t12,a[6]=t1,a[7]=t17,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
/* posixunix.scm:912: ##sys#file-nonblocking! */
t21=*((C_word*)lf[305]+1);{
C_word *av2=av;
av2[0]=t21;
av2[1]=t20;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}
else{
t21=t20;{
C_word *av2=av;
av2[0]=t21;
av2[1]=C_SCHEME_UNDEFINED;
f_6200(2,av2);}}}

/* k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6200(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,4)))){
C_save_and_reclaim((void *)f_6200,2,av);}
a=C_alloc(26);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6201,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li139),tmp=(C_word)a,a+=7,tmp);
t7=C_fixnump(((C_word*)t0)[5]);
t8=(C_truep(t7)?((C_word*)t0)[5]:C_block_size(((C_word*)t0)[5]));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6267,a[2]=t3,a[3]=t6,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t11=C_eqp(C_fix(0),t9);
if(C_truep(t11)){
t12=t10;
f_6267(t12,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6308,a[2]=t3,a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp));}
else{
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6322,a[2]=t10,a[3]=t9,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
/* posixunix.scm:935: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t13=t12;{
C_word *av2=av;
av2[0]=t13;
av2[1]=((C_word*)t0)[5];
f_6322(2,av2);}}}}

/* poke1762 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6201(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6201,4,av);}
a=C_alloc(12);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6207,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word)li138),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
f_6207(2,av2);}}

/* loop in poke1762 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_6207(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_6207,2,av);}
a=C_alloc(6);
t2=C_write(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(C_fix(-1),t2);
if(C_truep(t3)){
t4=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t5=(C_truep(t4)?t4:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6226,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:921: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[365]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[365]+1);
av2[1]=t6;
tp(2,av2);}}
else{
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t6)){
/* posixunix.scm:924: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[311]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
tp(3,av2);}}
else{
/* posixunix.scm:926: posix-error */
t7=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[188];
av2[4]=lf[377];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[8];
f_2942(7,av2);}}}}
else{
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6257,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:928: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k6224 in loop in poke1762 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_6226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6226,2,av);}
/* posixunix.scm:922: poke */
t2=((C_word*)((C_word*)t0)[2])[1];{
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
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k6255 in loop in poke1762 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_6257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6257,2,av);}
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
/* posixunix.scm:928: poke */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t1;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k6265 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_fcall f_6267(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,4)))){
C_save_and_reclaim_args((void *)trf_6267,2,t0,t1);}
a=C_alloc(22);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6272,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6278,a[2]=((C_word*)t0)[4],a[3]=((C_word)li140),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6284,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word)li141),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6300,a[2]=((C_word*)t0)[4],a[3]=((C_word)li142),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:953: chicken.port#make-output-port */
t10=*((C_word*)lf[379]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k6270 in k6265 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_6272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6272,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(3),((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a6277 in k6265 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_6278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6278,3,av);}
/* posixunix.scm:955: store */
t3=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* a6283 in k6265 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_6284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_6284,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6288,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_close(((C_word*)t0)[3]);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:958: posix-error */
t4=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[378];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[5];
f_2942(7,av2);}}
else{
/* posixunix.scm:959: on-close */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}

/* k6286 in a6283 in k6265 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_6288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6288,2,av);}
/* posixunix.scm:959: on-close */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a6299 in k6265 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_6300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6300,2,av);}
/* posixunix.scm:961: store */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* f_6308 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6308,3,av);}
if(C_truep(t2)){
t3=C_block_size(t2);
/* posixunix.scm:934: poke */
t4=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6320 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6322,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[2];
f_6267(t5,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6323,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li145),tmp=(C_word)a,a+=7,tmp));}

/* f_6323 in k6320 in k6198 in custom-output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_6323(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_6323,3,av);}
a=C_alloc(11);
if(C_truep(t2)){
t3=C_fixnum_difference(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t4=C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6340,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word)li144),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6340(t8,t1,t3,C_fix(0),t4);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:951: poke */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* loop */
static void C_fcall f_6340(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_6340,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:941: poke */
t7=((C_word*)((C_word*)t0)[5])[1];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
if(C_truep(C_fixnum_lessp(t2,t4))){
t6=C_substring_copy(((C_word*)t0)[7],((C_word*)t0)[6],t3,t2,((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_difference(t4,t2);
/* posixunix.scm:946: loop */
t10=t1;
t11=C_fix(0);
t12=t2;
t13=t7;
t1=t10;
t2=t11;
t3=t12;
t4=t13;
goto loop;}
else{
t6=C_substring_copy(((C_word*)t0)[7],((C_word*)t0)[6],t3,t4,((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t4);
t8=C_set_block_item(((C_word*)t0)[2],0,t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* k6348 in loop */
static void C_ccall f_6350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6350,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
/* posixunix.scm:943: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6340(t3,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),((C_word*)t0)[6]);}

/* chicken.file.posix#file-truncate in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6433,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6437,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:970: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[380];
tp(4,av2);}}

/* k6435 in chicken.file.posix#file-truncate in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6437,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6450,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6457,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:971: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[380];
tp(4,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t4=C_ftruncate(((C_word*)t0)[3],((C_word*)t0)[4]);
t5=t2;
f_6443(t5,C_fixnum_lessp(t4,C_fix(0)));}
else{
/* posixunix.scm:973: ##sys#error */
t4=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[380];
av2[3]=lf[382];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}}

/* k6441 in k6435 in chicken.file.posix#file-truncate in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_fcall f_6443(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_6443,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm:975: posix-error */
t2=lf[183];{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=lf[380];
av2[4]=lf[381];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2942(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6448 in k6435 in chicken.file.posix#file-truncate in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6450,2,av);}
t2=((C_word*)t0)[2];
f_6443(t2,C_fixnum_lessp(t1,C_fix(0)));}

/* k6455 in k6435 in chicken.file.posix#file-truncate in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6457,2,av);}
t2=C_truncate(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_6443(t3,C_fixnum_lessp(t2,C_fix(0)));}

/* setup in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_6468(C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_6468,4,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_i_nullp(t3);
t6=(C_truep(t5)?C_fix(0):C_i_car(t3));
t7=t6;
t8=C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_TRUE:C_i_car(t9));
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_i_nullp(t9);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t16=t2;
t17=t4;
t18=C_i_check_port_2(t16,C_fix(0),C_SCHEME_TRUE,t17);
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6486,a[2]=t2,a[3]=t7,a[4]=t13,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:989: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t19;
av2[2]=t7;
av2[3]=t4;
tp(4,av2);}}

/* k6484 in setup in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6486,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(C_SCHEME_TRUE,((C_word*)((C_word*)t0)[4])[1]);
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_6489(2,av2);}}
else{
/* posixunix.scm:992: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}

/* k6487 in k6484 in setup in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_6489,2,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?C_fix((C_word)F_RDLCK):C_fix((C_word)F_WRLCK));
t4=C_flock_setup(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[383],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* err in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_6532(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_6532,4,t1,t2,t3,t4);}
t5=C_slot(t3,C_fix(1));
t6=C_slot(t3,C_fix(2));
t7=C_slot(t3,C_fix(3));
/* posixunix.scm:996: posix-error */
t8=lf[183];{
C_word av2[8];
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=t4;
av2[4]=t2;
av2[5]=t5;
av2[6]=t6;
av2[7]=t7;
f_2942(8,av2);}}

/* chicken.file.posix#file-lock in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_6550,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6556,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word)li150),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
f_6556(2,av2);}}

/* loop in chicken.file.posix#file-lock in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6556,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6560,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1000: setup */
f_6468(t2,((C_word*)t0)[2],((C_word*)t0)[6],lf[385]);}

/* k6558 in loop in chicken.file.posix#file-lock in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6560,2,av);}
t2=C_flock_lock(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t3)){
/* posixunix.scm:1003: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[311]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
/* posixunix.scm:1004: err */
f_6532(((C_word*)t0)[3],lf[384],t1,lf[385]);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.file.posix#file-lock/blocking in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_6581,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6587,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word)li152),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
f_6587(2,av2);}}

/* loop in chicken.file.posix#file-lock/blocking in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6587,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6591,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1009: setup */
f_6468(t2,((C_word*)t0)[2],((C_word*)t0)[6],lf[387]);}

/* k6589 in loop in chicken.file.posix#file-lock/blocking in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6591,2,av);}
t2=C_flock_lockw(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t3)){
/* posixunix.scm:1012: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[311]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
/* posixunix.scm:1013: err */
f_6532(((C_word*)t0)[3],lf[386],t1,lf[387]);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.file.posix#file-test-lock in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_6612,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6616,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1017: setup */
f_6468(t4,t2,t3,lf[389]);}

/* k6614 in chicken.file.posix#file-test-lock in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6616(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6616,2,av);}
t2=C_flock_test(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_eqp(t2,C_fix(0));
t5=C_i_not(t4);
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(t5)?t2:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* posixunix.scm:1019: err */
f_6532(((C_word*)t0)[3],lf[388],t1,lf[389]);}}

/* chicken.file.posix#file-unlock in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6639(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_6639,3,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,lf[383],lf[390]);
t4=C_slot(t2,C_fix(2));
t5=C_slot(t2,C_fix(3));
t6=C_flock_setup(C_fix((C_word)F_UNLCK),t4,t5);
t7=C_slot(t2,C_fix(1));
t8=C_flock_lock(t7);
if(C_truep(C_fixnum_lessp(t8,C_fix(0)))){
t9=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6668,a[2]=t2,a[3]=((C_word)li155),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1028: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[311]+1);
av2[1]=t1;
av2[2]=t10;
tp(3,av2);}}
else{
/* posixunix.scm:1030: posix-error */
t10=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t10;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=lf[390];
av2[4]=lf[391];
av2[5]=t2;
f_2942(6,av2);}}}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* a6667 in chicken.file.posix#file-unlock in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6668,2,av);}
/* posixunix.scm:1029: chicken.file.posix#file-unlock */
t2=*((C_word*)lf[27]+1);{
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

/* chicken.file.posix#create-fifo in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_6682,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_check_string_2(t2,lf[392]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6689,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=t5;
f_6689(t7,C_u_i_car(t6));}
else{
t6=C_fixnum_or(C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC),C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t7=t5;
f_6689(t7,C_fixnum_or(C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC),t6));}}

/* k6687 in chicken.file.posix#create-fifo in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_6689(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6689,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6692,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1039: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[392];
tp(4,av2);}}

/* k6690 in k6687 in chicken.file.posix#create-fifo in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6692,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1040: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[392];
tp(4,av2);}}

/* k6704 in k6690 in k6687 in chicken.file.posix#create-fifo in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_6706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6706,2,av);}
t2=C_mkfifo(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1041: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=lf[392];
av2[4]=lf[393];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[2];
f_2942(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* chicken.time.posix#string->time in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_6728,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?lf[394]:C_i_car(t3));
t6=t5;
t7=C_i_check_string_2(t2,lf[395]);
t8=C_i_check_string_2(t6,lf[395]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6745,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1052: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[395];
tp(4,av2);}}

/* k6743 in chicken.time.posix#string->time in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6745,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6749,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1052: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6747 in k6743 in chicken.time.posix#string->time in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6749,2,av);}
a=C_alloc(17);
t2=t1;
t3=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1052: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k6755 in k6747 in k6743 in chicken.time.posix#string->time in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_6757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6757,2,av);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub1895(C_SCHEME_UNDEFINED,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub1895(C_SCHEME_UNDEFINED,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#utc-time->seconds in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6765,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6769,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1057: check-time-vector */
f_3624(t3,lf[396],t2);}

/* k6767 in chicken.time.posix#utc-time->seconds in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6769,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1058: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k6771 in k6767 in chicken.time.posix#utc-time->seconds in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6773,2,av);}
a=C_alloc(7);
t2=C_a_timegm(&a,2,((C_word*)t0)[2],t1);
if(C_truep(C_i_nequalp(C_fix(-1),t2))){
/* posixunix.scm:1060: ##sys#error */
t3=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[396];
av2[3]=lf[397];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#local-timezone-abbreviation in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6783,2,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub1922(t2);
/* posixunix.scm:1064: ##sys#peek-c-string */
t4=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* chicken.process.signal#set-alarm! in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6790,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub1926(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#process-fork in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,4)))){
C_save_and_reclaim((void*)f_6799,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
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
C_word t16;
C_word t17;
C_word t18;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=t4;
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=t9;
t11=C_i_nullp(t7);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t13=stub1950(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
t14=stub1930(C_SCHEME_UNDEFINED);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6830,a[2]=t5,a[3]=t15,a[4]=t10,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t17=C_eqp(C_fix(-1),t15);
if(C_truep(t17)){
/* posixunix.scm:1090: posix-error */
t18=lf[183];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t18;
av2[1]=t16;
av2[2]=lf[91];
av2[3]=lf[401];
av2[4]=lf[402];
f_2942(5,av2);}}
else{
t18=t16;{
C_word *av2=av;
av2[0]=t18;
av2[1]=C_SCHEME_UNDEFINED;
f_6830(2,av2);}}}

/* k6828 in chicken.process#process-fork in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6830,2,av);}
a=C_alloc(7);
t2=(C_truep(((C_word*)t0)[2])?C_eqp(((C_word*)t0)[3],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[398]+1):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6858,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6844,a[2]=((C_word*)t0)[2],a[3]=((C_word)li164),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1091: g1957 */
t5=t3;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a6843 in k6828 in chicken.process#process-fork in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6844,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6850,a[2]=((C_word*)t0)[2],a[3]=((C_word)li163),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1096: ##sys#call-with-cthulhu */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[400]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[400]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a6849 in a6843 in k6828 in chicken.process#process-fork in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_6850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6850,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6854,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1098: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6852 in a6849 in a6843 in k6828 in chicken.process#process-fork in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_6854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6854,2,av);}
/* posixunix.scm:1099: chicken.base#exit */
t2=*((C_word*)lf[399]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f_6858 in k6828 in chicken.process#process-fork in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_6858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6858,3,av);}
/* posixunix.scm:1094: thunk */
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* chicken.process#process-execute in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,7)))){
C_save_and_reclaim((void*)f_6898,c,av);}
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
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6922,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6925,a[2]=t2,a[3]=((C_word)li167),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1104: call-with-exec-args */
t18=lf[287];
f_4134(t18,t1,lf[403],t2,t16,t5,t9,t17);}

/* a6921 in chicken.process#process-execute in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6922,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6924 in chicken.process#process-execute in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6925(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6925,5,av);}
t5=(C_truep(t4)?C_u_i_execve(t2,t3,t4):C_u_i_execvp(t2,t3));
t6=C_eqp(t5,C_fix(-1));
if(C_truep(t6)){
/* posixunix.scm:1111: posix-error */
t7=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[91];
av2[3]=lf[403];
av2[4]=lf[404];
av2[5]=((C_word*)t0)[2];
f_2942(6,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* chicken.posix#process-wait-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_6976(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6976,3,t1,t2,t3);}
a=C_alloc(5);
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=C_waitpid(t2,t4);
t6=C_WIFEXITED(C_fix((C_word)C_wait_status));
t7=C_eqp(t5,C_fix(-1));
t8=(C_truep(t7)?C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6992,a[2]=t2,a[3]=t3,a[4]=((C_word)li169),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1120: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[311]+1);
av2[1]=t1;
av2[2]=t9;
tp(3,av2);}}
else{
if(C_truep(t6)){
t9=C_WEXITSTATUS(C_fix((C_word)C_wait_status));
/* posixunix.scm:1122: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=t9;
C_values(5,av2);}}
else{
if(C_truep(C_WIFSIGNALED(C_fix((C_word)C_wait_status)))){
t9=C_WTERMSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm:1122: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=t9;
C_values(5,av2);}}
else{
t9=C_WSTOPSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm:1122: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=t9;
C_values(5,av2);}}}}}

/* a6991 in chicken.posix#process-wait-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_6992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6992,2,av);}
/* posixunix.scm:1121: process-wait-impl */
f_6976(t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* chicken.process-context.posix#parent-process-id in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7014,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1996(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#process-signal in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_7017,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7021,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_7021(t6,C_u_i_car(t5));}
else{
t5=t4;
f_7021(t5,C_fix((C_word)SIGTERM));}}

/* k7019 in chicken.process#process-signal in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7021(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7021,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7024,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1135: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[405];
tp(4,av2);}}

/* k7022 in k7019 in chicken.process#process-signal in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_7024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7024,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1136: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[405];
tp(4,av2);}}

/* k7025 in k7022 in k7019 in chicken.process#process-signal in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_7027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7027,2,av);}
t2=C_kill(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
/* posixunix.scm:1138: posix-error */
t4=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[91];
av2[3]=lf[405];
av2[4]=lf[406];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[3];
f_2942(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* chicken.posix#shell-command in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7042(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7042,1,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7046,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1141: chicken.process-context#get-environment-variable */
t3=*((C_word*)lf[409]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[410];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7044 in chicken.posix#shell-command in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7046,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[408];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.process#process-run in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_7057,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7061,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_7061(t6,C_u_i_car(t5));}
else{
t5=t4;
f_7061(t5,C_SCHEME_FALSE);}}

/* k7059 in chicken.process#process-run in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7061(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7061,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7064,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1149: chicken.process#process-fork */
t4=*((C_word*)lf[108]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7062 in k7059 in chicken.process#process-run in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_7064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7064,2,av);}
a=C_alloc(4);
t2=C_eqp(C_fix(0),t1);
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[3])){
/* posixunix.scm:1151: chicken.process#process-execute */
t3=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7083,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1154: shell-command */
f_7042(t3);}}}

/* k7081 in k7062 in k7059 in chicken.process#process-run in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_7083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7083,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_a_i_list2(&a,2,lf[411],t2);
/* posixunix.scm:1153: chicken.process#process-execute */
t4=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7105 in k7189 in connect-child in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_7107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7107,2,av);}
/* posixunix.scm:1181: chicken.file.posix#file-close */
t2=*((C_word*)lf[11]+1);{
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

/* make-on-close in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7111(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7111,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(9);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7113,a[2]=t4,a[3]=t5,a[4]=t6,a[5]=t7,a[6]=t3,a[7]=t2,a[8]=((C_word)li177),tmp=(C_word)a,a+=9,tmp);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* f_7113 in make-on-close in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7113(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_7113,2,av);}
a=C_alloc(9);
t2=C_i_vector_set(((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);
t3=C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[4]);
t4=(C_truep(t3)?C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7128,a[2]=((C_word*)t0)[6],a[3]=((C_word)li175),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7134,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word)li176),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1187: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a7127 */
static void C_ccall f_7128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7128,2,av);}
/* posixunix.scm:1187: process-wait-impl */
f_6976(t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* a7133 */
static void C_ccall f_7134(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7134,5,av);}
if(C_truep(t3)){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* posixunix.scm:1189: ##sys#signal-hook */
t5=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[91];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[412];
av2[5]=((C_word*)t0)[3];
av2[6]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}

/* needed-pipe in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7148(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_7148,2,t1,t2);}
a=C_alloc(6);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7157,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7163,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1194: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7156 in needed-pipe in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7157,2,av);}
/* posixunix.scm:1194: chicken.process#create-pipe */
t2=*((C_word*)lf[117]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7162 in needed-pipe in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7163,4,av);}
a=C_alloc(3);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* connect-parent in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7168(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7168,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(t3)){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7179,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1200: chicken.file.posix#file-close */
t9=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7177 in connect-parent in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7179,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* connect-child in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7180(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7180,4,t1,t2,t3,t4);}
a=C_alloc(5);
if(C_truep(t3)){
t5=C_i_car(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7191,a[2]=t1,a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1206: chicken.file.posix#file-close */
t10=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7189 in connect-child in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7191(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7191,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_eqp(t4,t3);
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7107,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1180: chicken.file.posix#duplicate-fileno */
t7=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* swapped-ends in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static C_word C_fcall f_7195(C_word *a,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
if(C_truep(t1)){
t2=C_i_cdr(t1);
t3=t1;
t4=C_u_i_car(t3);
return(C_a_i_cons(&a,2,t2,t4));}
else{
return(C_SCHEME_FALSE);}}

/* spawn in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7209(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_7209,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(12);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7213,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=t7,a[9]=t5,a[10]=t6,a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1215: needed-pipe */
f_7148(t8,t6);}

/* k7211 in spawn in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7213,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1216: needed-pipe */
f_7148(t3,((C_word*)t0)[9]);}

/* k7214 in k7211 in spawn in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_7216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7216,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7219,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1217: needed-pipe */
f_7148(t3,((C_word*)t0)[9]);}

/* k7217 in k7214 in k7211 in spawn in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_7219(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_7219,2,av);}
a=C_alloc(23);
t2=t1;
t3=(
  /* posixunix.scm:1219: swapped-ends */
  f_7195(C_a_i(&a,3),((C_word*)t0)[3])
);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7230,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7232,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[3],a[12]=((C_word*)t0)[12],a[13]=((C_word)li185),tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm:1220: chicken.process#process-fork */
t7=*((C_word*)lf[108]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k7228 in k7217 in k7214 in k7211 in spawn in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_7230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7230,2,av);}
/* posixunix.scm:1218: scheme#values */{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
C_values(6,av2);}}

/* a7231 in k7217 in k7214 in k7211 in spawn in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_7232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_7232,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7236,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1222: connect-child */
f_7180(t2,((C_word*)t0)[11],((C_word*)t0)[12],*((C_word*)lf[38]+1));}

/* k7234 in a7231 in k7217 in k7214 in k7211 in spawn in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in ... */
static void C_ccall f_7236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_7236,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(
  /* posixunix.scm:1223: swapped-ends */
  f_7195(C_a_i(&a,3),((C_word*)t0)[10])
);
/* posixunix.scm:1223: connect-child */
f_7180(t2,t3,((C_word*)t0)[11],*((C_word*)lf[39]+1));}

/* k7237 in k7234 in a7231 in k7217 in k7214 in k7211 in spawn in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in ... */
static void C_ccall f_7239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_7239,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(
  /* posixunix.scm:1224: swapped-ends */
  f_7195(C_a_i(&a,3),((C_word*)t0)[7])
);
/* posixunix.scm:1224: connect-child */
f_7180(t2,t3,((C_word*)t0)[9],*((C_word*)lf[37]+1));}

/* k7240 in k7237 in k7234 in a7231 in k7217 in k7214 in k7211 in spawn in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in ... */
static void C_ccall f_7242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7242,2,av);}
/* posixunix.scm:1225: chicken.process#process-execute */
t2=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7254(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7254,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(6);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7258,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1228: connect-parent */
f_7168(t7,t4,t5);}

/* k7256 in input-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7258,2,av);}
if(C_truep(t1)){
/* posixunix.scm:1229: ##sys#custom-input-port */
t2=*((C_word*)lf[362]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(256);
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7265(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7265,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(6);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7269,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1232: connect-parent */
f_7168(t7,t4,t5);}

/* k7267 in output-port in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7269,2,av);}
if(C_truep(t1)){
/* posixunix.scm:1233: ##sys#custom-output-port */
t2=*((C_word*)lf[376]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(0);
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.posix#process-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7276(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,6)))){
C_save_and_reclaim_args((void *)trf_7276,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(21);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7282,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=((C_word)li189),tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7288,a[2]=t7,a[3]=t6,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word)li190),tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1235: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t9;
av2[3]=t10;
C_call_with_values(4,av2);}}

/* a7281 in chicken.posix#process-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7282,2,av);}
/* posixunix.scm:1236: spawn */
t2=((C_word*)t0)[2];
f_7209(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* a7287 in chicken.posix#process-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7288(C_word c,C_word *av){
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(26,c,7)))){
C_save_and_reclaim((void *)f_7288,6,av);}
a=C_alloc(26);
t6=C_i_not(((C_word*)t0)[2]);
t7=C_i_not(((C_word*)t0)[3]);
t8=C_i_not(((C_word*)t0)[4]);
t9=C_a_i_vector3(&a,3,t6,t7,t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7299,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[8],a[10]=t10,a[11]=((C_word*)t0)[9],a[12]=t3,a[13]=((C_word*)t0)[3],tmp=(C_word)a,a+=14,tmp);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7319,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1244: make-on-close */
f_7111(t12,((C_word*)t0)[6],t5,t10,C_fix(0),C_fix(1),C_fix(2));}

/* k7297 in a7287 in chicken.posix#process-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_7299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,7)))){
C_save_and_reclaim((void *)f_7299,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7303,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7315,a[2]=((C_word*)t0)[11],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1247: make-on-close */
f_7111(t4,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[10],C_fix(1),C_fix(0),C_fix(2));}

/* k7301 in k7297 in a7287 in chicken.posix#process-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_7303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,7)))){
C_save_and_reclaim((void *)f_7303,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7311,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1251: make-on-close */
f_7111(t4,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[11],C_fix(2),C_fix(0),C_fix(1));}

/* k7305 in k7301 in k7297 in a7287 in chicken.posix#process-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_7307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7307,2,av);}
/* posixunix.scm:1241: scheme#values */{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
C_values(6,av2);}}

/* k7309 in k7301 in k7297 in a7287 in chicken.posix#process-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in ... */
static void C_ccall f_7311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7311,2,av);}
/* posixunix.scm:1249: input-port */
t2=((C_word*)t0)[2];
f_7254(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k7313 in k7297 in a7287 in chicken.posix#process-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_7315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7315,2,av);}
/* posixunix.scm:1245: output-port */
t2=((C_word*)t0)[2];
f_7265(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k7317 in a7287 in chicken.posix#process-impl in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_7319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7319,2,av);}
/* posixunix.scm:1242: input-port */
t2=((C_word*)t0)[2];
f_7254(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* %process in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7332(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(27,0,3)))){
C_save_and_reclaim_args((void *)trf_7332,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(27);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7334,a[2]=t2,a[3]=((C_word)li194),tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_string_2(((C_word*)t8)[1],t2);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7375,a[2]=t2,a[3]=t8,a[4]=t9,a[5]=t6,a[6]=t3,a[7]=t1,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixunix.scm:1264: chkstrlst */
t13=t10;
f_7334(t13,t12,((C_word*)t9)[1]);}
else{
t13=((C_word*)t8)[1];
t14=C_a_i_list2(&a,2,lf[411],t13);
t15=C_set_block_item(t9,0,t14);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7401,a[2]=t8,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1267: shell-command */
f_7042(t16);}}

/* chkstrlst in %process in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7334(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7334,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7339,a[2]=((C_word*)t0)[2],a[3]=((C_word)li192),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7348,a[2]=t4,a[3]=((C_word)li193),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  f_7348(t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* g2121 in chkstrlst in %process in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static C_word C_fcall f_7339(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_check_string_2(t1,((C_word*)t0)[2]));}

/* for-each-loop2120 in chkstrlst in %process in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static C_word C_fcall f_7348(C_word t0,C_word t1){
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
  /* posixunix.scm:1261: g2121 */
  f_7339(((C_word*)t0)[2],t2)
);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k7373 in %process in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7375,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm:1268: check-environment-list */
f_4085(t2,((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7378(2,av2);}}}

/* k7376 in k7373 in %process in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 in ... */
static void C_ccall f_7378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_7378,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li195),tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1269: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[7];
av2[2]=t2;
av2[3]=((C_word*)t0)[8];
C_call_with_values(4,av2);}}

/* a7382 in k7376 in k7373 in %process in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in ... */
static void C_ccall f_7383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_7383,2,av);}
/* posixunix.scm:1270: process-impl */
t2=lf[413];
f_7276(t2,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* k7399 in %process in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7401,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_7375(2,av2);}}

/* chicken.process#process in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,7)))){
C_save_and_reclaim((void*)f_7403,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
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
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
t14=C_i_nullp(t11);
t15=(C_truep(t14)?C_SCHEME_END_OF_LIST:C_i_cdr(t11));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7427,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1274: %process */
f_7332(t1,lf[414],C_SCHEME_FALSE,t2,t5,t9,t16);}

/* a7426 in chicken.process#process in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7427(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7427,6,av);}
/* posixunix.scm:1276: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}

/* chicken.process#process* in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,7)))){
C_save_and_reclaim((void*)f_7469,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
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
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=C_i_nullp(t11);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_i_car(t11));
if(C_truep(C_i_nullp(t11))){
/* posixunix.scm:1279: %process */
f_7332(t1,lf[415],C_SCHEME_TRUE,t2,t5,t9,*((C_word*)lf[302]+1));}
else{
t14=C_i_cdr(t11);
/* posixunix.scm:1279: %process */
f_7332(t1,lf[415],C_SCHEME_TRUE,t2,t5,t9,*((C_word*)lf[302]+1));}}

/* k7532 in chicken.process-context.posix#set-root-directory! in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7534,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub2191(C_SCHEME_UNDEFINED,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process-context.posix#set-root-directory! in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7542(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7542,3,av);}
a=C_alloc(7);
t3=C_i_check_string_2(t2,lf[416]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7559,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=t2;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7534,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t6)){
t8=C_i_foreign_string_argumentp(t6);
/* posixunix.scm:1287: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t5;{
C_word *av2=av;
av2[0]=t8;
av2[1]=stub2191(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k7557 in chicken.process-context.posix#set-root-directory! in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7559,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:1291: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=lf[416];
av2[4]=lf[417];
av2[5]=((C_word*)t0)[3];
f_2942(6,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.process#process-spawn in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7561,2,av);}
/* posixunix.scm:1295: chicken.base#error */
t2=*((C_word*)lf[101]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[111];
av2[3]=lf[418];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.errno#errno in k5500 in k5469 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7567,2,av);}
/* posix.scm:374: ##sys#errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[421]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[421]+1);
av2[1]=t1;
tp(2,av2);}}

/* a7615 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7616,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7620,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:712: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[461];
tp(4,av2);}}

/* k7618 in a7615 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7620,2,av);}
a=C_alloc(8);
t2=C_getpgid(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7623,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7629,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:715: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7621 in k7618 in a7615 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7623,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7627 in k7618 in a7615 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7629,2,av);}
/* posixunix.scm:716: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[461];
av2[3]=lf[462];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7633 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7634,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7638,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:719: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[463];
tp(4,av2);}}

/* k7636 in a7633 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7638,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:720: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[463];
tp(4,av2);}}

/* k7639 in k7636 in a7633 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7641,2,av);}
a=C_alloc(5);
t2=C_setpgid(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7650,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:722: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7648 in k7639 in k7636 in a7633 in k5321 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7650,2,av);}
/* posixunix.scm:723: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[463];
av2[3]=lf[464];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a7655 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7656,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1527(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7658 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7659,3,av);}
a=C_alloc(4);
t3=C_setegid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7669,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:643: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7667 in a7658 in k5317 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7669,2,av);}
/* posixunix.scm:644: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[467];
av2[3]=lf[468];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7674 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7675,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1523(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7677 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7678,3,av);}
a=C_alloc(4);
t3=C_setgid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7688,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:634: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7686 in a7677 in k5313 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7688,2,av);}
/* posixunix.scm:635: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[470];
av2[3]=lf[471];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7693 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7694,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1519(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7696 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7697,3,av);}
a=C_alloc(4);
t3=C_seteuid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7707,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:624: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7705 in a7696 in k5309 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7707,2,av);}
/* posixunix.scm:625: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[473];
av2[3]=lf[474];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7712 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7713,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1515(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7715 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7716,3,av);}
a=C_alloc(4);
t3=C_setuid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7726,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:615: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7724 in a7715 in k5267 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7726,2,av);}
/* posixunix.scm:616: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[476];
av2[3]=lf[477];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7731 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7732(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7732,2,av);}
a=C_alloc(6);
t2=C_sigprocmask_get(C_fix(0));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7738,a[2]=t4,a[3]=((C_word)li213),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_7738(t6,t1,*((C_word*)lf[167]+1),C_SCHEME_END_OF_LIST);}

/* loop in a7731 in k3853 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_fcall f_7738(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_7738,4,t0,t1,t2,t3);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=t2;
t6=C_u_i_cdr(t5);
if(C_truep(C_sigismember(t4))){
t7=C_a_i_cons(&a,2,t4,t3);
/* posixunix.scm:580: loop */
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t7=t3;
/* posixunix.scm:580: loop */
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* a7761 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7762,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7766,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:605: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[480];
tp(4,av2);}}

/* k7764 in a7761 in k3619 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7766,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(*((C_word*)lf[268]+1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7770 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_7771,c,av);}
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7778,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
/* posix-common.scm:530: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[482];
tp(4,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_7778(2,av2);}}}

/* k7776 in a7770 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7778,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_umask(((C_word*)t0)[2]);
if(C_truep(((C_word*)t0)[2])){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_umask(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=C_umask(C_fix(0));
if(C_truep(((C_word*)t0)[2])){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_umask(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* a7795 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7796,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7800,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:535: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[482];
tp(4,av2);}}

/* k7798 in a7795 in k3402 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7800,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_umask(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7801 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7802,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7806,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7817,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:371: chicken.base#port? */
t5=*((C_word*)lf[193]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7804 in a7801 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_7806,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7809,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t2,C_fix(0)))){
/* posix-common.scm:380: posix-error */
t4=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[188];
av2[3]=lf[484];
av2[4]=lf[485];
av2[5]=((C_word*)t0)[3];
f_2942(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7807 in k7804 in a7801 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7809,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7815 in a7801 in k3191 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_7817,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[230]);
if(C_truep(t3)){
t4=C_ftell(&a,1,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_7806(2,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_fix(-1);
f_7806(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_7806(2,av2);}}
else{
/* posix-common.scm:378: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[191];
av2[3]=lf[484];
av2[4]=lf[486];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* a7837 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_7838,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7842,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:296: stat */
f_2960(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[199]);}

/* k7840 in a7837 in k3187 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7842,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_perm);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7843 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_7844,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7848,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:289: stat */
f_2960(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[489]);}

/* k7846 in a7843 in k3183 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7848,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7849 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_7850,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7854,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:283: stat */
f_2960(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[491]);}

/* k7852 in a7849 in k2633 in k2630 in k2627 in k2624 in k2621 in k2618 */
static void C_ccall f_7854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7854,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_posix_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("posix"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_posix_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2639))){
C_save(t1);
C_rereclaim2(2639*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,493);
lf[0]=C_h_intern(&lf[0],5, C_text("posix"));
lf[1]=C_h_intern(&lf[1],19, C_text("chicken.file.posix#"));
lf[2]=C_h_intern(&lf[2],30, C_text("chicken.file.posix#create-fifo"));
lf[3]=C_h_intern(&lf[3],39, C_text("chicken.file.posix#create-symbolic-link"));
lf[4]=C_h_intern(&lf[4],37, C_text("chicken.file.posix#read-symbolic-link"));
lf[5]=C_h_intern(&lf[5],35, C_text("chicken.file.posix#duplicate-fileno"));
lf[6]=C_h_intern(&lf[6],30, C_text("chicken.file.posix#fcntl/dupfd"));
lf[7]=C_h_intern(&lf[7],30, C_text("chicken.file.posix#fcntl/getfd"));
lf[8]=C_h_intern(&lf[8],30, C_text("chicken.file.posix#fcntl/getfl"));
lf[9]=C_h_intern(&lf[9],30, C_text("chicken.file.posix#fcntl/setfd"));
lf[10]=C_h_intern(&lf[10],30, C_text("chicken.file.posix#fcntl/setfl"));
lf[11]=C_h_intern(&lf[11],29, C_text("chicken.file.posix#file-close"));
lf[12]=C_h_intern(&lf[12],31, C_text("chicken.file.posix#file-control"));
lf[13]=C_h_intern(&lf[13],37, C_text("chicken.file.posix#file-creation-mode"));
lf[14]=C_h_intern(&lf[14],29, C_text("chicken.file.posix#file-group"));
lf[15]=C_h_intern(&lf[15],28, C_text("chicken.file.posix#file-link"));
lf[16]=C_h_intern(&lf[16],28, C_text("chicken.file.posix#file-lock"));
lf[17]=C_h_intern(&lf[17],37, C_text("chicken.file.posix#file-lock/blocking"));
lf[18]=C_h_intern(&lf[18],31, C_text("chicken.file.posix#file-mkstemp"));
lf[19]=C_h_intern(&lf[19],28, C_text("chicken.file.posix#file-open"));
lf[20]=C_h_intern(&lf[20],29, C_text("chicken.file.posix#file-owner"));
lf[21]=C_h_intern(&lf[21],35, C_text("chicken.file.posix#file-permissions"));
lf[22]=C_h_intern(&lf[22],32, C_text("chicken.file.posix#file-position"));
lf[23]=C_h_intern(&lf[23],28, C_text("chicken.file.posix#file-read"));
lf[24]=C_h_intern(&lf[24],30, C_text("chicken.file.posix#file-select"));
lf[25]=C_h_intern(&lf[25],33, C_text("chicken.file.posix#file-test-lock"));
lf[26]=C_h_intern(&lf[26],32, C_text("chicken.file.posix#file-truncate"));
lf[27]=C_h_intern(&lf[27],30, C_text("chicken.file.posix#file-unlock"));
lf[28]=C_h_intern(&lf[28],29, C_text("chicken.file.posix#file-write"));
lf[29]=C_h_intern(&lf[29],28, C_text("chicken.file.posix#file-type"));
lf[30]=C_h_intern(&lf[30],32, C_text("chicken.file.posix#block-device\077"));
lf[31]=C_h_intern(&lf[31],36, C_text("chicken.file.posix#character-device\077"));
lf[32]=C_h_intern(&lf[32],29, C_text("chicken.file.posix#directory\077"));
lf[33]=C_h_intern(&lf[33],24, C_text("chicken.file.posix#fifo\077"));
lf[34]=C_h_intern(&lf[34],32, C_text("chicken.file.posix#regular-file\077"));
lf[35]=C_h_intern(&lf[35],26, C_text("chicken.file.posix#socket\077"));
lf[36]=C_h_intern(&lf[36],33, C_text("chicken.file.posix#symbolic-link\077"));
lf[37]=C_h_intern(&lf[37],32, C_text("chicken.file.posix#fileno/stderr"));
lf[38]=C_h_intern(&lf[38],31, C_text("chicken.file.posix#fileno/stdin"));
lf[39]=C_h_intern(&lf[39],32, C_text("chicken.file.posix#fileno/stdout"));
lf[40]=C_h_intern(&lf[40],35, C_text("chicken.file.posix#open-input-file\052"));
lf[41]=C_h_intern(&lf[41],36, C_text("chicken.file.posix#open-output-file\052"));
lf[42]=C_h_intern(&lf[42],30, C_text("chicken.file.posix#open/append"));
lf[43]=C_h_intern(&lf[43],30, C_text("chicken.file.posix#open/binary"));
lf[44]=C_h_intern(&lf[44],29, C_text("chicken.file.posix#open/creat"));
lf[45]=C_h_intern(&lf[45],28, C_text("chicken.file.posix#open/excl"));
lf[46]=C_h_intern(&lf[46],29, C_text("chicken.file.posix#open/fsync"));
lf[47]=C_h_intern(&lf[47],30, C_text("chicken.file.posix#open/noctty"));
lf[48]=C_h_intern(&lf[48],33, C_text("chicken.file.posix#open/noinherit"));
lf[49]=C_h_intern(&lf[49],32, C_text("chicken.file.posix#open/nonblock"));
lf[50]=C_h_intern(&lf[50],30, C_text("chicken.file.posix#open/rdonly"));
lf[51]=C_h_intern(&lf[51],28, C_text("chicken.file.posix#open/rdwr"));
lf[52]=C_h_intern(&lf[52],28, C_text("chicken.file.posix#open/read"));
lf[53]=C_h_intern(&lf[53],28, C_text("chicken.file.posix#open/sync"));
lf[54]=C_h_intern(&lf[54],28, C_text("chicken.file.posix#open/text"));
lf[55]=C_h_intern(&lf[55],29, C_text("chicken.file.posix#open/trunc"));
lf[56]=C_h_intern(&lf[56],29, C_text("chicken.file.posix#open/write"));
lf[57]=C_h_intern(&lf[57],30, C_text("chicken.file.posix#open/wronly"));
lf[58]=C_h_intern(&lf[58],29, C_text("chicken.file.posix#perm/irgrp"));
lf[59]=C_h_intern(&lf[59],29, C_text("chicken.file.posix#perm/iroth"));
lf[60]=C_h_intern(&lf[60],29, C_text("chicken.file.posix#perm/irusr"));
lf[61]=C_h_intern(&lf[61],29, C_text("chicken.file.posix#perm/irwxg"));
lf[62]=C_h_intern(&lf[62],29, C_text("chicken.file.posix#perm/irwxo"));
lf[63]=C_h_intern(&lf[63],29, C_text("chicken.file.posix#perm/irwxu"));
lf[64]=C_h_intern(&lf[64],29, C_text("chicken.file.posix#perm/isgid"));
lf[65]=C_h_intern(&lf[65],29, C_text("chicken.file.posix#perm/isuid"));
lf[66]=C_h_intern(&lf[66],29, C_text("chicken.file.posix#perm/isvtx"));
lf[67]=C_h_intern(&lf[67],29, C_text("chicken.file.posix#perm/iwgrp"));
lf[68]=C_h_intern(&lf[68],29, C_text("chicken.file.posix#perm/iwoth"));
lf[69]=C_h_intern(&lf[69],29, C_text("chicken.file.posix#perm/iwusr"));
lf[70]=C_h_intern(&lf[70],29, C_text("chicken.file.posix#perm/ixgrp"));
lf[71]=C_h_intern(&lf[71],29, C_text("chicken.file.posix#perm/ixoth"));
lf[72]=C_h_intern(&lf[72],29, C_text("chicken.file.posix#perm/ixusr"));
lf[73]=C_h_intern(&lf[73],31, C_text("chicken.file.posix#port->fileno"));
lf[74]=C_h_intern(&lf[74],27, C_text("chicken.file.posix#seek/cur"));
lf[75]=C_h_intern(&lf[75],27, C_text("chicken.file.posix#seek/end"));
lf[76]=C_h_intern(&lf[76],27, C_text("chicken.file.posix#seek/set"));
lf[77]=C_h_intern(&lf[77],37, C_text("chicken.file.posix#set-file-position!"));
lf[78]=C_h_intern(&lf[78],19, C_text("chicken.time.posix#"));
lf[79]=C_h_intern(&lf[79],36, C_text("chicken.time.posix#seconds->utc-time"));
lf[80]=C_h_intern(&lf[80],36, C_text("chicken.time.posix#utc-time->seconds"));
lf[81]=C_h_intern(&lf[81],38, C_text("chicken.time.posix#seconds->local-time"));
lf[82]=C_h_intern(&lf[82],34, C_text("chicken.time.posix#seconds->string"));
lf[83]=C_h_intern(&lf[83],38, C_text("chicken.time.posix#local-time->seconds"));
lf[84]=C_h_intern(&lf[84],31, C_text("chicken.time.posix#string->time"));
lf[85]=C_h_intern(&lf[85],31, C_text("chicken.time.posix#time->string"));
lf[86]=C_h_intern(&lf[86],46, C_text("chicken.time.posix#local-timezone-abbreviation"));
lf[87]=C_h_intern(&lf[87],16, C_text("chicken.process#"));
lf[88]=C_h_intern(&lf[88],22, C_text("chicken.process#system"));
lf[89]=C_h_intern(&lf[89],6, C_text("system"));
lf[90]=C_h_intern(&lf[90],15, C_text("\003syssignal-hook"));
lf[91]=C_h_intern(&lf[91],14, C_text("\000process-error"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032`system\047 invocation failed"));
lf[93]=C_h_intern(&lf[93],16, C_text("\003sysupdate-errno"));
lf[94]=C_h_intern(&lf[94],23, C_text("chicken.process#system\052"));
lf[95]=C_h_intern(&lf[95],9, C_text("\003syserror"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376B\000\0003shell invocation failed with non-zero return status"));
lf[97]=C_h_intern(&lf[97],18, C_text("chicken.process#qs"));
lf[98]=C_h_intern(&lf[98],7, C_text("mingw32"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002\042\042"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004\047\134\047\047"));
lf[101]=C_h_intern(&lf[101],18, C_text("chicken.base#error"));
lf[102]=C_h_intern(&lf[102],2, C_text("qs"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376B\000\0004NUL character can not be represented in shell string"));
lf[104]=C_h_intern(&lf[104],20, C_text("scheme#string-append"));
lf[105]=C_h_intern(&lf[105],16, C_text("\003sysstring->list"));
lf[106]=C_h_intern(&lf[106],33, C_text("chicken.platform#software-version"));
lf[107]=C_h_intern(&lf[107],31, C_text("chicken.process#process-execute"));
lf[108]=C_h_intern(&lf[108],28, C_text("chicken.process#process-fork"));
lf[109]=C_h_intern(&lf[109],27, C_text("chicken.process#process-run"));
lf[110]=C_h_intern(&lf[110],30, C_text("chicken.process#process-signal"));
lf[111]=C_h_intern(&lf[111],29, C_text("chicken.process#process-spawn"));
lf[112]=C_h_intern(&lf[112],28, C_text("chicken.process#process-wait"));
lf[113]=C_h_intern(&lf[113],36, C_text("chicken.process#call-with-input-pipe"));
lf[114]=C_h_intern(&lf[114],37, C_text("chicken.process#call-with-output-pipe"));
lf[115]=C_h_intern(&lf[115],32, C_text("chicken.process#close-input-pipe"));
lf[116]=C_h_intern(&lf[116],33, C_text("chicken.process#close-output-pipe"));
lf[117]=C_h_intern(&lf[117],27, C_text("chicken.process#create-pipe"));
lf[118]=C_h_intern(&lf[118],31, C_text("chicken.process#open-input-pipe"));
lf[119]=C_h_intern(&lf[119],32, C_text("chicken.process#open-output-pipe"));
lf[120]=C_h_intern(&lf[120],36, C_text("chicken.process#with-input-from-pipe"));
lf[121]=C_h_intern(&lf[121],35, C_text("chicken.process#with-output-to-pipe"));
lf[122]=C_h_intern(&lf[122],23, C_text("chicken.process#process"));
lf[123]=C_h_intern(&lf[123],24, C_text("chicken.process#process\052"));
lf[124]=C_h_intern(&lf[124],29, C_text("chicken.process#process-sleep"));
lf[125]=C_h_intern(&lf[125],24, C_text("chicken.process#pipe/buf"));
lf[126]=C_h_intern(&lf[126],29, C_text("chicken.process#spawn/overlay"));
lf[127]=C_h_intern(&lf[127],26, C_text("chicken.process#spawn/wait"));
lf[128]=C_h_intern(&lf[128],28, C_text("chicken.process#spawn/nowait"));
lf[129]=C_h_intern(&lf[129],29, C_text("chicken.process#spawn/nowaito"));
lf[130]=C_h_intern(&lf[130],28, C_text("chicken.process#spawn/detach"));
lf[131]=C_h_intern(&lf[131],23, C_text("chicken.process.signal#"));
lf[132]=C_h_intern(&lf[132],33, C_text("chicken.process.signal#set-alarm!"));
lf[133]=C_h_intern(&lf[133],42, C_text("chicken.process.signal#set-signal-handler!"));
lf[134]=C_h_intern(&lf[134],39, C_text("chicken.process.signal#set-signal-mask!"));
lf[135]=C_h_intern(&lf[135],37, C_text("chicken.process.signal#signal-handler"));
lf[136]=C_h_intern(&lf[136],34, C_text("chicken.process.signal#signal-mask"));
lf[137]=C_h_intern(&lf[137],35, C_text("chicken.process.signal#signal-mask!"));
lf[138]=C_h_intern(&lf[138],37, C_text("chicken.process.signal#signal-masked\077"));
lf[139]=C_h_intern(&lf[139],37, C_text("chicken.process.signal#signal-unmask!"));
lf[140]=C_h_intern(&lf[140],34, C_text("chicken.process.signal#signal/abrt"));
lf[141]=C_h_intern(&lf[141],34, C_text("chicken.process.signal#signal/alrm"));
lf[142]=C_h_intern(&lf[142],35, C_text("chicken.process.signal#signal/break"));
lf[143]=C_h_intern(&lf[143],33, C_text("chicken.process.signal#signal/bus"));
lf[144]=C_h_intern(&lf[144],34, C_text("chicken.process.signal#signal/chld"));
lf[145]=C_h_intern(&lf[145],34, C_text("chicken.process.signal#signal/cont"));
lf[146]=C_h_intern(&lf[146],33, C_text("chicken.process.signal#signal/fpe"));
lf[147]=C_h_intern(&lf[147],33, C_text("chicken.process.signal#signal/hup"));
lf[148]=C_h_intern(&lf[148],33, C_text("chicken.process.signal#signal/ill"));
lf[149]=C_h_intern(&lf[149],33, C_text("chicken.process.signal#signal/int"));
lf[150]=C_h_intern(&lf[150],32, C_text("chicken.process.signal#signal/io"));
lf[151]=C_h_intern(&lf[151],34, C_text("chicken.process.signal#signal/kill"));
lf[152]=C_h_intern(&lf[152],34, C_text("chicken.process.signal#signal/pipe"));
lf[153]=C_h_intern(&lf[153],34, C_text("chicken.process.signal#signal/prof"));
lf[154]=C_h_intern(&lf[154],34, C_text("chicken.process.signal#signal/quit"));
lf[155]=C_h_intern(&lf[155],34, C_text("chicken.process.signal#signal/segv"));
lf[156]=C_h_intern(&lf[156],34, C_text("chicken.process.signal#signal/stop"));
lf[157]=C_h_intern(&lf[157],34, C_text("chicken.process.signal#signal/term"));
lf[158]=C_h_intern(&lf[158],34, C_text("chicken.process.signal#signal/trap"));
lf[159]=C_h_intern(&lf[159],34, C_text("chicken.process.signal#signal/tstp"));
lf[160]=C_h_intern(&lf[160],33, C_text("chicken.process.signal#signal/urg"));
lf[161]=C_h_intern(&lf[161],34, C_text("chicken.process.signal#signal/usr1"));
lf[162]=C_h_intern(&lf[162],34, C_text("chicken.process.signal#signal/usr2"));
lf[163]=C_h_intern(&lf[163],36, C_text("chicken.process.signal#signal/vtalrm"));
lf[164]=C_h_intern(&lf[164],35, C_text("chicken.process.signal#signal/winch"));
lf[165]=C_h_intern(&lf[165],34, C_text("chicken.process.signal#signal/xcpu"));
lf[166]=C_h_intern(&lf[166],34, C_text("chicken.process.signal#signal/xfsz"));
lf[167]=C_h_intern(&lf[167],35, C_text("chicken.process.signal#signals-list"));
lf[168]=C_h_intern(&lf[168],30, C_text("chicken.process-context.posix#"));
lf[169]=C_h_intern(&lf[169],47, C_text("chicken.process-context.posix#change-directory\052"));
lf[170]=C_h_intern(&lf[170],49, C_text("chicken.process-context.posix#set-root-directory!"));
lf[171]=C_h_intern(&lf[171],56, C_text("chicken.process-context.posix#current-effective-group-id"));
lf[172]=C_h_intern(&lf[172],55, C_text("chicken.process-context.posix#current-effective-user-id"));
lf[173]=C_h_intern(&lf[173],46, C_text("chicken.process-context.posix#current-group-id"));
lf[174]=C_h_intern(&lf[174],45, C_text("chicken.process-context.posix#current-user-id"));
lf[175]=C_h_intern(&lf[175],48, C_text("chicken.process-context.posix#current-process-id"));
lf[176]=C_h_intern(&lf[176],47, C_text("chicken.process-context.posix#parent-process-id"));
lf[177]=C_h_intern(&lf[177],47, C_text("chicken.process-context.posix#current-user-name"));
lf[178]=C_h_intern(&lf[178],57, C_text("chicken.process-context.posix#current-effective-user-name"));
lf[179]=C_h_intern(&lf[179],44, C_text("chicken.process-context.posix#create-session"));
lf[180]=C_h_intern(&lf[180],46, C_text("chicken.process-context.posix#process-group-id"));
lf[181]=C_h_intern(&lf[181],46, C_text("chicken.process-context.posix#user-information"));
lf[182]=C_h_intern(&lf[182],14, C_text("chicken.posix#"));
lf[184]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[185]=C_h_intern(&lf[185],17, C_text("\003syspeek-c-string"));
lf[186]=C_h_intern(&lf[186],15, C_text("\003sysposix-error"));
lf[188]=C_h_intern(&lf[188],11, C_text("\000file-error"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot access file"));
lf[190]=C_h_intern(&lf[190],17, C_text("\003sysmake-c-string"));
lf[191]=C_h_intern(&lf[191],11, C_text("\000type-error"));
lf[192]=C_decode_literal(C_heaptop,C_text("\376B\000\0000bad argument type - not a fixnum, port or string"));
lf[193]=C_h_intern(&lf[193],18, C_text("chicken.base#port\077"));
lf[194]=C_h_intern(&lf[194],28, C_text("chicken.file.posix#file-stat"));
lf[195]=C_h_intern(&lf[195],9, C_text("file-stat"));
lf[196]=C_h_intern(&lf[196],40, C_text("chicken.file.posix#set-file-permissions!"));
lf[197]=C_h_intern(&lf[197],21, C_text("set-file-permissions!"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot change file permissions"));
lf[199]=C_h_intern(&lf[199],16, C_text("file-permissions"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\0000bad argument type - not a fixnum, port or string"));
lf[201]=C_h_intern(&lf[201],16, C_text("\003syscheck-fixnum"));
lf[202]=C_h_intern(&lf[202],41, C_text("chicken.file.posix#file-modification-time"));
lf[203]=C_h_intern(&lf[203],22, C_text("file-modification-time"));
lf[204]=C_h_intern(&lf[204],35, C_text("chicken.file.posix#file-access-time"));
lf[205]=C_h_intern(&lf[205],16, C_text("file-access-time"));
lf[206]=C_h_intern(&lf[206],35, C_text("chicken.file.posix#file-change-time"));
lf[207]=C_h_intern(&lf[207],16, C_text("file-change-time"));
lf[208]=C_h_intern(&lf[208],34, C_text("chicken.file.posix#set-file-times!"));
lf[209]=C_h_intern(&lf[209],15, C_text("set-file-times!"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot set file times"));
lf[211]=C_h_intern(&lf[211],23, C_text("\003syscheck-exact-integer"));
lf[212]=C_h_intern(&lf[212],28, C_text("chicken.time#current-seconds"));
lf[213]=C_h_intern(&lf[213],28, C_text("chicken.file.posix#file-size"));
lf[214]=C_h_intern(&lf[214],9, C_text("file-size"));
lf[215]=C_h_intern(&lf[215],34, C_text("chicken.file.posix#set-file-owner!"));
lf[217]=C_h_intern(&lf[217],15, C_text("set-file-owner!"));
lf[218]=C_h_intern(&lf[218],34, C_text("chicken.file.posix#set-file-group!"));
lf[219]=C_h_intern(&lf[219],15, C_text("set-file-group!"));
lf[220]=C_h_intern(&lf[220],12, C_text("regular-file"));
lf[221]=C_h_intern(&lf[221],13, C_text("symbolic-link"));
lf[222]=C_h_intern(&lf[222],9, C_text("directory"));
lf[223]=C_h_intern(&lf[223],16, C_text("character-device"));
lf[224]=C_h_intern(&lf[224],12, C_text("block-device"));
lf[225]=C_h_intern(&lf[225],4, C_text("fifo"));
lf[226]=C_h_intern(&lf[226],6, C_text("socket"));
lf[227]=C_h_intern(&lf[227],9, C_text("file-type"));
lf[228]=C_h_intern(&lf[228],18, C_text("set-file-position!"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030cannot set file position"));
lf[230]=C_h_intern(&lf[230],6, C_text("stream"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid file"));
lf[232]=C_h_intern(&lf[232],7, C_text("\000append"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001a"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033invalid mode for input file"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025invalid mode argument"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001r"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001w"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[239]=C_h_intern(&lf[239],13, C_text("\003sysmake-port"));
lf[240]=C_h_intern(&lf[240],21, C_text("\003sysstream-port-class"));
lf[241]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(fdport)"));
lf[242]=C_h_intern(&lf[242],16, C_text("open-input-file\052"));
lf[243]=C_h_intern(&lf[243],17, C_text("open-output-file\052"));
lf[244]=C_h_intern(&lf[244],12, C_text("port->fileno"));
lf[245]=C_h_intern(&lf[245],13, C_text("\003sysport-data"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot access file-descriptor of port"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031port has no attached file"));
lf[248]=C_h_intern(&lf[248],25, C_text("\003syspeek-unsigned-integer"));
lf[249]=C_h_intern(&lf[249],16, C_text("duplicate-fileno"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot duplicate file-descriptor"));
lf[251]=C_h_intern(&lf[251],17, C_text("change-directory\052"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037cannot change current directory"));
lf[253]=C_h_intern(&lf[253],25, C_text("\003syschange-directory-hook"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025time vector too short"));
lf[257]=C_h_intern(&lf[257],19, C_text("seconds->local-time"));
lf[258]=C_h_intern(&lf[258],17, C_text("seconds->utc-time"));
lf[259]=C_h_intern(&lf[259],13, C_text("\003syssubstring"));
lf[260]=C_h_intern(&lf[260],15, C_text("seconds->string"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot convert seconds to string"));
lf[262]=C_h_intern(&lf[262],19, C_text("local-time->seconds"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot convert time vector to seconds"));
lf[264]=C_h_intern(&lf[264],15, C_text("\003sysmake-string"));
lf[265]=C_h_intern(&lf[265],12, C_text("time->string"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376B\000\000 time formatting overflows buffer"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376B\000\000$cannot convert time vector to string"));
lf[268]=C_h_intern(&lf[268],17, C_text("\003syssignal-vector"));
lf[269]=C_h_intern(&lf[269],19, C_text("set-signal-handler!"));
lf[270]=C_h_intern(&lf[270],13, C_text("process-sleep"));
lf[272]=C_h_intern(&lf[272],12, C_text("process-wait"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376B\000\000 waiting for child process failed"));
lf[275]=C_h_intern(&lf[275],24, C_text("chicken.condition#signal"));
lf[277]=C_h_intern(&lf[277],34, C_text("chicken.memory#pointer-vector-set!"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015Out of memory"));
lf[279]=C_h_intern(&lf[279],40, C_text("chicken.condition#with-exception-handler"));
lf[280]=C_h_intern(&lf[280],37, C_text("scheme#call-with-current-continuation"));
lf[281]=C_h_intern(&lf[281],34, C_text("chicken.memory#make-pointer-vector"));
lf[282]=C_h_intern(&lf[282],19, C_text("chicken.memory#free"));
lf[283]=C_h_intern(&lf[283],33, C_text("chicken.memory#pointer-vector-ref"));
lf[284]=C_h_intern(&lf[284],36, C_text("chicken.memory#pointer-vector-length"));
lf[286]=C_h_intern(&lf[286],41, C_text("chicken.pathname#pathname-strip-directory"));
lf[288]=C_h_intern(&lf[288],3, C_text("map"));
lf[289]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001="));
lf[290]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open pipe"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006(pipe)"));
lf[292]=C_h_intern(&lf[292],15, C_text("open-input-pipe"));
lf[293]=C_h_intern(&lf[293],5, C_text("\000text"));
lf[294]=C_h_intern(&lf[294],7, C_text("\000binary"));
lf[295]=C_decode_literal(C_heaptop,C_text("\376B\000\000#illegal input/output mode specifier"));
lf[296]=C_h_intern(&lf[296],16, C_text("open-output-pipe"));
lf[297]=C_h_intern(&lf[297],16, C_text("close-input-pipe"));
lf[298]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030error while closing pipe"));
lf[299]=C_h_intern(&lf[299],17, C_text("close-output-pipe"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030error while closing pipe"));
lf[301]=C_h_intern(&lf[301],18, C_text("\003sysstandard-input"));
lf[302]=C_h_intern(&lf[302],13, C_text("scheme#values"));
lf[303]=C_h_intern(&lf[303],16, C_text("\003sysdynamic-wind"));
lf[304]=C_h_intern(&lf[304],19, C_text("\003sysstandard-output"));
lf[305]=C_h_intern(&lf[305],21, C_text("\003sysfile-nonblocking!"));
lf[306]=C_h_intern(&lf[306],19, C_text("\003sysfile-select-one"));
lf[307]=C_h_intern(&lf[307],12, C_text("file-control"));
lf[308]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023cannot control file"));
lf[309]=C_h_intern(&lf[309],9, C_text("file-open"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[311]=C_h_intern(&lf[311],22, C_text("\003sysdispatch-interrupt"));
lf[312]=C_h_intern(&lf[312],10, C_text("file-close"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021cannot close file"));
lf[314]=C_h_intern(&lf[314],9, C_text("file-read"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot read from file"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376B\000\000(bad argument type - not a string or blob"));
lf[317]=C_h_intern(&lf[317],18, C_text("scheme#make-string"));
lf[318]=C_h_intern(&lf[318],10, C_text("file-write"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot write to file"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376B\000\000(bad argument type - not a string or blob"));
lf[321]=C_h_intern(&lf[321],12, C_text("file-mkstemp"));
lf[322]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034cannot create temporary file"));
lf[323]=C_h_intern(&lf[323],11, C_text("file-select"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006failed"));
lf[325]=C_h_intern(&lf[325],16, C_text("\003sysfast-reverse"));
lf[326]=C_h_intern(&lf[326],10, C_text("scheme#max"));
lf[327]=C_h_intern(&lf[327],13, C_text("\003sysmake-blob"));
lf[328]=C_h_intern(&lf[328],11, C_text("create-pipe"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot create pipe"));
lf[330]=C_h_intern(&lf[330],16, C_text("set-signal-mask!"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026cannot set signal mask"));
lf[332]=C_h_intern(&lf[332],14, C_text("signal-masked\077"));
lf[333]=C_h_intern(&lf[333],12, C_text("signal-mask!"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023cannot block signal"));
lf[335]=C_h_intern(&lf[335],14, C_text("signal-unmask!"));
lf[336]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot unblock signal"));
lf[337]=C_h_intern(&lf[337],13, C_text("scheme#vector"));
lf[338]=C_h_intern(&lf[338],11, C_text("scheme#list"));
lf[339]=C_h_intern(&lf[339],25, C_text("\003syspeek-nonnull-c-string"));
lf[340]=C_h_intern(&lf[340],16, C_text("user-information"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030cannot change file owner"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376B\000\0000bad argument type - not a fixnum, port or string"));
lf[343]=C_h_intern(&lf[343],14, C_text("create-session"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot create session"));
lf[345]=C_h_intern(&lf[345],20, C_text("create-symbolic-link"));
lf[346]=C_h_intern(&lf[346],18, C_text("create-symbol-link"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033cannot create symbolic link"));
lf[348]=C_h_intern(&lf[348],22, C_text("\003sysread-symbolic-link"));
lf[349]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031cannot read symbolic link"));
lf[350]=C_h_intern(&lf[350],16, C_text("scheme#substring"));
lf[351]=C_h_intern(&lf[351],18, C_text("read-symbolic-link"));
lf[352]=C_h_intern(&lf[352],36, C_text("chicken.pathname#decompose-directory"));
lf[353]=C_h_intern(&lf[353],30, C_text("chicken.pathname#make-pathname"));
lf[354]=C_h_intern(&lf[354],35, C_text("chicken.pathname#absolute-pathname\077"));
lf[355]=C_decode_literal(C_heaptop,C_text("\376B\000\000Icould not canonicalize path with symbolic links, component does not exist"));
lf[356]=C_h_intern(&lf[356],16, C_text("\003sysfile-exists\077"));
lf[357]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[358]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[359]=C_h_intern(&lf[359],9, C_text("file-link"));
lf[360]=C_h_intern(&lf[360],9, C_text("hard-link"));
lf[361]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032could not create hard link"));
lf[362]=C_h_intern(&lf[362],21, C_text("\003syscustom-input-port"));
lf[363]=C_h_intern(&lf[363],17, C_text("chicken.base#void"));
lf[364]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015cannot select"));
lf[365]=C_h_intern(&lf[365],17, C_text("\003systhread-yield!"));
lf[366]=C_h_intern(&lf[366],25, C_text("\003systhread-block-for-i/o!"));
lf[367]=C_h_intern(&lf[367],18, C_text("\003syscurrent-thread"));
lf[368]=C_h_intern(&lf[368],6, C_text("\000input"));
lf[369]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013cannot read"));
lf[370]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013cannot read"));
lf[371]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014cannot close"));
lf[372]=C_h_intern(&lf[372],35, C_text("chicken.fixnum#most-positive-fixnum"));
lf[373]=C_h_intern(&lf[373],20, C_text("\003sysscan-buffer-line"));
lf[374]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[375]=C_h_intern(&lf[375],28, C_text("chicken.port#make-input-port"));
lf[376]=C_h_intern(&lf[376],22, C_text("\003syscustom-output-port"));
lf[377]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014cannot write"));
lf[378]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014cannot close"));
lf[379]=C_h_intern(&lf[379],29, C_text("chicken.port#make-output-port"));
lf[380]=C_h_intern(&lf[380],13, C_text("file-truncate"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot truncate file"));
lf[382]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid file"));
lf[383]=C_h_intern(&lf[383],4, C_text("lock"));
lf[384]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot lock file"));
lf[385]=C_h_intern(&lf[385],9, C_text("file-lock"));
lf[386]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot lock file"));
lf[387]=C_h_intern(&lf[387],18, C_text("file-lock/blocking"));
lf[388]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot unlock file"));
lf[389]=C_h_intern(&lf[389],14, C_text("file-test-lock"));
lf[390]=C_h_intern(&lf[390],11, C_text("file-unlock"));
lf[391]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot unlock file"));
lf[392]=C_h_intern(&lf[392],11, C_text("create-fifo"));
lf[393]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot create FIFO"));
lf[394]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027%a %b %e %H:%M:%S %Z %Y"));
lf[395]=C_h_intern(&lf[395],12, C_text("string->time"));
lf[396]=C_h_intern(&lf[396],17, C_text("utc-time->seconds"));
lf[397]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot convert time vector to seconds"));
lf[398]=C_h_intern(&lf[398],22, C_text("\003syskill-other-threads"));
lf[399]=C_h_intern(&lf[399],17, C_text("chicken.base#exit"));
lf[400]=C_h_intern(&lf[400],21, C_text("\003syscall-with-cthulhu"));
lf[401]=C_h_intern(&lf[401],12, C_text("process-fork"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033cannot create child process"));
lf[403]=C_h_intern(&lf[403],15, C_text("process-execute"));
lf[404]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026cannot execute process"));
lf[405]=C_h_intern(&lf[405],14, C_text("process-signal"));
lf[406]=C_decode_literal(C_heaptop,C_text("\376B\000\000 could not send signal to process"));
lf[408]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007/bin/sh"));
lf[409]=C_h_intern(&lf[409],48, C_text("chicken.process-context#get-environment-variable"));
lf[410]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005SHELL"));
lf[411]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-c"));
lf[412]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025abnormal process exit"));
lf[414]=C_h_intern(&lf[414],7, C_text("process"));
lf[415]=C_h_intern(&lf[415],8, C_text("process\052"));
lf[416]=C_h_intern(&lf[416],19, C_text("set-root-directory!"));
lf[417]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037unable to change root directory"));
lf[418]=C_decode_literal(C_heaptop,C_text("\376B\000\000/this function is not available on this platform"));
lf[419]=C_h_intern(&lf[419],14, C_text("chicken.errno#"));
lf[420]=C_h_intern(&lf[420],19, C_text("chicken.errno#errno"));
lf[421]=C_h_intern(&lf[421],9, C_text("\003syserrno"));
lf[422]=C_h_intern(&lf[422],24, C_text("chicken.errno#errno/2big"));
lf[423]=C_h_intern(&lf[423],25, C_text("chicken.errno#errno/acces"));
lf[424]=C_h_intern(&lf[424],25, C_text("chicken.errno#errno/again"));
lf[425]=C_h_intern(&lf[425],24, C_text("chicken.errno#errno/badf"));
lf[426]=C_h_intern(&lf[426],24, C_text("chicken.errno#errno/busy"));
lf[427]=C_h_intern(&lf[427],25, C_text("chicken.errno#errno/child"));
lf[428]=C_h_intern(&lf[428],26, C_text("chicken.errno#errno/deadlk"));
lf[429]=C_h_intern(&lf[429],23, C_text("chicken.errno#errno/dom"));
lf[430]=C_h_intern(&lf[430],25, C_text("chicken.errno#errno/exist"));
lf[431]=C_h_intern(&lf[431],25, C_text("chicken.errno#errno/fault"));
lf[432]=C_h_intern(&lf[432],24, C_text("chicken.errno#errno/fbig"));
lf[433]=C_h_intern(&lf[433],25, C_text("chicken.errno#errno/ilseq"));
lf[434]=C_h_intern(&lf[434],24, C_text("chicken.errno#errno/intr"));
lf[435]=C_h_intern(&lf[435],25, C_text("chicken.errno#errno/inval"));
lf[436]=C_h_intern(&lf[436],22, C_text("chicken.errno#errno/io"));
lf[437]=C_h_intern(&lf[437],25, C_text("chicken.errno#errno/isdir"));
lf[438]=C_h_intern(&lf[438],25, C_text("chicken.errno#errno/mfile"));
lf[439]=C_h_intern(&lf[439],25, C_text("chicken.errno#errno/mlink"));
lf[440]=C_h_intern(&lf[440],31, C_text("chicken.errno#errno/nametoolong"));
lf[441]=C_h_intern(&lf[441],25, C_text("chicken.errno#errno/nfile"));
lf[442]=C_h_intern(&lf[442],25, C_text("chicken.errno#errno/nodev"));
lf[443]=C_h_intern(&lf[443],25, C_text("chicken.errno#errno/noent"));
lf[444]=C_h_intern(&lf[444],26, C_text("chicken.errno#errno/noexec"));
lf[445]=C_h_intern(&lf[445],25, C_text("chicken.errno#errno/nolck"));
lf[446]=C_h_intern(&lf[446],25, C_text("chicken.errno#errno/nomem"));
lf[447]=C_h_intern(&lf[447],25, C_text("chicken.errno#errno/nospc"));
lf[448]=C_h_intern(&lf[448],25, C_text("chicken.errno#errno/nosys"));
lf[449]=C_h_intern(&lf[449],26, C_text("chicken.errno#errno/notdir"));
lf[450]=C_h_intern(&lf[450],28, C_text("chicken.errno#errno/notempty"));
lf[451]=C_h_intern(&lf[451],25, C_text("chicken.errno#errno/notty"));
lf[452]=C_h_intern(&lf[452],24, C_text("chicken.errno#errno/nxio"));
lf[453]=C_h_intern(&lf[453],24, C_text("chicken.errno#errno/perm"));
lf[454]=C_h_intern(&lf[454],24, C_text("chicken.errno#errno/pipe"));
lf[455]=C_h_intern(&lf[455],25, C_text("chicken.errno#errno/range"));
lf[456]=C_h_intern(&lf[456],24, C_text("chicken.errno#errno/rofs"));
lf[457]=C_h_intern(&lf[457],25, C_text("chicken.errno#errno/spipe"));
lf[458]=C_h_intern(&lf[458],24, C_text("chicken.errno#errno/srch"));
lf[459]=C_h_intern(&lf[459],30, C_text("chicken.errno#errno/wouldblock"));
lf[460]=C_h_intern(&lf[460],24, C_text("chicken.errno#errno/xdev"));
lf[461]=C_h_intern(&lf[461],16, C_text("process-group-id"));
lf[462]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot retrieve process group ID"));
lf[463]=C_h_intern(&lf[463],13, C_text("process-group"));
lf[464]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033cannot set process group ID"));
lf[465]=C_h_intern(&lf[465],31, C_text("chicken.base#getter-with-setter"));
lf[466]=C_decode_literal(C_heaptop,C_text("\376B\000\0004(chicken.process-context.posix#process-group-id pid)"));
lf[467]=C_h_intern(&lf[467],26, C_text("effective-group-id!-setter"));
lf[468]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035cannot set effective group ID"));
lf[469]=C_decode_literal(C_heaptop,C_text("\376B\000\000:(chicken.process-context.posix#current-effective-group-id)"));
lf[470]=C_h_intern(&lf[470],24, C_text("current-group-id!-setter"));
lf[471]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023cannot set group ID"));
lf[472]=C_decode_literal(C_heaptop,C_text("\376B\000\0000(chicken.process-context.posix#current-group-id)"));
lf[473]=C_h_intern(&lf[473],25, C_text("effective-user-id!-setter"));
lf[474]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034cannot set effective user ID"));
lf[475]=C_decode_literal(C_heaptop,C_text("\376B\000\0009(chicken.process-context.posix#current-effective-user-id)"));
lf[476]=C_h_intern(&lf[476],23, C_text("current-user-id!-setter"));
lf[477]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot set user ID"));
lf[478]=C_decode_literal(C_heaptop,C_text("\376B\000\000/(chicken.process-context.posix#current-user-id)"));
lf[479]=C_decode_literal(C_heaptop,C_text("\376B\000\000$(chicken.process.signal#signal-mask)"));
lf[480]=C_h_intern(&lf[480],14, C_text("signal-handler"));
lf[481]=C_decode_literal(C_heaptop,C_text("\376B\000\000+(chicken.process.signal#signal-handler sig)"));
lf[482]=C_h_intern(&lf[482],18, C_text("file-creation-mode"));
lf[483]=C_decode_literal(C_heaptop,C_text("\376B\000\000,(chicken.file.posix#file-creation-mode mode)"));
lf[484]=C_h_intern(&lf[484],13, C_text("file-position"));
lf[485]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot retrieve file position of port"));
lf[486]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid file"));
lf[487]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047(chicken.file.posix#file-position port)"));
lf[488]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047(chicken.file.posix#file-permissions f)"));
lf[489]=C_h_intern(&lf[489],10, C_text("file-group"));
lf[490]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.file.posix#file-group f)"));
lf[491]=C_h_intern(&lf[491],10, C_text("file-owner"));
lf[492]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.file.posix#file-owner f)"));
C_register_lf2(lf,493,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2620,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scheduler_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[523] = {
{C_text("f_2620:posix_2escm"),(void*)f_2620},
{C_text("f_2623:posix_2escm"),(void*)f_2623},
{C_text("f_2626:posix_2escm"),(void*)f_2626},
{C_text("f_2629:posix_2escm"),(void*)f_2629},
{C_text("f_2632:posix_2escm"),(void*)f_2632},
{C_text("f_2635:posix_2escm"),(void*)f_2635},
{C_text("f_2721:posix_2escm"),(void*)f_2721},
{C_text("f_2734:posix_2escm"),(void*)f_2734},
{C_text("f_2739:posix_2escm"),(void*)f_2739},
{C_text("f_2743:posix_2escm"),(void*)f_2743},
{C_text("f_2755:posix_2escm"),(void*)f_2755},
{C_text("f_2759:posix_2escm"),(void*)f_2759},
{C_text("f_2769:posix_2escm"),(void*)f_2769},
{C_text("f_2790:posix_2escm"),(void*)f_2790},
{C_text("f_2793:posix_2escm"),(void*)f_2793},
{C_text("f_2804:posix_2escm"),(void*)f_2804},
{C_text("f_2810:posix_2escm"),(void*)f_2810},
{C_text("f_2835:posix_2escm"),(void*)f_2835},
{C_text("f_2942:posix_2escm"),(void*)f_2942},
{C_text("f_2946:posix_2escm"),(void*)f_2946},
{C_text("f_2953:posix_2escm"),(void*)f_2953},
{C_text("f_2957:posix_2escm"),(void*)f_2957},
{C_text("f_2960:posix_2escm"),(void*)f_2960},
{C_text("f_2964:posix_2escm"),(void*)f_2964},
{C_text("f_2985:posix_2escm"),(void*)f_2985},
{C_text("f_2989:posix_2escm"),(void*)f_2989},
{C_text("f_2998:posix_2escm"),(void*)f_2998},
{C_text("f_3006:posix_2escm"),(void*)f_3006},
{C_text("f_3013:posix_2escm"),(void*)f_3013},
{C_text("f_3024:posix_2escm"),(void*)f_3024},
{C_text("f_3028:posix_2escm"),(void*)f_3028},
{C_text("f_3031:posix_2escm"),(void*)f_3031},
{C_text("f_3049:posix_2escm"),(void*)f_3049},
{C_text("f_3053:posix_2escm"),(void*)f_3053},
{C_text("f_3063:posix_2escm"),(void*)f_3063},
{C_text("f_3068:posix_2escm"),(void*)f_3068},
{C_text("f_3072:posix_2escm"),(void*)f_3072},
{C_text("f_3074:posix_2escm"),(void*)f_3074},
{C_text("f_3078:posix_2escm"),(void*)f_3078},
{C_text("f_3080:posix_2escm"),(void*)f_3080},
{C_text("f_3084:posix_2escm"),(void*)f_3084},
{C_text("f_3086:posix_2escm"),(void*)f_3086},
{C_text("f_3090:posix_2escm"),(void*)f_3090},
{C_text("f_3102:posix_2escm"),(void*)f_3102},
{C_text("f_3105:posix_2escm"),(void*)f_3105},
{C_text("f_3111:posix_2escm"),(void*)f_3111},
{C_text("f_3121:posix_2escm"),(void*)f_3121},
{C_text("f_3165:posix_2escm"),(void*)f_3165},
{C_text("f_3169:posix_2escm"),(void*)f_3169},
{C_text("f_3171:posix_2escm"),(void*)f_3171},
{C_text("f_3177:posix_2escm"),(void*)f_3177},
{C_text("f_3185:posix_2escm"),(void*)f_3185},
{C_text("f_3189:posix_2escm"),(void*)f_3189},
{C_text("f_3193:posix_2escm"),(void*)f_3193},
{C_text("f_3195:posix_2escm"),(void*)f_3195},
{C_text("f_3214:posix_2escm"),(void*)f_3214},
{C_text("f_3282:posix_2escm"),(void*)f_3282},
{C_text("f_3290:posix_2escm"),(void*)f_3290},
{C_text("f_3292:posix_2escm"),(void*)f_3292},
{C_text("f_3300:posix_2escm"),(void*)f_3300},
{C_text("f_3302:posix_2escm"),(void*)f_3302},
{C_text("f_3310:posix_2escm"),(void*)f_3310},
{C_text("f_3312:posix_2escm"),(void*)f_3312},
{C_text("f_3320:posix_2escm"),(void*)f_3320},
{C_text("f_3322:posix_2escm"),(void*)f_3322},
{C_text("f_3330:posix_2escm"),(void*)f_3330},
{C_text("f_3332:posix_2escm"),(void*)f_3332},
{C_text("f_3340:posix_2escm"),(void*)f_3340},
{C_text("f_3342:posix_2escm"),(void*)f_3342},
{C_text("f_3350:posix_2escm"),(void*)f_3350},
{C_text("f_3355:posix_2escm"),(void*)f_3355},
{C_text("f_3359:posix_2escm"),(void*)f_3359},
{C_text("f_3362:posix_2escm"),(void*)f_3362},
{C_text("f_3365:posix_2escm"),(void*)f_3365},
{C_text("f_3371:posix_2escm"),(void*)f_3371},
{C_text("f_3377:posix_2escm"),(void*)f_3377},
{C_text("f_3404:posix_2escm"),(void*)f_3404},
{C_text("f_3432:posix_2escm"),(void*)f_3432},
{C_text("f_3440:posix_2escm"),(void*)f_3440},
{C_text("f_3469:posix_2escm"),(void*)f_3469},
{C_text("f_3482:posix_2escm"),(void*)f_3482},
{C_text("f_3488:posix_2escm"),(void*)f_3488},
{C_text("f_3492:posix_2escm"),(void*)f_3492},
{C_text("f_3500:posix_2escm"),(void*)f_3500},
{C_text("f_3502:posix_2escm"),(void*)f_3502},
{C_text("f_3506:posix_2escm"),(void*)f_3506},
{C_text("f_3514:posix_2escm"),(void*)f_3514},
{C_text("f_3516:posix_2escm"),(void*)f_3516},
{C_text("f_3532:posix_2escm"),(void*)f_3532},
{C_text("f_3541:posix_2escm"),(void*)f_3541},
{C_text("f_3555:posix_2escm"),(void*)f_3555},
{C_text("f_3561:posix_2escm"),(void*)f_3561},
{C_text("f_3565:posix_2escm"),(void*)f_3565},
{C_text("f_3568:posix_2escm"),(void*)f_3568},
{C_text("f_3571:posix_2escm"),(void*)f_3571},
{C_text("f_3586:posix_2escm"),(void*)f_3586},
{C_text("f_3588:posix_2escm"),(void*)f_3588},
{C_text("f_3591:posix_2escm"),(void*)f_3591},
{C_text("f_3595:posix_2escm"),(void*)f_3595},
{C_text("f_3598:posix_2escm"),(void*)f_3598},
{C_text("f_3607:posix_2escm"),(void*)f_3607},
{C_text("f_3621:posix_2escm"),(void*)f_3621},
{C_text("f_3624:posix_2escm"),(void*)f_3624},
{C_text("f_3643:posix_2escm"),(void*)f_3643},
{C_text("f_3647:posix_2escm"),(void*)f_3647},
{C_text("f_3650:posix_2escm"),(void*)f_3650},
{C_text("f_3664:posix_2escm"),(void*)f_3664},
{C_text("f_3668:posix_2escm"),(void*)f_3668},
{C_text("f_3671:posix_2escm"),(void*)f_3671},
{C_text("f_3696:posix_2escm"),(void*)f_3696},
{C_text("f_3700:posix_2escm"),(void*)f_3700},
{C_text("f_3703:posix_2escm"),(void*)f_3703},
{C_text("f_3706:posix_2escm"),(void*)f_3706},
{C_text("f_3734:posix_2escm"),(void*)f_3734},
{C_text("f_3738:posix_2escm"),(void*)f_3738},
{C_text("f_3742:posix_2escm"),(void*)f_3742},
{C_text("f_3778:posix_2escm"),(void*)f_3778},
{C_text("f_3785:posix_2escm"),(void*)f_3785},
{C_text("f_3794:posix_2escm"),(void*)f_3794},
{C_text("f_3804:posix_2escm"),(void*)f_3804},
{C_text("f_3808:posix_2escm"),(void*)f_3808},
{C_text("f_3811:posix_2escm"),(void*)f_3811},
{C_text("f_3832:posix_2escm"),(void*)f_3832},
{C_text("f_3840:posix_2escm"),(void*)f_3840},
{C_text("f_3844:posix_2escm"),(void*)f_3844},
{C_text("f_3855:posix_2escm"),(void*)f_3855},
{C_text("f_3857:posix_2escm"),(void*)f_3857},
{C_text("f_3861:posix_2escm"),(void*)f_3861},
{C_text("f_3863:posix_2escm"),(void*)f_3863},
{C_text("f_3882:posix_2escm"),(void*)f_3882},
{C_text("f_3887:posix_2escm"),(void*)f_3887},
{C_text("f_3893:posix_2escm"),(void*)f_3893},
{C_text("f_3934:posix_2escm"),(void*)f_3934},
{C_text("f_3942:posix_2escm"),(void*)f_3942},
{C_text("f_3945:posix_2escm"),(void*)f_3945},
{C_text("f_3950:posix_2escm"),(void*)f_3950},
{C_text("f_3956:posix_2escm"),(void*)f_3956},
{C_text("f_3962:posix_2escm"),(void*)f_3962},
{C_text("f_3966:posix_2escm"),(void*)f_3966},
{C_text("f_3971:posix_2escm"),(void*)f_3971},
{C_text("f_3973:posix_2escm"),(void*)f_3973},
{C_text("f_3977:posix_2escm"),(void*)f_3977},
{C_text("f_3979:posix_2escm"),(void*)f_3979},
{C_text("f_3995:posix_2escm"),(void*)f_3995},
{C_text("f_4001:posix_2escm"),(void*)f_4001},
{C_text("f_4004:posix_2escm"),(void*)f_4004},
{C_text("f_4020:posix_2escm"),(void*)f_4020},
{C_text("f_4030:posix_2escm"),(void*)f_4030},
{C_text("f_4036:posix_2escm"),(void*)f_4036},
{C_text("f_4047:posix_2escm"),(void*)f_4047},
{C_text("f_4051:posix_2escm"),(void*)f_4051},
{C_text("f_4055:posix_2escm"),(void*)f_4055},
{C_text("f_4060:posix_2escm"),(void*)f_4060},
{C_text("f_4070:posix_2escm"),(void*)f_4070},
{C_text("f_4073:posix_2escm"),(void*)f_4073},
{C_text("f_4085:posix_2escm"),(void*)f_4085},
{C_text("f_4090:posix_2escm"),(void*)f_4090},
{C_text("f_4109:posix_2escm"),(void*)f_4109},
{C_text("f_4132:posix_2escm"),(void*)f_4132},
{C_text("f_4134:posix_2escm"),(void*)f_4134},
{C_text("f_4138:posix_2escm"),(void*)f_4138},
{C_text("f_4144:posix_2escm"),(void*)f_4144},
{C_text("f_4147:posix_2escm"),(void*)f_4147},
{C_text("f_4152:posix_2escm"),(void*)f_4152},
{C_text("f_4158:posix_2escm"),(void*)f_4158},
{C_text("f_4164:posix_2escm"),(void*)f_4164},
{C_text("f_4168:posix_2escm"),(void*)f_4168},
{C_text("f_4171:posix_2escm"),(void*)f_4171},
{C_text("f_4179:posix_2escm"),(void*)f_4179},
{C_text("f_4185:posix_2escm"),(void*)f_4185},
{C_text("f_4189:posix_2escm"),(void*)f_4189},
{C_text("f_4196:posix_2escm"),(void*)f_4196},
{C_text("f_4199:posix_2escm"),(void*)f_4199},
{C_text("f_4203:posix_2escm"),(void*)f_4203},
{C_text("f_4224:posix_2escm"),(void*)f_4224},
{C_text("f_4226:posix_2escm"),(void*)f_4226},
{C_text("f_4251:posix_2escm"),(void*)f_4251},
{C_text("f_4260:posix_2escm"),(void*)f_4260},
{C_text("f_4266:posix_2escm"),(void*)f_4266},
{C_text("f_4291:posix_2escm"),(void*)f_4291},
{C_text("f_4304:posix_2escm"),(void*)f_4304},
{C_text("f_4310:posix_2escm"),(void*)f_4310},
{C_text("f_4324:posix_2escm"),(void*)f_4324},
{C_text("f_4331:posix_2escm"),(void*)f_4331},
{C_text("f_4341:posix_2escm"),(void*)f_4341},
{C_text("f_4350:posix_2escm"),(void*)f_4350},
{C_text("f_4364:posix_2escm"),(void*)f_4364},
{C_text("f_4371:posix_2escm"),(void*)f_4371},
{C_text("f_4381:posix_2escm"),(void*)f_4381},
{C_text("f_4390:posix_2escm"),(void*)f_4390},
{C_text("f_4397:posix_2escm"),(void*)f_4397},
{C_text("f_4405:posix_2escm"),(void*)f_4405},
{C_text("f_4412:posix_2escm"),(void*)f_4412},
{C_text("f_4420:posix_2escm"),(void*)f_4420},
{C_text("f_4424:posix_2escm"),(void*)f_4424},
{C_text("f_4429:posix_2escm"),(void*)f_4429},
{C_text("f_4434:posix_2escm"),(void*)f_4434},
{C_text("f_4440:posix_2escm"),(void*)f_4440},
{C_text("f_4444:posix_2escm"),(void*)f_4444},
{C_text("f_4449:posix_2escm"),(void*)f_4449},
{C_text("f_4454:posix_2escm"),(void*)f_4454},
{C_text("f_4458:posix_2escm"),(void*)f_4458},
{C_text("f_4463:posix_2escm"),(void*)f_4463},
{C_text("f_4469:posix_2escm"),(void*)f_4469},
{C_text("f_4473:posix_2escm"),(void*)f_4473},
{C_text("f_4478:posix_2escm"),(void*)f_4478},
{C_text("f_4482:posix_2escm"),(void*)f_4482},
{C_text("f_4487:posix_2escm"),(void*)f_4487},
{C_text("f_4493:posix_2escm"),(void*)f_4493},
{C_text("f_4497:posix_2escm"),(void*)f_4497},
{C_text("f_4502:posix_2escm"),(void*)f_4502},
{C_text("f_4506:posix_2escm"),(void*)f_4506},
{C_text("f_4511:posix_2escm"),(void*)f_4511},
{C_text("f_4516:posix_2escm"),(void*)f_4516},
{C_text("f_4522:posix_2escm"),(void*)f_4522},
{C_text("f_4526:posix_2escm"),(void*)f_4526},
{C_text("f_4531:posix_2escm"),(void*)f_4531},
{C_text("f_4536:posix_2escm"),(void*)f_4536},
{C_text("f_4543:posix_2escm"),(void*)f_4543},
{C_text("f_4583:posix_2escm"),(void*)f_4583},
{C_text("f_4590:posix_2escm"),(void*)f_4590},
{C_text("f_4593:posix_2escm"),(void*)f_4593},
{C_text("f_4617:posix_2escm"),(void*)f_4617},
{C_text("f_4621:posix_2escm"),(void*)f_4621},
{C_text("f_4627:posix_2escm"),(void*)f_4627},
{C_text("f_4630:posix_2escm"),(void*)f_4630},
{C_text("f_4634:posix_2escm"),(void*)f_4634},
{C_text("f_4637:posix_2escm"),(void*)f_4637},
{C_text("f_4649:posix_2escm"),(void*)f_4649},
{C_text("f_4653:posix_2escm"),(void*)f_4653},
{C_text("f_4658:posix_2escm"),(void*)f_4658},
{C_text("f_4680:posix_2escm"),(void*)f_4680},
{C_text("f_4684:posix_2escm"),(void*)f_4684},
{C_text("f_4687:posix_2escm"),(void*)f_4687},
{C_text("f_4690:posix_2escm"),(void*)f_4690},
{C_text("f_4693:posix_2escm"),(void*)f_4693},
{C_text("f_4696:posix_2escm"),(void*)f_4696},
{C_text("f_4720:posix_2escm"),(void*)f_4720},
{C_text("f_4724:posix_2escm"),(void*)f_4724},
{C_text("f_4727:posix_2escm"),(void*)f_4727},
{C_text("f_4730:posix_2escm"),(void*)f_4730},
{C_text("f_4733:posix_2escm"),(void*)f_4733},
{C_text("f_4736:posix_2escm"),(void*)f_4736},
{C_text("f_4757:posix_2escm"),(void*)f_4757},
{C_text("f_4764:posix_2escm"),(void*)f_4764},
{C_text("f_4770:posix_2escm"),(void*)f_4770},
{C_text("f_4777:posix_2escm"),(void*)f_4777},
{C_text("f_4789:posix_2escm"),(void*)f_4789},
{C_text("f_4793:posix_2escm"),(void*)f_4793},
{C_text("f_4796:posix_2escm"),(void*)f_4796},
{C_text("f_4799:posix_2escm"),(void*)f_4799},
{C_text("f_4807:posix_2escm"),(void*)f_4807},
{C_text("f_4810:posix_2escm"),(void*)f_4810},
{C_text("f_4871:posix_2escm"),(void*)f_4871},
{C_text("f_4874:posix_2escm"),(void*)f_4874},
{C_text("f_4881:posix_2escm"),(void*)f_4881},
{C_text("f_4911:posix_2escm"),(void*)f_4911},
{C_text("f_4940:posix_2escm"),(void*)f_4940},
{C_text("f_4970:posix_2escm"),(void*)f_4970},
{C_text("f_4999:posix_2escm"),(void*)f_4999},
{C_text("f_5031:posix_2escm"),(void*)f_5031},
{C_text("f_5035:posix_2escm"),(void*)f_5035},
{C_text("f_5038:posix_2escm"),(void*)f_5038},
{C_text("f_5080:posix_2escm"),(void*)f_5080},
{C_text("f_5164:posix_2escm"),(void*)f_5164},
{C_text("f_5171:posix_2escm"),(void*)f_5171},
{C_text("f_5220:posix_2escm"),(void*)f_5220},
{C_text("f_5229:posix_2escm"),(void*)f_5229},
{C_text("f_5232:posix_2escm"),(void*)f_5232},
{C_text("f_5244:posix_2escm"),(void*)f_5244},
{C_text("f_5254:posix_2escm"),(void*)f_5254},
{C_text("f_5269:posix_2escm"),(void*)f_5269},
{C_text("f_5271:posix_2escm"),(void*)f_5271},
{C_text("f_5275:posix_2escm"),(void*)f_5275},
{C_text("f_5277:posix_2escm"),(void*)f_5277},
{C_text("f_5281:posix_2escm"),(void*)f_5281},
{C_text("f_5293:posix_2escm"),(void*)f_5293},
{C_text("f_5297:posix_2escm"),(void*)f_5297},
{C_text("f_5311:posix_2escm"),(void*)f_5311},
{C_text("f_5315:posix_2escm"),(void*)f_5315},
{C_text("f_5319:posix_2escm"),(void*)f_5319},
{C_text("f_5323:posix_2escm"),(void*)f_5323},
{C_text("f_5325:posix_2escm"),(void*)f_5325},
{C_text("f_5332:posix_2escm"),(void*)f_5332},
{C_text("f_5345:posix_2escm"),(void*)f_5345},
{C_text("f_5349:posix_2escm"),(void*)f_5349},
{C_text("f_5353:posix_2escm"),(void*)f_5353},
{C_text("f_5357:posix_2escm"),(void*)f_5357},
{C_text("f_5361:posix_2escm"),(void*)f_5361},
{C_text("f_5371:posix_2escm"),(void*)f_5371},
{C_text("f_5379:posix_2escm"),(void*)f_5379},
{C_text("f_5387:posix_2escm"),(void*)f_5387},
{C_text("f_5391:posix_2escm"),(void*)f_5391},
{C_text("f_5393:posix_2escm"),(void*)f_5393},
{C_text("f_5401:posix_2escm"),(void*)f_5401},
{C_text("f_5405:posix_2escm"),(void*)f_5405},
{C_text("f_5407:posix_2escm"),(void*)f_5407},
{C_text("f_5411:posix_2escm"),(void*)f_5411},
{C_text("f_5414:posix_2escm"),(void*)f_5414},
{C_text("f_5417:posix_2escm"),(void*)f_5417},
{C_text("f_5429:posix_2escm"),(void*)f_5429},
{C_text("f_5433:posix_2escm"),(void*)f_5433},
{C_text("f_5449:posix_2escm"),(void*)f_5449},
{C_text("f_5454:posix_2escm"),(void*)f_5454},
{C_text("f_5458:posix_2escm"),(void*)f_5458},
{C_text("f_5464:posix_2escm"),(void*)f_5464},
{C_text("f_5471:posix_2escm"),(void*)f_5471},
{C_text("f_5473:posix_2escm"),(void*)f_5473},
{C_text("f_5494:posix_2escm"),(void*)f_5494},
{C_text("f_5498:posix_2escm"),(void*)f_5498},
{C_text("f_5502:posix_2escm"),(void*)f_5502},
{C_text("f_5503:posix_2escm"),(void*)f_5503},
{C_text("f_5508:posix_2escm"),(void*)f_5508},
{C_text("f_5522:posix_2escm"),(void*)f_5522},
{C_text("f_5537:posix_2escm"),(void*)f_5537},
{C_text("f_5543:posix_2escm"),(void*)f_5543},
{C_text("f_5551:posix_2escm"),(void*)f_5551},
{C_text("f_5553:posix_2escm"),(void*)f_5553},
{C_text("f_5563:posix_2escm"),(void*)f_5563},
{C_text("f_5569:posix_2escm"),(void*)f_5569},
{C_text("f_5578:posix_2escm"),(void*)f_5578},
{C_text("f_5581:posix_2escm"),(void*)f_5581},
{C_text("f_5584:posix_2escm"),(void*)f_5584},
{C_text("f_5590:posix_2escm"),(void*)f_5590},
{C_text("f_5624:posix_2escm"),(void*)f_5624},
{C_text("f_5628:posix_2escm"),(void*)f_5628},
{C_text("f_5643:posix_2escm"),(void*)f_5643},
{C_text("f_5663:posix_2escm"),(void*)f_5663},
{C_text("f_5665:posix_2escm"),(void*)f_5665},
{C_text("f_5693:posix_2escm"),(void*)f_5693},
{C_text("f_5699:posix_2escm"),(void*)f_5699},
{C_text("f_5700:posix_2escm"),(void*)f_5700},
{C_text("f_5704:posix_2escm"),(void*)f_5704},
{C_text("f_5729:posix_2escm"),(void*)f_5729},
{C_text("f_5737:posix_2escm"),(void*)f_5737},
{C_text("f_5743:posix_2escm"),(void*)f_5743},
{C_text("f_5762:posix_2escm"),(void*)f_5762},
{C_text("f_5765:posix_2escm"),(void*)f_5765},
{C_text("f_5795:posix_2escm"),(void*)f_5795},
{C_text("f_5798:posix_2escm"),(void*)f_5798},
{C_text("f_5804:posix_2escm"),(void*)f_5804},
{C_text("f_5833:posix_2escm"),(void*)f_5833},
{C_text("f_5839:posix_2escm"),(void*)f_5839},
{C_text("f_5843:posix_2escm"),(void*)f_5843},
{C_text("f_5864:posix_2escm"),(void*)f_5864},
{C_text("f_5876:posix_2escm"),(void*)f_5876},
{C_text("f_5880:posix_2escm"),(void*)f_5880},
{C_text("f_5892:posix_2escm"),(void*)f_5892},
{C_text("f_5896:posix_2escm"),(void*)f_5896},
{C_text("f_5907:posix_2escm"),(void*)f_5907},
{C_text("f_5915:posix_2escm"),(void*)f_5915},
{C_text("f_5917:posix_2escm"),(void*)f_5917},
{C_text("f_5965:posix_2escm"),(void*)f_5965},
{C_text("f_5983:posix_2escm"),(void*)f_5983},
{C_text("f_5987:posix_2escm"),(void*)f_5987},
{C_text("f_6001:posix_2escm"),(void*)f_6001},
{C_text("f_6011:posix_2escm"),(void*)f_6011},
{C_text("f_6031:posix_2escm"),(void*)f_6031},
{C_text("f_6057:posix_2escm"),(void*)f_6057},
{C_text("f_6102:posix_2escm"),(void*)f_6102},
{C_text("f_6112:posix_2escm"),(void*)f_6112},
{C_text("f_6178:posix_2escm"),(void*)f_6178},
{C_text("f_6200:posix_2escm"),(void*)f_6200},
{C_text("f_6201:posix_2escm"),(void*)f_6201},
{C_text("f_6207:posix_2escm"),(void*)f_6207},
{C_text("f_6226:posix_2escm"),(void*)f_6226},
{C_text("f_6257:posix_2escm"),(void*)f_6257},
{C_text("f_6267:posix_2escm"),(void*)f_6267},
{C_text("f_6272:posix_2escm"),(void*)f_6272},
{C_text("f_6278:posix_2escm"),(void*)f_6278},
{C_text("f_6284:posix_2escm"),(void*)f_6284},
{C_text("f_6288:posix_2escm"),(void*)f_6288},
{C_text("f_6300:posix_2escm"),(void*)f_6300},
{C_text("f_6308:posix_2escm"),(void*)f_6308},
{C_text("f_6322:posix_2escm"),(void*)f_6322},
{C_text("f_6323:posix_2escm"),(void*)f_6323},
{C_text("f_6340:posix_2escm"),(void*)f_6340},
{C_text("f_6350:posix_2escm"),(void*)f_6350},
{C_text("f_6433:posix_2escm"),(void*)f_6433},
{C_text("f_6437:posix_2escm"),(void*)f_6437},
{C_text("f_6443:posix_2escm"),(void*)f_6443},
{C_text("f_6450:posix_2escm"),(void*)f_6450},
{C_text("f_6457:posix_2escm"),(void*)f_6457},
{C_text("f_6468:posix_2escm"),(void*)f_6468},
{C_text("f_6486:posix_2escm"),(void*)f_6486},
{C_text("f_6489:posix_2escm"),(void*)f_6489},
{C_text("f_6532:posix_2escm"),(void*)f_6532},
{C_text("f_6550:posix_2escm"),(void*)f_6550},
{C_text("f_6556:posix_2escm"),(void*)f_6556},
{C_text("f_6560:posix_2escm"),(void*)f_6560},
{C_text("f_6581:posix_2escm"),(void*)f_6581},
{C_text("f_6587:posix_2escm"),(void*)f_6587},
{C_text("f_6591:posix_2escm"),(void*)f_6591},
{C_text("f_6612:posix_2escm"),(void*)f_6612},
{C_text("f_6616:posix_2escm"),(void*)f_6616},
{C_text("f_6639:posix_2escm"),(void*)f_6639},
{C_text("f_6668:posix_2escm"),(void*)f_6668},
{C_text("f_6682:posix_2escm"),(void*)f_6682},
{C_text("f_6689:posix_2escm"),(void*)f_6689},
{C_text("f_6692:posix_2escm"),(void*)f_6692},
{C_text("f_6706:posix_2escm"),(void*)f_6706},
{C_text("f_6728:posix_2escm"),(void*)f_6728},
{C_text("f_6745:posix_2escm"),(void*)f_6745},
{C_text("f_6749:posix_2escm"),(void*)f_6749},
{C_text("f_6757:posix_2escm"),(void*)f_6757},
{C_text("f_6765:posix_2escm"),(void*)f_6765},
{C_text("f_6769:posix_2escm"),(void*)f_6769},
{C_text("f_6773:posix_2escm"),(void*)f_6773},
{C_text("f_6783:posix_2escm"),(void*)f_6783},
{C_text("f_6790:posix_2escm"),(void*)f_6790},
{C_text("f_6799:posix_2escm"),(void*)f_6799},
{C_text("f_6830:posix_2escm"),(void*)f_6830},
{C_text("f_6844:posix_2escm"),(void*)f_6844},
{C_text("f_6850:posix_2escm"),(void*)f_6850},
{C_text("f_6854:posix_2escm"),(void*)f_6854},
{C_text("f_6858:posix_2escm"),(void*)f_6858},
{C_text("f_6898:posix_2escm"),(void*)f_6898},
{C_text("f_6922:posix_2escm"),(void*)f_6922},
{C_text("f_6925:posix_2escm"),(void*)f_6925},
{C_text("f_6976:posix_2escm"),(void*)f_6976},
{C_text("f_6992:posix_2escm"),(void*)f_6992},
{C_text("f_7014:posix_2escm"),(void*)f_7014},
{C_text("f_7017:posix_2escm"),(void*)f_7017},
{C_text("f_7021:posix_2escm"),(void*)f_7021},
{C_text("f_7024:posix_2escm"),(void*)f_7024},
{C_text("f_7027:posix_2escm"),(void*)f_7027},
{C_text("f_7042:posix_2escm"),(void*)f_7042},
{C_text("f_7046:posix_2escm"),(void*)f_7046},
{C_text("f_7057:posix_2escm"),(void*)f_7057},
{C_text("f_7061:posix_2escm"),(void*)f_7061},
{C_text("f_7064:posix_2escm"),(void*)f_7064},
{C_text("f_7083:posix_2escm"),(void*)f_7083},
{C_text("f_7107:posix_2escm"),(void*)f_7107},
{C_text("f_7111:posix_2escm"),(void*)f_7111},
{C_text("f_7113:posix_2escm"),(void*)f_7113},
{C_text("f_7128:posix_2escm"),(void*)f_7128},
{C_text("f_7134:posix_2escm"),(void*)f_7134},
{C_text("f_7148:posix_2escm"),(void*)f_7148},
{C_text("f_7157:posix_2escm"),(void*)f_7157},
{C_text("f_7163:posix_2escm"),(void*)f_7163},
{C_text("f_7168:posix_2escm"),(void*)f_7168},
{C_text("f_7179:posix_2escm"),(void*)f_7179},
{C_text("f_7180:posix_2escm"),(void*)f_7180},
{C_text("f_7191:posix_2escm"),(void*)f_7191},
{C_text("f_7195:posix_2escm"),(void*)f_7195},
{C_text("f_7209:posix_2escm"),(void*)f_7209},
{C_text("f_7213:posix_2escm"),(void*)f_7213},
{C_text("f_7216:posix_2escm"),(void*)f_7216},
{C_text("f_7219:posix_2escm"),(void*)f_7219},
{C_text("f_7230:posix_2escm"),(void*)f_7230},
{C_text("f_7232:posix_2escm"),(void*)f_7232},
{C_text("f_7236:posix_2escm"),(void*)f_7236},
{C_text("f_7239:posix_2escm"),(void*)f_7239},
{C_text("f_7242:posix_2escm"),(void*)f_7242},
{C_text("f_7254:posix_2escm"),(void*)f_7254},
{C_text("f_7258:posix_2escm"),(void*)f_7258},
{C_text("f_7265:posix_2escm"),(void*)f_7265},
{C_text("f_7269:posix_2escm"),(void*)f_7269},
{C_text("f_7276:posix_2escm"),(void*)f_7276},
{C_text("f_7282:posix_2escm"),(void*)f_7282},
{C_text("f_7288:posix_2escm"),(void*)f_7288},
{C_text("f_7299:posix_2escm"),(void*)f_7299},
{C_text("f_7303:posix_2escm"),(void*)f_7303},
{C_text("f_7307:posix_2escm"),(void*)f_7307},
{C_text("f_7311:posix_2escm"),(void*)f_7311},
{C_text("f_7315:posix_2escm"),(void*)f_7315},
{C_text("f_7319:posix_2escm"),(void*)f_7319},
{C_text("f_7332:posix_2escm"),(void*)f_7332},
{C_text("f_7334:posix_2escm"),(void*)f_7334},
{C_text("f_7339:posix_2escm"),(void*)f_7339},
{C_text("f_7348:posix_2escm"),(void*)f_7348},
{C_text("f_7375:posix_2escm"),(void*)f_7375},
{C_text("f_7378:posix_2escm"),(void*)f_7378},
{C_text("f_7383:posix_2escm"),(void*)f_7383},
{C_text("f_7401:posix_2escm"),(void*)f_7401},
{C_text("f_7403:posix_2escm"),(void*)f_7403},
{C_text("f_7427:posix_2escm"),(void*)f_7427},
{C_text("f_7469:posix_2escm"),(void*)f_7469},
{C_text("f_7534:posix_2escm"),(void*)f_7534},
{C_text("f_7542:posix_2escm"),(void*)f_7542},
{C_text("f_7559:posix_2escm"),(void*)f_7559},
{C_text("f_7561:posix_2escm"),(void*)f_7561},
{C_text("f_7567:posix_2escm"),(void*)f_7567},
{C_text("f_7616:posix_2escm"),(void*)f_7616},
{C_text("f_7620:posix_2escm"),(void*)f_7620},
{C_text("f_7623:posix_2escm"),(void*)f_7623},
{C_text("f_7629:posix_2escm"),(void*)f_7629},
{C_text("f_7634:posix_2escm"),(void*)f_7634},
{C_text("f_7638:posix_2escm"),(void*)f_7638},
{C_text("f_7641:posix_2escm"),(void*)f_7641},
{C_text("f_7650:posix_2escm"),(void*)f_7650},
{C_text("f_7656:posix_2escm"),(void*)f_7656},
{C_text("f_7659:posix_2escm"),(void*)f_7659},
{C_text("f_7669:posix_2escm"),(void*)f_7669},
{C_text("f_7675:posix_2escm"),(void*)f_7675},
{C_text("f_7678:posix_2escm"),(void*)f_7678},
{C_text("f_7688:posix_2escm"),(void*)f_7688},
{C_text("f_7694:posix_2escm"),(void*)f_7694},
{C_text("f_7697:posix_2escm"),(void*)f_7697},
{C_text("f_7707:posix_2escm"),(void*)f_7707},
{C_text("f_7713:posix_2escm"),(void*)f_7713},
{C_text("f_7716:posix_2escm"),(void*)f_7716},
{C_text("f_7726:posix_2escm"),(void*)f_7726},
{C_text("f_7732:posix_2escm"),(void*)f_7732},
{C_text("f_7738:posix_2escm"),(void*)f_7738},
{C_text("f_7762:posix_2escm"),(void*)f_7762},
{C_text("f_7766:posix_2escm"),(void*)f_7766},
{C_text("f_7771:posix_2escm"),(void*)f_7771},
{C_text("f_7778:posix_2escm"),(void*)f_7778},
{C_text("f_7796:posix_2escm"),(void*)f_7796},
{C_text("f_7800:posix_2escm"),(void*)f_7800},
{C_text("f_7802:posix_2escm"),(void*)f_7802},
{C_text("f_7806:posix_2escm"),(void*)f_7806},
{C_text("f_7809:posix_2escm"),(void*)f_7809},
{C_text("f_7817:posix_2escm"),(void*)f_7817},
{C_text("f_7838:posix_2escm"),(void*)f_7838},
{C_text("f_7842:posix_2escm"),(void*)f_7842},
{C_text("f_7844:posix_2escm"),(void*)f_7844},
{C_text("f_7848:posix_2escm"),(void*)f_7848},
{C_text("f_7850:posix_2escm"),(void*)f_7850},
{C_text("f_7854:posix_2escm"),(void*)f_7854},
{C_text("toplevel:posix_2escm"),(void*)C_posix_toplevel},
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
o|hiding unexported module binding: chicken.posix#d 
o|hiding unexported module binding: chicken.posix#define-alias 
o|hiding unexported module binding: chicken.posix#define-unimplemented 
o|hiding unexported module binding: chicken.posix#set!-unimplemented 
o|hiding unexported module binding: chicken.posix#posix-error 
o|hiding unexported module binding: chicken.posix#stat-mode 
o|hiding unexported module binding: chicken.posix#stat 
o|hiding unexported module binding: chicken.posix#decode-seconds 
o|hiding unexported module binding: chicken.posix#check-time-vector 
o|hiding unexported module binding: chicken.posix#list->c-string-buffer 
o|hiding unexported module binding: chicken.posix#free-c-string-buffer 
o|hiding unexported module binding: chicken.posix#check-environment-list 
o|hiding unexported module binding: chicken.posix#call-with-exec-args 
o|hiding unexported module binding: chicken.posix#chown 
o|hiding unexported module binding: chicken.posix#process-wait-impl 
o|hiding unexported module binding: chicken.posix#shell-command 
o|hiding unexported module binding: chicken.posix#shell-command-arguments 
o|hiding unexported module binding: chicken.posix#process-impl 
S|applied compiler syntax:
S|  for-each		3
S|  map		2
o|eliminated procedure checks: 134 
o|specializations:
o|  1 (scheme#make-string fixnum)
o|  1 (scheme#* * *)
o|  2 (chicken.bitwise#bitwise-ior fixnum fixnum)
o|  1 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  11 (scheme#cdr pair)
o|  1 (chicken.base#add1 fixnum)
o|  3 (##sys#length list)
o|  2 (scheme#= * *)
o|  1 (scheme#zero? *)
o|  2 (##sys#check-open-port * *)
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  1 (scheme#< * *)
o|  12 (scheme#car pair)
o|  4 (##sys#check-list (or pair list) *)
o|  1 (scheme#char=? char char)
o|  2 (scheme#zero? integer)
(o e)|safe calls: 744 
(o e)|assignments to immediate values: 123 
o|dropping redundant toplevel assignment: chicken.file.posix#file-stat 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-permissions! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-modification-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-access-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-change-time 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-times! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-size 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-owner! 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-group! 
o|safe globals: (chicken.file.posix#set-file-group! chicken.file.posix#set-file-owner! chicken.file.posix#file-size chicken.file.posix#set-file-times! chicken.file.posix#file-change-time chicken.file.posix#file-access-time chicken.file.posix#file-modification-time chicken.file.posix#set-file-permissions! chicken.file.posix#file-stat chicken.posix#stat ##sys#posix-error chicken.posix#posix-error chicken.process-context.posix#user-information chicken.process-context.posix#process-group-id chicken.process-context.posix#create-session chicken.process-context.posix#current-effective-user-name chicken.process-context.posix#current-user-name chicken.process-context.posix#parent-process-id chicken.process-context.posix#current-process-id chicken.process-context.posix#current-user-id chicken.process-context.posix#current-group-id chicken.process-context.posix#current-effective-user-id chicken.process-context.posix#current-effective-group-id chicken.process-context.posix#set-root-directory! chicken.process-context.posix#change-directory* chicken.process.signal#signals-list chicken.process.signal#signal/xfsz chicken.process.signal#signal/xcpu chicken.process.signal#signal/winch chicken.process.signal#signal/vtalrm chicken.process.signal#signal/usr2 chicken.process.signal#signal/usr1 chicken.process.signal#signal/urg chicken.process.signal#signal/tstp chicken.process.signal#signal/trap chicken.process.signal#signal/term chicken.process.signal#signal/stop chicken.process.signal#signal/segv chicken.process.signal#signal/quit chicken.process.signal#signal/prof chicken.process.signal#signal/pipe chicken.process.signal#signal/kill chicken.process.signal#signal/io chicken.process.signal#signal/int chicken.process.signal#signal/ill chicken.process.signal#signal/hup chicken.process.signal#signal/fpe chicken.process.signal#signal/cont chicken.process.signal#signal/chld chicken.process.signal#signal/bus chicken.process.signal#signal/break chicken.process.signal#signal/alrm chicken.process.signal#signal/abrt chicken.process.signal#signal-unmask! chicken.process.signal#signal-masked? chicken.process.signal#signal-mask! chicken.process.signal#signal-mask chicken.process.signal#signal-handler chicken.process.signal#set-signal-mask! chicken.process.signal#set-signal-handler! chicken.process.signal#set-alarm! chicken.process#spawn/detach chicken.process#spawn/nowaito chicken.process#spawn/nowait chicken.process#spawn/wait chicken.process#spawn/overlay chicken.process#pipe/buf chicken.process#process-sleep chicken.process#process* chicken.process#process chicken.process#with-output-to-pipe chicken.process#with-input-from-pipe chicken.process#open-output-pipe chicken.process#open-input-pipe chicken.process#create-pipe chicken.process#close-output-pipe chicken.process#close-input-pipe chicken.process#call-with-output-pipe chicken.process#call-with-input-pipe chicken.process#process-wait chicken.process#process-spawn chicken.process#process-signal chicken.process#process-run chicken.process#process-fork chicken.process#process-execute chicken.process#qs chicken.process#system* chicken.process#system chicken.time.posix#local-timezone-abbreviation chicken.time.posix#time->string chicken.time.posix#string->time chicken.time.posix#local-time->seconds chicken.time.posix#seconds->string chicken.time.posix#seconds->local-time chicken.time.posix#utc-time->seconds chicken.time.posix#seconds->utc-time chicken.file.posix#set-file-position! chicken.file.posix#seek/set chicken.file.posix#seek/end chicken.file.posix#seek/cur chicken.file.posix#port->fileno chicken.file.posix#perm/ixusr chicken.file.posix#perm/ixoth chicken.file.posix#perm/ixgrp chicken.file.posix#perm/iwusr chicken.file.posix#perm/iwoth chicken.file.posix#perm/iwgrp chicken.file.posix#perm/isvtx chicken.file.posix#perm/isuid chicken.file.posix#perm/isgid chicken.file.posix#perm/irwxu chicken.file.posix#perm/irwxo chicken.file.posix#perm/irwxg chicken.file.posix#perm/irusr chicken.file.posix#perm/iroth chicken.file.posix#perm/irgrp chicken.file.posix#open/wronly chicken.file.posix#open/write chicken.file.posix#open/trunc chicken.file.posix#open/text chicken.file.posix#open/sync chicken.file.posix#open/read chicken.file.posix#open/rdwr chicken.file.posix#open/rdonly chicken.file.posix#open/nonblock chicken.file.posix#open/noinherit chicken.file.posix#open/noctty chicken.file.posix#open/fsync chicken.file.posix#open/excl chicken.file.posix#open/creat chicken.file.posix#open/binary chicken.file.posix#open/append chicken.file.posix#open-output-file* chicken.file.posix#open-input-file* chicken.file.posix#fileno/stdout chicken.file.posix#fileno/stdin chicken.file.posix#fileno/stderr chicken.file.posix#symbolic-link? chicken.file.posix#socket? chicken.file.posix#regular-file? chicken.file.posix#fifo? chicken.file.posix#directory? chicken.file.posix#character-device? chicken.file.posix#block-device? chicken.file.posix#file-type chicken.file.posix#file-write chicken.file.posix#file-unlock chicken.file.posix#file-truncate chicken.file.posix#file-test-lock chicken.file.posix#file-select chicken.file.posix#file-read chicken.file.posix#file-position chicken.file.posix#file-permissions chicken.file.posix#file-owner chicken.file.posix#file-open chicken.file.posix#file-mkstemp chicken.file.posix#file-lock/blocking chicken.file.posix#file-lock chicken.file.posix#file-link chicken.file.posix#file-group chicken.file.posix#file-creation-mode chicken.file.posix#file-control chicken.file.posix#file-close chicken.file.posix#fcntl/setfl chicken.file.posix#fcntl/setfd chicken.file.posix#fcntl/getfl chicken.file.posix#fcntl/getfd chicken.file.posix#fcntl/dupfd chicken.file.posix#duplicate-fileno chicken.file.posix#read-symbolic-link chicken.file.posix#create-symbolic-link chicken.file.posix#create-fifo c2204) 
o|inlining procedure: k2726 
o|inlining procedure: k2726 
o|inlining procedure: k2744 
o|inlining procedure: k2744 
o|inlining procedure: k2771 
o|inlining procedure: k2771 
o|substituted constant variable: a2781 
o|inlining procedure: k2812 
o|inlining procedure: k2812 
o|contracted procedure: "(posix-common.scm:162) strerror630" 
o|inlining procedure: k2965 
o|inlining procedure: k2965 
o|inlining procedure: k2980 
o|inlining procedure: k2980 
o|inlining procedure: k2999 
o|inlining procedure: k2999 
o|inlining procedure: k3032 
o|inlining procedure: k3032 
o|inlining procedure: k3044 
o|inlining procedure: k3044 
o|inlining procedure: k3122 
o|inlining procedure: k3122 
o|contracted procedure: "(posix-common.scm:262) g702703" 
o|inlining procedure: k3109 
o|inlining procedure: k3109 
o|inlining procedure: k3209 
o|inlining procedure: k3221 
o|inlining procedure: k3221 
o|inlining procedure: k3233 
o|inlining procedure: k3233 
o|inlining procedure: k3245 
o|inlining procedure: k3245 
o|inlining procedure: k3209 
o|inlining procedure: k3366 
o|inlining procedure: k3366 
o|inlining procedure: k3378 
o|inlining procedure: k3378 
o|inlining procedure: k3388 
o|inlining procedure: k3388 
o|inlining procedure: k3438 
o|inlining procedure: k3451 
o|inlining procedure: k3451 
o|substituted constant variable: a3464 
o|inlining procedure: k3438 
o|inlining procedure: k3471 
o|inlining procedure: k3471 
o|inlining procedure: k3484 
o|inlining procedure: k3484 
o|substituted constant variable: a3519 
o|inlining procedure: k3520 
o|inlining procedure: k3520 
o|inlining procedure: k3539 
o|inlining procedure: k3539 
o|inlining procedure: k3569 
o|inlining procedure: k3569 
o|inlining procedure: k3596 
o|inlining procedure: k3596 
o|inlining procedure: k3609 
o|propagated global variable: r36107919 chicken.process-context.posix#change-directory* 
o|inlining procedure: k3609 
o|inlining procedure: k3629 
o|inlining procedure: k3629 
o|inlining procedure: k3707 
o|inlining procedure: k3707 
o|contracted procedure: "(posix-common.scm:563) ctime877" 
o|substituted constant variable: a3746 
o|inlining procedure: k3743 
o|inlining procedure: k3743 
o|inlining procedure: k3786 
o|contracted procedure: "(posix-common.scm:586) strftime902" 
o|inlining procedure: k3772 
o|inlining procedure: k3772 
o|inlining procedure: k3786 
o|contracted procedure: "(posix-common.scm:588) asctime901" 
o|inlining procedure: k3759 
o|inlining procedure: k3759 
o|inlining procedure: k3895 
o|inlining procedure: k3895 
o|inlining procedure: k3981 
o|inlining procedure: k3981 
o|contracted procedure: "(posix-common.scm:656) c-string->allocated-pointer971" 
o|merged explicitly consed rest parameter: args9831004 
o|consed rest parameter at call site: tmp22529 1 
o|inlining procedure: k4062 
o|inlining procedure: k4062 
o|inlining procedure: k4111 
o|inlining procedure: k4111 
o|inlining procedure: k4169 
o|inlining procedure: k4169 
o|inlining procedure: k4228 
o|contracted procedure: "(posix-common.scm:699) g10711080" 
o|inlining procedure: k4228 
o|inlining procedure: k4275 
o|inlining procedure: k4275 
o|inlining procedure: k4293 
o|inlining procedure: k4293 
o|inlining procedure: k4306 
o|inlining procedure: k4306 
o|inlining procedure: k4322 
o|inlining procedure: k4322 
o|inlining procedure: "(posix-common.scm:728) badmode1094" 
o|substituted constant variable: a4346 
o|substituted constant variable: a4348 
o|inlining procedure: k4362 
o|inlining procedure: k4362 
o|inlining procedure: "(posix-common.scm:739) badmode1094" 
o|substituted constant variable: a4386 
o|substituted constant variable: a4388 
o|substituted constant variable: a4393 
o|substituted constant variable: a4394 
o|inlining procedure: k4395 
o|inlining procedure: k4395 
o|substituted constant variable: a4408 
o|substituted constant variable: a4409 
o|inlining procedure: k4410 
o|inlining procedure: k4410 
o|inlining procedure: k4597 
o|inlining procedure: k4597 
o|contracted procedure: "(posixunix.scm:341) fcntl1273" 
o|inlining procedure: k4635 
o|inlining procedure: k4635 
o|inlining procedure: k4660 
o|inlining procedure: k4660 
o|inlining procedure: k4694 
o|inlining procedure: k4694 
o|inlining procedure: k4734 
o|inlining procedure: k4734 
o|inlining procedure: k4837 
o|inlining procedure: k4837 
o|inlining procedure: k4860 
o|inlining procedure: k4860 
o|inlining procedure: k4883 
o|inlining procedure: k4892 
o|inlining procedure: k4892 
o|inlining procedure: k4883 
o|inlining procedure: k4898 
o|inlining procedure: k4898 
o|inlining procedure: k4913 
o|inlining procedure: k4913 
o|contracted procedure: "(posixunix.scm:449) g14451446" 
o|inlining procedure: k4932 
o|inlining procedure: k4932 
o|inlining procedure: k4972 
o|inlining procedure: k4972 
o|contracted procedure: "(posixunix.scm:441) g14261427" 
o|inlining procedure: k4991 
o|inlining procedure: k4991 
o|contracted procedure: "(posixunix.scm:434) g14001401" 
o|substituted constant variable: a5036 
o|inlining procedure: k5040 
o|inlining procedure: k5040 
o|contracted procedure: "(posixunix.scm:428) g13851386" 
o|inlining procedure: k5057 
o|inlining procedure: k5057 
o|inlining procedure: k5082 
o|inlining procedure: k5082 
o|contracted procedure: "(posixunix.scm:422) g13681369" 
o|inlining procedure: k5099 
o|inlining procedure: k5099 
o|inlining procedure: k5132 
o|inlining procedure: k5132 
o|inlining procedure: k5147 
o|inlining procedure: k5147 
o|inlining procedure: k5169 
o|inlining procedure: k5169 
o|inlining procedure: k5233 
o|inlining procedure: k5233 
o|inlining procedure: k5246 
o|contracted procedure: "(posixunix.scm:564) g14781485" 
o|inlining procedure: k5246 
o|inlining procedure: k5282 
o|inlining procedure: k5282 
o|inlining procedure: k5298 
o|inlining procedure: k5298 
o|inlining procedure: k5333 
o|inlining procedure: k5333 
o|inlining procedure: k5418 
o|inlining procedure: k5418 
o|inlining procedure: k5434 
o|inlining procedure: k5434 
o|inlining procedure: k5456 
o|inlining procedure: k5456 
o|inlining procedure: k5481 
o|inlining procedure: k5481 
o|inlining procedure: k5509 
o|inlining procedure: k5509 
o|inlining procedure: k5530 
o|inlining procedure: k5555 
o|inlining procedure: k5555 
o|inlining procedure: k5576 
o|inlining procedure: k5576 
o|inlining procedure: k5606 
o|inlining procedure: k5606 
o|inlining procedure: k5530 
o|inlining procedure: k5651 
o|inlining procedure: k5651 
o|contracted procedure: "(posixunix.scm:778) link1608" 
o|inlining procedure: k5626 
o|inlining procedure: k5626 
o|inlining procedure: k5705 
o|inlining procedure: k5705 
o|inlining procedure: k5731 
o|inlining procedure: k5731 
o|inlining procedure: k5745 
o|inlining procedure: k5769 
o|inlining procedure: k5769 
o|inlining procedure: k5745 
o|inlining procedure: k5790 
o|inlining procedure: k5790 
o|inlining procedure: k5810 
o|inlining procedure: k5810 
o|inlining procedure: k5847 
o|inlining procedure: k5847 
o|inlining procedure: k5869 
o|inlining procedure: k5869 
o|inlining procedure: k5878 
o|inlining procedure: k5878 
o|inlining procedure: k5894 
o|inlining procedure: k5894 
o|inlining procedure: k5919 
o|inlining procedure: k5919 
o|inlining procedure: k5966 
o|inlining procedure: k5966 
o|inlining procedure: k5988 
o|inlining procedure: k5988 
o|inlining procedure: k6016 
o|inlining procedure: k6016 
o|inlining procedure: k6059 
o|inlining procedure: k6059 
o|inlining procedure: k6104 
o|inlining procedure: k6104 
o|inlining procedure: k6209 
o|inlining procedure: k6230 
o|inlining procedure: k6230 
o|inlining procedure: k6209 
o|inlining procedure: k6286 
o|inlining procedure: k6286 
o|inlining procedure: k6310 
o|inlining procedure: k6310 
o|inlining procedure: k6325 
o|inlining procedure: k6342 
o|inlining procedure: k6342 
o|inlining procedure: k6325 
o|inlining procedure: k6438 
o|inlining procedure: k6438 
o|inlining procedure: k6448 
o|inlining procedure: k6448 
o|inlining procedure: k6561 
o|inlining procedure: k6561 
o|inlining procedure: k6592 
o|inlining procedure: k6592 
o|inlining procedure: k6617 
o|contracted procedure: "(posixunix.scm:1018) g18691870" 
o|inlining procedure: k6622 
o|inlining procedure: k6622 
o|inlining procedure: k6617 
o|inlining procedure: k6652 
o|inlining procedure: k6652 
o|inlining procedure: k6693 
o|inlining procedure: k6693 
o|contracted procedure: "(posixunix.scm:1052) strptime1889" 
o|inlining procedure: k6722 
o|inlining procedure: k6722 
o|substituted constant variable: a6777 
o|inlining procedure: k6774 
o|inlining procedure: k6774 
o|inlining procedure: k6831 
o|inlining procedure: k6831 
o|contracted procedure: "(posixunix.scm:1088) fork1929" 
o|contracted procedure: "(posixunix.scm:1085) g19471948" 
o|inlining procedure: k6816 
o|inlining procedure: k6816 
o|inlining procedure: k6930 
o|inlining procedure: k6930 
o|inlining procedure: k6982 
o|inlining procedure: k6982 
o|inlining procedure: k7001 
o|inlining procedure: k7001 
o|inlining procedure: k7028 
o|inlining procedure: k7028 
o|removed unused formal parameters: (loc2005) 
o|inlining procedure: k7047 
o|inlining procedure: k7047 
o|inlining procedure: k7065 
o|inlining procedure: k7065 
o|inlining procedure: "(posixunix.scm:1155) chicken.posix#shell-command-arguments" 
o|removed unused parameter to known procedure: loc2005 "(posixunix.scm:1154) chicken.posix#shell-command" 
o|inlining procedure: k7118 
o|inlining procedure: k7136 
o|inlining procedure: k7136 
o|inlining procedure: k7118 
o|removed unused formal parameters: (loc2040) 
o|inlining procedure: k7150 
o|inlining procedure: k7150 
o|removed unused formal parameters: (loc2045 fd2048) 
o|inlining procedure: k7170 
o|inlining procedure: k7170 
o|inlining procedure: k7182 
o|contracted procedure: "(posixunix.scm:1207) replace-fd2020" 
o|inlining procedure: k7099 
o|inlining procedure: k7099 
o|inlining procedure: k7182 
o|inlining procedure: k7197 
o|inlining procedure: k7197 
o|removed unused parameter to known procedure: loc2040 "(posixunix.scm:1217) needed-pipe2026" 
o|removed unused parameter to known procedure: loc2040 "(posixunix.scm:1216) needed-pipe2026" 
o|removed unused parameter to known procedure: loc2040 "(posixunix.scm:1215) needed-pipe2026" 
o|removed unused formal parameters: (pid2080) 
o|inlining procedure: k7259 
o|inlining procedure: k7259 
o|removed unused parameter to known procedure: loc2045 "(posixunix.scm:1228) connect-parent2027" 
o|removed unused parameter to known procedure: fd2048 "(posixunix.scm:1228) connect-parent2027" 
o|removed unused formal parameters: (pid2089) 
o|inlining procedure: k7270 
o|inlining procedure: k7270 
o|removed unused parameter to known procedure: loc2045 "(posixunix.scm:1232) connect-parent2027" 
o|removed unused parameter to known procedure: fd2048 "(posixunix.scm:1232) connect-parent2027" 
o|removed unused parameter to known procedure: pid2080 "(posixunix.scm:1249) input-port2061" 
o|removed unused parameter to known procedure: pid2089 "(posixunix.scm:1245) output-port2062" 
o|removed unused parameter to known procedure: pid2080 "(posixunix.scm:1242) input-port2061" 
o|inlining procedure: k7350 
o|inlining procedure: k7350 
o|removed unused parameter to known procedure: loc2005 "(posixunix.scm:1267) chicken.posix#shell-command" 
o|inlining procedure: "(posixunix.scm:1266) chicken.posix#shell-command-arguments" 
o|inlining procedure: k7547 
o|inlining procedure: k7547 
o|contracted procedure: "(posixunix.scm:1290) chroot2189" 
o|inlining procedure: k7532 
o|inlining procedure: k7532 
o|substituted constant variable: c2204 
o|inlining procedure: k7621 
o|inlining procedure: k7621 
o|inlining procedure: k7642 
o|inlining procedure: k7642 
o|inlining procedure: k7661 
o|inlining procedure: k7661 
o|inlining procedure: k7680 
o|inlining procedure: k7680 
o|inlining procedure: k7699 
o|inlining procedure: k7699 
o|inlining procedure: k7718 
o|inlining procedure: k7718 
o|inlining procedure: k7740 
o|inlining procedure: k7740 
o|inlining procedure: k7755 
o|inlining procedure: k7755 
o|inlining procedure: k7783 
o|inlining procedure: k7783 
o|substituted constant variable: a7811 
o|inlining procedure: k7807 
o|inlining procedure: k7807 
o|inlining procedure: k7818 
o|inlining procedure: k7818 
o|inlining procedure: k7828 
o|inlining procedure: k7828 
o|replaced variables: 737 
o|removed binding forms: 660 
o|removed side-effect free assignment to unused variable: c2204 
o|substituted constant variable: r29667864 
o|substituted constant variable: r31107877 
o|substituted constant variable: r31107877 
o|substituted constant variable: r32227880 
o|substituted constant variable: r32347882 
o|substituted constant variable: r32467884 
o|substituted constant variable: r32107886 
o|substituted constant variable: r33797890 
o|inlining procedure: k3438 
o|substituted constant variable: r34527895 
o|inlining procedure: k3438 
o|inlining procedure: k3438 
o|substituted constant variable: r34857901 
o|substituted constant variable: r34857901 
o|substituted constant variable: r34857903 
o|substituted constant variable: r34857903 
o|propagated global variable: g8308317920 chicken.process-context.posix#change-directory* 
o|substituted constant variable: r37737939 
o|substituted constant variable: r37737939 
o|substituted constant variable: r37607946 
o|substituted constant variable: r37607946 
o|substituted constant variable: r42767970 
o|removed side-effect free assignment to unused variable: badmode1094 
o|substituted constant variable: r43077973 
o|substituted constant variable: r43077973 
o|substituted constant variable: r43077975 
o|substituted constant variable: r43077975 
o|inlining procedure: k4322 
o|inlining procedure: k4362 
o|substituted constant variable: r48618027 
o|substituted constant variable: r48618027 
o|substituted constant variable: r48618029 
o|substituted constant variable: r48618029 
o|inlining procedure: k4883 
o|inlining procedure: k4883 
o|substituted constant variable: r48938034 
o|inlining procedure: k4883 
o|substituted constant variable: r48848035 
o|substituted constant variable: r48848035 
o|substituted constant variable: r49338043 
o|substituted constant variable: r49338043 
o|substituted constant variable: r49928049 
o|substituted constant variable: r49928049 
o|substituted constant variable: r50588055 
o|substituted constant variable: r50588055 
o|substituted constant variable: r51008061 
o|substituted constant variable: r51008061 
o|substituted constant variable: r53348086 
o|inlining procedure: k5576 
o|substituted constant variable: r56078108 
o|substituted constant variable: r56078108 
o|substituted constant variable: r56278115 
o|substituted constant variable: r56278115 
o|substituted constant variable: r57328119 
o|inlining procedure: k5802 
o|inlining procedure: k5802 
o|substituted constant variable: r59898159 
o|substituted constant variable: r61058171 
o|inlining procedure: k6448 
o|substituted constant variable: r66238205 
o|substituted constant variable: r67238213 
o|substituted constant variable: r67238213 
o|substituted constant variable: c-pointer19491953 
o|substituted constant variable: c-pointer19491953 
o|substituted constant variable: r68178221 
o|substituted constant variable: r68178221 
o|inlining procedure: k7001 
o|inlining procedure: k7001 
o|substituted constant variable: r70488234 
o|removed side-effect free assignment to unused variable: chicken.posix#shell-command-arguments 
o|substituted constant variable: r71518247 
o|substituted constant variable: r71718249 
o|substituted constant variable: r71988255 
o|removed unused formal parameters: (stdfd2084) 
o|substituted constant variable: r72608257 
o|removed unused formal parameters: (stdfd2093) 
o|substituted constant variable: r72718259 
o|removed unused parameter to known procedure: stdfd2084 "(posixunix.scm:1249) input-port2061" 
o|removed unused parameter to known procedure: stdfd2093 "(posixunix.scm:1245) output-port2062" 
o|removed unused parameter to known procedure: stdfd2084 "(posixunix.scm:1242) input-port2061" 
o|substituted constant variable: r75338271 
o|substituted constant variable: r75338271 
o|substituted constant variable: r78198302 
o|replaced variables: 55 
o|removed binding forms: 770 
o|removed conditional forms: 1 
o|inlining procedure: k3846 
o|inlining procedure: k3846 
o|inlining procedure: k4071 
o|inlining procedure: k4706 
o|inlining procedure: k4706 
o|inlining procedure: k4750 
o|inlining procedure: k4750 
o|substituted constant variable: r48848335 
o|removed unused formal parameters: (loc2053) 
o|removed unused parameter to known procedure: loc2053 "(posixunix.scm:1224) connect-child2028" 
o|removed unused parameter to known procedure: loc2053 "(posixunix.scm:1223) connect-child2028" 
o|removed unused parameter to known procedure: loc2053 "(posixunix.scm:1222) connect-child2028" 
o|inlining procedure: k7486 
o|replaced variables: 16 
o|removed binding forms: 149 
o|substituted constant variable: r34398307 
o|substituted constant variable: r34398309 
o|substituted constant variable: r34398311 
o|substituted constant variable: r38478405 
o|contracted procedure: k3996 
o|substituted constant variable: r47078422 
o|substituted constant variable: r47518424 
o|contracted procedure: k6825 
o|removed unused formal parameters: (loc2066) 
o|removed unused parameter to known procedure: loc2066 "(posixunix.scm:1236) spawn2060" 
o|inlining procedure: k7780 
o|inlining procedure: k7780 
o|simplifications: ((let . 2)) 
o|replaced variables: 5 
o|removed binding forms: 20 
o|removed conditional forms: 2 
o|substituted constant variable: r77818497 
o|replaced variables: 1 
o|removed binding forms: 12 
o|contracted procedure: k6822 
o|removed binding forms: 3 
o|simplifications: ((if . 86) (##core#call . 539)) 
o|  call simplifications:
o|    scheme#vector-ref	2
o|    scheme#make-vector
o|    chicken.fixnum#fxior	2
o|    ##sys#check-structure
o|    ##sys#make-structure
o|    ##sys#setislot	3
o|    chicken.fixnum#fxmin	2
o|    scheme#eof-object?
o|    chicken.fixnum#fx>=	7
o|    chicken.fixnum#fx*
o|    scheme#memq	2
o|    scheme#list	7
o|    scheme#call-with-values	4
o|    ##sys#check-pair
o|    ##sys#check-list	7
o|    ##sys#apply	2
o|    chicken.fixnum#fx+	21
o|    ##sys#call-with-values	8
o|    scheme#values	19
o|    scheme#vector-set!	3
o|    ##sys#foreign-block-argument	8
o|    ##sys#foreign-ranged-integer-argument	2
o|    chicken.fixnum#fx-	12
o|    ##sys#check-vector
o|    ##sys#size	11
o|    ##sys#null-pointer?	2
o|    scheme#not	9
o|    chicken.fixnum#fx=	42
o|    scheme#cdr	29
o|    ##sys#foreign-string-argument	4
o|    scheme#vector	2
o|    chicken.base#fixnum?	16
o|    scheme#string?	4
o|    ##sys#foreign-fixnum-argument	14
o|    scheme#null?	72
o|    scheme#car	51
o|    scheme#string->list
o|    scheme#pair?	17
o|    scheme#cons	10
o|    ##sys#setslot	4
o|    ##sys#slot	27
o|    scheme#apply	11
o|    scheme#char=?
o|    scheme#string	3
o|    scheme#eq?	29
o|    ##sys#check-string	21
o|    chicken.fixnum#fx<	41
o|contracted procedure: k2723 
o|contracted procedure: k2729 
o|contracted procedure: k2747 
o|contracted procedure: k2846 
o|contracted procedure: k2760 
o|contracted procedure: k2843 
o|contracted procedure: k2763 
o|contracted procedure: k2766 
o|contracted procedure: k2774 
o|contracted procedure: k2798 
o|contracted procedure: k2806 
o|contracted procedure: k2815 
o|contracted procedure: k2818 
o|contracted procedure: k2821 
o|contracted procedure: k2829 
o|contracted procedure: k2837 
o|contracted procedure: k2849 
o|contracted procedure: k2939 
o|contracted procedure: k2968 
o|contracted procedure: k2977 
o|contracted procedure: k2993 
o|contracted procedure: k3017 
o|contracted procedure: k3008 
o|contracted procedure: k3035 
o|contracted procedure: k3041 
o|contracted procedure: k3057 
o|contracted procedure: k3149 
o|contracted procedure: k3091 
o|contracted procedure: k3143 
o|contracted procedure: k3094 
o|contracted procedure: k3137 
o|contracted procedure: k3097 
o|contracted procedure: k3125 
o|contracted procedure: k3116 
o|contracted procedure: k3155 
o|contracted procedure: k3275 
o|contracted procedure: k3197 
o|contracted procedure: k3269 
o|contracted procedure: k3200 
o|contracted procedure: k3263 
o|contracted procedure: k3203 
o|contracted procedure: k3257 
o|contracted procedure: k3206 
o|contracted procedure: k3218 
o|contracted procedure: k3224 
o|contracted procedure: k3230 
o|contracted procedure: k3236 
o|contracted procedure: k3242 
o|contracted procedure: k3248 
o|contracted procedure: k3254 
o|contracted procedure: k3385 
o|contracted procedure: k3381 
o|contracted procedure: k3391 
o|contracted procedure: k3397 
o|contracted procedure: k3441 
o|contracted procedure: k3448 
o|contracted procedure: k3454 
o|contracted procedure: k3474 
o|contracted procedure: k3557 
o|contracted procedure: k3523 
o|contracted procedure: k3536 
o|contracted procedure: k3542 
o|contracted procedure: k3572 
o|contracted procedure: k3578 
o|contracted procedure: k3581 
o|contracted procedure: k3599 
o|contracted procedure: k3615 
o|contracted procedure: k3626 
o|contracted procedure: k3639 
o|contracted procedure: k3632 
o|contracted procedure: k3654 
o|contracted procedure: k3675 
o|contracted procedure: k3718 
o|contracted procedure: k3714 
o|contracted procedure: k3692 
o|contracted procedure: k3724 
o|contracted procedure: k3833 
o|contracted procedure: k3780 
o|contracted procedure: k3789 
o|contracted procedure: k3772 
o|contracted procedure: k3823 
o|contracted procedure: k3819 
o|contracted procedure: k3759 
o|contracted procedure: k3925 
o|contracted procedure: k3865 
o|contracted procedure: k3919 
o|contracted procedure: k3868 
o|contracted procedure: k3913 
o|contracted procedure: k3871 
o|contracted procedure: k3907 
o|contracted procedure: k3874 
o|contracted procedure: k3877 
o|contracted procedure: k3898 
o|contracted procedure: k3936 
o|contracted procedure: k3984 
o|contracted procedure: k3987 
o|contracted procedure: k4024 
o|contracted procedure: k3990 
o|contracted procedure: k4011 
o|contracted procedure: k4065 
o|contracted procedure: k4078 
o|contracted procedure: k40788412 
o|contracted procedure: k4087 
o|contracted procedure: k4092 
o|contracted procedure: k4095 
o|contracted procedure: k4114 
o|contracted procedure: k4124 
o|contracted procedure: k4128 
o|contracted procedure: k4139 
o|contracted procedure: k4205 
o|contracted procedure: k4219 
o|contracted procedure: k4231 
o|contracted procedure: k4234 
o|contracted procedure: k4237 
o|contracted procedure: k4245 
o|contracted procedure: k4253 
o|contracted procedure: k4214 
o|contracted procedure: k4278 
o|contracted procedure: k4296 
o|contracted procedure: k4312 
o|contracted procedure: k4325 
o|contracted procedure: k4335 
o|contracted procedure: k4352 
o|contracted procedure: k4365 
o|contracted procedure: k4375 
o|contracted procedure: k4398 
o|contracted procedure: k4413 
o|contracted procedure: k4539 
o|contracted procedure: k4546 
o|contracted procedure: k4606 
o|contracted procedure: k4585 
o|contracted procedure: k4600 
o|contracted procedure: k4571 
o|contracted procedure: k4575 
o|contracted procedure: k4579 
o|contracted procedure: k4622 
o|contracted procedure: k4638 
o|contracted procedure: k4644 
o|contracted procedure: k4663 
o|contracted procedure: k4669 
o|contracted procedure: k4700 
o|contracted procedure: k4712 
o|contracted procedure: k4737 
o|contracted procedure: k4743 
o|contracted procedure: k4759 
o|contracted procedure: k4765 
o|contracted procedure: k4779 
o|contracted procedure: k4782 
o|contracted procedure: k4802 
o|contracted procedure: k4840 
o|contracted procedure: k4849 
o|contracted procedure: k4866 
o|contracted procedure: k4856 
o|contracted procedure: k4863 
o|contracted procedure: k4889 
o|contracted procedure: k4895 
o|contracted procedure: k4901 
o|contracted procedure: k4907 
o|contracted procedure: k4916 
o|contracted procedure: k4945 
o|contracted procedure: k4955 
o|contracted procedure: k4949 
o|contracted procedure: k4962 
o|contracted procedure: k4966 
o|contracted procedure: k4928 
o|contracted procedure: k4932 
o|contracted procedure: k4975 
o|contracted procedure: k5004 
o|contracted procedure: k5014 
o|contracted procedure: k5008 
o|contracted procedure: k5021 
o|contracted procedure: k5025 
o|contracted procedure: k4987 
o|contracted procedure: k4991 
o|contracted procedure: k4820 
o|contracted procedure: k4824 
o|contracted procedure: k4828 
o|contracted procedure: k5043 
o|contracted procedure: k5070 
o|contracted procedure: k5076 
o|contracted procedure: k5049 
o|contracted procedure: k5053 
o|contracted procedure: k5057 
o|contracted procedure: k5085 
o|contracted procedure: k5112 
o|contracted procedure: k5118 
o|contracted procedure: k5091 
o|contracted procedure: k5095 
o|contracted procedure: k5099 
o|contracted procedure: k5125 
o|contracted procedure: k5129 
o|contracted procedure: k5135 
o|contracted procedure: k5141 
o|contracted procedure: k5144 
o|contracted procedure: k5150 
o|contracted procedure: k5156 
o|contracted procedure: k5159 
o|contracted procedure: k5182 
o|contracted procedure: k5166 
o|contracted procedure: k5175 
o|contracted procedure: k5216 
o|contracted procedure: k5222 
o|contracted procedure: k5236 
o|contracted procedure: k5249 
o|contracted procedure: k5259 
o|contracted procedure: k5263 
o|contracted procedure: k5285 
o|contracted procedure: k5301 
o|contracted procedure: k5372 
o|contracted procedure: k5327 
o|contracted procedure: k5336 
o|contracted procedure: k5362 
o|contracted procedure: k5365 
o|contracted procedure: k5421 
o|contracted procedure: k5437 
o|contracted procedure: k5443 
o|contracted procedure: k5459 
o|contracted procedure: k5475 
o|contracted procedure: k5478 
o|contracted procedure: k5484 
o|contracted procedure: k5512 
o|contracted procedure: k5612 
o|contracted procedure: k5524 
o|contracted procedure: k5527 
o|contracted procedure: k5558 
o|contracted procedure: k5598 
o|contracted procedure: k5602 
o|contracted procedure: k5645 
o|contracted procedure: k5648 
o|contracted procedure: k5654 
o|contracted procedure: k5633 
o|contracted procedure: k5640 
o|contracted procedure: k6171 
o|contracted procedure: k5667 
o|contracted procedure: k6165 
o|contracted procedure: k5670 
o|contracted procedure: k6159 
o|contracted procedure: k5673 
o|contracted procedure: k6153 
o|contracted procedure: k5676 
o|contracted procedure: k6147 
o|contracted procedure: k5679 
o|contracted procedure: k6141 
o|contracted procedure: k5682 
o|contracted procedure: k6135 
o|contracted procedure: k5685 
o|contracted procedure: k6129 
o|contracted procedure: k5688 
o|contracted procedure: k6120 
o|contracted procedure: k5694 
o|contracted procedure: k5708 
o|contracted procedure: k5714 
o|contracted procedure: k5717 
o|contracted procedure: k5734 
o|contracted procedure: k5748 
o|contracted procedure: k5754 
o|contracted procedure: k5757 
o|contracted procedure: k5772 
o|contracted procedure: k5787 
o|contracted procedure: k5807 
o|contracted procedure: k5813 
o|contracted procedure: k5816 
o|contracted procedure: k5835 
o|contracted procedure: k5850 
o|contracted procedure: k5854 
o|contracted procedure: k5857 
o|contracted procedure: k5866 
o|contracted procedure: k5884 
o|contracted procedure: k5900 
o|contracted procedure: k5922 
o|contracted procedure: k5928 
o|contracted procedure: k5931 
o|contracted procedure: k5960 
o|contracted procedure: k5934 
o|contracted procedure: k5938 
o|contracted procedure: k5942 
o|contracted procedure: k5949 
o|contracted procedure: k5953 
o|contracted procedure: k5957 
o|contracted procedure: k5969 
o|contracted procedure: k5979 
o|contracted procedure: k5991 
o|contracted procedure: k5994 
o|contracted procedure: k6053 
o|contracted procedure: k6007 
o|contracted procedure: k6013 
o|contracted procedure: k6019 
o|contracted procedure: k6026 
o|contracted procedure: k6035 
o|contracted procedure: k6046 
o|contracted procedure: k6042 
o|contracted procedure: k6074 
o|contracted procedure: k6070 
o|contracted procedure: k6063 
o|inlining procedure: k6059 
o|contracted procedure: k6085 
o|contracted procedure: k6089 
o|contracted procedure: k6081 
o|inlining procedure: k6059 
o|contracted procedure: k6095 
o|contracted procedure: k6107 
o|contracted procedure: k6114 
o|contracted procedure: k6426 
o|contracted procedure: k6180 
o|contracted procedure: k6420 
o|contracted procedure: k6183 
o|contracted procedure: k6414 
o|contracted procedure: k6186 
o|contracted procedure: k6408 
o|contracted procedure: k6189 
o|contracted procedure: k6402 
o|contracted procedure: k6192 
o|contracted procedure: k6396 
o|contracted procedure: k6195 
o|contracted procedure: k6212 
o|contracted procedure: k6218 
o|contracted procedure: k6221 
o|contracted procedure: k6233 
o|contracted procedure: k6248 
o|contracted procedure: k6259 
o|contracted procedure: k6387 
o|contracted procedure: k6262 
o|contracted procedure: k6274 
o|contracted procedure: k6292 
o|contracted procedure: k6305 
o|contracted procedure: k6317 
o|contracted procedure: k6332 
o|contracted procedure: k6336 
o|contracted procedure: k6345 
o|contracted procedure: k6358 
o|contracted procedure: k6365 
o|contracted procedure: k6369 
o|contracted procedure: k6375 
o|contracted procedure: k6381 
o|contracted procedure: k6451 
o|contracted procedure: k6461 
o|contracted procedure: k6525 
o|contracted procedure: k6470 
o|contracted procedure: k6519 
o|contracted procedure: k6473 
o|contracted procedure: k6513 
o|contracted procedure: k6476 
o|contracted procedure: k6507 
o|contracted procedure: k6479 
o|contracted procedure: k6497 
o|contracted procedure: k6491 
o|contracted procedure: k6500 
o|contracted procedure: k6538 
o|contracted procedure: k6542 
o|contracted procedure: k6546 
o|contracted procedure: k6564 
o|contracted procedure: k6570 
o|contracted procedure: k6595 
o|contracted procedure: k6601 
o|contracted procedure: k6629 
o|contracted procedure: k6625 
o|contracted procedure: k6641 
o|contracted procedure: k6645 
o|contracted procedure: k6649 
o|contracted procedure: k6678 
o|contracted procedure: k6655 
o|contracted procedure: k6661 
o|contracted procedure: k6684 
o|contracted procedure: k6696 
o|contracted procedure: k6707 
o|contracted procedure: k6715 
o|contracted procedure: k6758 
o|contracted procedure: k6730 
o|contracted procedure: k6733 
o|contracted procedure: k6736 
o|contracted procedure: k6751 
o|substituted constant variable: g8656 
o|substituted constant variable: g8656 
o|substituted constant variable: g8656 
o|substituted constant variable: g8656 
o|substituted constant variable: g8656 
o|substituted constant variable: g8656 
o|substituted constant variable: g8656 
o|substituted constant variable: g8656 
o|substituted constant variable: g8656 
o|substituted constant variable: g8656 
o|contracted procedure: k6722 
o|contracted procedure: k6793 
o|contracted procedure: k6891 
o|contracted procedure: k6801 
o|contracted procedure: k6885 
o|contracted procedure: k6804 
o|contracted procedure: k6879 
o|contracted procedure: k6807 
o|contracted procedure: k6873 
o|contracted procedure: k6810 
o|contracted procedure: k6834 
o|contracted procedure: k6837 
o|contracted procedure: k6867 
o|contracted procedure: k6969 
o|contracted procedure: k6900 
o|contracted procedure: k6963 
o|contracted procedure: k6903 
o|contracted procedure: k6957 
o|contracted procedure: k6906 
o|contracted procedure: k6951 
o|contracted procedure: k6909 
o|contracted procedure: k6945 
o|contracted procedure: k6912 
o|contracted procedure: k6939 
o|contracted procedure: k6915 
o|contracted procedure: k6927 
o|contracted procedure: k6933 
o|contracted procedure: k6979 
o|contracted procedure: k7007 
o|contracted procedure: k6985 
o|contracted procedure: k7031 
o|contracted procedure: k7037 
o|contracted procedure: k7089 
o|contracted procedure: k7068 
o|contracted procedure: k7085 
o|contracted procedure: k7092 
o|contracted procedure: k7115 
o|contracted procedure: k7142 
o|contracted procedure: k7121 
o|contracted procedure: k7173 
o|contracted procedure: k7185 
o|contracted procedure: k7102 
o|contracted procedure: k7204 
o|contracted procedure: k7321 
o|contracted procedure: k7325 
o|contracted procedure: k7329 
o|contracted procedure: k7290 
o|contracted procedure: k7336 
o|contracted procedure: k7353 
o|contracted procedure: k7363 
o|contracted procedure: k7367 
o|contracted procedure: k7370 
o|contracted procedure: k7395 
o|contracted procedure: k7462 
o|contracted procedure: k7405 
o|contracted procedure: k7456 
o|contracted procedure: k7408 
o|contracted procedure: k7450 
o|contracted procedure: k7411 
o|contracted procedure: k7444 
o|contracted procedure: k7414 
o|contracted procedure: k7438 
o|contracted procedure: k7417 
o|contracted procedure: k7432 
o|contracted procedure: k7420 
o|contracted procedure: k7522 
o|contracted procedure: k7471 
o|contracted procedure: k7516 
o|contracted procedure: k7474 
o|contracted procedure: k7510 
o|contracted procedure: k7477 
o|contracted procedure: k7504 
o|contracted procedure: k7480 
o|contracted procedure: k7498 
o|contracted procedure: k7483 
o|contracted procedure: k7492 
o|contracted procedure: k7486 
o|contracted procedure: k7544 
o|contracted procedure: k7550 
o|contracted procedure: k7539 
o|contracted procedure: k7612 
o|contracted procedure: k7624 
o|contracted procedure: k7645 
o|contracted procedure: k7664 
o|contracted procedure: k7683 
o|contracted procedure: k7702 
o|contracted procedure: k7721 
o|contracted procedure: k7743 
o|contracted procedure: k7746 
o|contracted procedure: k7755 
o|contracted procedure: k7789 
o|contracted procedure: k7773 
o|contracted procedure: k7825 
o|contracted procedure: k7821 
o|contracted procedure: k7831 
o|simplifications: ((let . 99)) 
o|removed binding forms: 464 
o|inlining procedure: "(posix-common.scm:721) mode1093" 
o|inlining procedure: "(posix-common.scm:732) mode1093" 
o|replaced variables: 269 
o|removed binding forms: 2 
o|removed side-effect free assignment to unused variable: mode1093 
o|inlining procedure: k5063 
o|inlining procedure: k5063 
o|inlining procedure: k5105 
o|inlining procedure: k5105 
o|replaced variables: 6 
o|removed binding forms: 126 
o|contracted procedure: k4594 
o|contracted procedure: k4834 
o|converted assignments to bindings: (check1095) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 10 
o|contracted procedure: k4315 
o|contracted procedure: k4355 
o|removed binding forms: 2 
o|direct leaf routine/allocation: g10221029 0 
o|direct leaf routine/allocation: doloop13641382 0 
o|direct leaf routine/allocation: doloop13631365 0 
o|direct leaf routine/allocation: peek1651 0 
o|direct leaf routine/allocation: swapped-ends2063 3 
o|direct leaf routine/allocation: g21212128 0 
o|contracted procedure: "(posix-common.scm:672) k4117" 
o|contracted procedure: k4811 
o|contracted procedure: k4814 
o|converted assignments to bindings: (doloop13641382) 
o|converted assignments to bindings: (doloop13631365) 
o|contracted procedure: "(posixunix.scm:840) k5844" 
o|contracted procedure: "(posixunix.scm:1219) k7224" 
o|contracted procedure: "(posixunix.scm:1224) k7247" 
o|contracted procedure: "(posixunix.scm:1223) k7251" 
o|contracted procedure: "(posixunix.scm:1261) k7356" 
o|simplifications: ((let . 2)) 
o|removed binding forms: 8 
o|direct leaf routine/allocation: for-each-loop10211034 0 
o|direct leaf routine/allocation: for-each-loop21202138 0 
o|converted assignments to bindings: (for-each-loop10211034) 
o|converted assignments to bindings: (for-each-loop21202138) 
o|simplifications: ((let . 2)) 
o|customizable procedures: (loop1498 %process2109 chkstrlst2116 chicken.posix#process-impl output-port2062 make-on-close2025 input-port2061 spawn2060 connect-parent2027 needed-pipe2026 connect-child2028 k7059 chicken.posix#shell-command k7019 chicken.posix#call-with-exec-args k6687 setup1820 err1821 k6441 loop1790 k6265 k5913 loop1697 ready?1650 fetch1652 loop1595 k5330 for-each-loop14771489 k4791 k4794 k4797 k5029 k4997 lp1418 k4938 lp1437 k4879 k4728 k4619 check1095 chicken.posix#check-environment-list map-loop10651083 chicken.posix#list->c-string-buffer k4187 doloop10091010 tmp12528 tmp22529 doloop990991 chicken.posix#free-c-string-buffer chicken.posix#process-wait-impl chicken.posix#check-time-vector k3566 mode777 check778 k3357 chicken.posix#chown chicken.posix#stat g256265 map-loop250272) 
o|calls to known targets: 234 
o|identified direct recursive calls: f_4109 1 
o|identified direct recursive calls: f_5080 2 
o|identified direct recursive calls: f_5038 2 
o|identified direct recursive calls: f_5917 1 
o|identified direct recursive calls: f_6340 1 
o|identified direct recursive calls: f_7348 1 
o|unused rest argument: _22002203 f_7561 
o|identified direct recursive calls: f_7738 2 
o|fast box initializations: 21 
o|fast global references: 74 
o|fast global assignments: 12 
o|dropping unused closure argument: f_2960 
o|dropping unused closure argument: f_3432 
o|dropping unused closure argument: f_3469 
o|dropping unused closure argument: f_3624 
o|dropping unused closure argument: f_3934 
o|dropping unused closure argument: f_4051 
o|dropping unused closure argument: f_4085 
o|dropping unused closure argument: f_4291 
o|dropping unused closure argument: f_5407 
o|dropping unused closure argument: f_6468 
o|dropping unused closure argument: f_6532 
o|dropping unused closure argument: f_6976 
o|dropping unused closure argument: f_7042 
o|dropping unused closure argument: f_7111 
o|dropping unused closure argument: f_7148 
o|dropping unused closure argument: f_7168 
o|dropping unused closure argument: f_7180 
o|dropping unused closure argument: f_7195 
o|dropping unused closure argument: f_7332 
*/
/* end of file */
